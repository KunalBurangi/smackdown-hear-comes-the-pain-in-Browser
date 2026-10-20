#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_000C[4096] = {
    1, 2, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0,
    9, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 14, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 16, 0, 0, 0, 17, 0, 0, 18, 0, 19, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0,
    26, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0,
    32, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0,
    37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0,
    0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0,
    50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0,
    54, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 58, 0, 0, 0, 0,
    59, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0,
    0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0,
    0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 74, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0,
    81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 91, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 98, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    100, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    104, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    108, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    111, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0,
    116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 123, 0,
    0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 126, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 128, 0, 0,
    0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0,
    0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 155, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0,
    158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0,
    162, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0,
    167, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0,
    175, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0,
    0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 188, 0, 189, 0, 0, 0, 190, 0, 191, 0,
    192, 0, 0, 0, 0, 0, 193, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    196, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 198, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0,
    201, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 211, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 219,
    0, 0, 220, 0, 0, 0, 0, 0, 221, 0, 222, 0, 223, 0, 0, 0, 0, 0, 0, 0, 224, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0,
    228, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 230, 0, 231, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0,
    235, 236, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 239, 0, 0, 240, 0, 0, 0, 0, 0, 0,
    241, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 251, 0, 0, 0, 0, 252, 0, 0, 0,
    0, 0, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0,
    0, 0, 0, 0, 261, 0, 0, 0, 262, 0, 263, 0, 0, 0, 0, 0, 0, 0, 264, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0,
    0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 272, 0, 0, 273, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 280, 0, 0, 281, 0, 0,
    0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287,
    288, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0,
    292, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 295, 0, 0, 0, 296, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 302, 0, 0, 303, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0,
    0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 313, 0, 0, 314, 0, 0, 315, 0, 0, 0, 0,
    0, 316, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 327, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    334, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 339, 0, 0,
    340, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 342, 0, 343, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 346, 0, 0, 347, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0,
    349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0,
    0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0,
    0, 354, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 365, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 370, 0, 0, 371, 0, 0, 372, 0,
    0, 373, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 375, 376, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 378, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 380, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 383,
    0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 386, 0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 0, 389, 0, 0, 0,
    0, 390, 0, 0, 0, 0, 391, 0, 0, 0, 0, 392, 0, 0, 0, 393, 0, 0, 0, 394, 0, 0, 0, 395, 0, 0, 0, 0, 396, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 397, 0, 398, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0,
    402, 403, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 406, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0,
    0, 408, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 412, 0, 0, 0,
    413, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0,
    418, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 422, 0, 0,
    0, 0, 0, 423, 0, 0, 0, 0, 424, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0,
    428, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 433, 0, 0,
    0, 0, 0, 434, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0,
    0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 439, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 445, 0, 0, 446, 0, 0, 447, 0, 0, 448, 0, 0, 449, 0,
    0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0,
    0, 0, 0, 0, 454, 0, 0, 0, 0, 455, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 459,
    0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 461, 0, 0, 0, 462, 0, 0, 0, 463, 0, 0, 0, 464, 0, 0, 0, 0, 465, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 466, 0, 467, 0, 468, 0, 469, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0,
    472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 474, 0, 475, 0, 0, 0, 0, 476, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0,
};

void unit_000C(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00130000;
    case 2u: goto L_00130004;
    case 3u: goto L_0013000C;
    case 4u: goto L_0013001C;
    case 5u: goto L_00130030;
    case 6u: goto L_00130054;
    case 7u: goto L_00130060;
    case 8u: goto L_00130070;
    case 9u: goto L_00130080;
    case 10u: goto L_00130090;
    case 11u: goto L_001300A0;
    case 12u: goto L_001300B0;
    case 13u: goto L_001300D8;
    case 14u: goto L_001300E0;
    case 15u: goto L_00130130;
    case 16u: goto L_00130188;
    case 17u: goto L_00130198;
    case 18u: goto L_001301A4;
    case 19u: goto L_001301AC;
    case 20u: goto L_001301BC;
    case 21u: goto L_001301E0;
    case 22u: goto L_00130208;
    case 23u: goto L_00130248;
    case 24u: goto L_00130260;
    case 25u: goto L_00130270;
    case 26u: goto L_00130280;
    case 27u: goto L_00130290;
    case 28u: goto L_001302A0;
    case 29u: goto L_001302B0;
    case 30u: goto L_001302DC;
    case 31u: goto L_001302F0;
    case 32u: goto L_00130300;
    case 33u: goto L_00130310;
    case 34u: goto L_0013033C;
    case 35u: goto L_00130350;
    case 36u: goto L_00130374;
    case 37u: goto L_00130380;
    case 38u: goto L_001303B0;
    case 39u: goto L_001303C4;
    case 40u: goto L_001303F0;
    case 41u: goto L_00130408;
    case 42u: goto L_00130438;
    case 43u: goto L_00130450;
    case 44u: goto L_0013048C;
    case 45u: goto L_001304A4;
    case 46u: goto L_001304C0;
    case 47u: goto L_001304D0;
    case 48u: goto L_001304E0;
    case 49u: goto L_001304F0;
    case 50u: goto L_00130500;
    case 51u: goto L_00130510;
    case 52u: goto L_00130530;
    case 53u: goto L_00130560;
    case 54u: goto L_00130580;
    case 55u: goto L_001305A0;
    case 56u: goto L_001305B8;
    case 57u: goto L_001305E0;
    case 58u: goto L_001305EC;
    case 59u: goto L_00130600;
    case 60u: goto L_00130608;
    case 61u: goto L_0013064C;
    case 62u: goto L_0013065C;
    case 63u: goto L_00130674;
    case 64u: goto L_00130690;
    case 65u: goto L_001306F0;
    case 66u: goto L_00130774;
    case 67u: goto L_00130790;
    case 68u: goto L_001307B0;
    case 69u: goto L_00130820;
    case 70u: goto L_001308A0;
    case 71u: goto L_001308D0;
    case 72u: goto L_001308F4;
    case 73u: goto L_00130928;
    case 74u: goto L_00130930;
    case 75u: goto L_0013093C;
    case 76u: goto L_00130998;
    case 77u: goto L_001309BC;
    case 78u: goto L_001309D4;
    case 79u: goto L_00130A04;
    case 80u: goto L_00130A70;
    case 81u: goto L_00130A80;
    case 82u: goto L_00130AAC;
    case 83u: goto L_00130BD0;
    case 84u: goto L_00130BE0;
    case 85u: goto L_00130C10;
    case 86u: goto L_00130D10;
    case 87u: goto L_00130D40;
    case 88u: goto L_00130D70;
    case 89u: goto L_00130DE0;
    case 90u: goto L_00130E68;
    case 91u: goto L_00130E74;
    case 92u: goto L_00130F2C;
    case 93u: goto L_00130F40;
    case 94u: goto L_00130FB8;
    case 95u: goto L_00130FD0;
    case 96u: goto L_00130FF8;
    case 97u: goto L_0013103C;
    case 98u: goto L_00131040;
    case 99u: goto L_00131050;
    case 100u: goto L_00131080;
    case 101u: goto L_00131088;
    case 102u: goto L_001310C0;
    case 103u: goto L_001310C4;
    case 104u: goto L_00131100;
    case 105u: goto L_00131104;
    case 106u: goto L_0013112C;
    case 107u: goto L_00131140;
    case 108u: goto L_00131180;
    case 109u: goto L_00131198;
    case 110u: goto L_001311C0;
    case 111u: goto L_00131200;
    case 112u: goto L_00131208;
    case 113u: goto L_0013128C;
    case 114u: goto L_001312A8;
    case 115u: goto L_001312E4;
    case 116u: goto L_00131300;
    case 117u: goto L_00131340;
    case 118u: goto L_00131390;
    case 119u: goto L_001313A0;
    case 120u: goto L_001313A8;
    case 121u: goto L_001313C0;
    case 122u: goto L_001313E8;
    case 123u: goto L_001313F8;
    case 124u: goto L_0013140C;
    case 125u: goto L_0013143C;
    case 126u: goto L_00131440;
    case 127u: goto L_00131458;
    case 128u: goto L_00131474;
    case 129u: goto L_00131490;
    case 130u: goto L_001314A8;
    case 131u: goto L_001314B8;
    case 132u: goto L_001314C8;
    case 133u: goto L_001314D4;
    case 134u: goto L_001314F0;
    case 135u: goto L_00131530;
    case 136u: goto L_00131578;
    case 137u: goto L_0013158C;
    case 138u: goto L_001315A0;
    case 139u: goto L_001315CC;
    case 140u: goto L_001315F8;
    case 141u: goto L_00131634;
    case 142u: goto L_0013163C;
    case 143u: goto L_0013164C;
    case 144u: goto L_00131670;
    case 145u: goto L_001316B0;
    case 146u: goto L_001316CC;
    case 147u: goto L_00131710;
    case 148u: goto L_0013173C;
    case 149u: goto L_00131768;
    case 150u: goto L_001317A4;
    case 151u: goto L_001317C0;
    case 152u: goto L_001317E8;
    case 153u: goto L_00131810;
    case 154u: goto L_0013183C;
    case 155u: goto L_00131840;
    case 156u: goto L_00131850;
    case 157u: goto L_0013186C;
    case 158u: goto L_00131880;
    case 159u: goto L_001318B0;
    case 160u: goto L_001318C0;
    case 161u: goto L_001318E0;
    case 162u: goto L_00131900;
    case 163u: goto L_0013190C;
    case 164u: goto L_00131940;
    case 165u: goto L_00131948;
    case 166u: goto L_0013196C;
    case 167u: goto L_00131980;
    case 168u: goto L_00131990;
    case 169u: goto L_001319C0;
    case 170u: goto L_001319D0;
    case 171u: goto L_001319EC;
    case 172u: goto L_00131A30;
    case 173u: goto L_00131A4C;
    case 174u: goto L_00131A6C;
    case 175u: goto L_00131A80;
    case 176u: goto L_00131A88;
    case 177u: goto L_00131AB0;
    case 178u: goto L_00131AC0;
    case 179u: goto L_00131AD4;
    case 180u: goto L_00131AE4;
    case 181u: goto L_00131AF4;
    case 182u: goto L_00131B10;
    case 183u: goto L_00131B40;
    case 184u: goto L_00131B50;
    case 185u: goto L_00131B64;
    case 186u: goto L_00131B90;
    case 187u: goto L_00131BBC;
    case 188u: goto L_00131BD8;
    case 189u: goto L_00131BE0;
    case 190u: goto L_00131BF0;
    case 191u: goto L_00131BF8;
    case 192u: goto L_00131C00;
    case 193u: goto L_00131C18;
    case 194u: goto L_00131C20;
    case 195u: goto L_00131C58;
    case 196u: goto L_00131C80;
    case 197u: goto L_00131CA4;
    case 198u: goto L_00131CB0;
    case 199u: goto L_00131CBC;
    case 200u: goto L_00131CEC;
    case 201u: goto L_00131D00;
    case 202u: goto L_00131D08;
    case 203u: goto L_00131D30;
    case 204u: goto L_00131D54;
    case 205u: goto L_00131D80;
    case 206u: goto L_00131DB4;
    case 207u: goto L_00131DF8;
    case 208u: goto L_00131E24;
    case 209u: goto L_00131E3C;
    case 210u: goto L_00131E6C;
    case 211u: goto L_00131E94;
    case 212u: goto L_00131EA0;
    case 213u: goto L_00131EC4;
    case 214u: goto L_00131ED0;
    case 215u: goto L_00131EF0;
    case 216u: goto L_00131F2C;
    case 217u: goto L_00131F48;
    case 218u: goto L_00131F6C;
    case 219u: goto L_00131F7C;
    case 220u: goto L_00131F88;
    case 221u: goto L_00131FA0;
    case 222u: goto L_00131FA8;
    case 223u: goto L_00131FB0;
    case 224u: goto L_00131FD0;
    case 225u: goto L_00131FD8;
    case 226u: goto L_00132040;
    case 227u: goto L_00132060;
    case 228u: goto L_00132080;
    case 229u: goto L_00132094;
    case 230u: goto L_001320B0;
    case 231u: goto L_001320B8;
    case 232u: goto L_001320C0;
    case 233u: goto L_001320D0;
    case 234u: goto L_001320EC;
    case 235u: goto L_00132100;
    case 236u: goto L_00132104;
    case 237u: goto L_00132120;
    case 238u: goto L_00132140;
    case 239u: goto L_00132158;
    case 240u: goto L_00132164;
    case 241u: goto L_00132180;
    case 242u: goto L_001321A0;
    case 243u: goto L_001321C8;
    case 244u: goto L_00132234;
    case 245u: goto L_00132248;
    case 246u: goto L_00132260;
    case 247u: goto L_001322BC;
    case 248u: goto L_001322E0;
    case 249u: goto L_00132340;
    case 250u: goto L_00132350;
    case 251u: goto L_0013235C;
    case 252u: goto L_00132370;
    case 253u: goto L_00132394;
    case 254u: goto L_001323A4;
    case 255u: goto L_001323B4;
    case 256u: goto L_001323E0;
    case 257u: goto L_00132414;
    case 258u: goto L_00132434;
    case 259u: goto L_00132450;
    case 260u: goto L_00132474;
    case 261u: goto L_00132490;
    case 262u: goto L_001324A0;
    case 263u: goto L_001324A8;
    case 264u: goto L_001324C8;
    case 265u: goto L_001324D0;
    case 266u: goto L_00132524;
    case 267u: goto L_00132540;
    case 268u: goto L_00132570;
    case 269u: goto L_00132590;
    case 270u: goto L_001325B0;
    case 271u: goto L_001325C0;
    case 272u: goto L_00132610;
    case 273u: goto L_0013261C;
    case 274u: goto L_00132628;
    case 275u: goto L_00132654;
    case 276u: goto L_00132660;
    case 277u: goto L_001326D0;
    case 278u: goto L_00132710;
    case 279u: goto L_0013275C;
    case 280u: goto L_00132768;
    case 281u: goto L_00132774;
    case 282u: goto L_0013278C;
    case 283u: goto L_001327B0;
    case 284u: goto L_001327C0;
    case 285u: goto L_0013283C;
    case 286u: goto L_00132840;
    case 287u: goto L_0013287C;
    case 288u: goto L_00132880;
    case 289u: goto L_0013289C;
    case 290u: goto L_001328C0;
    case 291u: goto L_001328E8;
    case 292u: goto L_00132900;
    case 293u: goto L_00132904;
    case 294u: goto L_00132958;
    case 295u: goto L_00132968;
    case 296u: goto L_00132978;
    case 297u: goto L_001329A0;
    case 298u: goto L_001329C0;
    case 299u: goto L_00132A10;
    case 300u: goto L_00132A30;
    case 301u: goto L_00132AA0;
    case 302u: goto L_00132B08;
    case 303u: goto L_00132B14;
    case 304u: goto L_00132B20;
    case 305u: goto L_00132B4C;
    case 306u: goto L_00132B58;
    case 307u: goto L_00132BE4;
    case 308u: goto L_00132BF4;
    case 309u: goto L_00132C04;
    case 310u: goto L_00132C3C;
    case 311u: goto L_00132C60;
    case 312u: goto L_00132CC4;
    case 313u: goto L_00132CD4;
    case 314u: goto L_00132CE0;
    case 315u: goto L_00132CEC;
    case 316u: goto L_00132D04;
    case 317u: goto L_00132D20;
    case 318u: goto L_00132D30;
    case 319u: goto L_00132D78;
    case 320u: goto L_00132DBC;
    case 321u: goto L_00132E44;
    case 322u: goto L_00132E64;
    case 323u: goto L_00132E98;
    case 324u: goto L_00132EC8;
    case 325u: goto L_00132EEC;
    case 326u: goto L_00132F20;
    case 327u: goto L_00132F2C;
    case 328u: goto L_00132F40;
    case 329u: goto L_00132F6C;
    case 330u: goto L_00132F94;
    case 331u: goto L_00132FB0;
    case 332u: goto L_00133038;
    case 333u: goto L_00133054;
    case 334u: goto L_00133080;
    case 335u: goto L_00133094;
    case 336u: goto L_001330B0;
    case 337u: goto L_001330C4;
    case 338u: goto L_001330EC;
    case 339u: goto L_001330F4;
    case 340u: goto L_00133100;
    case 341u: goto L_00133120;
    case 342u: goto L_00133140;
    case 343u: goto L_00133148;
    case 344u: goto L_00133168;
    case 345u: goto L_001331A4;
    case 346u: goto L_001331C0;
    case 347u: goto L_001331CC;
    case 348u: goto L_001331E8;
    case 349u: goto L_00133200;
    case 350u: goto L_00133270;
    case 351u: goto L_0013328C;
    case 352u: goto L_001332D4;
    case 353u: goto L_001332E8;
    case 354u: goto L_00133304;
    case 355u: goto L_00133318;
    case 356u: goto L_00133340;
    case 357u: goto L_00133348;
    case 358u: goto L_00133374;
    case 359u: goto L_0013339C;
    case 360u: goto L_001333BC;
    case 361u: goto L_00133410;
    case 362u: goto L_00133480;
    case 363u: goto L_001334A8;
    case 364u: goto L_001334DC;
    case 365u: goto L_001334E8;
    case 366u: goto L_00133520;
    case 367u: goto L_00133550;
    case 368u: goto L_001335A8;
    case 369u: goto L_001335D0;
    case 370u: goto L_001335E0;
    case 371u: goto L_001335EC;
    case 372u: goto L_001335F8;
    case 373u: goto L_00133604;
    case 374u: goto L_0013361C;
    case 375u: goto L_0013363C;
    case 376u: goto L_00133640;
    case 377u: goto L_00133658;
    case 378u: goto L_00133688;
    case 379u: goto L_001336A0;
    case 380u: goto L_001336B4;
    case 381u: goto L_001336C4;
    case 382u: goto L_001336E0;
    case 383u: goto L_001336FC;
    case 384u: goto L_00133710;
    case 385u: goto L_0013372C;
    case 386u: goto L_00133740;
    case 387u: goto L_00133750;
    case 388u: goto L_00133760;
    case 389u: goto L_00133770;
    case 390u: goto L_00133784;
    case 391u: goto L_00133798;
    case 392u: goto L_001337AC;
    case 393u: goto L_001337BC;
    case 394u: goto L_001337CC;
    case 395u: goto L_001337DC;
    case 396u: goto L_001337F0;
    case 397u: goto L_0013381C;
    case 398u: goto L_00133824;
    case 399u: goto L_0013382C;
    case 400u: goto L_00133850;
    case 401u: goto L_00133864;
    case 402u: goto L_00133880;
    case 403u: goto L_00133884;
    case 404u: goto L_001338A0;
    case 405u: goto L_001338CC;
    case 406u: goto L_001338D4;
    case 407u: goto L_001338F0;
    case 408u: goto L_00133904;
    case 409u: goto L_00133920;
    case 410u: goto L_0013393C;
    case 411u: goto L_00133968;
    case 412u: goto L_00133970;
    case 413u: goto L_00133980;
    case 414u: goto L_0013399C;
    case 415u: goto L_001339B4;
    case 416u: goto L_001339D0;
    case 417u: goto L_001339EC;
    case 418u: goto L_00133A00;
    case 419u: goto L_00133A20;
    case 420u: goto L_00133A34;
    case 421u: goto L_00133A60;
    case 422u: goto L_00133A74;
    case 423u: goto L_00133A8C;
    case 424u: goto L_00133AA0;
    case 425u: goto L_00133AB4;
    case 426u: goto L_00133ACC;
    case 427u: goto L_00133AE0;
    case 428u: goto L_00133B00;
    case 429u: goto L_00133B18;
    case 430u: goto L_00133B2C;
    case 431u: goto L_00133B44;
    case 432u: goto L_00133B60;
    case 433u: goto L_00133B74;
    case 434u: goto L_00133B8C;
    case 435u: goto L_00133BA0;
    case 436u: goto L_00133BC0;
    case 437u: goto L_00133BF8;
    case 438u: goto L_00133C1C;
    case 439u: goto L_00133C28;
    case 440u: goto L_00133C3C;
    case 441u: goto L_00133C70;
    case 442u: goto L_00133CB8;
    case 443u: goto L_00133CE0;
    case 444u: goto L_00133D38;
    case 445u: goto L_00133D48;
    case 446u: goto L_00133D54;
    case 447u: goto L_00133D60;
    case 448u: goto L_00133D6C;
    case 449u: goto L_00133D78;
    case 450u: goto L_00133D90;
    case 451u: goto L_00133DB0;
    case 452u: goto L_00133DC8;
    case 453u: goto L_00133DF8;
    case 454u: goto L_00133E10;
    case 455u: goto L_00133E24;
    case 456u: goto L_00133E34;
    case 457u: goto L_00133E50;
    case 458u: goto L_00133E68;
    case 459u: goto L_00133E7C;
    case 460u: goto L_00133E98;
    case 461u: goto L_00133EAC;
    case 462u: goto L_00133EBC;
    case 463u: goto L_00133ECC;
    case 464u: goto L_00133EDC;
    case 465u: goto L_00133EF0;
    case 466u: goto L_00133F1C;
    case 467u: goto L_00133F24;
    case 468u: goto L_00133F2C;
    case 469u: goto L_00133F34;
    case 470u: goto L_00133F50;
    case 471u: goto L_00133F64;
    case 472u: goto L_00133F80;
    case 473u: goto L_00133FAC;
    case 474u: goto L_00133FB4;
    case 475u: goto L_00133FBC;
    case 476u: goto L_00133FD0;
    case 477u: goto L_00133FE4;
    default: bad_entry(c, 0x00130000u); return;
    }
L_00130000:
    c.budget -= 1;
L_00130004:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013000Cu); set32(c.r[4], 0u + 400u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x0013000Cu) [[unlikely]] return; }
L_0013000C:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013001Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013001Cu) [[unlikely]] return; }
L_0013001C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00130030:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_00130058; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00130070; } }
    goto L_00130058;
L_00130054:
    c.budget -= 1;
L_00130058:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130060u); set32(c.r[4], 0u + 401u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x00130060u) [[unlikely]] return; }
L_00130060:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00130070u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00130070u) [[unlikely]] return; }
L_00130070:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00130080:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00130030u | kUnwind; return; } goto L_00130030; }
L_00130090:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012FFE0u | kUnwind; return; } [[clang::musttail]] return unit_000B(c, 479u, depth); }
L_001300A0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012FEF0u | kUnwind; return; } [[clang::musttail]] return unit_000B(c, 469u, depth); }
L_001300B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001300D8u); c.r[5].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 298u, depth + 1u); else { c.pc = 0x0012E440u; return; } if (c.pc != 0x001300D8u) [[unlikely]] return; }
L_001300D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001300E0u); set32(c.r[4], c.r[18].w[0] + 20u);  if (depth < kMaxDepth) unit_000B(c, 335u, depth + 1u); else { c.pc = 0x0012E720u; return; } if (c.pc != 0x001300E0u) [[unlikely]] return; }
L_001300E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 21248u);
    set32(c.r[3], c.r[3].w[0] - 21160u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    st32((c.r[18].w[0] + 20u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 24u), 0u);
    st32((c.r[18].w[0] + 28u), c.r[17].w[0]);
    st32((c.r[18].w[0] + 32u), c.r[16].w[0]);
    st32((c.r[18].w[0] + 36u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00130130:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001301BC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 21248u);
    set32(c.r[2], c.r[2].w[0] - 21160u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00130188; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00130188; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00130188u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00130188u) [[unlikely]] return; }
L_00130188:
    set32(c.r[4], c.r[17].w[0] + 20u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130198u); st32((c.r[17].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_000B(c, 336u, depth + 1u); else { c.pc = 0x0012E740u; return; } if (c.pc != 0x00130198u) [[unlikely]] return; }
L_00130198:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001301A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 300u, depth + 1u); else { c.pc = 0x0012E490u; return; } if (c.pc != 0x001301A4u) [[unlikely]] return; }
L_001301A4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 2;
L_001301AC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001301C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001301BCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001301BCu) [[unlikely]] return; }
L_001301BC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001301C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001301E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0013020C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00130208u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00130208u) [[unlikely]] return; }
L_00130208:
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 1;
L_0013020C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[3].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00130218; } }
    set32(c.r[3], c.r[16].w[0] + 20u);
    c.budget -= 1;
L_00130218:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00130248u); set32(c.r[5], ld32((c.r[16].w[0] + 36u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00130248u) [[unlikely]] return; }
L_00130248:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    st32((c.r[3].w[0] + 36u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00130260:
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { st32((c.r[2].w[0] + 36u), c.r[3].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E600u | kUnwind; return; } [[clang::musttail]] return unit_000B(c, 319u, depth); }
L_00130270:
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    { st32((c.r[2].w[0] + 36u), 0u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E5E0u | kUnwind; return; } [[clang::musttail]] return unit_000B(c, 318u, depth); }
L_00130280:
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    { st32((c.r[2].w[0] + 36u), 0u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E610u | kUnwind; return; } [[clang::musttail]] return unit_000B(c, 320u, depth); }
L_00130290:
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    { st32((c.r[2].w[0] + 36u), 0u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E630u | kUnwind; return; } [[clang::musttail]] return unit_000B(c, 321u, depth); }
L_001302A0:
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    { st32((c.r[2].w[0] + 36u), 0u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E640u | kUnwind; return; } [[clang::musttail]] return unit_000B(c, 322u, depth); }
L_001302B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[4].w[0] + 36u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001302DC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001302DCu); set32(c.r[5], ld32((c.r[3].w[0] + 36u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001302DCu) [[unlikely]] return; }
L_001302DC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001302F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 36u)));  c.pc = t; return; }
L_00130300:
    set32(c.r[3], ld32((c.r[5].w[0] + 24u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 36u), c.r[3].w[0]);  c.pc = t; return; }
L_00130310:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0013033C; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 24u)));
    st32((c.r[4].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013033Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013033Cu) [[unlikely]] return; }
L_0013033C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00130350:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00130374; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00130374u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00130374u) [[unlikely]] return; }
L_00130374:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00130380:
    st32((c.r[4].w[0] + 28u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 32u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0013039C; } }
    st32((c.r[3].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 20u), c.r[6].w[0]);
    c.budget -= 2;
L_0013039C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001303B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001303C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 12u, depth + 1u); else { c.pc = 0x001300B0u; return; } if (c.pc != 0x001303C4u) [[unlikely]] return; }
L_001303C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 21408u);
    set32(c.r[3], c.r[3].w[0] - 21320u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001303F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130408u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00130408u) [[unlikely]] return; }
L_00130408:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00130438; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0013041C; } }
    set32(c.r[7], c.r[7].w[0] + 20u);
    c.budget -= 1;
L_0013041C:
    set32(c.r[8], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[9], ld32((c.r[16].w[0] + 32u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130438u); c.r[10].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 371u, depth + 1u); else { c.pc = 0x0012EBA0u; return; } if (c.pc != 0x00130438u) [[unlikely]] return; }
L_00130438:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00130450:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001304A4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 21408u);
    set32(c.r[2], c.r[2].w[0] - 21320u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013048Cu); st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000C(c, 15u, depth + 1u); else { c.pc = 0x00130130u; return; } if (c.pc != 0x0013048Cu) [[unlikely]] return; }
L_0013048C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001304A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001304A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001304A4u) [[unlikely]] return; }
L_001304A4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001304A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001304C0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00130130u | kUnwind; return; } goto L_00130130; }
L_001304D0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00130350u | kUnwind; return; } goto L_00130350; }
L_001304E0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00130310u | kUnwind; return; } goto L_00130310; }
L_001304F0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00130300u | kUnwind; return; } goto L_00130300; }
L_00130500:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00130450u | kUnwind; return; } goto L_00130450; }
L_00130510:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[4].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] - 20638u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));  c.pc = t; return; }
L_00130530:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] - 20626u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));  c.pc = t; return; }
L_00130560:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[4].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] - 20636u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0])));  c.pc = t; return; }
L_00130580:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 17888u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0])));  c.pc = t; return; }
L_001305A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 7u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001305B8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 29u, depth + 1u); else { c.pc = 0x00140690u; return; } if (c.pc != 0x001305B8u) [[unlikely]] return; }
L_001305B8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], 0u + 7u);
    set32(c.r[3], c.r[3].w[0] - 21088u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001305E0u); st8((c.r[16].w[0] + 352u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000C(c, 64u, depth + 1u); else { c.pc = 0x00130690u; return; } if (c.pc != 0x001305E0u) [[unlikely]] return; }
L_001305E0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001305ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 135u, depth + 1u); else { c.pc = 0x00131530u; return; } if (c.pc != 0x001305ECu) [[unlikely]] return; }
L_001305EC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00130600:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 2;
L_00130608:
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00130674; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 21088u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013064C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013064C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013064Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013064Cu) [[unlikely]] return; }
L_0013064C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013065Cu); st32((c.r[17].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_0010(c, 31u, depth + 1u); else { c.pc = 0x00140700u; return; } if (c.pc != 0x0013065Cu) [[unlikely]] return; }
L_0013065C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00130678; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130674u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00130674u) [[unlikely]] return; }
L_00130674:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00130678:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00130690:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[5], 0u + 2u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[3], 0u + 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[2], c.r[2].w[0] - 20640u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0] + 312u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 316u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 320u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 320u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    st32((c.r[4].w[0] + 324u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 328u), c.r[5].w[0]);
    c.budget -= 23;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 332u), c.r[5].w[0]);  if (t) { goto L_0013077C; } }
    set32(c.r[2], c.r[17].w[0] << 1);
    c.budget -= 1;
L_001306F0:
    set32(c.r[3], 0u + 6u);
    set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[2], 0u + 5u);
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    st32((c.r[4].w[0] + 24u), c.r[17].w[0]);
    set32(c.r[16], c.r[4].w[0] + 24u);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 40u), 0u);
    st32((c.r[4].w[0] + 44u), 0u);
    st32((c.r[4].w[0] + 48u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 56u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    st32((c.r[4].w[0] + 64u), 0u);
    st32((c.r[4].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 316u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[3].d[0] = c.r[17].d[0];
    set32(c.r[2], c.r[17].w[0] << 1);
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[18].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 12u)));
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 13u)));
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 14u)));
    c.budget -= 33;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130774u); st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000C(c, 54u, depth + 1u); else { c.pc = 0x00130580u; return; } if (c.pc != 0x00130774u) [[unlikely]] return; }
L_00130774:
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_0013077C:
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001306F0u | kUnwind; return; } goto L_001306F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130790u);  if (depth < kMaxDepth) unit_000B(c, 123u, depth + 1u); else { c.pc = 0x0012D4A0u; return; } if (c.pc != 0x00130790u) [[unlikely]] return; }
L_00130790:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001307B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 20640u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[3], 0u + 13u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[4].w[0] + 320u)));
    set32(c.r[6], c.r[6].w[0] << 5);
    set32(c.r[18], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    st32((c.r[4].w[0] + 312u), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    st32((c.r[4].w[0] + 324u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 320u)));
    c.budget -= 20;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00130818; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 316u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00130814; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_00130814:
    st32((c.r[19].w[0] + 312u), c.r[3].w[0]);
    c.budget -= 1;
L_00130818:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001308A8; } }
L_00130820:
    set32(c.r[3], ld32((c.r[19].w[0] + 320u)));
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[2], 0u + 13u);
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[16], c.r[4].w[0] + 24u);  if (t) { goto L_00130850; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 316u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0013085C; } }
L_00130850:
    set32(c.r[2], ld32((c.r[19].w[0] + 312u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
L_0013085C:
    set32(c.r[2], ld32((c.r[19].w[0] + 316u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00130870; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 1;
L_00130870:
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[18].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 12u)));
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 13u)));
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 14u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001308A0u); st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000C(c, 54u, depth + 1u); else { c.pc = 0x00130580u; return; } if (c.pc != 0x001308A0u) [[unlikely]] return; }
L_001308A0:
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_001308A8:
    c.r[3].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00130820u | kUnwind; return; } goto L_00130820; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001308D0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 312u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00130910; } }
L_001308F4:
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00130920; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_00130910:
    c.r[3].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001308F4u | kUnwind; return; } goto L_001308F4; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00130920:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;  if (t) { goto L_00130984; } }
L_00130928:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130930u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 80u, depth + 1u); else { c.pc = 0x00130A70u; return; } if (c.pc != 0x00130930u) [[unlikely]] return; }
L_00130930:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 6u);  if (t) { goto L_0013096C; } }
L_0013093C:
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[3].w[0] + 24u);
    set32(c.r[3], ld32((c.r[3].w[0] + 40u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[16].d[0];  if (t) { goto L_00130968; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00130968; } }
    st32((c.r[5].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 1;
L_00130968:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0013096C:
    set32(c.r[3], ld32((c.r[17].w[0] + 312u)));
    c.r[3].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[6].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013093Cu | kUnwind; return; } goto L_0013093C; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 2;
L_00130984:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00130928u | kUnwind; return; } goto L_00130928; } }
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 24u);  if (t) { goto L_001309B4; } }
L_00130998:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00130998u | kUnwind; return; } goto L_00130998; } }
L_001309B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001309F0; } }
L_001309BC:
    set32(c.r[2], c.r[16].w[0] << 2);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001309D4u); set32(c.r[18], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_000C(c, 83u, depth + 1u); else { c.pc = 0x00130BD0u; return; } if (c.pc != 0x001309D4u) [[unlikely]] return; }
L_001309D4:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001309EC; } }
    st32((c.r[18].w[0]), 0u);
    c.budget -= 1;
L_001309EC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001309F0:
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001309BCu | kUnwind; return; } goto L_001309BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 6u);  if (t) { goto L_00130A40; } }
L_00130A04:
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[3].w[0] + 24u);
    set32(c.r[3], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00130A38; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 64u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_00130A3C; } }
L_00130A38:
    st32((c.r[5].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 1;
L_00130A3C:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_00130A40:
    set32(c.r[3], ld32((c.r[17].w[0] + 312u)));
    c.r[3].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[6].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00130A04u | kUnwind; return; } goto L_00130A04; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00130A70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], c.r[29].w[0]);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 24u);  if (t) { goto L_00130A9C; } }
L_00130A80:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00130A80u | kUnwind; return; } goto L_00130A80; } }
L_00130A9C:
    c.r[8].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 6u);  if (t) { goto L_00130AE4; } }
L_00130AAC:
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[2].w[0] + 24u);
    set32(c.r[2], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_00130AE0; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[2], c.r[8].w[0] << 2);  if (t) { goto L_00130AE0; } }
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[8], c.r[8].w[0] + 1u);
    st32((c.r[2].w[0]), c.r[6].w[0]);
    c.budget -= 3;
L_00130AE0:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_00130AE4:
    set32(c.r[2], ld32((c.r[4].w[0] + 312u)));
    c.r[2].d[0] = c.r[7].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[7].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00130AACu | kUnwind; return; } goto L_00130AAC; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != 0ull; c.r[1].d[0] = c.r[8].sd[0] < 3ll ? 1ull : 0ull;  if (t) { goto L_00130B04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00130BB8; } }
L_00130B04:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_00130B78; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[7], ld32((c.r[29].w[0])));
    set32(c.r[4], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[7].w[0] + 8u)));
    c.r[1].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00130B50; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[1].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00130B44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[7].w[0] + 12u)));  if (t) { goto L_00130B48; } }
L_00130B44:
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 1;
L_00130B48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[29], c.r[29].w[0] + 32u);  if (t) { goto L_00130BBC; } }
L_00130B50:
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00130B6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[5].w[0] + 12u)));  if (t) { goto L_00130B70; } }
L_00130B6C:
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 1;
L_00130B70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00130BB8; } }
L_00130B78:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != c.r[2].d[0];  if (t) { goto L_00130BB0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00130BA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[5].w[0] + 12u)));  if (t) { goto L_00130BA8; } }
L_00130BA4:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_00130BA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00130BB8; } }
L_00130BB0:
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 2;
L_00130BB8:
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 1;
L_00130BBC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00130BD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], c.r[29].w[0]);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 24u);  if (t) { goto L_00130BFC; } }
L_00130BE0:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00130BE0u | kUnwind; return; } goto L_00130BE0; } }
L_00130BFC:
    c.r[8].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 6u);  if (t) { goto L_00130C4C; } }
    set32(c.r[2], c.r[7].w[0] << 1);
    c.budget -= 1;
L_00130C10:
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[2].w[0] + 24u);
    set32(c.r[2], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_00130C48; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00130C48; } }
    set32(c.r[2], c.r[8].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[8], c.r[8].w[0] + 1u);
    st32((c.r[2].w[0]), c.r[6].w[0]);
    c.budget -= 4;
L_00130C48:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_00130C4C:
    set32(c.r[2], ld32((c.r[4].w[0] + 312u)));
    c.r[2].d[0] = c.r[7].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[7].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00130C10u | kUnwind; return; } goto L_00130C10; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != 0ull; c.r[1].d[0] = c.r[8].sd[0] < 3ll ? 1ull : 0ull;  if (t) { goto L_00130C70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00130CF8; } }
    c.r[1].d[0] = c.r[8].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 1;
L_00130C70:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_00130CC8; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00130CAC; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    if (c.r[1].d[0] == 0) c.r[2].d[0] = c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[29], c.r[29].w[0] + 32u);  if (t) { goto L_00130CFC; } }
L_00130CAC:
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    if (c.r[1].d[0] == 0) c.r[3].d[0] = c.r[2].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_00130CF8; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_00130CC8:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != c.r[2].d[0];  if (t) { goto L_00130CF0; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    if (c.r[1].d[0] == 0) c.r[2].d[0] = c.r[3].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00130CF8; } }
L_00130CF0:
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 2;
L_00130CF8:
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 1;
L_00130CFC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00130D10:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[3].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00130D4C; } }
L_00130D40:
    set32(c.r[2], c.r[3].w[0] + c.r[29].w[0]);
    st8((c.r[2].w[0] + 136u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
L_00130D4C:
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00130D40u | kUnwind; return; } goto L_00130D40; } }
    set32(c.r[5], ld32((c.r[21].w[0] + 312u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 6u);  if (t) { goto L_00130D9C; } }
L_00130D70:
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; c.r[1].d[0] = c.r[2].sd[0] < 7ll ? 1ull : 0ull;  if (t) { goto L_00130D98; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00130D98; } }
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    st8((c.r[2].w[0] + 136u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00130D98:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_00130D9C:
    c.r[2].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[6].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00130D70u | kUnwind; return; } goto L_00130D70; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 320u)));
    c.r[19].d[0] = c.r[5].sd[0] < 5ll ? 1ull : 0ull;
    set32(c.r[2], c.r[4].w[0] - 58u);
    c.r[3].d[0] = c.r[4].d[0] ^ 84ull;
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[20].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_00130DD0; } }
    set32(c.r[2], 0u + 60u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00130DD8; } }
L_00130DD0:
    c.r[19].d[0] = 0ull + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00130DD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;  if (t) { goto L_00130F84; } }
L_00130DE0:
    set32(c.r[3], c.r[18].w[0] << 5);
    set32(c.r[4], c.r[2].w[0] + c.r[18].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 8384u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[16], c.r[2].w[0] + 256u);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[3].w[0] + 24u);  if (t) { goto L_00130E18; } }
    set32(c.r[2], 0u + 25500u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00130F7C; } }
L_00130E18:
    set32(c.r[3], ld32((c.r[21].w[0] + 320u)));
    set32(c.r[2], 0u + 13u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00130E50; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[1].d[0] = c.r[2].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00130E48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00130EAC; } }
L_00130E48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00130EAC; } }
L_00130E50:
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00130EA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;  if (t) { goto L_00130E90; } }
L_00130E68:
    set32(c.r[3], c.r[2].w[0] + 136u);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00130E88; } }
    goto L_00130E78;
L_00130E74:
    c.budget -= 1;
L_00130E78:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00130E98; } }
L_00130E88:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 2;
L_00130E90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] + c.r[29].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00130E68u | kUnwind; return; } goto L_00130E68; } }
L_00130E98:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00130EAC; } }
L_00130EA4:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00130EAC:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_00130EF8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_00130EEC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00130EE4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00130EDC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), 0u);  if (t) { goto L_00130EFC; } }
L_00130EDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00130EFC; } }
L_00130EE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_00130EFC; } }
L_00130EEC:
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_00130EFC; } }
L_00130EF8:
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 1;
L_00130EFC:
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[2], 0u + 25500u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00130F48; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 32u)));
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130F2Cu); c.r[8].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_000B(c, 99u, depth + 1u); else { c.pc = 0x0012CCE0u; return; } if (c.pc != 0x00130F2Cu) [[unlikely]] return; }
L_00130F2C:
    st16((c.r[16].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.r[22].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 36u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130F40u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00130F40u) [[unlikely]] return; }
L_00130F40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 364u), static_cast<std::uint8_t>(c.r[22].w[0]));  if (t) { goto L_00130F4C; } }
L_00130F48:
    st16((c.r[16].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00130F4C:
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], 0u + 255u);
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 14u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 15u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 16u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 17u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 18u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 12;
L_00130F7C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 2;
L_00130F84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[18].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00130DE0u | kUnwind; return; } goto L_00130DE0; } }
    set32(c.r[2], 0u + 25500u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st16((c.r[1].w[0] + 8842u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st16((c.r[1].w[0] + 8874u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] + 8384u);
    c.r[4].d[0] = ld8((c.r[21].w[0] + 320u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130FB8u); set32(c.r[6], c.r[6].w[0] - 18086u);  if (depth < kMaxDepth) unit_0020(c, 139u, depth + 1u); else { c.pc = 0x00181BF0u; return; } if (c.pc != 0x00130FB8u) [[unlikely]] return; }
L_00130FB8:
    set32(c.r[3], ld32((c.r[21].w[0] + 320u)));
    set32(c.r[2], 0u + 71u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_00131044; } }
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 2;
L_00130FD0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[16].w[0] << 6);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 340u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 8384u);
    set32(c.r[6], c.r[6].w[0] - 18086u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130FF8u); set32(c.r[5], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_0020(c, 139u, depth + 1u); else { c.pc = 0x00181BF0u; return; } if (c.pc != 0x00130FF8u) [[unlikely]] return; }
L_00130FF8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00130FD0u | kUnwind; return; } goto L_00130FD0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[1].w[0] + 9260u), 0u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[1].w[0] + 9256u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 8384u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[5], c.r[5].w[0] + 8448u);
    set32(c.r[6], 0u + 64u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013103Cu); st32((c.r[1].w[0] + 9264u), 0u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0013103Cu) [[unlikely]] return; }
L_0013103C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00131048; } }
    goto L_00131044;
L_00131040:
    c.budget -= 1;
L_00131044:
    st32((c.r[1].w[0] + 9256u), 0u);
    c.budget -= 1;
L_00131048:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131050u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00131050u) [[unlikely]] return; }
L_00131050:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 21777u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001311E8; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 320u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 61u);  if (t) { goto L_0013107C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001311E8; } }
L_0013107C:
    set32(c.r[3], c.r[29].w[0] + 128u);
    c.budget -= 1;
L_00131080:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 8u);  if (t) { goto L_001310A4; } }
L_00131088:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00131088u | kUnwind; return; } goto L_00131088; } }
L_001310A4:
    set32(c.r[2], ld32((c.r[21].w[0] + 52u)));
    set32(c.r[16], c.r[29].w[0] + 132u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 128u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 100u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001310C4u); st32((c.r[29].w[0] + 132u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001C(c, 367u, depth + 1u); else { c.pc = 0x00173F90u; return; } if (c.pc != 0x001310C4u) [[unlikely]] return; }
    goto L_001310C4;
L_001310C0:
    st32((c.r[29].w[0] + 132u), c.r[2].w[0]);
    c.budget -= 1;
L_001310C4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 25500u);
    set32(c.r[5], ld32((c.r[29].w[0] + 128u)));
    c.r[19].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 25500ull;
    c.r[4].d[0] = c.r[5].d[0] ^ 25500ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[20], c.r[4].w[0] + c.r[3].w[0]);  if (t) { goto L_001310F0; } }
    set32(c.r[19], 0u + 1u);
    c.budget -= 1;
L_001310F0:
    c.r[1].d[0] = c.r[20].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[18], 0u + 2u);  if (t) { goto L_001311E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;  if (t) { goto L_001311E0; } }
    goto L_00131104;
L_00131100:
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 1;
L_00131104:
    set32(c.r[3], c.r[18].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + 8384u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], c.r[3].w[0] + 256u);
    set32(c.r[2], 0u + 25500u);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 266u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001311D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;  if (t) { goto L_00131154; } }
L_0013112C:
    set32(c.r[3], c.r[2].w[0] + 136u);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013114C; } }
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 1;
L_00131140:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0013115C; } }
L_0013114C:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 2;
L_00131154:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] + c.r[29].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013112Cu | kUnwind; return; } goto L_0013112C; } }
L_0013115C:
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], 0u + 3u);
    st8((c.r[17].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[18].w[0] - 2u);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[16], c.r[19].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 9;
L_00131180:
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 128u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131198u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 99u, depth + 1u); else { c.pc = 0x0012CCE0u; return; } if (c.pc != 0x00131198u) [[unlikely]] return; }
L_00131198:
    st16((c.r[17].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 5u);
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[3], 0u + 255u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 10;
L_001311C0:
    st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[2], 0u + 2u);
    st8((c.r[17].w[0] + 12u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[17].w[0] + 13u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = c.r[20].d[0] == c.r[2].d[0]; st8((c.r[17].w[0] + 18u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001311E8; } }
L_001311D8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 2;
L_001311E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00131104u | kUnwind; return; } goto L_00131104; } }
L_001311E8:
    set32(c.r[2], ld32((c.r[21].w[0] + 320u)));
    set32(c.r[4], 0u + 82u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_00131200; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131200u);  if (depth < kMaxDepth) unit_002A(c, 91u, depth + 1u); else { c.pc = 0x001A90E0u; return; } if (c.pc != 0x00131200u) [[unlikely]] return; }
L_00131200:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131208u); set32(c.r[4], 0u + 17u);  if (depth < kMaxDepth) unit_000B(c, 98u, depth + 1u); else { c.pc = 0x0012CCC0u; return; } if (c.pc != 0x00131208u) [[unlikely]] return; }
L_00131208:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00131248; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 328u)));
    c.r[2].d[0] = c.r[3].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 35u);  if (t) { goto L_00131248; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_00131240; } }
    set32(c.r[2], 0u + 23u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 8897u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00131254; } }
L_00131240:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 8897u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00131254; } }
L_00131248:
    set32(c.r[2], ld32((c.r[21].w[0] + 332u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st8((c.r[1].w[0] + 8897u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00131254:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], ld32((c.r[21].w[0] + 328u)));
    c.r[2].d[0] = ld8((c.r[1].w[0] + 8417u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st8((c.r[1].w[0] + 8896u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[21].w[0] + 328u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; st8((c.r[1].w[0] + 8898u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00131334; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 8384u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 25500u);  if (t) { goto L_00131328; } }
L_0013128C:
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[2].w[0] + 256u);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 266u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00131324; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001312C0; } }
L_001312A8:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 136u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001312BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001312CC; } }
L_001312BC:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_001312C0:
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] + c.r[29].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001312A8u | kUnwind; return; } goto L_001312A8; } }
L_001312CC:
    set32(c.r[2], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] + 8896u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001312E4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 149u, depth + 1u); else { c.pc = 0x0012D650u; return; } if (c.pc != 0x001312E4u) [[unlikely]] return; }
L_001312E4:
    set32(c.r[4], 0u + 51u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131300u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 99u, depth + 1u); else { c.pc = 0x0012CCE0u; return; } if (c.pc != 0x00131300u) [[unlikely]] return; }
L_00131300:
    st16((c.r[16].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 5u);
    set32(c.r[2], 0u + 6u);
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 255u);
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 18u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00131334; } }
L_00131324:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_00131328:
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[5].w[0] << 5);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013128Cu | kUnwind; return; } goto L_0013128C; } }
L_00131334:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131340u); st8((c.r[1].w[0] + 8899u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00131340u) [[unlikely]] return; }
L_00131340:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 21787u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st8((c.r[1].w[0] + 8900u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st8((c.r[1].w[0] + 8982u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00131390:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001313A0u);  if (depth < kMaxDepth) unit_0051(c, 25u, depth + 1u); else { c.pc = 0x002441D0u; return; } if (c.pc != 0x001313A0u) [[unlikely]] return; }
L_001313A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001313A8u);  if (depth < kMaxDepth) unit_0091(c, 287u, depth + 1u); else { c.pc = 0x00346230u; return; } if (c.pc != 0x001313A8u) [[unlikely]] return; }
L_001313A8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001313C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001313E8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001313E8u) [[unlikely]] return; }
L_001313E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001314D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001313F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 134u, depth + 1u); else { c.pc = 0x001314F0u; return; } if (c.pc != 0x001313F8u) [[unlikely]] return; }
L_001313F8:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013140Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013140Cu) [[unlikely]] return; }
L_0013140C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013141C; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 352u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0013141C:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], 0u + 27u);  if (t) { goto L_00131444; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00131440; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00131440u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00131440u) [[unlikely]] return; }
    goto L_00131440;
L_0013143C:
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_00131440:
    set32(c.r[2], 0u + 27u);
    c.budget -= 1;
L_00131444:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; st32((c.r[17].w[0] + 12u), 0u);  if (t) { goto L_00131460; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131458u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 135u, depth + 1u); else { c.pc = 0x00131530u; return; } if (c.pc != 0x00131458u) [[unlikely]] return; }
L_00131458:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 352u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001314D4; } }
L_00131460:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131474u); st32((c.r[29].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00131474u) [[unlikely]] return; }
L_00131474:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 20u)));  if (t) { goto L_00131490; } }
    set32(c.r[25], ld32((c.r[17].w[0] + 8u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00131490u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00131490u) [[unlikely]] return; }
L_00131490:
    set32(c.r[2], 0u + 21u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001314C0; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001314A8u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001314A8u) [[unlikely]] return; }
L_001314A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001314C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001314B8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 4u, depth + 1u); else { c.pc = 0x00138030u; return; } if (c.pc != 0x001314B8u) [[unlikely]] return; }
L_001314B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 60u)));  if (t) { goto L_001314CC; } }
L_001314C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001314C8u);  if (depth < kMaxDepth) unit_002A(c, 68u, depth + 1u); else { c.pc = 0x001A8F80u; return; } if (c.pc != 0x001314C8u) [[unlikely]] return; }
L_001314C8:
    set32(c.r[4], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 1;
L_001314CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001314D4u);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x001314D4u) [[unlikely]] return; }
L_001314D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001314F0:
    set32(c.r[6], ld32((c.r[4].w[0] + 16u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[3].w[0] - 21184u);
    set32(c.r[2], c.r[2].w[0] - 21472u);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 16;
    { set32(c.r[25], c.r[2].w[0] + 12u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00100B10u | kUnwind; return; } [[clang::musttail]] return unit_0000(c, 106u, depth); }
L_00131530:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], c.r[2].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] - 21184u);
    set32(c.r[6], c.r[6].w[0] << 2);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[6], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 21472u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131578u); set32(c.r[25], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0000(c, 106u, depth + 1u); else { c.pc = 0x00100B10u; return; } if (c.pc != 0x00131578u) [[unlikely]] return; }
L_00131578:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013158Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013158Cu) [[unlikely]] return; }
L_0013158C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001315A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], c.r[4].w[0] - 8512u);
    set32(c.r[5], 0u + 160u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001315CCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x001315CCu) [[unlikely]] return; }
L_001315CC:
    set32(c.r[3], c.r[17].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] - 21184u);
    set32(c.r[4], c.r[3].w[0] << 2);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[2].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[16], ld32((c.r[7].w[0] + 12u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - 8512u);  if (t) { goto L_00131620; } }
L_001315F8:
    set32(c.r[4], ld32((c.r[7].w[0] + 8u)));
    set32(c.r[2], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[6].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    st32((c.r[2].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 10;
L_00131620:
    c.r[2].d[0] = c.r[6].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 976u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001315F8u | kUnwind; return; } goto L_001315F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131634u); st32((c.r[18].w[0] + 16u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00131634u) [[unlikely]] return; }
L_00131634:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_00131650; } }
    goto L_00131640;
L_0013163C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 1;
L_00131640:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013164Cu); set32(c.r[5], c.r[5].w[0] - 8512u);  if (depth < kMaxDepth) unit_000C(c, 362u, depth + 1u); else { c.pc = 0x00133480u; return; } if (c.pc != 0x0013164Cu) [[unlikely]] return; }
L_0013164C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00131650:
    st32((c.r[18].w[0] + 12u), c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00131670:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 21184u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001316B0u); set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001316B0u) [[unlikely]] return; }
L_001316B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001316F0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001316CCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001316CCu) [[unlikely]] return; }
L_001316CC:
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[16].w[0] + 320u), c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[3].w[0])));  if (t) { goto L_001316FC; } }
L_001316F0:
    set32(c.r[2], 0u + 6u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
L_001316FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00131710:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], c.r[4].w[0] - 8352u);
    set32(c.r[5], 0u + 160u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013173Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x0013173Cu) [[unlikely]] return; }
L_0013173C:
    set32(c.r[3], c.r[17].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] - 21184u);
    set32(c.r[4], c.r[3].w[0] << 2);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[2].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[16], ld32((c.r[7].w[0] + 12u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - 8352u);  if (t) { goto L_00131790; } }
L_00131768:
    set32(c.r[4], ld32((c.r[7].w[0] + 8u)));
    set32(c.r[2], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[6].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    st32((c.r[2].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 10;
L_00131790:
    c.r[2].d[0] = c.r[6].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 448u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00131768u | kUnwind; return; } goto L_00131768; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001317A4u); st32((c.r[18].w[0] + 16u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001317A4u) [[unlikely]] return; }
L_001317A4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_001317C4; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001317C0u); set32(c.r[5], c.r[5].w[0] - 8352u);  if (depth < kMaxDepth) unit_000D(c, 105u, depth + 1u); else { c.pc = 0x00134EC0u; return; } if (c.pc != 0x001317C0u) [[unlikely]] return; }
L_001317C0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001317C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[2], c.r[2].w[0] - 4624u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001317E8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001317E8u) [[unlikely]] return; }
L_001317E8:
    st32((c.r[18].w[0] + 12u), c.r[17].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00131810:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 21184u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 11;
L_0013183C:
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 1;
L_00131840:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00131850u); set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00131850u) [[unlikely]] return; }
L_00131850:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00131890; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013186Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013186Cu) [[unlikely]] return; }
L_0013186C:
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
L_00131880:
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[16].w[0] + 320u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[3].w[0])));  if (t) { goto L_0013189C; } }
L_00131890:
    set32(c.r[2], 0u + 6u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
L_0013189C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001318B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.budget -= 4;
L_001318C0:
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[4].w[0] - 8192u);
    set32(c.r[5], 0u + 160u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001318E0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x001318E0u) [[unlikely]] return; }
L_001318E0:
    set32(c.r[3], c.r[18].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] - 21184u);
    set32(c.r[4], c.r[3].w[0] << 2);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[2].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 8;
L_00131900:
    set32(c.r[16], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - 8192u);  if (t) { goto L_00131934; } }
L_0013190C:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[6].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    st32((c.r[2].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 10;
L_00131934:
    c.r[2].d[0] = c.r[6].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 624u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013190Cu | kUnwind; return; } goto L_0013190C; } }
L_00131940:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131948u); st32((c.r[19].w[0] + 16u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00131948u) [[unlikely]] return; }
L_00131948:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00131970; } }
    set32(c.r[7], ld32((c.r[17].w[0] + 16u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 8192u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013196Cu); set32(c.r[8], 0u + 830u);  if (depth < kMaxDepth) unit_000D(c, 27u, depth + 1u); else { c.pc = 0x00134250u; return; } if (c.pc != 0x0013196Cu) [[unlikely]] return; }
L_0013196C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00131970:
    st32((c.r[19].w[0] + 12u), c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.budget -= 4;
L_00131980:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00131990:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 21184u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 12;
L_001319C0:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001319D0u); set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001319D0u) [[unlikely]] return; }
L_001319D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00131A10; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001319ECu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001319ECu) [[unlikely]] return; }
L_001319EC:
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[16].w[0] + 320u), c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[3].w[0])));  if (t) { goto L_00131A1C; } }
L_00131A10:
    set32(c.r[2], 0u + 6u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
L_00131A1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00131A30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131A4Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 22u, depth + 1u); else { c.pc = 0x002441A0u; return; } if (c.pc != 0x00131A4Cu) [[unlikely]] return; }
L_00131A4C:
    set32(c.r[3], ld32((c.r[17].w[0] + 320u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 20640u);
    set32(c.r[4], 0u + 176u);
    st32((c.r[17].w[0] + 16u), c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131A6Cu); set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00131A6Cu) [[unlikely]] return; }
L_00131A6C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00131A8C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 2;
L_00131A80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131A88u); set32(c.r[7], 0u + 255u);  if (depth < kMaxDepth) unit_00A6(c, 57u, depth + 1u); else { c.pc = 0x00398A10u; return; } if (c.pc != 0x00131A88u) [[unlikely]] return; }
L_00131A88:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00131A8C:
    st32((c.r[17].w[0] + 12u), c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00131AB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
L_00131AC0:
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00131AD4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00131AD4u) [[unlikely]] return; }
L_00131AD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00131AEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131AE4u);  if (depth < kMaxDepth) unit_000C(c, 68u, depth + 1u); else { c.pc = 0x001307B0u; return; } if (c.pc != 0x00131AE4u) [[unlikely]] return; }
L_00131AE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 22u);  if (t) { goto L_00131AF8; } }
L_00131AEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131AF4u);  if (depth < kMaxDepth) unit_0051(c, 4u, depth + 1u); else { c.pc = 0x00244030u; return; } if (c.pc != 0x00131AF4u) [[unlikely]] return; }
L_00131AF4:
    set32(c.r[2], 0u + 13u);
    c.budget -= 1;
L_00131AF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00131B10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 13u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 320u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00131B44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131B40u); c.r[16].d[0] = ld8((c.r[18].w[0] + 316u));  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x00131B40u) [[unlikely]] return; }
L_00131B40:
    st8((c.r[2].w[0] + 519u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.budget -= 1;
L_00131B44:
    set32(c.r[4], 0u + 8544u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131B50u); st32((c.r[18].w[0] + 16u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00131B50u) [[unlikely]] return; }
L_00131B50:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], c.r[18].w[0] + 24u);  if (t) { goto L_00131B68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131B64u);  if (depth < kMaxDepth) unit_007F(c, 469u, depth + 1u); else { c.pc = 0x002FF8D0u; return; } if (c.pc != 0x00131B64u) [[unlikely]] return; }
L_00131B64:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00131B68:
    st32((c.r[18].w[0] + 12u), c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00131B90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00131BBCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00131BBCu) [[unlikely]] return; }
L_00131BBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00131BF0; } }
    set32(c.r[2], 0u + 15u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 328u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131BD8u); st32((c.r[16].w[0] + 332u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000C(c, 86u, depth + 1u); else { c.pc = 0x00130D10u; return; } if (c.pc != 0x00131BD8u) [[unlikely]] return; }
L_00131BD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131BE0u);  if (depth < kMaxDepth) unit_0020(c, 149u, depth + 1u); else { c.pc = 0x00181DF0u; return; } if (c.pc != 0x00131BE0u) [[unlikely]] return; }
L_00131BE0:
    set32(c.r[3], 0u + 21u);
    set32(c.r[2], 0u + 27u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_00131C5C; } }
L_00131BF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131BF8u); set32(c.r[17], 0u + 25500u);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x00131BF8u) [[unlikely]] return; }
L_00131BF8:
    set32(c.r[3], c.r[18].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_00131C00:
    set32(c.r[18], c.r[18].w[0] + 1u);
    st16((c.r[2].w[0] + 520u), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.r[2].d[0] = c.r[18].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00131BF0u | kUnwind; return; } goto L_00131BF0; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00131C18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131C20u); set32(c.r[17], 0u + 25500u);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x00131C20u) [[unlikely]] return; }
L_00131C20:
    set32(c.r[3], c.r[18].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    st16((c.r[2].w[0] + 580u), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.r[2].d[0] = c.r[18].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00131C18u | kUnwind; return; } goto L_00131C18; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 316u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[2], 0u + 22u);  if (t) { goto L_00131C50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00131C60; } }
L_00131C50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131C58u);  if (depth < kMaxDepth) unit_0051(c, 4u, depth + 1u); else { c.pc = 0x00244030u; return; } if (c.pc != 0x00131C58u) [[unlikely]] return; }
L_00131C58:
    set32(c.r[2], 0u + 20u);
    c.budget -= 1;
L_00131C5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00131C60:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00131C80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131CA4u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 92u, depth + 1u); else { c.pc = 0x002B8670u; return; } if (c.pc != 0x00131CA4u) [[unlikely]] return; }
L_00131CA4:
    set32(c.r[4], ld32((c.r[18].w[0] + 100u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131CB0u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 92u, depth + 1u); else { c.pc = 0x002B8670u; return; } if (c.pc != 0x00131CB0u) [[unlikely]] return; }
L_00131CB0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131CBCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0089(c, 320u, depth + 1u); else { c.pc = 0x00326A20u; return; } if (c.pc != 0x00131CBCu) [[unlikely]] return; }
L_00131CBC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], 0u + 20u);
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00131CDC; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[4], 0u + 736u);  if (t) { goto L_00131CE4; } }
L_00131CDC:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 736u);
    c.budget -= 2;
L_00131CE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131CECu); st32((c.r[18].w[0] + 16u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00131CECu) [[unlikely]] return; }
L_00131CEC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00131D0C; } }
    c.r[6].d[0] = ld8((c.r[18].w[0] + 352u));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_00131D00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131D08u); set32(c.r[5], c.r[18].w[0] + 340u);  if (depth < kMaxDepth) unit_0089(c, 344u, depth + 1u); else { c.pc = 0x00326CE0u; return; } if (c.pc != 0x00131D08u) [[unlikely]] return; }
L_00131D08:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00131D0C:
    st32((c.r[18].w[0] + 12u), c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00131D30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00131D54u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00131D54u) [[unlikely]] return; }
L_00131D54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00131D68; } }
    st8((c.r[16].w[0] + 353u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 23u);  if (t) { goto L_00131D6C; } }
L_00131D68:
    set32(c.r[2], 0u + 22u);
    c.budget -= 1;
L_00131D6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00131D80:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[4].w[0] - 8032u);
    set32(c.r[5], 0u + 56u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131DB4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x00131DB4u) [[unlikely]] return; }
L_00131DB4:
    set32(c.r[5], ld32((c.r[20].w[0] + 320u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], c.r[4].w[0] - 20640u);
    set32(c.r[2], c.r[2].w[0] - 4608u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] << 5);
    set32(c.r[18], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    set32(c.r[5], c.r[4].w[0] - 2u);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[17], c.r[5].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 17;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - 8032u);  if (t) { goto L_00131E10; } }
L_00131DF8:
    set32(c.r[2], c.r[6].w[0] << 3);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[2].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 6;
L_00131E10:
    c.r[2].d[0] = c.r[6].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[6].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00131DF8u | kUnwind; return; } goto L_00131DF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00131E48; } }
L_00131E24:
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[2], ld32((c.r[1].w[0] - 1536u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131E3Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 336u, depth + 1u); else { c.pc = 0x0013F580u; return; } if (c.pc != 0x00131E3Cu) [[unlikely]] return; }
L_00131E3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00131E54; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00131E48:
    c.r[2].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00131E24u | kUnwind; return; } goto L_00131E24; } }
L_00131E54:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 8032u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[17].w[0] - 1u);  if (t) { goto L_00131E80; } }
L_00131E6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[6].w[0] << 3);  if (t) { goto L_00131E7C; } }
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 2;
L_00131E7C:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_00131E80:
    c.r[2].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[6].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00131E6Cu | kUnwind; return; } goto L_00131E6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131E94u);  if (depth < kMaxDepth) unit_000B(c, 152u, depth + 1u); else { c.pc = 0x0012D6E0u; return; } if (c.pc != 0x00131E94u) [[unlikely]] return; }
L_00131E94:
    set32(c.r[4], 0u + 608u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131EA0u); st32((c.r[20].w[0] + 16u), c.r[19].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00131EA0u) [[unlikely]] return; }
L_00131EA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00131EC4; } }
    set32(c.r[7], ld32((c.r[18].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[8], ld32((c.r[18].w[0] + 8u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131EC4u); set32(c.r[5], c.r[5].w[0] - 8032u);  if (depth < kMaxDepth) unit_000C(c, 436u, depth + 1u); else { c.pc = 0x00133BC0u; return; } if (c.pc != 0x00131EC4u) [[unlikely]] return; }
L_00131EC4:
    st32((c.r[20].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131ED0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0053(c, 59u, depth + 1u); else { c.pc = 0x0024C560u; return; } if (c.pc != 0x00131ED0u) [[unlikely]] return; }
L_00131ED0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00131EF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 20640u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 320u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00131F2Cu); set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00131F2Cu) [[unlikely]] return; }
L_00131F2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013203C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00131F48u); c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00131F48u) [[unlikely]] return; }
L_00131F48:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_00131F58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 316u), 0u);  if (t) { goto L_00131F74; } }
L_00131F58:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00131F6Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00131F6Cu) [[unlikely]] return; }
L_00131F6C:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 316u), c.r[2].w[0]);
    c.budget -= 2;
L_00131F74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131F7Cu); c.r[17].d[0] = ld8((c.r[16].w[0] + 316u));  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x00131F7Cu) [[unlikely]] return; }
L_00131F7C:
    st8((c.r[2].w[0] + 518u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131F88u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 68u, depth + 1u); else { c.pc = 0x001307B0u; return; } if (c.pc != 0x00131F88u) [[unlikely]] return; }
L_00131F88:
    set32(c.r[3], ld32((c.r[16].w[0] + 320u)));
    set32(c.r[2], 0u + 13u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0013200C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131FA0u);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x00131FA0u) [[unlikely]] return; }
L_00131FA0:
    st8((c.r[2].w[0] + 519u), static_cast<std::uint8_t>(0u));
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00131FA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131FB0u); set32(c.r[17], 0u + 25500u);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x00131FB0u) [[unlikely]] return; }
L_00131FB0:
    set32(c.r[3], c.r[18].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    st16((c.r[2].w[0] + 520u), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.r[2].d[0] = c.r[18].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00131FA8u | kUnwind; return; } goto L_00131FA8; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00131FD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131FD8u); set32(c.r[17], 0u + 25500u);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x00131FD8u) [[unlikely]] return; }
L_00131FD8:
    set32(c.r[3], c.r[18].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    st16((c.r[2].w[0] + 580u), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.r[2].d[0] = c.r[18].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00131FD0u | kUnwind; return; } goto L_00131FD0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 316u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[2], 0u + 19u);  if (t) { goto L_00132004; } }
    set32(c.r[2], 0u + 22u);
    c.budget -= 1;
L_00132004:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00132044; } }
L_0013200C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    c.r[1].d[0] = c.r[2].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 22u);  if (t) { goto L_0013202C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 316u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 21u);  if (t) { goto L_00132034; } }
    set32(c.r[2], 0u + 22u);
    c.budget -= 1;
L_0013202C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00132040; } }
L_00132034:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00132040; } }
L_0013203C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 1;
L_00132040:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00132044:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00132060:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 20640u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 320u)));
    c.budget -= 8;
L_00132080:
    st32((c.r[4].w[0] + 16u), c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132094u); set32(c.r[4], 0u + 592u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00132094u) [[unlikely]] return; }
L_00132094:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001320B0; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001320B0u); set32(c.r[5], c.r[17].w[0] + 24u);  if (depth < kMaxDepth) unit_000E(c, 191u, depth + 1u); else { c.pc = 0x001394F0u; return; } if (c.pc != 0x001320B0u) [[unlikely]] return; }
L_001320B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001320B8u); st32((c.r[17].w[0] + 12u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0051(c, 11u, depth + 1u); else { c.pc = 0x002440A0u; return; } if (c.pc != 0x001320B8u) [[unlikely]] return; }
L_001320B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 2;
L_001320C0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001320D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001320ECu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001320ECu) [[unlikely]] return; }
L_001320EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001320FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 22u);  if (t) { goto L_00132108; } }
L_001320FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132104u);  if (depth < kMaxDepth) unit_0051(c, 4u, depth + 1u); else { c.pc = 0x00244030u; return; } if (c.pc != 0x00132104u) [[unlikely]] return; }
    goto L_00132104;
L_00132100:
    c.budget -= 1;
L_00132104:
    set32(c.r[2], 0u + 20u);
    c.budget -= 1;
L_00132108:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00132120:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132140u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000C(c, 71u, depth + 1u); else { c.pc = 0x001308D0u; return; } if (c.pc != 0x00132140u) [[unlikely]] return; }
L_00132140:
    set32(c.r[3], ld32((c.r[18].w[0] + 320u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 20640u);
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132158u); set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0051(c, 11u, depth + 1u); else { c.pc = 0x002440A0u; return; } if (c.pc != 0x00132158u) [[unlikely]] return; }
L_00132158:
    set32(c.r[4], 0u + 724u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132164u); st32((c.r[18].w[0] + 16u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00132164u) [[unlikely]] return; }
L_00132164:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00132184; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132180u); set32(c.r[5], c.r[18].w[0] + 24u);  if (depth < kMaxDepth) unit_0053(c, 141u, depth + 1u); else { c.pc = 0x0024CEE0u; return; } if (c.pc != 0x00132180u) [[unlikely]] return; }
L_00132180:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00132184:
    st32((c.r[18].w[0] + 12u), c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001321A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001321C8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001321C8u) [[unlikely]] return; }
L_001321C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00132258; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 320u)));
    set32(c.r[2], 0u + 13u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 71u);  if (t) { goto L_001321E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 19u);  if (t) { goto L_001322C8; } }
L_001321E8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001321F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 26u);  if (t) { goto L_001322C8; } }
L_001321F8:
    set32(c.r[4], c.r[5].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] - 20640u);
    set32(c.r[2], 0u + 3u);
    set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 30u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00132220; } }
    set32(c.r[2], 0u + 60u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_00132224; } }
L_00132220:
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00132224:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[2], 0u + 23u);  if (t) { goto L_00132250; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132234u); set32(c.r[4], c.r[16].w[0] + 24u);  if (depth < kMaxDepth) unit_0091(c, 268u, depth + 1u); else { c.pc = 0x00346090u; return; } if (c.pc != 0x00132234u) [[unlikely]] return; }
L_00132234:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 31u)));
    st32((c.r[16].w[0] + 328u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 31u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132248u); st32((c.r[16].w[0] + 332u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0020(c, 149u, depth + 1u); else { c.pc = 0x00181DF0u; return; } if (c.pc != 0x00132248u) [[unlikely]] return; }
L_00132248:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 24u);  if (t) { goto L_001322C8; } }
L_00132250:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_001322CC; } }
L_00132258:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132260u);  if (depth < kMaxDepth) unit_0091(c, 274u, depth + 1u); else { c.pc = 0x00346110u; return; } if (c.pc != 0x00132260u) [[unlikely]] return; }
L_00132260:
    set32(c.r[3], ld32((c.r[16].w[0] + 320u)));
    set32(c.r[2], c.r[3].w[0] - 58u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 18u);  if (t) { goto L_00132284; } }
    set32(c.r[2], 0u + 60u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0013228C; } }
    set32(c.r[2], 0u + 18u);
    c.budget -= 1;
L_00132284:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001322C8; } }
L_0013228C:
    set32(c.r[2], ld32((c.r[16].w[0] + 316u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001322B4; } }
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] - 20638u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[2].d[0] = c.r[2].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001322C4; } }
L_001322B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001322BCu);  if (depth < kMaxDepth) unit_0051(c, 4u, depth + 1u); else { c.pc = 0x00244030u; return; } if (c.pc != 0x001322BCu) [[unlikely]] return; }
L_001322BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 20u);  if (t) { goto L_001322C8; } }
L_001322C4:
    set32(c.r[2], 0u + 21u);
    c.budget -= 1;
L_001322C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001322CC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001322E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] - 20640u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 71u);
    set32(c.r[6], ld32((c.r[4].w[0] + 320u)));
    set32(c.r[6], c.r[6].w[0] << 5);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 31u)));
    st32((c.r[4].w[0] + 328u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 31u)));
    st32((c.r[4].w[0] + 332u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 320u)));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0013232C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 336u), c.r[2].w[0]);  if (t) { goto L_00132334; } }
L_0013232C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 30u)));
    st32((c.r[16].w[0] + 336u), c.r[2].w[0]);
    c.budget -= 2;
L_00132334:
    st32((c.r[16].w[0] + 16u), c.r[5].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132340u); set32(c.r[4], 0u + 440u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00132340u) [[unlikely]] return; }
L_00132340:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00132350; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132350u); set32(c.r[5], c.r[16].w[0] + 24u);  if (depth < kMaxDepth) unit_0072(c, 367u, depth + 1u); else { c.pc = 0x002CB540u; return; } if (c.pc != 0x00132350u) [[unlikely]] return; }
L_00132350:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013235Cu); set32(c.r[4], c.r[16].w[0] + 24u);  if (depth < kMaxDepth) unit_0091(c, 268u, depth + 1u); else { c.pc = 0x00346090u; return; } if (c.pc != 0x0013235Cu) [[unlikely]] return; }
L_0013235C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00132370:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00132394u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00132394u) [[unlikely]] return; }
L_00132394:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001323AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001323A4u);  if (depth < kMaxDepth) unit_0020(c, 149u, depth + 1u); else { c.pc = 0x00181DF0u; return; } if (c.pc != 0x001323A4u) [[unlikely]] return; }
L_001323A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 24u);  if (t) { goto L_001323CC; } }
L_001323AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001323B4u);  if (depth < kMaxDepth) unit_0091(c, 274u, depth + 1u); else { c.pc = 0x00346110u; return; } if (c.pc != 0x001323B4u) [[unlikely]] return; }
L_001323B4:
    set32(c.r[3], ld32((c.r[16].w[0] + 320u)));
    set32(c.r[2], 0u + 71u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 22u);  if (t) { goto L_001323CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 26u);  if (t) { goto L_001323CC; } }
L_001323CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001323E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 20640u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 320u)));
    st32((c.r[4].w[0] + 16u), c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132414u); set32(c.r[4], 0u + 384u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00132414u) [[unlikely]] return; }
L_00132414:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00132438; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], c.r[17].w[0] + 24u);
    set32(c.r[7], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132434u); set32(c.r[8], 0u + 830u);  if (depth < kMaxDepth) unit_0077(c, 7u, depth + 1u); else { c.pc = 0x002DC090u; return; } if (c.pc != 0x00132434u) [[unlikely]] return; }
L_00132434:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00132438:
    st32((c.r[17].w[0] + 12u), c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00132450:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00132474u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00132474u) [[unlikely]] return; }
L_00132474:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001324C0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00132490u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00132490u) [[unlikely]] return; }
L_00132490:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001324B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001324A0u);  if (depth < kMaxDepth) unit_0091(c, 274u, depth + 1u); else { c.pc = 0x00346110u; return; } if (c.pc != 0x001324A0u) [[unlikely]] return; }
L_001324A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001324A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 86u, depth + 1u); else { c.pc = 0x00130D10u; return; } if (c.pc != 0x001324A8u) [[unlikely]] return; }
L_001324A8:
    set32(c.r[3], 0u + 21u);
    set32(c.r[2], 0u + 27u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_00132528; } }
L_001324B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 25u);  if (t) { goto L_00132528; } }
L_001324C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001324C8u);  if (depth < kMaxDepth) unit_0091(c, 284u, depth + 1u); else { c.pc = 0x00346200u; return; } if (c.pc != 0x001324C8u) [[unlikely]] return; }
L_001324C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001324D0u);  if (depth < kMaxDepth) unit_0020(c, 151u, depth + 1u); else { c.pc = 0x00181E30u; return; } if (c.pc != 0x001324D0u) [[unlikely]] return; }
L_001324D0:
    set32(c.r[3], ld32((c.r[16].w[0] + 320u)));
    set32(c.r[2], 0u + 71u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[3].w[0] << 5);  if (t) { goto L_001324F4; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 353u));
    set32(c.r[2], 0u + 26u);
    set32(c.r[3], 0u + 23u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; if (c.r[4].d[0] == 0) c.r[2].d[0] = c.r[3].d[0];  if (t) { goto L_00132528; } }
L_001324F4:
    set32(c.r[2], 0u + 3u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[3].w[0] - 20640u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 30u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00132514; } }
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00132514:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], 0u + 23u);  if (t) { goto L_00132528; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132524u);  if (depth < kMaxDepth) unit_0091(c, 274u, depth + 1u); else { c.pc = 0x00346110u; return; } if (c.pc != 0x00132524u) [[unlikely]] return; }
L_00132524:
    set32(c.r[2], 0u + 22u);
    c.budget -= 1;
L_00132528:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00132540:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 71u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 16u), c.r[5].w[0]);
    set32(c.r[16], ld32((c.r[4].w[0] + 320u)));
    c.budget -= 9;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00132568; } }
    set32(c.r[16], ld32((c.r[17].w[0] + 340u)));
    c.budget -= 1;
L_00132568:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132570u); set32(c.r[4], 0u + 288u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00132570u) [[unlikely]] return; }
L_00132570:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_00132594; } }
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132590u); c.r[8].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0020(c, 311u, depth + 1u); else { c.pc = 0x00183260u; return; } if (c.pc != 0x00132590u) [[unlikely]] return; }
L_00132590:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00132594:
    st32((c.r[17].w[0] + 12u), c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001325B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 24u);  c.pc = t; return; }
L_001325C0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.f[24]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[24] = c.f[12];
    c.f[23] = c.f[13];
    c.f[22] = c.f[14];
    c.f[21] = c.f[15];
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132610u); c.f[20] = c.f[16];  if (depth < kMaxDepth) unit_0012(c, 254u, depth + 1u); else { c.pc = 0x0014AA40u; return; } if (c.pc != 0x00132610u) [[unlikely]] return; }
L_00132610:
    set32(c.r[4], c.r[18].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013261Cu); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x0013261Cu) [[unlikely]] return; }
L_0013261C:
    set32(c.r[4], c.r[18].w[0] + 204u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132628u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 256u, depth + 1u); else { c.pc = 0x0013E440u; return; } if (c.pc != 0x00132628u) [[unlikely]] return; }
L_00132628:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 20064u);
    set32(c.r[3], c.r[3].w[0] - 20036u);
    st32((c.r[18].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[4], 0u + 9u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[18].w[0] + 192u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 20020u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132654u); st32((c.r[18].w[0] + 204u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00132654u) [[unlikely]] return; }
L_00132654:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132660u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00132660u) [[unlikely]] return; }
L_00132660:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st128((c.r[18].w[0] + 224u) & ~15u, c.r[3]);
    set32(c.r[2], 0u + 30u);
    ld128((c.r[19].w[0]) & ~15u, c.r[3]);
    st128((c.r[18].w[0] + 240u) & ~15u, c.r[3]);
    st32((c.r[18].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 272u), 0u);
    st32((c.r[18].w[0] + 284u), 0u);
    st8((c.r[18].w[0] + 280u), static_cast<std::uint8_t>(0u));
    ld128((c.r[18].w[0] + 224u) & ~15u, c.r[2]);
    st128((c.r[18].w[0] + 256u) & ~15u, c.r[2]);
    st32((c.r[18].w[0] + 288u), c.r[17].w[0]);
    st32((c.r[18].w[0] + 292u), c.r[16].w[0]);
    st32((c.r[18].w[0] + 296u), 0u);
    st32((c.r[18].w[0] + 304u), 0u);
    st32((c.r[18].w[0] + 308u), c.f[24]);
    st32((c.r[18].w[0] + 312u), c.f[23]);
    st32((c.r[18].w[0] + 316u), c.f[22]);
    st32((c.r[18].w[0] + 320u), c.f[21]);
    st32((c.r[18].w[0] + 324u), c.f[20]);
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.f[12] = ld32((c.r[18].w[0] + 320u));
    c.f[14] = ld32((c.r[1].w[0] - 17632u));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 28;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001326D0u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001326D0u) [[unlikely]] return; }
L_001326D0:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00132710:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0013278C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 20064u);
    set32(c.r[3], c.r[3].w[0] - 20036u);
    st32((c.r[17].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[4], c.r[17].w[0] + 204u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 192u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 20020u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013275Cu); st32((c.r[17].w[0] + 204u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E490u; return; } if (c.pc != 0x0013275Cu) [[unlikely]] return; }
L_0013275C:
    set32(c.r[4], c.r[17].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132768u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x00132768u) [[unlikely]] return; }
L_00132768:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132774u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 255u, depth + 1u); else { c.pc = 0x0014AB70u; return; } if (c.pc != 0x00132774u) [[unlikely]] return; }
L_00132774:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00132790; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013278Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0013278Cu) [[unlikely]] return; }
L_0013278C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00132790:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001327B0:
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00130000u < 16384u) { entry = entries_000C[(t - 0x00130000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001327C0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[7], c.r[29].w[0] + 96u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[8], ld32((c.r[1].w[0] + 26392u)));
    ld128((c.r[4].w[0]) & ~15u, c.r[6]);
    set32(c.r[19], ld32((c.r[8].w[0] + 224u)));
    set32(c.r[18], ld32((c.r[8].w[0] + 228u)));
    st128((c.r[7].w[0]) & ~15u, c.r[6]);
    st32((c.r[19].w[0] + 304u), c.r[5].w[0]);
    st32((c.r[19].w[0] + 308u), c.r[5].w[0]);
    st32((c.r[19].w[0] + 312u), 0u);
    st32((c.r[19].w[0] + 316u), c.r[3].w[0]);
    ld128((c.r[4].w[0] + 256u) & ~15u, c.r[3]);
    st128((c.r[18].w[0] + 48u) & ~15u, c.r[3]);
    set32(c.r[3], ld32((c.r[4].w[0] + 304u)));
    c.budget -= 26;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[9], c.r[20].w[0] + 256u);  if (t) { goto L_0013284C; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 300u)));
    set32(c.r[3], 0u + 255u);
    set32(c.r[5], ld32((c.r[9].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    c.budget -= 5;
L_0013283C:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00132848; } }
    goto L_00132844;
L_00132840:
    c.budget -= 1;
L_00132844:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00132848:
    st32((c.r[18].w[0] + 60u), c.r[3].w[0]);
    c.budget -= 1;
L_0013284C:
    set32(c.r[4], ld32((c.r[20].w[0] + 300u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[19].w[0] + 60u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 300u)));
    st32((c.r[19].w[0] + 300u), c.r[4].w[0]);
    c.f[1] = ld32((c.r[20].w[0] + 312u));
    c.f[0] = ld32((c.r[20].w[0] + 308u));
    st32((c.r[19].w[0] + 16u), c.f[0]);
    st32((c.r[19].w[0] + 20u), c.f[1]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_001329D4; } }
L_0013287C:
    set32(c.r[2], ld32((c.r[20].w[0] + 288u)));
    c.budget -= 1;
L_00132880:
    set32(c.r[16], c.r[17].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001328B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013289Cu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0013289Cu) [[unlikely]] return; }
L_0013289C:
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[19].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[19].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 56u), c.r[2].w[0]);  if (t) { goto L_001328D8; } }
L_001328B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001328C0u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x001328C0u) [[unlikely]] return; }
L_001328C0:
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[19].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[19].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[19].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 6;
L_001328D8:
    set32(c.r[2], ld32((c.r[20].w[0] + 288u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001328E8u); set32(c.r[4], ld32((c.r[2].w[0] + 4u)));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x001328E8u) [[unlikely]] return; }
L_001328E8:
    st32((c.r[19].w[0] + 352u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[19].w[0] + 356u), 0u);
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00132904u); set32(c.r[5], c.r[29].w[0] + 96u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00132904u) [[unlikely]] return; }
    goto L_00132904;
L_00132900:
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 1;
L_00132904:
    set32(c.r[2], ld32((c.r[20].w[0] + 296u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_00132980; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 352u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = c.r[2].w[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[18].w[0] + 352u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 356u), 0u);
    c.f[0] = ld32((c.r[20].w[0] + 308u));
    c.f[1] = ld32((c.r[20].w[0] + 312u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    st32((c.r[18].w[0] + 16u), c.f[0]);
    st32((c.r[18].w[0] + 20u), c.f[1]);
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 18;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00132958u); set32(c.r[5], c.r[29].w[0] + 96u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00132958u) [[unlikely]] return; }
L_00132958:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00132968u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00132968u) [[unlikely]] return; }
L_00132968:
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00132978u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00132978u) [[unlikely]] return; }
L_00132978:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[20].w[0] + 316u));  if (t) { goto L_001329C4; } }
L_00132980:
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001329A0u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001329A0u) [[unlikely]] return; }
L_001329A0:
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001329C0u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001329C0u) [[unlikely]] return; }
L_001329C0:
    c.f[1] = ld32((c.r[20].w[0] + 316u));
    c.budget -= 1;
L_001329C4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.f[0] = ld32((c.r[29].w[0] + 100u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 100u), c.f[0]);
    c.budget -= 4;
L_001329D4:
    set32(c.r[3], ld32((c.r[20].w[0] + 292u)));
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013287Cu | kUnwind; return; } goto L_0013287C; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00132A10:
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00130000u < 16384u) { entry = entries_000C[(t - 0x00130000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00132A30:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 280u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00132A68; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 284u)));
    set32(c.r[3], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0] + 284u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 272u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00132A98; } }
    st32((c.r[4].w[0] + 284u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 280u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00132A98; } }
L_00132A68:
    set32(c.r[2], ld32((c.r[4].w[0] + 284u)));
    set32(c.r[5], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0] + 284u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 276u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 272u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00132A98; } }
    st32((c.r[4].w[0] + 284u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] + 280u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00132A98:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] + 224u);  [[clang::musttail]] return unit_002A(c, 280u, depth); }
L_00132AA0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[9].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[24] = c.f[12];
    c.f[23] = c.f[13];
    c.f[22] = c.f[14];
    c.f[21] = c.f[15];
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132B08u); c.f[20] = c.f[16];  if (depth < kMaxDepth) unit_0012(c, 254u, depth + 1u); else { c.pc = 0x0014AA40u; return; } if (c.pc != 0x00132B08u) [[unlikely]] return; }
L_00132B08:
    set32(c.r[4], c.r[22].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132B14u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x00132B14u) [[unlikely]] return; }
L_00132B14:
    set32(c.r[4], c.r[22].w[0] + 204u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132B20u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 256u, depth + 1u); else { c.pc = 0x0013E440u; return; } if (c.pc != 0x00132B20u) [[unlikely]] return; }
L_00132B20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 20144u);
    set32(c.r[3], c.r[3].w[0] - 20116u);
    st32((c.r[22].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[4], 0u + 9u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[22].w[0] + 192u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 20100u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132B4Cu); st32((c.r[22].w[0] + 204u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00132B4Cu) [[unlikely]] return; }
L_00132B4C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132B58u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00132B58u) [[unlikely]] return; }
L_00132B58:
    ld128((c.r[2].w[0]) & ~15u, c.r[5]);
    set32(c.r[3], 0u + 30u);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    st128((c.r[22].w[0] + 224u) & ~15u, c.r[5]);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    ld128((c.r[16].w[0]) & ~15u, c.r[2]);
    st128((c.r[22].w[0] + 240u) & ~15u, c.r[2]);
    st32((c.r[22].w[0] + 276u), c.r[3].w[0]);
    st32((c.r[22].w[0] + 272u), 0u);
    st32((c.r[22].w[0] + 284u), 0u);
    st8((c.r[22].w[0] + 280u), static_cast<std::uint8_t>(0u));
    ld128((c.r[22].w[0] + 224u) & ~15u, c.r[2]);
    st128((c.r[22].w[0] + 256u) & ~15u, c.r[2]);
    st32((c.r[22].w[0] + 288u), c.r[21].w[0]);
    st8((c.r[22].w[0] + 292u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st32((c.r[22].w[0] + 296u), c.r[20].w[0]);
    st32((c.r[22].w[0] + 300u), 0u);
    st32((c.r[22].w[0] + 308u), 0u);
    st8((c.r[22].w[0] + 312u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st32((c.r[22].w[0] + 316u), 0u);
    st32((c.r[22].w[0] + 320u), c.f[24]);
    st32((c.r[22].w[0] + 324u), c.f[23]);
    st32((c.r[22].w[0] + 328u), c.f[22]);
    st32((c.r[22].w[0] + 332u), c.f[21]);
    st32((c.r[22].w[0] + 336u), c.f[20]);
    st32((c.r[22].w[0] + 340u), c.r[19].w[0]);
    st8((c.r[22].w[0] + 345u), static_cast<std::uint8_t>(0u));
    set32(c.r[25], ld32((c.r[22].w[0] + 176u)));
    c.f[12] = ld32((c.r[22].w[0] + 332u));
    c.f[13] = ld32((c.r[22].w[0] + 336u));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 35;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00132BE4u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00132BE4u) [[unlikely]] return; }
L_00132BE4:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], 0u + 704u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132BF4u); st8((c.r[22].w[0] + 344u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00132BF4u) [[unlikely]] return; }
L_00132BF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00132C04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132C04u);  if (depth < kMaxDepth) unit_0021(c, 176u, depth + 1u); else { c.pc = 0x00185720u; return; } if (c.pc != 0x00132C04u) [[unlikely]] return; }
L_00132C04:
    st32((c.r[22].w[0] + 308u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    set32(c.r[5], ld32((c.r[22].w[0] + 308u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.r[2].d[0] = c.r[22].d[0] + 0ull;
    st32((c.r[5].w[0] + 160u), c.r[4].w[0]);
    st32((c.r[5].w[0] + 164u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.budget -= 14;
L_00132C3C:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00132C60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00132D04; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 20144u);
    set32(c.r[3], c.r[3].w[0] - 20116u);
    st32((c.r[17].w[0] + 176u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 192u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 20100u);
    st32((c.r[17].w[0] + 204u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 308u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00132CC4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00132CC4; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00132CC4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00132CC4u) [[unlikely]] return; }
L_00132CC4:
    set32(c.r[4], c.r[17].w[0] + 204u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132CD4u); st32((c.r[17].w[0] + 308u), 0u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E490u; return; } if (c.pc != 0x00132CD4u) [[unlikely]] return; }
L_00132CD4:
    set32(c.r[4], c.r[17].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132CE0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x00132CE0u) [[unlikely]] return; }
L_00132CE0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132CECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 255u, depth + 1u); else { c.pc = 0x0014AB70u; return; } if (c.pc != 0x00132CECu) [[unlikely]] return; }
L_00132CEC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00132D08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132D04u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00132D04u) [[unlikely]] return; }
L_00132D04:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00132D08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00132D20:
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00130000u < 16384u) { entry = entries_000C[(t - 0x00130000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00132D30:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[3], c.r[29].w[0] + 112u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[1].w[0] + 26392u)));
    ld128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[18], ld32((c.r[5].w[0] + 440u)));
    set32(c.r[17], ld32((c.r[5].w[0] + 444u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132D78u); st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00132D78u) [[unlikely]] return; }
L_00132D78:
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[18].w[0] + 48u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[18].w[0] + 52u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[18].w[0] + 56u), c.r[5].w[0]);
    st32((c.r[18].w[0] + 304u), c.r[4].w[0]);
    st32((c.r[18].w[0] + 308u), c.r[4].w[0]);
    st32((c.r[18].w[0] + 312u), 0u);
    st32((c.r[18].w[0] + 316u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[19].w[0] + 345u));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00132DC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132DBCu);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00132DBCu) [[unlikely]] return; }
L_00132DBC:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st128((c.r[17].w[0] + 48u) & ~15u, c.r[3]);  if (t) { goto L_00132DD0; } }
L_00132DC8:
    ld128((c.r[19].w[0] + 256u) & ~15u, c.r[3]);
    st128((c.r[17].w[0] + 48u) & ~15u, c.r[3]);
    c.budget -= 2;
L_00132DD0:
    set32(c.r[3], ld32((c.r[19].w[0] + 316u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00132E00; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 304u)));
    set32(c.r[3], 0u + 255u);
    set32(c.r[5], ld32((c.r[19].w[0] + 268u)));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00132DFC; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00132DFC:
    st32((c.r[17].w[0] + 60u), c.r[3].w[0]);
    c.budget -= 1;
L_00132E00:
    set32(c.r[3], ld32((c.r[19].w[0] + 304u)));
    st32((c.r[18].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 304u)));
    st32((c.r[18].w[0] + 300u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 308u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00132E24; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 304u)));
    st32((c.r[4].w[0] + 60u), c.r[3].w[0]);
    c.budget -= 2;
L_00132E24:
    c.f[1] = ld32((c.r[19].w[0] + 324u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[19].w[0] + 320u));
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 16u), c.f[0]);
    st32((c.r[18].w[0] + 20u), c.f[1]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_001333D0; } }
L_00132E44:
    set32(c.r[2], ld32((c.r[19].w[0] + 288u)));
    set32(c.r[20], c.r[16].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] + c.r[20].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_00132E80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132E64u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00132E64u) [[unlikely]] return; }
L_00132E64:
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[18].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[18].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 56u), c.r[2].w[0]);  if (t) { goto L_00132F04; } }
L_00132E80:
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], 0u + 91u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 3u);  if (t) { goto L_00132EB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132E98u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00132E98u) [[unlikely]] return; }
L_00132E98:
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[18].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[18].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 56u), c.r[2].w[0]);  if (t) { goto L_00132F04; } }
L_00132EB4:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 345u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00132EE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132EC8u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00132EC8u) [[unlikely]] return; }
L_00132EC8:
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[18].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[18].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 56u), c.r[2].w[0]);  if (t) { goto L_00132F04; } }
L_00132EE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132EECu);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00132EECu) [[unlikely]] return; }
L_00132EEC:
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[18].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[18].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[18].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 6;
L_00132F04:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 292u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00133194; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 288u)));
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132F20u); set32(c.r[4], ld32((c.r[2].w[0] + 4u)));  if (depth < kMaxDepth) unit_0097(c, 55u, depth + 1u); else { c.pc = 0x0035CEB0u; return; } if (c.pc != 0x00132F20u) [[unlikely]] return; }
L_00132F20:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0013317C; } }
L_00132F2C:
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[3], c.r[20].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132F40u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00132F40u) [[unlikely]] return; }
L_00132F40:
    st32((c.r[18].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 356u), 0u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[19].w[0] + 340u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132F74; } }
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00132F6Cu); set32(c.r[5], c.r[29].w[0] + 112u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00132F6Cu) [[unlikely]] return; }
L_00132F6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[19].w[0] + 300u)));  if (t) { goto L_00132FB4; } }
L_00132F74:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132F9C; } }
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00132F94u); set32(c.r[5], c.r[29].w[0] + 112u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00132F94u) [[unlikely]] return; }
L_00132F94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00132FB0; } }
L_00132F9C:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00132FB0u); set32(c.r[5], c.r[29].w[0] + 112u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00132FB0u) [[unlikely]] return; }
L_00132FB0:
    set32(c.r[2], ld32((c.r[19].w[0] + 300u)));
    c.budget -= 1;
L_00132FB4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_00133128; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 344u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00133128; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 352u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 352u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 356u), 0u);
    c.f[1] = ld32((c.r[19].w[0] + 324u));
    c.f[0] = ld32((c.r[19].w[0] + 320u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    st32((c.r[17].w[0] + 16u), c.f[0]);
    st32((c.r[17].w[0] + 20u), c.f[1]);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[19].w[0] + 320u));
    c.f[1] = ld32((c.r[19].w[0] + 324u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    st32((c.r[17].w[0] + 272u), c.f[0]);
    st32((c.r[17].w[0] + 276u), c.f[1]);
    st32((c.r[17].w[0] + 280u), 0u);
    st32((c.r[17].w[0] + 284u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 340u)));
    c.budget -= 23;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00133040; } }
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00133038u); set32(c.r[5], c.r[29].w[0] + 112u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00133038u) [[unlikely]] return; }
L_00133038:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[19].w[0] + 312u));  if (t) { goto L_00133058; } }
L_00133040:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00133054u); set32(c.r[5], c.r[29].w[0] + 112u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00133054u) [[unlikely]] return; }
L_00133054:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 312u));
    c.budget -= 1;
L_00133058:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00133094; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 345u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00133094; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 308u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00133080u); set32(c.r[5], c.r[29].w[0] + 112u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00133080u) [[unlikely]] return; }
L_00133080:
    set32(c.r[4], ld32((c.r[19].w[0] + 308u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00133094u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00133094u) [[unlikely]] return; }
L_00133094:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 345u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001330B0; } }
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001330B0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001330B0u) [[unlikely]] return; }
L_001330B0:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 345u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00133110; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001330C4u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x001330C4u) [[unlikely]] return; }
L_001330C4:
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[18].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[18].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[18].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001330ECu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001330ECu) [[unlikely]] return; }
L_001330EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001330F4u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x001330F4u) [[unlikely]] return; }
L_001330F4:
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[18].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
L_00133100:
    st32((c.r[18].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 56u), c.r[3].w[0]);  if (t) { goto L_00133168; } }
L_00133110:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00133120u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00133120u) [[unlikely]] return; }
L_00133120:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[19].w[0] + 328u));  if (t) { goto L_0013316C; } }
L_00133128:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 6;
L_00133140:
    c.budget -= 2;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00133148u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00133148u) [[unlikely]] return; }
L_00133148:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00133168u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00133168u) [[unlikely]] return; }
L_00133168:
    c.f[1] = ld32((c.r[19].w[0] + 328u));
    c.budget -= 1;
L_0013316C:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.f[0] = ld32((c.r[29].w[0] + 116u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 116u), c.f[0]);
    c.budget -= 4;
L_0013317C:
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    c.r[3].d[0] = c.r[20].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00132F2Cu | kUnwind; return; } goto L_00132F2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[19].w[0] + 328u));  if (t) { goto L_001333C0; } }
L_00133194:
    set32(c.r[2], ld32((c.r[19].w[0] + 288u)));
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001331A4u); set32(c.r[4], ld32((c.r[2].w[0] + 4u)));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x001331A4u) [[unlikely]] return; }
L_001331A4:
    st32((c.r[18].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 356u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 340u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001331D4; } }
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_001331C0:
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001331CCu); set32(c.r[5], c.r[29].w[0] + 112u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001331CCu) [[unlikely]] return; }
L_001331CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[19].w[0] + 300u)));  if (t) { goto L_001331EC; } }
L_001331D4:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001331E8u); set32(c.r[5], c.r[29].w[0] + 112u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001331E8u) [[unlikely]] return; }
L_001331E8:
    set32(c.r[2], ld32((c.r[19].w[0] + 300u)));
    c.budget -= 1;
L_001331EC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_0013337C; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 344u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013337C; } }
L_00133200:
    set32(c.r[3], ld32((c.r[18].w[0] + 352u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 352u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 356u), 0u);
    c.f[1] = ld32((c.r[19].w[0] + 324u));
    c.f[0] = ld32((c.r[19].w[0] + 320u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    st32((c.r[17].w[0] + 16u), c.f[0]);
    st32((c.r[17].w[0] + 20u), c.f[1]);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[19].w[0] + 320u));
    c.f[1] = ld32((c.r[19].w[0] + 324u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    st32((c.r[17].w[0] + 272u), c.f[0]);
    st32((c.r[17].w[0] + 276u), c.f[1]);
    st32((c.r[17].w[0] + 280u), 0u);
    st32((c.r[17].w[0] + 284u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 340u)));
    c.budget -= 23;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00133278; } }
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00133270u); set32(c.r[5], c.r[29].w[0] + 112u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00133270u) [[unlikely]] return; }
L_00133270:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[19].w[0] + 312u));  if (t) { goto L_00133290; } }
L_00133278:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013328Cu); set32(c.r[5], c.r[29].w[0] + 112u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013328Cu) [[unlikely]] return; }
L_0013328C:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 312u));
    c.budget -= 1;
L_00133290:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001332E8; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 345u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001332E8; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 308u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.f[1] = ld32((c.r[19].w[0] + 324u));
    c.f[2] = c.r[2].w[0];
    c.f[0] = ld32((c.r[29].w[0] + 116u));
    c.f[12] = ld32((c.r[29].w[0] + 112u));
    c.f[14] = ld32((c.r[29].w[0] + 120u));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001332D4u); c.f[13] = fp::add(c.f[0], c.f[1]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001332D4u) [[unlikely]] return; }
L_001332D4:
    set32(c.r[4], ld32((c.r[19].w[0] + 308u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001332E8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001332E8u) [[unlikely]] return; }
L_001332E8:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 345u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00133304; } }
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00133304u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00133304u) [[unlikely]] return; }
L_00133304:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 345u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00133364; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133318u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00133318u) [[unlikely]] return; }
L_00133318:
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[18].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[18].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[18].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00133340u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00133340u) [[unlikely]] return; }
L_00133340:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133348u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00133348u) [[unlikely]] return; }
L_00133348:
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[18].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[18].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 56u), c.r[3].w[0]);  if (t) { goto L_001333BC; } }
L_00133364:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00133374u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00133374u) [[unlikely]] return; }
L_00133374:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001333BC; } }
L_0013337C:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013339Cu); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013339Cu) [[unlikely]] return; }
L_0013339C:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001333BCu); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001333BCu) [[unlikely]] return; }
L_001333BC:
    c.f[1] = ld32((c.r[19].w[0] + 328u));
    c.budget -= 1;
L_001333C0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.f[0] = ld32((c.r[29].w[0] + 116u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 116u), c.f[0]);
    c.budget -= 4;
L_001333D0:
    set32(c.r[3], ld32((c.r[19].w[0] + 296u)));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00132E44u | kUnwind; return; } goto L_00132E44; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00133410:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 280u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00133448; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 284u)));
    set32(c.r[3], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0] + 284u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 272u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00133478; } }
    st32((c.r[4].w[0] + 284u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 280u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00133478; } }
L_00133448:
    set32(c.r[2], ld32((c.r[4].w[0] + 284u)));
    set32(c.r[5], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0] + 284u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 276u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 272u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00133478; } }
    st32((c.r[4].w[0] + 284u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] + 280u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00133478:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] + 224u);  [[clang::musttail]] return unit_002A(c, 280u, depth); }
L_00133480:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001334A8u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 12u, depth + 1u); else { c.pc = 0x001300B0u; return; } if (c.pc != 0x001334A8u) [[unlikely]] return; }
L_001334A8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 20304u);
    set32(c.r[2], c.r[2].w[0] - 20216u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[18].w[0] + 40u);
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], 0u + 10752u);
    set32(c.r[2], 0u + 15311u);
    st16((c.r[29].w[0] + 76u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[29].w[0] + 78u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001334DCu); set32(c.r[5], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_0025(c, 114u, depth + 1u); else { c.pc = 0x00194FD0u; return; } if (c.pc != 0x001334DCu) [[unlikely]] return; }
L_001334DC:
    set32(c.r[4], c.r[18].w[0] + 588u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001334E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 271u, depth + 1u); else { c.pc = 0x002275A0u; return; } if (c.pc != 0x001334E8u) [[unlikely]] return; }
L_001334E8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42340000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[13] = c.r[3].w[0];
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.f[14] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x421C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42280000u);
    c.f[12] = ld32((c.r[1].w[0] - 17640u));
    c.f[15] = c.r[3].w[0];
    c.f[16] = c.r[2].w[0];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133520u); set32(c.r[4], c.r[18].w[0] + 624u);  if (depth < kMaxDepth) unit_000C(c, 271u, depth + 1u); else { c.pc = 0x001325C0u; return; } if (c.pc != 0x00133520u) [[unlikely]] return; }
L_00133520:
    st32((c.r[18].w[0] + 960u), 0u);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 964u), 0u);
    st8((c.r[18].w[0] + 968u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00133550:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0013361C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 20304u);
    set32(c.r[2], c.r[2].w[0] - 20216u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 960u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001335A8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001335A8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001335A8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001335A8u) [[unlikely]] return; }
L_001335A8:
    st32((c.r[17].w[0] + 960u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 964u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001335D0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001335D0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001335D0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001335D0u) [[unlikely]] return; }
L_001335D0:
    set32(c.r[4], c.r[17].w[0] + 624u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001335E0u); st32((c.r[17].w[0] + 964u), 0u);  if (depth < kMaxDepth) unit_000C(c, 278u, depth + 1u); else { c.pc = 0x00132710u; return; } if (c.pc != 0x001335E0u) [[unlikely]] return; }
L_001335E0:
    set32(c.r[4], c.r[17].w[0] + 588u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001335ECu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0049(c, 274u, depth + 1u); else { c.pc = 0x002275F0u; return; } if (c.pc != 0x001335ECu) [[unlikely]] return; }
L_001335EC:
    set32(c.r[4], c.r[17].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001335F8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0025(c, 116u, depth + 1u); else { c.pc = 0x00195030u; return; } if (c.pc != 0x001335F8u) [[unlikely]] return; }
L_001335F8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133604u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 15u, depth + 1u); else { c.pc = 0x00130130u; return; } if (c.pc != 0x00133604u) [[unlikely]] return; }
L_00133604:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00133620; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013361Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0013361Cu) [[unlikely]] return; }
L_0013361C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00133620:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0013363C:
    c.budget -= 1;
L_00133640:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133658u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00133658u) [[unlikely]] return; }
L_00133658:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00133688; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0013366C; } }
    set32(c.r[7], c.r[7].w[0] + 20u);
    c.budget -= 1;
L_0013366C:
    set32(c.r[8], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[9], ld32((c.r[16].w[0] + 32u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133688u); c.r[10].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 371u, depth + 1u); else { c.pc = 0x0012EBA0u; return; } if (c.pc != 0x00133688u) [[unlikely]] return; }
L_00133688:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001336A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001336B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 24u, depth + 1u); else { c.pc = 0x00130260u; return; } if (c.pc != 0x001336B4u) [[unlikely]] return; }
L_001336B4:
    st32((c.r[16].w[0] + 908u), 0u);
    set32(c.r[4], c.r[16].w[0] + 848u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001336C4u); st8((c.r[16].w[0] + 904u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x001336C4u) [[unlikely]] return; }
L_001336C4:
    st32((c.r[16].w[0] + 928u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001336E0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001336FCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 25u, depth + 1u); else { c.pc = 0x00130270u; return; } if (c.pc != 0x001336FCu) [[unlikely]] return; }
L_001336FC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133710u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002A(c, 139u, depth + 1u); else { c.pc = 0x001A95F0u; return; } if (c.pc != 0x00133710u) [[unlikely]] return; }
L_00133710:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 960u)));
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[3].w[0] + 624u);  if (t) { goto L_00133770; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013372Cu); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0013372Cu) [[unlikely]] return; }
L_0013372C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00133740; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133740u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_002A(c, 287u, depth + 1u); else { c.pc = 0x001AB200u; return; } if (c.pc != 0x00133740u) [[unlikely]] return; }
L_00133740:
    st32((c.r[16].w[0] + 960u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133750u); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x00133750u) [[unlikely]] return; }
L_00133750:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133760u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x00133760u) [[unlikely]] return; }
L_00133760:
    set32(c.r[4], ld32((c.r[16].w[0] + 960u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133770u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x00133770u) [[unlikely]] return; }
L_00133770:
    set32(c.r[4], ld32((c.r[16].w[0] + 960u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00133784u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00133784u) [[unlikely]] return; }
L_00133784:
    set32(c.r[2], ld32((c.r[16].w[0] + 964u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 160u);  if (t) { goto L_001337DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133798u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00133798u) [[unlikely]] return; }
L_00133798:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001337AC; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001337ACu); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0025(c, 304u, depth + 1u); else { c.pc = 0x00196C90u; return; } if (c.pc != 0x001337ACu) [[unlikely]] return; }
L_001337AC:
    st32((c.r[16].w[0] + 964u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001337BCu); set32(c.r[5], 0u + 10006u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x001337BCu) [[unlikely]] return; }
L_001337BC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001337CCu); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x001337CCu) [[unlikely]] return; }
L_001337CC:
    set32(c.r[4], ld32((c.r[16].w[0] + 964u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001337DCu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x001337DCu) [[unlikely]] return; }
L_001337DC:
    set32(c.r[4], ld32((c.r[16].w[0] + 964u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001337F0u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001337F0u) [[unlikely]] return; }
L_001337F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[3], c.r[3].w[0] - 4576u);
    set32(c.r[2], 0u + 1u);
    ld128((c.r[3].w[0]) & ~15u, c.r[6]);
    set32(c.r[4], c.r[16].w[0] + 588u);
    c.r[3].d[0] = ld64((c.r[3].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[6]);
    st64((c.r[5].w[0] + 16u), c.r[3].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013381Cu); st32((c.r[16].w[0] + 928u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x0013381Cu) [[unlikely]] return; }
L_0013381C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133824u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0051(c, 16u, depth + 1u); else { c.pc = 0x00244130u; return; } if (c.pc != 0x00133824u) [[unlikely]] return; }
L_00133824:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013382Cu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x0013382Cu) [[unlikely]] return; }
L_0013382C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00133850:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133864u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 26u, depth + 1u); else { c.pc = 0x00130280u; return; } if (c.pc != 0x00133864u) [[unlikely]] return; }
L_00133864:
    st8((c.r[16].w[0] + 968u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[16].w[0] + 960u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00133884; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00133884u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00133884u) [[unlikely]] return; }
    goto L_00133884;
L_00133880:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00133884:
    set32(c.r[4], ld32((c.r[16].w[0] + 964u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001338A0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001338A0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001338A0u) [[unlikely]] return; }
L_001338A0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] - 4544u);
    set32(c.r[2], 0u + 2u);
    ld128((c.r[3].w[0]) & ~15u, c.r[6]);
    set32(c.r[4], c.r[16].w[0] + 588u);
    c.r[3].d[0] = ld64((c.r[3].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[6]);
    st64((c.r[5].w[0] + 16u), c.r[3].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001338CCu); st32((c.r[16].w[0] + 928u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x001338CCu) [[unlikely]] return; }
L_001338CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001338D4u);  if (depth < kMaxDepth) unit_0051(c, 19u, depth + 1u); else { c.pc = 0x00244170u; return; } if (c.pc != 0x001338D4u) [[unlikely]] return; }
L_001338D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001338F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133904u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 27u, depth + 1u); else { c.pc = 0x00130290u; return; } if (c.pc != 0x00133904u) [[unlikely]] return; }
L_00133904:
    set32(c.r[4], ld32((c.r[16].w[0] + 960u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00133920; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00133920u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00133920u) [[unlikely]] return; }
L_00133920:
    set32(c.r[4], ld32((c.r[16].w[0] + 964u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013393C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013393Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013393Cu) [[unlikely]] return; }
L_0013393C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] - 4512u);
    set32(c.r[2], 0u + 2u);
    ld128((c.r[3].w[0]) & ~15u, c.r[6]);
    set32(c.r[4], c.r[16].w[0] + 588u);
    c.r[3].d[0] = ld64((c.r[3].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[6]);
    st64((c.r[5].w[0] + 16u), c.r[3].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133968u); st32((c.r[16].w[0] + 928u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x00133968u) [[unlikely]] return; }
L_00133968:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133970u);  if (depth < kMaxDepth) unit_0051(c, 19u, depth + 1u); else { c.pc = 0x00244170u; return; } if (c.pc != 0x00133970u) [[unlikely]] return; }
L_00133970:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00133980:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013399Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 32u, depth + 1u); else { c.pc = 0x00130300u; return; } if (c.pc != 0x0013399Cu) [[unlikely]] return; }
L_0013399C:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[4], c.r[17].w[0] + 848u);
    st32((c.r[17].w[0] + 920u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 908u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001339B4u); st8((c.r[17].w[0] + 904u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x001339B4u) [[unlikely]] return; }
L_001339B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001339D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001339ECu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 29u, depth + 1u); else { c.pc = 0x001302B0u; return; } if (c.pc != 0x001339ECu) [[unlikely]] return; }
L_001339EC:
    st32((c.r[17].w[0] + 920u), c.r[16].w[0]);
    set32(c.r[4], c.r[17].w[0] + 848u);
    st32((c.r[17].w[0] + 908u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133A00u); st8((c.r[17].w[0] + 904u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x00133A00u) [[unlikely]] return; }
L_00133A00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00133A20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133A34u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 304u, depth + 1u); else { c.pc = 0x0012E500u; return; } if (c.pc != 0x00133A34u) [[unlikely]] return; }
L_00133A34:
    c.f[0] = ld32((c.r[16].w[0] + 600u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[16].w[0] + 924u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00133A60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133A74u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 135u, depth + 1u); else { c.pc = 0x001A9560u; return; } if (c.pc != 0x00133A74u) [[unlikely]] return; }
L_00133A74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00133A8C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00133A8Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00133A8Cu) [[unlikely]] return; }
L_00133A8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00133AA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133AB4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 435u, depth + 1u); else { c.pc = 0x00133BA0u; return; } if (c.pc != 0x00133AB4u) [[unlikely]] return; }
L_00133AB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00133ACC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00133ACCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00133ACCu) [[unlikely]] return; }
L_00133ACC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00133AE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 968u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00133B24; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 960u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 137u));
    c.budget -= 2;
L_00133B00:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00133B44; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00133B18u); set32(c.r[5], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00133B18u) [[unlikely]] return; }
L_00133B18:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 968u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00133B44; } }
L_00133B24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133B2Cu);  if (depth < kMaxDepth) unit_000C(c, 435u, depth + 1u); else { c.pc = 0x00133BA0u; return; } if (c.pc != 0x00133B2Cu) [[unlikely]] return; }
L_00133B2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00133B44; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00133B44u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00133B44u) [[unlikely]] return; }
L_00133B44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00133B60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133B74u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 435u, depth + 1u); else { c.pc = 0x00133BA0u; return; } if (c.pc != 0x00133B74u) [[unlikely]] return; }
L_00133B74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00133B8C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00133B8Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00133B8Cu) [[unlikely]] return; }
L_00133B8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00133BA0:
    set32(c.r[3], ld32((c.r[4].w[0] + 960u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00133BB0; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 137u));
    c.budget -= 1;
L_00133BB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133BC0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133BF8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 12u, depth + 1u); else { c.pc = 0x001300B0u; return; } if (c.pc != 0x00133BF8u) [[unlikely]] return; }
L_00133BF8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 20464u);
    set32(c.r[2], c.r[2].w[0] - 20376u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[18].w[0] + 40u);
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133C1Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 271u, depth + 1u); else { c.pc = 0x002275A0u; return; } if (c.pc != 0x00133C1Cu) [[unlikely]] return; }
L_00133C1C:
    set32(c.r[4], c.r[18].w[0] + 76u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133C28u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 271u, depth + 1u); else { c.pc = 0x002275A0u; return; } if (c.pc != 0x00133C28u) [[unlikely]] return; }
L_00133C28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    st32((c.r[18].w[0] + 112u), 0u);
    c.f[12] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[13] = ld32((c.r[1].w[0] - 17648u));
    c.budget -= 5;
L_00133C3C:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.f[14] = c.r[2].w[0];
    set32(c.r[4], c.r[18].w[0] + 128u);
    set32(c.r[7], 0u + 1u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[15] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42D00000u);
    c.f[16] = c.r[2].w[0];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133C70u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 301u, depth + 1u); else { c.pc = 0x00132AA0u; return; } if (c.pc != 0x00133C70u) [[unlikely]] return; }
L_00133C70:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[14] = ld32((c.r[1].w[0] - 17656u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[12] = c.r[3].w[0];
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.f[13] = c.r[2].w[0];
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 480u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[8], c.r[8].w[0] - 17728u);
    set32(c.r[9], c.r[9].w[0] - 17696u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[15] = ld32((c.r[1].w[0] - 17664u));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133CB8u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000D(c, 34u, depth + 1u); else { c.pc = 0x00134330u; return; } if (c.pc != 0x00133CB8u) [[unlikely]] return; }
L_00133CB8:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00133CE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00133D90; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 20464u);
    set32(c.r[2], c.r[2].w[0] - 20376u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 112u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00133D38; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00133D38; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00133D38u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00133D38u) [[unlikely]] return; }
L_00133D38:
    set32(c.r[4], c.r[17].w[0] + 480u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133D48u); st32((c.r[17].w[0] + 112u), 0u);  if (depth < kMaxDepth) unit_000D(c, 54u, depth + 1u); else { c.pc = 0x00134720u; return; } if (c.pc != 0x00133D48u) [[unlikely]] return; }
L_00133D48:
    set32(c.r[4], c.r[17].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133D54u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 311u, depth + 1u); else { c.pc = 0x00132C60u; return; } if (c.pc != 0x00133D54u) [[unlikely]] return; }
L_00133D54:
    set32(c.r[4], c.r[17].w[0] + 76u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133D60u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0049(c, 274u, depth + 1u); else { c.pc = 0x002275F0u; return; } if (c.pc != 0x00133D60u) [[unlikely]] return; }
L_00133D60:
    set32(c.r[4], c.r[17].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133D6Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0049(c, 274u, depth + 1u); else { c.pc = 0x002275F0u; return; } if (c.pc != 0x00133D6Cu) [[unlikely]] return; }
L_00133D6C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133D78u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 15u, depth + 1u); else { c.pc = 0x00130130u; return; } if (c.pc != 0x00133D78u) [[unlikely]] return; }
L_00133D78:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00133D94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133D90u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00133D90u) [[unlikely]] return; }
L_00133D90:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00133D94:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00133DB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133DC8u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00133DC8u) [[unlikely]] return; }
L_00133DC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00133DF8; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00133DDC; } }
    set32(c.r[7], c.r[7].w[0] + 20u);
    c.budget -= 1;
L_00133DDC:
    set32(c.r[8], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[9], ld32((c.r[16].w[0] + 32u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133DF8u); c.r[10].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 371u, depth + 1u); else { c.pc = 0x0012EBA0u; return; } if (c.pc != 0x00133DF8u) [[unlikely]] return; }
L_00133DF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00133E10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133E24u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 24u, depth + 1u); else { c.pc = 0x00130260u; return; } if (c.pc != 0x00133E24u) [[unlikely]] return; }
L_00133E24:
    st32((c.r[16].w[0] + 412u), 0u);
    set32(c.r[4], c.r[16].w[0] + 352u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133E34u); st8((c.r[16].w[0] + 408u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x00133E34u) [[unlikely]] return; }
L_00133E34:
    st32((c.r[16].w[0] + 444u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00133E50:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133E68u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 25u, depth + 1u); else { c.pc = 0x00130270u; return; } if (c.pc != 0x00133E68u) [[unlikely]] return; }
L_00133E68:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133E7Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002A(c, 139u, depth + 1u); else { c.pc = 0x001A95F0u; return; } if (c.pc != 0x00133E7Cu) [[unlikely]] return; }
L_00133E7C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 112u)));
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[3].w[0] + 624u);  if (t) { goto L_00133EDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133E98u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00133E98u) [[unlikely]] return; }
L_00133E98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00133EAC; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133EACu); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_002A(c, 287u, depth + 1u); else { c.pc = 0x001AB200u; return; } if (c.pc != 0x00133EACu) [[unlikely]] return; }
L_00133EAC:
    st32((c.r[16].w[0] + 112u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133EBCu); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x00133EBCu) [[unlikely]] return; }
L_00133EBC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133ECCu); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x00133ECCu) [[unlikely]] return; }
L_00133ECC:
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133EDCu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x00133EDCu) [[unlikely]] return; }
L_00133EDC:
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00133EF0u); set32(c.r[5], 0u + 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00133EF0u) [[unlikely]] return; }
L_00133EF0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[3], c.r[3].w[0] - 4480u);
    set32(c.r[2], 0u + 1u);
    ld128((c.r[3].w[0]) & ~15u, c.r[6]);
    set32(c.r[4], c.r[16].w[0] + 40u);
    c.r[3].d[0] = ld64((c.r[3].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[6]);
    st64((c.r[5].w[0] + 16u), c.r[3].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133F1Cu); st32((c.r[16].w[0] + 444u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x00133F1Cu) [[unlikely]] return; }
L_00133F1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133F24u); set32(c.r[4], c.r[16].w[0] + 480u);  if (depth < kMaxDepth) unit_000D(c, 68u, depth + 1u); else { c.pc = 0x001348C0u; return; } if (c.pc != 0x00133F24u) [[unlikely]] return; }
L_00133F24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133F2Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0051(c, 16u, depth + 1u); else { c.pc = 0x00244130u; return; } if (c.pc != 0x00133F2Cu) [[unlikely]] return; }
L_00133F2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133F34u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x00133F34u) [[unlikely]] return; }
L_00133F34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00133F50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133F64u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 26u, depth + 1u); else { c.pc = 0x00130280u; return; } if (c.pc != 0x00133F64u) [[unlikely]] return; }
L_00133F64:
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00133F80; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00133F80u); set32(c.r[5], 0u + 5u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00133F80u) [[unlikely]] return; }
L_00133F80:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] - 4448u);
    set32(c.r[2], 0u + 2u);
    ld128((c.r[3].w[0]) & ~15u, c.r[6]);
    set32(c.r[4], c.r[16].w[0] + 40u);
    c.r[3].d[0] = ld64((c.r[3].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[6]);
    st64((c.r[5].w[0] + 16u), c.r[3].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133FACu); st32((c.r[16].w[0] + 444u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x00133FACu) [[unlikely]] return; }
L_00133FAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133FB4u); set32(c.r[4], c.r[16].w[0] + 480u);  if (depth < kMaxDepth) unit_000D(c, 69u, depth + 1u); else { c.pc = 0x001348D0u; return; } if (c.pc != 0x00133FB4u) [[unlikely]] return; }
L_00133FB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133FBCu);  if (depth < kMaxDepth) unit_0051(c, 19u, depth + 1u); else { c.pc = 0x00244170u; return; } if (c.pc != 0x00133FBCu) [[unlikely]] return; }
L_00133FBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00133FD0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133FE4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 27u, depth + 1u); else { c.pc = 0x00130290u; return; } if (c.pc != 0x00133FE4u) [[unlikely]] return; }
L_00133FE4:
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_000D(c, 1u, depth); } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00134000u); set32(c.r[5], 0u + 5u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00134000u) [[unlikely]] return; }
    [[clang::musttail]] return unit_000D(c, 1u, depth);
}

}
