#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0087[4096] = {
    1, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4,
    0, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0,
    0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0,
    0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0, 19, 0, 0, 0, 0, 20, 0,
    0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 23, 0, 24, 0, 25, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 29,
    0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0,
    0, 34, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 42, 0, 0, 43, 0,
    0, 44, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0,
    0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55,
    0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 57, 0, 0, 58, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0,
    61, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0,
    65, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0,
    0, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    75, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 78, 0, 0, 0, 79, 0, 0, 80, 0, 0, 81, 0, 0, 0, 0, 82,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 88, 0,
    0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0,
    0, 95, 0, 0, 96, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0,
    102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0,
    106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 110, 0,
    0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0,
    0, 0, 0, 119, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    123, 0, 124, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0,
    0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 135, 0, 0, 0, 0,
    136, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0,
    0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 148, 0,
    0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0,
    0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 157, 0, 158, 0, 0, 0, 0,
    159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 162, 0, 163, 0, 0, 0, 164,
    0, 165, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 167, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 170,
    0, 0, 0, 171, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0,
    179, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 185, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 187, 0, 188, 0, 0,
    0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0,
    192, 0, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0,
    0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 220, 0, 0, 221, 0, 0, 222, 0, 0, 223, 0, 0, 224, 0, 0, 225, 0, 0, 226,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0,
    0, 0, 0, 232, 0, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 237, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0,
    0, 0, 0, 243, 0, 244, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0,
    258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 0, 266,
    0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0,
    0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 272, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 287,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    290, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 300,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0,
    0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 321, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0,
    326, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 331, 0, 0,
    0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0,
    335, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 338, 0, 0,
    0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 342, 0, 343, 0, 0, 0, 344, 0, 0, 0,
    345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 347, 0, 0, 0, 348, 0, 349, 0, 350, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 353, 0, 0, 354, 0, 355, 0, 0, 0,
    356, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 361, 0,
    0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 365,
    0, 0, 0, 366, 0, 0, 0, 367, 0, 0, 0, 368, 0, 0, 0, 0, 369, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0,
    379, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 0, 0, 0, 389, 0, 390, 0, 0, 0, 0, 0,
    391, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 394, 0, 0, 0, 395, 0, 0, 0, 396, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 398, 0, 0, 0, 399, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0,
    402, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0,
    0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 414, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0,
    416, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0,
    0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0,
    421, 0, 422, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0,
    0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 431, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 434, 0, 0, 0, 0, 435, 0, 0, 0, 0, 436, 0,
    0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0,
    0, 0, 0, 441, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0,
};

void unit_0087(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0031C000;
    case 2u: goto L_0031C008;
    case 3u: goto L_0031C020;
    case 4u: goto L_0031C07C;
    case 5u: goto L_0031C090;
    case 6u: goto L_0031C0A4;
    case 7u: goto L_0031C0F8;
    case 8u: goto L_0031C10C;
    case 9u: goto L_0031C128;
    case 10u: goto L_0031C158;
    case 11u: goto L_0031C170;
    case 12u: goto L_0031C1C4;
    case 13u: goto L_0031C1DC;
    case 14u: goto L_0031C1F4;
    case 15u: goto L_0031C210;
    case 16u: goto L_0031C234;
    case 17u: goto L_0031C248;
    case 18u: goto L_0031C25C;
    case 19u: goto L_0031C264;
    case 20u: goto L_0031C278;
    case 21u: goto L_0031C288;
    case 22u: goto L_0031C2A8;
    case 23u: goto L_0031C2B4;
    case 24u: goto L_0031C2BC;
    case 25u: goto L_0031C2C4;
    case 26u: goto L_0031C2D0;
    case 27u: goto L_0031C2E4;
    case 28u: goto L_0031C2F4;
    case 29u: goto L_0031C2FC;
    case 30u: goto L_0031C320;
    case 31u: goto L_0031C340;
    case 32u: goto L_0031C350;
    case 33u: goto L_0031C360;
    case 34u: goto L_0031C384;
    case 35u: goto L_0031C38C;
    case 36u: goto L_0031C3B8;
    case 37u: goto L_0031C3D0;
    case 38u: goto L_0031C410;
    case 39u: goto L_0031C41C;
    case 40u: goto L_0031C434;
    case 41u: goto L_0031C450;
    case 42u: goto L_0031C46C;
    case 43u: goto L_0031C478;
    case 44u: goto L_0031C484;
    case 45u: goto L_0031C4A0;
    case 46u: goto L_0031C4D0;
    case 47u: goto L_0031C4E4;
    case 48u: goto L_0031C4F8;
    case 49u: goto L_0031C50C;
    case 50u: goto L_0031C540;
    case 51u: goto L_0031C58C;
    case 52u: goto L_0031C59C;
    case 53u: goto L_0031C5B4;
    case 54u: goto L_0031C5D0;
    case 55u: goto L_0031C5FC;
    case 56u: goto L_0031C618;
    case 57u: goto L_0031C634;
    case 58u: goto L_0031C640;
    case 59u: goto L_0031C64C;
    case 60u: goto L_0031C670;
    case 61u: goto L_0031C680;
    case 62u: goto L_0031C6A4;
    case 63u: goto L_0031C6B0;
    case 64u: goto L_0031C6DC;
    case 65u: goto L_0031C700;
    case 66u: goto L_0031C71C;
    case 67u: goto L_0031C730;
    case 68u: goto L_0031C750;
    case 69u: goto L_0031C76C;
    case 70u: goto L_0031C790;
    case 71u: goto L_0031C7A0;
    case 72u: goto L_0031C7B0;
    case 73u: goto L_0031C7C0;
    case 74u: goto L_0031C7D0;
    case 75u: goto L_0031C900;
    case 76u: goto L_0031C924;
    case 77u: goto L_0031C938;
    case 78u: goto L_0031C940;
    case 79u: goto L_0031C950;
    case 80u: goto L_0031C95C;
    case 81u: goto L_0031C968;
    case 82u: goto L_0031C97C;
    case 83u: goto L_0031C9A8;
    case 84u: goto L_0031C9B8;
    case 85u: goto L_0031C9C8;
    case 86u: goto L_0031C9D8;
    case 87u: goto L_0031C9E8;
    case 88u: goto L_0031C9F8;
    case 89u: goto L_0031CA08;
    case 90u: goto L_0031CA20;
    case 91u: goto L_0031CA34;
    case 92u: goto L_0031CB50;
    case 93u: goto L_0031CB60;
    case 94u: goto L_0031CB70;
    case 95u: goto L_0031CB84;
    case 96u: goto L_0031CB90;
    case 97u: goto L_0031CB9C;
    case 98u: goto L_0031CBB0;
    case 99u: goto L_0031CBC0;
    case 100u: goto L_0031CBD0;
    case 101u: goto L_0031CBF0;
    case 102u: goto L_0031CC00;
    case 103u: goto L_0031CC20;
    case 104u: goto L_0031CC40;
    case 105u: goto L_0031CC60;
    case 106u: goto L_0031CC80;
    case 107u: goto L_0031CCB0;
    case 108u: goto L_0031CCC8;
    case 109u: goto L_0031CCE0;
    case 110u: goto L_0031CCF8;
    case 111u: goto L_0031CD10;
    case 112u: goto L_0031CD58;
    case 113u: goto L_0031CD80;
    case 114u: goto L_0031CDC0;
    case 115u: goto L_0031CDE8;
    case 116u: goto L_0031CE30;
    case 117u: goto L_0031CE50;
    case 118u: goto L_0031CEF0;
    case 119u: goto L_0031CF0C;
    case 120u: goto L_0031CF14;
    case 121u: goto L_0031CF3C;
    case 122u: goto L_0031CF50;
    case 123u: goto L_0031CF80;
    case 124u: goto L_0031CF88;
    case 125u: goto L_0031CF90;
    case 126u: goto L_0031CFA0;
    case 127u: goto L_0031CFBC;
    case 128u: goto L_0031CFC4;
    case 129u: goto L_0031CFEC;
    case 130u: goto L_0031D010;
    case 131u: goto L_0031D020;
    case 132u: goto L_0031D030;
    case 133u: goto L_0031D048;
    case 134u: goto L_0031D060;
    case 135u: goto L_0031D06C;
    case 136u: goto L_0031D080;
    case 137u: goto L_0031D090;
    case 138u: goto L_0031D0A0;
    case 139u: goto L_0031D0C0;
    case 140u: goto L_0031D0DC;
    case 141u: goto L_0031D0F0;
    case 142u: goto L_0031D128;
    case 143u: goto L_0031D14C;
    case 144u: goto L_0031D16C;
    case 145u: goto L_0031D188;
    case 146u: goto L_0031D1A0;
    case 147u: goto L_0031D1EC;
    case 148u: goto L_0031D1F8;
    case 149u: goto L_0031D204;
    case 150u: goto L_0031D21C;
    case 151u: goto L_0031D240;
    case 152u: goto L_0031D25C;
    case 153u: goto L_0031D270;
    case 154u: goto L_0031D294;
    case 155u: goto L_0031D2C0;
    case 156u: goto L_0031D2D0;
    case 157u: goto L_0031D2E4;
    case 158u: goto L_0031D2EC;
    case 159u: goto L_0031D300;
    case 160u: goto L_0031D328;
    case 161u: goto L_0031D350;
    case 162u: goto L_0031D364;
    case 163u: goto L_0031D36C;
    case 164u: goto L_0031D37C;
    case 165u: goto L_0031D384;
    case 166u: goto L_0031D3A0;
    case 167u: goto L_0031D3BC;
    case 168u: goto L_0031D3C8;
    case 169u: goto L_0031D3E0;
    case 170u: goto L_0031D3FC;
    case 171u: goto L_0031D40C;
    case 172u: goto L_0031D414;
    case 173u: goto L_0031D440;
    case 174u: goto L_0031D454;
    case 175u: goto L_0031D464;
    case 176u: goto L_0031D4C0;
    case 177u: goto L_0031D4DC;
    case 178u: goto L_0031D4EC;
    case 179u: goto L_0031D500;
    case 180u: goto L_0031D510;
    case 181u: goto L_0031D52C;
    case 182u: goto L_0031D564;
    case 183u: goto L_0031D594;
    case 184u: goto L_0031D5AC;
    case 185u: goto L_0031D5B4;
    case 186u: goto L_0031D5D0;
    case 187u: goto L_0031D5EC;
    case 188u: goto L_0031D5F4;
    case 189u: goto L_0031D618;
    case 190u: goto L_0031D640;
    case 191u: goto L_0031D65C;
    case 192u: goto L_0031D680;
    case 193u: goto L_0031D698;
    case 194u: goto L_0031D6A8;
    case 195u: goto L_0031D6C0;
    case 196u: goto L_0031D708;
    case 197u: goto L_0031D730;
    case 198u: goto L_0031D748;
    case 199u: goto L_0031D788;
    case 200u: goto L_0031D7A4;
    case 201u: goto L_0031D7AC;
    case 202u: goto L_0031D7D0;
    case 203u: goto L_0031D800;
    case 204u: goto L_0031D890;
    case 205u: goto L_0031D8C0;
    case 206u: goto L_0031D8F0;
    case 207u: goto L_0031D928;
    case 208u: goto L_0031D968;
    case 209u: goto L_0031D998;
    case 210u: goto L_0031D9D0;
    case 211u: goto L_0031DA24;
    case 212u: goto L_0031DA34;
    case 213u: goto L_0031DA4C;
    case 214u: goto L_0031DA70;
    case 215u: goto L_0031DA84;
    case 216u: goto L_0031DAC0;
    case 217u: goto L_0031DAF0;
    case 218u: goto L_0031DB30;
    case 219u: goto L_0031DBA8;
    case 220u: goto L_0031DBB4;
    case 221u: goto L_0031DBC0;
    case 222u: goto L_0031DBCC;
    case 223u: goto L_0031DBD8;
    case 224u: goto L_0031DBE4;
    case 225u: goto L_0031DBF0;
    case 226u: goto L_0031DBFC;
    case 227u: goto L_0031DC48;
    case 228u: goto L_0031DC58;
    case 229u: goto L_0031DCA4;
    case 230u: goto L_0031DCB4;
    case 231u: goto L_0031DCF4;
    case 232u: goto L_0031DD0C;
    case 233u: goto L_0031DD20;
    case 234u: goto L_0031DD30;
    case 235u: goto L_0031DD3C;
    case 236u: goto L_0031DD60;
    case 237u: goto L_0031DD78;
    case 238u: goto L_0031DDE0;
    case 239u: goto L_0031DE14;
    case 240u: goto L_0031DE40;
    case 241u: goto L_0031DE7C;
    case 242u: goto L_0031DEF4;
    case 243u: goto L_0031DF0C;
    case 244u: goto L_0031DF14;
    case 245u: goto L_0031DF20;
    case 246u: goto L_0031DF80;
    case 247u: goto L_0031DFB0;
    case 248u: goto L_0031E008;
    case 249u: goto L_0031E02C;
    case 250u: goto L_0031E05C;
    case 251u: goto L_0031E090;
    case 252u: goto L_0031E0C8;
    case 253u: goto L_0031E0E8;
    case 254u: goto L_0031E11C;
    case 255u: goto L_0031E12C;
    case 256u: goto L_0031E140;
    case 257u: goto L_0031E15C;
    case 258u: goto L_0031E180;
    case 259u: goto L_0031E1B8;
    case 260u: goto L_0031E1CC;
    case 261u: goto L_0031E1D4;
    case 262u: goto L_0031E200;
    case 263u: goto L_0031E238;
    case 264u: goto L_0031E258;
    case 265u: goto L_0031E268;
    case 266u: goto L_0031E27C;
    case 267u: goto L_0031E298;
    case 268u: goto L_0031E2C0;
    case 269u: goto L_0031E2F8;
    case 270u: goto L_0031E310;
    case 271u: goto L_0031E344;
    case 272u: goto L_0031E38C;
    case 273u: goto L_0031E398;
    case 274u: goto L_0031E3C0;
    case 275u: goto L_0031E3E0;
    case 276u: goto L_0031E450;
    case 277u: goto L_0031E4C0;
    case 278u: goto L_0031E4F8;
    case 279u: goto L_0031E53C;
    case 280u: goto L_0031E578;
    case 281u: goto L_0031E60C;
    case 282u: goto L_0031E668;
    case 283u: goto L_0031E690;
    case 284u: goto L_0031E6B0;
    case 285u: goto L_0031E6D0;
    case 286u: goto L_0031E6F0;
    case 287u: goto L_0031E6FC;
    case 288u: goto L_0031E750;
    case 289u: goto L_0031E7B4;
    case 290u: goto L_0031E800;
    case 291u: goto L_0031E818;
    case 292u: goto L_0031E860;
    case 293u: goto L_0031E910;
    case 294u: goto L_0031E928;
    case 295u: goto L_0031E980;
    case 296u: goto L_0031E9AC;
    case 297u: goto L_0031E9C4;
    case 298u: goto L_0031EA30;
    case 299u: goto L_0031EA60;
    case 300u: goto L_0031EA7C;
    case 301u: goto L_0031EAC0;
    case 302u: goto L_0031EAF0;
    case 303u: goto L_0031EB0C;
    case 304u: goto L_0031EB50;
    case 305u: goto L_0031EB68;
    case 306u: goto L_0031EBA0;
    case 307u: goto L_0031EBB0;
    case 308u: goto L_0031EBE0;
    case 309u: goto L_0031ECE0;
    case 310u: goto L_0031EDF0;
    case 311u: goto L_0031EE20;
    case 312u: goto L_0031EE80;
    case 313u: goto L_0031EEA8;
    case 314u: goto L_0031EEC0;
    case 315u: goto L_0031EED8;
    case 316u: goto L_0031EF20;
    case 317u: goto L_0031EF50;
    case 318u: goto L_0031EF7C;
    case 319u: goto L_0031EFB0;
    case 320u: goto L_0031EFD8;
    case 321u: goto L_0031EFF0;
    case 322u: goto L_0031F030;
    case 323u: goto L_0031F040;
    case 324u: goto L_0031F060;
    case 325u: goto L_0031F070;
    case 326u: goto L_0031F080;
    case 327u: goto L_0031F0A0;
    case 328u: goto L_0031F0B0;
    case 329u: goto L_0031F0C0;
    case 330u: goto L_0031F0E0;
    case 331u: goto L_0031F0F4;
    case 332u: goto L_0031F114;
    case 333u: goto L_0031F130;
    case 334u: goto L_0031F16C;
    case 335u: goto L_0031F180;
    case 336u: goto L_0031F190;
    case 337u: goto L_0031F1E0;
    case 338u: goto L_0031F1F4;
    case 339u: goto L_0031F210;
    case 340u: goto L_0031F22C;
    case 341u: goto L_0031F23C;
    case 342u: goto L_0031F258;
    case 343u: goto L_0031F260;
    case 344u: goto L_0031F270;
    case 345u: goto L_0031F280;
    case 346u: goto L_0031F2D0;
    case 347u: goto L_0031F304;
    case 348u: goto L_0031F314;
    case 349u: goto L_0031F31C;
    case 350u: goto L_0031F324;
    case 351u: goto L_0031F330;
    case 352u: goto L_0031F354;
    case 353u: goto L_0031F35C;
    case 354u: goto L_0031F368;
    case 355u: goto L_0031F370;
    case 356u: goto L_0031F380;
    case 357u: goto L_0031F394;
    case 358u: goto L_0031F3D0;
    case 359u: goto L_0031F410;
    case 360u: goto L_0031F468;
    case 361u: goto L_0031F478;
    case 362u: goto L_0031F490;
    case 363u: goto L_0031F4B0;
    case 364u: goto L_0031F4E8;
    case 365u: goto L_0031F4FC;
    case 366u: goto L_0031F50C;
    case 367u: goto L_0031F51C;
    case 368u: goto L_0031F52C;
    case 369u: goto L_0031F540;
    case 370u: goto L_0031F550;
    case 371u: goto L_0031F56C;
    case 372u: goto L_0031F598;
    case 373u: goto L_0031F5B0;
    case 374u: goto L_0031F5CC;
    case 375u: goto L_0031F5E0;
    case 376u: goto L_0031F60C;
    case 377u: goto L_0031F63C;
    case 378u: goto L_0031F668;
    case 379u: goto L_0031F680;
    case 380u: goto L_0031F6A0;
    case 381u: goto L_0031F6CC;
    case 382u: goto L_0031F6FC;
    case 383u: goto L_0031F728;
    case 384u: goto L_0031F740;
    case 385u: goto L_0031F760;
    case 386u: goto L_0031F7A0;
    case 387u: goto L_0031F7B8;
    case 388u: goto L_0031F7C8;
    case 389u: goto L_0031F7E0;
    case 390u: goto L_0031F7E8;
    case 391u: goto L_0031F800;
    case 392u: goto L_0031F810;
    case 393u: goto L_0031F838;
    case 394u: goto L_0031F850;
    case 395u: goto L_0031F860;
    case 396u: goto L_0031F870;
    case 397u: goto L_0031F898;
    case 398u: goto L_0031F8B0;
    case 399u: goto L_0031F8C0;
    case 400u: goto L_0031F8D0;
    case 401u: goto L_0031F8F0;
    case 402u: goto L_0031F900;
    case 403u: goto L_0031F920;
    case 404u: goto L_0031F934;
    case 405u: goto L_0031F950;
    case 406u: goto L_0031F978;
    case 407u: goto L_0031F9A0;
    case 408u: goto L_0031F9C0;
    case 409u: goto L_0031F9D4;
    case 410u: goto L_0031F9F8;
    case 411u: goto L_0031FA18;
    case 412u: goto L_0031FA80;
    case 413u: goto L_0031FAC0;
    case 414u: goto L_0031FACC;
    case 415u: goto L_0031FAE4;
    case 416u: goto L_0031FB00;
    case 417u: goto L_0031FB20;
    case 418u: goto L_0031FB68;
    case 419u: goto L_0031FB84;
    case 420u: goto L_0031FBEC;
    case 421u: goto L_0031FC00;
    case 422u: goto L_0031FC08;
    case 423u: goto L_0031FC20;
    case 424u: goto L_0031FC40;
    case 425u: goto L_0031FC74;
    case 426u: goto L_0031FC98;
    case 427u: goto L_0031FCD8;
    case 428u: goto L_0031FD18;
    case 429u: goto L_0031FD3C;
    case 430u: goto L_0031FD5C;
    case 431u: goto L_0031FD84;
    case 432u: goto L_0031FD8C;
    case 433u: goto L_0031FEBC;
    case 434u: goto L_0031FED0;
    case 435u: goto L_0031FEE4;
    case 436u: goto L_0031FEF8;
    case 437u: goto L_0031FF10;
    case 438u: goto L_0031FF28;
    case 439u: goto L_0031FF50;
    case 440u: goto L_0031FF74;
    case 441u: goto L_0031FF8C;
    case 442u: goto L_0031FF94;
    case 443u: goto L_0031FFF0;
    default: bad_entry(c, 0x0031C000u); return;
    }
L_0031C000:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0031C00C; } }
L_0031C008:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0031C00C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0031C020:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 6344u);
    c.r[12].d[0] = ld64((c.r[2].w[0]));
    set32(c.r[13], c.r[29].w[0] + 16u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] - 6336u);
    set32(c.r[11], c.r[29].w[0] + 28u);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 14u);
    c.r[8].d[0] = 0ull + 0ull;
    st64((c.r[13].w[0]), c.r[12].d[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[29].w[0]);
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[10].w[0])));
    st16((c.r[11].w[0]), static_cast<std::uint16_t>(c.r[10].w[0]));
    st32((c.r[4].w[0] + 552u), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 28u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C07Cu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 267u, depth + 1u); else { c.pc = 0x0016A910u; return; } if (c.pc != 0x0031C07Cu) [[unlikely]] return; }
L_0031C07C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031C090:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C0A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 39u, depth + 1u); else { c.pc = 0x001486F0u; return; } if (c.pc != 0x0031C0A4u) [[unlikely]] return; }
L_0031C0A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 18880u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 40u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[3], c.r[2].w[0] - c.r[4].w[0]);
    c.budget -= 11;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));  if (t) { goto L_0031C0D8; } }
    set32(c.r[2], c.r[3].w[0] + 31u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 2;
L_0031C0D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0031C138; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0031C104; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0031C0F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C0F8u); set32(c.r[4], c.r[4].w[0] - 16u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0031C0F8u) [[unlikely]] return; }
L_0031C0F8:
    st32((c.r[16].w[0] + 40u), 0u);
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 32u), 0u);
    c.budget -= 3;
L_0031C104:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C10Cu); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0031C10Cu) [[unlikely]] return; }
L_0031C10C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00180000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 176u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 32u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C128u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0000(c, 94u, depth + 1u); else { c.pc = 0x001008C0u; return; } if (c.pc != 0x0031C128u) [[unlikely]] return; }
L_0031C128:
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + 32u);
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 4;
L_0031C138:
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 13464u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 32u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C158u); st32((c.r[16].w[0] + 40u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 45u, depth + 1u); else { c.pc = 0x001487B0u; return; } if (c.pc != 0x0031C158u) [[unlikely]] return; }
L_0031C158:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031C170:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0031C1F4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[17].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] + 18880u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_0031C1D0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0031C1D4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031C1D0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[2].w[0] - 16u);  if (t) { goto L_0031C1C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C1C4u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0031C1C4u) [[unlikely]] return; }
L_0031C1C4:
    st32((c.r[17].w[0] + 40u), 0u);
    st32((c.r[17].w[0] + 36u), 0u);
    st32((c.r[17].w[0] + 32u), 0u);
    c.budget -= 3;
L_0031C1D0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0031C1D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C1DCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 42u, depth + 1u); else { c.pc = 0x00148750u; return; } if (c.pc != 0x0031C1DCu) [[unlikely]] return; }
L_0031C1DC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0031C1F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C1F4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0031C1F4u) [[unlikely]] return; }
L_0031C1F4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0031C1F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0031C210:
    set32(c.r[29], c.r[29].w[0] - 2304u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C234u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x0031C234u) [[unlikely]] return; }
L_0031C234:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C248u); st32((c.r[29].w[0] + 2300u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0031C248u) [[unlikely]] return; }
L_0031C248:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 2280u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C25Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 125u, depth + 1u); else { c.pc = 0x0015D850u; return; } if (c.pc != 0x0031C25Cu) [[unlikely]] return; }
L_0031C25C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C264u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0031C264u) [[unlikely]] return; }
L_0031C264:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0031C278; } }
    set32(c.r[5], c.r[29].w[0] + 2280u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C278u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 127u, depth + 1u); else { c.pc = 0x0015D890u; return; } if (c.pc != 0x0031C278u) [[unlikely]] return; }
L_0031C278:
    st32((c.r[29].w[0] + 2296u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 2296u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C288u); set32(c.r[5], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0025(c, 350u, depth + 1u); else { c.pc = 0x00197140u; return; } if (c.pc != 0x0031C288u) [[unlikely]] return; }
L_0031C288:
    set32(c.r[3], 0u + 13408u);
    set32(c.r[2], 0u + 13439u);
    st16((c.r[29].w[0] + 2292u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[29].w[0] + 64u);
    st16((c.r[29].w[0] + 2294u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[29].w[0] + 2292u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C2A8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0020(c, 15u, depth + 1u); else { c.pc = 0x001801C0u; return; } if (c.pc != 0x0031C2A8u) [[unlikely]] return; }
L_0031C2A8:
    set32(c.r[5], c.r[18].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C2B4u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0020(c, 43u, depth + 1u); else { c.pc = 0x00180690u; return; } if (c.pc != 0x0031C2B4u) [[unlikely]] return; }
L_0031C2B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C2BCu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0020(c, 46u, depth + 1u); else { c.pc = 0x00180720u; return; } if (c.pc != 0x0031C2BCu) [[unlikely]] return; }
L_0031C2BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C2C4u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0020(c, 48u, depth + 1u); else { c.pc = 0x00180760u; return; } if (c.pc != 0x0031C2C4u) [[unlikely]] return; }
L_0031C2C4:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C2D0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0020(c, 26u, depth + 1u); else { c.pc = 0x00180340u; return; } if (c.pc != 0x0031C2D0u) [[unlikely]] return; }
L_0031C2D0:
    set32(c.r[4], ld32((c.r[29].w[0] + 2296u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_0031C2E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C2E4u);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x0031C2E4u) [[unlikely]] return; }
L_0031C2E4:
    set32(c.r[4], c.r[29].w[0] + 2280u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C2F4u); st32((c.r[29].w[0] + 2296u), 0u);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x0031C2F4u) [[unlikely]] return; }
L_0031C2F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C2FCu); set32(c.r[4], ld32((c.r[29].w[0] + 2300u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0031C2FCu) [[unlikely]] return; }
L_0031C2FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 2304u);  c.pc = t; return; }
L_0031C320:
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[3], c.r[5].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));  c.pc = t; return; }
L_0031C340:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00318D10u | kUnwind; return; } [[clang::musttail]] return unit_0086(c, 116u, depth); }
L_0031C350:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00317550u | kUnwind; return; } [[clang::musttail]] return unit_0085(c, 376u, depth); }
L_0031C360:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C384u); c.r[6].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 297u, depth + 1u); else { c.pc = 0x001A78D0u; return; } if (c.pc != 0x0031C384u) [[unlikely]] return; }
L_0031C384:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C38Cu); set32(c.r[4], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_0012(c, 39u, depth + 1u); else { c.pc = 0x001486F0u; return; } if (c.pc != 0x0031C38Cu) [[unlikely]] return; }
L_0031C38C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 19072u);
    set32(c.r[2], c.r[2].w[0] + 19084u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 48u), c.r[2].w[0]);  if (t) { goto L_0031C3B8; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C3B8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 45u, depth + 1u); else { c.pc = 0x001487B0u; return; } if (c.pc != 0x0031C3B8u) [[unlikely]] return; }
L_0031C3B8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0031C3D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0031C434; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 19072u);
    set32(c.r[2], c.r[2].w[0] + 19084u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 48u);
    st32((c.r[17].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C410u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 42u, depth + 1u); else { c.pc = 0x00148750u; return; } if (c.pc != 0x0031C410u) [[unlikely]] return; }
L_0031C410:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C41Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0029(c, 301u, depth + 1u); else { c.pc = 0x001A79B0u; return; } if (c.pc != 0x0031C41Cu) [[unlikely]] return; }
L_0031C41C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0031C438; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C434u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0031C434u) [[unlikely]] return; }
L_0031C434:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0031C438:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0031C450:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C46Cu); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0017(c, 125u, depth + 1u); else { c.pc = 0x0015D850u; return; } if (c.pc != 0x0031C46Cu) [[unlikely]] return; }
L_0031C46C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C478u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0029(c, 313u, depth + 1u); else { c.pc = 0x001A7B60u; return; } if (c.pc != 0x0031C478u) [[unlikely]] return; }
L_0031C478:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C484u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x0031C484u) [[unlikely]] return; }
L_0031C484:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0031C4A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C4D0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013C370u; return; } if (c.pc != 0x0031C4D0u) [[unlikely]] return; }
L_0031C4D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], 0u + 80u);
    set32(c.r[2], c.r[2].w[0] + 19056u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C4E4u); st32((c.r[19].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0031C4E4u) [[unlikely]] return; }
L_0031C4E4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0031C510; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C4F8u);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x0031C4F8u) [[unlikely]] return; }
L_0031C4F8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C50Cu); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 33u, depth + 1u); else { c.pc = 0x0031C360u; return; } if (c.pc != 0x0031C50Cu) [[unlikely]] return; }
L_0031C50C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0031C510:
    st32((c.r[19].w[0] + 28u), c.r[16].w[0]);
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0031C540:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0031C5B4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 19056u);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0031C58C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0031C58C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C58Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031C58Cu) [[unlikely]] return; }
L_0031C58C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C59Cu); st32((c.r[17].w[0] + 28u), 0u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x0031C59Cu) [[unlikely]] return; }
L_0031C59C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0031C5B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C5B4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0031C5B4u) [[unlikely]] return; }
L_0031C5B4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0031C5B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0031C5D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C5FCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 63u, depth + 1u); else { c.pc = 0x0031C6B0u; return; } if (c.pc != 0x0031C5FCu) [[unlikely]] return; }
L_0031C5FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_0031C64C; } }
    set32(c.r[16], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0031C644; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C618u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0031C618u) [[unlikely]] return; }
L_0031C618:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0031C638; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C634u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 45u, depth + 1u); else { c.pc = 0x0031C4A0u; return; } if (c.pc != 0x0031C634u) [[unlikely]] return; }
L_0031C634:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0031C638:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C640u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x0031C640u) [[unlikely]] return; }
L_0031C640:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0031C644:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C64Cu);  if (depth < kMaxDepth) unit_0087(c, 63u, depth + 1u); else { c.pc = 0x0031C6B0u; return; } if (c.pc != 0x0031C64Cu) [[unlikely]] return; }
L_0031C64C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0031C670:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C680u);  if (depth < kMaxDepth) unit_0087(c, 63u, depth + 1u); else { c.pc = 0x0031C6B0u; return; } if (c.pc != 0x0031C680u) [[unlikely]] return; }
L_0031C680:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0031C6A4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0031C6A4; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C6A4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031C6A4u) [[unlikely]] return; }
L_0031C6A4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0031C6B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0031C6D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0031C6F4; } }
L_0031C6D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C6DCu);  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x0031C6DCu) [[unlikely]] return; }
L_0031C6DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031C6EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_0031C6F0; } }
L_0031C6EC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0031C6F0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0031C6F4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0031C700:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[16], c.r[2].w[0] + 48u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C71Cu); set32(c.r[4], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_0011(c, 177u, depth + 1u); else { c.pc = 0x00146C10u; return; } if (c.pc != 0x0031C71Cu) [[unlikely]] return; }
L_0031C71C:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 8u);  if (t) { goto L_0031C734; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C730u);  if (depth < kMaxDepth) unit_0011(c, 182u, depth + 1u); else { c.pc = 0x00146C90u; return; } if (c.pc != 0x0031C730u) [[unlikely]] return; }
L_0031C730:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0031C734:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031C750:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 28u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C76Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x0031C76Cu) [[unlikely]] return; }
L_0031C76C:
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[16].w[0] << 5);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031C790:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 28u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001A8060u | kUnwind; return; } [[clang::musttail]] return unit_002A(c, 3u, depth); }
L_0031C7A0:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 28u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001A80A0u | kUnwind; return; } [[clang::musttail]] return unit_002A(c, 5u, depth); }
L_0031C7B0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0031C450u | kUnwind; return; } goto L_0031C450; }
L_0031C7C0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0031C3D0u | kUnwind; return; } goto L_0031C3D0; }
L_0031C7D0:
    st128((c.r[4].w[0]) & ~15u, c.r[0]);
    set32(c.r[7], 0u + 128u);
    set32(c.r[3], 0u + 36u);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { goto L_0031C8E0; } }
    set32(c.r[3], 0u + 35u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 57u);  if (t) { goto L_0031C8D4; } }
    set32(c.r[9], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[9].d[0]; set32(c.r[7], 0u + 6u);  if (t) { goto L_0031C8BC; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[7].d[0]; set32(c.r[8], 0u + 4u);  if (t) { goto L_0031C8A4; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[8].d[0]; set32(c.r[3], 0u + 9u);  if (t) { goto L_0031C898; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0031C88C; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0031C880; } }
    set32(c.r[7], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[7].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0031C874; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0031C85C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0031C848; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031C8EC; } }
L_0031C848:
    st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[3], c.r[6].w[0] + 1u);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0031C8EC; } }
L_0031C85C:
    st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[3], c.r[6].w[0] + 1u);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0031C8EC; } }
L_0031C874:
    st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(c.r[6].w[0]));  if (t) { goto L_0031C8EC; } }
L_0031C880:
    st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(c.r[6].w[0]));  if (t) { goto L_0031C8EC; } }
L_0031C88C:
    st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(c.r[6].w[0]));  if (t) { goto L_0031C8EC; } }
L_0031C898:
    st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(c.r[6].w[0]));  if (t) { goto L_0031C8EC; } }
L_0031C8A4:
    set32(c.r[5], 0u + 24u);
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0031C8EC; } }
L_0031C8BC:
    set32(c.r[5], 0u + 14u);
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0031C8EC; } }
L_0031C8D4:
    st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(c.r[6].w[0]));  if (t) { goto L_0031C8EC; } }
L_0031C8E0:
    set32(c.r[3], 0u + 58u);
    st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
L_0031C8EC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0031C900:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C924u); set32(c.r[5], 0u + 1120u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x0031C924u) [[unlikely]] return; }
L_0031C924:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 29964u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C938u); set32(c.r[6], 0u + 368u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0031C938u) [[unlikely]] return; }
L_0031C938:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C940u); set32(c.r[4], 0u + 561u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x0031C940u) [[unlikely]] return; }
L_0031C940:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 278u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C950u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x0031C950u) [[unlikely]] return; }
L_0031C950:
    set32(c.r[4], c.r[17].w[0] + 300u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C95Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x0031C95Cu) [[unlikely]] return; }
L_0031C95C:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C968u); set32(c.r[4], c.r[17].w[0] + 324u);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x0031C968u) [[unlikely]] return; }
L_0031C968:
    st8((c.r[17].w[0] + 346u), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[2], 0u + 250u);
    st32((c.r[17].w[0] + 360u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0031C98C; } }
L_0031C97C:
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st128((c.r[2].w[0] + 368u) & ~15u, c.r[0]);
    c.budget -= 4;
L_0031C98C:
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(35ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031C97Cu | kUnwind; return; } goto L_0031C97C; } }
    set32(c.r[4], c.r[17].w[0] + 368u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C9A8u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 74u, depth + 1u); else { c.pc = 0x0031C7D0u; return; } if (c.pc != 0x0031C9A8u) [[unlikely]] return; }
L_0031C9A8:
    set32(c.r[4], c.r[17].w[0] + 384u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C9B8u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 74u, depth + 1u); else { c.pc = 0x0031C7D0u; return; } if (c.pc != 0x0031C9B8u) [[unlikely]] return; }
L_0031C9B8:
    set32(c.r[4], c.r[17].w[0] + 400u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C9C8u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 74u, depth + 1u); else { c.pc = 0x0031C7D0u; return; } if (c.pc != 0x0031C9C8u) [[unlikely]] return; }
L_0031C9C8:
    set32(c.r[4], c.r[17].w[0] + 416u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C9D8u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 74u, depth + 1u); else { c.pc = 0x0031C7D0u; return; } if (c.pc != 0x0031C9D8u) [[unlikely]] return; }
L_0031C9D8:
    set32(c.r[4], c.r[17].w[0] + 432u);
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C9E8u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 74u, depth + 1u); else { c.pc = 0x0031C7D0u; return; } if (c.pc != 0x0031C9E8u) [[unlikely]] return; }
L_0031C9E8:
    set32(c.r[4], c.r[17].w[0] + 448u);
    set32(c.r[5], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C9F8u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 74u, depth + 1u); else { c.pc = 0x0031C7D0u; return; } if (c.pc != 0x0031C9F8u) [[unlikely]] return; }
L_0031C9F8:
    set32(c.r[4], c.r[17].w[0] + 464u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031CA08u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 74u, depth + 1u); else { c.pc = 0x0031C7D0u; return; } if (c.pc != 0x0031CA08u) [[unlikely]] return; }
L_0031CA08:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 928u);  if (t) { goto L_0031CA24; } }
    set32(c.r[4], c.r[17].w[0] + 480u);
    set32(c.r[5], 0u + 7u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031CA20u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 74u, depth + 1u); else { c.pc = 0x0031C7D0u; return; } if (c.pc != 0x0031CA20u) [[unlikely]] return; }
L_0031CA20:
    set32(c.r[4], c.r[17].w[0] + 928u);
    c.budget -= 1;
L_0031CA24:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031CA34u); st8((c.r[17].w[0] + 1087u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_009F(c, 85u, depth + 1u); else { c.pc = 0x0037CF30u; return; } if (c.pc != 0x0031CA34u) [[unlikely]] return; }
L_0031CA34:
    set32(c.r[4], 0u + 3837u);
    set32(c.r[3], 0u + 4139u);
    if (c.r[16].d[0] == 0) c.r[4].d[0] = c.r[3].d[0];
    c.f[1] = c.r[4].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x45610000u);
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 4484u);  if (t) { goto L_0031CA64; } }
    c.f[2] = c.f[0];
    c.budget -= 1;
L_0031CA64:
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x45610000u);  if (t) { goto L_0031CA80; } }
    c.f[2] = c.f[0];
    c.budget -= 1;
L_0031CA80:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x445D0000u);
    c.f[1] = c.r[4].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_div(c, 3u, c.f[1], c.f[0]);
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0031CAB8; } }
    c.f[3] = c.f[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 2;
L_0031CAB8:
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);  if (t) { goto L_0031CAD4; } }
    c.f[3] = c.f[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.budget -= 2;
L_0031CAD4:
    c.f[1] = c.r[3].w[0];
    c.f[2] = 0u;
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0031CB10; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1085u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0031CB2C; } }
L_0031CB10:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[1]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 1085u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 7;
L_0031CB2C:
    set32(c.r[3], 0u + 4096u);
    st16((c.r[17].w[0] + 274u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0031CB50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031CB60u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0087(c, 98u, depth + 1u); else { c.pc = 0x0031CBB0u; return; } if (c.pc != 0x0031CB60u) [[unlikely]] return; }
L_0031CB60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 6768u);  if (t) { goto L_0031CB9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031CB70u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0031CB70u) [[unlikely]] return; }
L_0031CB70:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0031CB88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031CB84u);  if (depth < kMaxDepth) unit_0087(c, 103u, depth + 1u); else { c.pc = 0x0031CC20u; return; } if (c.pc != 0x0031CB84u) [[unlikely]] return; }
L_0031CB84:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0031CB88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031CB90u);  if (depth < kMaxDepth) unit_009F(c, 79u, depth + 1u); else { c.pc = 0x0037CE80u; return; } if (c.pc != 0x0031CB90u) [[unlikely]] return; }
L_0031CB90:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031CB9Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x0031CB9Cu) [[unlikely]] return; }
L_0031CB9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031CBB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031CBC0u);  if (depth < kMaxDepth) unit_009F(c, 79u, depth + 1u); else { c.pc = 0x0037CE80u; return; } if (c.pc != 0x0031CBC0u) [[unlikely]] return; }
L_0031CBC0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x65640000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031CBD0u); c.r[5].d[0] = c.r[2].d[0] | 17475ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x0031CBD0u) [[unlikely]] return; }
L_0031CBD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031CBE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_0031CBE4; } }
L_0031CBE0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0031CBE4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0031CBF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031CC00u);  if (depth < kMaxDepth) unit_0087(c, 98u, depth + 1u); else { c.pc = 0x0031CBB0u; return; } if (c.pc != 0x0031CC00u) [[unlikely]] return; }
L_0031CC00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031CC10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 32u);  if (t) { goto L_0031CC14; } }
L_0031CC10:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0031CC14:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0031CC20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x65640000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[2].d[0] | 17475ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031CC40u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013C370u; return; } if (c.pc != 0x0031CC40u) [[unlikely]] return; }
L_0031CC40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] + 19104u);
    set32(c.r[5], 0u + 1120u);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 6752u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031CC60u); st32((c.r[16].w[0] + 6756u), 0u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x0031CC60u) [[unlikely]] return; }
L_0031CC60:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031CC80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0031CCC8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 19104u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031CCB0u); st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x0031CCB0u) [[unlikely]] return; }
L_0031CCB0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0031CCCC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031CCC8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0031CCC8u) [[unlikely]] return; }
L_0031CCC8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0031CCCC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0031CCE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031CCF8u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0087(c, 75u, depth + 1u); else { c.pc = 0x0031C900u; return; } if (c.pc != 0x0031CCF8u) [[unlikely]] return; }
L_0031CCF8:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 6752u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031CD10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], c.r[5].w[0] << 3);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[6], 0u + 1120u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 32u);
    set32(c.r[5], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[5].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 25680u);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031CD58u); set32(c.r[5], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0031CD58u) [[unlikely]] return; }
L_0031CD58:
    st8((c.r[17].w[0] + 6752u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 6756u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0031CD80:
    set32(c.r[3], c.r[5].w[0] + 86u);
    set32(c.r[2], c.r[5].w[0] << 3);
    st16((c.r[4].w[0] + 308u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[6], 0u + 1120u);
    set32(c.r[3], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + 25680u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 14;
    { set32(c.r[4], c.r[2].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001415A0u | kUnwind; return; } [[clang::musttail]] return unit_0010(c, 107u, depth); }
L_0031CDC0:
    set32(c.r[29], c.r[29].w[0] - 1168u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 6752u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0031CDF0; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 1119u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031CDE8u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0087(c, 75u, depth + 1u); else { c.pc = 0x0031C900u; return; } if (c.pc != 0x0031CDE8u) [[unlikely]] return; }
L_0031CDE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[29].w[0] + 48u);  if (t) { goto L_0031CE18; } }
L_0031CDF0:
    set32(c.r[4], ld32((c.r[16].w[0] + 6756u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] + 25680u);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[2].w[0] + 16u);
    c.budget -= 10;
L_0031CE18:
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 308u)));
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 276u)));
    set32(c.r[6], 0u + 1120u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031CE30u); st16((c.r[16].w[0] + 308u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0009(c, 37u, depth + 1u); else { c.pc = 0x00124C88u; return; } if (c.pc != 0x0031CE30u) [[unlikely]] return; }
L_0031CE30:
    st16((c.r[16].w[0] + 308u), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1168u);  c.pc = t; return; }
L_0031CE50:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 32u));
    set32(c.r[5], c.r[5].w[0] - 29964u);
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0031CE70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031CEDC; } }
L_0031CE70:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 2u));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 34u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0031CE88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031CEDC; } }
L_0031CE88:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 4u));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 36u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0031CEA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031CEDC; } }
L_0031CEA0:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 33u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0031CEB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031CEDC; } }
L_0031CEB8:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 3u));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 35u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0031CED0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031CEDC; } }
L_0031CED0:
    set32(c.r[2], ld32((c.r[4].w[0] + 392u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 250ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_0031CEDC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0031CEF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031CF0Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x0031CF0Cu) [[unlikely]] return; }
L_0031CF0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031CF14u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 173u, depth + 1u); else { c.pc = 0x0031D440u; return; } if (c.pc != 0x0031CF14u) [[unlikely]] return; }
L_0031CF14:
    set32(c.r[2], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[17].w[0] + 32u);
    set32(c.r[3], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[6], 0u + 1120u);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031CF3Cu); set32(c.r[4], c.r[2].w[0] + 1152u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0031CF3Cu) [[unlikely]] return; }
L_0031CF3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0031CF50:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], c.r[2].w[0] - c.r[5].w[0]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[6], 0u + 1120u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[2].w[0] + 1152u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031CF80u); set32(c.r[4], c.r[4].w[0] + 32u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0031CF80u) [[unlikely]] return; }
L_0031CF80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031CF88u);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x0031CF88u) [[unlikely]] return; }
L_0031CF88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031CF90u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 161u, depth + 1u); else { c.pc = 0x0031D350u; return; } if (c.pc != 0x0031CF90u) [[unlikely]] return; }
L_0031CF90:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0031CFA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031CFBCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x0031CFBCu) [[unlikely]] return; }
L_0031CFBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031CFC4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 173u, depth + 1u); else { c.pc = 0x0031D440u; return; } if (c.pc != 0x0031CFC4u) [[unlikely]] return; }
L_0031CFC4:
    set32(c.r[2], c.r[16].w[0] << 3);
    set32(c.r[4], c.r[17].w[0] + 32u);
    set32(c.r[3], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[6], 0u + 1120u);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031CFECu); set32(c.r[5], c.r[2].w[0] + 1152u);  if (depth < kMaxDepth) unit_0009(c, 37u, depth + 1u); else { c.pc = 0x00124C88u; return; } if (c.pc != 0x0031CFECu) [[unlikely]] return; }
L_0031CFEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0031D010:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D020u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x0031D020u) [[unlikely]] return; }
L_0031D020:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 400u);  if (t) { goto L_0031D06C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D030u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0031D030u) [[unlikely]] return; }
L_0031D030:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0031D04C; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D048u); set32(c.r[6], 0u + 15312u);  if (depth < kMaxDepth) unit_0087(c, 139u, depth + 1u); else { c.pc = 0x0031D0C0u; return; } if (c.pc != 0x0031D048u) [[unlikely]] return; }
L_0031D048:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0031D04C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031D058; } }
    set32(c.r[16], c.r[16].w[0] + 312u);
    c.budget -= 1;
L_0031D058:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D060u);  if (depth < kMaxDepth) unit_009F(c, 79u, depth + 1u); else { c.pc = 0x0037CE80u; return; } if (c.pc != 0x0031D060u) [[unlikely]] return; }
L_0031D060:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D06Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x0031D06Cu) [[unlikely]] return; }
L_0031D06C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031D080:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D090u);  if (depth < kMaxDepth) unit_009F(c, 79u, depth + 1u); else { c.pc = 0x0037CE80u; return; } if (c.pc != 0x0031D090u) [[unlikely]] return; }
L_0031D090:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x65640000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D0A0u); c.r[5].d[0] = c.r[2].d[0] | 19527ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x0031D0A0u) [[unlikely]] return; }
L_0031D0A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031D0B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_0031D0B4; } }
L_0031D0B0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0031D0B4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0031D0C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D0DCu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 373u, depth + 1u); else { c.pc = 0x001A3AD0u; return; } if (c.pc != 0x0031D0DCu) [[unlikely]] return; }
L_0031D0DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x65640000u);
    set32(c.r[4], c.r[17].w[0] + 312u);
    c.r[5].d[0] = c.r[2].d[0] | 19527ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D0F0u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013C370u; return; } if (c.pc != 0x0031D0F0u) [[unlikely]] return; }
L_0031D0F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 19120u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x001A0000u);
    set32(c.r[2], c.r[2].w[0] + 19140u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 344u);
    st32((c.r[17].w[0] + 336u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 3680u);
    set32(c.r[6], c.r[6].w[0] + 3584u);
    set32(c.r[7], 0u + 16u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D128u); set32(c.r[8], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 89u, depth + 1u); else { c.pc = 0x00100790u; return; } if (c.pc != 0x0031D128u) [[unlikely]] return; }
L_0031D128:
    st32((c.r[17].w[0] + 376u), 0u);
    st8((c.r[17].w[0] + 380u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 381u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 384u), 0u);
    st32((c.r[17].w[0] + 388u), 0u);
    st8((c.r[17].w[0] + 392u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 393u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D14Cu); st8((c.r[17].w[0] + 394u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x0031D14Cu) [[unlikely]] return; }
L_0031D14C:
    set32(c.r[6], 0u + 256u);
    st32((c.r[17].w[0] + 300u), c.r[2].w[0]);
    set32(c.r[4], c.r[17].w[0] + 344u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D16Cu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0028(c, 153u, depth + 1u); else { c.pc = 0x001A0E70u; return; } if (c.pc != 0x0031D16Cu) [[unlikely]] return; }
L_0031D16C:
    set32(c.r[8], c.r[16].w[0] + 1024u);
    set32(c.r[4], c.r[17].w[0] + 360u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 256u);
    set32(c.r[7], 0u + 128u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D188u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0028(c, 153u, depth + 1u); else { c.pc = 0x001A0E70u; return; } if (c.pc != 0x0031D188u) [[unlikely]] return; }
L_0031D188:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0031D1A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0031D21C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 19120u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001A0000u);
    set32(c.r[2], c.r[2].w[0] + 19140u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 344u);
    st32((c.r[17].w[0] + 336u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 3584u);
    set32(c.r[6], 0u + 16u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D1ECu); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 86u, depth + 1u); else { c.pc = 0x00100720u; return; } if (c.pc != 0x0031D1ECu) [[unlikely]] return; }
L_0031D1EC:
    set32(c.r[4], c.r[17].w[0] + 312u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D1F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x0031D1F8u) [[unlikely]] return; }
L_0031D1F8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D204u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0028(c, 384u, depth + 1u); else { c.pc = 0x001A3C40u; return; } if (c.pc != 0x0031D204u) [[unlikely]] return; }
L_0031D204:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0031D220; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D21Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0031D21Cu) [[unlikely]] return; }
L_0031D21C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0031D220:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0031D240:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D25Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0028(c, 392u, depth + 1u); else { c.pc = 0x001A3D20u; return; } if (c.pc != 0x0031D25Cu) [[unlikely]] return; }
L_0031D25C:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 392u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0031D334; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D270u);  if (depth < kMaxDepth) unit_007A(c, 321u, depth + 1u); else { c.pc = 0x002EA9B0u; return; } if (c.pc != 0x0031D270u) [[unlikely]] return; }
L_0031D270:
    set32(c.r[4], ld32((c.r[17].w[0] + 276u)));
    set32(c.r[3], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0031D294; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 284u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0031D294; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D294u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_007A(c, 387u, depth + 1u); else { c.pc = 0x002EB060u; return; } if (c.pc != 0x0031D294u) [[unlikely]] return; }
L_0031D294:
    set32(c.r[3], ld32((c.r[17].w[0] + 276u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0031D334; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 393u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0031D2D0; } }
    set32(c.r[18], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0031D2D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D2C0u);  if (depth < kMaxDepth) unit_0096(c, 432u, depth + 1u); else { c.pc = 0x0035BD30u; return; } if (c.pc != 0x0031D2C0u) [[unlikely]] return; }
L_0031D2C0:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 7u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D2D0u); set32(c.r[5], c.r[3].w[0] - 1u);  if (depth < kMaxDepth) unit_0096(c, 447u, depth + 1u); else { c.pc = 0x0035BF40u; return; } if (c.pc != 0x0031D2D0u) [[unlikely]] return; }
L_0031D2D0:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 394u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0031D2EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D2E4u);  if (depth < kMaxDepth) unit_0096(c, 432u, depth + 1u); else { c.pc = 0x0035BD30u; return; } if (c.pc != 0x0031D2E4u) [[unlikely]] return; }
L_0031D2E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D2ECu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0097(c, 16u, depth + 1u); else { c.pc = 0x0035C180u; return; } if (c.pc != 0x0031D2ECu) [[unlikely]] return; }
L_0031D2EC:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 284u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0031D308; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D300u);  if (depth < kMaxDepth) unit_007A(c, 385u, depth + 1u); else { c.pc = 0x002EAFF0u; return; } if (c.pc != 0x0031D300u) [[unlikely]] return; }
L_0031D300:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 284u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0031D328; } }
L_0031D308:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 393u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0031D320; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 394u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0031D328; } }
L_0031D320:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D328u);  if (depth < kMaxDepth) unit_007A(c, 324u, depth + 1u); else { c.pc = 0x002EA9F0u; return; } if (c.pc != 0x0031D328u) [[unlikely]] return; }
L_0031D328:
    st8((c.r[17].w[0] + 392u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 393u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 394u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_0031D334:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0031D350:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D364u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 319u, depth + 1u); else { c.pc = 0x0031EFB0u; return; } if (c.pc != 0x0031D364u) [[unlikely]] return; }
L_0031D364:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D36Cu); st32((c.r[16].w[0] + 288u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0087(c, 101u, depth + 1u); else { c.pc = 0x0031CBF0u; return; } if (c.pc != 0x0031D36Cu) [[unlikely]] return; }
L_0031D36C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D37Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0029(c, 63u, depth + 1u); else { c.pc = 0x001A4C10u; return; } if (c.pc != 0x0031D37Cu) [[unlikely]] return; }
L_0031D37C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D384u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 330u, depth + 1u); else { c.pc = 0x0031F0E0u; return; } if (c.pc != 0x0031D384u) [[unlikely]] return; }
L_0031D384:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 392u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 393u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031D3A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D3BCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0087(c, 319u, depth + 1u); else { c.pc = 0x0031EFB0u; return; } if (c.pc != 0x0031D3BCu) [[unlikely]] return; }
L_0031D3BC:
    st32((c.r[18].w[0] + 288u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0031D3E8; } }
L_0031D3C8:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[2].w[0] + 8u);  if (t) { goto L_0031D3E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D3E0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 238u, depth + 1u); else { c.pc = 0x001A2390u; return; } if (c.pc != 0x0031D3E0u) [[unlikely]] return; }
L_0031D3E0:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_0031D3E8:
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(37ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031D3C8u | kUnwind; return; } goto L_0031D3C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D3FCu);  if (depth < kMaxDepth) unit_0087(c, 101u, depth + 1u); else { c.pc = 0x0031CBF0u; return; } if (c.pc != 0x0031D3FCu) [[unlikely]] return; }
L_0031D3FC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D40Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0029(c, 63u, depth + 1u); else { c.pc = 0x001A4C10u; return; } if (c.pc != 0x0031D40Cu) [[unlikely]] return; }
L_0031D40C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D414u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 330u, depth + 1u); else { c.pc = 0x0031F0E0u; return; } if (c.pc != 0x0031D414u) [[unlikely]] return; }
L_0031D414:
    set32(c.r[3], 0u + 1u);
    st8((c.r[18].w[0] + 392u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[18].w[0] + 393u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[18].w[0] + 394u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0031D440:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D454u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 101u, depth + 1u); else { c.pc = 0x0031CBF0u; return; } if (c.pc != 0x0031D454u) [[unlikely]] return; }
L_0031D454:
    set32(c.r[3], ld32((c.r[16].w[0] + 272u)));
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[2].w[0] + 1087u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[5].w[0] << 2);
    c.budget -= 4;
L_0031D464:
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0031D488; } }
    ld128((c.r[3].w[0]) & ~15u, c.r[4]);
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st128((c.r[3].w[0] + 368u) & ~15u, c.r[4]);  if (t) { goto L_0031D494; } }
L_0031D488:
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    st128((c.r[3].w[0] + 368u) & ~15u, c.r[0]);
    c.budget -= 3;
L_0031D494:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[5].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031D464u | kUnwind; return; } goto L_0031D464; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031D4C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D4DCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 319u, depth + 1u); else { c.pc = 0x0031EFB0u; return; } if (c.pc != 0x0031D4DCu) [[unlikely]] return; }
L_0031D4DC:
    st32((c.r[17].w[0] + 288u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D4ECu); st32((c.r[17].w[0] + 292u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0087(c, 180u, depth + 1u); else { c.pc = 0x0031D510u; return; } if (c.pc != 0x0031D4ECu) [[unlikely]] return; }
L_0031D4EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0031D500:
    set32(c.r[2], ld32((c.r[4].w[0] + 292u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { if (c.r[2].d[0] != 0) c.r[5].d[0] = 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0031D4C0u | kUnwind; return; } goto L_0031D4C0; }
L_0031D510:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0031D57C; } }
L_0031D52C:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0031D578; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 13u));
    c.r[2].d[0] = c.r[3].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].d[0] << 56;  if (t) { goto L_0031D55C; } }
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031D578; } }
L_0031D55C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D564u);  if (depth < kMaxDepth) unit_0028(c, 358u, depth + 1u); else { c.pc = 0x001A3760u; return; } if (c.pc != 0x0031D564u) [[unlikely]] return; }
L_0031D564:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031D578; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0031D588; } }
L_0031D578:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0031D57C:
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(37ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031D52Cu | kUnwind; return; } goto L_0031D52C; } }
L_0031D588:
    set32(c.r[16], ld32((c.r[17].w[0] + 288u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D594u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 319u, depth + 1u); else { c.pc = 0x0031EFB0u; return; } if (c.pc != 0x0031D594u) [[unlikely]] return; }
L_0031D594:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[16].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0031D5A4; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0031D5A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D5ACu);  if (depth < kMaxDepth) unit_0087(c, 329u, depth + 1u); else { c.pc = 0x0031F0C0u; return; } if (c.pc != 0x0031D5ACu) [[unlikely]] return; }
L_0031D5AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D5B4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 330u, depth + 1u); else { c.pc = 0x0031F0E0u; return; } if (c.pc != 0x0031D5B4u) [[unlikely]] return; }
L_0031D5B4:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 392u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0031D5D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D5ECu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 48u, depth + 1u); else { c.pc = 0x001A4A00u; return; } if (c.pc != 0x0031D5ECu) [[unlikely]] return; }
L_0031D5EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(36ll) ? 1ull : 0ull;  if (t) { goto L_0031D608; } }
L_0031D5F4:
    set32(c.r[3], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(36ll) ? 1ull : 0ull;
    c.budget -= 5;
L_0031D608:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031D5F4u | kUnwind; return; } goto L_0031D5F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D618u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 330u, depth + 1u); else { c.pc = 0x0031F0E0u; return; } if (c.pc != 0x0031D618u) [[unlikely]] return; }
L_0031D618:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 392u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0031D640:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D65Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0087(c, 319u, depth + 1u); else { c.pc = 0x0031EFB0u; return; } if (c.pc != 0x0031D65Cu) [[unlikely]] return; }
L_0031D65C:
    st32((c.r[17].w[0] + 288u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 384u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 13u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D680u); c.r[5].d[0] = c.r[2].d[0] & 63ull;  if (depth < kMaxDepth) unit_0087(c, 290u, depth + 1u); else { c.pc = 0x0031E800u; return; } if (c.pc != 0x0031D680u) [[unlikely]] return; }
L_0031D680:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] > 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0031D690; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_0031D690:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;  if (t) { goto L_0031D6B0; } }
L_0031D698:
    set32(c.r[2], ld32((c.r[17].w[0] + 384u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D6A8u); set32(c.r[5], c.r[2].w[0] + c.r[18].w[0]);  if (depth < kMaxDepth) unit_0029(c, 48u, depth + 1u); else { c.pc = 0x001A4A00u; return; } if (c.pc != 0x0031D6A8u) [[unlikely]] return; }
L_0031D6A8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 2;
L_0031D6B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031D698u | kUnwind; return; } goto L_0031D698; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 384u)));  if (t) { goto L_0031D6F4; } }
L_0031D6C0:
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(37ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] << 2);  if (t) { goto L_0031D6D8; } }
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 8u), 0u);  if (t) { goto L_0031D6F0; } }
L_0031D6D8:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 6;
L_0031D6F0:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_0031D6F4:
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(36ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] + c.r[16].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031D6C0u | kUnwind; return; } goto L_0031D6C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D708u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 330u, depth + 1u); else { c.pc = 0x0031F0E0u; return; } if (c.pc != 0x0031D708u) [[unlikely]] return; }
L_0031D708:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 392u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0031D730:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 36u);  if (t) { goto L_0031D758; } }
L_0031D748:
    set32(c.r[3], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
L_0031D758:
    set32(c.r[3], ld32((c.r[16].w[0] + 384u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031D748u | kUnwind; return; } goto L_0031D748; } }
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0] + 12u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 384u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D788u); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0029(c, 43u, depth + 1u); else { c.pc = 0x001A4980u; return; } if (c.pc != 0x0031D788u) [[unlikely]] return; }
L_0031D788:
    set32(c.r[2], ld32((c.r[16].w[0] + 384u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D7A4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 260u, depth + 1u); else { c.pc = 0x001A2690u; return; } if (c.pc != 0x0031D7A4u) [[unlikely]] return; }
L_0031D7A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D7ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 330u, depth + 1u); else { c.pc = 0x0031F0E0u; return; } if (c.pc != 0x0031D7ACu) [[unlikely]] return; }
L_0031D7AC:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 392u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031D7D0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 384u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[16].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0031D7F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0031DA5C; } }
L_0031D7F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D800u);  if (depth < kMaxDepth) unit_0087(c, 319u, depth + 1u); else { c.pc = 0x0031EFB0u; return; } if (c.pc != 0x0031D800u) [[unlikely]] return; }
L_0031D800:
    st32((c.r[17].w[0] + 288u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 384u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0031D820; } }
    c.r[4].d[0] = ld8((c.r[2].w[0] + 6u));
    c.budget -= 1;
L_0031D820:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0031D838; } }
    c.r[3].d[0] = ld8((c.r[2].w[0] + 6u));
    c.budget -= 1;
L_0031D838:
    set32(c.r[2], 0u + 22u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0031D854; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0031D854; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0031D854:
    set32(c.r[2], 0u + 33u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0031D870; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0031D870; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0031D870:
    set32(c.r[2], ld32((c.r[17].w[0] + 384u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 13u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D890u); c.r[5].d[0] = c.r[2].d[0] & 63ull;  if (depth < kMaxDepth) unit_0087(c, 290u, depth + 1u); else { c.pc = 0x0031E800u; return; } if (c.pc != 0x0031D890u) [[unlikely]] return; }
L_0031D890:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0031D89C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0031D89C:
    set32(c.r[3], ld32((c.r[17].w[0] + 384u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[2].w[0] - 1u);  if (t) { goto L_0031D958; } }
    set32(c.r[5], c.r[16].w[0] - c.r[3].w[0]);
    set32(c.r[4], c.r[2].w[0] - 1u);
    set32(c.r[7], c.r[5].w[0] - c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0031D8DC; } }
L_0031D8C0:
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[29].w[0]);
    set32(c.r[5], c.r[17].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[5], ld32((c.r[5].w[0] + 8u)));
    st32((c.r[4].w[0] + 48u), c.r[5].w[0]);
    c.budget -= 7;
L_0031D8DC:
    c.r[4].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[5], c.r[3].w[0] + c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031D8C0u | kUnwind; return; } goto L_0031D8C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0031D910; } }
L_0031D8F0:
    set32(c.r[5], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[5], c.r[17].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 8u)));
    st32((c.r[4].w[0] + 8u), c.r[5].w[0]);
    c.budget -= 8;
L_0031D910:
    c.r[4].d[0] = c.r[6].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[4], c.r[3].w[0] + c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031D8F0u | kUnwind; return; } goto L_0031D8F0; } }
    set32(c.r[5], c.r[3].w[0] + c.r[7].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0031D944; } }
L_0031D928:
    set32(c.r[3], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[29].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[3].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 7;
L_0031D944:
    c.r[3].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[6].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031D928u | kUnwind; return; } goto L_0031D928; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 384u), c.r[16].w[0]);  if (t) { goto L_0031D9FC; } }
L_0031D958:
    set32(c.r[6], c.r[3].w[0] - c.r[16].w[0]);
    set32(c.r[7], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0031D984; } }
L_0031D968:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    st32((c.r[3].w[0] + 48u), c.r[4].w[0]);
    c.budget -= 7;
L_0031D984:
    c.r[3].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[7].w[0] - c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031D968u | kUnwind; return; } goto L_0031D968; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0031D9B8; } }
L_0031D998:
    set32(c.r[4], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    st32((c.r[3].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 8;
L_0031D9B8:
    c.r[3].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[7].w[0] - c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031D998u | kUnwind; return; } goto L_0031D998; } }
    set32(c.r[5], c.r[7].w[0] - c.r[6].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0031D9EC; } }
L_0031D9D0:
    set32(c.r[3], c.r[5].w[0] - c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[29].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[3].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 7;
L_0031D9EC:
    c.r[3].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[6].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031D9D0u | kUnwind; return; } goto L_0031D9D0; } }
    st32((c.r[17].w[0] + 384u), c.r[16].w[0]);
    c.budget -= 1;
L_0031D9FC:
    set32(c.r[2], ld32((c.r[17].w[0] + 384u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 13u));
    c.r[5].d[0] = c.r[2].d[0] & 63ull;
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0031DA28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DA24u);  if (depth < kMaxDepth) unit_0087(c, 293u, depth + 1u); else { c.pc = 0x0031E910u; return; } if (c.pc != 0x0031DA24u) [[unlikely]] return; }
L_0031DA24:
    st32((c.r[17].w[0] + 384u), c.r[2].w[0]);
    c.budget -= 1;
L_0031DA28:
    set32(c.r[16], ld32((c.r[17].w[0] + 288u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DA34u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 319u, depth + 1u); else { c.pc = 0x0031EFB0u; return; } if (c.pc != 0x0031DA34u) [[unlikely]] return; }
L_0031DA34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[16].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0031DA44; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0031DA44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DA4Cu);  if (depth < kMaxDepth) unit_0087(c, 330u, depth + 1u); else { c.pc = 0x0031F0E0u; return; } if (c.pc != 0x0031DA4Cu) [[unlikely]] return; }
L_0031DA4C:
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 392u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 384u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 4;
L_0031DA5C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_0031DA70:
    set32(c.r[5], ld32((c.r[4].w[0] + 272u)));
    set32(c.r[2], 0u + 7u);
    set32(c.r[3], 0u + 8u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; if (c.r[5].d[0] != 0) c.r[2].d[0] = c.r[3].d[0];  if (t) { goto L_0031DAA0; } }
L_0031DA84:
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0031DA9C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031DAB0; } }
L_0031DA9C:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_0031DAA0:
    c.r[3].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(37ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[2].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031DA84u | kUnwind; return; } goto L_0031DA84; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0031DAB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0031DAC0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DAF0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0087(c, 214u, depth + 1u); else { c.pc = 0x0031DA70u; return; } if (c.pc != 0x0031DAF0u) [[unlikely]] return; }
L_0031DAF0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != c.r[3].d[0];  if (t) { goto L_0031DB14; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0031DB0C; } }
    st32((c.r[18].w[0]), c.r[17].w[0]);
    c.budget -= 1;
L_0031DB0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_0031DDBC; } }
L_0031DB14:
    set32(c.r[6], ld32((c.r[20].w[0] + 272u)));
    set32(c.r[8], 0u + 7u);
    set32(c.r[4], 0u + 8u);
    c.r[16].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; if (c.r[6].d[0] != 0) c.r[8].d[0] = c.r[4].d[0];  if (t) { goto L_0031DB78; } }
L_0031DB30:
    set32(c.r[4], c.r[20].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; c.r[1].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(31ll) ? 1ull : 0ull;  if (t) { goto L_0031DB88; } }
    c.r[5].d[0] = ld8((c.r[4].w[0] + 6u));
    set32(c.r[4], c.r[5].w[0] - 18u);
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0031DB58; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0031DB58:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull; set32(c.r[4], c.r[5].w[0] - 26u);  if (t) { goto L_0031DB64; } }
    c.r[3].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 1;
L_0031DB64:
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0031DB74; } }
    c.r[2].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 1;
L_0031DB74:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_0031DB78:
    c.r[4].d[0] = c.r[8].d[0] < static_cast<std::uint64_t>(37ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[4], c.r[8].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031DB30u | kUnwind; return; } goto L_0031DB30; } }
    c.r[1].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(31ll) ? 1ull : 0ull;
    c.budget -= 1;
L_0031DB88:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_0031DD20; } }
    set32(c.r[4], c.r[19].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] - 13376u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x0031C000u < 16384u) { entry = entries_0087[(t - 0x0031C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0031DBA8:
    set32(c.r[16], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0031DD20; } }
L_0031DBB4:
    set32(c.r[16], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_0031DD20; } }
L_0031DBC0:
    set32(c.r[16], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 3u);  if (t) { goto L_0031DD20; } }
L_0031DBCC:
    set32(c.r[16], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0031DD20; } }
L_0031DBD8:
    set32(c.r[16], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 5u);  if (t) { goto L_0031DD20; } }
L_0031DBE4:
    set32(c.r[16], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 4u);  if (t) { goto L_0031DD20; } }
L_0031DBF0:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DBFCu); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_0087(c, 74u, depth + 1u); else { c.pc = 0x0031C7D0u; return; } if (c.pc != 0x0031DBFCu) [[unlikely]] return; }
L_0031DBFC:
    set32(c.r[4], ld32((c.r[20].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0031DC3C; } }
    c.r[3].d[0] = ld64((c.r[4].w[0]));
    c.r[2].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031DC30; } }
    c.r[3].d[0] = ld64((c.r[4].w[0] + 8u));
    c.r[2].d[0] = ld64((c.r[29].w[0] + 136u));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
L_0031DC30:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0031DD20; } }
L_0031DC3C:
    set32(c.r[16], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 6u);  if (t) { goto L_0031DD20; } }
L_0031DC48:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 112u);  if (t) { goto L_0031DD20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DC58u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_0087(c, 74u, depth + 1u); else { c.pc = 0x0031C7D0u; return; } if (c.pc != 0x0031DC58u) [[unlikely]] return; }
L_0031DC58:
    set32(c.r[4], ld32((c.r[20].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0031DC98; } }
    c.r[3].d[0] = ld64((c.r[4].w[0]));
    c.r[2].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031DC8C; } }
    c.r[3].d[0] = ld64((c.r[4].w[0] + 8u));
    c.r[2].d[0] = ld64((c.r[29].w[0] + 120u));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
L_0031DC8C:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0031DD20; } }
L_0031DC98:
    set32(c.r[16], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 7u);  if (t) { goto L_0031DD20; } }
L_0031DCA4:
    set32(c.r[3], 0u + 7u);
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; if (c.r[6].d[0] != 0) c.r[3].d[0] = c.r[2].d[0];  if (t) { goto L_0031DCE0; } }
L_0031DCB4:
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031DD20; } }
    c.r[2].d[0] = ld8((c.r[2].w[0] + 6u));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_0031DCDC; } }
    c.r[17].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 3u);  if (t) { goto L_0031DD20; } }
L_0031DCDC:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_0031DCE0:
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(37ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031DCB4u | kUnwind; return; } goto L_0031DCB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031DD20; } }
L_0031DCF4:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0031DD20; } }
    c.r[17].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 3u);  if (t) { goto L_0031DD20; } }
L_0031DD0C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0031DD20; } }
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], 0u + 3u);
    c.budget -= 2;
L_0031DD20:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0031DDAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DD30u);  if (depth < kMaxDepth) unit_0087(c, 214u, depth + 1u); else { c.pc = 0x0031DA70u; return; } if (c.pc != 0x0031DD30u) [[unlikely]] return; }
L_0031DD30:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DD3Cu); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 83u, depth + 1u); else { c.pc = 0x0037CEF0u; return; } if (c.pc != 0x0031DD3Cu) [[unlikely]] return; }
L_0031DD3C:
    set32(c.r[21], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[21].d[0] == c.r[2].d[0];  if (t) { goto L_0031DDAC; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 272u)));
    set32(c.r[19], 0u + 7u);
    set32(c.r[2], 0u + 8u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; if (c.r[3].d[0] != 0) c.r[19].d[0] = c.r[2].d[0];  if (t) { goto L_0031DDA0; } }
L_0031DD60:
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031DDAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DD78u); c.r[4].d[0] = ld8((c.r[2].w[0] + 6u));  if (depth < kMaxDepth) unit_009F(c, 83u, depth + 1u); else { c.pc = 0x0037CEF0u; return; } if (c.pc != 0x0031DD78u) [[unlikely]] return; }
L_0031DD78:
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[1].d[0] = c.r[21].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;  if (t) { goto L_0031DD9C; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0031DD9C; } }
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0031DDAC; } }
L_0031DD9C:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0031DDA0:
    c.r[2].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(37ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[19].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031DD60u | kUnwind; return; } goto L_0031DD60; } }
L_0031DDAC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0031DDB8; } }
    st32((c.r[18].w[0]), c.r[17].w[0]);
    c.budget -= 1;
L_0031DDB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_0031DDBC:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0031DDE0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[6], c.r[20].w[0] + 384u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DE14u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0087(c, 216u, depth + 1u); else { c.pc = 0x0031DAC0u; return; } if (c.pc != 0x0031DE14u) [[unlikely]] return; }
L_0031DE14:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_0031DE2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0031DF84; } }
L_0031DE2C:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 36u);  if (t) { goto L_0031DE70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[20].w[0] + 384u)));  if (t) { goto L_0031DE58; } }
L_0031DE40:
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 384u)));
    c.budget -= 6;
L_0031DE58:
    c.r[1].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031DE40u | kUnwind; return; } goto L_0031DE40; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 3;
L_0031DE70:
    set32(c.r[5], ld32((c.r[20].w[0] + 384u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DE7Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 43u, depth + 1u); else { c.pc = 0x001A4980u; return; } if (c.pc != 0x0031DE7Cu) [[unlikely]] return; }
L_0031DE7C:
    set32(c.r[2], c.r[19].w[0] - 51u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0031DEC8; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_0031DEA8; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0031DEA8; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0031DEB0; } }
L_0031DEA8:
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[2], 0u + 2u);
    c.budget -= 2;
L_0031DEB0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[19].w[0] - 14u);  if (t) { goto L_0031DEC8; } }
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0031DEC8; } }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0031DEC8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = c.r[19].sd[0] < 12ll ? 1ull : 0ull;  if (t) { goto L_0031DF80; } }
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0031DEE0; } }
    c.r[2].d[0] = c.r[19].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 1;
L_0031DEE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031DEEC; } }
    set32(c.r[16], 0u + 2u);
    c.budget -= 1;
L_0031DEEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DEF4u);  if (depth < kMaxDepth) unit_009F(c, 224u, depth + 1u); else { c.pc = 0x0037DF50u; return; } if (c.pc != 0x0031DEF4u) [[unlikely]] return; }
L_0031DEF4:
    set32(c.r[6], ld32((c.r[20].w[0] + 272u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DF0Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0037E350u; return; } if (c.pc != 0x0031DF0Cu) [[unlikely]] return; }
L_0031DF0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DF14u);  if (depth < kMaxDepth) unit_009F(c, 224u, depth + 1u); else { c.pc = 0x0037DF50u; return; } if (c.pc != 0x0031DF14u) [[unlikely]] return; }
L_0031DF14:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DF20u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009F(c, 271u, depth + 1u); else { c.pc = 0x0037E5B0u; return; } if (c.pc != 0x0031DF20u) [[unlikely]] return; }
L_0031DF20:
    c.r[3].d[0] = c.r[19].sd[0] < 12ll ? 1ull : 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0031DF38; } }
    c.r[3].d[0] = c.r[19].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 1;
L_0031DF38:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0031DF48; } }
    set32(c.r[7], c.r[2].w[0] + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0031DF48:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; c.r[10].d[0] = 0ull + 0ull;  if (t) { goto L_0031DF5C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0031DF6C; } }
L_0031DF5C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0031DF70; } }
    c.r[10].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0031DF6C:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0031DF70:
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DF80u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 247u, depth + 1u); else { c.pc = 0x0031DFB0u; return; } if (c.pc != 0x0031DF80u) [[unlikely]] return; }
L_0031DF80:
    set32(c.r[2], ld32((c.r[20].w[0] + 384u)));
    c.budget -= 1;
L_0031DF84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0031DFB0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 384u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E008u); c.r[17].d[0] = c.r[9].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 319u, depth + 1u); else { c.pc = 0x0031EFB0u; return; } if (c.pc != 0x0031E008u) [[unlikely]] return; }
L_0031E008:
    st32((c.r[22].w[0] + 288u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    c.r[10].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E02Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 262u, depth + 1u); else { c.pc = 0x001A2700u; return; } if (c.pc != 0x0031E02Cu) [[unlikely]] return; }
L_0031E02C:
    set32(c.r[2], ld32((c.r[22].w[0] + 388u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_0031E054; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 13u));
    c.r[3].d[0] = c.r[2].d[0] & 63ull;
    set32(c.r[2], 0u - 64u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 7;
L_0031E054:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E05Cu);  if (depth < kMaxDepth) unit_0087(c, 330u, depth + 1u); else { c.pc = 0x0031F0E0u; return; } if (c.pc != 0x0031E05Cu) [[unlikely]] return; }
L_0031E05C:
    set32(c.r[3], 0u + 1u);
    st8((c.r[22].w[0] + 392u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0031E090:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 384u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E0C8u); c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 319u, depth + 1u); else { c.pc = 0x0031EFB0u; return; } if (c.pc != 0x0031E0C8u) [[unlikely]] return; }
L_0031E0C8:
    st32((c.r[19].w[0] + 288u), c.r[2].w[0]);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[16].w[0] + 6u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] ^ 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E0E8u); c.r[17].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0028(c, 265u, depth + 1u); else { c.pc = 0x001A2800u; return; } if (c.pc != 0x0031E0E8u) [[unlikely]] return; }
L_0031E0E8:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_0031E11C; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031E11C; } }
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 652u)));
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E11Cu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0028(c, 357u, depth + 1u); else { c.pc = 0x001A3670u; return; } if (c.pc != 0x0031E11Cu) [[unlikely]] return; }
L_0031E11C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0031E154; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E12Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 358u, depth + 1u); else { c.pc = 0x001A3760u; return; } if (c.pc != 0x0031E12Cu) [[unlikely]] return; }
L_0031E12C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0031E148; } }
    set32(c.r[16], ld32((c.r[19].w[0] + 288u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E140u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 319u, depth + 1u); else { c.pc = 0x0031EFB0u; return; } if (c.pc != 0x0031E140u) [[unlikely]] return; }
L_0031E140:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { goto L_0031E150; } }
L_0031E148:
    set32(c.r[2], 0u + 1u);
    st8((c.r[19].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0031E150:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0031E154:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E15Cu);  if (depth < kMaxDepth) unit_0087(c, 330u, depth + 1u); else { c.pc = 0x0031F0E0u; return; } if (c.pc != 0x0031E15Cu) [[unlikely]] return; }
L_0031E15C:
    set32(c.r[3], 0u + 1u);
    st8((c.r[19].w[0] + 392u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0031E180:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 384u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E1B8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 319u, depth + 1u); else { c.pc = 0x0031EFB0u; return; } if (c.pc != 0x0031E1B8u) [[unlikely]] return; }
L_0031E1B8:
    st32((c.r[16].w[0] + 288u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E1CCu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 268u, depth + 1u); else { c.pc = 0x001A2900u; return; } if (c.pc != 0x0031E1CCu) [[unlikely]] return; }
L_0031E1CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E1D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 330u, depth + 1u); else { c.pc = 0x0031F0E0u; return; } if (c.pc != 0x0031E1D4u) [[unlikely]] return; }
L_0031E1D4:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 392u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0031E200:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 384u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E238u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 319u, depth + 1u); else { c.pc = 0x0031EFB0u; return; } if (c.pc != 0x0031E238u) [[unlikely]] return; }
L_0031E238:
    st32((c.r[16].w[0] + 288u), c.r[2].w[0]);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[17].w[0] + 6u));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[18].d[0] = c.r[2].d[0] ^ 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E258u); c.r[18].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0028(c, 271u, depth + 1u); else { c.pc = 0x001A29C0u; return; } if (c.pc != 0x0031E258u) [[unlikely]] return; }
L_0031E258:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0031E290; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E268u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 358u, depth + 1u); else { c.pc = 0x001A3760u; return; } if (c.pc != 0x0031E268u) [[unlikely]] return; }
L_0031E268:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0031E284; } }
    set32(c.r[17], ld32((c.r[16].w[0] + 288u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E27Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 319u, depth + 1u); else { c.pc = 0x0031EFB0u; return; } if (c.pc != 0x0031E27Cu) [[unlikely]] return; }
L_0031E27C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { goto L_0031E28C; } }
L_0031E284:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0031E28C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0031E290:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E298u);  if (depth < kMaxDepth) unit_0087(c, 330u, depth + 1u); else { c.pc = 0x0031F0E0u; return; } if (c.pc != 0x0031E298u) [[unlikely]] return; }
L_0031E298:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 392u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0031E2C0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 384u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E2F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 357u, depth + 1u); else { c.pc = 0x001A3670u; return; } if (c.pc != 0x0031E2F8u) [[unlikely]] return; }
L_0031E2F8:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 13u));
    c.r[17].d[0] = c.r[2].d[0] & 63ull;
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0031E354; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0031E348; } }
L_0031E310:
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0031E344; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 384u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0031E344; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 13u));
    c.r[2].d[0] = c.r[2].d[0] & 63ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[17].d[0]; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0031E344; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E344u);  if (depth < kMaxDepth) unit_0028(c, 357u, depth + 1u); else { c.pc = 0x001A3670u; return; } if (c.pc != 0x0031E344u) [[unlikely]] return; }
L_0031E344:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0031E348:
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(37ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031E310u | kUnwind; return; } goto L_0031E310; } }
L_0031E354:
    set32(c.r[2], ld32((c.r[19].w[0] + 384u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0031E390; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031E38C; } }
    ld128((c.r[18].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[29].w[0] + 80u);
    st128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 652u)));
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E38Cu); set32(c.r[4], ld32((c.r[19].w[0] + 12u)));  if (depth < kMaxDepth) unit_0028(c, 357u, depth + 1u); else { c.pc = 0x001A3670u; return; } if (c.pc != 0x0031E38Cu) [[unlikely]] return; }
L_0031E38C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0031E390:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E398u);  if (depth < kMaxDepth) unit_0087(c, 330u, depth + 1u); else { c.pc = 0x0031F0E0u; return; } if (c.pc != 0x0031E398u) [[unlikely]] return; }
L_0031E398:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0031E3C0:
    set32(c.r[2], ld32((c.r[4].w[0] + 384u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { st8((c.r[2].w[0] + 15u), static_cast<std::uint8_t>(c.r[5].w[0]));  goto L_0031F0E0; }
L_0031E3E0:
    set32(c.r[11], ld32((c.r[4].w[0] + 384u)));
    c.r[2].d[0] = c.r[7].d[0] & 3ull;
    set32(c.r[10], c.r[2].w[0] << 6);
    set32(c.r[7], 0u - 4u);
    c.r[2].d[0] = c.r[9].d[0] & 3ull;
    c.r[8].d[0] = c.r[8].d[0] & 3ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[9], 0u - 193u);
    set32(c.r[2], 0u - 13u);
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[11], c.r[11].w[0] + c.r[4].w[0]);
    set32(c.r[11], ld32((c.r[11].w[0] + 8u)));
    st16((c.r[11].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[11].w[0] + 2u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[5].d[0] = ld8((c.r[11].w[0] + 14u));
    c.r[5].d[0] = c.r[5].d[0] & c.r[9].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[10].d[0];
    st8((c.r[11].w[0] + 14u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[11].w[0] + 15u));
    c.r[5].d[0] = c.r[5].d[0] & c.r[7].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[8].d[0];
    st8((c.r[11].w[0] + 15u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[11].w[0] + 15u));
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 27;
    { st8((c.r[11].w[0] + 15u), static_cast<std::uint8_t>(c.r[2].w[0]));  goto L_0031F0E0; }
L_0031E450:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[5], 0u - 4u);
    set32(c.r[12], ld32((c.r[3].w[0] + 8u)));
    c.r[2].d[0] = c.r[8].d[0] & 3ull;
    c.r[8].d[0] = c.r[9].d[0] & 3ull;
    set32(c.r[11], c.r[2].w[0] << 6);
    c.r[2].d[0] = c.r[10].d[0] & 3ull;
    set32(c.r[9], 0u - 193u);
    st16((c.r[12].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[3], c.r[2].w[0] << 2);
    st16((c.r[12].w[0] + 2u), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[2], 0u - 13u);
    c.r[6].d[0] = ld8((c.r[12].w[0] + 14u));
    c.r[6].d[0] = c.r[6].d[0] & c.r[9].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[11].d[0];
    st8((c.r[12].w[0] + 14u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[12].w[0] + 15u));
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[8].d[0];
    st8((c.r[12].w[0] + 15u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[12].w[0] + 15u));
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 26;
    { st8((c.r[12].w[0] + 15u), static_cast<std::uint8_t>(c.r[2].w[0]));  goto L_0031F0E0; }
L_0031E4C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 384u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E4F8u); c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 319u, depth + 1u); else { c.pc = 0x0031EFB0u; return; } if (c.pc != 0x0031E4F8u) [[unlikely]] return; }
L_0031E4F8:
    st32((c.r[19].w[0] + 288u), c.r[2].w[0]);
    set32(c.r[5], 0u - 65u);
    c.r[7].d[0] = ld8((c.r[16].w[0] + 13u));
    c.r[2].d[0] = c.r[18].d[0] & 1ull;
    set32(c.r[6], c.r[2].w[0] << 6);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] & 1ull;
    set32(c.r[3], c.r[2].w[0] << 7);
    set32(c.r[2], 0u - 129u);
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 13u));
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E53Cu); st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0028(c, 358u, depth + 1u); else { c.pc = 0x001A3760u; return; } if (c.pc != 0x0031E53Cu) [[unlikely]] return; }
L_0031E53C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031E54C; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[19].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0031E54C:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 13u));
    c.r[3].d[0] = c.r[2].d[0] & 63ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] & 1ull;  if (t) { goto L_0031E5D4; } }
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[4].w[0] << 6);
    set32(c.r[7], 0u - 65u);
    c.r[4].d[0] = c.r[17].d[0] & 1ull;
    set32(c.r[5], 0u - 129u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[4].w[0] << 7);  if (t) { goto L_0031E5C8; } }
L_0031E578:
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    set32(c.r[9], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_0031E5C4; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 384u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_0031E5C4; } }
    c.r[4].d[0] = ld8((c.r[9].w[0] + 13u));
    c.r[4].d[0] = c.r[4].d[0] & 63ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0031E5C4; } }
    c.r[4].d[0] = ld8((c.r[9].w[0] + 13u));
    c.r[4].d[0] = c.r[4].d[0] & c.r[7].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[8].d[0];
    st8((c.r[9].w[0] + 13u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[9].w[0] + 13u));
    c.r[4].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    st8((c.r[9].w[0] + 13u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 8;
L_0031E5C4:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_0031E5C8:
    c.r[4].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(37ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[4], c.r[2].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031E578u | kUnwind; return; } goto L_0031E578; } }
L_0031E5D4:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 6u));
    set32(c.r[2], 0u + 12u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0031E660; } }
    c.r[2].d[0] = c.r[17].d[0] & 1ull;
    c.r[3].d[0] = c.r[18].d[0] & 1ull;
    set32(c.r[4], c.r[2].w[0] << 7);
    set32(c.r[6], c.r[3].w[0] << 6);
    set32(c.r[2], ld32((c.r[19].w[0] + 384u)));
    set32(c.r[5], 0u - 65u);
    set32(c.r[3], 0u - 129u);
    set32(c.r[7], 0u + 7u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[9], c.r[2].w[0] + 1u);  if (t) { goto L_0031E650; } }
L_0031E60C:
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[8], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_0031E64C; } }
    c.r[2].d[0] = ld8((c.r[8].w[0] + 14u));
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[7].d[0];  if (t) { goto L_0031E64C; } }
    c.r[2].d[0] = ld8((c.r[8].w[0] + 13u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st8((c.r[8].w[0] + 13u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[8].w[0] + 13u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st8((c.r[8].w[0] + 13u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
L_0031E64C:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 1;
L_0031E650:
    c.r[2].d[0] = c.r[9].d[0] < static_cast<std::uint64_t>(37ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[9].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031E60Cu | kUnwind; return; } goto L_0031E60C; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0031E660:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E668u);  if (depth < kMaxDepth) unit_0087(c, 180u, depth + 1u); else { c.pc = 0x0031D510u; return; } if (c.pc != 0x0031E668u) [[unlikely]] return; }
L_0031E668:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0031E690:
    set32(c.r[2], ld32((c.r[4].w[0] + 384u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0] + 8u)));  c.pc = t; return; }
L_0031E6B0:
    set32(c.r[2], ld32((c.r[4].w[0] + 384u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 640u);  c.pc = t; return; }
L_0031E6D0:
    set32(c.r[2], ld32((c.r[5].w[0] + 384u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 5;
    { set32(c.r[5], ld32((c.r[2].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001A37C0u | kUnwind; return; } [[clang::musttail]] return unit_0028(c, 360u, depth); }
L_0031E6F0:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0031E72C; } }
L_0031E6FC:
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0031E728; } }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 13u));
    c.r[3].d[0] = c.r[3].d[0] & 63ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;  if (t) { goto L_0031E728; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0031E728; } }
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_0031E728:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0031E72C:
    c.r[3].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(37ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031E6FCu | kUnwind; return; } goto L_0031E6FC; } }
    set32(c.r[3], c.r[6].w[0] + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 388u), c.r[3].w[0]);  c.pc = t; return; }
L_0031E750:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 388u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 384u)));
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] < 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0031E77C; } }
    c.r[3].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(37ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] << 2);  if (t) { goto L_0031E784; } }
L_0031E77C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031E7A4; } }
L_0031E784:
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0031E79C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031E7A4; } }
L_0031E79C:
    c.r[3].d[0] = ld8((c.r[3].w[0] + 13u));
    c.r[5].d[0] = c.r[3].d[0] & 63ull;
    c.budget -= 2;
L_0031E7A4:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0031E7E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E7B4u);  if (depth < kMaxDepth) unit_0087(c, 290u, depth + 1u); else { c.pc = 0x0031E800u; return; } if (c.pc != 0x0031E7B4u) [[unlikely]] return; }
L_0031E7B4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0031E7E8; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 384u)));
    set32(c.r[3], 0u - 64u);
    c.r[4].d[0] = 0ull & 63ull;
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[16].w[0]);
    set32(c.r[6], ld32((c.r[5].w[0] + 8u)));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 13u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[6].w[0] + 13u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 10;
L_0031E7E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031E800:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0031E810; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0031E858; } }
L_0031E810:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0031E84C; } }
L_0031E818:
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0031E848; } }
    c.r[3].d[0] = ld8((c.r[6].w[0] + 6u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0031E848; } }
    c.r[3].d[0] = ld8((c.r[6].w[0] + 13u));
    c.r[3].d[0] = c.r[3].d[0] & 63ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_0031E848; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_0031E848:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_0031E84C:
    c.r[3].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(37ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[7].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031E818u | kUnwind; return; } goto L_0031E818; } }
L_0031E858:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0031E860:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0031E874; } }
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(37ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[5].w[0] << 2);  if (t) { goto L_0031E87C; } }
L_0031E874:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031E89C; } }
L_0031E87C:
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0031E894; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031E89C; } }
L_0031E894:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 13u));
    c.r[3].d[0] = c.r[2].d[0] & 63ull;
    c.budget -= 2;
L_0031E89C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0031E8AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031E904; } }
L_0031E8AC:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[2], c.r[5].w[0] - 1u);  if (t) { goto L_0031E8BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0031E904; } }
L_0031E8BC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0031E8D0; } }
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(37ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0031E8D8; } }
L_0031E8D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0031E8FC; } }
L_0031E8D8:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0031E8F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0031E8FC; } }
L_0031E8F4:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 13u));
    c.r[2].d[0] = c.r[2].d[0] & 63ull;
    c.budget -= 2;
L_0031E8FC:
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_0031E904:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0031E910:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0031E920; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0031E970; } }
L_0031E920:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(37ll) ? 1ull : 0ull;  if (t) { goto L_0031E964; } }
L_0031E928:
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0031E95C; } }
    c.r[3].d[0] = ld8((c.r[6].w[0] + 6u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0031E95C; } }
    c.r[3].d[0] = ld8((c.r[6].w[0] + 13u));
    c.r[3].d[0] = c.r[3].d[0] & 63ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_0031E95C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031E970; } }
L_0031E95C:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[3].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(37ll) ? 1ull : 0ull;
    c.budget -= 2;
L_0031E964:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[2].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031E928u | kUnwind; return; } goto L_0031E928; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0031E970:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0031E980:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0031E9A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0031EA18; } }
L_0031E9A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E9ACu);  if (depth < kMaxDepth) unit_0087(c, 293u, depth + 1u); else { c.pc = 0x0031E910u; return; } if (c.pc != 0x0031E9ACu) [[unlikely]] return; }
L_0031E9AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0031E9BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0031EA18; } }
L_0031E9BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(37ll) ? 1ull : 0ull;  if (t) { goto L_0031EA10; } }
L_0031E9C4:
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0031E9DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[5].w[0] - 1u);  if (t) { goto L_0031EA18; } }
L_0031E9DC:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 6u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0031E9F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[5].w[0] - 1u);  if (t) { goto L_0031EA18; } }
L_0031E9F0:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 13u));
    c.r[3].d[0] = c.r[3].d[0] & 63ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_0031EA08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[5].w[0] - 1u);  if (t) { goto L_0031EA18; } }
L_0031EA08:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(37ll) ? 1ull : 0ull;
    c.budget -= 2;
L_0031EA10:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031E9C4u | kUnwind; return; } goto L_0031E9C4; } }
L_0031EA18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0031EA30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 8u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 272u)));
    set32(c.r[16], 0u + 7u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; if (c.r[3].d[0] != 0) c.r[16].d[0] = c.r[2].d[0];  if (t) { goto L_0031EA8C; } }
L_0031EA60:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0031EA9C; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031EA7Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 308u, depth + 1u); else { c.pc = 0x0031EBE0u; return; } if (c.pc != 0x0031EA7Cu) [[unlikely]] return; }
L_0031EA7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031EA88; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0031EA88:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0031EA8C:
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(37ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031EA60u | kUnwind; return; } goto L_0031EA60; } }
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0031EA9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0031EAC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 8u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 272u)));
    set32(c.r[16], 0u + 7u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; if (c.r[3].d[0] != 0) c.r[16].d[0] = c.r[2].d[0];  if (t) { goto L_0031EB1C; } }
L_0031EAF0:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0031EB2C; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031EB0Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 309u, depth + 1u); else { c.pc = 0x0031ECE0u; return; } if (c.pc != 0x0031EB0Cu) [[unlikely]] return; }
L_0031EB0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031EB18; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0031EB18:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0031EB1C:
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(37ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031EAF0u | kUnwind; return; } goto L_0031EAF0; } }
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0031EB2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0031EB50:
    set32(c.r[5], ld32((c.r[4].w[0] + 272u)));
    set32(c.r[6], 0u + 7u);
    set32(c.r[3], 0u + 8u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; if (c.r[5].d[0] != 0) c.r[6].d[0] = c.r[3].d[0];  if (t) { goto L_0031EB80; } }
L_0031EB68:
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0031EB8C; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 2;
L_0031EB80:
    c.r[3].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(37ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[6].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031EB68u | kUnwind; return; } goto L_0031EB68; } }
L_0031EB8C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0031EBA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031EBB0u);  if (depth < kMaxDepth) unit_0087(c, 214u, depth + 1u); else { c.pc = 0x0031DA70u; return; } if (c.pc != 0x0031EBB0u) [[unlikely]] return; }
L_0031EBB0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0031EBC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0031EBCC; } }
L_0031EBC4:
    set32(c.r[3], 0u + 35u);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 2;
L_0031EBCC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0031EBE0:
    set32(c.r[6], ld32((c.r[4].w[0] + 272u)));
    set32(c.r[3], 0u + 7u);
    set32(c.r[2], 0u + 8u);
    if (c.r[6].d[0] != 0) c.r[3].d[0] = c.r[2].d[0];
    c.r[1].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[5].w[0] << 2);  if (t) { goto L_0031EC04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0031ECCC; } }
L_0031EC04:
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[7], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0031EC18; } }
    c.r[8].d[0] = ld8((c.r[7].w[0] + 6u));
    c.budget -= 1;
L_0031EC18:
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 11u);  if (t) { goto L_0031ECA4; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == c.r[2].d[0]; set32(c.r[3], c.r[8].w[0] - 5u);  if (t) { goto L_0031ECA4; } }
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    set32(c.r[2], 0u + 1u);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0031EC58; } }
    set32(c.r[2], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & 225ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031EC58; } }
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 1;
L_0031EC58:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[2], c.r[8].w[0] - 18u);  if (t) { goto L_0031EC7C; } }
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0031EC70; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0031EC70:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0031EC7C; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0031EC7C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[2], c.r[8].w[0] - 26u);  if (t) { goto L_0031EC94; } }
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0031EC94; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0031EC94:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0031ECA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031ECCC; } }
L_0031ECA4:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0031ECCC; } }
    c.r[3].d[0] = ld8((c.r[7].w[0] + 14u));
    set32(c.r[2], 0u + 7u);
    c.r[3].d[0] = c.r[3].d[0] & 15ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0031ECC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031ECCC; } }
L_0031ECC8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0031ECCC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0031ECE0:
    set32(c.r[6], ld32((c.r[4].w[0] + 272u)));
    set32(c.r[3], 0u + 7u);
    set32(c.r[2], 0u + 8u);
    if (c.r[6].d[0] != 0) c.r[3].d[0] = c.r[2].d[0];
    c.r[1].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[5].w[0] << 2);  if (t) { goto L_0031ED04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0031EDE4; } }
L_0031ED04:
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0031ED1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0031ED94; } }
L_0031ED1C:
    c.r[9].d[0] = ld8((c.r[4].w[0] + 6u));
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[2], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[9].w[0] - 5u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_0031ED50; } }
    set32(c.r[2], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & 225ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031ED50; } }
    c.r[6].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 1;
L_0031ED50:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[2], c.r[9].w[0] - 18u);  if (t) { goto L_0031ED74; } }
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0031ED68; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0031ED68:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0031ED74; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0031ED74:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull; c.r[2].d[0] = c.r[8].d[0] & 255ull;  if (t) { goto L_0031ED94; } }
    set32(c.r[2], c.r[9].w[0] - 26u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0031ED90; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0031ED90:
    c.r[2].d[0] = c.r[8].d[0] & 255ull;
    c.budget -= 1;
L_0031ED94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031EDA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0031EDE4; } }
L_0031EDA4:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0031EDBC; } }
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(37ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0031EDC4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0031EDBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] ^ 0ull;  if (t) { goto L_0031EDE0; } }
L_0031EDC4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0031EDD4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031EDDC; } }
L_0031EDD4:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 13u));
    c.r[2].d[0] = c.r[2].d[0] & 63ull;
    c.budget -= 2;
L_0031EDDC:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.budget -= 1;
L_0031EDE0:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 1;
L_0031EDE4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0031EDF0:
    set32(c.r[4], ld32((c.r[4].w[0] + 272u)));
    set32(c.r[3], 0u + 7u);
    set32(c.r[2], 0u + 8u);
    if (c.r[4].d[0] != 0) c.r[3].d[0] = c.r[2].d[0];
    c.r[1].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0031EE10; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0031EE10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0031EE20:
    set32(c.r[6], ld32((c.r[4].w[0] + 272u)));
    set32(c.r[3], 0u + 7u);
    set32(c.r[2], 0u + 8u);
    if (c.r[6].d[0] != 0) c.r[3].d[0] = c.r[2].d[0];
    c.r[1].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[5].w[0] << 2);  if (t) { goto L_0031EE44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0031EE74; } }
L_0031EE44:
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031EE70; } }
    c.r[3].d[0] = ld8((c.r[2].w[0] + 14u));
    set32(c.r[2], 0u + 7u);
    c.r[3].d[0] = c.r[3].d[0] & 15ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0031EE70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0031EE74; } }
L_0031EE70:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0031EE74:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0031EE80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 31u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031EEA8u); st8((c.r[29].w[0] + 31u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0029(c, 15u, depth + 1u); else { c.pc = 0x001A4200u; return; } if (c.pc != 0x0031EEA8u) [[unlikely]] return; }
L_0031EEA8:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 31u));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031EEC0:
    set32(c.r[5], ld32((c.r[4].w[0] + 272u)));
    set32(c.r[6], 0u + 7u);
    set32(c.r[2], 0u + 8u);
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; if (c.r[5].d[0] != 0) c.r[6].d[0] = c.r[2].d[0];  if (t) { goto L_0031EF04; } }
L_0031EED8:
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031EF10; } }
    c.r[2].d[0] = ld8((c.r[2].w[0] + 14u));
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0031EF00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0031EF14; } }
L_0031EF00:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0031EF04:
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(37ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[6].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031EED8u | kUnwind; return; } goto L_0031EED8; } }
L_0031EF10:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0031EF14:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0031EF20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 8u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 384u)));
    set32(c.r[16], 0u + 7u);
    set32(c.r[4], ld32((c.r[4].w[0] + 272u)));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; if (c.r[4].d[0] != 0) c.r[16].d[0] = c.r[3].d[0];  if (t) { goto L_0031EF84; } }
L_0031EF50:
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0031EF80; } }
    c.r[4].d[0] = ld8((c.r[3].w[0] + 14u));
    set32(c.r[3], 0u + 7u);
    c.r[4].d[0] = c.r[4].d[0] & 15ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0031EF80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031EF7Cu); st32((c.r[18].w[0] + 384u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0087(c, 190u, depth + 1u); else { c.pc = 0x0031D640u; return; } if (c.pc != 0x0031EF7Cu) [[unlikely]] return; }
L_0031EF7C:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 1;
L_0031EF80:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0031EF84:
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(37ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031EF50u | kUnwind; return; } goto L_0031EF50; } }
    st32((c.r[18].w[0] + 384u), c.r[17].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0031EFB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[29].w[0] + 28u);
    set32(c.r[10], 0u + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031EFD8u); st32((c.r[29].w[0] + 28u), 0u);  if (depth < kMaxDepth) unit_0029(c, 15u, depth + 1u); else { c.pc = 0x001A4200u; return; } if (c.pc != 0x0031EFD8u) [[unlikely]] return; }
L_0031EFD8:
    set32(c.r[2], ld32((c.r[29].w[0] + 28u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031EFF0:
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 380u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 381u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 384u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0] + 376u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 384u)));
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0031F024; } }
    st32((c.r[4].w[0] + 376u), 0u);
    st8((c.r[4].w[0] + 380u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 381u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_0031F024:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0031F030:
    st8((c.r[4].w[0] + 380u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 381u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_0031F040:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 352u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 208u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F060u); c.r[6].sd[0] = static_cast<std::int32_t>(0x00040000u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0031F060u) [[unlikely]] return; }
L_0031F060:
    set32(c.r[4], ld32((c.r[16].w[0] + 368u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 224u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F070u); c.r[6].sd[0] = static_cast<std::int32_t>(0x00020000u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0031F070u) [[unlikely]] return; }
L_0031F070:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031F080:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 208u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 352u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F0A0u); c.r[6].sd[0] = static_cast<std::int32_t>(0x00040000u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0031F0A0u) [[unlikely]] return; }
L_0031F0A0:
    set32(c.r[4], ld32((c.r[16].w[0] + 224u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 368u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F0B0u); c.r[6].sd[0] = static_cast<std::int32_t>(0x00020000u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0031F0B0u) [[unlikely]] return; }
L_0031F0B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031F0C0:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 380u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0031F0D0; } }
    st8((c.r[4].w[0] + 381u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0031F0D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0031F0E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F0F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 405u, depth + 1u); else { c.pc = 0x001A3DC0u; return; } if (c.pc != 0x0031F0F4u) [[unlikely]] return; }
L_0031F0F4:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 380u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0031F120; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 381u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0031F120; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F114u);  if (depth < kMaxDepth) unit_0087(c, 326u, depth + 1u); else { c.pc = 0x0031F080u; return; } if (c.pc != 0x0031F114u) [[unlikely]] return; }
L_0031F114:
    set32(c.r[3], ld32((c.r[16].w[0] + 376u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 280u), c.r[3].w[0]);
    c.budget -= 3;
L_0031F120:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031F130:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 380u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0031F170; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 381u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0031F170; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 280u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 376u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0031F170; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F16Cu);  if (depth < kMaxDepth) unit_0087(c, 323u, depth + 1u); else { c.pc = 0x0031F040u; return; } if (c.pc != 0x0031F16Cu) [[unlikely]] return; }
L_0031F16C:
    st8((c.r[16].w[0] + 381u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0031F170:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031F180:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 312u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0031D1A0u | kUnwind; return; } goto L_0031D1A0; }
L_0031F190:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], ld32((c.r[1].w[0] + 28324u)));
    set32(c.r[2], c.r[18].w[0] + 208u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[18].w[0] + 224u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F1E0u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 20u, depth + 1u); else { c.pc = 0x001C02D0u; return; } if (c.pc != 0x0031F1E0u) [[unlikely]] return; }
L_0031F1E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4D6F0000u);
    set32(c.r[4], c.r[18].w[0] + 436u);
    c.r[5].d[0] = c.r[2].d[0] | 17524ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F1F4u); set32(c.r[17], 0u + 30u);  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x0031F1F4u) [[unlikely]] return; }
L_0031F1F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0031F200; } }
    set32(c.r[16], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_0031F200:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4D6F0000u);
    set32(c.r[4], c.r[18].w[0] + 436u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F210u); c.r[5].d[0] = c.r[2].d[0] | 18543ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x0031F210u) [[unlikely]] return; }
L_0031F210:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0031F21C; } }
    set32(c.r[20], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_0031F21C:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F22Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031F22Cu) [[unlikely]] return; }
L_0031F22C:
    set32(c.r[25], ld32((c.r[20].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F23Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031F23Cu) [[unlikely]] return; }
L_0031F23C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 20u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F258u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 20u, depth + 1u); else { c.pc = 0x001C02D0u; return; } if (c.pc != 0x0031F258u) [[unlikely]] return; }
L_0031F258:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], ld32((c.r[18].w[0] + 176u)));  if (t) { goto L_0031F284; } }
L_0031F260:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F270u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031F270u) [[unlikely]] return; }
L_0031F270:
    set32(c.r[25], ld32((c.r[20].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F280u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031F280u) [[unlikely]] return; }
L_0031F280:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0031F284:
    set32(c.r[3], c.r[17].w[0] + 4u);
    c.r[3].d[0] = c.r[19].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[18].w[0] + 208u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031F260u | kUnwind; return; } goto L_0031F260; } }
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[3], c.r[18].w[0] + 224u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[0]);
    st32((c.r[18].w[0] + 176u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0031F2D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 26120u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0031F324; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 4u);  if (t) { goto L_0031F30C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 28324u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F304u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x0031F304u) [[unlikely]] return; }
L_0031F304:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0031F328; } }
L_0031F30C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F314u);  if (depth < kMaxDepth) unit_009D(c, 322u, depth + 1u); else { c.pc = 0x00377450u; return; } if (c.pc != 0x0031F314u) [[unlikely]] return; }
L_0031F314:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F31Cu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0087(c, 336u, depth + 1u); else { c.pc = 0x0031F190u; return; } if (c.pc != 0x0031F31Cu) [[unlikely]] return; }
L_0031F31C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F324u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_009D(c, 279u, depth + 1u); else { c.pc = 0x00376E00u; return; } if (c.pc != 0x0031F324u) [[unlikely]] return; }
L_0031F324:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0031F328:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0031F330:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[1].w[0] + 26120u)));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_0031F370; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F354u);  if (depth < kMaxDepth) unit_0087(c, 336u, depth + 1u); else { c.pc = 0x0031F190u; return; } if (c.pc != 0x0031F354u) [[unlikely]] return; }
L_0031F354:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F35Cu);  if (depth < kMaxDepth) unit_0023(c, 256u, depth + 1u); else { c.pc = 0x0018E780u; return; } if (c.pc != 0x0031F35Cu) [[unlikely]] return; }
L_0031F35C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F368u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 362u, depth + 1u); else { c.pc = 0x0018F540u; return; } if (c.pc != 0x0031F368u) [[unlikely]] return; }
L_0031F368:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F370u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_009D(c, 279u, depth + 1u); else { c.pc = 0x00376E00u; return; } if (c.pc != 0x0031F370u) [[unlikely]] return; }
L_0031F370:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031F380:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F394u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 173u, depth + 1u); else { c.pc = 0x0018DAE0u; return; } if (c.pc != 0x0031F394u) [[unlikely]] return; }
L_0031F394:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 20448u);
    set32(c.r[3], c.r[3].w[0] + 20536u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43410000u);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 19795ull;
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 180u), 0u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 548u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F3D0u); set32(c.r[4], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_0023(c, 203u, depth + 1u); else { c.pc = 0x0018DFC0u; return; } if (c.pc != 0x0031F3D0u) [[unlikely]] return; }
L_0031F3D0:
    set32(c.r[3], 0u + 99u);
    set32(c.r[2], 0u + 100u);
    st16((c.r[16].w[0] + 188u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st16((c.r[16].w[0] + 190u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26112u)));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 176u), c.r[4].w[0]);
    st8((c.r[16].w[0] + 192u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 193u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031F410:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0031F490; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 20448u);
    set32(c.r[2], c.r[2].w[0] + 20536u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 180u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0031F468; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0031F468; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F468u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031F468u) [[unlikely]] return; }
L_0031F468:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F478u); st32((c.r[17].w[0] + 180u), 0u);  if (depth < kMaxDepth) unit_0023(c, 177u, depth + 1u); else { c.pc = 0x0018DB80u; return; } if (c.pc != 0x0031F478u) [[unlikely]] return; }
L_0031F478:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0031F494; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F490u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0031F490u) [[unlikely]] return; }
L_0031F490:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0031F494:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0031F4B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 180u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0031F52C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[16], c.r[3].w[0] + 624u);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[4], 0u + 160u);  if (t) { goto L_0031F52C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F4E8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0031F4E8u) [[unlikely]] return; }
L_0031F4E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0031F4FC; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F4FCu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_002A(c, 287u, depth + 1u); else { c.pc = 0x001AB200u; return; } if (c.pc != 0x0031F4FCu) [[unlikely]] return; }
L_0031F4FC:
    st32((c.r[17].w[0] + 180u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F50Cu); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x0031F50Cu) [[unlikely]] return; }
L_0031F50C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F51Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x0031F51Cu) [[unlikely]] return; }
L_0031F51C:
    set32(c.r[4], ld32((c.r[17].w[0] + 180u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F52Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x0031F52Cu) [[unlikely]] return; }
L_0031F52C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0031F540:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E500u | kUnwind; return; } [[clang::musttail]] return unit_000B(c, 304u, depth); }
L_0031F550:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F56Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031F56Cu) [[unlikely]] return; }
L_0031F56C:
    set32(c.r[4], ld32((c.r[16].w[0] + 180u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0031F598; } }
    c.r[5].d[0] = ld16((c.r[16].w[0] + 188u));
    set32(c.r[2], 0u + 4095u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0031F598; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F598u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031F598u) [[unlikely]] return; }
L_0031F598:
    set32(c.r[2], ld32((c.r[16].w[0] + 176u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 72u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0031F5C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F5B0u); set32(c.r[4], ld32((c.r[16].w[0] + 180u)));  if (depth < kMaxDepth) unit_0022(c, 121u, depth + 1u); else { c.pc = 0x00188A10u; return; } if (c.pc != 0x0031F5B0u) [[unlikely]] return; }
L_0031F5B0:
    set32(c.r[2], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 72u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
L_0031F5C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F5CCu);  if (depth < kMaxDepth) unit_000C(c, 25u, depth + 1u); else { c.pc = 0x00130270u; return; } if (c.pc != 0x0031F5CCu) [[unlikely]] return; }
L_0031F5CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031F5E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 192u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0031F60C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F60Cu); set32(c.r[5], c.r[5].w[0] - 6312u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031F60Cu) [[unlikely]] return; }
L_0031F60C:
    set32(c.r[2], ld32((c.r[16].w[0] + 176u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 72u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 4095u);  if (t) { goto L_0031F620; } }
    st16((c.r[16].w[0] + 190u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0031F620:
    set32(c.r[2], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 68u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0031F670; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F63Cu);  if (depth < kMaxDepth) unit_000C(c, 26u, depth + 1u); else { c.pc = 0x00130280u; return; } if (c.pc != 0x0031F63Cu) [[unlikely]] return; }
L_0031F63C:
    set32(c.r[4], ld32((c.r[16].w[0] + 180u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0031F684; } }
    c.r[5].d[0] = ld16((c.r[16].w[0] + 190u));
    set32(c.r[3], 0u + 4095u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0031F680; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F668u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031F668u) [[unlikely]] return; }
L_0031F668:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031F680; } }
L_0031F670:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F680u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031F680u) [[unlikely]] return; }
L_0031F680:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0031F684:
    st8((c.r[16].w[0] + 192u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031F6A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 192u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0031F6CC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F6CCu); set32(c.r[5], c.r[5].w[0] - 6304u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031F6CCu) [[unlikely]] return; }
L_0031F6CC:
    set32(c.r[2], ld32((c.r[16].w[0] + 176u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 72u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 4095u);  if (t) { goto L_0031F6E0; } }
    st16((c.r[16].w[0] + 190u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0031F6E0:
    set32(c.r[2], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 68u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0031F730; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F6FCu);  if (depth < kMaxDepth) unit_000C(c, 27u, depth + 1u); else { c.pc = 0x00130290u; return; } if (c.pc != 0x0031F6FCu) [[unlikely]] return; }
L_0031F6FC:
    set32(c.r[4], ld32((c.r[16].w[0] + 180u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0031F744; } }
    c.r[5].d[0] = ld16((c.r[16].w[0] + 190u));
    set32(c.r[3], 0u + 4095u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0031F740; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F728u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031F728u) [[unlikely]] return; }
L_0031F728:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031F740; } }
L_0031F730:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F740u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031F740u) [[unlikely]] return; }
L_0031F740:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0031F744:
    st8((c.r[16].w[0] + 192u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031F760:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 193u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0031F774; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031F78C; } }
L_0031F774:
    set32(c.r[2], ld32((c.r[4].w[0] + 180u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0031F788; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0031F78C; } }
L_0031F788:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 137u));
    c.budget -= 1;
L_0031F78C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0031F7A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F7B8u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0022(c, 134u, depth + 1u); else { c.pc = 0x00188B50u; return; } if (c.pc != 0x0031F7B8u) [[unlikely]] return; }
L_0031F7B8:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 156u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F7C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031F7C8u) [[unlikely]] return; }
L_0031F7C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031F7E8; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F7E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031F7E0u) [[unlikely]] return; }
L_0031F7E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F7E8u); set32(c.r[4], 0u + 255u);  if (depth < kMaxDepth) unit_0022(c, 134u, depth + 1u); else { c.pc = 0x00188B50u; return; } if (c.pc != 0x0031F7E8u) [[unlikely]] return; }
L_0031F7E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031F800:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E690u | kUnwind; return; } [[clang::musttail]] return unit_000B(c, 327u, depth); }
L_0031F810:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 193u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0031F860; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 156u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F838u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031F838u) [[unlikely]] return; }
L_0031F838:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u - 32u);  if (t) { goto L_0031F858; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F850u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031F850u) [[unlikely]] return; }
L_0031F850:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0031F864; } }
L_0031F858:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F860u);  if (depth < kMaxDepth) unit_0022(c, 134u, depth + 1u); else { c.pc = 0x00188B50u; return; } if (c.pc != 0x0031F860u) [[unlikely]] return; }
L_0031F860:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0031F864:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031F870:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 193u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0031F8C0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 156u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F898u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031F898u) [[unlikely]] return; }
L_0031F898:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u - 32u);  if (t) { goto L_0031F8B8; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F8B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031F8B0u) [[unlikely]] return; }
L_0031F8B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0031F8C4; } }
L_0031F8B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F8C0u);  if (depth < kMaxDepth) unit_0022(c, 134u, depth + 1u); else { c.pc = 0x00188B50u; return; } if (c.pc != 0x0031F8C0u) [[unlikely]] return; }
L_0031F8C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0031F8C4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031F8D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F8F0u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 256u, depth + 1u); else { c.pc = 0x00189B70u; return; } if (c.pc != 0x0031F8F0u) [[unlikely]] return; }
L_0031F8F0:
    set32(c.r[4], ld32((c.r[18].w[0] + 176u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F900u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 486u, depth + 1u); else { c.pc = 0x00187E10u; return; } if (c.pc != 0x0031F900u) [[unlikely]] return; }
L_0031F900:
    set32(c.r[3], ld32((c.r[18].w[0] + 176u)));
    st32((c.r[3].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[16], ld32((c.r[2].w[0] + 64u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F920u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031F920u) [[unlikely]] return; }
L_0031F920:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F934u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 198u, depth + 1u); else { c.pc = 0x001892F0u; return; } if (c.pc != 0x0031F934u) [[unlikely]] return; }
L_0031F934:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0031F950:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[7], 0u + 14u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[8].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[9].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F978u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 267u, depth + 1u); else { c.pc = 0x0016A910u; return; } if (c.pc != 0x0031F978u) [[unlikely]] return; }
L_0031F978:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[3], 0u + 1u);
    st32((c.r[4].w[0] + 36u), 0u);
    st8((c.r[16].w[0] + 193u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031F9A0:
    st8((c.r[4].w[0] + 193u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 36u), c.r[4].w[0]);  c.pc = t; return; }
L_0031F9C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F9D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 356u, depth + 1u); else { c.pc = 0x0031F380u; return; } if (c.pc != 0x0031F9D4u) [[unlikely]] return; }
L_0031F9D4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 20272u);
    set32(c.r[2], c.r[2].w[0] + 20360u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 208u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F9F8u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_0023(c, 195u, depth + 1u); else { c.pc = 0x0018DEA0u; return; } if (c.pc != 0x0031F9F8u) [[unlikely]] return; }
L_0031F9F8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x544F0000u);
    set32(c.r[2], 0u + 99u);
    c.r[3].d[0] = c.r[3].d[0] | 19781ull;
    set32(c.r[4], 0u + 16u);
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 180u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FA18u); st16((c.r[16].w[0] + 188u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x0031FA18u) [[unlikely]] return; }
L_0031FA18:
    st32((c.r[16].w[0] + 320u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st8((c.r[16].w[0] + 324u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[1].w[0] + 28324u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0031FA64; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 392u));
    set32(c.r[4], 0u - 2u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st8((c.r[3].w[0] + 392u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[1].w[0] + 28324u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 400u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st8((c.r[3].w[0] + 400u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 13;
L_0031FA64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031FA80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0031FAE4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 20272u);
    set32(c.r[2], c.r[2].w[0] + 20360u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 208u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FAC0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0023(c, 199u, depth + 1u); else { c.pc = 0x0018DF40u; return; } if (c.pc != 0x0031FAC0u) [[unlikely]] return; }
L_0031FAC0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FACCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 359u, depth + 1u); else { c.pc = 0x0031F410u; return; } if (c.pc != 0x0031FACCu) [[unlikely]] return; }
L_0031FACC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0031FAE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FAE4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0031FAE4u) [[unlikely]] return; }
L_0031FAE4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0031FAE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0031FB00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FB20u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 128u, depth + 1u); else { c.pc = 0x00188AE0u; return; } if (c.pc != 0x0031FB20u) [[unlikely]] return; }
L_0031FB20:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0031FB98; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_0031FB8C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_0031FB70; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[4], 0u + 119u);  if (t) { goto L_0031FB50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_0031FBA4; } }
L_0031FB50:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; st16((c.r[17].w[0] + 190u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_0031FBA0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FB68u); set32(c.r[4], ld32((c.r[1].w[0] + 26160u)));  if (depth < kMaxDepth) unit_0023(c, 98u, depth + 1u); else { c.pc = 0x0018CFB0u; return; } if (c.pc != 0x0031FB68u) [[unlikely]] return; }
L_0031FB68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031FBA0; } }
L_0031FB70:
    set32(c.r[2], 0u + 119u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st16((c.r[17].w[0] + 190u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FB84u); set32(c.r[4], ld32((c.r[1].w[0] + 26160u)));  if (depth < kMaxDepth) unit_0023(c, 101u, depth + 1u); else { c.pc = 0x0018D030u; return; } if (c.pc != 0x0031FB84u) [[unlikely]] return; }
L_0031FB84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031FBA0; } }
L_0031FB8C:
    set32(c.r[2], 0u + 114u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 190u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0031FBA0; } }
L_0031FB98:
    set32(c.r[2], 0u + 100u);
    st16((c.r[17].w[0] + 190u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0031FBA0:
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_0031FBA4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0031FBF8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], 0u - 2u);
    set32(c.r[3], ld32((c.r[1].w[0] + 28324u)));
    c.r[6].d[0] = 0ull & 1ull;
    set32(c.r[4], 0u + 1u);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 392u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st8((c.r[3].w[0] + 392u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[1].w[0] + 28324u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 400u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FBECu); st8((c.r[3].w[0] + 400u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0021(c, 410u, depth + 1u); else { c.pc = 0x001873D0u; return; } if (c.pc != 0x0031FBECu) [[unlikely]] return; }
L_0031FBEC:
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 324u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
L_0031FBF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FC00u);  if (depth < kMaxDepth) unit_0087(c, 375u, depth + 1u); else { c.pc = 0x0031F5E0u; return; } if (c.pc != 0x0031FC00u) [[unlikely]] return; }
L_0031FC00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FC08u);  if (depth < kMaxDepth) unit_0022(c, 256u, depth + 1u); else { c.pc = 0x00189B70u; return; } if (c.pc != 0x0031FC08u) [[unlikely]] return; }
L_0031FC08:
    set32(c.r[3], ld32((c.r[17].w[0] + 176u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[3].w[0] + 68u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FC20u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 198u, depth + 1u); else { c.pc = 0x001892F0u; return; } if (c.pc != 0x0031FC20u) [[unlikely]] return; }
L_0031FC20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0031FC40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 320u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0031FD44; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FC74u); c.r[17].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031FC74u) [[unlikely]] return; }
L_0031FC74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031FD44; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 320u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[3].w[0] + 992u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_0031FCA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FC98u);  if (depth < kMaxDepth) unit_0022(c, 182u, depth + 1u); else { c.pc = 0x001890F0u; return; } if (c.pc != 0x0031FC98u) [[unlikely]] return; }
L_0031FC98:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] - 1688u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0031FD18; } }
L_0031FCA4:
    c.r[5].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[7], ld32((c.r[1].w[0] + 28324u)));
    set32(c.r[3], 0u - 2u);
    set32(c.r[2], 0u + 99u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[6].d[0] = ld8((c.r[7].w[0] + 392u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[7].w[0] + 392u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[18].w[0] + 176u)));
    st32((c.r[3].w[0] + 68u), 0u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FCD8u); st16((c.r[18].w[0] + 188u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0021(c, 410u, depth + 1u); else { c.pc = 0x001873D0u; return; } if (c.pc != 0x0031FCD8u) [[unlikely]] return; }
L_0031FCD8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], 0u - 2u);
    set32(c.r[3], ld32((c.r[1].w[0] + 28324u)));
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[4], 0u + 16u);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 392u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st8((c.r[3].w[0] + 392u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[1].w[0] + 28324u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 400u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FD18u); st8((c.r[3].w[0] + 400u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x0031FD18u) [[unlikely]] return; }
L_0031FD18:
    set32(c.r[4], ld32((c.r[18].w[0] + 320u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0031FD3C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0031FD3C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FD3Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031FD3Cu) [[unlikely]] return; }
L_0031FD3C:
    st32((c.r[18].w[0] + 320u), 0u);
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_0031FD44:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0031FD54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0031FF30; } }
L_0031FD54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FD5Cu);  if (depth < kMaxDepth) unit_0087(c, 385u, depth + 1u); else { c.pc = 0x0031F760u; return; } if (c.pc != 0x0031FD5Cu) [[unlikely]] return; }
L_0031FD5C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], 0u + 1u);
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0031FF30; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 324u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0031FF30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FD84u);  if (depth < kMaxDepth) unit_0022(c, 128u, depth + 1u); else { c.pc = 0x00188AE0u; return; } if (c.pc != 0x0031FD84u) [[unlikely]] return; }
L_0031FD84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FD8Cu); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 256u, depth + 1u); else { c.pc = 0x00189B70u; return; } if (c.pc != 0x0031FD8Cu) [[unlikely]] return; }
L_0031FD8C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[3].d[0]; set32(c.r[2], ld32((c.r[2].w[0] + 8u)));  if (t) { goto L_0031FE7C; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[2].w[0] << 1);  if (t) { goto L_0031FE50; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[2].w[0] << 1);  if (t) { goto L_0031FE24; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[4], c.r[2].w[0] << 1);  if (t) { goto L_0031FDF8; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[2].w[0] << 1);  if (t) { goto L_0031FDCC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));  if (t) { goto L_0031FEAC; } }
L_0031FDCC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + 25680u);
    set32(c.r[2], c.r[4].w[0] - c.r[2].w[0]);
    c.r[1].d[0] = c.r[1].d[0] | 24014ull;
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] + c.r[1].w[0]);  if (t) { goto L_0031FEA8; } }
L_0031FDF8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + 25680u);
    set32(c.r[2], c.r[4].w[0] - c.r[2].w[0]);
    c.r[1].d[0] = c.r[1].d[0] | 26958ull;
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] + c.r[1].w[0]);  if (t) { goto L_0031FEA8; } }
L_0031FE24:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + 25680u);
    set32(c.r[2], c.r[4].w[0] - c.r[2].w[0]);
    c.r[1].d[0] = c.r[1].d[0] | 28430ull;
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] + c.r[1].w[0]);  if (t) { goto L_0031FEA8; } }
L_0031FE50:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + 25680u);
    set32(c.r[2], c.r[4].w[0] - c.r[2].w[0]);
    c.r[1].d[0] = c.r[1].d[0] | 25486ull;
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] + c.r[1].w[0]);  if (t) { goto L_0031FEA8; } }
L_0031FE7C:
    set32(c.r[4], c.r[2].w[0] << 1);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + 25680u);
    set32(c.r[2], c.r[4].w[0] - c.r[2].w[0]);
    c.r[1].d[0] = c.r[1].d[0] | 29902ull;
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 11;
L_0031FEA8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 1;
L_0031FEAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 1000u);  if (t) { goto L_0031FEF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FEBCu); set32(c.r[4], 0u + 1000u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0031FEBCu) [[unlikely]] return; }
L_0031FEBC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[4], 0u + 561u);  if (t) { goto L_0031FEE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FED0u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x0031FED0u) [[unlikely]] return; }
L_0031FED0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FEE4u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 215u, depth + 1u); else { c.pc = 0x002AF670u; return; } if (c.pc != 0x0031FEE4u) [[unlikely]] return; }
L_0031FEE4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0031FEE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 320u), c.r[17].w[0]);  if (t) { goto L_0031FF14; } }
L_0031FEF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FEF8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0031FEF8u) [[unlikely]] return; }
L_0031FEF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0031FF10; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FF10u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 215u, depth + 1u); else { c.pc = 0x002AF670u; return; } if (c.pc != 0x0031FF10u) [[unlikely]] return; }
L_0031FF10:
    st32((c.r[18].w[0] + 320u), c.r[2].w[0]);
    c.budget -= 1;
L_0031FF14:
    set32(c.r[4], ld32((c.r[18].w[0] + 320u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FF28u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031FF28u) [[unlikely]] return; }
L_0031FF28:
    st8((c.r[18].w[0] + 324u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0031FF30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0031FF50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 1688u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0031FF7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FF74u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_0087(c, 405u, depth + 1u); else { c.pc = 0x0031F950u; return; } if (c.pc != 0x0031FF74u) [[unlikely]] return; }
L_0031FF74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0031FFD8; } }
L_0031FF7C:
    set32(c.r[2], 0u + 100u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FF8Cu); st16((c.r[16].w[0] + 190u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0021(c, 410u, depth + 1u); else { c.pc = 0x001873D0u; return; } if (c.pc != 0x0031FF8Cu) [[unlikely]] return; }
L_0031FF8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FF94u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 380u, depth + 1u); else { c.pc = 0x0031F6A0u; return; } if (c.pc != 0x0031FF94u) [[unlikely]] return; }
L_0031FF94:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 28324u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0031FFD4; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 392u));
    set32(c.r[5], 0u - 2u);
    c.r[6].d[0] = 0ull & 1ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st8((c.r[4].w[0] + 392u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[1].w[0] + 28324u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 400u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st8((c.r[4].w[0] + 400u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 12;
L_0031FFD4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0031FFD8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031FFF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    [[clang::musttail]] return unit_0088(c, 1u, depth);
}

}
