#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0016[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 13,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 24, 0,
    0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26,
    0, 27, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0,
    32, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 35, 0, 36, 0, 37, 0,
    38, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0,
    0, 46, 0, 0, 0, 47, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 52, 0,
    53, 0, 0, 54, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 59, 0,
    0, 0, 60, 0, 0, 0, 0, 61, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 65, 0, 66, 0, 67, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 71, 0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    78, 0, 0, 79, 0, 0, 0, 0, 0, 0, 80, 0, 0, 81, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 0, 91,
    0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 101, 0, 0, 102, 0, 0, 0, 0,
    0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    104, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0,
    109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 0,
    0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 122, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0,
    0, 125, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 133, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0,
    0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0,
    144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0,
    147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0,
    149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 155, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    157, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0,
    0, 0, 0, 161, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0,
    166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0,
    0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 178, 0, 179, 0, 180, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0,
    182, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 186, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 194, 0, 0, 0, 0, 195, 0, 0,
    196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 198, 0, 199, 0, 0, 0, 0, 200,
    0, 0, 0, 0, 0, 0, 201, 0, 0, 202, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 204, 0, 205, 0, 0, 206, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 209, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 214, 0, 0, 0, 0, 215, 0, 216, 0, 0, 0, 0, 0, 0,
    217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    218, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 226, 0,
    0, 0, 227, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 235, 0, 0, 0,
    0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    239, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 242, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 246, 0, 247, 0,
    248, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 252, 0, 253, 0, 0, 254, 0,
    255, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 258, 0, 259, 0,
    0, 0, 260, 0, 0, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 264, 0, 0,
    0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 266, 0, 0, 267, 0, 0, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 270, 0,
    0, 0, 271, 0, 0, 0, 0, 0, 272, 0, 273, 0, 0, 274, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 276, 0, 277, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 279, 0, 280, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 284, 0, 0, 285, 286, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0,
    0, 0, 0, 0, 289, 0, 290, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0,
    294, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0,
    0, 299, 0, 300, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 303, 0, 0, 0, 304, 0, 305, 0, 0, 0, 306, 0, 0, 0, 307,
    0, 0, 0, 0, 308, 0, 309, 0, 0, 310, 0, 0, 311, 0, 0, 312, 0, 313, 0, 314, 0, 0, 0, 0, 0, 0, 0, 315, 0, 316, 0, 317,
    0, 318, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 321, 0, 0, 0, 322, 0, 323, 0, 0, 0, 324, 0, 325, 0, 326, 0, 0,
    0, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 330, 0, 331, 0, 332, 0, 0, 0, 0, 0,
    333, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 336, 0, 337, 0, 0, 0, 0, 338, 0, 0, 0, 339, 0, 0, 0, 0,
    0, 0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 344, 0, 0, 0, 0, 345,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 347, 348, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 351, 0, 0, 0, 0, 352, 0, 0, 0, 353, 0, 0, 0, 0, 354, 0, 0, 0, 355, 0,
    0, 0, 0, 356, 0, 0, 0, 357, 0, 0, 0, 0, 358, 0, 0, 0, 359, 0, 0, 0, 360, 0, 0, 0, 0, 0, 361, 0, 362, 0, 0, 0,
    0, 0, 0, 363, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    366, 0, 0, 367, 0, 0, 0, 368, 0, 0, 369, 0, 0, 0, 0, 370, 0, 371, 0, 0, 372, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0,
    0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0,
    382, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 386, 0, 0, 0, 387, 0, 0,
    0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0,
    393, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    396, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0,
    403, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 415, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0,
    420, 0, 0, 0, 0, 421, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0,
    427, 0, 0, 0, 0, 428, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0,
    432, 0, 0, 0, 0, 0, 0, 433, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 438, 0, 0, 0, 439, 0, 0, 0, 440, 0, 0, 0,
    441, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0,
    0, 445, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0,
    0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 454, 0, 0, 455, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 458, 0, 0, 459, 0, 0, 460, 0, 0, 461, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 464, 0, 0, 465, 0, 0, 466,
    0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0016(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00158000;
    case 2u: goto L_00158034;
    case 3u: goto L_00158038;
    case 4u: goto L_00158050;
    case 5u: goto L_00158080;
    case 6u: goto L_001580A0;
    case 7u: goto L_00158100;
    case 8u: goto L_00158130;
    case 9u: goto L_00158140;
    case 10u: goto L_001584B0;
    case 11u: goto L_001584CC;
    case 12u: goto L_001584F0;
    case 13u: goto L_001584FC;
    case 14u: goto L_00158554;
    case 15u: goto L_001585A0;
    case 16u: goto L_001585B4;
    case 17u: goto L_00158680;
    case 18u: goto L_00158698;
    case 19u: goto L_001586A8;
    case 20u: goto L_001586B8;
    case 21u: goto L_001586C8;
    case 22u: goto L_001586D8;
    case 23u: goto L_001586E8;
    case 24u: goto L_001586F8;
    case 25u: goto L_0015870C;
    case 26u: goto L_0015877C;
    case 27u: goto L_00158784;
    case 28u: goto L_0015878C;
    case 29u: goto L_001587A0;
    case 30u: goto L_001587D0;
    case 31u: goto L_001587E8;
    case 32u: goto L_00158800;
    case 33u: goto L_00158810;
    case 34u: goto L_00158860;
    case 35u: goto L_00158868;
    case 36u: goto L_00158870;
    case 37u: goto L_00158878;
    case 38u: goto L_00158880;
    case 39u: goto L_00158890;
    case 40u: goto L_001588A0;
    case 41u: goto L_001588AC;
    case 42u: goto L_001588C0;
    case 43u: goto L_001588D0;
    case 44u: goto L_001588DC;
    case 45u: goto L_001588F0;
    case 46u: goto L_00158904;
    case 47u: goto L_00158914;
    case 48u: goto L_00158920;
    case 49u: goto L_00158948;
    case 50u: goto L_00158958;
    case 51u: goto L_0015896C;
    case 52u: goto L_00158978;
    case 53u: goto L_00158980;
    case 54u: goto L_0015898C;
    case 55u: goto L_001589A8;
    case 56u: goto L_001589B8;
    case 57u: goto L_001589C4;
    case 58u: goto L_001589D8;
    case 59u: goto L_001589F8;
    case 60u: goto L_00158A08;
    case 61u: goto L_00158A1C;
    case 62u: goto L_00158A24;
    case 63u: goto L_00158A88;
    case 64u: goto L_00158AA8;
    case 65u: goto L_00158AB4;
    case 66u: goto L_00158ABC;
    case 67u: goto L_00158AC4;
    case 68u: goto L_00158AD0;
    case 69u: goto L_00158AE4;
    case 70u: goto L_00158B20;
    case 71u: goto L_00158B2C;
    case 72u: goto L_00158B34;
    case 73u: goto L_00158B44;
    case 74u: goto L_00158B60;
    case 75u: goto L_00158B90;
    case 76u: goto L_00158BA8;
    case 77u: goto L_00158BC0;
    case 78u: goto L_00158C00;
    case 79u: goto L_00158C0C;
    case 80u: goto L_00158C28;
    case 81u: goto L_00158C34;
    case 82u: goto L_00158C50;
    case 83u: goto L_00158C84;
    case 84u: goto L_00158C98;
    case 85u: goto L_00158CA8;
    case 86u: goto L_00158DA0;
    case 87u: goto L_00158DAC;
    case 88u: goto L_00158DC8;
    case 89u: goto L_00158DD8;
    case 90u: goto L_00158DE8;
    case 91u: goto L_00158DFC;
    case 92u: goto L_00158E14;
    case 93u: goto L_00158E28;
    case 94u: goto L_00158E70;
    case 95u: goto L_00158EA0;
    case 96u: goto L_00158EB4;
    case 97u: goto L_00158EC4;
    case 98u: goto L_00158EEC;
    case 99u: goto L_00158F34;
    case 100u: goto L_00158F54;
    case 101u: goto L_00158F60;
    case 102u: goto L_00158F6C;
    case 103u: goto L_00158F88;
    case 104u: goto L_00159000;
    case 105u: goto L_00159020;
    case 106u: goto L_0015903C;
    case 107u: goto L_00159050;
    case 108u: goto L_00159068;
    case 109u: goto L_00159080;
    case 110u: goto L_00159098;
    case 111u: goto L_001590B0;
    case 112u: goto L_001590C8;
    case 113u: goto L_001590DC;
    case 114u: goto L_00159110;
    case 115u: goto L_00159138;
    case 116u: goto L_00159158;
    case 117u: goto L_0015916C;
    case 118u: goto L_00159184;
    case 119u: goto L_0015919C;
    case 120u: goto L_001591CC;
    case 121u: goto L_001591E0;
    case 122u: goto L_00159214;
    case 123u: goto L_00159220;
    case 124u: goto L_00159270;
    case 125u: goto L_00159284;
    case 126u: goto L_0015928C;
    case 127u: goto L_001592C0;
    case 128u: goto L_001592D4;
    case 129u: goto L_001592DC;
    case 130u: goto L_00159310;
    case 131u: goto L_00159344;
    case 132u: goto L_00159350;
    case 133u: goto L_00159384;
    case 134u: goto L_00159390;
    case 135u: goto L_001593D4;
    case 136u: goto L_001593E0;
    case 137u: goto L_00159424;
    case 138u: goto L_00159430;
    case 139u: goto L_00159478;
    case 140u: goto L_00159490;
    case 141u: goto L_001594EC;
    case 142u: goto L_001594FC;
    case 143u: goto L_00159560;
    case 144u: goto L_00159580;
    case 145u: goto L_001595DC;
    case 146u: goto L_001595F0;
    case 147u: goto L_00159600;
    case 148u: goto L_00159664;
    case 149u: goto L_00159680;
    case 150u: goto L_0015971C;
    case 151u: goto L_00159730;
    case 152u: goto L_001597CC;
    case 153u: goto L_001597E0;
    case 154u: goto L_00159828;
    case 155u: goto L_00159838;
    case 156u: goto L_0015983C;
    case 157u: goto L_00159880;
    case 158u: goto L_0015989C;
    case 159u: goto L_001598B0;
    case 160u: goto L_001598F0;
    case 161u: goto L_0015990C;
    case 162u: goto L_00159920;
    case 163u: goto L_0015993C;
    case 164u: goto L_0015994C;
    case 165u: goto L_00159960;
    case 166u: goto L_00159980;
    case 167u: goto L_001599C8;
    case 168u: goto L_001599F8;
    case 169u: goto L_00159A10;
    case 170u: goto L_00159A28;
    case 171u: goto L_00159A50;
    case 172u: goto L_00159A98;
    case 173u: goto L_00159AB4;
    case 174u: goto L_00159ACC;
    case 175u: goto L_00159B00;
    case 176u: goto L_00159B28;
    case 177u: goto L_00159B3C;
    case 178u: goto L_00159B44;
    case 179u: goto L_00159B4C;
    case 180u: goto L_00159B54;
    case 181u: goto L_00159B70;
    case 182u: goto L_00159B80;
    case 183u: goto L_00159BA0;
    case 184u: goto L_00159BB4;
    case 185u: goto L_00159BDC;
    case 186u: goto L_00159BE4;
    case 187u: goto L_00159C94;
    case 188u: goto L_00159CCC;
    case 189u: goto L_00159CE8;
    case 190u: goto L_00159D30;
    case 191u: goto L_00159D60;
    case 192u: goto L_00159D70;
    case 193u: goto L_00159DD8;
    case 194u: goto L_00159DE0;
    case 195u: goto L_00159DF4;
    case 196u: goto L_00159E00;
    case 197u: goto L_00159E44;
    case 198u: goto L_00159E60;
    case 199u: goto L_00159E68;
    case 200u: goto L_00159E7C;
    case 201u: goto L_00159E98;
    case 202u: goto L_00159EA4;
    case 203u: goto L_00159EC0;
    case 204u: goto L_00159ED0;
    case 205u: goto L_00159ED8;
    case 206u: goto L_00159EE4;
    case 207u: goto L_00159F30;
    case 208u: goto L_00159F58;
    case 209u: goto L_00159F74;
    case 210u: goto L_00159FA0;
    case 211u: goto L_00159FC0;
    case 212u: goto L_00159FF0;
    case 213u: goto L_0015A040;
    case 214u: goto L_0015A048;
    case 215u: goto L_0015A05C;
    case 216u: goto L_0015A064;
    case 217u: goto L_0015A080;
    case 218u: goto L_0015A100;
    case 219u: goto L_0015A108;
    case 220u: goto L_0015A120;
    case 221u: goto L_0015A148;
    case 222u: goto L_0015A168;
    case 223u: goto L_0015A1A0;
    case 224u: goto L_0015A1A8;
    case 225u: goto L_0015A1F0;
    case 226u: goto L_0015A1F8;
    case 227u: goto L_0015A208;
    case 228u: goto L_0015A214;
    case 229u: goto L_0015A2B4;
    case 230u: goto L_0015A2D0;
    case 231u: goto L_0015A2E0;
    case 232u: goto L_0015A32C;
    case 233u: goto L_0015A340;
    case 234u: goto L_0015A368;
    case 235u: goto L_0015A370;
    case 236u: goto L_0015A384;
    case 237u: goto L_0015A3B0;
    case 238u: goto L_0015A3C0;
    case 239u: goto L_0015A400;
    case 240u: goto L_0015A420;
    case 241u: goto L_0015A458;
    case 242u: goto L_0015A470;
    case 243u: goto L_0015A4BC;
    case 244u: goto L_0015A4D0;
    case 245u: goto L_0015A4E0;
    case 246u: goto L_0015A4F0;
    case 247u: goto L_0015A4F8;
    case 248u: goto L_0015A500;
    case 249u: goto L_0015A510;
    case 250u: goto L_0015A520;
    case 251u: goto L_0015A558;
    case 252u: goto L_0015A564;
    case 253u: goto L_0015A56C;
    case 254u: goto L_0015A578;
    case 255u: goto L_0015A580;
    case 256u: goto L_0015A5A0;
    case 257u: goto L_0015A5D0;
    case 258u: goto L_0015A5F0;
    case 259u: goto L_0015A5F8;
    case 260u: goto L_0015A608;
    case 261u: goto L_0015A620;
    case 262u: goto L_0015A630;
    case 263u: goto L_0015A658;
    case 264u: goto L_0015A674;
    case 265u: goto L_0015A698;
    case 266u: goto L_0015A6B4;
    case 267u: goto L_0015A6C0;
    case 268u: goto L_0015A6D8;
    case 269u: goto L_0015A6E8;
    case 270u: goto L_0015A6F8;
    case 271u: goto L_0015A708;
    case 272u: goto L_0015A720;
    case 273u: goto L_0015A728;
    case 274u: goto L_0015A734;
    case 275u: goto L_0015A748;
    case 276u: goto L_0015A768;
    case 277u: goto L_0015A770;
    case 278u: goto L_0015A7A4;
    case 279u: goto L_0015A7AC;
    case 280u: goto L_0015A7B4;
    case 281u: goto L_0015A7C4;
    case 282u: goto L_0015A7F0;
    case 283u: goto L_0015A824;
    case 284u: goto L_0015A82C;
    case 285u: goto L_0015A838;
    case 286u: goto L_0015A83C;
    case 287u: goto L_0015A850;
    case 288u: goto L_0015A870;
    case 289u: goto L_0015A890;
    case 290u: goto L_0015A898;
    case 291u: goto L_0015A8B0;
    case 292u: goto L_0015A8D0;
    case 293u: goto L_0015A8F0;
    case 294u: goto L_0015A900;
    case 295u: goto L_0015A910;
    case 296u: goto L_0015A92C;
    case 297u: goto L_0015A940;
    case 298u: goto L_0015A96C;
    case 299u: goto L_0015A984;
    case 300u: goto L_0015A98C;
    case 301u: goto L_0015A994;
    case 302u: goto L_0015A9BC;
    case 303u: goto L_0015A9C4;
    case 304u: goto L_0015A9D4;
    case 305u: goto L_0015A9DC;
    case 306u: goto L_0015A9EC;
    case 307u: goto L_0015A9FC;
    case 308u: goto L_0015AA10;
    case 309u: goto L_0015AA18;
    case 310u: goto L_0015AA24;
    case 311u: goto L_0015AA30;
    case 312u: goto L_0015AA3C;
    case 313u: goto L_0015AA44;
    case 314u: goto L_0015AA4C;
    case 315u: goto L_0015AA6C;
    case 316u: goto L_0015AA74;
    case 317u: goto L_0015AA7C;
    case 318u: goto L_0015AA84;
    case 319u: goto L_0015AA8C;
    case 320u: goto L_0015AAB4;
    case 321u: goto L_0015AABC;
    case 322u: goto L_0015AACC;
    case 323u: goto L_0015AAD4;
    case 324u: goto L_0015AAE4;
    case 325u: goto L_0015AAEC;
    case 326u: goto L_0015AAF4;
    case 327u: goto L_0015AB10;
    case 328u: goto L_0015AB20;
    case 329u: goto L_0015AB44;
    case 330u: goto L_0015AB58;
    case 331u: goto L_0015AB60;
    case 332u: goto L_0015AB68;
    case 333u: goto L_0015AB80;
    case 334u: goto L_0015AB94;
    case 335u: goto L_0015ABAC;
    case 336u: goto L_0015ABC0;
    case 337u: goto L_0015ABC8;
    case 338u: goto L_0015ABDC;
    case 339u: goto L_0015ABEC;
    case 340u: goto L_0015AC10;
    case 341u: goto L_0015AC24;
    case 342u: goto L_0015AC38;
    case 343u: goto L_0015AC58;
    case 344u: goto L_0015AC68;
    case 345u: goto L_0015AC7C;
    case 346u: goto L_0015ACA4;
    case 347u: goto L_0015ACB0;
    case 348u: goto L_0015ACB4;
    case 349u: goto L_0015ACBC;
    case 350u: goto L_0015AD28;
    case 351u: goto L_0015AD30;
    case 352u: goto L_0015AD44;
    case 353u: goto L_0015AD54;
    case 354u: goto L_0015AD68;
    case 355u: goto L_0015AD78;
    case 356u: goto L_0015AD8C;
    case 357u: goto L_0015AD9C;
    case 358u: goto L_0015ADB0;
    case 359u: goto L_0015ADC0;
    case 360u: goto L_0015ADD0;
    case 361u: goto L_0015ADE8;
    case 362u: goto L_0015ADF0;
    case 363u: goto L_0015AE0C;
    case 364u: goto L_0015AE14;
    case 365u: goto L_0015AE40;
    case 366u: goto L_0015AE80;
    case 367u: goto L_0015AE8C;
    case 368u: goto L_0015AE9C;
    case 369u: goto L_0015AEA8;
    case 370u: goto L_0015AEBC;
    case 371u: goto L_0015AEC4;
    case 372u: goto L_0015AED0;
    case 373u: goto L_0015AEEC;
    case 374u: goto L_0015AF18;
    case 375u: goto L_0015AF40;
    case 376u: goto L_0015AF78;
    case 377u: goto L_0015AF90;
    case 378u: goto L_0015AFB0;
    case 379u: goto L_0015AFF8;
    case 380u: goto L_0015B030;
    case 381u: goto L_0015B068;
    case 382u: goto L_0015B080;
    case 383u: goto L_0015B0A0;
    case 384u: goto L_0015B0B0;
    case 385u: goto L_0015B0D0;
    case 386u: goto L_0015B0E4;
    case 387u: goto L_0015B0F4;
    case 388u: goto L_0015B110;
    case 389u: goto L_0015B2E0;
    case 390u: goto L_0015B320;
    case 391u: goto L_0015B34C;
    case 392u: goto L_0015B364;
    case 393u: goto L_0015B380;
    case 394u: goto L_0015B3A4;
    case 395u: goto L_0015B3CC;
    case 396u: goto L_0015B400;
    case 397u: goto L_0015B410;
    case 398u: goto L_0015B434;
    case 399u: goto L_0015B45C;
    case 400u: goto L_0015B490;
    case 401u: goto L_0015B4B4;
    case 402u: goto L_0015B4E4;
    case 403u: goto L_0015B500;
    case 404u: goto L_0015B520;
    case 405u: goto L_0015B5A0;
    case 406u: goto L_0015B5D0;
    case 407u: goto L_0015B610;
    case 408u: goto L_0015B638;
    case 409u: goto L_0015B654;
    case 410u: goto L_0015B6A0;
    case 411u: goto L_0015B6C0;
    case 412u: goto L_0015B6D0;
    case 413u: goto L_0015B710;
    case 414u: goto L_0015B734;
    case 415u: goto L_0015B73C;
    case 416u: goto L_0015B754;
    case 417u: goto L_0015B770;
    case 418u: goto L_0015B7C8;
    case 419u: goto L_0015B7F0;
    case 420u: goto L_0015B800;
    case 421u: goto L_0015B814;
    case 422u: goto L_0015B824;
    case 423u: goto L_0015B840;
    case 424u: goto L_0015B880;
    case 425u: goto L_0015B8B8;
    case 426u: goto L_0015B8E4;
    case 427u: goto L_0015B900;
    case 428u: goto L_0015B914;
    case 429u: goto L_0015B928;
    case 430u: goto L_0015B94C;
    case 431u: goto L_0015B970;
    case 432u: goto L_0015B980;
    case 433u: goto L_0015B99C;
    case 434u: goto L_0015B9A4;
    case 435u: goto L_0015B9D0;
    case 436u: goto L_0015BA14;
    case 437u: goto L_0015BA40;
    case 438u: goto L_0015BA50;
    case 439u: goto L_0015BA60;
    case 440u: goto L_0015BA70;
    case 441u: goto L_0015BA80;
    case 442u: goto L_0015BA94;
    case 443u: goto L_0015BAC0;
    case 444u: goto L_0015BAF8;
    case 445u: goto L_0015BB04;
    case 446u: goto L_0015BB1C;
    case 447u: goto L_0015BB40;
    case 448u: goto L_0015BB9C;
    case 449u: goto L_0015BBB4;
    case 450u: goto L_0015BBEC;
    case 451u: goto L_0015BC10;
    case 452u: goto L_0015BD2C;
    case 453u: goto L_0015BDA0;
    case 454u: goto L_0015BDA8;
    case 455u: goto L_0015BDB4;
    case 456u: goto L_0015BDC0;
    case 457u: goto L_0015BE40;
    case 458u: goto L_0015BE48;
    case 459u: goto L_0015BE54;
    case 460u: goto L_0015BE60;
    case 461u: goto L_0015BE6C;
    case 462u: goto L_0015BE94;
    case 463u: goto L_0015BF5C;
    case 464u: goto L_0015BF64;
    case 465u: goto L_0015BF70;
    case 466u: goto L_0015BF7C;
    case 467u: goto L_0015BFA0;
    case 468u: goto L_0015BFAC;
    case 469u: goto L_0015BFE0;
    default: bad_entry(c, 0x00158000u); return;
    }
L_00158000:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_00158010; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00158034; } }
L_00158010:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_00158020; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00158034; } }
L_00158020:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00158030; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00158034; } }
L_00158030:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_00158034:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00158038:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00158050:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[0] = 0u;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[20] = ld32((c.r[5].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00158078; } }
    c.f[20] = c.f[20] ^ fp::kSign;
    c.budget -= 1;
L_00158078:
    set32(c.r[2], c.r[29].w[0] + 64u);
    ld128((c.r[5].w[0]) & ~15u, c.r[6]);
    c.budget -= 2;
L_00158080:
    st128((c.r[2].w[0]) & ~15u, c.r[6]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], c.r[16].w[0] + 224u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001580A0u); st32((c.r[29].w[0] + 76u), c.f[0]);  if (depth < kMaxDepth) unit_0011(c, 20u, depth + 1u); else { c.pc = 0x001444C0u; return; } if (c.pc != 0x001580A0u) [[unlikely]] return; }
L_001580A0:
    c.f[0] = ld32((c.r[16].w[0] + 352u));
    c.f[1] = ld32((c.r[29].w[0] + 72u));
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001580C4; } }
    c.f[0] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_001584A0; } }
L_001580C4:
    c.f[0] = ld32((c.r[16].w[0] + 356u));
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], c.r[29].w[0] + 64u);  if (t) { goto L_001580E4; } }
    c.f[0] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015849C; } }
L_001580E4:
    set32(c.r[3], c.r[29].w[0] + 48u);
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    st128((c.r[3].w[0]) & ~15u, c.r[6]);
    c.f[0] = ld32((c.r[29].w[0] + 72u));
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 352u));
    c.budget -= 7;
L_00158100:
    c.f[0] = ld32((c.r[29].w[0] + 72u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00158114; } }
    st32((c.r[29].w[0] + 72u), c.f[1]);
    c.budget -= 1;
L_00158114:
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[16].w[0] + 160u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.f[0] = fp::add(c.f[0], c.f[20]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158130u); st32((c.r[29].w[0] + 56u), c.f[0]);  if (depth < kMaxDepth) unit_0011(c, 20u, depth + 1u); else { c.pc = 0x001444C0u; return; } if (c.pc != 0x00158130u) [[unlikely]] return; }
L_00158130:
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[16].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158140u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 20u, depth + 1u); else { c.pc = 0x001444C0u; return; } if (c.pc != 0x00158140u) [[unlikely]] return; }
L_00158140:
    c.f[3] = ld32((c.r[29].w[0] + 76u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = ld32((c.r[29].w[0] + 64u));
    c.r[7].d[0] = 0ull + 0ull;
    c.f[1] = ld32((c.r[29].w[0] + 68u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[0] = ld32((c.r[29].w[0] + 72u));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    fpu_div(c, 8u, c.f[4], c.f[3]);
    c.f[2] = fp::mul(c.f[2], c.f[8]);
    st32((c.r[29].w[0] + 64u), c.f[2]);
    c.f[2] = fp::mul(c.f[1], c.f[8]);
    c.f[0] = fp::mul(c.f[0], c.f[8]);
    st32((c.r[29].w[0] + 72u), c.f[0]);
    st32((c.r[29].w[0] + 68u), c.f[2]);
    c.f[4] = ld32((c.r[16].w[0] + 312u));
    c.f[2] = ld32((c.r[16].w[0] + 316u));
    c.f[6] = ld32((c.r[16].w[0] + 160u));
    c.f[8] = fp::mul(c.f[20], c.f[8]);
    c.f[5] = ld32((c.r[16].w[0] + 180u));
    c.f[4] = fp::cvt_s_w(c.f[4]);
    c.f[3] = c.r[3].w[0];
    c.f[1] = ld32((c.r[29].w[0] + 64u));
    c.f[6] = fp::mul(c.f[6], c.f[8]);
    c.f[4] = fp::mul(c.f[3], c.f[4]);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::add(c.f[1], c.f[6]);
    c.f[0] = fp::sub(c.f[0], c.f[4]);
    c.f[5] = fp::mul(c.f[5], c.f[8]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 38;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[3] = fp::mul(c.f[3], c.f[2]);  if (t) { goto L_001581DC; } }
    set32(c.r[7], 0u + 1u);
    c.budget -= 1;
L_001581DC:
    c.f[1] = ld32((c.r[29].w[0] + 64u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[4]);
    c.f[1] = fp::sub(c.f[1], c.f[6]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00158204; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_00158204:
    c.f[1] = ld32((c.r[29].w[0] + 68u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    c.f[1] = fp::add(c.f[1], c.f[5]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0015822C; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_0015822C:
    c.f[1] = ld32((c.r[29].w[0] + 68u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[3]);
    c.f[1] = fp::sub(c.f[1], c.f[5]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00158254; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_00158254:
    c.f[8] = ld32((c.r[29].w[0] + 60u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[9] = c.r[2].w[0];
    c.f[7] = ld32((c.r[29].w[0] + 48u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[0] = c.r[2].w[0];
    c.f[2] = ld32((c.r[29].w[0] + 52u));
    fpu_div(c, 8u, c.f[9], c.f[8]);
    c.f[1] = ld32((c.r[29].w[0] + 56u));
    c.f[7] = fp::mul(c.f[7], c.f[8]);
    c.f[2] = fp::mul(c.f[2], c.f[8]);
    c.f[1] = fp::mul(c.f[1], c.f[8]);
    st32((c.r[29].w[0] + 48u), c.f[7]);
    st32((c.r[29].w[0] + 52u), c.f[2]);
    st32((c.r[29].w[0] + 56u), c.f[1]);
    c.f[2] = ld32((c.r[16].w[0] + 160u));
    c.f[8] = fp::mul(c.f[20], c.f[8]);
    c.f[1] = ld32((c.r[16].w[0] + 180u));
    c.f[7] = ld32((c.r[29].w[0] + 48u));
    c.f[2] = fp::mul(c.f[2], c.f[8]);
    c.f[0] = fp::sub(c.f[0], c.f[4]);
    c.f[7] = fp::add(c.f[7], c.f[2]);
    fpu_compare(c, fp::key(c.f[7]) < fp::key(c.f[0]));
    c.budget -= 25;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[1] = fp::mul(c.f[1], c.f[8]);  if (t) { goto L_001582BC; } }
    c.r[7].d[0] = c.r[7].d[0] | 2ull;
    c.budget -= 1;
L_001582BC:
    c.f[7] = ld32((c.r[29].w[0] + 48u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[4]);
    c.f[7] = fp::sub(c.f[7], c.f[2]);
    fpu_compare(c, fp::key(c.f[7]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001582E4; } }
    c.r[6].d[0] = c.r[6].d[0] | 2ull;
    c.budget -= 1;
L_001582E4:
    c.f[7] = ld32((c.r[29].w[0] + 52u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    c.f[7] = fp::add(c.f[7], c.f[1]);
    fpu_compare(c, fp::key(c.f[7]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0015830C; } }
    c.r[5].d[0] = c.r[5].d[0] | 2ull;
    c.budget -= 1;
L_0015830C:
    c.f[7] = ld32((c.r[29].w[0] + 52u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[3]);
    c.f[7] = fp::sub(c.f[7], c.f[1]);
    fpu_compare(c, fp::key(c.f[7]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00158334; } }
    c.r[4].d[0] = c.r[4].d[0] | 2ull;
    c.budget -= 1;
L_00158334:
    c.f[0] = 0u;
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_00158398; } }
    c.f[8] = ld32((c.r[29].w[0] + 64u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[7] = ld32((c.r[29].w[0] + 48u));
    c.f[9] = c.r[2].w[0];
    c.f[9] = fp::sub(c.f[9], c.f[4]);
    c.f[8] = fp::add(c.f[8], c.f[6]);
    c.f[7] = fp::add(c.f[7], c.f[2]);
    c.f[8] = fp::sub(c.f[9], c.f[8]);
    c.f[7] = fp::sub(c.f[9], c.f[7]);
    fpu_compare(c, fp::key(c.f[8]) < fp::key(c.f[7]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00158380; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00158384; } }
L_00158380:
    c.f[8] = c.f[7];
    c.budget -= 1;
L_00158384:
    fpu_compare(c, fp::key(c.f[8]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00158394; } }
    c.f[0] = c.f[8];
    c.budget -= 1;
L_00158394:
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_00158398:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_001583F0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[9] = c.r[2].w[0];
    c.f[7] = ld32((c.r[29].w[0] + 48u));
    c.f[8] = ld32((c.r[29].w[0] + 64u));
    c.f[9] = fp::add(c.f[9], c.f[4]);
    c.f[2] = fp::sub(c.f[7], c.f[2]);
    c.f[4] = fp::sub(c.f[8], c.f[6]);
    c.f[4] = fp::sub(c.f[9], c.f[4]);
    c.f[2] = fp::sub(c.f[9], c.f[2]);
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[2]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001583D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001583DC; } }
L_001583D8:
    c.f[4] = c.f[2];
    c.budget -= 1;
L_001583DC:
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001583EC; } }
    c.f[0] = c.f[4];
    c.budget -= 1;
L_001583EC:
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_001583F0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_0015844C; } }
    c.f[4] = ld32((c.r[29].w[0] + 68u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[2] = ld32((c.r[29].w[0] + 52u));
    c.f[6] = c.r[2].w[0];
    c.f[6] = fp::sub(c.f[6], c.f[3]);
    c.f[4] = fp::add(c.f[4], c.f[5]);
    c.f[2] = fp::add(c.f[2], c.f[1]);
    c.f[4] = fp::sub(c.f[6], c.f[4]);
    c.f[2] = fp::sub(c.f[6], c.f[2]);
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[2]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00158434; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00158438; } }
L_00158434:
    c.f[4] = c.f[2];
    c.budget -= 1;
L_00158438:
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00158448; } }
    c.f[0] = c.f[4];
    c.budget -= 1;
L_00158448:
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_0015844C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x45000000u);  if (t) { goto L_0015849C; } }
    c.f[6] = c.r[2].w[0];
    c.f[2] = ld32((c.r[29].w[0] + 52u));
    c.f[4] = ld32((c.r[29].w[0] + 68u));
    c.f[6] = fp::add(c.f[6], c.f[3]);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[3] = fp::sub(c.f[4], c.f[5]);
    c.f[2] = fp::sub(c.f[6], c.f[3]);
    c.f[1] = fp::sub(c.f[6], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00158488; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015848C; } }
L_00158488:
    c.f[2] = c.f[1];
    c.budget -= 1;
L_0015848C:
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0015849C; } }
    c.f[0] = c.f[2];
    c.budget -= 1;
L_0015849C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001584A0:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001584B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 400u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001584CCu); set32(c.r[5], c.r[16].w[0] + 224u);  if (depth < kMaxDepth) unit_0000(c, 352u, depth + 1u); else { c.pc = 0x001039B8u; return; } if (c.pc != 0x001584CCu) [[unlikely]] return; }
L_001584CC:
    st32((c.r[16].w[0] + 464u), 0u);
    set32(c.r[4], c.r[16].w[0] + 464u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 468u), 0u);
    st32((c.r[16].w[0] + 472u), c.r[2].w[0]);
    set32(c.r[5], c.r[16].w[0] + 400u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001584F0u); st32((c.r[16].w[0] + 476u), 0u);  if (depth < kMaxDepth) unit_0011(c, 20u, depth + 1u); else { c.pc = 0x001444C0u; return; } if (c.pc != 0x001584F0u) [[unlikely]] return; }
L_001584F0:
    c.f[13] = ld32((c.r[16].w[0] + 120u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001584FCu); c.f[12] = ld32((c.r[16].w[0] + 112u));  if (depth < kMaxDepth) unit_0011(c, 97u, depth + 1u); else { c.pc = 0x00145DD0u; return; } if (c.pc != 0x001584FCu) [[unlikely]] return; }
L_001584FC:
    st32((c.r[16].w[0] + 484u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[12] = ld32((c.r[16].w[0] + 116u));
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0015852C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] - 12096u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 480u), c.f[0]);  if (t) { goto L_00158584; } }
L_0015852C:
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_0015854C; } }
    c.f[0] = ld32((c.r[1].w[0] - 12096u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 480u), c.f[0]);  if (t) { goto L_00158584; } }
L_0015854C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158554u);  if (depth < kMaxDepth) unit_0006(c, 218u, depth + 1u); else { c.pc = 0x0011A5C0u; return; } if (c.pc != 0x00158554u) [[unlikely]] return; }
L_00158554:
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 480u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 100u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_00158584; } }
    c.f[1] = ld32((c.r[16].w[0] + 480u));
    c.f[0] = ld32((c.r[1].w[0] - 12104u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 480u), c.f[0]);
    c.budget -= 4;
L_00158584:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001585A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001585B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0015(c, 128u, depth + 1u); else { c.pc = 0x00157600u; return; } if (c.pc != 0x001585B4u) [[unlikely]] return; }
L_001585B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[16].w[0] + 496u);
    set32(c.r[2], c.r[2].w[0] - 18288u);
    st32((c.r[16].w[0] + 152u), c.r[2].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[16].w[0] + 544u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.f[1] = 0u;
    c.f[0] = 0u;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[2].w[0];
    st32((c.r[16].w[0] + 512u), c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[2].w[0];
    st32((c.r[16].w[0] + 516u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 520u), c.f[2]);
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    st32((c.r[16].w[0] + 524u), c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 528u), c.f[0]);
    c.f[0] = c.r[2].w[0];
    st32((c.r[16].w[0] + 532u), c.f[1]);
    c.f[2] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = 0u;
    st32((c.r[16].w[0] + 536u), c.f[2]);
    st32((c.r[16].w[0] + 540u), c.f[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 20144u)));
    c.f[0] = c.r[2].w[0];
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1420u)));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.f[2] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    st32((c.r[16].w[0] + 560u), c.f[2]);
    st32((c.r[16].w[0] + 564u), c.f[1]);
    st32((c.r[16].w[0] + 568u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 48;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00158680:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158698u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0000(c, 367u, depth + 1u); else { c.pc = 0x00103B98u; return; } if (c.pc != 0x00158698u) [[unlikely]] return; }
L_00158698:
    c.f[12] = ld32((c.r[16].w[0] + 544u));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001586A8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 373u, depth + 1u); else { c.pc = 0x00103CE0u; return; } if (c.pc != 0x001586A8u) [[unlikely]] return; }
L_001586A8:
    c.f[12] = ld32((c.r[16].w[0] + 548u));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001586B8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 376u, depth + 1u); else { c.pc = 0x00103D88u; return; } if (c.pc != 0x001586B8u) [[unlikely]] return; }
L_001586B8:
    c.f[12] = ld32((c.r[16].w[0] + 552u));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001586C8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 369u, depth + 1u); else { c.pc = 0x00103C38u; return; } if (c.pc != 0x001586C8u) [[unlikely]] return; }
L_001586C8:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001586D8u); set32(c.r[6], c.r[16].w[0] + 512u);  if (depth < kMaxDepth) unit_0000(c, 340u, depth + 1u); else { c.pc = 0x00103870u; return; } if (c.pc != 0x001586D8u) [[unlikely]] return; }
L_001586D8:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001586E8u); set32(c.r[6], c.r[16].w[0] + 528u);  if (depth < kMaxDepth) unit_0000(c, 340u, depth + 1u); else { c.pc = 0x00103870u; return; } if (c.pc != 0x001586E8u) [[unlikely]] return; }
L_001586E8:
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001586F8u); set32(c.r[6], c.r[16].w[0] + 496u);  if (depth < kMaxDepth) unit_0000(c, 340u, depth + 1u); else { c.pc = 0x00103870u; return; } if (c.pc != 0x001586F8u) [[unlikely]] return; }
L_001586F8:
    set32(c.r[4], c.r[16].w[0] + 224u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[6], c.r[29].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015870Cu); set32(c.r[7], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0000(c, 383u, depth + 1u); else { c.pc = 0x00103EA8u; return; } if (c.pc != 0x0015870Cu) [[unlikely]] return; }
L_0015870C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 20144u)));
    c.f[13] = c.r[2].w[0];
    c.f[3] = ld32((c.r[16].w[0] + 568u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x46000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[1] = c.r[2].w[0];
    c.f[17] = c.f[13];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    c.f[2] = ld32((c.r[1].w[0] + 1420u));
    set32(c.r[4], c.r[16].w[0] + 160u);
    c.f[0] = c.r[2].w[0];
    c.f[19] = c.f[13];
    c.f[18] = fp::cvt_s_w(c.f[0]);
    st32((c.r[29].w[0]), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[4] = fp::cvt_s_w(c.f[2]);
    c.f[2] = ld32((c.r[16].w[0] + 560u));
    c.f[0] = ld32((c.r[16].w[0] + 564u));
    c.f[14] = ld32((c.r[1].w[0] - 12112u));
    c.f[12] = fp::mul(c.f[4], c.f[3]);
    c.f[15] = fp::add(c.f[1], c.f[2]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015877Cu); c.f[16] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0001(c, 6u, depth + 1u); else { c.pc = 0x00104080u; return; } if (c.pc != 0x0015877Cu) [[unlikely]] return; }
L_0015877C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158784u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0015(c, 115u, depth + 1u); else { c.pc = 0x001573D0u; return; } if (c.pc != 0x00158784u) [[unlikely]] return; }
L_00158784:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015878Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0015(c, 124u, depth + 1u); else { c.pc = 0x001575B0u; return; } if (c.pc != 0x0015878Cu) [[unlikely]] return; }
L_0015878C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_001587A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001587E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 18288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001587D0u); st32((c.r[17].w[0] + 152u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0015(c, 131u, depth + 1u); else { c.pc = 0x00157770u; return; } if (c.pc != 0x001587D0u) [[unlikely]] return; }
L_001587D0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001587EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001587E8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001587E8u) [[unlikely]] return; }
L_001587E8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001587EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00158800:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[1].w[0] + 20232u)));  c.pc = t; return; }
L_00158810:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x12000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld64((c.r[1].w[0] + 4096u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].d[0] = c.r[3].d[0] >> 13;
    set32(c.r[2], ld32((c.r[1].w[0] + 20232u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[4], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 20232u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[3].d[0] << 32;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[1].w[0] + 20224u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158860u); set32(c.r[5], ld32((c.r[1].w[0] + 20224u)));  if (depth < kMaxDepth) unit_0013(c, 127u, depth + 1u); else { c.pc = 0x0014DF60u; return; } if (c.pc != 0x00158860u) [[unlikely]] return; }
L_00158860:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158868u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 489u, depth + 1u); else { c.pc = 0x003B7F98u; return; } if (c.pc != 0x00158868u) [[unlikely]] return; }
L_00158868:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158870u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0078(c, 208u, depth + 1u); else { c.pc = 0x002E1F40u; return; } if (c.pc != 0x00158870u) [[unlikely]] return; }
L_00158870:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158878u);  if (depth < kMaxDepth) unit_0078(c, 380u, depth + 1u); else { c.pc = 0x002E3400u; return; } if (c.pc != 0x00158878u) [[unlikely]] return; }
L_00158878:
    set_interrupts(c, true);
    c.budget -= 2;
L_00158880:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00158890:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001588A0u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 124u, depth + 1u); else { c.pc = 0x001260E0u; return; } if (c.pc != 0x001588A0u) [[unlikely]] return; }
L_001588A0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001588ACu); set32(c.r[4], c.r[4].w[0] - 12080u);  if (depth < kMaxDepth) unit_0009(c, 124u, depth + 1u); else { c.pc = 0x001260E0u; return; } if (c.pc != 0x001588ACu) [[unlikely]] return; }
L_001588AC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001588C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001588D0u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 124u, depth + 1u); else { c.pc = 0x001260E0u; return; } if (c.pc != 0x001588D0u) [[unlikely]] return; }
L_001588D0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001588DCu); set32(c.r[4], c.r[4].w[0] - 12048u);  if (depth < kMaxDepth) unit_0009(c, 124u, depth + 1u); else { c.pc = 0x001260E0u; return; } if (c.pc != 0x001588DCu) [[unlikely]] return; }
L_001588DC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001588F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0015890C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158904u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_00AF(c, 411u, depth + 1u); else { c.pc = 0x003BF600u; return; } if (c.pc != 0x00158904u) [[unlikely]] return; }
L_00158904:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00158918; } }
L_0015890C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158914u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 411u, depth + 1u); else { c.pc = 0x003BF600u; return; } if (c.pc != 0x00158914u) [[unlikely]] return; }
L_00158914:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00158918:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00158920:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[4].w[0] + 20800u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158948u); set32(c.r[5], 0u + 3936u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x00158948u) [[unlikely]] return; }
L_00158948:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], 0u + 384u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158958u); set32(c.r[4], c.r[4].w[0] + 24736u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x00158958u) [[unlikely]] return; }
L_00158958:
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015896Cu); st32((c.r[1].w[0] + 25120u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AF(c, 181u, depth + 1u); else { c.pc = 0x003BD640u; return; } if (c.pc != 0x0015896Cu) [[unlikely]] return; }
L_0015896C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158978u); set32(c.r[4], c.r[4].w[0] - 12016u);  if (depth < kMaxDepth) unit_0009(c, 124u, depth + 1u); else { c.pc = 0x001260E0u; return; } if (c.pc != 0x00158978u) [[unlikely]] return; }
L_00158978:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00158980:
    set32(c.r[4], c.r[4].w[0] + 20240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015898Cu); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0015898Cu) [[unlikely]] return; }
L_0015898C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001589B0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[4].w[0] + 20240u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001589A8u); st32((c.r[1].w[0] + 20240u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_00AF(c, 162u, depth + 1u); else { c.pc = 0x003BD480u; return; } if (c.pc != 0x001589A8u) [[unlikely]] return; }
L_001589A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001589B8; } }
L_001589B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001589B8u);  if (depth < kMaxDepth) unit_00AF(c, 162u, depth + 1u); else { c.pc = 0x003BD480u; return; } if (c.pc != 0x001589B8u) [[unlikely]] return; }
L_001589B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001589C4u); set32(c.r[4], c.r[4].w[0] - 11984u);  if (depth < kMaxDepth) unit_0009(c, 124u, depth + 1u); else { c.pc = 0x001260E0u; return; } if (c.pc != 0x001589C4u) [[unlikely]] return; }
L_001589C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 20256u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001589D8u); set32(c.r[6], 0u + 20u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x001589D8u) [[unlikely]] return; }
L_001589D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[1].w[0] + 20256u), c.r[17].w[0]);  if (t) { goto L_00158A00; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[4].w[0] + 20256u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001589F8u); st32((c.r[1].w[0] + 20268u), 0u);  if (depth < kMaxDepth) unit_00AF(c, 140u, depth + 1u); else { c.pc = 0x003BD1D0u; return; } if (c.pc != 0x001589F8u) [[unlikely]] return; }
L_001589F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00158A08; } }
L_00158A00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158A08u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 140u, depth + 1u); else { c.pc = 0x003BD1D0u; return; } if (c.pc != 0x00158A08u) [[unlikely]] return; }
L_00158A08:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 20288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158A1Cu); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x00158A1Cu) [[unlikely]] return; }
L_00158A1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158A24u);  if (depth < kMaxDepth) unit_0011(c, 139u, depth + 1u); else { c.pc = 0x00146880u; return; } if (c.pc != 0x00158A24u) [[unlikely]] return; }
L_00158A24:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00158A44; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] - 11960u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 20288u), c.r[2].w[0]);  if (t) { goto L_00158A54; } }
L_00158A44:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] - 11944u);
    st32((c.r[1].w[0] + 20288u), c.r[2].w[0]);
    c.budget -= 4;
L_00158A54:
    set32(c.r[2], 0u + 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 20292u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 20292u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + 1024u);
    st32((c.r[1].w[0] + 20300u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158A88u); set32(c.r[4], ld32((c.r[1].w[0] + 20300u)));  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x00158A88u) [[unlikely]] return; }
L_00158A88:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 20296u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[6], ld32((c.r[1].w[0] + 20300u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 20296u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158AA8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x00158AA8u) [[unlikely]] return; }
L_00158AA8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158AB4u); set32(c.r[4], c.r[4].w[0] + 20288u);  if (depth < kMaxDepth) unit_00AF(c, 148u, depth + 1u); else { c.pc = 0x003BD2D8u; return; } if (c.pc != 0x00158AB4u) [[unlikely]] return; }
L_00158AB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158ABCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 427u, depth + 1u); else { c.pc = 0x003B76F0u; return; } if (c.pc != 0x00158ABCu) [[unlikely]] return; }
L_00158ABC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158AC4u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_00AE(c, 52u, depth + 1u); else { c.pc = 0x003B8558u; return; } if (c.pc != 0x00158AC4u) [[unlikely]] return; }
L_00158AC4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00160000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158AD0u); set32(c.r[4], c.r[4].w[0] - 30704u);  if (depth < kMaxDepth) unit_0000(c, 231u, depth + 1u); else { c.pc = 0x001025C0u; return; } if (c.pc != 0x00158AD0u) [[unlikely]] return; }
L_00158AD0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 20304u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158AE4u); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x00158AE4u) [[unlikely]] return; }
L_00158AE4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00160000u);
    st32((c.r[1].w[0] + 20316u), 0u);
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[4].w[0] - 30576u);
    st32((c.r[1].w[0] + 20308u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 20312u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] - 11728u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158B20u); st32((c.r[1].w[0] + 20304u), c.f[0]);  if (depth < kMaxDepth) unit_00AD(c, 426u, depth + 1u); else { c.pc = 0x003B76D8u; return; } if (c.pc != 0x00158B20u) [[unlikely]] return; }
L_00158B20:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158B2Cu); set32(c.r[4], c.r[4].w[0] + 20304u);  if (depth < kMaxDepth) unit_00BA(c, 142u, depth + 1u); else { c.pc = 0x003E92D0u; return; } if (c.pc != 0x00158B2Cu) [[unlikely]] return; }
L_00158B2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158B34u);  if (depth < kMaxDepth) unit_00AD(c, 233u, depth + 1u); else { c.pc = 0x003B62A0u; return; } if (c.pc != 0x00158B34u) [[unlikely]] return; }
L_00158B34:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00160000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158B44u); set32(c.r[4], c.r[4].w[0] - 30528u);  if (depth < kMaxDepth) unit_00AD(c, 426u, depth + 1u); else { c.pc = 0x003B76D8u; return; } if (c.pc != 0x00158B44u) [[unlikely]] return; }
L_00158B44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00158B60:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 188u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00158B90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158B90u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00158B90u) [[unlikely]] return; }
L_00158B90:
    st32((c.r[16].w[0] + 188u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 196u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00158BA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158BA8u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00158BA8u) [[unlikely]] return; }
L_00158BA8:
    st32((c.r[16].w[0] + 196u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 200u)));
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158BC0u); st32((c.r[29].w[0] + 76u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00158BC0u) [[unlikely]] return; }
L_00158BC0:
    set32(c.r[3], c.r[18].w[0] >> 4);
    set32(c.r[2], c.r[17].w[0] >> 4);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 200u)));
    set32(c.r[4], c.r[4].w[0] - 11920u);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[2], 0u - 64u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + 10u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 63u);
    c.r[17].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158C00u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 124u, depth + 1u); else { c.pc = 0x001260E0u; return; } if (c.pc != 0x00158C00u) [[unlikely]] return; }
L_00158C00:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158C0Cu); set32(c.r[5], 0u + 128u);  if (depth < kMaxDepth) unit_0010(c, 79u, depth + 1u); else { c.pc = 0x00141110u; return; } if (c.pc != 0x00158C0Cu) [[unlikely]] return; }
L_00158C0C:
    st32((c.r[16].w[0] + 188u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 184u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00158C2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158C28u); set32(c.r[5], 0u + 128u);  if (depth < kMaxDepth) unit_0010(c, 79u, depth + 1u); else { c.pc = 0x00141110u; return; } if (c.pc != 0x00158C28u) [[unlikely]] return; }
L_00158C28:
    st32((c.r[16].w[0] + 196u), c.r[2].w[0]);
    c.budget -= 1;
L_00158C2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158C34u); set32(c.r[4], ld32((c.r[29].w[0] + 76u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00158C34u) [[unlikely]] return; }
L_00158C34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00158C50:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[1].w[0] + 20336u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00158C84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158C84u);  if (depth < kMaxDepth) unit_0016(c, 114u, depth + 1u); else { c.pc = 0x00159110u; return; } if (c.pc != 0x00158C84u) [[unlikely]] return; }
L_00158C84:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 20352u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158C98u); set32(c.r[6], 0u + 72u);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x00158C98u) [[unlikely]] return; }
L_00158C98:
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[19].w[0] + 24736u);  if (t) { goto L_00158E30; } }
L_00158CA8:
    set32(c.r[17], 0u + 2u);
    set32(c.r[6], c.r[20].w[0] + c.r[2].w[0]);
    c.r[7].d[0] = 0ull | 48000ull;
    set32(c.r[5], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[5].d[0] & 2ull;
    c.r[4].d[0] = c.r[5].d[0] & 1ull;
    if (c.r[3].d[0] == 0) c.r[17].d[0] = c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[5].d[0] & 4ull;
    c.r[4].d[0] = c.r[5].d[0] & 32ull;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;  if (t) { goto L_00158CE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u + 12000u);  if (t) { goto L_00158CF4; } }
L_00158CE4:
    c.r[3].d[0] = c.r[5].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1000u);  if (t) { goto L_00158CF8; } }
    set32(c.r[7], 0u + 24000u);
    c.budget -= 1;
L_00158CF4:
    set32(c.r[3], 0u + 1000u);
    c.budget -= 1;
L_00158CF8:
    set32(c.r[6], ld32((c.r[6].w[0] + 40u)));
    mmi::div(c, 0, c.r[7].w[0], c.r[3].w[0]);
    set32(c.r[5], 0u + 128u);
    set32(c.r[4], 0u - 1u);
    st32((c.r[19].w[0] + 20u), c.r[6].w[0]);
    st8((c.r[19].w[0] + 24u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[19].w[0] + 28u), c.r[4].w[0]);  if (t) { goto L_00158D1C; } }
    breakpoint(c, 0x00158D18u);
    c.budget -= 1;
L_00158D1C:
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[4], 0u + 25000u);
    set32(c.r[3], 0u + 44u);
    mmi::mult(c, 0, c.r[17].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);  if (t) { goto L_00158D3C; } }
    breakpoint(c, 0x00158D38u);
    c.budget -= 1;
L_00158D3C:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + 1u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + 2048u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 11));  if (t) { goto L_00158D60; } }
    set32(c.r[3], c.r[4].w[0] + 2047u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 11));
    c.budget -= 2;
L_00158D60:
    set32(c.r[4], c.r[3].w[0] << 11);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 36u);
    set32(c.r[3], c.r[17].w[0] << 7);
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[3].w[0] << 1);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + 64u);
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158DA0u); set32(c.r[4], c.r[4].w[0] - 11856u);  if (depth < kMaxDepth) unit_0009(c, 124u, depth + 1u); else { c.pc = 0x001260E0u; return; } if (c.pc != 0x00158DA0u) [[unlikely]] return; }
L_00158DA0:
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158DACu); set32(c.r[5], 0u + 64u);  if (depth < kMaxDepth) unit_0010(c, 79u, depth + 1u); else { c.pc = 0x00141110u; return; } if (c.pc != 0x00158DACu) [[unlikely]] return; }
L_00158DAC:
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_00158DD8; } }
    set32(c.r[4], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158DC8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 87u, depth + 1u); else { c.pc = 0x00141260u; return; } if (c.pc != 0x00158DC8u) [[unlikely]] return; }
L_00158DC8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158DD8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0010(c, 87u, depth + 1u); else { c.pc = 0x00141260u; return; } if (c.pc != 0x00158DD8u) [[unlikely]] return; }
L_00158DD8:
    set32(c.r[6], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158DE8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 192u, depth + 1u); else { c.pc = 0x003BD778u; return; } if (c.pc != 0x00158DE8u) [[unlikely]] return; }
L_00158DE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[19].w[0]), c.r[2].w[0]);  if (t) { goto L_00158E04; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158DFCu); set32(c.r[4], c.r[4].w[0] - 11808u);  if (depth < kMaxDepth) unit_0009(c, 124u, depth + 1u); else { c.pc = 0x001260E0u; return; } if (c.pc != 0x00158DFCu) [[unlikely]] return; }
L_00158DFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00158E4C; } }
L_00158E04:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[4], 0u + 12288u);  if (t) { goto L_00158E28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158E14u); set32(c.r[5], 0u + 64u);  if (depth < kMaxDepth) unit_0010(c, 79u, depth + 1u); else { c.pc = 0x00141110u; return; } if (c.pc != 0x00158E14u) [[unlikely]] return; }
L_00158E14:
    st32((c.r[19].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0])));
    set32(c.r[5], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158E28u); set32(c.r[6], 0u + 12288u);  if (depth < kMaxDepth) unit_00B0(c, 358u, depth + 1u); else { c.pc = 0x003C3428u; return; } if (c.pc != 0x00158E28u) [[unlikely]] return; }
L_00158E28:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[19], c.r[19].w[0] + 48u);
    c.budget -= 2;
L_00158E30:
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[18].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00158CA8u | kUnwind; return; } goto L_00158CA8; } }
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 20336u), c.r[2].w[0]);
    c.budget -= 3;
L_00158E4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00158E70:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[1].w[0] + 20344u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00158EA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158EA0u);  if (depth < kMaxDepth) unit_0016(c, 104u, depth + 1u); else { c.pc = 0x00159000u; return; } if (c.pc != 0x00158EA0u) [[unlikely]] return; }
L_00158EA0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 20432u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158EB4u); set32(c.r[6], 0u + 360u);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x00158EB4u) [[unlikely]] return; }
L_00158EB4:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 20800u);  if (t) { goto L_00158FC8; } }
L_00158EC4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[6], 0u + 48u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158EECu); set32(c.r[16], c.r[2].w[0] + 8u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x00158EECu) [[unlikely]] return; }
L_00158EEC:
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 3u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 32u), c.r[5].w[0]);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[18].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[18].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    st32((c.r[18].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158F34u); st32((c.r[18].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B9(c, 226u, depth + 1u); else { c.pc = 0x003E6B78u; return; } if (c.pc != 0x00158F34u) [[unlikely]] return; }
L_00158F34:
    st32((c.r[18].w[0] + 28u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[6], ld32((c.r[18].w[0] + 28u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[7], ld32((c.r[1].w[0] + 3840u)));
    set32(c.r[4], c.r[4].w[0] - 11776u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158F54u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 124u, depth + 1u); else { c.pc = 0x001260E0u; return; } if (c.pc != 0x00158F54u) [[unlikely]] return; }
L_00158F54:
    set32(c.r[4], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158F60u); set32(c.r[5], 0u + 64u);  if (depth < kMaxDepth) unit_0010(c, 79u, depth + 1u); else { c.pc = 0x00141110u; return; } if (c.pc != 0x00158F60u) [[unlikely]] return; }
L_00158F60:
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158F6Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 306u, depth + 1u); else { c.pc = 0x003E78B0u; return; } if (c.pc != 0x00158F6Cu) [[unlikely]] return; }
L_00158F6C:
    st32((c.r[18].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[5], 0u + 64u);
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158F88u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0010(c, 79u, depth + 1u); else { c.pc = 0x00141110u; return; } if (c.pc != 0x00158F88u) [[unlikely]] return; }
L_00158F88:
    st32((c.r[18].w[0] + 204u), c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    st32((c.r[18].w[0] + 208u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    st32((c.r[18].w[0] + 212u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    st32((c.r[18].w[0] + 132u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    st32((c.r[18].w[0] + 184u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 188u), 0u);
    st32((c.r[18].w[0] + 192u), 0u);
    st32((c.r[18].w[0] + 196u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    st32((c.r[18].w[0] + 200u), c.r[2].w[0]);
    set32(c.r[18], c.r[18].w[0] + 492u);
    c.budget -= 16;
L_00158FC8:
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00158EC4u | kUnwind; return; } goto L_00158EC4; } }
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 20344u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00159000:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 20800u);  if (t) { goto L_001590E4; } }
L_00159020:
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001590DC; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015903Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015903Cu) [[unlikely]] return; }
L_0015903C:
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00159050u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00159050u) [[unlikely]] return; }
L_00159050:
    st32((c.r[16].w[0] + 48u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 188u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00159068; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159068u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00159068u) [[unlikely]] return; }
L_00159068:
    st32((c.r[16].w[0] + 188u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 192u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00159080; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159080u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00159080u) [[unlikely]] return; }
L_00159080:
    st32((c.r[16].w[0] + 192u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 196u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00159098; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159098u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00159098u) [[unlikely]] return; }
L_00159098:
    st32((c.r[16].w[0] + 196u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 204u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001590B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001590B0u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001590B0u) [[unlikely]] return; }
L_001590B0:
    st32((c.r[16].w[0] + 204u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001590C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001590C8u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001590C8u) [[unlikely]] return; }
L_001590C8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 492u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001590DCu); st32((c.r[16].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x001590DCu) [[unlikely]] return; }
L_001590DC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 492u);
    c.budget -= 2;
L_001590E4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 20432u)));
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00159020u | kUnwind; return; } goto L_00159020; } }
    st32((c.r[1].w[0] + 20344u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00159110:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 20336u), 0u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 24736u);  if (t) { goto L_001591AC; } }
L_00159138:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00159170; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00159158; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159158u);  if (depth < kMaxDepth) unit_00B0(c, 365u, depth + 1u); else { c.pc = 0x003C3570u; return; } if (c.pc != 0x00159158u) [[unlikely]] return; }
L_00159158:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0015916C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015916Cu);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0015916Cu) [[unlikely]] return; }
L_0015916C:
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 1;
L_00159170:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00159188; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159184u);  if (depth < kMaxDepth) unit_00AF(c, 211u, depth + 1u); else { c.pc = 0x003BDAB8u; return; } if (c.pc != 0x00159184u) [[unlikely]] return; }
L_00159184:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_00159188:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0015919C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015919Cu);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0015919Cu) [[unlikely]] return; }
L_0015919C:
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[16], c.r[16].w[0] + 48u);
    c.budget -= 4;
L_001591AC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 20352u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00159138u | kUnwind; return; } goto L_00159138; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001591CCu); set32(c.r[6], 0u + 48u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x001591CCu) [[unlikely]] return; }
L_001591CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001591E0:
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + 24736u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00159214; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159214u);  if (depth < kMaxDepth) unit_00AF(c, 259u, depth + 1u); else { c.pc = 0x003BDFE0u; return; } if (c.pc != 0x00159214u) [[unlikely]] return; }
L_00159214:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00159220:
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + 24736u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00159268; } }
    c.f[0] = c.r[5].w[0];
    st32((c.r[4].w[0] + 28u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 32u), c.f[12]);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    st32((c.r[4].w[0] + 36u), 0u);
    c.f[0] = c.f[12];
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 40u), c.f[12]);
    st32((c.r[4].w[0] + 44u), c.f[0]);
    c.budget -= 9;
L_00159268:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00159270:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00159290; } }
L_00159284:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015928Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x00159310u; return; } if (c.pc != 0x0015928Cu) [[unlikely]] return; }
L_0015928C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00159290:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 20352u)));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00159284u | kUnwind; return; } goto L_00159284; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001592C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001592E0; } }
L_001592D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001592DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0016(c, 132u, depth + 1u); else { c.pc = 0x00159350u; return; } if (c.pc != 0x001592DCu) [[unlikely]] return; }
L_001592DC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001592E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 20352u)));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001592D4u | kUnwind; return; } goto L_001592D4; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00159310:
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + 24736u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_00159344; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159344u);  if (depth < kMaxDepth) unit_00AF(c, 365u, depth + 1u); else { c.pc = 0x003BEFF8u; return; } if (c.pc != 0x00159344u) [[unlikely]] return; }
L_00159344:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00159350:
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + 24736u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00159384; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159384u);  if (depth < kMaxDepth) unit_00AF(c, 365u, depth + 1u); else { c.pc = 0x003BEFF8u; return; } if (c.pc != 0x00159384u) [[unlikely]] return; }
L_00159384:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00159390:
    set32(c.r[3], c.r[4].w[0] << 5);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], c.r[3].w[0] - c.r[4].w[0]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + 20800u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 13;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001593D4; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001593D4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001593D4u) [[unlikely]] return; }
L_001593D4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001593E0:
    set32(c.r[3], c.r[4].w[0] << 5);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], c.r[3].w[0] - c.r[4].w[0]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + 20800u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 13;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00159424; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00159424u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00159424u) [[unlikely]] return; }
L_00159424:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00159430:
    set32(c.r[3], c.r[4].w[0] << 5);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], c.r[3].w[0] - c.r[4].w[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] + 20800u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 14;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0015947C; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00159478u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00159478u) [[unlikely]] return; }
L_00159478:
    st8((c.r[16].w[0] + 488u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0015947C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00159490:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], c.r[4].w[0] << 1);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] + 24736u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001594D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00159564; } }
L_001594D4:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull; st32((c.r[16].w[0] + 28u), c.r[2].w[0]);  if (t) { goto L_001594EC; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001594ECu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00AF(c, 359u, depth + 1u); else { c.pc = 0x003BEF38u; return; } if (c.pc != 0x001594ECu) [[unlikely]] return; }
L_001594EC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001594FCu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 433u, depth + 1u); else { c.pc = 0x003BF8F8u; return; } if (c.pc != 0x001594FCu) [[unlikely]] return; }
L_001594FC:
    set32(c.r[5], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], 0u - 999u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[3].d[0] = ld8((c.r[16].w[0] + 24u));  if (t) { goto L_00159514; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00159554; } }
L_00159514:
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[2], 0u + 128u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0015952C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0])));  if (t) { goto L_00159558; } }
L_0015952C:
    set32(c.r[3], c.r[5].w[0] + 100u);
    set32(c.r[2], 0u + 255u);
    set32(c.r[3], c.r[3].w[0] << 8);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_00159544; } }
    breakpoint(c, 0x00159540u);
    c.budget -= 1;
L_00159544:
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 8));
    set32(c.r[5], c.r[2].w[0] - 100u);
    c.budget -= 4;
L_00159554:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_00159558:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159560u);  if (depth < kMaxDepth) unit_00AF(c, 314u, depth + 1u); else { c.pc = 0x003BE960u; return; } if (c.pc != 0x00159560u) [[unlikely]] return; }
L_00159560:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00159564:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00159580:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], c.r[4].w[0] << 1);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] + 24736u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001595C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00159668; } }
L_001595C4:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull; st32((c.r[16].w[0] + 28u), c.r[2].w[0]);  if (t) { goto L_001595E4; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001595DCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00AF(c, 359u, depth + 1u); else { c.pc = 0x003BEF38u; return; } if (c.pc != 0x001595DCu) [[unlikely]] return; }
L_001595DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0])));  if (t) { goto L_001595F4; } }
L_001595E4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001595F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 359u, depth + 1u); else { c.pc = 0x003BEF38u; return; } if (c.pc != 0x001595F0u) [[unlikely]] return; }
L_001595F0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_001595F4:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159600u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 415u, depth + 1u); else { c.pc = 0x003BF668u; return; } if (c.pc != 0x00159600u) [[unlikely]] return; }
L_00159600:
    set32(c.r[5], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], 0u - 999u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[3].d[0] = ld8((c.r[16].w[0] + 24u));  if (t) { goto L_00159618; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00159658; } }
L_00159618:
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[2], 0u + 128u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00159630; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0])));  if (t) { goto L_0015965C; } }
L_00159630:
    set32(c.r[3], c.r[5].w[0] + 100u);
    set32(c.r[2], 0u + 255u);
    set32(c.r[3], c.r[3].w[0] << 8);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_00159648; } }
    breakpoint(c, 0x00159644u);
    c.budget -= 1;
L_00159648:
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 8));
    set32(c.r[5], c.r[2].w[0] - 100u);
    c.budget -= 4;
L_00159658:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_0015965C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159664u);  if (depth < kMaxDepth) unit_00AF(c, 314u, depth + 1u); else { c.pc = 0x003BE960u; return; } if (c.pc != 0x00159664u) [[unlikely]] return; }
L_00159664:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00159668:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00159680:
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 24736u);
    set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001596B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00159724; } }
L_001596B4:
    st32((c.r[6].w[0] + 20u), c.r[5].w[0]);
    set32(c.r[2], 0u - 999u);
    set32(c.r[5], ld32((c.r[6].w[0] + 20u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[3].d[0] = ld8((c.r[6].w[0] + 24u));  if (t) { goto L_001596D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00159710; } }
L_001596D0:
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[2], 0u + 128u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001596E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[6].w[0])));  if (t) { goto L_00159714; } }
L_001596E8:
    set32(c.r[3], c.r[5].w[0] + 100u);
    set32(c.r[2], 0u + 255u);
    set32(c.r[3], c.r[3].w[0] << 8);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_00159700; } }
    breakpoint(c, 0x001596FCu);
    c.budget -= 1;
L_00159700:
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 8));
    set32(c.r[5], c.r[2].w[0] - 100u);
    c.budget -= 4;
L_00159710:
    set32(c.r[4], ld32((c.r[6].w[0])));
    c.budget -= 1;
L_00159714:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015971Cu);  if (depth < kMaxDepth) unit_00AF(c, 314u, depth + 1u); else { c.pc = 0x003BE960u; return; } if (c.pc != 0x0015971Cu) [[unlikely]] return; }
L_0015971C:
    set32(c.r[2], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_00159724:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00159730:
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 24736u);
    set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00159764; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_001597D4; } }
L_00159764:
    st8((c.r[6].w[0] + 24u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], 0u - 999u);
    set32(c.r[5], ld32((c.r[6].w[0] + 20u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[3].d[0] = ld8((c.r[6].w[0] + 24u));  if (t) { goto L_00159780; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001597C0; } }
L_00159780:
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[2], 0u + 128u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00159798; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[6].w[0])));  if (t) { goto L_001597C4; } }
L_00159798:
    set32(c.r[3], c.r[5].w[0] + 100u);
    set32(c.r[2], 0u + 255u);
    set32(c.r[3], c.r[3].w[0] << 8);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_001597B0; } }
    breakpoint(c, 0x001597ACu);
    c.budget -= 1;
L_001597B0:
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 8));
    set32(c.r[5], c.r[2].w[0] - 100u);
    c.budget -= 4;
L_001597C0:
    set32(c.r[4], ld32((c.r[6].w[0])));
    c.budget -= 1;
L_001597C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001597CCu);  if (depth < kMaxDepth) unit_00AF(c, 314u, depth + 1u); else { c.pc = 0x003BE960u; return; } if (c.pc != 0x001597CCu) [[unlikely]] return; }
L_001597CC:
    set32(c.r[2], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_001597D4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001597E0:
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 24736u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00159818; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001598A0; } }
L_00159818:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; st32((c.r[16].w[0] + 28u), c.r[2].w[0]);  if (t) { goto L_00159830; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159828u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00AD(c, 313u, depth + 1u); else { c.pc = 0x003B6918u; return; } if (c.pc != 0x00159828u) [[unlikely]] return; }
L_00159828:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_0015983C; } }
L_00159830:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159838u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00AF(c, 422u, depth + 1u); else { c.pc = 0x003BF760u; return; } if (c.pc != 0x00159838u) [[unlikely]] return; }
L_00159838:
    set32(c.r[5], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 1;
L_0015983C:
    set32(c.r[2], 0u - 999u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[3].d[0] = ld8((c.r[16].w[0] + 24u));  if (t) { goto L_00159850; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00159890; } }
L_00159850:
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[2], 0u + 128u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00159868; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0])));  if (t) { goto L_00159894; } }
L_00159868:
    set32(c.r[3], c.r[5].w[0] + 100u);
    set32(c.r[2], 0u + 255u);
    set32(c.r[3], c.r[3].w[0] << 8);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_00159880; } }
    breakpoint(c, 0x0015987Cu);
    c.budget -= 1;
L_00159880:
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 8));
    set32(c.r[5], c.r[2].w[0] - 100u);
    c.budget -= 4;
L_00159890:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_00159894:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015989Cu);  if (depth < kMaxDepth) unit_00AF(c, 314u, depth + 1u); else { c.pc = 0x003BE960u; return; } if (c.pc != 0x0015989Cu) [[unlikely]] return; }
L_0015989C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001598A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001598B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], c.r[4].w[0] << 5);
    set32(c.r[3], c.r[2].w[0] - c.r[4].w[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[3], c.r[3].w[0] << 2);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 20800u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001598F0u); set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0016(c, 138u, depth + 1u); else { c.pc = 0x00159430u; return; } if (c.pc != 0x001598F0u) [[unlikely]] return; }
L_001598F0:
    set32(c.r[2], ld32((c.r[18].w[0] + 208u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015990C; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015990Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0016(c, 74u, depth + 1u); else { c.pc = 0x00158B60u; return; } if (c.pc != 0x0015990Cu) [[unlikely]] return; }
L_0015990C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00159928; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 48u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159920u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 157u, depth + 1u); else { c.pc = 0x003ED2E8u; return; } if (c.pc != 0x00159920u) [[unlikely]] return; }
L_00159920:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 216u);  if (t) { goto L_00159940; } }
L_00159928:
    set32(c.r[4], ld32((c.r[18].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015993Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015993Cu) [[unlikely]] return; }
L_0015993C:
    set32(c.r[18], c.r[18].w[0] + 216u);
    c.budget -= 1;
L_00159940:
    set32(c.r[5], 0u + 276u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015994Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x0015994Cu) [[unlikely]] return; }
L_0015994C:
    st32((c.r[18].w[0] + 4u), 0u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159960u); st32((c.r[18].w[0]), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x00159960u) [[unlikely]] return; }
L_00159960:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00159980:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], c.r[4].w[0] << 5);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[3], c.r[3].w[0] << 2);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 20800u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001599C8u); set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0016(c, 138u, depth + 1u); else { c.pc = 0x00159430u; return; } if (c.pc != 0x001599C8u) [[unlikely]] return; }
L_001599C8:
    set32(c.r[2], ld32((c.r[19].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001599DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00159A30; } }
L_001599DC:
    set32(c.r[2], ld32((c.r[19].w[0] + 208u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001599F8; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001599F8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0016(c, 74u, depth + 1u); else { c.pc = 0x00158B60u; return; } if (c.pc != 0x001599F8u) [[unlikely]] return; }
L_001599F8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00159A18; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 48u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159A10u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 175u, depth + 1u); else { c.pc = 0x003ED4F8u; return; } if (c.pc != 0x00159A10u) [[unlikely]] return; }
L_00159A10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00159A2C; } }
L_00159A18:
    set32(c.r[4], ld32((c.r[19].w[0] + 48u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159A28u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 288u, depth + 1u); else { c.pc = 0x003EA140u; return; } if (c.pc != 0x00159A28u) [[unlikely]] return; }
L_00159A28:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00159A2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00159A30:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00159A50:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], c.r[4].w[0] << 5);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[3], c.r[3].w[0] << 2);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 20800u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159A98u); set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0016(c, 138u, depth + 1u); else { c.pc = 0x00159430u; return; } if (c.pc != 0x00159A98u) [[unlikely]] return; }
L_00159A98:
    set32(c.r[2], ld32((c.r[19].w[0] + 208u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00159AB4; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159AB4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0016(c, 74u, depth + 1u); else { c.pc = 0x00158B60u; return; } if (c.pc != 0x00159AB4u) [[unlikely]] return; }
L_00159AB4:
    set32(c.r[4], ld32((c.r[19].w[0] + 48u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00159ACCu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00159ACCu) [[unlikely]] return; }
L_00159ACC:
    set32(c.r[2], 0u + 1u);
    st32((c.r[19].w[0] + 220u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 216u), c.r[16].w[0]);
    st32((c.r[19].w[0] + 480u), c.r[18].w[0]);
    st32((c.r[19].w[0] + 484u), c.r[17].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00159B00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 44u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00159B28u); set32(c.r[6], c.r[29].w[0] + 40u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00159B28u) [[unlikely]] return; }
L_00159B28:
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00159B3Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00159B3Cu) [[unlikely]] return; }
L_00159B3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159B44u); set32(c.r[4], c.r[16].w[0] + 136u);  if (depth < kMaxDepth) unit_002C(c, 199u, depth + 1u); else { c.pc = 0x001B1A20u; return; } if (c.pc != 0x00159B44u) [[unlikely]] return; }
L_00159B44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159B4Cu); set32(c.r[4], ld32((c.r[16].w[0] + 48u)));  if (depth < kMaxDepth) unit_00BA(c, 120u, depth + 1u); else { c.pc = 0x003E90A8u; return; } if (c.pc != 0x00159B4Cu) [[unlikely]] return; }
L_00159B4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159B54u); set32(c.r[4], ld32((c.r[16].w[0] + 48u)));  if (depth < kMaxDepth) unit_00BA(c, 115u, depth + 1u); else { c.pc = 0x003E9020u; return; } if (c.pc != 0x00159B54u) [[unlikely]] return; }
L_00159B54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00159B70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00159B80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 24736u);  if (t) { goto L_00159CA8; } }
L_00159BA0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00159C9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159BB4u);  if (depth < kMaxDepth) unit_00AF(c, 265u, depth + 1u); else { c.pc = 0x003BE0A0u; return; } if (c.pc != 0x00159BB4u) [[unlikely]] return; }
L_00159BB4:
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00159BEC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00159BDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159BDCu); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00AF(c, 259u, depth + 1u); else { c.pc = 0x003BDFE0u; return; } if (c.pc != 0x00159BDCu) [[unlikely]] return; }
L_00159BDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159BE4u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00AF(c, 265u, depth + 1u); else { c.pc = 0x003BE0A0u; return; } if (c.pc != 0x00159BE4u) [[unlikely]] return; }
L_00159BE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_00159CA0; } }
L_00159BEC:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00159CA0; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], 0u - 999u);
    st32((c.r[16].w[0] + 28u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 44u));
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[2] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 40u), c.f[2]);
    set32(c.r[5], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 10;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_00159C24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00159C88; } }
L_00159C24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[2]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], c.r[5].w[0] + 100u);  if (t) { goto L_00159C44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0])));  if (t) { goto L_00159C8C; } }
L_00159C44:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 12;
    { const bool t = c.r[5].sd[0] <= 0; c.r[1].d[0] = c.r[5].sd[0] < -100ll ? 1ull : 0ull;  if (t) { goto L_00159C7C; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.r[1].d[0] = c.r[5].sd[0] < -100ll ? 1ull : 0ull;
    c.budget -= 2;
L_00159C7C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00159C88; } }
    set32(c.r[5], 0u - 999u);
    c.budget -= 1;
L_00159C88:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_00159C8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159C94u);  if (depth < kMaxDepth) unit_00AF(c, 314u, depth + 1u); else { c.pc = 0x003BE960u; return; } if (c.pc != 0x00159C94u) [[unlikely]] return; }
L_00159C94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_00159CA4; } }
L_00159C9C:
    st32((c.r[16].w[0] + 16u), 0u);
    c.budget -= 1;
L_00159CA0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00159CA4:
    set32(c.r[16], c.r[16].w[0] + 48u);
    c.budget -= 1;
L_00159CA8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 20352u)));
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00159BA0u | kUnwind; return; } goto L_00159BA0; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 20800u);  if (t) { goto L_00159D38; } }
L_00159CCC:
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00159D30; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00159CE8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00159CE8u) [[unlikely]] return; }
L_00159CE8:
    st32((c.r[16].w[0] + 180u), c.r[2].w[0]);
    set32(c.r[3], 0u + 3u);
    set32(c.r[4], ld32((c.r[16].w[0] + 180u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00159D30; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 216u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], c.r[16].w[0] + 216u);  if (t) { goto L_00159D30; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00159D30; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 268u)));
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00159D30u); set32(c.r[5], ld32((c.r[5].w[0] + 264u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00159D30u) [[unlikely]] return; }
L_00159D30:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 492u);
    c.budget -= 2;
L_00159D38:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 20432u)));
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00159CCCu | kUnwind; return; } goto L_00159CCC; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00159D60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[5].w[0])));  c.pc = t; return; }
L_00159D70:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[3].d[0] = c.r[7].d[0] << 36;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    set32(c.r[2], c.r[2].w[0] - 3264u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[3].d[0] = c.r[3].d[0] >> 36;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[20], c.r[6].w[0] << 6);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[7], c.r[29].w[0] + 128u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    set32(c.r[19], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 4));
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    st128((c.r[7].w[0]) & ~15u, c.r[6]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159DD8u); c.r[5].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_0000(c, 319u, depth + 1u); else { c.pc = 0x001034E0u; return; } if (c.pc != 0x00159DD8u) [[unlikely]] return; }
L_00159DD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159DE0u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0000(c, 320u, depth + 1u); else { c.pc = 0x001034F0u; return; } if (c.pc != 0x00159DE0u) [[unlikely]] return; }
L_00159DE0:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159DF4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 325u, depth + 1u); else { c.pc = 0x001035E8u; return; } if (c.pc != 0x00159DF4u) [[unlikely]] return; }
L_00159DF4:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[5]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159E00u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0000(c, 334u, depth + 1u); else { c.pc = 0x00103788u; return; } if (c.pc != 0x00159E00u) [[unlikely]] return; }
L_00159E00:
    set32(c.r[3], c.r[18].w[0] + 63u);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 6));  if (t) { goto L_00159E14; } }
    set32(c.r[2], c.r[3].w[0] + 63u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 6));
    c.budget -= 2;
L_00159E14:
    set32(c.r[3], c.r[2].w[0] << 6);
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[3], c.r[3].w[0] >> 6);
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] << 48;
    set32(c.r[5], 0u + 80u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159E44u); c.r[6].d[0] = c.r[2].d[0] | c.r[3].d[0];  if (depth < kMaxDepth) unit_0000(c, 339u, depth + 1u); else { c.pc = 0x00103848u; return; } if (c.pc != 0x00159E44u) [[unlikely]] return; }
L_00159E44:
    c.r[2].d[0] = c.r[17].d[0] << 32;
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    set32(c.r[5], 0u + 82u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159E60u); c.r[6].d[0] = c.r[2].d[0] | 16ull;  if (depth < kMaxDepth) unit_0000(c, 339u, depth + 1u); else { c.pc = 0x00103848u; return; } if (c.pc != 0x00159E60u) [[unlikely]] return; }
L_00159E60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159E68u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0000(c, 335u, depth + 1u); else { c.pc = 0x001037A0u; return; } if (c.pc != 0x00159E68u) [[unlikely]] return; }
L_00159E68:
    set32(c.r[16], c.r[20].w[0] >> 4);
    c.r[18].d[0] = 0ull + 0ull;
    c.r[22].d[0] = c.r[16].d[0] << 32;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = c.r[22].d[0] >> 32;  if (t) { goto L_00159F60; } }
L_00159E7C:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[17].d[0] = c.r[18].d[0] ^ c.r[2].d[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159E98u); c.r[17].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0000(c, 325u, depth + 1u); else { c.pc = 0x001035E8u; return; } if (c.pc != 0x00159E98u) [[unlikely]] return; }
L_00159E98:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[5]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159EA4u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0000(c, 334u, depth + 1u); else { c.pc = 0x00103788u; return; } if (c.pc != 0x00159EA4u) [[unlikely]] return; }
L_00159EA4:
    set32(c.r[2], c.r[18].w[0] << 4);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    set32(c.r[5], 0u + 81u);
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159EC0u); c.r[6].d[0] = c.r[2].d[0] << 32;  if (depth < kMaxDepth) unit_0000(c, 339u, depth + 1u); else { c.pc = 0x00103848u; return; } if (c.pc != 0x00159EC0u) [[unlikely]] return; }
L_00159EC0:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], 0u + 83u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159ED0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 339u, depth + 1u); else { c.pc = 0x00103848u; return; } if (c.pc != 0x00159ED0u) [[unlikely]] return; }
L_00159ED0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159ED8u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0000(c, 335u, depth + 1u); else { c.pc = 0x001037A0u; return; } if (c.pc != 0x00159ED8u) [[unlikely]] return; }
L_00159ED8:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159EE4u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0000(c, 333u, depth + 1u); else { c.pc = 0x00103770u; return; } if (c.pc != 0x00159EE4u) [[unlikely]] return; }
L_00159EE4:
    c.r[4].d[0] = c.r[17].d[0] << 32;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[4].d[0] = c.r[4].d[0] >> 32;
    c.r[5].d[0] = c.r[4].d[0] << 15;
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.r[5].d[0] = c.r[22].d[0] | c.r[5].d[0];
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    set32(c.r[3], 0u + 1u);
    st64((c.r[2].w[0]), c.r[4].d[0]);
    c.budget -= 11;
    { const bool t = c.r[17].d[0] != c.r[3].d[0]; st64((c.r[2].w[0] + 8u), 0ull);  if (t) { goto L_00159F38; } }
    c.r[5].d[0] = c.r[21].d[0] << 36;
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[5].d[0] = c.r[5].d[0] >> 36;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159F30u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 323u, depth + 1u); else { c.pc = 0x00103558u; return; } if (c.pc != 0x00159F30u) [[unlikely]] return; }
L_00159F30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[21].w[0] + c.r[20].w[0]);  if (t) { goto L_00159F5C; } }
L_00159F38:
    c.r[5].d[0] = c.r[21].d[0] << 36;
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[5].d[0] = c.r[5].d[0] >> 36;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159F58u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 329u, depth + 1u); else { c.pc = 0x00103660u; return; } if (c.pc != 0x00159F58u) [[unlikely]] return; }
L_00159F58:
    set32(c.r[21], c.r[21].w[0] + c.r[20].w[0]);
    c.budget -= 1;
L_00159F5C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00159F60:
    c.r[2].d[0] = c.r[18].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[19].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00159E7Cu | kUnwind; return; } goto L_00159E7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159F74u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0000(c, 321u, depth + 1u); else { c.pc = 0x00103500u; return; } if (c.pc != 0x00159F74u) [[unlikely]] return; }
L_00159F74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00159FA0:
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 24736u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  c.pc = t; return; }
L_00159FC0:
    set32(c.r[2], c.r[4].w[0] << 5);
    set32(c.r[3], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + 20800u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0] + 180u)));  c.pc = t; return; }
L_00159FF0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    set32(c.r[3], c.r[4].w[0] << 5);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[5], c.r[3].w[0] - c.r[4].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], c.r[5].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], c.r[5].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + 20800u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[17], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 17;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0015A2B4; } }
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A040u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0016(c, 175u, depth + 1u); else { c.pc = 0x00159B00u; return; } if (c.pc != 0x0015A040u) [[unlikely]] return; }
L_0015A040:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A048u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0011(c, 138u, depth + 1u); else { c.pc = 0x00146850u; return; } if (c.pc != 0x0015A048u) [[unlikely]] return; }
L_0015A048:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 25136u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A05Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_00BA(c, 38u, depth + 1u); else { c.pc = 0x003E84A8u; return; } if (c.pc != 0x0015A05Cu) [[unlikely]] return; }
L_0015A05C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A064u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0011(c, 138u, depth + 1u); else { c.pc = 0x00146850u; return; } if (c.pc != 0x0015A064u) [[unlikely]] return; }
L_0015A064:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], 0u + 30u);
    st32((c.r[1].w[0] + 25140u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[7], ld32((c.r[1].w[0] + 25140u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[6], ld32((c.r[1].w[0] + 25136u)));
    c.budget -= 7;
L_0015A080:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[6], c.r[7].w[0] - c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[1].w[0] + 25144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 20232u)));
    mmi::divu(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[1].w[0] + 25144u), c.r[5].w[0]);  if (t) { goto L_0015A0D8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 25144u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; mmi::divu(c, 0, c.r[3].w[0], c.r[4].w[0]);  if (t) { goto L_0015A0C4; } }
    breakpoint(c, 0x0015A0C0u);
    c.budget -= 1;
L_0015A0C4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 25144u), 0u);
    c.r[3].d[0] = c.lo.d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 25148u), c.r[3].w[0]);
    c.budget -= 5;
L_0015A0D8:
    set32(c.r[3], ld32((c.r[29].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0015A110; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 184u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0015A2B4; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 488u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0015A2B4; } }
L_0015A100:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A108u); set32(c.r[4], ld32((c.r[17].w[0] + 196u)));  if (depth < kMaxDepth) unit_0099(c, 245u, depth + 1u); else { c.pc = 0x003666C0u; return; } if (c.pc != 0x0015A108u) [[unlikely]] return; }
L_0015A108:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0015A2B8; } }
L_0015A110:
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 204u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A120u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0016(c, 191u, depth + 1u); else { c.pc = 0x00159D60u; return; } if (c.pc != 0x0015A120u) [[unlikely]] return; }
L_0015A120:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0015A148; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 72u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 204u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A148u); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0015A148u) [[unlikely]] return; }
L_0015A148:
    set32(c.r[2], ld32((c.r[17].w[0] + 208u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015A170; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 212u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A168u); set32(c.r[5], ld32((c.r[17].w[0] + 204u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015A168u) [[unlikely]] return; }
L_0015A168:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 64u)));  if (t) { goto L_0015A218; } }
L_0015A170:
    set32(c.r[2], ld32((c.r[17].w[0] + 184u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0015A1B4; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 188u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 196u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[10], ld32((c.r[17].w[0] + 132u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A1A0u); c.r[9].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0099(c, 239u, depth + 1u); else { c.pc = 0x003665F0u; return; } if (c.pc != 0x0015A1A0u) [[unlikely]] return; }
L_0015A1A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A1A8u); set32(c.r[4], ld32((c.r[17].w[0] + 196u)));  if (depth < kMaxDepth) unit_0099(c, 245u, depth + 1u); else { c.pc = 0x003666C0u; return; } if (c.pc != 0x0015A1A8u) [[unlikely]] return; }
L_0015A1A8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 488u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0015A214; } }
L_0015A1B4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0015A214; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015A214; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 188u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015A214; } }
    st8((c.r[17].w[0] + 488u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[7], ld32((c.r[17].w[0] + 188u)));
    set32(c.r[8], ld32((c.r[17].w[0] + 132u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A1F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0016(c, 192u, depth + 1u); else { c.pc = 0x00159D70u; return; } if (c.pc != 0x0015A1F0u) [[unlikely]] return; }
L_0015A1F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A1F8u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 280u, depth + 1u); else { c.pc = 0x00102DF0u; return; } if (c.pc != 0x0015A1F8u) [[unlikely]] return; }
L_0015A1F8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A208u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 156u, depth + 1u); else { c.pc = 0x00101770u; return; } if (c.pc != 0x0015A208u) [[unlikely]] return; }
L_0015A208:
    set32(c.r[5], ld32((c.r[17].w[0] + 188u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A214u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x00103120u; return; } if (c.pc != 0x0015A214u) [[unlikely]] return; }
L_0015A214:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.budget -= 1;
L_0015A218:
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 68u)));
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 72u)));
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 76u)));
    st32((c.r[17].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    st32((c.r[17].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 84u)));
    st32((c.r[17].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 88u)));
    st32((c.r[17].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 92u)));
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 100u)));
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 104u)));
    st32((c.r[17].w[0] + 92u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    st32((c.r[17].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    st32((c.r[17].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 116u)));
    st32((c.r[17].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 120u)));
    st32((c.r[17].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    st32((c.r[17].w[0] + 112u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    st32((c.r[17].w[0] + 116u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 132u)));
    st32((c.r[17].w[0] + 120u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 136u)));
    st32((c.r[17].w[0] + 124u), c.r[2].w[0]);
    c.budget -= 39;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A2B4u); set32(c.r[4], ld32((c.r[17].w[0] + 48u)));  if (depth < kMaxDepth) unit_00BA(c, 111u, depth + 1u); else { c.pc = 0x003E8F78u; return; } if (c.pc != 0x0015A2B4u) [[unlikely]] return; }
L_0015A2B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0015A2B8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0015A2D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015A2E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], c.r[6].w[0] + 1u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[3], c.r[2].w[0] << 1);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[2], 0u - 4u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[3].w[0] + 282u);
    c.r[19].d[0] = c.r[5].d[0] & c.r[2].d[0];
    set32(c.r[3], c.r[4].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 25152u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A32Cu); set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0015A32Cu) [[unlikely]] return; }
L_0015A32C:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A340u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0015A340u) [[unlikely]] return; }
L_0015A340:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[1].w[0] + 25280u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 25280u), c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[18].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A368u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 245u, depth + 1u); else { c.pc = 0x003B3FE0u; return; } if (c.pc != 0x0015A368u) [[unlikely]] return; }
L_0015A368:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A370u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 29u, depth + 1u); else { c.pc = 0x003B4438u; return; } if (c.pc != 0x0015A370u) [[unlikely]] return; }
L_0015A370:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0015A38C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A384u);  if (depth < kMaxDepth) unit_00AD(c, 490u, depth + 1u); else { c.pc = 0x003B7FB0u; return; } if (c.pc != 0x0015A384u) [[unlikely]] return; }
L_0015A384:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015A368u | kUnwind; return; } goto L_0015A368; } }
L_0015A38C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0015A3B0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0015A2E0u | kUnwind; return; } goto L_0015A2E0; }
L_0015A3C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] - 18160u);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 18192u);
    st32((c.r[4].w[0]), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[5].w[0] - 11712u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A400u); set32(c.r[4], c.r[4].w[0] - 11720u);  if (depth < kMaxDepth) unit_0016(c, 48u, depth + 1u); else { c.pc = 0x00158920u; return; } if (c.pc != 0x0015A400u) [[unlikely]] return; }
L_0015A400:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0015A420:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0015A45C; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 18160u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0015A458; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A458u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0015A458u) [[unlikely]] return; }
L_0015A458:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0015A45C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0015A470:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0015A4C0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 18192u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0015A4A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 18160u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
L_0015A4A4:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0015A4BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A4BCu);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0015A4BCu) [[unlikely]] return; }
L_0015A4BC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0015A4C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0015A4D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015A4E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A4F0u);  if (depth < kMaxDepth) unit_0016(c, 182u, depth + 1u); else { c.pc = 0x00159B80u; return; } if (c.pc != 0x0015A4F0u) [[unlikely]] return; }
L_0015A4F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A4F8u);  if (depth < kMaxDepth) unit_0016(c, 230u, depth + 1u); else { c.pc = 0x0015A2D0u; return; } if (c.pc != 0x0015A4F8u) [[unlikely]] return; }
L_0015A4F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A500u);  if (depth < kMaxDepth) unit_0016(c, 181u, depth + 1u); else { c.pc = 0x00159B70u; return; } if (c.pc != 0x0015A500u) [[unlikely]] return; }
L_0015A500:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0015A510:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015A520:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x12000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[1].w[0] + 4096u));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] >> 13;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[16].d[0] = c.r[2].d[0] << 32;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A558u); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);  if (depth < kMaxDepth) unit_0011(c, 138u, depth + 1u); else { c.pc = 0x00146850u; return; } if (c.pc != 0x0015A558u) [[unlikely]] return; }
L_0015A558:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A564u); st32((c.r[1].w[0] + 25296u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AD(c, 490u, depth + 1u); else { c.pc = 0x003B7FB0u; return; } if (c.pc != 0x0015A564u) [[unlikely]] return; }
L_0015A564:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A56Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0011(c, 138u, depth + 1u); else { c.pc = 0x00146850u; return; } if (c.pc != 0x0015A56Cu) [[unlikely]] return; }
L_0015A56C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A578u); st32((c.r[1].w[0] + 25288u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BA(c, 338u, depth + 1u); else { c.pc = 0x003EA680u; return; } if (c.pc != 0x0015A578u) [[unlikely]] return; }
L_0015A578:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A580u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0011(c, 138u, depth + 1u); else { c.pc = 0x00146850u; return; } if (c.pc != 0x0015A580u) [[unlikely]] return; }
L_0015A580:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 25304u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0015A5A0:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x12000000u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[1].w[0] + 4096u));
    c.r[2].d[0] = c.r[2].d[0] >> 13;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);  c.pc = t; return; }
L_0015A5D0:
    set32(c.r[29], c.r[29].w[0] - 272u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] - 11696u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A5F0u); set32(c.r[6], c.r[6].w[0] - 11672u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x0015A5F0u) [[unlikely]] return; }
L_0015A5F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A5F8u); set32(c.r[4], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0016(c, 328u, depth + 1u); else { c.pc = 0x0015AB20u; return; } if (c.pc != 0x0015A5F8u) [[unlikely]] return; }
L_0015A5F8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A608u); set32(c.r[5], c.r[5].w[0] - 11648u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x0015A608u) [[unlikely]] return; }
L_0015A608:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_0015A620:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.budget -= 3;
    { set32(c.r[4], c.r[4].w[0] - 11616u);  goto L_0015A940; }
L_0015A630:
    set32(c.r[29], c.r[29].w[0] - 368u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A658u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000F(c, 241u, depth + 1u); else { c.pc = 0x0013E290u; return; } if (c.pc != 0x0015A658u) [[unlikely]] return; }
L_0015A658:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] - 18128u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A674u); st8((c.r[1].w[0] + 25312u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0011(c, 139u, depth + 1u); else { c.pc = 0x00146880u; return; } if (c.pc != 0x0015A674u) [[unlikely]] return; }
L_0015A674:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_0015A6A0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[5].w[0] - 11592u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A698u); set32(c.r[6], c.r[6].w[0] - 11576u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x0015A698u) [[unlikely]] return; }
L_0015A698:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 2568u);  if (t) { goto L_0015A6B8; } }
L_0015A6A0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[5].w[0] - 11592u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A6B4u); set32(c.r[6], c.r[6].w[0] - 11560u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x0015A6B4u) [[unlikely]] return; }
L_0015A6B4:
    set32(c.r[4], 0u + 2568u);
    c.budget -= 1;
L_0015A6B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A6C0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0015A6C0u) [[unlikely]] return; }
L_0015A6C0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[4], 0u + 8u);  if (t) { goto L_0015A6E0; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A6D8u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0016(c, 365u, depth + 1u); else { c.pc = 0x0015AE40u; return; } if (c.pc != 0x0015A6D8u) [[unlikely]] return; }
L_0015A6D8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 8u);
    c.budget -= 2;
L_0015A6E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A6E8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0015A6E8u) [[unlikely]] return; }
L_0015A6E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015A6F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A6F8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0016(c, 238u, depth + 1u); else { c.pc = 0x0015A3C0u; return; } if (c.pc != 0x0015A6F8u) [[unlikely]] return; }
L_0015A6F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A708u); st32((c.r[1].w[0] + 25320u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0011(c, 261u, depth + 1u); else { c.pc = 0x001476B0u; return; } if (c.pc != 0x0015A708u) [[unlikely]] return; }
L_0015A708:
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st32((c.r[1].w[0] - 3400u), c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[18].w[0] + 2560u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0015A774; } }
L_0015A720:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A728u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0016(c, 377u, depth + 1u); else { c.pc = 0x0015AF90u; return; } if (c.pc != 0x0015A728u) [[unlikely]] return; }
L_0015A728:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A734u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 237u, depth + 1u); else { c.pc = 0x00127D00u; return; } if (c.pc != 0x0015A734u) [[unlikely]] return; }
L_0015A734:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A748u); set32(c.r[5], c.r[5].w[0] - 11544u);  if (depth < kMaxDepth) unit_0010(c, 118u, depth + 1u); else { c.pc = 0x00141760u; return; } if (c.pc != 0x0015A748u) [[unlikely]] return; }
L_0015A748:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == c.r[2].d[0]; c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_0015A770; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[5].w[0] - 11536u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A768u); set32(c.r[6], c.r[6].w[0] - 11528u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x0015A768u) [[unlikely]] return; }
L_0015A768:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A770u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0011(c, 269u, depth + 1u); else { c.pc = 0x001477C0u; return; } if (c.pc != 0x0015A770u) [[unlikely]] return; }
L_0015A770:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0015A774:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015A720u | kUnwind; return; } goto L_0015A720; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0015A7A4; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0015A7A4; } }
    set32(c.r[25], ld32((c.r[18].w[0] + 2564u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A7A4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015A7A4u) [[unlikely]] return; }
L_0015A7A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A7ACu);  if (depth < kMaxDepth) unit_002B(c, 350u, depth + 1u); else { c.pc = 0x001AE9D0u; return; } if (c.pc != 0x0015A7ACu) [[unlikely]] return; }
L_0015A7AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A7B4u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0015A7B4u) [[unlikely]] return; }
L_0015A7B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0015A7C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A7C4u);  if (depth < kMaxDepth) unit_002B(c, 273u, depth + 1u); else { c.pc = 0x001AE260u; return; } if (c.pc != 0x0015A7C4u) [[unlikely]] return; }
L_0015A7C4:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 368u);  c.pc = t; return; }
L_0015A7F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0015A850; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] - 18128u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A824u); st8((c.r[1].w[0] + 25312u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0011(c, 267u, depth + 1u); else { c.pc = 0x00147780u; return; } if (c.pc != 0x0015A824u) [[unlikely]] return; }
L_0015A824:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A82Cu);  if (depth < kMaxDepth) unit_0016(c, 327u, depth + 1u); else { c.pc = 0x0015AB10u; return; } if (c.pc != 0x0015A82Cu) [[unlikely]] return; }
L_0015A82C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A838u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 243u, depth + 1u); else { c.pc = 0x0013E2D0u; return; } if (c.pc != 0x0015A838u) [[unlikely]] return; }
L_0015A838:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0015A83C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0015A854; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A850u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0015A850u) [[unlikely]] return; }
L_0015A850:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0015A854:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0015A870:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 25320u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A890u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015A890u) [[unlikely]] return; }
L_0015A890:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A898u);  if (depth < kMaxDepth) unit_0012(c, 22u, depth + 1u); else { c.pc = 0x001482A0u; return; } if (c.pc != 0x0015A898u) [[unlikely]] return; }
L_0015A898:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0015A8B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 25320u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00158000u < 16384u) { entry = entries_0016[(t - 0x00158000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0015A8D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 25320u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00158000u < 16384u) { entry = entries_0016[(t - 0x00158000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0015A8F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 25312u));
    c.budget -= 4;
L_0015A900:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_0015A918; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A910u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 152u, depth + 1u); else { c.pc = 0x001016D8u; return; } if (c.pc != 0x0015A910u) [[unlikely]] return; }
L_0015A910:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0015A930; } }
L_0015A918:
    set32(c.r[4], ld32((c.r[1].w[0] + 25320u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A92Cu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015A92Cu) [[unlikely]] return; }
L_0015A92C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0015A930:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0015A940:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 25328u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0015A974; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A96Cu); set32(c.r[4], c.r[4].w[0] - 11520u);  if (depth < kMaxDepth) unit_0009(c, 124u, depth + 1u); else { c.pc = 0x001260E0u; return; } if (c.pc != 0x0015A96Cu) [[unlikely]] return; }
L_0015A96C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015AAF8; } }
L_0015A974:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A984u); st8((c.r[1].w[0] + 25328u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0003(c, 290u, depth + 1u); else { c.pc = 0x0010E468u; return; } if (c.pc != 0x0015A984u) [[unlikely]] return; }
L_0015A984:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A98Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 208u, depth + 1u); else { c.pc = 0x0011E080u; return; } if (c.pc != 0x0015A98Cu) [[unlikely]] return; }
L_0015A98C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A994u);  if (depth < kMaxDepth) unit_0007(c, 275u, depth + 1u); else { c.pc = 0x0011EA10u; return; } if (c.pc != 0x0015A994u) [[unlikely]] return; }
L_0015A994:
    set32(c.r[3], 0u + 18u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_0015A9CC; } }
    set32(c.r[3], 0u + 20u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_0015A9B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_0015A9E4; } }
L_0015A9B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A9BCu); set32(c.r[4], c.r[4].w[0] - 11488u);  if (depth < kMaxDepth) unit_0009(c, 124u, depth + 1u); else { c.pc = 0x001260E0u; return; } if (c.pc != 0x0015A9BCu) [[unlikely]] return; }
L_0015A9BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A9C4u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0007(c, 290u, depth + 1u); else { c.pc = 0x0011EBF8u; return; } if (c.pc != 0x0015A9C4u) [[unlikely]] return; }
L_0015A9C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015A9EC; } }
L_0015A9CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A9D4u); set32(c.r[4], c.r[4].w[0] - 11456u);  if (depth < kMaxDepth) unit_0009(c, 124u, depth + 1u); else { c.pc = 0x001260E0u; return; } if (c.pc != 0x0015A9D4u) [[unlikely]] return; }
L_0015A9D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A9DCu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0007(c, 290u, depth + 1u); else { c.pc = 0x0011EBF8u; return; } if (c.pc != 0x0015A9DCu) [[unlikely]] return; }
L_0015A9DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015A9EC; } }
L_0015A9E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A9ECu); set32(c.r[4], c.r[4].w[0] - 11424u);  if (depth < kMaxDepth) unit_0009(c, 124u, depth + 1u); else { c.pc = 0x001260E0u; return; } if (c.pc != 0x0015A9ECu) [[unlikely]] return; }
L_0015A9EC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0015AAEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A9FCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0011(c, 114u, depth + 1u); else { c.pc = 0x00146540u; return; } if (c.pc != 0x0015A9FCu) [[unlikely]] return; }
L_0015A9FC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[4].w[0] - 11392u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AA10u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 124u, depth + 1u); else { c.pc = 0x001260E0u; return; } if (c.pc != 0x0015AA10u) [[unlikely]] return; }
L_0015AA10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0015AA34; } }
L_0015AA18:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AA24u); set32(c.r[4], c.r[4].w[0] - 11352u);  if (depth < kMaxDepth) unit_0009(c, 124u, depth + 1u); else { c.pc = 0x001260E0u; return; } if (c.pc != 0x0015AA24u) [[unlikely]] return; }
L_0015AA24:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AA30u); set32(c.r[4], c.r[4].w[0] - 11344u);  if (depth < kMaxDepth) unit_0009(c, 124u, depth + 1u); else { c.pc = 0x001260E0u; return; } if (c.pc != 0x0015AA30u) [[unlikely]] return; }
L_0015AA30:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0015AA34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AA3Cu);  if (depth < kMaxDepth) unit_0004(c, 489u, depth + 1u); else { c.pc = 0x00113FC8u; return; } if (c.pc != 0x0015AA3Cu) [[unlikely]] return; }
L_0015AA3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015AA18u | kUnwind; return; } goto L_0015AA18; } }
L_0015AA44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AA4Cu);  if (depth < kMaxDepth) unit_0004(c, 486u, depth + 1u); else { c.pc = 0x00113F90u; return; } if (c.pc != 0x0015AA4Cu) [[unlikely]] return; }
L_0015AA4C:
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015AA44u | kUnwind; return; } goto L_0015AA44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AA6Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 290u, depth + 1u); else { c.pc = 0x0010E468u; return; } if (c.pc != 0x0015AA6Cu) [[unlikely]] return; }
L_0015AA6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AA74u);  if (depth < kMaxDepth) unit_0004(c, 410u, depth + 1u); else { c.pc = 0x00113258u; return; } if (c.pc != 0x0015AA74u) [[unlikely]] return; }
L_0015AA74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AA7Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 208u, depth + 1u); else { c.pc = 0x0011E080u; return; } if (c.pc != 0x0015AA7Cu) [[unlikely]] return; }
L_0015AA7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AA84u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0007(c, 290u, depth + 1u); else { c.pc = 0x0011EBF8u; return; } if (c.pc != 0x0015AA84u) [[unlikely]] return; }
L_0015AA84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AA8Cu);  if (depth < kMaxDepth) unit_0007(c, 275u, depth + 1u); else { c.pc = 0x0011EA10u; return; } if (c.pc != 0x0015AA8Cu) [[unlikely]] return; }
L_0015AA8C:
    set32(c.r[3], 0u + 18u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_0015AAC4; } }
    set32(c.r[3], 0u + 20u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_0015AAAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_0015AADC; } }
L_0015AAAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AAB4u); set32(c.r[4], c.r[4].w[0] - 11488u);  if (depth < kMaxDepth) unit_0009(c, 124u, depth + 1u); else { c.pc = 0x001260E0u; return; } if (c.pc != 0x0015AAB4u) [[unlikely]] return; }
L_0015AAB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AABCu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0007(c, 290u, depth + 1u); else { c.pc = 0x0011EBF8u; return; } if (c.pc != 0x0015AABCu) [[unlikely]] return; }
L_0015AABC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015AAE4; } }
L_0015AAC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AACCu); set32(c.r[4], c.r[4].w[0] - 11456u);  if (depth < kMaxDepth) unit_0009(c, 124u, depth + 1u); else { c.pc = 0x001260E0u; return; } if (c.pc != 0x0015AACCu) [[unlikely]] return; }
L_0015AACC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AAD4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0007(c, 290u, depth + 1u); else { c.pc = 0x0011EBF8u; return; } if (c.pc != 0x0015AAD4u) [[unlikely]] return; }
L_0015AAD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015AAE4; } }
L_0015AADC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AAE4u); set32(c.r[4], c.r[4].w[0] - 11424u);  if (depth < kMaxDepth) unit_0009(c, 124u, depth + 1u); else { c.pc = 0x001260E0u; return; } if (c.pc != 0x0015AAE4u) [[unlikely]] return; }
L_0015AAE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AAECu);  if (depth < kMaxDepth) unit_0003(c, 462u, depth + 1u); else { c.pc = 0x0010FD88u; return; } if (c.pc != 0x0015AAECu) [[unlikely]] return; }
L_0015AAEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AAF4u);  if (depth < kMaxDepth) unit_0004(c, 370u, depth + 1u); else { c.pc = 0x00112B78u; return; } if (c.pc != 0x0015AAF4u) [[unlikely]] return; }
L_0015AAF4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0015AAF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0015AB10:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[1].w[0] + 25328u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_0015AB20:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AB44u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x0015AB44u) [[unlikely]] return; }
L_0015AB44:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AB58u); st32((c.r[29].w[0] + 204u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0015AB58u) [[unlikely]] return; }
L_0015AB58:
    c.r[17].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_0015AB60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AB68u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0011(c, 153u, depth + 1u); else { c.pc = 0x00146990u; return; } if (c.pc != 0x0015AB68u) [[unlikely]] return; }
L_0015AB68:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_0015AB84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AB80u);  if (depth < kMaxDepth) unit_0007(c, 280u, depth + 1u); else { c.pc = 0x0011EAA8u; return; } if (c.pc != 0x0015AB80u) [[unlikely]] return; }
L_0015AB80:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0015AB84:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015AB60u | kUnwind; return; } goto L_0015AB60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AB94u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 169u, depth + 1u); else { c.pc = 0x00146B40u; return; } if (c.pc != 0x0015AB94u) [[unlikely]] return; }
L_0015AB94:
    set32(c.r[3], c.r[2].w[0] + 2047u);
    set32(c.r[5], 0u + 64u);
    set32(c.r[2], 0u - 2048u);
    c.r[17].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015ABACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 79u, depth + 1u); else { c.pc = 0x00141110u; return; } if (c.pc != 0x0015ABACu) [[unlikely]] return; }
L_0015ABAC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015ABC0u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 163u, depth + 1u); else { c.pc = 0x00146A90u; return; } if (c.pc != 0x0015ABC0u) [[unlikely]] return; }
L_0015ABC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015ABC8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 173u, depth + 1u); else { c.pc = 0x00146BC0u; return; } if (c.pc != 0x0015ABC8u) [[unlikely]] return; }
L_0015ABC8:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015ABDCu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0017(c, 125u, depth + 1u); else { c.pc = 0x0015D850u; return; } if (c.pc != 0x0015ABDCu) [[unlikely]] return; }
L_0015ABDC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[5].w[0] - 3248u);
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
L_0015ABEC:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015ABECu | kUnwind; return; } goto L_0015ABEC; } }
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[19].w[0] << 2);
    c.budget -= 2;
L_0015AC10:
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.r[18].d[0] = ld16((c.r[2].w[0] + 112u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AC24u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0015AC24u) [[unlikely]] return; }
L_0015AC24:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 192u);  if (t) { goto L_0015AC40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AC38u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 144u, depth + 1u); else { c.pc = 0x0015DB40u; return; } if (c.pc != 0x0015AC38u) [[unlikely]] return; }
L_0015AC38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[2].w[0] + 15u);  if (t) { goto L_0015AC48; } }
L_0015AC40:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] + 15u);
    c.budget -= 2;
L_0015AC48:
    set32(c.r[2], 0u - 16u);
    c.r[16].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AC58u); set32(c.r[4], c.r[16].w[0] + 256u);  if (depth < kMaxDepth) unit_0004(c, 374u, depth + 1u); else { c.pc = 0x00112C00u; return; } if (c.pc != 0x0015AC58u) [[unlikely]] return; }
L_0015AC58:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AC68u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0015AC68u) [[unlikely]] return; }
L_0015AC68:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 192u);  if (t) { goto L_0015AC84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AC7Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 152u, depth + 1u); else { c.pc = 0x0015DC50u; return; } if (c.pc != 0x0015AC7Cu) [[unlikely]] return; }
L_0015AC7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 104u), c.r[16].w[0]);  if (t) { goto L_0015AC8C; } }
L_0015AC84:
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 104u), c.r[16].w[0]);
    c.budget -= 2;
L_0015AC8C:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 100u), c.r[17].w[0]);
    st32((c.r[29].w[0] + 96u), c.r[16].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015ACA4u); st32((c.r[29].w[0] + 108u), 0u);  if (depth < kMaxDepth) unit_0002(c, 580u, depth + 1u); else { c.pc = 0x0010BEA0u; return; } if (c.pc != 0x0015ACA4u) [[unlikely]] return; }
L_0015ACA4:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015ACB0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0002(c, 620u, depth + 1u); else { c.pc = 0x0010BFE0u; return; } if (c.pc != 0x0015ACB0u) [[unlikely]] return; }
L_0015ACB0:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0015ACB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015ACBCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 616u, depth + 1u); else { c.pc = 0x0010BFC0u; return; } if (c.pc != 0x0015ACBCu) [[unlikely]] return; }
L_0015ACBC:
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015ACB4u | kUnwind; return; } goto L_0015ACB4; } }
    c.r[3].d[0] = c.r[18].d[0] & 65535ull;
    set32(c.r[2], 0u + 43u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0015AD9C; } }
    set32(c.r[2], 0u + 42u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0015AD78; } }
    set32(c.r[2], 0u + 41u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0015AD54; } }
    set32(c.r[2], 0u + 40u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0015AD30; } }
    set32(c.r[2], 0u + 200u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[6].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_0015AD18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0015ADC4; } }
L_0015AD18:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 105u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AD28u); set32(c.r[6], c.r[6].w[0] - 11312u);  if (depth < kMaxDepth) unit_0004(c, 440u, depth + 1u); else { c.pc = 0x00113860u; return; } if (c.pc != 0x0015AD28u) [[unlikely]] return; }
L_0015AD28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0015ADE0; } }
L_0015AD30:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 24u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AD44u); set32(c.r[6], c.r[6].w[0] - 11264u);  if (depth < kMaxDepth) unit_0004(c, 440u, depth + 1u); else { c.pc = 0x00113860u; return; } if (c.pc != 0x0015AD44u) [[unlikely]] return; }
L_0015AD44:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015AD30u | kUnwind; return; } goto L_0015AD30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015ADDC; } }
L_0015AD54:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 24u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AD68u); set32(c.r[6], c.r[6].w[0] - 11264u);  if (depth < kMaxDepth) unit_0004(c, 440u, depth + 1u); else { c.pc = 0x00113860u; return; } if (c.pc != 0x0015AD68u) [[unlikely]] return; }
L_0015AD68:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015AD54u | kUnwind; return; } goto L_0015AD54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015ADDC; } }
L_0015AD78:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 22u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AD8Cu); set32(c.r[6], c.r[6].w[0] - 11232u);  if (depth < kMaxDepth) unit_0004(c, 440u, depth + 1u); else { c.pc = 0x00113860u; return; } if (c.pc != 0x0015AD8Cu) [[unlikely]] return; }
L_0015AD8C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015AD78u | kUnwind; return; } goto L_0015AD78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015ADDC; } }
L_0015AD9C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 22u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015ADB0u); set32(c.r[6], c.r[6].w[0] - 11200u);  if (depth < kMaxDepth) unit_0004(c, 440u, depth + 1u); else { c.pc = 0x00113860u; return; } if (c.pc != 0x0015ADB0u) [[unlikely]] return; }
L_0015ADB0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015AD9Cu | kUnwind; return; } goto L_0015AD9C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015ADDC; } }
L_0015ADC0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0015ADC4:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015ADD0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0004(c, 440u, depth + 1u); else { c.pc = 0x00113860u; return; } if (c.pc != 0x0015ADD0u) [[unlikely]] return; }
L_0015ADD0:
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015ADC0u | kUnwind; return; } goto L_0015ADC0; } }
L_0015ADDC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0015ADE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015ADE8u);  if (depth < kMaxDepth) unit_0004(c, 380u, depth + 1u); else { c.pc = 0x00112D68u; return; } if (c.pc != 0x0015ADE8u) [[unlikely]] return; }
L_0015ADE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015ADF0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 83u, depth + 1u); else { c.pc = 0x00141160u; return; } if (c.pc != 0x0015ADF0u) [[unlikely]] return; }
L_0015ADF0:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[19].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015AC10u | kUnwind; return; } goto L_0015AC10; } }
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AE0Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x0015AE0Cu) [[unlikely]] return; }
L_0015AE0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AE14u); set32(c.r[4], ld32((c.r[29].w[0] + 204u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0015AE14u) [[unlikely]] return; }
L_0015AE14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_0015AE40:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 18104u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[6], 0u + 2560u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[4].w[0] + 2564u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AE80u); st32((c.r[4].w[0] + 2560u), 0u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0015AE80u) [[unlikely]] return; }
L_0015AE80:
    set32(c.r[4], 0u + 4096u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AE8Cu); set32(c.r[5], 0u + 64u);  if (depth < kMaxDepth) unit_0010(c, 79u, depth + 1u); else { c.pc = 0x00141110u; return; } if (c.pc != 0x0015AE8Cu) [[unlikely]] return; }
L_0015AE8C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AE9Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0011(c, 153u, depth + 1u); else { c.pc = 0x00146990u; return; } if (c.pc != 0x0015AE9Cu) [[unlikely]] return; }
L_0015AE9C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AEA8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 169u, depth + 1u); else { c.pc = 0x00146B40u; return; } if (c.pc != 0x0015AEA8u) [[unlikely]] return; }
L_0015AEA8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AEBCu); set32(c.r[6], 0u + 4096u);  if (depth < kMaxDepth) unit_0011(c, 163u, depth + 1u); else { c.pc = 0x00146A90u; return; } if (c.pc != 0x0015AEBCu) [[unlikely]] return; }
L_0015AEBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AEC4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 173u, depth + 1u); else { c.pc = 0x00146BC0u; return; } if (c.pc != 0x0015AEC4u) [[unlikely]] return; }
L_0015AEC4:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0015AF00; } }
L_0015AED0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AEECu); set32(c.r[4], c.r[20].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 125u, depth + 1u); else { c.pc = 0x00141850u; return; } if (c.pc != 0x0015AEECu) [[unlikely]] return; }
L_0015AEEC:
    set32(c.r[18], c.r[18].w[0] - c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 2560u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[20].w[0] + 2560u), c.r[2].w[0]);
    c.budget -= 5;
L_0015AF00:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; c.r[3].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015AED0u | kUnwind; return; } goto L_0015AED0; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[2].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0015AF1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AF18u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0015AF18u) [[unlikely]] return; }
L_0015AF18:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0015AF1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0015AF40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0015AF7C; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 18104u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0] + 2564u), c.r[3].w[0]);  if (t) { goto L_0015AF78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AF78u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0015AF78u) [[unlikely]] return; }
L_0015AF78:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0015AF7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0015AF90:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);  c.pc = t; return; }
L_0015AFB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] - 18048u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 68u);
    st32((c.r[4].w[0] + 76u), c.r[3].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 40u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0] + 44u), 0u);
    set32(c.r[6], 0u + 16u);
    st32((c.r[4].w[0] + 48u), 0u);
    st64((c.r[4].w[0]), 0ull);
    st64((c.r[4].w[0] + 8u), 0ull);
    st64((c.r[4].w[0] + 16u), c.r[2].d[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AFF8u); set32(c.r[4], c.r[16].w[0] + 24u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0015AFF8u) [[unlikely]] return; }
L_0015AFF8:
    st32((c.r[16].w[0] + 56u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] - 11144u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 60u), c.f[0]);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 64u), 0u);
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 72u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0015B030:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0015B080; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 18048u);
    st32((c.r[17].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B068u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015B068u) [[unlikely]] return; }
L_0015B068:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0015B084; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B080u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0015B080u) [[unlikely]] return; }
L_0015B080:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0015B084:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0015B0A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015B0B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0015B0D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B0D0u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x0015B0D0u) [[unlikely]] return; }
L_0015B0D0:
    set32(c.r[5], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 8u);  if (t) { goto L_0015B0E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B0E4u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x0015B0E4u) [[unlikely]] return; }
L_0015B0E4:
    set32(c.r[25], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B0F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015B0F4u) [[unlikely]] return; }
L_0015B0F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0015B110:
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0015B2CC; } }
    c.r[10].d[0] = ld16((c.r[3].w[0]));
    set32(c.r[9], 0u - 16384u);
    c.r[11].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[8], 0u + 44u);
    c.r[9].d[0] = c.r[10].d[0] & c.r[9].d[0];
    c.r[10].d[0] = c.r[10].d[0] & 16383ull;
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    c.r[10].d[0] = c.r[10].d[0] & 16383ull;
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld16((c.r[3].w[0] + 2u));
    c.r[9].d[0] = c.r[9].d[0] << 54;
    c.r[9].d[0] = c.r[9].d[0] >> 58;
    c.budget -= 15;
    { const bool t = c.r[9].d[0] == c.r[8].d[0]; c.r[11].d[0] = c.r[6].d[0] << 32;  if (t) { goto L_0015B18C; } }
    set32(c.r[8], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[9].d[0] == c.r[8].d[0]; set32(c.r[8], 0u + 20u);  if (t) { goto L_0015B188; } }
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == c.r[8].d[0];  if (t) { goto L_0015B188; } }
    set32(c.r[8], 0u + 27u);
    c.budget -= 3;
    { const bool t = c.r[9].d[0] == c.r[8].d[0]; set32(c.r[8], 0u + 19u);  if (t) { goto L_0015B188; } }
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == c.r[8].d[0];  if (t) { goto L_0015B188; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[4].w[0] + 56u)));  if (t) { goto L_0015B1F4; } }
L_0015B188:
    c.r[11].d[0] = c.r[6].d[0] << 32;
    c.budget -= 1;
L_0015B18C:
    c.r[10].d[0] = ld64((c.r[3].w[0]));
    c.r[6].d[0] = c.r[7].d[0] & 1ull;
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 32);
    c.r[7].sd[0] = static_cast<std::int32_t>(0xFFF80000u);
    c.r[8].d[0] = c.r[7].d[0] | 31ull;
    c.r[7].d[0] = 0ull | 65535ull;
    c.r[8].d[0] = c.r[8].d[0] << 32;
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[7].d[0] = c.r[7].d[0] | 65535ull;
    c.r[9].d[0] = c.r[7].d[0] | c.r[8].d[0];
    c.r[8].d[0] = c.r[10].d[0] << 13;
    c.r[7].d[0] = c.r[10].d[0] & c.r[9].d[0];
    c.r[8].d[0] = c.r[8].d[0] >> 50;
    c.r[8].d[0] = c.r[8].d[0] + c.r[11].d[0];
    c.r[8].d[0] = c.r[8].d[0] & 16383ull;
    c.r[8].d[0] = c.r[8].d[0] << 37;
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    c.budget -= 19;
    { const bool t = c.r[6].d[0] == 0ull; st64((c.r[3].w[0]), c.r[7].d[0]);  if (t) { goto L_0015B1F0; } }
    c.r[8].d[0] = ld64((c.r[3].w[0]));
    c.r[6].d[0] = c.r[11].d[0] & 16383ull;
    c.r[7].d[0] = c.r[6].d[0] << 37;
    c.r[6].d[0] = c.r[8].d[0] & c.r[9].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st64((c.r[3].w[0]), c.r[6].d[0]);
    c.budget -= 6;
L_0015B1F0:
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 1;
L_0015B1F4:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0015B2CC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[6], 0u - 16384u);
    c.r[8].d[0] = c.r[5].d[0] & 65535ull;
    c.r[7].d[0] = ld16((c.r[3].w[0]));
    c.r[6].d[0] = c.r[7].d[0] & c.r[6].d[0];
    c.r[7].d[0] = c.r[7].d[0] & 16383ull;
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.r[7].d[0] = c.r[7].d[0] & 16383ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[6], ld32((c.r[4].w[0] + 56u)));
    c.r[1].d[0] = c.r[6].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0015B274; } }
    c.r[8].d[0] = ld64((c.r[3].w[0]));
    set32(c.r[7], 0u - 4u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[9].d[0] = c.r[5].d[0] << 32;
    c.r[7].d[0] = c.r[7].d[0] << 32;
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 32);
    c.r[7].d[0] = c.r[8].d[0] << 30;
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[7].d[0] = c.r[7].d[0] >> 50;
    c.r[7].d[0] = c.r[7].d[0] + c.r[9].d[0];
    c.r[7].d[0] = c.r[7].d[0] & 16383ull;
    c.r[7].d[0] = c.r[7].d[0] << 20;
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st64((c.r[3].w[0]), c.r[6].d[0]);
    c.budget -= 16;
L_0015B274:
    set32(c.r[4], ld32((c.r[4].w[0] + 56u)));
    c.r[1].d[0] = c.r[4].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0015B2CC; } }
    c.r[6].d[0] = ld64((c.r[3].w[0]));
    c.r[7].d[0] = c.r[5].d[0] << 32;
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFFC00000u);
    c.r[4].d[0] = 0ull | 65535ull;
    c.r[5].d[0] = c.r[5].d[0] | 255ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[5].d[0] = c.r[6].d[0] << 10;
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[5].d[0] = c.r[5].d[0] >> 50;
    c.r[5].d[0] = c.r[5].d[0] + c.r[7].d[0];
    c.r[5].d[0] = c.r[5].d[0] & 16383ull;
    c.r[5].d[0] = c.r[5].d[0] << 40;
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st64((c.r[3].w[0]), c.r[4].d[0]);
    c.budget -= 18;
L_0015B2CC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015B2E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[5], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] - 18080u);
    set32(c.r[3], 0u + 16384u);
    st32((c.r[4].w[0] + 40u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 20u), c.r[5].w[0]);
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 32u), 0u);  c.pc = t; return; }
L_0015B320:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0015B364; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 18080u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B34Cu); st32((c.r[17].w[0] + 40u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0016(c, 400u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x0015B34Cu) [[unlikely]] return; }
L_0015B34C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0015B368; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B364u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0015B364u) [[unlikely]] return; }
L_0015B364:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0015B368:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0015B380:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0015B3E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0015B3D0; } }
L_0015B3A4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0015B3CC; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B3CCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015B3CCu) [[unlikely]] return; }
L_0015B3CC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0015B3D0:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015B3A4u | kUnwind; return; } goto L_0015B3A4; } }
L_0015B3E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0015B400:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015B410:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0015B470; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0015B460; } }
L_0015B434:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0015B45C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B45Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015B45Cu) [[unlikely]] return; }
L_0015B45C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0015B460:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015B434u | kUnwind; return; } goto L_0015B434; } }
L_0015B470:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0015B490:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0015B508; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0015B4E8; } }
L_0015B4B4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0015B4E4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0015B4E4; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B4E4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015B4E4u) [[unlikely]] return; }
L_0015B4E4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0015B4E8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015B4B4u | kUnwind; return; } goto L_0015B4B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B500u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0015B500u) [[unlikely]] return; }
L_0015B500:
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 2;
L_0015B508:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0015B520:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 12;
    { const bool t = c.r[6].sd[0] < 0; set32(c.r[17], c.r[5].w[0] - c.r[3].w[0]);  if (t) { goto L_0015B56C; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] < 0; set32(c.r[16], c.r[6].w[0] - c.r[3].w[0]);  if (t) { goto L_0015B564; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[6].w[0] - c.r[4].w[0]);  if (t) { goto L_0015B57C; } }
L_0015B564:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[19].d[0] & 1ull;  if (t) { goto L_0015B580; } }
L_0015B56C:
    set32(c.r[3], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0; c.r[16].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0015B57C; } }
    set32(c.r[16], c.r[5].w[0] - c.r[3].w[0]);
    c.budget -= 1;
L_0015B57C:
    c.r[3].d[0] = c.r[19].d[0] & 1ull;
    c.budget -= 1;
L_0015B580:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0015B58C; } }
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 1;
L_0015B58C:
    st32((c.r[20].w[0] + 16u), c.r[5].w[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 20u), c.r[6].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 36u), c.r[19].w[0]);  if (t) { goto L_0015B5D4; } }
L_0015B5A0:
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[8], ld32((c.r[20].w[0] + 24u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[9], ld32((c.r[20].w[0] + 28u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B5D0u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015B5D0u) [[unlikely]] return; }
L_0015B5D0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0015B5D4:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015B5A0u | kUnwind; return; } goto L_0015B5A0; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0015B610:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0015B670; } }
L_0015B638:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[16], c.r[17].w[0] << 2);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B654u); set32(c.r[5], c.r[2].w[0] + 24u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00127AA0u; return; } if (c.pc != 0x0015B654u) [[unlikely]] return; }
L_0015B654:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015B66C; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_0015B680; } }
L_0015B66C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0015B670:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015B638u | kUnwind; return; } goto L_0015B638; } }
L_0015B680:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0015B6A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B6C0u); set32(c.r[4], c.r[5].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0015B6C0u) [[unlikely]] return; }
L_0015B6C0:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[17].w[0]);  if (t) { goto L_0015B6E4; } }
L_0015B6D0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 5;
L_0015B6E4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015B6D0u | kUnwind; return; } goto L_0015B6D0; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0015B710:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0015B754; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B734u);  if (depth < kMaxDepth) unit_0016(c, 432u, depth + 1u); else { c.pc = 0x0015B980u; return; } if (c.pc != 0x0015B734u) [[unlikely]] return; }
L_0015B734:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B73Cu); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0015B73Cu) [[unlikely]] return; }
L_0015B73C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0015B758; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B754u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0015B754u) [[unlikely]] return; }
L_0015B754:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0015B758:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0015B770:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
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
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[16], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 20;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0015B7C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B7C8u);  if (depth < kMaxDepth) unit_0016(c, 435u, depth + 1u); else { c.pc = 0x0015B9D0u; return; } if (c.pc != 0x0015B7C8u) [[unlikely]] return; }
L_0015B7C8:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 44u);  if (t) { goto L_0015B80C; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 44u);  if (t) { goto L_0015B7E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015B828; } }
L_0015B7E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B7F0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0015B7F0u) [[unlikely]] return; }
L_0015B7F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0015B804; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B800u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 18u, depth + 1u); else { c.pc = 0x0015C480u; return; } if (c.pc != 0x0015B800u) [[unlikely]] return; }
L_0015B800:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0015B804:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015B828; } }
L_0015B80C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B814u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0015B814u) [[unlikely]] return; }
L_0015B814:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0015B828; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B824u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 72u, depth + 1u); else { c.pc = 0x0015CFB0u; return; } if (c.pc != 0x0015B824u) [[unlikely]] return; }
L_0015B824:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0015B828:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0015B83C; } }
    st32((c.r[17].w[0] + 8u), c.r[21].w[0]);
    st32((c.r[17].w[0] + 24u), c.r[19].w[0]);
    st32((c.r[17].w[0] + 28u), c.r[18].w[0]);
    c.budget -= 3;
L_0015B83C:
    set32(c.r[3], ld32((c.r[22].w[0])));
    c.budget -= 1;
L_0015B840:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0]), c.r[17].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0015B880:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[7], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[8], ld32((c.r[19].w[0] + 32u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B8B8u); set32(c.r[5], ld32((c.r[5].w[0])));  if (depth < kMaxDepth) unit_0016(c, 417u, depth + 1u); else { c.pc = 0x0015B770u; return; } if (c.pc != 0x0015B8B8u) [[unlikely]] return; }
L_0015B8B8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_0015B944; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0015B928; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 40u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B8E4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015B8E4u) [[unlikely]] return; }
L_0015B8E4:
    set32(c.r[25], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[7], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B900u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015B900u) [[unlikely]] return; }
L_0015B900:
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0015B914; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B914u);  if (depth < kMaxDepth) unit_0016(c, 393u, depth + 1u); else { c.pc = 0x0015B380u; return; } if (c.pc != 0x0015B914u) [[unlikely]] return; }
L_0015B914:
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0015B928; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B928u);  if (depth < kMaxDepth) unit_0016(c, 397u, depth + 1u); else { c.pc = 0x0015B410u; return; } if (c.pc != 0x0015B928u) [[unlikely]] return; }
L_0015B928:
    set32(c.r[3], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0015B950; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 32u), c.r[2].w[0]);  if (t) { goto L_0015B94C; } }
L_0015B944:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B94Cu); set32(c.r[4], c.r[4].w[0] - 11168u);  if (depth < kMaxDepth) unit_0009(c, 124u, depth + 1u); else { c.pc = 0x001260E0u; return; } if (c.pc != 0x0015B94Cu) [[unlikely]] return; }
L_0015B94C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0015B950:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0015B970:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015B980:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0015B9A8; } }
L_0015B99C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B9A4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0016(c, 435u, depth + 1u); else { c.pc = 0x0015B9D0u; return; } if (c.pc != 0x0015B9A4u) [[unlikely]] return; }
L_0015B9A4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0015B9A8:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015B99Cu | kUnwind; return; } goto L_0015B99C; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0015B9D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[16], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0015BA14; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0015BA14; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BA14u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015BA14u) [[unlikely]] return; }
L_0015BA14:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0]), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0015BA40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015BA50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015BA60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015BA70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015BA80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BA94u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0016(c, 378u, depth + 1u); else { c.pc = 0x0015AFB0u; return; } if (c.pc != 0x0015BA94u) [[unlikely]] return; }
L_0015BA94:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 17920u);
    st32((c.r[16].w[0] + 76u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 80u), 0u);
    st32((c.r[16].w[0] + 84u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0015BAC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0015BB1C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 17920u);
    st32((c.r[17].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BAF8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015BAF8u) [[unlikely]] return; }
L_0015BAF8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BB04u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0016(c, 380u, depth + 1u); else { c.pc = 0x0015B030u; return; } if (c.pc != 0x0015BB04u) [[unlikely]] return; }
L_0015BB04:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0015BB20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BB1Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0015BB1Cu) [[unlikely]] return; }
L_0015BB1C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0015BB20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0015BB40:
    set32(c.r[29], c.r[29].w[0] - 272u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull; c.r[21].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0015BFAC; } }
    set32(c.r[18], ld32((c.r[21].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0015BFAC; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] >> 4);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BB9Cu); set32(c.r[4], c.r[2].w[0] << 4);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0015BB9Cu) [[unlikely]] return; }
L_0015BB9C:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[21].w[0] + 80u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BBB4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x0015BBB4u) [[unlikely]] return; }
L_0015BBB4:
    set32(c.r[2], ld32((c.r[21].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0015BC10; } }
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], 0u + 4u);  if (t) { goto L_0015BBCC; } }
L_0015BBCC:
    set32(c.r[3], ld32((c.r[21].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 92u)));
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] >> 4);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BBECu); set32(c.r[4], c.r[2].w[0] << 4);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0015BBECu) [[unlikely]] return; }
L_0015BBEC:
    set32(c.r[3], ld32((c.r[21].w[0] + 88u)));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[21].w[0] + 84u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[21].w[0] + 92u)));
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BC10u); mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]); c.r[6].d[0] = c.lo.d[0];  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x0015BC10u) [[unlikely]] return; }
L_0015BC10:
    set32(c.r[2], ld32((c.r[21].w[0] + 80u)));
    set32(c.r[3], 0u + 44u);
    c.r[4].d[0] = ld16((c.r[18].w[0] + 2u));
    c.r[23].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[18].w[0]));
    set32(c.r[17], ld32((c.r[2].w[0] + 28u)));
    c.r[16].d[0] = ld16((c.r[2].w[0] + 26u));
    c.r[4].d[0] = c.r[4].d[0] << 54;
    c.r[4].d[0] = c.r[4].d[0] >> 58;
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[30].d[0] = c.r[5].d[0] & 16383ull;  if (t) { goto L_0015BCBC; } }
    set32(c.r[3], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);  if (t) { goto L_0015BCC0; } }
    set32(c.r[3], 0u + 20u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 27u);  if (t) { goto L_0015BCBC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0015BCAC; } }
    set32(c.r[3], 0u + 19u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0015BCB0; } }
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);  if (t) { goto L_0015BCA0; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0015BC9C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x40800000u);  if (t) { goto L_0015BC90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0015BCCC; } }
L_0015BC90:
    c.f[1] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[2].w[0] + 24u));  if (t) { goto L_0015BCD4; } }
L_0015BC9C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.budget -= 1;
L_0015BCA0:
    c.f[1] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015BCD0; } }
L_0015BCAC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_0015BCB0:
    c.f[1] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015BCD0; } }
L_0015BCBC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.budget -= 1;
L_0015BCC0:
    c.f[1] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015BCD0; } }
L_0015BCCC:
    c.f[1] = c.r[3].w[0];
    c.budget -= 1;
L_0015BCD0:
    c.r[2].d[0] = ld16((c.r[2].w[0] + 24u));
    c.budget -= 1;
L_0015BCD4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0015BCE8; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0015BD00; } }
L_0015BCE8:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0015BD00:
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47800000u);
    c.r[22].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 11;
L_0015BD2C:
    c.r[1].d[0] = c.r[1].d[0] | 1ull;
    c.r[1].d[0] = c.r[17].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0015BD50; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_0015BD50; } }
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0015BD50:
    set32(c.r[2], ld32((c.r[21].w[0] + 80u)));
    c.r[5].d[0] = c.r[30].d[0] << 48;
    c.r[6].d[0] = ld64((c.r[18].w[0]));
    c.r[11].d[0] = c.r[16].d[0] << 48;
    c.r[3].d[0] = ld16((c.r[18].w[0] + 2u));
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 48);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 24u)));
    c.r[6].d[0] = c.r[6].d[0] << 44;
    c.r[3].d[0] = c.r[3].d[0] << 54;
    c.r[6].d[0] = c.r[6].d[0] >> 58;
    c.r[3].d[0] = c.r[3].d[0] >> 58;
    c.r[6].d[0] = c.r[6].d[0] << 48;
    c.r[7].d[0] = c.r[3].d[0] << 48;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BDA0u); c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);  if (depth < kMaxDepth) unit_0000(c, 182u, depth + 1u); else { c.pc = 0x00101A88u; return; } if (c.pc != 0x0015BDA0u) [[unlikely]] return; }
L_0015BDA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BDA8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 580u, depth + 1u); else { c.pc = 0x0010BEA0u; return; } if (c.pc != 0x0015BDA8u) [[unlikely]] return; }
L_0015BDA8:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BDB4u); c.r[5].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 192u, depth + 1u); else { c.pc = 0x00101DB0u; return; } if (c.pc != 0x0015BDB4u) [[unlikely]] return; }
L_0015BDB4:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BDC0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 156u, depth + 1u); else { c.pc = 0x00101770u; return; } if (c.pc != 0x0015BDC0u) [[unlikely]] return; }
L_0015BDC0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 1ull;
    c.r[1].d[0] = c.r[17].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] - 32768u);  if (t) { goto L_0015BDEC; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[30], c.r[30].w[0] + 256u);
    set32(c.r[22], c.r[22].w[0] - c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[23], c.r[23].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[17].w[0] - 32768u);
    c.budget -= 6;
L_0015BDEC:
    set32(c.r[17], c.r[2].w[0] - 32768u);
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] > 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015BD2Cu | kUnwind; return; } goto L_0015BD2C; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_0015BE64; } }
    c.r[3].d[0] = ld64((c.r[18].w[0]));
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.r[2].d[0] = ld8((c.r[18].w[0] + 6u));
    set32(c.r[6], 0u + 1u);
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 88u)));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 92u)));
    c.r[9].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[3].d[0] << 13;
    c.r[3].d[0] = c.r[3].d[0] >> 50;
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[5].d[0] = c.r[3].d[0] << 48;
    c.r[7].d[0] = c.r[2].d[0] >> 60;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BE40u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);  if (depth < kMaxDepth) unit_0000(c, 182u, depth + 1u); else { c.pc = 0x00101A88u; return; } if (c.pc != 0x0015BE40u) [[unlikely]] return; }
L_0015BE40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BE48u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 580u, depth + 1u); else { c.pc = 0x0010BEA0u; return; } if (c.pc != 0x0015BE48u) [[unlikely]] return; }
L_0015BE48:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BE54u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 192u, depth + 1u); else { c.pc = 0x00101DB0u; return; } if (c.pc != 0x0015BE54u) [[unlikely]] return; }
L_0015BE54:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BE60u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 156u, depth + 1u); else { c.pc = 0x00101770u; return; } if (c.pc != 0x0015BE60u) [[unlikely]] return; }
L_0015BE60:
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_0015BE64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[21].w[0] + 56u)));  if (t) { goto L_0015BF84; } }
L_0015BE6C:
    set32(c.r[6], ld32((c.r[21].w[0] + 80u)));
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[16], ld32((c.r[21].w[0] + 48u)));
    set32(c.r[3], c.r[17].w[0] << 1);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 28u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 32u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BE94u); set32(c.r[6], c.r[2].w[0] >> (c.r[3].w[0] & 31u));  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x0015BE94u) [[unlikely]] return; }
L_0015BE94:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0015BEE0; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0015BEC8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0015BEBC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015BEF4; } }
L_0015BEBC:
    c.r[2].d[0] = ld16((c.r[16].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 16383ull;  if (t) { goto L_0015BEF4; } }
L_0015BEC8:
    c.r[2].d[0] = ld64((c.r[16].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 30;
    c.r[2].d[0] = c.r[2].d[0] >> 50;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);  if (t) { goto L_0015BEF4; } }
L_0015BEE0:
    c.r[2].d[0] = ld64((c.r[16].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 10;
    c.r[2].d[0] = c.r[2].d[0] >> 50;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 5;
L_0015BEF4:
    c.r[5].d[0] = c.r[2].d[0] << 48;
    set32(c.r[10], ld32((c.r[21].w[0] + 80u)));
    c.r[2].d[0] = ld64((c.r[18].w[0]));
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.r[6].d[0] = ld16((c.r[18].w[0] + 2u));
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[3].d[0] = ld16((c.r[10].w[0] + 24u));
    c.r[7].d[0] = c.r[2].d[0] << 44;
    c.r[2].d[0] = ld16((c.r[10].w[0] + 26u));
    c.r[7].d[0] = c.r[7].d[0] >> 58;
    c.r[6].d[0] = c.r[6].d[0] << 54;
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> (c.r[17].w[0] & 31u)));
    c.r[10].d[0] = c.r[7].d[0] >> (c.r[17].w[0] & 63u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> (c.r[17].w[0] & 31u)));
    c.r[7].d[0] = c.r[6].d[0] >> 58;
    c.r[11].d[0] = c.r[2].d[0] << 48;
    c.r[6].d[0] = c.r[10].d[0] << 48;
    c.r[7].d[0] = c.r[7].d[0] << 48;
    c.r[10].d[0] = c.r[3].d[0] << 48;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 48);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BF5Cu); c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 48);  if (depth < kMaxDepth) unit_0000(c, 182u, depth + 1u); else { c.pc = 0x00101A88u; return; } if (c.pc != 0x0015BF5Cu) [[unlikely]] return; }
L_0015BF5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BF64u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 580u, depth + 1u); else { c.pc = 0x0010BEA0u; return; } if (c.pc != 0x0015BF64u) [[unlikely]] return; }
L_0015BF64:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BF70u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 192u, depth + 1u); else { c.pc = 0x00101DB0u; return; } if (c.pc != 0x0015BF70u) [[unlikely]] return; }
L_0015BF70:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BF7Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 156u, depth + 1u); else { c.pc = 0x00101770u; return; } if (c.pc != 0x0015BF7Cu) [[unlikely]] return; }
L_0015BF7C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[2], ld32((c.r[21].w[0] + 56u)));
    c.budget -= 2;
L_0015BF84:
    c.r[1].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015BE6Cu | kUnwind; return; } goto L_0015BE6C; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0015BFA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BFA0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0015BFA0u) [[unlikely]] return; }
L_0015BFA0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0015BFA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BFACu);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0015BFACu) [[unlikely]] return; }
L_0015BFAC:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_0015BFE0:
    set32(c.r[3], ld32((c.r[4].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0015BFF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 40u), 0u);  if (t) { goto L_0015BFF8; } }
L_0015BFF4:
    st32((c.r[4].w[0] + 40u), 0u);
    c.budget -= 1;
L_0015BFF8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
}

}
