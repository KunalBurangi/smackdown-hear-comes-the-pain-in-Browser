#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_000F[4096] = {
    1, 2, 0, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0,
    16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0,
    18, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0,
    26, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0,
    0, 0, 0, 33, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 37, 38, 0, 0, 0, 0, 0, 0,
    0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 45, 46, 0, 0, 0, 47,
    0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0,
    51, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 63, 0, 0, 0, 0, 64, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0,
    69, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 0, 72, 0, 73, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0,
    0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0,
    0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0,
    92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 94, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0,
    103, 0, 0, 0, 104, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 108, 0, 109, 0,
    110, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114,
    0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0,
    0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 125, 0, 0,
    0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    129, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0,
    0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0,
    0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 150, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 165, 0,
    0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0,
    0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 177, 0,
    0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    180, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0,
    0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0,
    189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0,
    199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202,
    0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0,
    0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0,
    0, 209, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 214,
    0, 0, 215, 0, 216, 0, 0, 0, 0, 0, 0, 217, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 225, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 228, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 232, 0, 233, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 236, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0,
    0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0,
    0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0,
    261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0,
    0, 268, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0,
    272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0,
    0, 283, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 289,
    0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 0, 0,
    294, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 298, 0,
    0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 0, 317, 0, 0, 0,
    318, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0,
    321, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    339, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343,
    0, 0, 344, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0,
    351, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 353, 354, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0,
    357, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 363, 0, 0,
    0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0,
    0, 0, 0, 0, 0, 367, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 373, 0, 0, 0, 374, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 377, 0, 0, 0, 0, 0, 0, 378, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0,
    381, 382, 0, 0, 383, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 391,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 394, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    398, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0,
    0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 406, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 410, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 412, 0, 0,
};

void unit_000F(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0013C000;
    case 2u: goto L_0013C004;
    case 3u: goto L_0013C014;
    case 4u: goto L_0013C01C;
    case 5u: goto L_0013C084;
    case 6u: goto L_0013C094;
    case 7u: goto L_0013C0AC;
    case 8u: goto L_0013C10C;
    case 9u: goto L_0013C11C;
    case 10u: goto L_0013C134;
    case 11u: goto L_0013C14C;
    case 12u: goto L_0013C180;
    case 13u: goto L_0013C1AC;
    case 14u: goto L_0013C1C0;
    case 15u: goto L_0013C1EC;
    case 16u: goto L_0013C200;
    case 17u: goto L_0013C270;
    case 18u: goto L_0013C280;
    case 19u: goto L_0013C290;
    case 20u: goto L_0013C2A0;
    case 21u: goto L_0013C2B0;
    case 22u: goto L_0013C2C0;
    case 23u: goto L_0013C2D0;
    case 24u: goto L_0013C2E0;
    case 25u: goto L_0013C2F0;
    case 26u: goto L_0013C300;
    case 27u: goto L_0013C310;
    case 28u: goto L_0013C320;
    case 29u: goto L_0013C330;
    case 30u: goto L_0013C370;
    case 31u: goto L_0013C3B0;
    case 32u: goto L_0013C3F0;
    case 33u: goto L_0013C40C;
    case 34u: goto L_0013C414;
    case 35u: goto L_0013C42C;
    case 36u: goto L_0013C450;
    case 37u: goto L_0013C460;
    case 38u: goto L_0013C464;
    case 39u: goto L_0013C488;
    case 40u: goto L_0013C4A0;
    case 41u: goto L_0013C4A8;
    case 42u: goto L_0013C4E0;
    case 43u: goto L_0013C510;
    case 44u: goto L_0013C550;
    case 45u: goto L_0013C568;
    case 46u: goto L_0013C56C;
    case 47u: goto L_0013C57C;
    case 48u: goto L_0013C5A0;
    case 49u: goto L_0013C5C0;
    case 50u: goto L_0013C5E4;
    case 51u: goto L_0013C600;
    case 52u: goto L_0013C610;
    case 53u: goto L_0013C640;
    case 54u: goto L_0013C650;
    case 55u: goto L_0013C65C;
    case 56u: goto L_0013C6A0;
    case 57u: goto L_0013C6B4;
    case 58u: goto L_0013C6D4;
    case 59u: goto L_0013C6F0;
    case 60u: goto L_0013C720;
    case 61u: goto L_0013C738;
    case 62u: goto L_0013C750;
    case 63u: goto L_0013C784;
    case 64u: goto L_0013C798;
    case 65u: goto L_0013C7A4;
    case 66u: goto L_0013C7B8;
    case 67u: goto L_0013C7D4;
    case 68u: goto L_0013C7E8;
    case 69u: goto L_0013C800;
    case 70u: goto L_0013C810;
    case 71u: goto L_0013C82C;
    case 72u: goto L_0013C838;
    case 73u: goto L_0013C840;
    case 74u: goto L_0013C860;
    case 75u: goto L_0013C874;
    case 76u: goto L_0013C8AC;
    case 77u: goto L_0013C8DC;
    case 78u: goto L_0013C8F0;
    case 79u: goto L_0013C91C;
    case 80u: goto L_0013C928;
    case 81u: goto L_0013C940;
    case 82u: goto L_0013C960;
    case 83u: goto L_0013C984;
    case 84u: goto L_0013C9D0;
    case 85u: goto L_0013C9F0;
    case 86u: goto L_0013CA10;
    case 87u: goto L_0013CA3C;
    case 88u: goto L_0013CA44;
    case 89u: goto L_0013CA98;
    case 90u: goto L_0013CB30;
    case 91u: goto L_0013CB64;
    case 92u: goto L_0013CB80;
    case 93u: goto L_0013CC30;
    case 94u: goto L_0013CC4C;
    case 95u: goto L_0013CC54;
    case 96u: goto L_0013CC70;
    case 97u: goto L_0013CCAC;
    case 98u: goto L_0013CCFC;
    case 99u: goto L_0013CD40;
    case 100u: goto L_0013CD80;
    case 101u: goto L_0013CDC0;
    case 102u: goto L_0013CDF0;
    case 103u: goto L_0013CE00;
    case 104u: goto L_0013CE10;
    case 105u: goto L_0013CE18;
    case 106u: goto L_0013CE2C;
    case 107u: goto L_0013CE50;
    case 108u: goto L_0013CE70;
    case 109u: goto L_0013CE78;
    case 110u: goto L_0013CE80;
    case 111u: goto L_0013CE90;
    case 112u: goto L_0013CEB0;
    case 113u: goto L_0013CEC0;
    case 114u: goto L_0013CEFC;
    case 115u: goto L_0013CF04;
    case 116u: goto L_0013CF50;
    case 117u: goto L_0013CF70;
    case 118u: goto L_0013CF90;
    case 119u: goto L_0013D010;
    case 120u: goto L_0013D030;
    case 121u: goto L_0013D050;
    case 122u: goto L_0013D09C;
    case 123u: goto L_0013D0B0;
    case 124u: goto L_0013D0D8;
    case 125u: goto L_0013D0F4;
    case 126u: goto L_0013D10C;
    case 127u: goto L_0013D144;
    case 128u: goto L_0013D158;
    case 129u: goto L_0013D180;
    case 130u: goto L_0013D19C;
    case 131u: goto L_0013D1B4;
    case 132u: goto L_0013D1F0;
    case 133u: goto L_0013D218;
    case 134u: goto L_0013D234;
    case 135u: goto L_0013D248;
    case 136u: goto L_0013D290;
    case 137u: goto L_0013D2B0;
    case 138u: goto L_0013D2E8;
    case 139u: goto L_0013D310;
    case 140u: goto L_0013D32C;
    case 141u: goto L_0013D350;
    case 142u: goto L_0013D370;
    case 143u: goto L_0013D390;
    case 144u: goto L_0013D3C8;
    case 145u: goto L_0013D3F0;
    case 146u: goto L_0013D40C;
    case 147u: goto L_0013D430;
    case 148u: goto L_0013D450;
    case 149u: goto L_0013D460;
    case 150u: goto L_0013D48C;
    case 151u: goto L_0013D498;
    case 152u: goto L_0013D4C0;
    case 153u: goto L_0013D500;
    case 154u: goto L_0013D52C;
    case 155u: goto L_0013D538;
    case 156u: goto L_0013D560;
    case 157u: goto L_0013D5A0;
    case 158u: goto L_0013D5CC;
    case 159u: goto L_0013D5F4;
    case 160u: goto L_0013D620;
    case 161u: goto L_0013D638;
    case 162u: goto L_0013D680;
    case 163u: goto L_0013D6B4;
    case 164u: goto L_0013D6DC;
    case 165u: goto L_0013D6F8;
    case 166u: goto L_0013D70C;
    case 167u: goto L_0013D750;
    case 168u: goto L_0013D7A0;
    case 169u: goto L_0013D7D0;
    case 170u: goto L_0013D7F0;
    case 171u: goto L_0013D81C;
    case 172u: goto L_0013D848;
    case 173u: goto L_0013D870;
    case 174u: goto L_0013D88C;
    case 175u: goto L_0013D8B4;
    case 176u: goto L_0013D8DC;
    case 177u: goto L_0013D8F8;
    case 178u: goto L_0013D91C;
    case 179u: goto L_0013D940;
    case 180u: goto L_0013D980;
    case 181u: goto L_0013D98C;
    case 182u: goto L_0013D9C0;
    case 183u: goto L_0013D9F0;
    case 184u: goto L_0013DA30;
    case 185u: goto L_0013DA3C;
    case 186u: goto L_0013DA70;
    case 187u: goto L_0013DA90;
    case 188u: goto L_0013DAE0;
    case 189u: goto L_0013DB00;
    case 190u: goto L_0013DB30;
    case 191u: goto L_0013DB80;
    case 192u: goto L_0013DBA0;
    case 193u: goto L_0013DBD0;
    case 194u: goto L_0013DBE4;
    case 195u: goto L_0013DC10;
    case 196u: goto L_0013DC20;
    case 197u: goto L_0013DC30;
    case 198u: goto L_0013DC70;
    case 199u: goto L_0013DC80;
    case 200u: goto L_0013DC90;
    case 201u: goto L_0013DCD0;
    case 202u: goto L_0013DCFC;
    case 203u: goto L_0013DD1C;
    case 204u: goto L_0013DD44;
    case 205u: goto L_0013DD6C;
    case 206u: goto L_0013DD88;
    case 207u: goto L_0013DDC0;
    case 208u: goto L_0013DDE0;
    case 209u: goto L_0013DE04;
    case 210u: goto L_0013DE10;
    case 211u: goto L_0013DE30;
    case 212u: goto L_0013DE58;
    case 213u: goto L_0013DE6C;
    case 214u: goto L_0013DE7C;
    case 215u: goto L_0013DE88;
    case 216u: goto L_0013DE90;
    case 217u: goto L_0013DEAC;
    case 218u: goto L_0013DEB8;
    case 219u: goto L_0013DED8;
    case 220u: goto L_0013DF10;
    case 221u: goto L_0013DF44;
    case 222u: goto L_0013DF7C;
    case 223u: goto L_0013DFA8;
    case 224u: goto L_0013DFD0;
    case 225u: goto L_0013E010;
    case 226u: goto L_0013E01C;
    case 227u: goto L_0013E050;
    case 228u: goto L_0013E084;
    case 229u: goto L_0013E08C;
    case 230u: goto L_0013E0B8;
    case 231u: goto L_0013E0D8;
    case 232u: goto L_0013E0F0;
    case 233u: goto L_0013E0F8;
    case 234u: goto L_0013E13C;
    case 235u: goto L_0013E160;
    case 236u: goto L_0013E168;
    case 237u: goto L_0013E1B0;
    case 238u: goto L_0013E1E0;
    case 239u: goto L_0013E20C;
    case 240u: goto L_0013E254;
    case 241u: goto L_0013E290;
    case 242u: goto L_0013E2BC;
    case 243u: goto L_0013E2D0;
    case 244u: goto L_0013E310;
    case 245u: goto L_0013E328;
    case 246u: goto L_0013E340;
    case 247u: goto L_0013E350;
    case 248u: goto L_0013E360;
    case 249u: goto L_0013E370;
    case 250u: goto L_0013E398;
    case 251u: goto L_0013E3AC;
    case 252u: goto L_0013E3C0;
    case 253u: goto L_0013E3F8;
    case 254u: goto L_0013E410;
    case 255u: goto L_0013E430;
    case 256u: goto L_0013E440;
    case 257u: goto L_0013E470;
    case 258u: goto L_0013E490;
    case 259u: goto L_0013E4CC;
    case 260u: goto L_0013E4E4;
    case 261u: goto L_0013E500;
    case 262u: goto L_0013E52C;
    case 263u: goto L_0013E544;
    case 264u: goto L_0013E560;
    case 265u: goto L_0013E598;
    case 266u: goto L_0013E5B0;
    case 267u: goto L_0013E5EC;
    case 268u: goto L_0013E604;
    case 269u: goto L_0013E620;
    case 270u: goto L_0013E64C;
    case 271u: goto L_0013E664;
    case 272u: goto L_0013E680;
    case 273u: goto L_0013E6A8;
    case 274u: goto L_0013E6C4;
    case 275u: goto L_0013E6D4;
    case 276u: goto L_0013E710;
    case 277u: goto L_0013E744;
    case 278u: goto L_0013E7A0;
    case 279u: goto L_0013E7CC;
    case 280u: goto L_0013E800;
    case 281u: goto L_0013E848;
    case 282u: goto L_0013E8EC;
    case 283u: goto L_0013E904;
    case 284u: goto L_0013E920;
    case 285u: goto L_0013E974;
    case 286u: goto L_0013E9A4;
    case 287u: goto L_0013E9C4;
    case 288u: goto L_0013E9DC;
    case 289u: goto L_0013E9FC;
    case 290u: goto L_0013EA0C;
    case 291u: goto L_0013EA44;
    case 292u: goto L_0013EA58;
    case 293u: goto L_0013EA68;
    case 294u: goto L_0013EA80;
    case 295u: goto L_0013EA98;
    case 296u: goto L_0013EABC;
    case 297u: goto L_0013EADC;
    case 298u: goto L_0013EAF8;
    case 299u: goto L_0013EB10;
    case 300u: goto L_0013EB44;
    case 301u: goto L_0013EBC0;
    case 302u: goto L_0013EBD4;
    case 303u: goto L_0013EBF0;
    case 304u: goto L_0013EC24;
    case 305u: goto L_0013EC34;
    case 306u: goto L_0013EC60;
    case 307u: goto L_0013EC90;
    case 308u: goto L_0013ECA0;
    case 309u: goto L_0013ECC8;
    case 310u: goto L_0013ED98;
    case 311u: goto L_0013EF90;
    case 312u: goto L_0013EFB0;
    case 313u: goto L_0013F000;
    case 314u: goto L_0013F0C0;
    case 315u: goto L_0013F0D0;
    case 316u: goto L_0013F0E0;
    case 317u: goto L_0013F0F0;
    case 318u: goto L_0013F100;
    case 319u: goto L_0013F110;
    case 320u: goto L_0013F1E0;
    case 321u: goto L_0013F200;
    case 322u: goto L_0013F210;
    case 323u: goto L_0013F220;
    case 324u: goto L_0013F24C;
    case 325u: goto L_0013F270;
    case 326u: goto L_0013F2F8;
    case 327u: goto L_0013F324;
    case 328u: goto L_0013F368;
    case 329u: goto L_0013F394;
    case 330u: goto L_0013F3B4;
    case 331u: goto L_0013F3D8;
    case 332u: goto L_0013F43C;
    case 333u: goto L_0013F44C;
    case 334u: goto L_0013F47C;
    case 335u: goto L_0013F520;
    case 336u: goto L_0013F580;
    case 337u: goto L_0013F5C0;
    case 338u: goto L_0013F5D0;
    case 339u: goto L_0013F600;
    case 340u: goto L_0013F61C;
    case 341u: goto L_0013F630;
    case 342u: goto L_0013F650;
    case 343u: goto L_0013F67C;
    case 344u: goto L_0013F688;
    case 345u: goto L_0013F6A0;
    case 346u: goto L_0013F6C0;
    case 347u: goto L_0013F6EC;
    case 348u: goto L_0013F72C;
    case 349u: goto L_0013F744;
    case 350u: goto L_0013F75C;
    case 351u: goto L_0013F780;
    case 352u: goto L_0013F790;
    case 353u: goto L_0013F7AC;
    case 354u: goto L_0013F7B0;
    case 355u: goto L_0013F7B8;
    case 356u: goto L_0013F7E4;
    case 357u: goto L_0013F800;
    case 358u: goto L_0013F808;
    case 359u: goto L_0013F834;
    case 360u: goto L_0013F850;
    case 361u: goto L_0013F890;
    case 362u: goto L_0013F8E4;
    case 363u: goto L_0013F8F4;
    case 364u: goto L_0013F910;
    case 365u: goto L_0013F928;
    case 366u: goto L_0013F970;
    case 367u: goto L_0013F994;
    case 368u: goto L_0013F99C;
    case 369u: goto L_0013F9D0;
    case 370u: goto L_0013FA04;
    case 371u: goto L_0013FA2C;
    case 372u: goto L_0013FA64;
    case 373u: goto L_0013FA90;
    case 374u: goto L_0013FAA0;
    case 375u: goto L_0013FAA8;
    case 376u: goto L_0013FAD0;
    case 377u: goto L_0013FB04;
    case 378u: goto L_0013FB20;
    case 379u: goto L_0013FB28;
    case 380u: goto L_0013FB70;
    case 381u: goto L_0013FB80;
    case 382u: goto L_0013FB84;
    case 383u: goto L_0013FB90;
    case 384u: goto L_0013FBA8;
    case 385u: goto L_0013FBC0;
    case 386u: goto L_0013FC00;
    case 387u: goto L_0013FC28;
    case 388u: goto L_0013FC38;
    case 389u: goto L_0013FC50;
    case 390u: goto L_0013FC64;
    case 391u: goto L_0013FC7C;
    case 392u: goto L_0013FCC0;
    case 393u: goto L_0013FCE0;
    case 394u: goto L_0013FCEC;
    case 395u: goto L_0013FD68;
    case 396u: goto L_0013FDAC;
    case 397u: goto L_0013FDC4;
    case 398u: goto L_0013FE00;
    case 399u: goto L_0013FE14;
    case 400u: goto L_0013FE40;
    case 401u: goto L_0013FE5C;
    case 402u: goto L_0013FE90;
    case 403u: goto L_0013FEE4;
    case 404u: goto L_0013FF04;
    case 405u: goto L_0013FF2C;
    case 406u: goto L_0013FF3C;
    case 407u: goto L_0013FF50;
    case 408u: goto L_0013FF78;
    case 409u: goto L_0013FFB4;
    case 410u: goto L_0013FFC4;
    case 411u: goto L_0013FFDC;
    case 412u: goto L_0013FFF4;
    default: bad_entry(c, 0x0013C000u); return;
    }
L_0013C000:
    st32((c.r[19].w[0] + 356u), 0u);
    c.budget -= 1;
L_0013C004:
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C014u); set32(c.r[4], ld32((c.r[2].w[0] + 96u)));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x0013C014u) [[unlikely]] return; }
L_0013C014:
    st32((c.r[19].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 356u), 0u);
    c.budget -= 2;
L_0013C01C:
    set32(c.r[2], ld32((c.r[20].w[0] + 488u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_0013C124; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[16], ld32((c.r[4].w[0] + 444u)));
    st32((c.r[16].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 448u)));
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 452u)));
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 456u)));
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.f[12] = ld32((c.r[20].w[0] + 396u));
    c.f[13] = ld32((c.r[20].w[0] + 400u));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 23;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C084u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013C084u) [[unlikely]] return; }
L_0013C084:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[18].d[0]; set32(c.r[2], c.r[17].w[0] << 2);  if (t) { goto L_0013C0A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C094u); set32(c.r[4], 0u + 102u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x0013C094u) [[unlikely]] return; }
L_0013C094:
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 356u), 0u);  if (t) { goto L_0013C0B4; } }
L_0013C0A0:
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C0ACu); set32(c.r[4], ld32((c.r[2].w[0] + 96u)));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x0013C0ACu) [[unlikely]] return; }
L_0013C0AC:
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 356u), 0u);
    c.budget -= 2;
L_0013C0B4:
    set32(c.r[2], ld32((c.r[20].w[0] + 480u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013C0F4; } }
    c.f[0] = ld32((c.r[20].w[0] + 360u));
    set32(c.r[4], ld32((c.r[20].w[0] + 460u)));
    set32(c.r[2], 0u + 255u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[4].w[0] - c.r[2].w[0]);
    c.budget -= 10;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0013C0EC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0013C0EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 60u), c.r[2].w[0]);  if (t) { goto L_0013C0FC; } }
L_0013C0F4:
    set32(c.r[2], ld32((c.r[20].w[0] + 460u)));
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 2;
L_0013C0FC:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C10Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013C10Cu) [[unlikely]] return; }
L_0013C10C:
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C11Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013C11Cu) [[unlikely]] return; }
L_0013C11C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[20].w[0] + 400u));  if (t) { goto L_0013C138; } }
L_0013C124:
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C134u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013C134u) [[unlikely]] return; }
L_0013C134:
    c.f[1] = ld32((c.r[20].w[0] + 400u));
    c.budget -= 1;
L_0013C138:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A80000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[20].w[0] + 400u), c.f[0]);
    c.budget -= 5;
L_0013C14C:
    set32(c.r[3], ld32((c.r[20].w[0] + 312u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013BF84u | kUnwind; return; } [[clang::musttail]] return unit_000E(c, 475u, depth); } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0013C180:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 3856u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[5], c.r[29].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 348u);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C1ACu); st64((c.r[5].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x0013C1ACu) [[unlikely]] return; }
L_0013C1AC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0013C1C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 3824u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[5], c.r[29].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 348u);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C1ECu); st64((c.r[5].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x0013C1ECu) [[unlikely]] return; }
L_0013C1EC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0013C200:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 472u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013C238; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 476u)));
    set32(c.r[3], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0] + 476u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 464u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0013C268; } }
    st32((c.r[4].w[0] + 476u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 472u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0013C268; } }
L_0013C238:
    set32(c.r[2], ld32((c.r[4].w[0] + 476u)));
    set32(c.r[5], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0] + 476u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 468u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 464u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0013C268; } }
    st32((c.r[4].w[0] + 476u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] + 472u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0013C268:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] + 416u);  [[clang::musttail]] return unit_002A(c, 280u, depth); }
L_0013C270:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00139E90u | kUnwind; return; } [[clang::musttail]] return unit_000E(c, 267u, depth); }
L_0013C280:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00139E70u | kUnwind; return; } [[clang::musttail]] return unit_000E(c, 266u, depth); }
L_0013C290:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00139E20u | kUnwind; return; } [[clang::musttail]] return unit_000E(c, 265u, depth); }
L_0013C2A0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00139640u | kUnwind; return; } [[clang::musttail]] return unit_000E(c, 198u, depth); }
L_0013C2B0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 12u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0013ADC0u | kUnwind; return; } [[clang::musttail]] return unit_000E(c, 353u, depth); }
L_0013C2C0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 12u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0013A4C0u | kUnwind; return; } [[clang::musttail]] return unit_000E(c, 307u, depth); }
L_0013C2D0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0013BAA0u | kUnwind; return; } [[clang::musttail]] return unit_000E(c, 440u, depth); }
L_0013C2E0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0013BA90u | kUnwind; return; } [[clang::musttail]] return unit_000E(c, 439u, depth); }
L_0013C2F0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0013BA70u | kUnwind; return; } [[clang::musttail]] return unit_000E(c, 438u, depth); }
L_0013C300:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0013B5E0u | kUnwind; return; } [[clang::musttail]] return unit_000E(c, 405u, depth); }
L_0013C310:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 12u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0013C200u | kUnwind; return; } goto L_0013C200; }
L_0013C320:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 12u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0013BDE0u | kUnwind; return; } [[clang::musttail]] return unit_000E(c, 468u, depth); }
L_0013C330:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 18848u);
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != 0ull; st32((c.r[4].w[0]), 0u);  if (t) { goto L_0013C350; } }
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_0013C350:
    st32((c.r[4].w[0] + 16u), c.r[5].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st8((c.r[4].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0013C364; } }
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0013C364:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_0013C370:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 18848u);
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != 0ull; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { goto L_0013C390; } }
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_0013C390:
    st32((c.r[4].w[0] + 16u), c.r[6].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st8((c.r[4].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0013C3A4; } }
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0013C3A4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_0013C3B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0013C42C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 18848u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_0013C414; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013C3F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C3F0u);  if (depth < kMaxDepth) unit_000F(c, 43u, depth + 1u); else { c.pc = 0x0013C510u; return; } if (c.pc != 0x0013C3F0u) [[unlikely]] return; }
L_0013C3F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] << 48;  if (t) { goto L_0013C418; } }
L_0013C3F8:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 20u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013C40C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C40Cu);  if (depth < kMaxDepth) unit_000F(c, 36u, depth + 1u); else { c.pc = 0x0013C450u; return; } if (c.pc != 0x0013C40Cu) [[unlikely]] return; }
L_0013C40C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C414u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 43u, depth + 1u); else { c.pc = 0x0013C510u; return; } if (c.pc != 0x0013C414u) [[unlikely]] return; }
L_0013C414:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0013C418:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0013C430; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C42Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0013C42Cu) [[unlikely]] return; }
L_0013C42C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0013C430:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0013C450:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 4;
L_0013C460:
    c.budget -= 1;
L_0013C464:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0013C490; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], ld32((c.r[16].w[0] + 12u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013C460u | kUnwind; return; } goto L_0013C460; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C488u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013C488u) [[unlikely]] return; }
L_0013C488:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013C464u | kUnwind; return; } goto L_0013C464; } }
L_0013C490:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0013C4A0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013C4D4; } }
L_0013C4A8:
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0013C4CC; } }
    st32((c.r[4].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 8u), c.r[4].w[0]);  if (t) { goto L_0013C4D4; } }
L_0013C4CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013C4A8u | kUnwind; return; } goto L_0013C4A8; } }
L_0013C4D4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013C4E0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013C500; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    st32((c.r[4].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[5].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[5].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_0013C500; } }
    st32((c.r[3].w[0] + 8u), c.r[5].w[0]);
    c.budget -= 1;
L_0013C500:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013C510:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013C544; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0013C52C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    st32((c.r[5].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 2;
L_0013C52C:
    set32(c.r[5], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0013C544; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    st32((c.r[5].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 12u), 0u);
    c.budget -= 3;
L_0013C544:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013C550:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0013C584; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C568u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0013C600u; return; } if (c.pc != 0x0013C568u) [[unlikely]] return; }
L_0013C568:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0013C56C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0013C584; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C57Cu); set32(c.r[16], ld32((c.r[16].w[0] + 12u)));  if (depth < kMaxDepth) unit_000F(c, 43u, depth + 1u); else { c.pc = 0x0013C510u; return; } if (c.pc != 0x0013C57Cu) [[unlikely]] return; }
L_0013C57C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013C56Cu | kUnwind; return; } goto L_0013C56C; } }
L_0013C584:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0013C5A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0013C5EC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0013C5EC; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_0013C5C0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013C5EC; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], ld32((c.r[4].w[0] + 12u)));  if (t) { goto L_0013C5E4; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C5E4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013C5E4u) [[unlikely]] return; }
L_0013C5E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013C5C0u | kUnwind; return; } goto L_0013C5C0; } }
L_0013C5EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0013C600:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0013C610; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013C630; } }
L_0013C610:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013C628; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0013C630; } }
L_0013C628:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013C610u | kUnwind; return; } goto L_0013C610; } }
L_0013C630:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013C640:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0013C650; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0013C690; } }
L_0013C650:
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013C684; } }
L_0013C65C:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0013C670; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013C690; } }
L_0013C670:
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013C65Cu | kUnwind; return; } goto L_0013C65C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013C690; } }
L_0013C684:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013C650u | kUnwind; return; } goto L_0013C650; } }
L_0013C690:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013C6A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C6B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 39u, depth + 1u); else { c.pc = 0x001486F0u; return; } if (c.pc != 0x0013C6B4u) [[unlikely]] return; }
L_0013C6B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 18800u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 13376u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C6D4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 45u, depth + 1u); else { c.pc = 0x001487B0u; return; } if (c.pc != 0x0013C6D4u) [[unlikely]] return; }
L_0013C6D4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0013C6F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0013C738; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 18800u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C720u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 42u, depth + 1u); else { c.pc = 0x00148750u; return; } if (c.pc != 0x0013C720u) [[unlikely]] return; }
L_0013C720:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0013C73C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C738u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0013C738u) [[unlikely]] return; }
L_0013C738:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0013C73C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0013C750:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C784u); st32((c.r[29].w[0] + 76u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0013C784u) [[unlikely]] return; }
L_0013C784:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C798u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 125u, depth + 1u); else { c.pc = 0x0015D850u; return; } if (c.pc != 0x0013C798u) [[unlikely]] return; }
L_0013C798:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C7A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0013C7A4u) [[unlikely]] return; }
L_0013C7A4:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 64u);  if (t) { goto L_0013C7C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C7B8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 152u, depth + 1u); else { c.pc = 0x0015DC50u; return; } if (c.pc != 0x0013C7B8u) [[unlikely]] return; }
L_0013C7B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0013C7C8; } }
L_0013C7C0:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_0013C7C8:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C7D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0013C7D4u) [[unlikely]] return; }
L_0013C7D4:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 64u);  if (t) { goto L_0013C7F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C7E8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 143u, depth + 1u); else { c.pc = 0x0015DAE0u; return; } if (c.pc != 0x0013C7E8u) [[unlikely]] return; }
L_0013C7E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0013C7F8; } }
L_0013C7F0:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_0013C7F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C800u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 82u, depth + 1u); else { c.pc = 0x0013C960u; return; } if (c.pc != 0x0013C800u) [[unlikely]] return; }
L_0013C800:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0013C810; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C810u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0013C810u) [[unlikely]] return; }
L_0013C810:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 64u);  if (t) { goto L_0013C830; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C82Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013C82Cu) [[unlikely]] return; }
L_0013C82C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 1;
L_0013C830:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C838u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x0013C838u) [[unlikely]] return; }
L_0013C838:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C840u); set32(c.r[4], ld32((c.r[29].w[0] + 76u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0013C840u) [[unlikely]] return; }
L_0013C840:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0013C860:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C874u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 241u, depth + 1u); else { c.pc = 0x0013E290u; return; } if (c.pc != 0x0013C874u) [[unlikely]] return; }
L_0013C874:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], c.r[2].w[0] - 18832u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[1].w[0] - 7760u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[1].w[0] - 7752u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[1].w[0] - 7744u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st8((c.r[1].w[0] - 7968u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[3], c.r[3].w[0] - 7960u);
    c.budget -= 14;
L_0013C8AC:
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013C8ACu | kUnwind; return; } goto L_0013C8AC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 7952u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C8DCu); set32(c.r[6], 0u + 192u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0013C8DCu) [[unlikely]] return; }
L_0013C8DC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0013C8F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0013C940; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 18832u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C91Cu); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 84u, depth + 1u); else { c.pc = 0x0013C9D0u; return; } if (c.pc != 0x0013C91Cu) [[unlikely]] return; }
L_0013C91C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C928u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 243u, depth + 1u); else { c.pc = 0x0013E2D0u; return; } if (c.pc != 0x0013C928u) [[unlikely]] return; }
L_0013C928:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0013C944; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C940u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0013C940u) [[unlikely]] return; }
L_0013C940:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0013C944:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0013C960:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[9].d[0] = 0ull + 0ull;
    st8((c.r[1].w[0] - 7968u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[1].w[0] - 7760u), 0u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[7], c.r[7].w[0] - 7952u);
    set32(c.r[6], c.r[6].w[0] - 7960u);
    c.budget -= 9;
L_0013C984:
    set32(c.r[2], c.r[9].w[0] << 1);
    set32(c.r[3], c.r[6].w[0] + c.r[9].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[9].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[8], c.r[7].w[0] + c.r[2].w[0]);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[9].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[8].w[0] + 12u), 0u);
    st32((c.r[8].w[0] + 8u), 0u);
    st32((c.r[8].w[0] + 4u), 0u);
    st32((c.r[8].w[0] + 16u), 0u);
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013C984u | kUnwind; return; } goto L_0013C984; } }
    c.budget -= 2;
    {  goto L_0013CC30; }
L_0013C9D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[1].w[0] - 7760u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013C9F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C9F0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0013C9F0u) [[unlikely]] return; }
L_0013C9F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[1].w[0] - 7760u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st8((c.r[1].w[0] - 7968u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0013CA10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 1480u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0013CB10; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[17].w[0] - 7952u);
    c.budget -= 3;
L_0013CA3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CA44u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 99u, depth + 1u); else { c.pc = 0x0013CD40u; return; } if (c.pc != 0x0013CA44u) [[unlikely]] return; }
L_0013CA44:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0013CB00; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0013CB00; } }
    c.r[3].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0013CAFC; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.r[1].d[0] = c.r[3].sd[0] < 3600ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0013CA98; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = ld8((c.r[2].w[0]));
    c.r[6].d[0] = ld8((c.r[2].w[0] + 1u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CA98u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 386u, depth + 1u); else { c.pc = 0x0013FC00u; return; } if (c.pc != 0x0013CA98u) [[unlikely]] return; }
L_0013CA98:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 6u)));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0013CACC; } }
    st32((c.r[17].w[0] + 4u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_0013CACC:
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2u)));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0013CAEC; } }
    st32((c.r[17].w[0] + 8u), 0u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0013CAEC:
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_0013CB00; } }
L_0013CAFC:
    st32((c.r[17].w[0] + 12u), 0u);
    c.budget -= 1;
L_0013CB00:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 24u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013CA3Cu | kUnwind; return; } goto L_0013CA3C; } }
L_0013CB10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0013CB30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[1].w[0] - 7968u));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0013CB5C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0013CC18; } }
L_0013CB5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CB64u);  if (depth < kMaxDepth) unit_000F(c, 99u, depth + 1u); else { c.pc = 0x0013CD40u; return; } if (c.pc != 0x0013CB64u) [[unlikely]] return; }
L_0013CB64:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0013CB78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0013CC18; } }
L_0013CB78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CB80u);  if (depth < kMaxDepth) unit_000F(c, 100u, depth + 1u); else { c.pc = 0x0013CD80u; return; } if (c.pc != 0x0013CB80u) [[unlikely]] return; }
L_0013CB80:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013CB94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0013CC18; } }
L_0013CB94:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0013CBAC; } }
    c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 1);  if (t) { goto L_0013CBB4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0013CBAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0013CC1C; } }
L_0013CBB4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] - 7952u);
    set32(c.r[4], c.r[2].w[0] << 3);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[17].w[0] << 4);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    set32(c.r[3], ld32((c.r[1].w[0] - 7744u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] - 7744u)));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[1].w[0] - 7744u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 25;
L_0013CC18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0013CC1C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0013CC30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CC4Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 84u, depth + 1u); else { c.pc = 0x0013C9D0u; return; } if (c.pc != 0x0013CC4Cu) [[unlikely]] return; }
L_0013CC4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CC54u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0013CC54u) [[unlikely]] return; }
L_0013CC54:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[1].w[0] - 7760u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 7760u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CC70u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x0013CC70u) [[unlikely]] return; }
L_0013CC70:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[1].w[0] - 7760u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[3], c.r[4].w[0] + 16u);
    st32((c.r[1].w[0] - 7752u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[1].w[0] - 7744u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 7752u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[3], c.r[7].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + 16u);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[4].w[0] + c.r[3].w[0]);  if (t) { goto L_0013CCD8; } }
L_0013CCAC:
    set32(c.r[4], c.r[5].w[0] << 4);
    set32(c.r[3], ld32((c.r[1].w[0] - 7744u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[3].w[0] + 12u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] - 7744u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 6u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    c.budget -= 11;
L_0013CCD8:
    c.r[3].d[0] = c.r[5].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013CCACu | kUnwind; return; } goto L_0013CCAC; } }
    c.r[9].d[0] = 0ull + 0ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[8], 0u + 1u);
    set32(c.r[7], c.r[7].w[0] - 7952u);
    set32(c.r[5], c.r[5].w[0] - 7960u);
    c.budget -= 6;
L_0013CCFC:
    set32(c.r[3], c.r[9].w[0] << 1);
    set32(c.r[4], c.r[5].w[0] + c.r[9].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[6], c.r[7].w[0] + c.r[3].w[0]);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[3].d[0] = c.r[9].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013CCFCu | kUnwind; return; } goto L_0013CCFC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st8((c.r[1].w[0] - 7968u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0013CD40:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 1456u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013CD60; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0013CD60; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_0013CD60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], c.r[2].w[0] - 7960u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld8((c.r[2].w[0]));  c.pc = t; return; }
L_0013CD80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[1].w[0] - 1456u));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0013CDB8; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0013CDB8; } }
    c.r[17].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_0013CDB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CDC0u);  if (depth < kMaxDepth) unit_000F(c, 389u, depth + 1u); else { c.pc = 0x0013FC50u; return; } if (c.pc != 0x0013CDC0u) [[unlikely]] return; }
L_0013CDC0:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013CDD0; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0013CDD0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0013CDF0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0013CA10u | kUnwind; return; } goto L_0013CA10; }
L_0013CE00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CE10u);  if (depth < kMaxDepth) unit_000F(c, 107u, depth + 1u); else { c.pc = 0x0013CE50u; return; } if (c.pc != 0x0013CE10u) [[unlikely]] return; }
L_0013CE10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CE18u); set32(c.r[4], 0u + 104u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0013CE18u) [[unlikely]] return; }
L_0013CE18:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013CE30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CE2Cu);  if (depth < kMaxDepth) unit_000F(c, 162u, depth + 1u); else { c.pc = 0x0013D680u; return; } if (c.pc != 0x0013CE2Cu) [[unlikely]] return; }
L_0013CE2C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0013CE30:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[1].w[0] - 7736u), c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0013CE50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[1].w[0] - 7736u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0013CE98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CE70u);  if (depth < kMaxDepth) unit_000F(c, 149u, depth + 1u); else { c.pc = 0x0013D460u; return; } if (c.pc != 0x0013CE70u) [[unlikely]] return; }
L_0013CE70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CE78u);  if (depth < kMaxDepth) unit_000F(c, 153u, depth + 1u); else { c.pc = 0x0013D500u; return; } if (c.pc != 0x0013CE78u) [[unlikely]] return; }
L_0013CE78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CE80u);  if (depth < kMaxDepth) unit_000F(c, 157u, depth + 1u); else { c.pc = 0x0013D5A0u; return; } if (c.pc != 0x0013CE80u) [[unlikely]] return; }
L_0013CE80:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 7736u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CE90u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_000F(c, 168u, depth + 1u); else { c.pc = 0x0013D7A0u; return; } if (c.pc != 0x0013CE90u) [[unlikely]] return; }
L_0013CE90:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[1].w[0] - 7736u), 0u);
    c.budget -= 2;
L_0013CE98:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0013CEB0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 3;
    { set32(c.r[4], ld32((c.r[1].w[0] - 7736u)));  goto L_0013DCD0; }
L_0013CEC0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CEFCu); c.r[16].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 149u, depth + 1u); else { c.pc = 0x0013D460u; return; } if (c.pc != 0x0013CEFCu) [[unlikely]] return; }
L_0013CEFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CF04u);  if (depth < kMaxDepth) unit_000F(c, 153u, depth + 1u); else { c.pc = 0x0013D500u; return; } if (c.pc != 0x0013CF04u) [[unlikely]] return; }
L_0013CF04:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], 0u + 12u);
    set32(c.r[3], ld32((c.r[1].w[0] - 7736u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[18], c.r[3].w[0] + 24u);
    set32(c.r[3], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_0013CF2C; } }
    breakpoint(c, 0x0013CF28u);
    c.budget -= 1;
L_0013CF2C:
    c.r[2].d[0] = c.lo.d[0];
    c.r[1].d[0] = c.r[2].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0013CFAC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], c.r[19].w[0] << 1);  if (t) { goto L_0013CF60; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00140000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CF50u); set32(c.r[5], c.r[5].w[0] - 11376u);  if (depth < kMaxDepth) unit_0000(c, 82u, depth + 1u); else { c.pc = 0x00100680u; return; } if (c.pc != 0x0013CF50u) [[unlikely]] return; }
L_0013CF50:
    st32((c.r[18].w[0] + 8u), 0u);
    st32((c.r[18].w[0] + 4u), 0u);
    st32((c.r[18].w[0]), 0u);
    set32(c.r[2], c.r[19].w[0] << 1);
    c.budget -= 4;
L_0013CF60:
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CF70u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0013CF70u) [[unlikely]] return; }
L_0013CF70:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00140000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00140000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 11408u);
    set32(c.r[6], c.r[6].w[0] - 11376u);
    set32(c.r[7], 0u + 12u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CF90u); c.r[8].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 94u, depth + 1u); else { c.pc = 0x001008C0u; return; } if (c.pc != 0x0013CF90u) [[unlikely]] return; }
L_0013CF90:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[2], c.r[19].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 7;
L_0013CFAC:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[19].w[0] << 1);
    set32(c.r[4], c.r[2].w[0] + c.r[19].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], 0u + 12u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[18].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] - 7736u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 36u)));
    set32(c.r[19], c.r[3].w[0] + 36u);
    set32(c.r[3], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_0013CFEC; } }
    breakpoint(c, 0x0013CFE8u);
    c.budget -= 1;
L_0013CFEC:
    c.r[2].d[0] = c.lo.d[0];
    c.r[1].d[0] = c.r[2].d[0] < c.r[21].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[21].w[0] << 1);  if (t) { goto L_0013D070; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], c.r[21].w[0] << 1);  if (t) { goto L_0013D020; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00140000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D010u); set32(c.r[5], c.r[5].w[0] - 11600u);  if (depth < kMaxDepth) unit_0000(c, 82u, depth + 1u); else { c.pc = 0x00100680u; return; } if (c.pc != 0x0013D010u) [[unlikely]] return; }
L_0013D010:
    st32((c.r[19].w[0] + 8u), 0u);
    st32((c.r[19].w[0] + 4u), 0u);
    st32((c.r[19].w[0]), 0u);
    set32(c.r[2], c.r[21].w[0] << 1);
    c.budget -= 4;
L_0013D020:
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D030u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0013D030u) [[unlikely]] return; }
L_0013D030:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00140000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00140000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 11632u);
    set32(c.r[6], c.r[6].w[0] - 11600u);
    set32(c.r[7], 0u + 12u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D050u); c.r[8].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 94u, depth + 1u); else { c.pc = 0x001008C0u; return; } if (c.pc != 0x0013D050u) [[unlikely]] return; }
L_0013D050:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[2], c.r[21].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], c.r[21].w[0] << 1);
    c.budget -= 8;
L_0013D070:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[3], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] - 7736u)));
    set32(c.r[22], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[21], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[20].w[0] << 2);  if (t) { goto L_0013D128; } }
L_0013D09C:
    set32(c.r[20], ld32((c.r[22].w[0])));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0013D104; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], ld32((c.r[22].w[0] + 8u)));  if (t) { goto L_0013D0DC; } }
L_0013D0B0:
    set32(c.r[4], ld32((c.r[20].w[0])));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0013D0D8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013D0D8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D0D8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013D0D8u) [[unlikely]] return; }
L_0013D0D8:
    set32(c.r[20], c.r[20].w[0] + 4u);
    c.budget -= 1;
L_0013D0DC:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[19].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013D0B0u | kUnwind; return; } goto L_0013D0B0; } }
    set32(c.r[2], ld32((c.r[22].w[0])));
    st32((c.r[22].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D0F4u); set32(c.r[4], ld32((c.r[22].w[0])));  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0013D0F4u) [[unlikely]] return; }
L_0013D0F4:
    st32((c.r[22].w[0] + 8u), 0u);
    st32((c.r[22].w[0] + 4u), 0u);
    st32((c.r[22].w[0]), 0u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
L_0013D104:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D10Cu);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0013D10Cu) [[unlikely]] return; }
L_0013D10C:
    st32((c.r[22].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[22].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st32((c.r[22].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[22].w[0])));
    st32((c.r[22].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[22], c.r[22].w[0] + 12u);
    c.budget -= 7;
L_0013D128:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != c.r[21].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013D09Cu | kUnwind; return; } goto L_0013D09C; } }
    set32(c.r[2], ld32((c.r[1].w[0] - 7736u)));
    set32(c.r[19], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[18], ld32((c.r[2].w[0] + 44u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] << 2);  if (t) { goto L_0013D1D0; } }
L_0013D144:
    set32(c.r[21], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0013D1AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], ld32((c.r[19].w[0] + 8u)));  if (t) { goto L_0013D184; } }
L_0013D158:
    set32(c.r[4], ld32((c.r[21].w[0])));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0013D180; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013D180; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D180u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013D180u) [[unlikely]] return; }
L_0013D180:
    set32(c.r[21], c.r[21].w[0] + 4u);
    c.budget -= 1;
L_0013D184:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != c.r[20].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013D158u | kUnwind; return; } goto L_0013D158; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D19Cu); set32(c.r[4], ld32((c.r[19].w[0])));  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0013D19Cu) [[unlikely]] return; }
L_0013D19C:
    st32((c.r[19].w[0] + 8u), 0u);
    st32((c.r[19].w[0] + 4u), 0u);
    st32((c.r[19].w[0]), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
L_0013D1AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D1B4u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0013D1B4u) [[unlikely]] return; }
L_0013D1B4:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + 12u);
    c.budget -= 7;
L_0013D1D0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[18].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013D144u | kUnwind; return; } goto L_0013D144; } }
    set32(c.r[2], ld32((c.r[1].w[0] - 7736u)));
    set32(c.r[19], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[17], c.r[2].w[0] + 12u);  if (t) { goto L_0013D240; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[17].w[0] + 8u)));  if (t) { goto L_0013D21C; } }
L_0013D1F0:
    set32(c.r[4], ld32((c.r[19].w[0])));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0013D218; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013D218; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D218u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013D218u) [[unlikely]] return; }
L_0013D218:
    set32(c.r[19], c.r[19].w[0] + 4u);
    c.budget -= 1;
L_0013D21C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[18].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013D1F0u | kUnwind; return; } goto L_0013D1F0; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D234u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0013D234u) [[unlikely]] return; }
L_0013D234:
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 4u), 0u);
    st32((c.r[17].w[0]), 0u);
    c.budget -= 3;
L_0013D240:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D248u); set32(c.r[4], c.r[16].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0013D248u) [[unlikely]] return; }
L_0013D248:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0])));
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0013D290:
    st32((c.r[4].w[0]), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), 0u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), 0u);  c.pc = t; return; }
L_0013D2B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[19].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0013D350; } }
    set32(c.r[17], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; c.r[2].d[0] = c.r[18].d[0] << 48;  if (t) { goto L_0013D33C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[19].w[0] + 8u)));  if (t) { goto L_0013D314; } }
L_0013D2E8:
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0013D310; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013D310; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D310u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013D310u) [[unlikely]] return; }
L_0013D310:
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_0013D314:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013D2E8u | kUnwind; return; } goto L_0013D2E8; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D32Cu); set32(c.r[4], ld32((c.r[19].w[0])));  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0013D32Cu) [[unlikely]] return; }
L_0013D32C:
    st32((c.r[19].w[0] + 8u), 0u);
    st32((c.r[19].w[0] + 4u), 0u);
    st32((c.r[19].w[0]), 0u);
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.budget -= 4;
L_0013D33C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0013D354; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D350u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0013D350u) [[unlikely]] return; }
L_0013D350:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0013D354:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0013D370:
    st32((c.r[4].w[0]), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), 0u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), 0u);  c.pc = t; return; }
L_0013D390:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[19].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0013D430; } }
    set32(c.r[17], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; c.r[2].d[0] = c.r[18].d[0] << 48;  if (t) { goto L_0013D41C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[19].w[0] + 8u)));  if (t) { goto L_0013D3F4; } }
L_0013D3C8:
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0013D3F0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013D3F0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D3F0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013D3F0u) [[unlikely]] return; }
L_0013D3F0:
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_0013D3F4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013D3C8u | kUnwind; return; } goto L_0013D3C8; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D40Cu); set32(c.r[4], ld32((c.r[19].w[0])));  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0013D40Cu) [[unlikely]] return; }
L_0013D40C:
    st32((c.r[19].w[0] + 8u), 0u);
    st32((c.r[19].w[0] + 4u), 0u);
    st32((c.r[19].w[0]), 0u);
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.budget -= 4;
L_0013D41C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0013D434; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D430u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0013D430u) [[unlikely]] return; }
L_0013D430:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0013D434:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0013D450:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 7736u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 57u), static_cast<std::uint8_t>(c.r[4].w[0]));  c.pc = t; return; }
L_0013D460:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[1].w[0] - 7736u)));
    set32(c.r[18], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[19], ld32((c.r[3].w[0] + 24u)));  if (t) { goto L_0013D4D8; } }
L_0013D48C:
    set32(c.r[16], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[19].w[0])));  if (t) { goto L_0013D4C4; } }
L_0013D498:
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0013D4C0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013D4C0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D4C0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013D4C0u) [[unlikely]] return; }
L_0013D4C0:
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_0013D4C4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013D498u | kUnwind; return; } goto L_0013D498; } }
    set32(c.r[3], ld32((c.r[19].w[0])));
    st32((c.r[19].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[19], c.r[19].w[0] + 12u);
    c.budget -= 3;
L_0013D4D8:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[18].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013D48Cu | kUnwind; return; } goto L_0013D48C; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0013D500:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[1].w[0] - 7736u)));
    set32(c.r[18], ld32((c.r[3].w[0] + 44u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[19], ld32((c.r[3].w[0] + 36u)));  if (t) { goto L_0013D578; } }
L_0013D52C:
    set32(c.r[16], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[19].w[0])));  if (t) { goto L_0013D564; } }
L_0013D538:
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0013D560; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013D560; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D560u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013D560u) [[unlikely]] return; }
L_0013D560:
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_0013D564:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013D538u | kUnwind; return; } goto L_0013D538; } }
    set32(c.r[3], ld32((c.r[19].w[0])));
    st32((c.r[19].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[19], c.r[19].w[0] + 12u);
    c.budget -= 3;
L_0013D578:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[18].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013D52Cu | kUnwind; return; } goto L_0013D52C; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0013D5A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[1].w[0] - 7736u)));
    set32(c.r[17], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[16], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[3].w[0] + 12u);  if (t) { goto L_0013D5F8; } }
L_0013D5CC:
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0013D5F4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013D5F4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D5F4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013D5F4u) [[unlikely]] return; }
L_0013D5F4:
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_0013D5F8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013D5CCu | kUnwind; return; } goto L_0013D5CC; } }
    set32(c.r[3], ld32((c.r[18].w[0])));
    st32((c.r[18].w[0] + 8u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0013D620:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 7736u)));
    set32(c.r[7], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u - 1u);  if (t) { goto L_0013D658; } }
L_0013D638:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_0013D654; } }
    c.r[3].d[0] = ld64((c.r[2].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0013D654; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013D678; } }
L_0013D654:
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.budget -= 1;
L_0013D658:
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0013D674; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[6].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013D638u | kUnwind; return; } goto L_0013D638; } }
L_0013D674:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0013D678:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013D680:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[18], ld32((c.r[4].w[0])));
    c.budget -= 11;
    { const bool t = c.r[18].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0013D704; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[16].w[0] + 8u)));  if (t) { goto L_0013D6E0; } }
L_0013D6B4:
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0013D6DC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013D6DC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D6DCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013D6DCu) [[unlikely]] return; }
L_0013D6DC:
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 1;
L_0013D6E0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[17].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013D6B4u | kUnwind; return; } goto L_0013D6B4; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D6F8u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0013D6F8u) [[unlikely]] return; }
L_0013D6F8:
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0]), 0u);
    c.budget -= 3;
L_0013D704:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D70Cu); set32(c.r[4], 0u + 128u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0013D70Cu) [[unlikely]] return; }
L_0013D70C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 48u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + 128u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 20u), 0u);
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0] + 28u), 0u);
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 40u), 0u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D750u); st32((c.r[16].w[0] + 44u), 0u);  if (depth < kMaxDepth) unit_0010(c, 42u, depth + 1u); else { c.pc = 0x00140820u; return; } if (c.pc != 0x0013D750u) [[unlikely]] return; }
L_0013D750:
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], 0u + 3u);
    st8((c.r[16].w[0] + 56u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], 0u - 1u);
    st8((c.r[16].w[0] + 57u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[16].w[0] + 64u), c.r[5].d[0]);
    st8((c.r[16].w[0] + 72u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 80u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 76u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 92u), 0u);
    st32((c.r[16].w[0] + 88u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0013D7A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0013D91C; } }
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D7D0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0010(c, 43u, depth + 1u); else { c.pc = 0x00140840u; return; } if (c.pc != 0x0013D7D0u) [[unlikely]] return; }
L_0013D7D0:
    set32(c.r[2], c.r[17].w[0] + 36u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] + 24u);  if (t) { goto L_0013D800; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00140000u);  if (t) { goto L_0013D7FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D7F0u); set32(c.r[5], c.r[5].w[0] - 11600u);  if (depth < kMaxDepth) unit_0000(c, 82u, depth + 1u); else { c.pc = 0x00100680u; return; } if (c.pc != 0x0013D7F0u) [[unlikely]] return; }
L_0013D7F0:
    st32((c.r[17].w[0] + 44u), 0u);
    st32((c.r[17].w[0] + 40u), 0u);
    st32((c.r[17].w[0] + 36u), 0u);
    c.budget -= 3;
L_0013D7FC:
    set32(c.r[2], c.r[17].w[0] + 24u);
    c.budget -= 1;
L_0013D800:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] + 12u);  if (t) { goto L_0013D82C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00140000u);  if (t) { goto L_0013D828; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D81Cu); set32(c.r[5], c.r[5].w[0] - 11376u);  if (depth < kMaxDepth) unit_0000(c, 82u, depth + 1u); else { c.pc = 0x00100680u; return; } if (c.pc != 0x0013D81Cu) [[unlikely]] return; }
L_0013D81C:
    st32((c.r[17].w[0] + 32u), 0u);
    st32((c.r[17].w[0] + 28u), 0u);
    st32((c.r[17].w[0] + 24u), 0u);
    c.budget -= 3;
L_0013D828:
    set32(c.r[2], c.r[17].w[0] + 12u);
    c.budget -= 1;
L_0013D82C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013D898; } }
    set32(c.r[19], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0013D898; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[17].w[0] + 20u)));  if (t) { goto L_0013D874; } }
L_0013D848:
    set32(c.r[4], ld32((c.r[19].w[0])));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0013D870; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013D870; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D870u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013D870u) [[unlikely]] return; }
L_0013D870:
    set32(c.r[19], c.r[19].w[0] + 4u);
    c.budget -= 1;
L_0013D874:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[18].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013D848u | kUnwind; return; } goto L_0013D848; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D88Cu); set32(c.r[4], ld32((c.r[17].w[0] + 12u)));  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0013D88Cu) [[unlikely]] return; }
L_0013D88C:
    st32((c.r[17].w[0] + 20u), 0u);
    st32((c.r[17].w[0] + 16u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    c.budget -= 3;
L_0013D898:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] << 48;  if (t) { goto L_0013D908; } }
    set32(c.r[19], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0013D904; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[17].w[0] + 8u)));  if (t) { goto L_0013D8E0; } }
L_0013D8B4:
    set32(c.r[4], ld32((c.r[19].w[0])));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0013D8DC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013D8DC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D8DCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013D8DCu) [[unlikely]] return; }
L_0013D8DC:
    set32(c.r[19], c.r[19].w[0] + 4u);
    c.budget -= 1;
L_0013D8E0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[18].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013D8B4u | kUnwind; return; } goto L_0013D8B4; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D8F8u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0013D8F8u) [[unlikely]] return; }
L_0013D8F8:
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 4u), 0u);
    st32((c.r[17].w[0]), 0u);
    c.budget -= 3;
L_0013D904:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0013D908:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0013D920; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D91Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0013D91Cu) [[unlikely]] return; }
L_0013D91C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0013D920:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0013D940:
    set32(c.r[7], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[6], c.r[3].w[0] - c.r[7].w[0]);
    c.budget -= 5;
    { const bool t = c.r[6].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 2));  if (t) { goto L_0013D95C; } }
    set32(c.r[3], c.r[6].w[0] + 3u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_0013D95C:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0013D974; } }
    st32((c.r[7].w[0]), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 4u);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_0013D974:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013D980:
    set32(c.r[6], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[4].w[0])));  if (t) { goto L_0013D9A4; } }
L_0013D98C:
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; set32(c.r[3], 0u - 1u);  if (t) { goto L_0013D9A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), c.r[3].w[0]);  if (t) { goto L_0013D9AC; } }
L_0013D9A0:
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.budget -= 1;
L_0013D9A4:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[6].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013D98Cu | kUnwind; return; } goto L_0013D98C; } }
L_0013D9AC:
    set32(c.r[8], ld32((c.r[4].w[0])));
    set32(c.r[3], 0u - 1u);
    set32(c.r[7], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_0013D9D8; } }
L_0013D9C0:
    set32(c.r[5], ld32((c.r[8].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0013D9D4; } }
    st32((c.r[6].w[0]), c.r[5].w[0]);
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.budget -= 2;
L_0013D9D4:
    set32(c.r[8], c.r[8].w[0] + 4u);
    c.budget -= 1;
L_0013D9D8:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != c.r[7].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013D9C0u | kUnwind; return; } goto L_0013D9C0; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), c.r[6].w[0]);  c.pc = t; return; }
L_0013D9F0:
    set32(c.r[7], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[6], c.r[3].w[0] - c.r[7].w[0]);
    c.budget -= 5;
    { const bool t = c.r[6].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 2));  if (t) { goto L_0013DA0C; } }
    set32(c.r[3], c.r[6].w[0] + 3u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_0013DA0C:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0013DA24; } }
    st32((c.r[7].w[0]), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] + 4u);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 4;
L_0013DA24:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013DA30:
    set32(c.r[6], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  if (t) { goto L_0013DA54; } }
L_0013DA3C:
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; set32(c.r[3], 0u - 1u);  if (t) { goto L_0013DA50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.r[3].w[0]);  if (t) { goto L_0013DA5C; } }
L_0013DA50:
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.budget -= 1;
L_0013DA54:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013DA3Cu | kUnwind; return; } goto L_0013DA3C; } }
L_0013DA5C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013DA70:
    c.r[2].d[0] = ld64((c.r[4].w[0] + 64u));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(1ll);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[4].w[0] + 64u), c.r[2].d[0]);  if (t) { goto L_0013DA88; } }
    set32(c.r[2], 0u + 1u);
    st64((c.r[4].w[0] + 64u), c.r[2].d[0]);
    c.budget -= 2;
L_0013DA88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld64((c.r[4].w[0] + 64u));  c.pc = t; return; }
L_0013DA90:
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[7], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[7].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[4], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 10;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 2));  if (t) { goto L_0013DAC0; } }
    set32(c.r[3], c.r[4].w[0] + 3u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_0013DAC0:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0013DAD8; } }
    st32((c.r[5].w[0]), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 4u);
    st32((c.r[7].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_0013DAD8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013DAE0:
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[3].w[0])));  if (t) { goto L_0013DB18; } }
L_0013DB00:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[6].d[0]; set32(c.r[3], 0u - 1u);  if (t) { goto L_0013DB14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[3].w[0]);  if (t) { goto L_0013DB20; } }
L_0013DB14:
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.budget -= 1;
L_0013DB18:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013DB00u | kUnwind; return; } goto L_0013DB00; } }
L_0013DB20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013DB30:
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[7], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[7].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[4], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 10;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 2));  if (t) { goto L_0013DB60; } }
    set32(c.r[3], c.r[4].w[0] + 3u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_0013DB60:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0013DB78; } }
    st32((c.r[5].w[0]), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 4u);
    st32((c.r[7].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_0013DB78:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013DB80:
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[3].w[0])));  if (t) { goto L_0013DBB8; } }
L_0013DBA0:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[6].d[0]; set32(c.r[3], 0u - 1u);  if (t) { goto L_0013DBB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[3].w[0]);  if (t) { goto L_0013DBC0; } }
L_0013DBB4:
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.budget -= 1;
L_0013DBB8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013DBA0u | kUnwind; return; } goto L_0013DBA0; } }
L_0013DBC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013DBD0:
    set32(c.r[8], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[7], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_0013DBFC; } }
L_0013DBE4:
    set32(c.r[5], ld32((c.r[8].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0013DBF8; } }
    st32((c.r[6].w[0]), c.r[5].w[0]);
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.budget -= 2;
L_0013DBF8:
    set32(c.r[8], c.r[8].w[0] + 4u);
    c.budget -= 1;
L_0013DBFC:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != c.r[7].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013DBE4u | kUnwind; return; } goto L_0013DBE4; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 20u), c.r[6].w[0]);  c.pc = t; return; }
L_0013DC10:
    set32(c.r[9], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[8], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_0013DC58; } }
L_0013DC20:
    set32(c.r[7], ld32((c.r[9].w[0])));
    set32(c.r[6], ld32((c.r[9].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0013DC48; } }
L_0013DC30:
    set32(c.r[4], ld32((c.r[7].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0013DC44; } }
    st32((c.r[5].w[0]), c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.budget -= 2;
L_0013DC44:
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.budget -= 1;
L_0013DC48:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[6].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013DC30u | kUnwind; return; } goto L_0013DC30; } }
    st32((c.r[9].w[0] + 8u), c.r[5].w[0]);
    set32(c.r[9], c.r[9].w[0] + 12u);
    c.budget -= 2;
L_0013DC58:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != c.r[8].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013DC20u | kUnwind; return; } goto L_0013DC20; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013DC70:
    set32(c.r[9], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[8], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_0013DCB8; } }
L_0013DC80:
    set32(c.r[7], ld32((c.r[9].w[0])));
    set32(c.r[6], ld32((c.r[9].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0013DCA8; } }
L_0013DC90:
    set32(c.r[4], ld32((c.r[7].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0013DCA4; } }
    st32((c.r[5].w[0]), c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.budget -= 2;
L_0013DCA4:
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.budget -= 1;
L_0013DCA8:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[6].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013DC90u | kUnwind; return; } goto L_0013DC90; } }
    st32((c.r[9].w[0] + 8u), c.r[5].w[0]);
    set32(c.r[9], c.r[9].w[0] + 12u);
    c.budget -= 2;
L_0013DCB8:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != c.r[8].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013DC80u | kUnwind; return; } goto L_0013DC80; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013DCD0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0])));
    set32(c.r[16], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0013DD20; } }
L_0013DCFC:
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0013DD1C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DD1Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013DD1Cu) [[unlikely]] return; }
L_0013DD1C:
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_0013DD20:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013DCFCu | kUnwind; return; } goto L_0013DCFC; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013DD44; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DD44u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013DD44u) [[unlikely]] return; }
L_0013DD44:
    set32(c.r[4], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[2], 0u + 12u);
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_0013DD60; } }
    breakpoint(c, 0x0013DD5Cu);
    c.budget -= 1;
L_0013DD60:
    c.r[17].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0013DDF0; } }
L_0013DD6C:
    set32(c.r[4], ld32((c.r[18].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[6].d[0] = ld8((c.r[18].w[0] + 56u));  if (t) { goto L_0013DD90; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DD88u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013DD88u) [[unlikely]] return; }
L_0013DD88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_0013DD98; } }
L_0013DD90:
    set32(c.r[2], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 2;
L_0013DD98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013DDEC; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[20], ld32((c.r[2].w[0])));  if (t) { goto L_0013DDE4; } }
L_0013DDC0:
    set32(c.r[4], ld32((c.r[20].w[0])));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0013DDE0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DDE0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013DDE0u) [[unlikely]] return; }
L_0013DDE0:
    set32(c.r[20], c.r[20].w[0] + 4u);
    c.budget -= 1;
L_0013DDE4:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[19].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013DDC0u | kUnwind; return; } goto L_0013DDC0; } }
L_0013DDEC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0013DDF0:
    c.r[2].d[0] = c.r[16].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013DD6Cu | kUnwind; return; } goto L_0013DD6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DE04u);  if (depth < kMaxDepth) unit_000F(c, 195u, depth + 1u); else { c.pc = 0x0013DC10u; return; } if (c.pc != 0x0013DE04u) [[unlikely]] return; }
L_0013DE04:
    set32(c.r[16], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[18].w[0])));  if (t) { goto L_0013DE34; } }
L_0013DE10:
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0013DE30; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DE30u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013DE30u) [[unlikely]] return; }
L_0013DE30:
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_0013DE34:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013DE10u | kUnwind; return; } goto L_0013DE10; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013DE58; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DE58u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013DE58u) [[unlikely]] return; }
L_0013DE58:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 72u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0013DE74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DE6Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 227u, depth + 1u); else { c.pc = 0x0013E050u; return; } if (c.pc != 0x0013DE6Cu) [[unlikely]] return; }
L_0013DE6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0013DE80; } }
L_0013DE74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DE7Cu);  if (depth < kMaxDepth) unit_000F(c, 224u, depth + 1u); else { c.pc = 0x0013DFD0u; return; } if (c.pc != 0x0013DE7Cu) [[unlikely]] return; }
L_0013DE7C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0013DE80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DE88u);  if (depth < kMaxDepth) unit_000F(c, 198u, depth + 1u); else { c.pc = 0x0013DC70u; return; } if (c.pc != 0x0013DE88u) [[unlikely]] return; }
L_0013DE88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DE90u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 193u, depth + 1u); else { c.pc = 0x0013DBD0u; return; } if (c.pc != 0x0013DE90u) [[unlikely]] return; }
L_0013DE90:
    set32(c.r[4], ld32((c.r[18].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013DEAC; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DEACu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013DEACu) [[unlikely]] return; }
L_0013DEAC:
    set32(c.r[16], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[18].w[0])));  if (t) { goto L_0013DEDC; } }
L_0013DEB8:
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0013DED8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DED8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013DED8u) [[unlikely]] return; }
L_0013DED8:
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_0013DEDC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013DEB8u | kUnwind; return; } goto L_0013DEB8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0013DF10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = ld8((c.r[4].w[0] + 57u));
    set32(c.r[4], ld32((c.r[4].w[0] + 48u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0013DF4C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DF44u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013DF44u) [[unlikely]] return; }
L_0013DF44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0013DF50; } }
L_0013DF4C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0013DF50:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0013DFB4; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[4], c.r[16].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[3].w[0])));  if (t) { goto L_0013DFAC; } }
L_0013DF7C:
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0013DFA8; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0013DFA8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DFA8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013DFA8u) [[unlikely]] return; }
L_0013DFA8:
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_0013DFAC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013DF7Cu | kUnwind; return; } goto L_0013DF7C; } }
L_0013DFB4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0013DFD0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 12u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 44u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);  if (t) { goto L_0013E004; } }
    breakpoint(c, 0x0013E000u);
    c.budget -= 1;
L_0013E004:
    c.r[18].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0013E020; } }
L_0013E010:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E01Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 220u, depth + 1u); else { c.pc = 0x0013DF10u; return; } if (c.pc != 0x0013E01Cu) [[unlikely]] return; }
L_0013E01C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0013E020:
    c.r[3].d[0] = c.r[17].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013E010u | kUnwind; return; } goto L_0013E010; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0013E050:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0013E0A0; } }
    st32((c.r[17].w[0] + 80u), 0u);
    set32(c.r[3], 0u - 1u);
    st32((c.r[17].w[0] + 84u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 88u)));  if (t) { goto L_0013E090; } }
L_0013E084:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E08Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 220u, depth + 1u); else { c.pc = 0x0013DF10u; return; } if (c.pc != 0x0013E08Cu) [[unlikely]] return; }
L_0013E08C:
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_0013E090:
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013E084u | kUnwind; return; } goto L_0013E084; } }
L_0013E0A0:
    set32(c.r[3], ld32((c.r[17].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0013E120; } }
    st32((c.r[17].w[0] + 80u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0013E110; } }
L_0013E0B8:
    st32((c.r[17].w[0] + 84u), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0013E0DC; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E0D8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013E0D8u) [[unlikely]] return; }
L_0013E0D8:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0013E0DC:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0013E10C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[17].w[0] + 92u)));  if (t) { goto L_0013E0FC; } }
L_0013E0F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E0F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 220u, depth + 1u); else { c.pc = 0x0013DF10u; return; } if (c.pc != 0x0013E0F8u) [[unlikely]] return; }
L_0013E0F8:
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 1;
L_0013E0FC:
    set32(c.r[5], ld32((c.r[18].w[0])));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013E0F0u | kUnwind; return; } goto L_0013E0F0; } }
L_0013E10C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0013E110:
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013E0B8u | kUnwind; return; } goto L_0013E0B8; } }
L_0013E120:
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013E13C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E13Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013E13Cu) [[unlikely]] return; }
L_0013E13C:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], 0u + 3u);  if (t) { goto L_0013E180; } }
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], 0u - 1u);
    st32((c.r[17].w[0] + 80u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 84u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 96u)));  if (t) { goto L_0013E16C; } }
L_0013E160:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E168u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 220u, depth + 1u); else { c.pc = 0x0013DF10u; return; } if (c.pc != 0x0013E168u) [[unlikely]] return; }
L_0013E168:
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_0013E16C:
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013E160u | kUnwind; return; } goto L_0013E160; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 1;
L_0013E180:
    set32(c.r[3], 0u - 1u);
    st32((c.r[17].w[0] + 80u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 84u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0013E1B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[7], c.r[4].w[0] << 1);
    set32(c.r[8], ld32((c.r[1].w[0] - 7736u)));
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    set32(c.r[7], c.r[4].w[0] << 2);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[8].w[0] + 24u)));
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[4].w[0])));
    set32(c.r[8], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0013E1F4; } }
L_0013E1E0:
    set32(c.r[4], ld32((c.r[9].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_0013E200; } }
    set32(c.r[9], c.r[9].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 2;
L_0013E1F4:
    c.budget -= 3;
    { const bool t = c.r[9].d[0] != c.r[8].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013E1E0u | kUnwind; return; } goto L_0013E1E0; } }
L_0013E200:
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_0013E220; } }
L_0013E20C:
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[6].d[0]; c.r[1].d[0] = c.r[9].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;  if (t) { goto L_0013E230; } }
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 2;
L_0013E220:
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[8].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013E20Cu | kUnwind; return; } goto L_0013E20C; } }
    c.r[1].d[0] = c.r[9].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0013E230:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], c.r[9].w[0] << 2);  if (t) { goto L_0013E280; } }
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[6], c.r[7].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[7].w[0] + c.r[4].w[0]);
    set32(c.r[8], ld32((c.r[6].w[0])));
    set32(c.r[4], ld32((c.r[5].w[0])));
    st32((c.r[6].w[0]), c.r[4].w[0]);
    st32((c.r[5].w[0]), c.r[8].w[0]);
    c.budget -= 7;
L_0013E254:
    set32(c.r[4], c.r[9].w[0] - c.r[3].w[0]);
    c.r[1].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[4], c.r[3].w[0] << 2);  if (t) { goto L_0013E280; } }
    set32(c.r[5], c.r[7].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[6], ld32((c.r[5].w[0])));
    set32(c.r[4], ld32((c.r[5].w[0] - 4u)));
    st32((c.r[5].w[0]), c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] - 4u), c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013E254u | kUnwind; return; } goto L_0013E254; } }
L_0013E280:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013E290:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 18736u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] - 7736u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E2BCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 179u, depth + 1u); else { c.pc = 0x0013D940u; return; } if (c.pc != 0x0013E2BCu) [[unlikely]] return; }
L_0013E2BC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0013E2D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0013E328; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], c.r[2].w[0] - 18736u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] - 7736u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] << 48;  if (t) { goto L_0013E314; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E310u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 180u, depth + 1u); else { c.pc = 0x0013D980u; return; } if (c.pc != 0x0013E310u) [[unlikely]] return; }
L_0013E310:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0013E314:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0013E32C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E328u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0013E328u) [[unlikely]] return; }
L_0013E328:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0013E32C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0013E340:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013E350:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013E360:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013E370:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 18752u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E398u); set32(c.r[4], ld32((c.r[1].w[0] - 7736u)));  if (depth < kMaxDepth) unit_000F(c, 186u, depth + 1u); else { c.pc = 0x0013DA70u; return; } if (c.pc != 0x0013E398u) [[unlikely]] return; }
L_0013E398:
    st64((c.r[16].w[0] + 8u), c.r[2].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 7736u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E3ACu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 183u, depth + 1u); else { c.pc = 0x0013D9F0u; return; } if (c.pc != 0x0013E3ACu) [[unlikely]] return; }
L_0013E3AC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0013E3C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0013E410; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], c.r[2].w[0] - 18752u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] - 7736u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E3F8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 184u, depth + 1u); else { c.pc = 0x0013DA30u; return; } if (c.pc != 0x0013E3F8u) [[unlikely]] return; }
L_0013E3F8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0013E414; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E410u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0013E410u) [[unlikely]] return; }
L_0013E410:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0013E414:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0013E430:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013E440:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 18768u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] - 7736u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E470u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 187u, depth + 1u); else { c.pc = 0x0013DA90u; return; } if (c.pc != 0x0013E470u) [[unlikely]] return; }
L_0013E470:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0013E490:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0013E4E4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], c.r[2].w[0] - 18768u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] - 7736u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E4CCu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 188u, depth + 1u); else { c.pc = 0x0013DAE0u; return; } if (c.pc != 0x0013E4CCu) [[unlikely]] return; }
L_0013E4CC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0013E4E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E4E4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0013E4E4u) [[unlikely]] return; }
L_0013E4E4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0013E4E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0013E500:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[1].w[0] - 7736u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E52Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 188u, depth + 1u); else { c.pc = 0x0013DAE0u; return; } if (c.pc != 0x0013E52Cu) [[unlikely]] return; }
L_0013E52C:
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 7736u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E544u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 187u, depth + 1u); else { c.pc = 0x0013DA90u; return; } if (c.pc != 0x0013E544u) [[unlikely]] return; }
L_0013E544:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0013E560:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] - 18784u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[1].w[0] - 7736u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E598u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 190u, depth + 1u); else { c.pc = 0x0013DB30u; return; } if (c.pc != 0x0013E598u) [[unlikely]] return; }
L_0013E598:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0013E5B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0013E604; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], c.r[2].w[0] - 18784u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] - 7736u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E5ECu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 191u, depth + 1u); else { c.pc = 0x0013DB80u; return; } if (c.pc != 0x0013E5ECu) [[unlikely]] return; }
L_0013E5EC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0013E608; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E604u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0013E604u) [[unlikely]] return; }
L_0013E604:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0013E608:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0013E620:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[1].w[0] - 7736u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E64Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 191u, depth + 1u); else { c.pc = 0x0013DB80u; return; } if (c.pc != 0x0013E64Cu) [[unlikely]] return; }
L_0013E64C:
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[1].w[0] - 7736u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E664u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 190u, depth + 1u); else { c.pc = 0x0013DB30u; return; } if (c.pc != 0x0013E664u) [[unlikely]] return; }
L_0013E664:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0013E680:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E6A8u); set32(c.r[6], c.r[16].w[0] + 128u);  if (depth < kMaxDepth) unit_0007(c, 325u, depth + 1u); else { c.pc = 0x0011F138u; return; } if (c.pc != 0x0013E6A8u) [[unlikely]] return; }
L_0013E6A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 53u);  if (t) { goto L_0013E6B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0013E6F4; } }
L_0013E6B8:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E6C4u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0013E6C4u) [[unlikely]] return; }
L_0013E6C4:
    set32(c.r[4], c.r[16].w[0] + 59u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E6D4u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0013E6D4u) [[unlikely]] return; }
L_0013E6D4:
    st32((c.r[16].w[0]), c.r[18].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 4u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 20u), 0u);
    st16((c.r[16].w[0] + 48u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 50u), static_cast<std::uint16_t>(0u));
    st8((c.r[16].w[0] + 52u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
L_0013E6F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0013E710:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[17], ld32((c.r[4].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E744u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 337u, depth + 1u); else { c.pc = 0x0011F488u; return; } if (c.pc != 0x0013E744u) [[unlikely]] return; }
L_0013E744:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013E754; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0013E7E4; } }
L_0013E754:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 80u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0013E7D8; } }
    c.r[7].d[0] = ld8((c.r[29].w[0] + 82u));
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.r[3].d[0] = ld8((c.r[29].w[0] + 83u));
    set32(c.r[5], c.r[29].w[0] + 84u);
    c.r[2].d[0] = ld16((c.r[18].w[0] + 30u));
    set32(c.r[6], 0u + 16u);
    set32(c.r[7], c.r[7].w[0] << 8);
    c.r[3].d[0] = c.r[7].d[0] | c.r[3].d[0];
    c.r[7].d[0] = c.r[3].d[0] ^ 65535ull;
    c.r[2].d[0] = ~(c.r[2].d[0] | 0ull);
    c.r[3].d[0] = c.r[7].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[18].w[0] + 30u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E7A0u); st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[7].w[0]));  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x0013E7A0u) [[unlikely]] return; }
L_0013E7A0:
    c.r[19].d[0] = ld8((c.r[29].w[0] + 81u));
    set32(c.r[2], 0u + 7u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[19].w[0]) >> 4));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; st32((c.r[18].w[0] + 12u), c.r[19].w[0]);  if (t) { goto L_0013E7BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 53u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0013E7D0; } }
L_0013E7BC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E7CCu); set32(c.r[6], c.r[18].w[0] + 53u);  if (depth < kMaxDepth) unit_0007(c, 361u, depth + 1u); else { c.pc = 0x0011FBC0u; return; } if (c.pc != 0x0013E7CCu) [[unlikely]] return; }
L_0013E7CC:
    st8((c.r[18].w[0] + 53u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0013E7D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 54u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0013E7E0; } }
L_0013E7D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0013E7E8; } }
L_0013E7E0:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0013E7E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0013E7E8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0013E800:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[17], ld32((c.r[4].w[0])));
    set32(c.r[18], ld32((c.r[4].w[0] + 20u)));
    c.r[21].d[0] = ld16((c.r[4].w[0] + 50u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E848u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 344u, depth + 1u); else { c.pc = 0x0011F5F0u; return; } if (c.pc != 0x0013E848u) [[unlikely]] return; }
L_0013E848:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_0013E858; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0013E858:
    set32(c.r[2], 0u + 78u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 77u);  if (t) { goto L_0013EB20; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0013EAF0; } }
    set32(c.r[2], 0u + 76u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0013EAB4; } }
    set32(c.r[2], 0u + 72u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0013EA90; } }
    set32(c.r[2], 0u + 71u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0013EA60; } }
    set32(c.r[2], 0u + 70u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0013E9EC; } }
    set32(c.r[2], 0u + 42u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0013E9BC; } }
    set32(c.r[2], 0u + 41u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[21].d[0] & 65535ull;  if (t) { goto L_0013E98C; } }
    set32(c.r[2], 0u + 40u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0013E964; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[2], 0u + 6u);  if (t) { goto L_0013E8D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 6u);  if (t) { goto L_0013EB28; } }
L_0013E8D0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0013E8F4; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0013E8F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E8ECu); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 276u, depth + 1u); else { c.pc = 0x0013E710u; return; } if (c.pc != 0x0013E8ECu) [[unlikely]] return; }
L_0013E8EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[22].w[0] + 20u), c.r[18].w[0]);  if (t) { goto L_0013EB78; } }
L_0013E8F4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0013E8F8:
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E904u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 356u, depth + 1u); else { c.pc = 0x0011F9D0u; return; } if (c.pc != 0x0013E904u) [[unlikely]] return; }
L_0013E904:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0013EB74; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E920u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 356u, depth + 1u); else { c.pc = 0x0011F9D0u; return; } if (c.pc != 0x0013E920u) [[unlikely]] return; }
L_0013E920:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0013E92C; } }
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0013E92C:
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[2].d[0]; set32(c.r[18], 0u + 70u);  if (t) { goto L_0013E954; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[2].d[0]; set32(c.r[18], 0u + 40u);  if (t) { goto L_0013E94C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 99u);  if (t) { goto L_0013E95C; } }
L_0013E94C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013EB74; } }
L_0013E954:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013EB74; } }
L_0013E95C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013EB74; } }
L_0013E964:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E974u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_0007(c, 356u, depth + 1u); else { c.pc = 0x0011F9D0u; return; } if (c.pc != 0x0013E974u) [[unlikely]] return; }
L_0013E974:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013E984; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 99u);  if (t) { goto L_0013EB74; } }
L_0013E984:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[21].d[0] & 65535ull;
    c.budget -= 2;
L_0013E98C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0013EB74; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E9A4u); set32(c.r[7], 0u + 3u);  if (depth < kMaxDepth) unit_0007(c, 358u, depth + 1u); else { c.pc = 0x0011FB08u; return; } if (c.pc != 0x0013E9A4u) [[unlikely]] return; }
L_0013E9A4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0013E9B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_0013EB74; } }
L_0013E9B8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0013E9BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E9C4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 349u, depth + 1u); else { c.pc = 0x0011F708u; return; } if (c.pc != 0x0013E9C4u) [[unlikely]] return; }
L_0013E9C4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0013E9D4; } }
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 1;
L_0013E9D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E9DCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 349u, depth + 1u); else { c.pc = 0x0011F708u; return; } if (c.pc != 0x0013E9DCu) [[unlikely]] return; }
L_0013E9DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013EB74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0013EB74; } }
L_0013E9EC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E9FCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 352u, depth + 1u); else { c.pc = 0x0011F790u; return; } if (c.pc != 0x0013E9FCu) [[unlikely]] return; }
L_0013E9FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0013EA08; } }
    set32(c.r[18], 0u + 99u);
    c.budget -= 1;
L_0013EA08:
    set32(c.r[3], 0u + 255u);
    c.budget -= 1;
L_0013EA0C:
    set32(c.r[2], c.r[22].w[0] + c.r[4].w[0]);
    st8((c.r[2].w[0] + 59u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013EA0Cu | kUnwind; return; } goto L_0013EA0C; } }
    st8((c.r[22].w[0] + 59u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st8((c.r[22].w[0] + 60u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EA44u); set32(c.r[6], c.r[22].w[0] + 59u);  if (depth < kMaxDepth) unit_0007(c, 365u, depth + 1u); else { c.pc = 0x0011FC80u; return; } if (c.pc != 0x0013EA44u) [[unlikely]] return; }
L_0013EA44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0013EB74; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EA58u); set32(c.r[18], c.r[18].w[0] + 1u);  if (depth < kMaxDepth) unit_0007(c, 349u, depth + 1u); else { c.pc = 0x0011F708u; return; } if (c.pc != 0x0013EA58u) [[unlikely]] return; }
L_0013EA58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013EB74; } }
L_0013EA60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EA68u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 349u, depth + 1u); else { c.pc = 0x0011F708u; return; } if (c.pc != 0x0013EA68u) [[unlikely]] return; }
L_0013EA68:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0013EA78; } }
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 1;
L_0013EA78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EA80u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 349u, depth + 1u); else { c.pc = 0x0011F708u; return; } if (c.pc != 0x0013EA80u) [[unlikely]] return; }
L_0013EA80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013EB74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_0013EB74; } }
L_0013EA90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EA98u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 374u, depth + 1u); else { c.pc = 0x0011FEC0u; return; } if (c.pc != 0x0013EA98u) [[unlikely]] return; }
L_0013EA98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], 0u + 76u);  if (t) { goto L_0013EAB0; } }
    st32((c.r[22].w[0] + 16u), 0u);
    set32(c.r[18], 0u + 99u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[23].d[0] = 0ull + 0ull;  if (t) { goto L_0013EB74; } }
L_0013EAB0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0013EAB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EABCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 376u, depth + 1u); else { c.pc = 0x0011FF20u; return; } if (c.pc != 0x0013EABCu) [[unlikely]] return; }
L_0013EABC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0013EAD0; } }
    set32(c.r[18], 0u + 72u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[23].d[0] = 0ull + 0ull;  if (t) { goto L_0013EB74; } }
L_0013EAD0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EADCu); set32(c.r[18], c.r[18].w[0] + 1u);  if (depth < kMaxDepth) unit_0007(c, 349u, depth + 1u); else { c.pc = 0x0011F708u; return; } if (c.pc != 0x0013EADCu) [[unlikely]] return; }
L_0013EADC:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0013EB74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[23].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0013EB74; } }
L_0013EAF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EAF8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 349u, depth + 1u); else { c.pc = 0x0011F708u; return; } if (c.pc != 0x0013EAF8u) [[unlikely]] return; }
L_0013EAF8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0013EB08; } }
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 1;
L_0013EB08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EB10u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 349u, depth + 1u); else { c.pc = 0x0011F708u; return; } if (c.pc != 0x0013EB10u) [[unlikely]] return; }
L_0013EB10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013EB74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_0013EB74; } }
L_0013EB20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 99u);  if (t) { goto L_0013EB74; } }
L_0013EB28:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_0013EB3C; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_0013EB74; } }
L_0013EB3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EB44u);  if (depth < kMaxDepth) unit_000F(c, 276u, depth + 1u); else { c.pc = 0x0013E710u; return; } if (c.pc != 0x0013EB44u) [[unlikely]] return; }
L_0013EB44:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0013EB68; } }
    set32(c.r[3], ld32((c.r[22].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0013EB68; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0013EB68; } }
    st32((c.r[22].w[0] + 16u), 0u);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0013EB68:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0013EB74; } }
    st32((c.r[22].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 1;
L_0013EB74:
    st32((c.r[22].w[0] + 20u), c.r[18].w[0]);
    c.budget -= 1;
L_0013EB78:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[22].w[0] + 24u), c.r[19].w[0]);
    st16((c.r[22].w[0] + 50u), static_cast<std::uint16_t>(c.r[21].w[0]));
    st8((c.r[22].w[0] + 52u), static_cast<std::uint8_t>(c.r[23].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0013EBC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EBD4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 303u, depth + 1u); else { c.pc = 0x0013EBF0u; return; } if (c.pc != 0x0013EBD4u) [[unlikely]] return; }
L_0013EBD4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0013EBF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 128u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], 0u + 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st16((c.r[4].w[0] + 2u), static_cast<std::uint16_t>(0u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 176u), 0u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EC24u); set32(c.r[4], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0013EC24u) [[unlikely]] return; }
L_0013EC24:
    set32(c.r[4], c.r[16].w[0] + 24u);
    set32(c.r[5], 0u + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EC34u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0013EC34u) [[unlikely]] return; }
L_0013EC34:
    st32((c.r[16].w[0] + 180u), 0u);
    st32((c.r[16].w[0] + 184u), 0u);
    st16((c.r[16].w[0] + 188u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 190u), static_cast<std::uint16_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0013EC60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 24u);
    set32(c.r[5], c.r[17].w[0] + 8u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EC90u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x0013EC90u) [[unlikely]] return; }
L_0013EC90:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013ECA0u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x0013ECA0u) [[unlikely]] return; }
L_0013ECA0:
    c.r[8].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[2].w[0];
    set32(c.r[5], 0u + 3u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[4], 0u + 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[6], 0u + 1u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 10;
L_0013ECC8:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == c.r[6].d[0]; set32(c.r[3], c.r[17].w[0] + c.r[8].w[0]);  if (t) { goto L_0013ECD8; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != c.r[5].d[0]; set32(c.r[2], c.r[17].w[0] + c.r[8].w[0]);  if (t) { goto L_0013ECE8; } }
L_0013ECD8:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 8u));
    c.r[2].d[0] = ~(c.r[2].d[0] | 0ull);
    st8((c.r[3].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[17].w[0] + c.r[8].w[0]);
    c.budget -= 4;
L_0013ECE8:
    set32(c.r[3], c.r[2].w[0] + 8u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 8u));
    c.r[1].d[0] = c.r[2].sd[0] < 89ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = c.r[2].sd[0] < 168ll ? 1ull : 0ull;  if (t) { goto L_0013ED08; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0013ED08; } }
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 1;
L_0013ED08:
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[3], c.r[8].w[0] << 2);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[7], c.r[3].w[0] + 40u);  if (t) { goto L_0013ED28; } }
    c.f[2] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[2]);  if (t) { goto L_0013ED44; } }
L_0013ED28:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[2] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 7;
L_0013ED44:
    fpu_div(c, 2u, c.f[2], c.f[3]);
    c.f[2] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[7].w[0]), c.f[2]);  if (t) { goto L_0013ED68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[2] = c.f[0];  if (t) { goto L_0013ED7C; } }
L_0013ED68:
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0013ED7C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[2] = c.f[1];  if (t) { goto L_0013ED7C; } }
L_0013ED7C:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[2].d[0] = c.r[8].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[7].w[0]), c.f[2]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013ECC8u | kUnwind; return; } goto L_0013ECC8; } }
    set32(c.r[4], 0u + 4u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 3;
L_0013ED98:
    set32(c.r[2], c.r[17].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[2].w[0] + 8u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 8u));
    c.r[1].d[0] = c.r[2].sd[0] < 13ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0013EDB4; } }
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0013EDB4:
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0013EDCC; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0013EDE8; } }
L_0013EDCC:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_0013EDE8:
    fpu_div(c, 0u, c.f[0], c.f[1]);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 40u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013ED98u | kUnwind; return; } goto L_0013ED98; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0013EF88; } }
    c.r[2].d[0] = c.r[16].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 61440ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013EF84; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 180u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0013EF84; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 10u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0013EE54; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 11u));
    set32(c.r[2], 0u + 255u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[16].d[0] | c.r[6].d[0];  if (t) { goto L_0013EF80; } }
L_0013EE54:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_0013EEB0; } }
    c.r[1].d[0] = c.r[4].sd[0] < 161ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = c.r[4].sd[0] < 64ll ? 1ull : 0ull;  if (t) { goto L_0013EE78; } }
    c.r[2].d[0] = c.r[6].d[0] | 8192ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_0013EE84; } }
L_0013EE78:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = c.r[6].d[0] | 32768ull;  if (t) { goto L_0013EE84; } }
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_0013EE84:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 11u));
    c.r[1].d[0] = c.r[2].sd[0] < 161ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = c.r[2].sd[0] < 64ll ? 1ull : 0ull;  if (t) { goto L_0013EEA0; } }
    c.r[2].d[0] = c.r[6].d[0] | 4096ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_0013EF7C; } }
L_0013EEA0:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = c.r[6].d[0] | 16384ull;  if (t) { goto L_0013EF7C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_0013EF7C; } }
L_0013EEB0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[1].d[0] = c.r[4].sd[0] < 225ll ? 1ull : 0ull;  if (t) { goto L_0013EF04; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; c.r[2].d[0] = c.r[6].d[0] | 8192ull;  if (t) { goto L_0013EEC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_0013EED8; } }
L_0013EEC8:
    c.r[1].d[0] = c.r[4].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = c.r[6].d[0] | 32768ull;  if (t) { goto L_0013EED8; } }
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_0013EED8:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 11u));
    c.r[1].d[0] = c.r[2].sd[0] < 225ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = c.r[2].sd[0] < 16ll ? 1ull : 0ull;  if (t) { goto L_0013EEF4; } }
    c.r[2].d[0] = c.r[6].d[0] | 4096ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_0013EF7C; } }
L_0013EEF4:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = c.r[6].d[0] | 16384ull;  if (t) { goto L_0013EF7C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_0013EF7C; } }
L_0013EF04:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 11u));
    set32(c.r[5], c.r[3].w[0] - 128u);
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_0013EF18; } }
    set32(c.r[5], 0u - c.r[5].w[0]);
    c.budget -= 1;
L_0013EF18:
    set32(c.r[2], c.r[4].w[0] - 128u);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0013EF28; } }
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 1;
L_0013EF28:
    c.r[1].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[3].sd[0] < 225ll ? 1ull : 0ull;  if (t) { goto L_0013EF5C; } }
    c.r[1].d[0] = c.r[4].sd[0] < 225ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = c.r[4].sd[0] < 16ll ? 1ull : 0ull;  if (t) { goto L_0013EF4C; } }
    c.r[2].d[0] = c.r[6].d[0] | 8192ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_0013EF7C; } }
L_0013EF4C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = c.r[6].d[0] | 32768ull;  if (t) { goto L_0013EF7C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_0013EF7C; } }
L_0013EF5C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; c.r[2].d[0] = c.r[6].d[0] | 4096ull;  if (t) { goto L_0013EF6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_0013EF7C; } }
L_0013EF6C:
    c.r[1].d[0] = c.r[3].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = c.r[6].d[0] | 16384ull;  if (t) { goto L_0013EF7C; } }
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_0013EF7C:
    c.r[2].d[0] = c.r[16].d[0] | c.r[6].d[0];
    c.budget -= 1;
L_0013EF80:
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_0013EF84:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0013EF88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EF90u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 312u, depth + 1u); else { c.pc = 0x0013EFB0u; return; } if (c.pc != 0x0013EF90u) [[unlikely]] return; }
L_0013EF90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0013EFB0:
    c.r[7].d[0] = ld16((c.r[4].w[0]));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 1u);
    st16((c.r[4].w[0] + 2u), static_cast<std::uint16_t>(c.r[7].w[0]));
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[7].d[0] = ld16((c.r[4].w[0] + 2u));
    c.r[5].d[0] = ld16((c.r[4].w[0]));
    c.r[7].d[0] = ~(c.r[7].d[0] | 0ull);
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld16((c.r[4].w[0]));
    c.r[7].d[0] = ld16((c.r[4].w[0] + 2u));
    c.r[5].d[0] = ~(c.r[5].d[0] | 0ull);
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld16((c.r[4].w[0] + 172u));
    st16((c.r[4].w[0] + 170u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 172u), static_cast<std::uint16_t>(0u));
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 168u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0013F0A8; } }
L_0013F000:
    c.r[5].d[0] = ld16((c.r[4].w[0] + 4u));
    set32(c.r[10], c.r[3].w[0] << (c.r[6].w[0] & 31u));
    c.r[5].d[0] = c.r[5].d[0] & c.r[10].d[0];
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0013F024; } }
    c.r[5].d[0] = ld16((c.r[4].w[0] + 168u));
    c.r[7].d[0] = c.r[10].d[0] & 65535ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[7].d[0];
    st16((c.r[4].w[0] + 168u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 4;
L_0013F024:
    c.r[5].d[0] = ld16((c.r[4].w[0]));
    c.r[5].d[0] = c.r[5].d[0] & c.r[10].d[0];
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[5], c.r[6].w[0] << 2);  if (t) { goto L_0013F09C; } }
    set32(c.r[5], c.r[6].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[7], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[7].w[0] + 104u)));
    set32(c.r[9], c.r[7].w[0] + 104u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[7].w[0] + 104u), c.r[5].w[0]);
    set32(c.r[8], ld32((c.r[7].w[0] + 104u)));
    set32(c.r[7], ld32((c.r[1].w[0] - 3792u)));
    c.r[1].d[0] = c.r[7].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_0013F0A4; } }
    set32(c.r[5], ld32((c.r[1].w[0] - 3784u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0013F088; } }
    st32((c.r[9].w[0]), c.r[7].w[0]);
    c.r[5].d[0] = ld16((c.r[4].w[0] + 168u));
    c.r[7].d[0] = c.r[10].d[0] & 65535ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[7].d[0];
    st16((c.r[4].w[0] + 168u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 5;
L_0013F088:
    c.r[5].d[0] = ld16((c.r[4].w[0] + 172u));
    c.r[7].d[0] = c.r[10].d[0] & 65535ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[7].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 172u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { goto L_0013F0A4; } }
L_0013F09C:
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[5].w[0] + 104u), 0u);
    c.budget -= 2;
L_0013F0A4:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0013F0A8:
    c.r[5].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013F000u | kUnwind; return; } goto L_0013F000; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013F0C0:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 4u));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_0013F0D0:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 4u));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_0013F0E0:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 168u));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_0013F0F0:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 4u));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_0013F100:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 4u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_0013F110:
    c.r[5].d[0] = ld16((c.r[4].w[0] + 6u));
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = c.r[5].d[0] & 4096ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0013F140; } }
    c.r[3].d[0] = ld16((c.r[4].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 57344ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0013F140; } }
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0013F140:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull; c.r[3].d[0] = c.r[5].d[0] & 16384ull;  if (t) { goto L_0013F170; } }
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0013F164; } }
    c.r[3].d[0] = ld16((c.r[4].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 45056ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
L_0013F164:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0013F170; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0013F170:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull; c.r[3].d[0] = c.r[5].d[0] & 32768ull;  if (t) { goto L_0013F1A0; } }
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0013F194; } }
    c.r[3].d[0] = ld16((c.r[4].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 28672ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
L_0013F194:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0013F1A0; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0013F1A0:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != 0ull; c.r[3].d[0] = c.r[5].d[0] & 8192ull;  if (t) { goto L_0013F1D0; } }
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0013F1C4; } }
    c.r[3].d[0] = ld16((c.r[4].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 53248ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
L_0013F1C4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0013F1D0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0013F1D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013F1E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 128u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], 0u + 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F200u); set32(c.r[4], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0013F200u) [[unlikely]] return; }
L_0013F200:
    set32(c.r[4], c.r[16].w[0] + 24u);
    set32(c.r[5], 0u + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F210u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0013F210u) [[unlikely]] return; }
L_0013F210:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0013F220:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0013F2A8; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F24Cu); st32((c.r[17].w[0] + 176u), 0u);  if (depth < kMaxDepth) unit_000F(c, 312u, depth + 1u); else { c.pc = 0x0013EFB0u; return; } if (c.pc != 0x0013F24Cu) [[unlikely]] return; }
L_0013F24C:
    set32(c.r[2], 0u + 128u);
    set32(c.r[4], c.r[17].w[0] + 40u);
    st8((c.r[17].w[0] + 11u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], 0u + 64u);
    st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F270u); st8((c.r[17].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0013F270u) [[unlikely]] return; }
L_0013F270:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 190u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 190u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 190u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;  if (t) { goto L_0013F290; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0013F2A0; } }
L_0013F290:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0013F2A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_0013F2A0; } }
L_0013F2A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 190u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0013F55C; } }
L_0013F2A8:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0013F558; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[2], 0u + 5u);
    st32((c.r[17].w[0] + 176u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 176u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 7u);  if (t) { goto L_0013F2E0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0013F2E0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0013F2F8; } }
L_0013F2E0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 190u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0013F2F8; } }
    set32(c.r[5], 0u + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F2F8u); st32((c.r[17].w[0] + 184u), 0u);  if (depth < kMaxDepth) unit_000F(c, 338u, depth + 1u); else { c.pc = 0x0013F5D0u; return; } if (c.pc != 0x0013F2F8u) [[unlikely]] return; }
L_0013F2F8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 188u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0013F310; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 188u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0013F3A8; } }
L_0013F310:
    set32(c.r[2], ld32((c.r[17].w[0] + 184u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0013F324; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F324u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_000F(c, 338u, depth + 1u); else { c.pc = 0x0013F5D0u; return; } if (c.pc != 0x0013F324u) [[unlikely]] return; }
L_0013F324:
    set32(c.r[4], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[2], 0u + 6u);  if (t) { goto L_0013F340; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 184u), c.r[2].w[0]);  if (t) { goto L_0013F360; } }
L_0013F340:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0013F360; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 52u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_0013F35C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 184u), c.r[2].w[0]);  if (t) { goto L_0013F360; } }
L_0013F35C:
    st32((c.r[17].w[0] + 184u), c.r[3].w[0]);
    c.budget -= 1;
L_0013F360:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F368u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 336u, depth + 1u); else { c.pc = 0x0013F580u; return; } if (c.pc != 0x0013F368u) [[unlikely]] return; }
L_0013F368:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0013F3AC; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0013F3A8; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[6], 0u + 2u);
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F394u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 356u, depth + 1u); else { c.pc = 0x0011F9D0u; return; } if (c.pc != 0x0013F394u) [[unlikely]] return; }
L_0013F394:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0013F3A8; } }
    set32(c.r[2], 0u + 41u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_0013F3A8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0013F3AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F3B4u);  if (depth < kMaxDepth) unit_000F(c, 336u, depth + 1u); else { c.pc = 0x0013F580u; return; } if (c.pc != 0x0013F3B4u) [[unlikely]] return; }
L_0013F3B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0013F514; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 188u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0013F518; } }
    c.r[5].d[0] = ld16((c.r[16].w[0] + 28u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F3D8u); set32(c.r[6], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 306u, depth + 1u); else { c.pc = 0x0013EC60u; return; } if (c.pc != 0x0013F3D8u) [[unlikely]] return; }
L_0013F3D8:
    set32(c.r[4], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0013F504; } }
    c.r[3].d[0] = ld16((c.r[17].w[0]));
    c.r[2].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 16384ull;  if (t) { goto L_0013F400; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(255ll);  if (t) { goto L_0013F40C; } }
L_0013F400:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(128ll);  if (t) { goto L_0013F40C; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0013F40C:
    c.r[2].d[0] = c.r[3].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 32768ull;  if (t) { goto L_0013F420; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(255ll);  if (t) { goto L_0013F42C; } }
L_0013F420:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(128ll);  if (t) { goto L_0013F42C; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0013F42C:
    set32(c.r[4], c.r[17].w[0] + 24u);
    set32(c.r[5], c.r[17].w[0] + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F43Cu); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x0013F43Cu) [[unlikely]] return; }
L_0013F43C:
    set32(c.r[4], c.r[17].w[0] + 8u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F44Cu); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0013F44Cu) [[unlikely]] return; }
L_0013F44C:
    set32(c.r[3], 0u + 128u);
    c.r[6].d[0] = 0ull + 0ull;
    st8((c.r[17].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st8((c.r[17].w[0] + 11u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[3].w[0];
    c.f[1] = c.r[4].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[3].w[0];
    c.budget -= 12;
L_0013F47C:
    set32(c.r[3], c.r[17].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[6].w[0] << 2);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 8u));
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[5], c.r[4].w[0] + 40u);  if (t) { goto L_0013F4A0; } }
    c.f[2] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[2]);  if (t) { goto L_0013F4BC; } }
L_0013F4A0:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[2] = c.r[4].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 7;
L_0013F4BC:
    fpu_div(c, 2u, c.f[2], c.f[3]);
    c.f[2] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[5].w[0]), c.f[2]);  if (t) { goto L_0013F4E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[2] = c.f[0];  if (t) { goto L_0013F4F4; } }
L_0013F4E0:
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0013F4F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[2] = c.f[1];  if (t) { goto L_0013F4F4; } }
L_0013F4F4:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[5].w[0]), c.f[2]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013F47Cu | kUnwind; return; } goto L_0013F47C; } }
L_0013F504:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 190u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 190u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0013F52C; } }
L_0013F514:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0013F518:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F520u);  if (depth < kMaxDepth) unit_000F(c, 312u, depth + 1u); else { c.pc = 0x0013EFB0u; return; } if (c.pc != 0x0013F520u) [[unlikely]] return; }
L_0013F520:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 190u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 190u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0013F52C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 190u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;  if (t) { goto L_0013F540; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0013F550; } }
L_0013F540:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0013F550; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_0013F550; } }
L_0013F550:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 190u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0013F55C; } }
L_0013F558:
    st16((c.r[17].w[0] + 190u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_0013F55C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0013F580:
    set32(c.r[3], ld32((c.r[4].w[0] + 184u)));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_0013F59C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0013F5A8; } }
L_0013F59C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 188u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0013F5B8; } }
L_0013F5A8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 190u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0013F5B8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0013F5B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013F5C0:
    set32(c.r[2], ld32((c.r[4].w[0] + 184u)));
    c.r[2].d[0] = c.r[5].d[0] ^ c.r[2].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0013F5D0:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 188u)));
    c.r[3].d[0] = c.r[5].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0013F5EC; } }
    st16((c.r[4].w[0] + 188u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 1;
L_0013F5EC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013F600:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F61Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 241u, depth + 1u); else { c.pc = 0x0013E290u; return; } if (c.pc != 0x0013F61Cu) [[unlikely]] return; }
L_0013F61C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 18704u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F630u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 346u, depth + 1u); else { c.pc = 0x0013F6C0u; return; } if (c.pc != 0x0013F630u) [[unlikely]] return; }
L_0013F630:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0013F650:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0013F6A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 18704u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F67Cu); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 380u, depth + 1u); else { c.pc = 0x0013FB70u; return; } if (c.pc != 0x0013F67Cu) [[unlikely]] return; }
L_0013F67C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F688u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 243u, depth + 1u); else { c.pc = 0x0013E2D0u; return; } if (c.pc != 0x0013F688u) [[unlikely]] return; }
L_0013F688:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0013F6A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F6A0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0013F6A0u) [[unlikely]] return; }
L_0013F6A0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0013F6A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0013F6C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 32u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[1].w[0] - 1536u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F6ECu); set32(c.r[4], c.r[4].w[0] - 1520u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0013F6ECu) [[unlikely]] return; }
L_0013F6EC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st8((c.r[1].w[0] - 1480u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st8((c.r[1].w[0] - 1472u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st8((c.r[1].w[0] - 1488u), static_cast<std::uint8_t>(0u));
    c.r[1].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0013F718; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013F71C; } }
L_0013F718:
    set32(c.r[16], 0u + 8u);
    c.budget -= 1;
L_0013F71C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[1].w[0] - 1464u), c.r[16].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[16].w[0] << 1);
    c.budget -= 4;
L_0013F72C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] - 4608u);
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F744u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 303u, depth + 1u); else { c.pc = 0x0013EBF0u; return; } if (c.pc != 0x0013F744u) [[unlikely]] return; }
L_0013F744:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[16].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013F72Cu | kUnwind; return; } goto L_0013F72C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F75Cu);  if (depth < kMaxDepth) unit_000F(c, 352u, depth + 1u); else { c.pc = 0x0013F790u; return; } if (c.pc != 0x0013F75Cu) [[unlikely]] return; }
L_0013F75C:
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st8((c.r[1].w[0] - 1480u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] - 4608u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F780u); st32((c.r[1].w[0] - 1536u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 402u, depth + 1u); else { c.pc = 0x0013FE90u; return; } if (c.pc != 0x0013F780u) [[unlikely]] return; }
L_0013F780:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0013F790:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F7ACu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000B(c, 42u, depth + 1u); else { c.pc = 0x0012C6A0u; return; } if (c.pc != 0x0013F7ACu) [[unlikely]] return; }
L_0013F7AC:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0013F7B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F7B8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 63u, depth + 1u); else { c.pc = 0x0012C8E0u; return; } if (c.pc != 0x0013F7B8u) [[unlikely]] return; }
L_0013F7B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - 1440u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013F7B0u | kUnwind; return; } goto L_0013F7B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F7E4u);  if (depth < kMaxDepth) unit_0007(c, 308u, depth + 1u); else { c.pc = 0x0011EED8u; return; } if (c.pc != 0x0013F7E4u) [[unlikely]] return; }
L_0013F7E4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st8((c.r[1].w[0] - 1448u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st8((c.r[1].w[0] - 1456u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F800u); st8((c.r[1].w[0] - 1455u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000F(c, 398u, depth + 1u); else { c.pc = 0x0013FE00u; return; } if (c.pc != 0x0013F800u) [[unlikely]] return; }
L_0013F800:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[16].w[0] << 1);
    c.budget -= 2;
L_0013F808:
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[3].w[0] + c.r[16].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[5], c.r[4].w[0] << 9);
    set32(c.r[3], c.r[3].w[0] - 7680u);
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[18], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[3], c.r[3].w[0] - 3800u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_0013F854; } }
L_0013F834:
    set32(c.r[2], c.r[19].w[0] << 1);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 7);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F850u); set32(c.r[6], c.r[18].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 272u, depth + 1u); else { c.pc = 0x0013E680u; return; } if (c.pc != 0x0013F850u) [[unlikely]] return; }
L_0013F850:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0013F854:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[3].d[0] = c.r[19].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013F834u | kUnwind; return; } goto L_0013F834; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[16].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013F808u | kUnwind; return; } goto L_0013F808; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0013F890:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[2], c.r[2].w[0] - 3776u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[4], c.r[29].w[0] + 96u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    c.budget -= 16;
    { const bool t = c.r[5].d[0] != 0ull; st128((c.r[4].w[0] + 16u) & ~15u, c.r[2]);  if (t) { goto L_0013F8D4; } }
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_0013F8D4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[6], 0u + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F8E4u); set32(c.r[4], c.r[4].w[0] - 1520u);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x0013F8E4u) [[unlikely]] return; }
L_0013F8E4:
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[20], c.r[20].w[0] - 1520u);
    set32(c.r[3], c.r[19].w[0] << 4);
    c.budget -= 4;
L_0013F8F4:
    set32(c.r[4], c.r[19].w[0] << 2);
    set32(c.r[17], c.r[20].w[0] + c.r[3].w[0]);
    c.r[18].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[3], c.r[3].w[0] - 3800u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_0013F92C; } }
L_0013F910:
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0013F928; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F928u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 331u, depth + 1u); else { c.pc = 0x0011F320u; return; } if (c.pc != 0x0013F928u) [[unlikely]] return; }
L_0013F928:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0013F92C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[18].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013F910u | kUnwind; return; } goto L_0013F910; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[19].w[0] << 4);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013F8F4u | kUnwind; return; } goto L_0013F8F4; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0013F970:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 9;
L_0013F994:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F99Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 69u, depth + 1u); else { c.pc = 0x0012C9C0u; return; } if (c.pc != 0x0013F99Cu) [[unlikely]] return; }
L_0013F99C:
    c.r[3].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] - 1456u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[19].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013F994u | kUnwind; return; } goto L_0013F994; } }
    c.r[21].d[0] = 0ull + 0ull;
    set32(c.r[19], c.r[19].w[0] - 1520u);
    set32(c.r[2], c.r[21].w[0] << 4);
    c.budget -= 3;
L_0013F9D0:
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[18], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[21].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[21].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], c.r[3].w[0] << 9);
    set32(c.r[2], c.r[2].w[0] - 7680u);
    set32(c.r[3], c.r[21].w[0] << 2);
    set32(c.r[17], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[2], c.r[2].w[0] - 3800u);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_0013FA30; } }
L_0013FA04:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[20].w[0] << 1);  if (t) { goto L_0013FA2C; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 7);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FA2Cu); set32(c.r[6], c.r[17].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 272u, depth + 1u); else { c.pc = 0x0013E680u; return; } if (c.pc != 0x0013FA2Cu) [[unlikely]] return; }
L_0013FA2C:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_0013FA30:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[20].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013FA04u | kUnwind; return; } goto L_0013FA04; } }
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[21].w[0] << 4);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013F9D0u | kUnwind; return; } goto L_0013F9D0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 1520u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FA64u); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0013FA64u) [[unlikely]] return; }
L_0013FA64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0013FA90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_0013FAA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FAA8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 376u, depth + 1u); else { c.pc = 0x0013FAD0u; return; } if (c.pc != 0x0013FAA8u) [[unlikely]] return; }
L_0013FAA8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013FAA0u | kUnwind; return; } goto L_0013FAA0; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0013FAD0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] - 1440u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0013FB08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FB04u);  if (depth < kMaxDepth) unit_000B(c, 66u, depth + 1u); else { c.pc = 0x0012C950u; return; } if (c.pc != 0x0013FB04u) [[unlikely]] return; }
L_0013FB04:
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0013FB08:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 3800u);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_0013FB2C; } }
L_0013FB20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FB28u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 331u, depth + 1u); else { c.pc = 0x0011F320u; return; } if (c.pc != 0x0013FB28u) [[unlikely]] return; }
L_0013FB28:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0013FB2C:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013FB20u | kUnwind; return; } goto L_0013FB20; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[3], c.r[3].w[0] - 1456u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0013FB70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FB80u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000F(c, 373u, depth + 1u); else { c.pc = 0x0013FA90u; return; } if (c.pc != 0x0013FB80u) [[unlikely]] return; }
L_0013FB80:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0013FB84:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FB90u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 331u, depth + 1u); else { c.pc = 0x0011F320u; return; } if (c.pc != 0x0013FB90u) [[unlikely]] return; }
L_0013FB90:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013FB84u | kUnwind; return; } goto L_0013FB84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FBA8u);  if (depth < kMaxDepth) unit_0007(c, 323u, depth + 1u); else { c.pc = 0x0011F0B8u; return; } if (c.pc != 0x0013FBA8u) [[unlikely]] return; }
L_0013FBA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0013FBC0:
    c.r[3].d[0] = c.r[4].d[0] & 4ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.r[4].d[0] = c.r[4].d[0] & 3ull;
    set32(c.r[3], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] - 7627u);
    set32(c.r[8], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[8].w[0] << 9);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));  c.pc = t; return; }
L_0013FC00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = c.r[5].d[0] & 255ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FC28u); c.r[6].d[0] = c.r[2].d[0] & 1ull;  if (depth < kMaxDepth) unit_000F(c, 385u, depth + 1u); else { c.pc = 0x0013FBC0u; return; } if (c.pc != 0x0013FC28u) [[unlikely]] return; }
L_0013FC28:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FC38u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_000F(c, 385u, depth + 1u); else { c.pc = 0x0013FBC0u; return; } if (c.pc != 0x0013FC38u) [[unlikely]] return; }
L_0013FC38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0013FC50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0013FC8C; } }
L_0013FC64:
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[2], ld32((c.r[1].w[0] - 1536u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FC7Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 336u, depth + 1u); else { c.pc = 0x0013F580u; return; } if (c.pc != 0x0013FC7Cu) [[unlikely]] return; }
L_0013FC7C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013FCA0; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0013FC8C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 1464u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013FC64u | kUnwind; return; } goto L_0013FC64; } }
L_0013FCA0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0013FCC0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FCE0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000F(c, 398u, depth + 1u); else { c.pc = 0x0013FE00u; return; } if (c.pc != 0x0013FCE0u) [[unlikely]] return; }
L_0013FCE0:
    set32(c.r[4], c.r[29].w[0] + 108u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_0013FD08; } }
L_0013FCEC:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013FCECu | kUnwind; return; } goto L_0013FCEC; } }
L_0013FD08:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[19].d[0] = 0ull + 0ull;
    c.r[5].d[0] = ld8((c.r[1].w[0] - 1456u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] - 1455u));
    st8((c.r[29].w[0] + 109u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[3].d[0] = ld8((c.r[29].w[0] + 109u));
    set32(c.r[20], ld32((c.r[1].w[0] - 1464u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; st8((c.r[29].w[0] + 108u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_0013FD40; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[20], 0u + 4u);  if (t) { goto L_0013FD40; } }
    set32(c.r[19], 0u + 1u);
    c.budget -= 1;
L_0013FD40:
    c.r[4].d[0] = ld8((c.r[29].w[0] + 108u));
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[17].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0013FD60; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0013FD5C; } }
    set32(c.r[19], 0u + 1u);
    c.budget -= 1;
L_0013FD5C:
    c.r[17].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0013FD60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013FDC8; } }
L_0013FD68:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[18], 0u + 60u);  if (t) { goto L_0013FD7C; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[20].d[0];  if (t) { goto L_0013FD7C; } }
    set32(c.r[18], 0u + 120u);
    c.budget -= 1;
L_0013FD7C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[3], c.r[17].w[0] << 1);
    set32(c.r[2], ld32((c.r[1].w[0] - 1536u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[16], c.r[3].w[0] << 6);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[2].w[0] + 184u), 0u);
    set32(c.r[2], ld32((c.r[1].w[0] - 1536u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FDACu); set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_000F(c, 323u, depth + 1u); else { c.pc = 0x0013F220u; return; } if (c.pc != 0x0013FDACu) [[unlikely]] return; }
L_0013FDAC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[5].d[0] = c.r[18].d[0] << 48;
    set32(c.r[2], ld32((c.r[1].w[0] - 1536u)));
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FDC4u); set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_000F(c, 338u, depth + 1u); else { c.pc = 0x0013F5D0u; return; } if (c.pc != 0x0013FDC4u) [[unlikely]] return; }
L_0013FDC4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0013FDC8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 1464u)));
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013FD68u | kUnwind; return; } goto L_0013FD68; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0013FE00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FE14u); c.r[4].d[0] = ld8((c.r[1].w[0] - 1448u));  if (depth < kMaxDepth) unit_000F(c, 400u, depth + 1u); else { c.pc = 0x0013FE40u; return; } if (c.pc != 0x0013FE14u) [[unlikely]] return; }
L_0013FE14:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 1448u));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st8((c.r[1].w[0] - 1448u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0013FE40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FE5Cu); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 69u, depth + 1u); else { c.pc = 0x0012C9C0u; return; } if (c.pc != 0x0013FE5Cu) [[unlikely]] return; }
L_0013FE5C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0013FE6C; } }
    c.r[16].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_0013FE6C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[3], c.r[3].w[0] - 1456u);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0013FE90:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
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
    c.r[2].d[0] = ld8((c.r[1].w[0] - 1480u));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0013FED4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { [[clang::musttail]] return unit_0010(c, 10u, depth); } }
L_0013FED4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013FEE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FEE4u);  if (depth < kMaxDepth) unit_000F(c, 392u, depth + 1u); else { c.pc = 0x0013FCC0u; return; } if (c.pc != 0x0013FEE4u) [[unlikely]] return; }
L_0013FEE4:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[3], c.r[29].w[0] + 172u);
    set32(c.r[16], c.r[16].w[0] - 7680u);
    c.r[21].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[20].d[0] = 0ull + 0ull;
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0013FF20; } }
L_0013FF04:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013FF04u | kUnwind; return; } goto L_0013FF04; } }
L_0013FF20:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FF2Cu); set32(c.r[4], c.r[4].w[0] - 4608u);  if (depth < kMaxDepth) unit_000F(c, 336u, depth + 1u); else { c.pc = 0x0013F580u; return; } if (c.pc != 0x0013FF2Cu) [[unlikely]] return; }
L_0013FF2C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st8((c.r[29].w[0] + 172u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FF3Cu); set32(c.r[4], c.r[4].w[0] - 3840u);  if (depth < kMaxDepth) unit_000F(c, 336u, depth + 1u); else { c.pc = 0x0013F580u; return; } if (c.pc != 0x0013FF3Cu) [[unlikely]] return; }
L_0013FF3C:
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st8((c.r[29].w[0] + 173u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[22], c.r[22].w[0] - 4608u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0010(c, 4u, depth); } }
L_0013FF50:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { [[clang::musttail]] return unit_0010(c, 5u, depth); } }
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 1456u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[23], c.r[2].w[0] + c.r[18].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[2], c.r[2].w[0] - 3800u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[30], c.r[2].w[0] + c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_0010(c, 2u, depth); } }
L_0013FF78:
    c.r[2].d[0] = ld8((c.r[23].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[21].d[0] & 255ull;  if (t) { goto L_0013FF94; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0013FF94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_0013FFFC; } }
L_0013FF94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0013FFBC; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0013FFBC; } }
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FFB4u); st32((c.r[22].w[0] + 184u), 0u);  if (depth < kMaxDepth) unit_000F(c, 323u, depth + 1u); else { c.pc = 0x0013F220u; return; } if (c.pc != 0x0013FFB4u) [[unlikely]] return; }
L_0013FFB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { [[clang::musttail]] return unit_0010(c, 3u, depth); } }
L_0013FFBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FFC4u);  if (depth < kMaxDepth) unit_000F(c, 280u, depth + 1u); else { c.pc = 0x0013E800u; return; } if (c.pc != 0x0013FFC4u) [[unlikely]] return; }
L_0013FFC4:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_0013FFE8; } }
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FFDCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 323u, depth + 1u); else { c.pc = 0x0013F220u; return; } if (c.pc != 0x0013FFDCu) [[unlikely]] return; }
L_0013FFDC:
    set32(c.r[22], c.r[22].w[0] + 192u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { goto L_0013FFFC; } }
L_0013FFE8:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FFF4u); st32((c.r[22].w[0] + 184u), 0u);  if (depth < kMaxDepth) unit_000F(c, 323u, depth + 1u); else { c.pc = 0x0013F220u; return; } if (c.pc != 0x0013FFF4u) [[unlikely]] return; }
L_0013FFF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { [[clang::musttail]] return unit_0010(c, 3u, depth); } }
L_0013FFFC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
    [[clang::musttail]] return unit_0010(c, 1u, depth);
}

}
