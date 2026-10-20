#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_008E[4096] = {
    1, 0, 0, 2, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 5, 0, 6, 0, 0, 0, 0, 7, 0, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 10, 0, 11, 0, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0,
    0, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0,
    0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0,
    0, 0, 0, 0, 42, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0,
    0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 59, 0, 0,
    0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 65, 0, 0, 0, 66, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 71,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 94, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100,
    0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0,
    108, 0, 0, 0, 0, 0, 0, 0, 109, 0, 110, 0, 0, 0, 0, 0, 0, 0, 111, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0,
    0, 0, 0, 114, 0, 115, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 117, 0, 118, 0, 0, 0, 0, 0, 0, 0, 119, 0,
    120, 0, 0, 0, 0, 0, 0, 0, 121, 0, 122, 0, 0, 0, 0, 0, 0, 0, 123, 0, 124, 0, 0, 0, 0, 0, 0, 0, 125, 0, 126, 0,
    0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0,
    0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 139,
    0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 144, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0,
    0, 0, 149, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 152, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0,
    0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0,
    0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0,
    0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0,
    0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182,
    0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 187, 0,
    0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0,
    0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0,
    0, 201, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    204, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 206, 0, 207, 0, 208, 0, 209, 0, 210, 0, 211, 0, 212, 0, 213, 0, 0, 214, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 216, 0, 0, 0, 0, 217, 0, 218, 0, 0, 0, 0, 219, 0, 220, 0, 0, 0, 0, 221,
    0, 0, 0, 0, 222, 0, 223, 0, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 226, 0, 0, 0, 0, 227, 0, 228, 0, 0, 0, 0, 229, 0,
    230, 0, 0, 0, 0, 231, 0, 232, 0, 0, 0, 0, 233, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 236, 0,
    0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0,
    0, 0, 0, 0, 0, 240, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 243, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0,
    0, 245, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 248, 0, 0, 249, 0, 250, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 257, 0, 0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 0,
    0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    263, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 266, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 271, 0, 0, 0,
    0, 272, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 276, 0, 277, 0, 0, 0, 0, 278,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0,
    280, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    284, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 287, 0, 288, 0, 0, 0, 0, 0, 0, 289, 0, 290,
    0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0,
    0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 301, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305,
    0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 308, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0,
    311, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 331, 0, 0, 0,
    332, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 334, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 340, 0,
    0, 341, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0,
    345, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 347, 0, 348, 0, 0, 0, 0, 349, 0, 350, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 354, 0, 0, 0,
    0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 358, 0,
    359, 0, 360, 0, 361, 0, 362, 0, 363, 0, 364, 0, 365, 0, 366, 0, 367, 0, 368, 0, 369, 0, 370, 0, 371, 0, 372, 0, 0, 0, 0, 0,
    0, 0, 373, 0, 374, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0,
    380, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0,
    0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    392, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 396, 397, 0, 398, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 400, 0, 0, 0, 0,
    401, 0, 0, 0, 0, 402, 0, 0, 0, 0, 403, 0, 0, 0, 0, 404, 0, 0, 0, 0, 405, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 408, 0, 0, 0, 409, 0, 0, 0, 0, 410, 0, 0, 411, 0, 0, 0, 0, 412, 0,
    0, 0, 0, 413, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 417, 0, 418, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 420, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0,
    0, 423, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 426, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 431, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0,
};

void unit_008E(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00338000;
    case 2u: goto L_0033800C;
    case 3u: goto L_00338014;
    case 4u: goto L_00338024;
    case 5u: goto L_0033808C;
    case 6u: goto L_00338094;
    case 7u: goto L_003380A8;
    case 8u: goto L_003380BC;
    case 9u: goto L_003380CC;
    case 10u: goto L_00338108;
    case 11u: goto L_00338110;
    case 12u: goto L_00338124;
    case 13u: goto L_00338138;
    case 14u: goto L_00338148;
    case 15u: goto L_0033818C;
    case 16u: goto L_00338248;
    case 17u: goto L_00338258;
    case 18u: goto L_00338280;
    case 19u: goto L_003382CC;
    case 20u: goto L_003382E4;
    case 21u: goto L_003382F4;
    case 22u: goto L_0033830C;
    case 23u: goto L_00338324;
    case 24u: goto L_00338350;
    case 25u: goto L_00338388;
    case 26u: goto L_003383FC;
    case 27u: goto L_00338434;
    case 28u: goto L_00338440;
    case 29u: goto L_00338454;
    case 30u: goto L_0033846C;
    case 31u: goto L_0033849C;
    case 32u: goto L_003384B0;
    case 33u: goto L_003384C4;
    case 34u: goto L_003384DC;
    case 35u: goto L_003384F4;
    case 36u: goto L_00338504;
    case 37u: goto L_00338560;
    case 38u: goto L_003385C0;
    case 39u: goto L_00338618;
    case 40u: goto L_00338650;
    case 41u: goto L_0033866C;
    case 42u: goto L_00338690;
    case 43u: goto L_0033869C;
    case 44u: goto L_003386AC;
    case 45u: goto L_003386CC;
    case 46u: goto L_003386E8;
    case 47u: goto L_00338748;
    case 48u: goto L_0033875C;
    case 49u: goto L_00338774;
    case 50u: goto L_003387C0;
    case 51u: goto L_003387C8;
    case 52u: goto L_003387EC;
    case 53u: goto L_00338804;
    case 54u: goto L_00338908;
    case 55u: goto L_00338928;
    case 56u: goto L_00338940;
    case 57u: goto L_00338958;
    case 58u: goto L_00338968;
    case 59u: goto L_00338974;
    case 60u: goto L_00338990;
    case 61u: goto L_00338A00;
    case 62u: goto L_00338A28;
    case 63u: goto L_00338A60;
    case 64u: goto L_00338AA4;
    case 65u: goto L_00338AB0;
    case 66u: goto L_00338AC0;
    case 67u: goto L_00338ACC;
    case 68u: goto L_00338AE8;
    case 69u: goto L_00338B10;
    case 70u: goto L_00338B70;
    case 71u: goto L_00338B7C;
    case 72u: goto L_00338BB0;
    case 73u: goto L_00338BE0;
    case 74u: goto L_00338C2C;
    case 75u: goto L_00338C3C;
    case 76u: goto L_00338C58;
    case 77u: goto L_00338C68;
    case 78u: goto L_00338D2C;
    case 79u: goto L_00338D38;
    case 80u: goto L_00338D6C;
    case 81u: goto L_00338DA0;
    case 82u: goto L_00338DE0;
    case 83u: goto L_00338DF4;
    case 84u: goto L_00338E54;
    case 85u: goto L_00338E60;
    case 86u: goto L_00338E94;
    case 87u: goto L_00338EC0;
    case 88u: goto L_00338F14;
    case 89u: goto L_00338F24;
    case 90u: goto L_00338F3C;
    case 91u: goto L_00338F78;
    case 92u: goto L_00338FA0;
    case 93u: goto L_00338FE4;
    case 94u: goto L_00338FF0;
    case 95u: goto L_00339024;
    case 96u: goto L_00339060;
    case 97u: goto L_003390A0;
    case 98u: goto L_003390B0;
    case 99u: goto L_003390C8;
    case 100u: goto L_003390FC;
    case 101u: goto L_00339108;
    case 102u: goto L_0033913C;
    case 103u: goto L_00339160;
    case 104u: goto L_003391A4;
    case 105u: goto L_003391B4;
    case 106u: goto L_003391CC;
    case 107u: goto L_003391F8;
    case 108u: goto L_00339200;
    case 109u: goto L_00339220;
    case 110u: goto L_00339228;
    case 111u: goto L_00339248;
    case 112u: goto L_00339250;
    case 113u: goto L_0033926C;
    case 114u: goto L_0033928C;
    case 115u: goto L_00339294;
    case 116u: goto L_003392B0;
    case 117u: goto L_003392D0;
    case 118u: goto L_003392D8;
    case 119u: goto L_003392F8;
    case 120u: goto L_00339300;
    case 121u: goto L_00339320;
    case 122u: goto L_00339328;
    case 123u: goto L_00339348;
    case 124u: goto L_00339350;
    case 125u: goto L_00339370;
    case 126u: goto L_00339378;
    case 127u: goto L_0033939C;
    case 128u: goto L_003393F8;
    case 129u: goto L_00339404;
    case 130u: goto L_00339438;
    case 131u: goto L_00339460;
    case 132u: goto L_003394B8;
    case 133u: goto L_003394C0;
    case 134u: goto L_003394D8;
    case 135u: goto L_003394EC;
    case 136u: goto L_00339514;
    case 137u: goto L_0033952C;
    case 138u: goto L_0033955C;
    case 139u: goto L_0033957C;
    case 140u: goto L_00339594;
    case 141u: goto L_003395A8;
    case 142u: goto L_003395BC;
    case 143u: goto L_003395D4;
    case 144u: goto L_00339604;
    case 145u: goto L_00339624;
    case 146u: goto L_0033963C;
    case 147u: goto L_00339650;
    case 148u: goto L_00339664;
    case 149u: goto L_00339688;
    case 150u: goto L_00339690;
    case 151u: goto L_003396B4;
    case 152u: goto L_003396BC;
    case 153u: goto L_003396D4;
    case 154u: goto L_003396F0;
    case 155u: goto L_00339704;
    case 156u: goto L_00339718;
    case 157u: goto L_00339730;
    case 158u: goto L_0033974C;
    case 159u: goto L_00339760;
    case 160u: goto L_00339774;
    case 161u: goto L_0033979C;
    case 162u: goto L_003397B8;
    case 163u: goto L_003397CC;
    case 164u: goto L_003397E0;
    case 165u: goto L_003397F8;
    case 166u: goto L_00339814;
    case 167u: goto L_00339828;
    case 168u: goto L_0033983C;
    case 169u: goto L_00339854;
    case 170u: goto L_00339870;
    case 171u: goto L_00339884;
    case 172u: goto L_003398E4;
    case 173u: goto L_00339920;
    case 174u: goto L_00339930;
    case 175u: goto L_00339944;
    case 176u: goto L_00339970;
    case 177u: goto L_00339990;
    case 178u: goto L_003399C0;
    case 179u: goto L_00339A14;
    case 180u: goto L_00339A2C;
    case 181u: goto L_00339AA0;
    case 182u: goto L_00339AFC;
    case 183u: goto L_00339B10;
    case 184u: goto L_00339B38;
    case 185u: goto L_00339B4C;
    case 186u: goto L_00339B70;
    case 187u: goto L_00339B78;
    case 188u: goto L_00339B90;
    case 189u: goto L_00339BBC;
    case 190u: goto L_00339BD8;
    case 191u: goto L_00339C04;
    case 192u: goto L_00339C28;
    case 193u: goto L_00339C4C;
    case 194u: goto L_00339C70;
    case 195u: goto L_00339C94;
    case 196u: goto L_00339CB0;
    case 197u: goto L_00339CCC;
    case 198u: goto L_00339CEC;
    case 199u: goto L_00339D60;
    case 200u: goto L_00339D74;
    case 201u: goto L_00339D84;
    case 202u: goto L_00339D98;
    case 203u: goto L_00339DA8;
    case 204u: goto L_00339E80;
    case 205u: goto L_00339EA4;
    case 206u: goto L_00339EAC;
    case 207u: goto L_00339EB4;
    case 208u: goto L_00339EBC;
    case 209u: goto L_00339EC4;
    case 210u: goto L_00339ECC;
    case 211u: goto L_00339ED4;
    case 212u: goto L_00339EDC;
    case 213u: goto L_00339EE4;
    case 214u: goto L_00339EF0;
    case 215u: goto L_00339F28;
    case 216u: goto L_00339F30;
    case 217u: goto L_00339F44;
    case 218u: goto L_00339F4C;
    case 219u: goto L_00339F60;
    case 220u: goto L_00339F68;
    case 221u: goto L_00339F7C;
    case 222u: goto L_00339F90;
    case 223u: goto L_00339F98;
    case 224u: goto L_00339FAC;
    case 225u: goto L_00339FC0;
    case 226u: goto L_00339FC8;
    case 227u: goto L_00339FDC;
    case 228u: goto L_00339FE4;
    case 229u: goto L_00339FF8;
    case 230u: goto L_0033A000;
    case 231u: goto L_0033A014;
    case 232u: goto L_0033A01C;
    case 233u: goto L_0033A030;
    case 234u: goto L_0033A038;
    case 235u: goto L_0033A060;
    case 236u: goto L_0033A078;
    case 237u: goto L_0033A090;
    case 238u: goto L_0033A0C8;
    case 239u: goto L_0033A0F0;
    case 240u: goto L_0033A114;
    case 241u: goto L_0033A120;
    case 242u: goto L_0033A164;
    case 243u: goto L_0033A178;
    case 244u: goto L_0033A1F0;
    case 245u: goto L_0033A204;
    case 246u: goto L_0033A21C;
    case 247u: goto L_0033A250;
    case 248u: goto L_0033A298;
    case 249u: goto L_0033A2A4;
    case 250u: goto L_0033A2AC;
    case 251u: goto L_0033A2C0;
    case 252u: goto L_0033A2E8;
    case 253u: goto L_0033A310;
    case 254u: goto L_0033A32C;
    case 255u: goto L_0033A3D0;
    case 256u: goto L_0033A444;
    case 257u: goto L_0033A44C;
    case 258u: goto L_0033A458;
    case 259u: goto L_0033A474;
    case 260u: goto L_0033A490;
    case 261u: goto L_0033A4AC;
    case 262u: goto L_0033A4D4;
    case 263u: goto L_0033A500;
    case 264u: goto L_0033A520;
    case 265u: goto L_0033A598;
    case 266u: goto L_0033A5B8;
    case 267u: goto L_0033A5C0;
    case 268u: goto L_0033A61C;
    case 269u: goto L_0033A634;
    case 270u: goto L_0033A658;
    case 271u: goto L_0033A670;
    case 272u: goto L_0033A684;
    case 273u: goto L_0033A69C;
    case 274u: goto L_0033A710;
    case 275u: goto L_0033A754;
    case 276u: goto L_0033A760;
    case 277u: goto L_0033A768;
    case 278u: goto L_0033A77C;
    case 279u: goto L_0033A7F0;
    case 280u: goto L_0033A800;
    case 281u: goto L_0033A824;
    case 282u: goto L_0033A870;
    case 283u: goto L_0033A8BC;
    case 284u: goto L_0033A900;
    case 285u: goto L_0033A914;
    case 286u: goto L_0033A938;
    case 287u: goto L_0033A950;
    case 288u: goto L_0033A958;
    case 289u: goto L_0033A974;
    case 290u: goto L_0033A97C;
    case 291u: goto L_0033A990;
    case 292u: goto L_0033A9C8;
    case 293u: goto L_0033A9E8;
    case 294u: goto L_0033AA0C;
    case 295u: goto L_0033AA48;
    case 296u: goto L_0033AA50;
    case 297u: goto L_0033AAD0;
    case 298u: goto L_0033AAE0;
    case 299u: goto L_0033AAF0;
    case 300u: goto L_0033AB34;
    case 301u: goto L_0033AB84;
    case 302u: goto L_0033ABA4;
    case 303u: goto L_0033ABC8;
    case 304u: goto L_0033ABD0;
    case 305u: goto L_0033ABFC;
    case 306u: goto L_0033AC04;
    case 307u: goto L_0033AC30;
    case 308u: goto L_0033AC38;
    case 309u: goto L_0033AC50;
    case 310u: goto L_0033AC68;
    case 311u: goto L_0033AC80;
    case 312u: goto L_0033ACA4;
    case 313u: goto L_0033ACC8;
    case 314u: goto L_0033AD38;
    case 315u: goto L_0033AD60;
    case 316u: goto L_0033AD9C;
    case 317u: goto L_0033ADAC;
    case 318u: goto L_0033AE30;
    case 319u: goto L_0033AE60;
    case 320u: goto L_0033AEA8;
    case 321u: goto L_0033AEBC;
    case 322u: goto L_0033AED4;
    case 323u: goto L_0033AEEC;
    case 324u: goto L_0033AF2C;
    case 325u: goto L_0033AF50;
    case 326u: goto L_0033AFE0;
    case 327u: goto L_0033B0F0;
    case 328u: goto L_0033B158;
    case 329u: goto L_0033B208;
    case 330u: goto L_0033B260;
    case 331u: goto L_0033B270;
    case 332u: goto L_0033B280;
    case 333u: goto L_0033B2A4;
    case 334u: goto L_0033B2AC;
    case 335u: goto L_0033B2B4;
    case 336u: goto L_0033B310;
    case 337u: goto L_0033B320;
    case 338u: goto L_0033B340;
    case 339u: goto L_0033B370;
    case 340u: goto L_0033B378;
    case 341u: goto L_0033B384;
    case 342u: goto L_0033B39C;
    case 343u: goto L_0033B3E8;
    case 344u: goto L_0033B460;
    case 345u: goto L_0033B480;
    case 346u: goto L_0033B49C;
    case 347u: goto L_0033B4B0;
    case 348u: goto L_0033B4B8;
    case 349u: goto L_0033B4CC;
    case 350u: goto L_0033B4D4;
    case 351u: goto L_0033B4E8;
    case 352u: goto L_0033B590;
    case 353u: goto L_0033B5D8;
    case 354u: goto L_0033B5F0;
    case 355u: goto L_0033B610;
    case 356u: goto L_0033B62C;
    case 357u: goto L_0033B670;
    case 358u: goto L_0033B678;
    case 359u: goto L_0033B680;
    case 360u: goto L_0033B688;
    case 361u: goto L_0033B690;
    case 362u: goto L_0033B698;
    case 363u: goto L_0033B6A0;
    case 364u: goto L_0033B6A8;
    case 365u: goto L_0033B6B0;
    case 366u: goto L_0033B6B8;
    case 367u: goto L_0033B6C0;
    case 368u: goto L_0033B6C8;
    case 369u: goto L_0033B6D0;
    case 370u: goto L_0033B6D8;
    case 371u: goto L_0033B6E0;
    case 372u: goto L_0033B6E8;
    case 373u: goto L_0033B708;
    case 374u: goto L_0033B710;
    case 375u: goto L_0033B72C;
    case 376u: goto L_0033B750;
    case 377u: goto L_0033B764;
    case 378u: goto L_0033B7A0;
    case 379u: goto L_0033B7DC;
    case 380u: goto L_0033B800;
    case 381u: goto L_0033B824;
    case 382u: goto L_0033B850;
    case 383u: goto L_0033B890;
    case 384u: goto L_0033B8AC;
    case 385u: goto L_0033B8CC;
    case 386u: goto L_0033B8EC;
    case 387u: goto L_0033B90C;
    case 388u: goto L_0033B92C;
    case 389u: goto L_0033B950;
    case 390u: goto L_0033B9A0;
    case 391u: goto L_0033B9B0;
    case 392u: goto L_0033BA00;
    case 393u: goto L_0033BA14;
    case 394u: goto L_0033BA70;
    case 395u: goto L_0033BA98;
    case 396u: goto L_0033BAB4;
    case 397u: goto L_0033BAB8;
    case 398u: goto L_0033BAC0;
    case 399u: goto L_0033BAD8;
    case 400u: goto L_0033BAEC;
    case 401u: goto L_0033BB00;
    case 402u: goto L_0033BB14;
    case 403u: goto L_0033BB28;
    case 404u: goto L_0033BB3C;
    case 405u: goto L_0033BB50;
    case 406u: goto L_0033BB64;
    case 407u: goto L_0033BBA0;
    case 408u: goto L_0033BBB4;
    case 409u: goto L_0033BBC4;
    case 410u: goto L_0033BBD8;
    case 411u: goto L_0033BBE4;
    case 412u: goto L_0033BBF8;
    case 413u: goto L_0033BC0C;
    case 414u: goto L_0033BC1C;
    case 415u: goto L_0033BCA0;
    case 416u: goto L_0033BCD0;
    case 417u: goto L_0033BD14;
    case 418u: goto L_0033BD1C;
    case 419u: goto L_0033BD30;
    case 420u: goto L_0033BD98;
    case 421u: goto L_0033BDA0;
    case 422u: goto L_0033BDF0;
    case 423u: goto L_0033BE04;
    case 424u: goto L_0033BE20;
    case 425u: goto L_0033BE64;
    case 426u: goto L_0033BE74;
    case 427u: goto L_0033BEBC;
    case 428u: goto L_0033BECC;
    case 429u: goto L_0033BF18;
    case 430u: goto L_0033BF2C;
    case 431u: goto L_0033BF44;
    case 432u: goto L_0033BF54;
    case 433u: goto L_0033BF88;
    case 434u: goto L_0033BFD0;
    case 435u: goto L_0033BFF8;
    default: bad_entry(c, 0x00338000u); return;
    }
L_00338000:
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = ld16((c.r[1].w[0] - 24830u));  if (t) { goto L_00338258; } }
L_0033800C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338014u); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00338014u) [[unlikely]] return; }
L_00338014:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = ld16((c.r[1].w[0] - 24826u));  if (t) { goto L_00338258; } }
L_00338024:
    c.r[1].d[0] = c.r[17].sd[0] < 850ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[17].sd[0] < 900ll ? 1ull : 0ull;  if (t) { goto L_0033803C; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00338258; } }
L_0033803C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 7u);  if (t) { goto L_00338064; } }
    set32(c.r[3], 0u + 2u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], 0u + 255u);
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_00338258; } }
L_00338064:
    c.r[1].d[0] = c.r[17].sd[0] < 950ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 999u);  if (t) { goto L_00338234; } }
    set32(c.r[2], 0u + 6u);
    c.r[1].d[0] = c.r[17].sd[0] < 940ll ? 1ull : 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00338100; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_0033808C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338094u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 108u, depth + 1u); else { c.pc = 0x0012D050u; return; } if (c.pc != 0x00338094u) [[unlikely]] return; }
L_00338094:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003380E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003380A8u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x003380A8u) [[unlikely]] return; }
L_003380A8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] - 25584u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003380BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x003380BCu) [[unlikely]] return; }
L_003380BC:
    c.r[20].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 353u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003380CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x003380CCu) [[unlikely]] return; }
L_003380CC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 353u)));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[2].d[0];  if (t) { goto L_003380E8; } }
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    st32((c.r[2].w[0] + 112u), c.r[16].w[0]);
    c.budget -= 4;
L_003380E8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 118ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033808Cu | kUnwind; return; } goto L_0033808C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u - 1u);  if (t) { goto L_00338178; } }
L_00338100:
    c.r[16].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_00338108:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338110u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 108u, depth + 1u); else { c.pc = 0x0012D050u; return; } if (c.pc != 0x00338110u) [[unlikely]] return; }
L_00338110:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00338164; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338124u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00338124u) [[unlikely]] return; }
L_00338124:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] - 25584u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338138u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00338138u) [[unlikely]] return; }
L_00338138:
    c.r[20].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 353u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338148u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00338148u) [[unlikely]] return; }
L_00338148:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 353u)));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[2].d[0];  if (t) { goto L_00338164; } }
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    st32((c.r[2].w[0] + 112u), c.r[16].w[0]);
    c.budget -= 4;
L_00338164:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 118ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00338108u | kUnwind; return; } goto L_00338108; } }
    set32(c.r[6], 0u - 1u);
    c.budget -= 1;
L_00338178:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[8], 0u + 100u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033818Cu); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 87u, depth + 1u); else { c.pc = 0x00338EC0u; return; } if (c.pc != 0x0033818Cu) [[unlikely]] return; }
L_0033818C:
    set32(c.r[2], 0u + 943u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[18].w[0] << 2);  if (t) { goto L_00338228; } }
    set32(c.r[2], 0u + 942u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 941u);  if (t) { goto L_00338220; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_00338218; } }
    set32(c.r[2], 0u + 940u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 933u);  if (t) { goto L_00338210; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_00338200; } }
    set32(c.r[2], 0u + 932u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 931u);  if (t) { goto L_003381F8; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_003381F0; } }
    set32(c.r[2], 0u + 930u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_003381E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0033825C; } }
L_003381E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], ld32((c.r[29].w[0] + 112u)));  if (t) { goto L_00338258; } }
L_003381F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], ld32((c.r[29].w[0] + 116u)));  if (t) { goto L_00338258; } }
L_003381F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], ld32((c.r[29].w[0] + 120u)));  if (t) { goto L_00338258; } }
L_00338200:
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[19], ld32((c.r[2].w[0] + 108u)));  if (t) { goto L_00338258; } }
L_00338210:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], ld32((c.r[29].w[0] + 112u)));  if (t) { goto L_00338258; } }
L_00338218:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], ld32((c.r[29].w[0] + 116u)));  if (t) { goto L_00338258; } }
L_00338220:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], ld32((c.r[29].w[0] + 120u)));  if (t) { goto L_00338258; } }
L_00338228:
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[19], ld32((c.r[2].w[0] + 108u)));  if (t) { goto L_00338258; } }
L_00338234:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_00338258; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338248u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00338248u) [[unlikely]] return; }
L_00338248:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[1].w[0] - 25584u)));  if (t) { goto L_0033825C; } }
L_00338258:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0033825C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 592u);  c.pc = t; return; }
L_00338280:
    set32(c.r[29], c.r[29].w[0] - 720u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 188u), c.r[7].w[0]);
    c.r[19].d[0] = ld16((c.r[7].w[0] + 2u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003382CCu); st32((c.r[29].w[0] + 184u), c.r[20].w[0]);  if (depth < kMaxDepth) unit_008D(c, 238u, depth + 1u); else { c.pc = 0x00336B70u; return; } if (c.pc != 0x003382CCu) [[unlikely]] return; }
L_003382CC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 22u)));
    c.r[16].d[0] = 0ull + 0ull;
    c.r[22].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[2], 0u + 255u);
    st32((c.r[30].w[0]), c.r[2].w[0]);
    c.budget -= 6;
L_003382E4:
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003382F4u); set32(c.r[4], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_008E(c, 389u, depth + 1u); else { c.pc = 0x0033B950u; return; } if (c.pc != 0x003382F4u) [[unlikely]] return; }
L_003382F4:
    c.r[17].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], 0u + 255u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_00338574; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033830Cu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0033830Cu) [[unlikely]] return; }
L_0033830C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[6].d[0] = ld8((c.r[1].w[0] - 25576u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338324u); set32(c.r[4], c.r[29].w[0] + 688u);  if (depth < kMaxDepth) unit_008D(c, 319u, depth + 1u); else { c.pc = 0x00337A20u; return; } if (c.pc != 0x00338324u) [[unlikely]] return; }
L_00338324:
    set32(c.r[18], c.r[29].w[0] + 704u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 255u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0033836C; } }
    st32((c.r[30].w[0]), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0])));
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338350u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 307u, depth + 1u); else { c.pc = 0x0030B240u; return; } if (c.pc != 0x00338350u) [[unlikely]] return; }
L_00338350:
    set32(c.r[3], ld32((c.r[29].w[0] + 688u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0033836C; } }
    set32(c.r[2], ld32((c.r[18].w[0])));
    st8((c.r[20].w[0] + 22u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0033836C:
    set32(c.r[2], 0u + 118u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_003384B8; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338388u); set32(c.r[7], c.r[29].w[0] + 716u);  if (depth < kMaxDepth) unit_008E(c, 241u, depth + 1u); else { c.pc = 0x0033A120u; return; } if (c.pc != 0x00338388u) [[unlikely]] return; }
L_00338388:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[3], c.r[2].w[0] << 5);  if (t) { goto L_0033839C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 118u);  if (t) { goto L_003383A8; } }
L_0033839C:
    set32(c.r[2], ld32((c.r[29].w[0] + 184u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 3;
L_003383A8:
    set32(c.r[3], ld32((c.r[29].w[0] + 716u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003383C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 672u), c.r[4].w[0]);  if (t) { goto L_003383D4; } }
L_003383C0:
    set32(c.r[2], ld32((c.r[29].w[0] + 184u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    st32((c.r[29].w[0] + 672u), c.r[4].w[0]);
    c.budget -= 5;
L_003383D4:
    set32(c.r[5], c.r[29].w[0] + 192u);
    st32((c.r[29].w[0] + 676u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[29].w[0] + 680u), c.r[19].w[0]);
    set32(c.r[6], c.r[29].w[0] + 688u);
    st32((c.r[29].w[0] + 684u), c.r[16].w[0]);
    set32(c.r[7], ld32((c.r[21].w[0])));
    set32(c.r[8], ld32((c.r[7].w[0] + 168u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003383FCu); set32(c.r[9], c.r[29].w[0] + 672u);  if (depth < kMaxDepth) unit_008E(c, 38u, depth + 1u); else { c.pc = 0x003385C0u; return; } if (c.pc != 0x003383FCu) [[unlikely]] return; }
L_003383FC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_00338414; } }
    set32(c.r[2], 0u + 50u);
    set32(c.r[18], 0u + 1u);
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    c.budget -= 3;
L_00338414:
    set32(c.r[3], ld32((c.r[29].w[0] + 700u)));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00338438; } }
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338434u); set32(c.r[6], c.r[29].w[0] + 688u);  if (depth < kMaxDepth) unit_008E(c, 63u, depth + 1u); else { c.pc = 0x00338A60u; return; } if (c.pc != 0x00338434u) [[unlikely]] return; }
L_00338434:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00338438:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;  if (t) { goto L_0033847C; } }
L_00338440:
    set32(c.r[4], ld32((c.r[21].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[23], ld32((c.r[2].w[0] + 192u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338454u); c.r[5].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 299u, depth + 1u); else { c.pc = 0x0030B080u; return; } if (c.pc != 0x00338454u) [[unlikely]] return; }
L_00338454:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[5].d[0] = c.r[23].d[0] + 0ull;  if (t) { goto L_00338474; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 688u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033846Cu); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 282u, depth + 1u); else { c.pc = 0x0033A870u; return; } if (c.pc != 0x0033846Cu) [[unlikely]] return; }
L_0033846C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;  if (t) { goto L_00338488; } }
L_00338474:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 2;
L_0033847C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00338440u | kUnwind; return; } goto L_00338440; } }
    c.r[2].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00338488:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_003384F8; } }
    set32(c.r[4], 0u + 50u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033849Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012CDE0u; return; } if (c.pc != 0x0033849Cu) [[unlikely]] return; }
L_0033849C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 50u);
    set32(c.r[6], c.r[29].w[0] + 688u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003384B0u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 282u, depth + 1u); else { c.pc = 0x0033A870u; return; } if (c.pc != 0x003384B0u) [[unlikely]] return; }
L_003384B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003384F4; } }
L_003384B8:
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003384C4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 299u, depth + 1u); else { c.pc = 0x0030B080u; return; } if (c.pc != 0x003384C4u) [[unlikely]] return; }
L_003384C4:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003384E4; } }
    set32(c.r[4], 0u + 50u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003384DCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012CDE0u; return; } if (c.pc != 0x003384DCu) [[unlikely]] return; }
L_003384DC:
    set32(c.r[17], 0u + 50u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_003384E4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 688u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003384F4u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 282u, depth + 1u); else { c.pc = 0x0033A870u; return; } if (c.pc != 0x003384F4u) [[unlikely]] return; }
L_003384F4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_003384F8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338504u); st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_000C(c, 52u, depth + 1u); else { c.pc = 0x00130530u; return; } if (c.pc != 0x00338504u) [[unlikely]] return; }
L_00338504:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 2u);  if (t) { goto L_0033854C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00338540; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00338538; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00338530; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00338558; } }
L_00338530:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 4u), 0u);  if (t) { goto L_00338554; } }
L_00338538:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 4u), c.r[4].w[0]);  if (t) { goto L_00338554; } }
L_00338540:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_00338554; } }
L_0033854C:
    set32(c.r[2], 0u + 6u);
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_00338554:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00338558:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338560u);  if (depth < kMaxDepth) unit_008D(c, 238u, depth + 1u); else { c.pc = 0x00336B70u; return; } if (c.pc != 0x00338560u) [[unlikely]] return; }
L_00338560:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 16u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    st8((c.r[20].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[20], c.r[20].w[0] + 32u);
    c.budget -= 5;
L_00338574:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.r[2].d[0] = c.r[22].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003382E4u | kUnwind; return; } goto L_003382E4; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
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
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 720u);  c.pc = t; return; }
L_003385C0:
    set32(c.r[29], c.r[29].w[0] - 640u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 19;
    { const bool t = c.r[20].d[0] == 0ull; c.r[19].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00338618; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338618u); set32(c.r[4], ld32((c.r[20].w[0] + 8u)));  if (depth < kMaxDepth) unit_008E(c, 284u, depth + 1u); else { c.pc = 0x0033A900u; return; } if (c.pc != 0x00338618u) [[unlikely]] return; }
L_00338618:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00338674; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00338674; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00338674; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[19], ld32((c.r[20].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338650u); set32(c.r[4], ld32((c.r[20].w[0] + 8u)));  if (depth < kMaxDepth) unit_008E(c, 244u, depth + 1u); else { c.pc = 0x0033A1F0u; return; } if (c.pc != 0x00338650u) [[unlikely]] return; }
L_00338650:
    set32(c.r[8], ld32((c.r[20].w[0] + 4u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033866Cu); c.r[9].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 255u, depth + 1u); else { c.pc = 0x0033A3D0u; return; } if (c.pc != 0x0033866Cu) [[unlikely]] return; }
L_0033866C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_003389CC; } }
L_00338674:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_003387BC; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338690u); set32(c.r[4], c.r[29].w[0] + 632u);  if (depth < kMaxDepth) unit_008E(c, 214u, depth + 1u); else { c.pc = 0x00339EF0u; return; } if (c.pc != 0x00338690u) [[unlikely]] return; }
L_00338690:
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_00338700; } }
L_0033869C:
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003386ACu); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 307u, depth + 1u); else { c.pc = 0x0030B240u; return; } if (c.pc != 0x003386ACu) [[unlikely]] return; }
L_003386AC:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 118u);
    c.budget -= 4;
    { const bool t = c.r[20].d[0] == c.r[2].d[0]; set32(c.r[3], c.r[19].w[0] - c.r[17].w[0]);  if (t) { goto L_00338710; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 632u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003386CCu); c.r[6].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 61u, depth + 1u); else { c.pc = 0x00338A00u; return; } if (c.pc != 0x003386CCu) [[unlikely]] return; }
L_003386CC:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003386FC; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003386E8u); c.r[6].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 61u, depth + 1u); else { c.pc = 0x00338A00u; return; } if (c.pc != 0x003386E8u) [[unlikely]] return; }
L_003386E8:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003386FC; } }
    st32((c.r[19].w[0]), c.r[20].w[0]);
    set32(c.r[19], c.r[19].w[0] + 4u);
    c.budget -= 2;
L_003386FC:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_00338700:
    c.r[2].d[0] = c.r[21].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033869Cu | kUnwind; return; } goto L_0033869C; } }
    set32(c.r[3], c.r[19].w[0] - c.r[17].w[0]);
    c.budget -= 1;
L_00338710:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_00338720; } }
    set32(c.r[2], c.r[3].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_00338720:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003389C8; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[6], 0u + 75u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[8], 0u - 1u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338748u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008E(c, 131u, depth + 1u); else { c.pc = 0x00339460u; return; } if (c.pc != 0x00338748u) [[unlikely]] return; }
L_00338748:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.r[19].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00338790; } }
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 1;
L_0033875C:
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[18], c.r[2].w[0] + 160u);
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338774u); c.r[6].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 61u, depth + 1u); else { c.pc = 0x00338A00u; return; } if (c.pc != 0x00338774u) [[unlikely]] return; }
L_00338774:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033878C; } }
    set32(c.r[2], ld32((c.r[18].w[0])));
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + 4u);
    c.budget -= 3;
L_0033878C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00338790:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033875Cu | kUnwind; return; } goto L_0033875C; } }
    set32(c.r[3], c.r[19].w[0] - c.r[17].w[0]);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_003389C8; } }
    set32(c.r[2], c.r[3].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003389C8; } }
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003387BC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_003387C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003387C8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 108u, depth + 1u); else { c.pc = 0x0012D050u; return; } if (c.pc != 0x003387C8u) [[unlikely]] return; }
L_003387C8:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003389A4; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_003387FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003387ECu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 330u, depth + 1u); else { c.pc = 0x0033B260u; return; } if (c.pc != 0x003387ECu) [[unlikely]] return; }
L_003387EC:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003389A4; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_003387FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338804u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00338804u) [[unlikely]] return; }
L_00338804:
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00338858; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_00338844; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00338830; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 8u)));  if (t) { goto L_00338874; } }
L_00338830:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 353u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00338870; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] + 1u);  if (t) { goto L_003389A8; } }
L_00338844:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 353u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00338870; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003389A4; } }
L_00338858:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 353u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00338870; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003389A4; } }
L_00338870:
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_00338874:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003388C4; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_003388B0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0033889C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 12u)));  if (t) { goto L_003388E0; } }
L_0033889C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 354u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003388DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003389A4; } }
L_003388B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 354u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_003388DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003389A4; } }
L_003388C4:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 354u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003388DC; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003389A4; } }
L_003388DC:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 1;
L_003388E0:
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00338968; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 10240u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00338000u < 16384u) { entry = entries_008E[(t - 0x00338000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00338908:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 355u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00338968; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00338968; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003389A4; } }
L_00338928:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 355u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00338968; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003389A4; } }
L_00338940:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 355u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00338968; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003389A4; } }
L_00338958:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 355u)));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003389A4; } }
L_00338968:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338974u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 309u, depth + 1u); else { c.pc = 0x0030B290u; return; } if (c.pc != 0x00338974u) [[unlikely]] return; }
L_00338974:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003389A4; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338990u); c.r[6].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 61u, depth + 1u); else { c.pc = 0x00338A00u; return; } if (c.pc != 0x00338990u) [[unlikely]] return; }
L_00338990:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003389A4; } }
    st32((c.r[19].w[0]), c.r[20].w[0]);
    set32(c.r[19], c.r[19].w[0] + 4u);
    c.budget -= 2;
L_003389A4:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_003389A8:
    c.r[2].d[0] = c.r[20].sd[0] < 118ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003387C0u | kUnwind; return; } goto L_003387C0; } }
    set32(c.r[3], c.r[19].w[0] - c.r[17].w[0]);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_003389C8; } }
    set32(c.r[2], c.r[3].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_003389C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_003389CC:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 640u);  c.pc = t; return; }
L_00338A00:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00338A10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00338A50; } }
L_00338A10:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] > 0; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00338A20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00338A50; } }
L_00338A20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;  if (t) { goto L_00338A48; } }
L_00338A28:
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00338A3C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00338A50; } }
L_00338A3C:
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
L_00338A48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00338A28u | kUnwind; return; } goto L_00338A28; } }
L_00338A50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00338A60:
    set32(c.r[29], c.r[29].w[0] - 960u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 15;
    { const bool t = c.r[20].sd[0] <= 0; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00338BB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338AA4u); set32(c.r[4], c.r[20].w[0] << 3);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x00338AA4u) [[unlikely]] return; }
L_00338AA4:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338AB0u); c.r[18].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 225u, depth + 1u); else { c.pc = 0x002B6350u; return; } if (c.pc != 0x00338AB0u) [[unlikely]] return; }
L_00338AB0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338AC0u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_006D(c, 322u, depth + 1u); else { c.pc = 0x002B7450u; return; } if (c.pc != 0x00338AC0u) [[unlikely]] return; }
L_00338AC0:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00338B34; } }
L_00338ACC:
    set32(c.r[16], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[30], ld32((c.r[22].w[0] + 12u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338AE8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00338AE8u) [[unlikely]] return; }
L_00338AE8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 355u)));
    c.budget -= 3;
    { const bool t = c.r[30].d[0] == c.r[2].d[0];  if (t) { goto L_00338B00; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_00338B2C; } }
L_00338B00:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338B10u); c.r[6].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 61u, depth + 1u); else { c.pc = 0x00338A00u; return; } if (c.pc != 0x00338B10u) [[unlikely]] return; }
L_00338B10:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00338B28; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_00338B2C; } }
L_00338B28:
    st32((c.r[18].w[0] + 4u), 0u);
    c.budget -= 1;
L_00338B2C:
    set32(c.r[18], c.r[18].w[0] + 8u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_00338B34:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00338ACCu | kUnwind; return; } goto L_00338ACC; } }
    set32(c.r[2], 0u + 50u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[1].w[0] - 1560u), c.r[2].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[2], ld32((c.r[22].w[0] + 12u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], 0u + 8u);
    set32(c.r[7], c.r[7].w[0] + 28400u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338B70u); st32((c.r[1].w[0] - 1568u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 126u, depth + 1u); else { c.pc = 0x00126150u; return; } if (c.pc != 0x00338B70u) [[unlikely]] return; }
L_00338B70:
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00338B94; } }
L_00338B7C:
    set32(c.r[4], ld32((c.r[6].w[0])));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    c.budget -= 6;
L_00338B94:
    c.r[3].d[0] = c.r[5].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00338B7Cu | kUnwind; return; } goto L_00338B7C; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00338BB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338BB0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00338BB0u) [[unlikely]] return; }
L_00338BB0:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 960u);  c.pc = t; return; }
L_00338BE0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 172u), c.r[7].w[0]);
    c.budget -= 17;
    { const bool t = c.r[21].sd[0] <= 0; st32((c.r[29].w[0] + 168u), c.r[8].w[0]);  if (t) { goto L_00338D6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338C2Cu); set32(c.r[4], c.r[21].w[0] << 4);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x00338C2Cu) [[unlikely]] return; }
L_00338C2C:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00338CFC; } }
L_00338C3C:
    st32((c.r[19].w[0]), c.r[18].w[0]);
    set32(c.r[16], c.r[23].w[0] + c.r[2].w[0]);
    c.r[22].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_00338C74; } }
L_00338C58:
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = ld16((c.r[2].w[0] + 26u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338C68u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00338C68u) [[unlikely]] return; }
L_00338C68:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 356u));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[22], c.r[22].w[0] + c.r[2].w[0]);
    c.budget -= 3;
L_00338C74:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 22u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00338C58u | kUnwind; return; } goto L_00338C58; } }
    c.f[1] = c.r[3].w[0];
    set32(c.r[2], 0u - 1u);
    c.f[0] = c.r[22].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[3], 0u + 1u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 8u), c.f[0]);
    c.budget -= 12;
    { const bool t = c.r[30].d[0] == c.r[2].d[0]; st32((c.r[19].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_00338CCC; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 23u)));
    c.budget -= 4;
    { const bool t = c.r[30].d[0] != c.r[2].d[0];  if (t) { goto L_00338CCC; } }
    st32((c.r[19].w[0] + 12u), 0u);
    c.budget -= 1;
L_00338CCC:
    set32(c.r[2], ld32((c.r[29].w[0] + 172u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00338CF4; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 172u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00338CF4; } }
    st32((c.r[19].w[0] + 12u), 0u);
    c.budget -= 1;
L_00338CF4:
    set32(c.r[19], c.r[19].w[0] + 16u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 2;
L_00338CFC:
    c.r[2].d[0] = c.r[18].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[18].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00338C3Cu | kUnwind; return; } goto L_00338C3C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 168u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00330000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[6], 0u + 16u);
    set32(c.r[7], c.r[7].w[0] + 29744u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338D2Cu); st32((c.r[1].w[0] - 1560u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 126u, depth + 1u); else { c.pc = 0x00126150u; return; } if (c.pc != 0x00338D2Cu) [[unlikely]] return; }
L_00338D2C:
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00338D50; } }
L_00338D38:
    set32(c.r[4], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[23].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    c.budget -= 6;
L_00338D50:
    c.r[3].d[0] = c.r[5].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00338D38u | kUnwind; return; } goto L_00338D38; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00338D6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338D6Cu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00338D6Cu) [[unlikely]] return; }
L_00338D6C:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00338DA0:
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
    c.budget -= 12;
    { const bool t = c.r[19].sd[0] <= 0; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00338E94; } }
    set32(c.r[2], c.r[19].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338DE0u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x00338DE0u) [[unlikely]] return; }
L_00338DE0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00338E28; } }
L_00338DF4:
    st32((c.r[6].w[0]), c.r[5].w[0]);
    set32(c.r[4], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    st32((c.r[6].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 22u)));
    c.budget -= 8;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_00338E1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 8u), 0u);  if (t) { goto L_00338E20; } }
L_00338E1C:
    st32((c.r[6].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 1;
L_00338E20:
    set32(c.r[6], c.r[6].w[0] + 12u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 2;
L_00338E28:
    c.r[2].d[0] = c.r[5].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[5].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00338DF4u | kUnwind; return; } goto L_00338DF4; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00330000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 12u);
    set32(c.r[7], c.r[7].w[0] + 29904u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338E54u); st32((c.r[1].w[0] - 1560u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0009(c, 126u, depth + 1u); else { c.pc = 0x00126150u; return; } if (c.pc != 0x00338E54u) [[unlikely]] return; }
L_00338E54:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00338E78; } }
L_00338E60:
    set32(c.r[4], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[6], c.r[6].w[0] + 12u);
    c.budget -= 6;
L_00338E78:
    c.r[3].d[0] = c.r[5].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00338E60u | kUnwind; return; } goto L_00338E60; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00338E94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338E94u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00338E94u) [[unlikely]] return; }
L_00338E94:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00338EC0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 17;
    { const bool t = c.r[21].sd[0] <= 0; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00339024; } }
    set32(c.r[2], c.r[21].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338F14u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x00338F14u) [[unlikely]] return; }
L_00338F14:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00338FB8; } }
L_00338F24:
    set32(c.r[16], c.r[22].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338F3Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00338F3Cu) [[unlikely]] return; }
L_00338F3C:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 356u));
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], 0u + 50u);
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00338F60; } }
    set32(c.r[2], 0u + 255u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00338FB0; } }
L_00338F60:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[2].d[0]; st32((c.r[18].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00338F88; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338F78u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00338F78u) [[unlikely]] return; }
L_00338F78:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 353u)));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[2].d[0];  if (t) { goto L_00338F88; } }
    st32((c.r[18].w[0] + 8u), 0u);
    c.budget -= 1;
L_00338F88:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[23].d[0] == c.r[2].d[0];  if (t) { goto L_00338FB0; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338FA0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00338FA0u) [[unlikely]] return; }
L_00338FA0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 354u)));
    c.budget -= 3;
    { const bool t = c.r[23].d[0] != c.r[2].d[0];  if (t) { goto L_00338FB0; } }
    st32((c.r[18].w[0] + 8u), 0u);
    c.budget -= 1;
L_00338FB0:
    set32(c.r[18], c.r[18].w[0] + 12u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_00338FB8:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00338F24u | kUnwind; return; } goto L_00338F24; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00330000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[6], 0u + 12u);
    set32(c.r[7], c.r[7].w[0] + 30288u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338FE4u); st32((c.r[1].w[0] - 1560u), c.r[30].w[0]);  if (depth < kMaxDepth) unit_0009(c, 126u, depth + 1u); else { c.pc = 0x00126150u; return; } if (c.pc != 0x00338FE4u) [[unlikely]] return; }
L_00338FE4:
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00339008; } }
L_00338FF0:
    set32(c.r[4], ld32((c.r[6].w[0])));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[22].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[6], c.r[6].w[0] + 12u);
    c.budget -= 6;
L_00339008:
    c.r[3].d[0] = c.r[5].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00338FF0u | kUnwind; return; } goto L_00338FF0; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00339024; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339024u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00339024u) [[unlikely]] return; }
L_00339024:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00339060:
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
    c.budget -= 12;
    { const bool t = c.r[20].sd[0] <= 0; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0033913C; } }
    set32(c.r[2], c.r[20].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003390A0u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x003390A0u) [[unlikely]] return; }
L_003390A0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003390D8; } }
L_003390B0:
    set32(c.r[3], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003390C8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x003390C8u) [[unlikely]] return; }
L_003390C8:
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    st32((c.r[17].w[0] + 8u), c.r[19].w[0]);
    set32(c.r[17], c.r[17].w[0] + 12u);
    c.budget -= 4;
L_003390D8:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003390B0u | kUnwind; return; } goto L_003390B0; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00330000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], 0u + 12u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003390FCu); set32(c.r[7], c.r[7].w[0] + 29952u);  if (depth < kMaxDepth) unit_0009(c, 126u, depth + 1u); else { c.pc = 0x00126150u; return; } if (c.pc != 0x003390FCu) [[unlikely]] return; }
L_003390FC:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00339120; } }
L_00339108:
    set32(c.r[4], ld32((c.r[6].w[0])));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[6], c.r[6].w[0] + 12u);
    c.budget -= 6;
L_00339120:
    c.r[3].d[0] = c.r[5].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00339108u | kUnwind; return; } goto L_00339108; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0033913C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033913Cu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0033913Cu) [[unlikely]] return; }
L_0033913C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00339160:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 13;
    { const bool t = c.r[20].sd[0] <= 0; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00339438; } }
    set32(c.r[2], c.r[20].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003391A4u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x003391A4u) [[unlikely]] return; }
L_003391A4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003393D4; } }
L_003391B4:
    set32(c.r[3], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003391CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x003391CCu) [[unlikely]] return; }
L_003391CC:
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.r[1].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[17].w[0] + 8u), 0u);  if (t) { goto L_00339394; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 10208u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00338000u < 16384u) { entry = entries_008E[(t - 0x00338000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003391F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339200u); set32(c.r[22], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00339200u) [[unlikely]] return; }
L_00339200:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24836u));
    c.budget -= 5;
    { const bool t = c.r[22].d[0] != c.r[2].d[0];  if (t) { goto L_00339394; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00339394; } }
L_00339220:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339228u); set32(c.r[22], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00339228u) [[unlikely]] return; }
L_00339228:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24834u));
    c.budget -= 5;
    { const bool t = c.r[22].d[0] != c.r[2].d[0];  if (t) { goto L_00339394; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00339394; } }
L_00339248:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339250u); set32(c.r[22], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00339250u) [[unlikely]] return; }
L_00339250:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24832u));
    c.budget -= 5;
    { const bool t = c.r[22].d[0] == c.r[2].d[0];  if (t) { goto L_00339280; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033926Cu); set32(c.r[22], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0033926Cu) [[unlikely]] return; }
L_0033926C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24830u));
    c.budget -= 5;
    { const bool t = c.r[22].d[0] != c.r[2].d[0];  if (t) { goto L_00339394; } }
L_00339280:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00339394; } }
L_0033928C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339294u); set32(c.r[22], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00339294u) [[unlikely]] return; }
L_00339294:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24828u));
    c.budget -= 5;
    { const bool t = c.r[22].d[0] == c.r[2].d[0];  if (t) { goto L_003392C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003392B0u); set32(c.r[22], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x003392B0u) [[unlikely]] return; }
L_003392B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24826u));
    c.budget -= 5;
    { const bool t = c.r[22].d[0] != c.r[2].d[0];  if (t) { goto L_00339394; } }
L_003392C4:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00339394; } }
L_003392D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003392D8u); set32(c.r[22], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x003392D8u) [[unlikely]] return; }
L_003392D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24824u));
    c.budget -= 5;
    { const bool t = c.r[22].d[0] != c.r[2].d[0];  if (t) { goto L_00339394; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00339394; } }
L_003392F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339300u); set32(c.r[22], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00339300u) [[unlikely]] return; }
L_00339300:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24822u));
    c.budget -= 5;
    { const bool t = c.r[22].d[0] != c.r[2].d[0];  if (t) { goto L_00339394; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00339394; } }
L_00339320:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339328u); set32(c.r[22], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00339328u) [[unlikely]] return; }
L_00339328:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24820u));
    c.budget -= 5;
    { const bool t = c.r[22].d[0] != c.r[2].d[0];  if (t) { goto L_00339394; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00339394; } }
L_00339348:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339350u); set32(c.r[22], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00339350u) [[unlikely]] return; }
L_00339350:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24818u));
    c.budget -= 5;
    { const bool t = c.r[22].d[0] != c.r[2].d[0];  if (t) { goto L_00339394; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00339394; } }
L_00339370:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339378u); set32(c.r[22], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00339378u) [[unlikely]] return; }
L_00339378:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24816u));
    c.budget -= 5;
    { const bool t = c.r[22].d[0] != c.r[2].d[0];  if (t) { goto L_00339394; } }
    set32(c.r[2], 0u + 3u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 2;
L_00339394:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033939Cu); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_008E(c, 332u, depth + 1u); else { c.pc = 0x0033B280u; return; } if (c.pc != 0x0033939Cu) [[unlikely]] return; }
L_0033939C:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_003393BC; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_003393CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_003393CC; } }
L_003393BC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003393CC; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 2;
L_003393CC:
    set32(c.r[17], c.r[17].w[0] + 12u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_003393D4:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003391B4u | kUnwind; return; } goto L_003391B4; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00330000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], 0u + 12u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003393F8u); set32(c.r[7], c.r[7].w[0] + 27744u);  if (depth < kMaxDepth) unit_0009(c, 126u, depth + 1u); else { c.pc = 0x00126150u; return; } if (c.pc != 0x003393F8u) [[unlikely]] return; }
L_003393F8:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0033941C; } }
L_00339404:
    set32(c.r[4], ld32((c.r[6].w[0])));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[6], c.r[6].w[0] + 12u);
    c.budget -= 6;
L_0033941C:
    c.r[3].d[0] = c.r[5].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00339404u | kUnwind; return; } goto L_00339404; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00339438; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339438u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00339438u) [[unlikely]] return; }
L_00339438:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00339460:
    set32(c.r[29], c.r[29].w[0] - 688u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[7].d[0] & 255ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[20], c.r[29].w[0] + 208u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 200u), c.r[8].w[0]);
    c.budget -= 22;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 207u), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { goto L_0033989C; } }
L_003394B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003394C0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 108u, depth + 1u); else { c.pc = 0x0012D050u; return; } if (c.pc != 0x003394C0u) [[unlikely]] return; }
L_003394C0:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00339898; } }
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003394D8u); c.r[6].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 61u, depth + 1u); else { c.pc = 0x00338A00u; return; } if (c.pc != 0x003394D8u) [[unlikely]] return; }
L_003394D8:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00339898; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003394ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x003394ECu) [[unlikely]] return; }
L_003394EC:
    c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00339890; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 10160u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00338000u < 16384u) { entry = entries_008E[(t - 0x00338000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00339514:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 346u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00339898; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033952Cu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0033952Cu) [[unlikely]] return; }
L_0033952C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24836u));
    c.budget -= 5;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_00339898; } }
    set32(c.r[2], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033958C; } }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_0033958C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033955Cu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0033955Cu) [[unlikely]] return; }
L_0033955C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] - 25584u)));
    c.budget -= 5;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_0033958C; } }
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033957Cu); set32(c.r[5], 0u + 356u);  if (depth < kMaxDepth) unit_0058(c, 46u, depth + 1u); else { c.pc = 0x00260440u; return; } if (c.pc != 0x0033957Cu) [[unlikely]] return; }
L_0033957C:
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00339898; } }
L_0033958C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339594u); c.r[19].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 353u)));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00339594u) [[unlikely]] return; }
L_00339594:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[4].d[0] = ld16((c.r[1].w[0] - 24836u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003395A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x003395A8u) [[unlikely]] return; }
L_003395A8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 353u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_00339890; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_0033989C; } }
L_003395BC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 346u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00339898; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003395D4u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x003395D4u) [[unlikely]] return; }
L_003395D4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24834u));
    c.budget -= 5;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_00339898; } }
    set32(c.r[2], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00339634; } }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_00339634; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339604u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00339604u) [[unlikely]] return; }
L_00339604:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] - 25584u)));
    c.budget -= 5;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_00339634; } }
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339624u); set32(c.r[5], 0u + 356u);  if (depth < kMaxDepth) unit_0058(c, 46u, depth + 1u); else { c.pc = 0x00260440u; return; } if (c.pc != 0x00339624u) [[unlikely]] return; }
L_00339624:
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00339898; } }
L_00339634:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033963Cu); c.r[19].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 353u)));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0033963Cu) [[unlikely]] return; }
L_0033963C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[4].d[0] = ld16((c.r[1].w[0] - 24834u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339650u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00339650u) [[unlikely]] return; }
L_00339650:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 353u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_00339890; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00339898; } }
L_00339664:
    c.r[8].d[0] = ld8((c.r[29].w[0] + 207u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[9], ld32((c.r[29].w[0] + 200u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[30].d[0] + 0ull;
    c.r[10].d[0] = c.r[21].d[0] + 0ull;
    c.r[11].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339688u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008E(c, 181u, depth + 1u); else { c.pc = 0x00339AA0u; return; } if (c.pc != 0x00339688u) [[unlikely]] return; }
L_00339688:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_00339A70; } }
L_00339690:
    c.r[8].d[0] = ld8((c.r[29].w[0] + 207u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[9], ld32((c.r[29].w[0] + 200u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[30].d[0] + 0ull;
    c.r[10].d[0] = c.r[21].d[0] + 0ull;
    c.r[11].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003396B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008E(c, 181u, depth + 1u); else { c.pc = 0x00339AA0u; return; } if (c.pc != 0x003396B4u) [[unlikely]] return; }
L_003396B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00339A6C; } }
L_003396BC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 346u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00339898; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003396D4u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x003396D4u) [[unlikely]] return; }
L_003396D4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24824u));
    c.budget -= 5;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_00339898; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003396F0u); c.r[19].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 353u)));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x003396F0u) [[unlikely]] return; }
L_003396F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[4].d[0] = ld16((c.r[1].w[0] - 24824u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339704u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00339704u) [[unlikely]] return; }
L_00339704:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 353u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_00339890; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00339898; } }
L_00339718:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 346u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00339898; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339730u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00339730u) [[unlikely]] return; }
L_00339730:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24822u));
    c.budget -= 5;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_00339898; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033974Cu); c.r[19].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 353u)));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0033974Cu) [[unlikely]] return; }
L_0033974C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[4].d[0] = ld16((c.r[1].w[0] - 24822u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339760u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00339760u) [[unlikely]] return; }
L_00339760:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 353u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_00339890; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00339898; } }
L_00339774:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 346u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00339898; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 349u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00339898; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033979Cu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0033979Cu) [[unlikely]] return; }
L_0033979C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24820u));
    c.budget -= 5;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_00339898; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003397B8u); c.r[19].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 353u)));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x003397B8u) [[unlikely]] return; }
L_003397B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[4].d[0] = ld16((c.r[1].w[0] - 24820u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003397CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x003397CCu) [[unlikely]] return; }
L_003397CC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 353u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_00339890; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00339898; } }
L_003397E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 346u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00339898; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003397F8u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x003397F8u) [[unlikely]] return; }
L_003397F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24818u));
    c.budget -= 5;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_00339898; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339814u); c.r[19].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 353u)));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00339814u) [[unlikely]] return; }
L_00339814:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[4].d[0] = ld16((c.r[1].w[0] - 24818u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339828u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00339828u) [[unlikely]] return; }
L_00339828:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 353u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_00339890; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00339898; } }
L_0033983C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 346u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00339898; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339854u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00339854u) [[unlikely]] return; }
L_00339854:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24816u));
    c.budget -= 5;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_00339898; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339870u); c.r[19].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 353u)));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00339870u) [[unlikely]] return; }
L_00339870:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[4].d[0] = ld16((c.r[1].w[0] - 24816u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339884u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00339884u) [[unlikely]] return; }
L_00339884:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 353u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_00339898; } }
L_00339890:
    st32((c.r[20].w[0]), c.r[18].w[0]);
    set32(c.r[20], c.r[20].w[0] + 4u);
    c.budget -= 2;
L_00339898:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0033989C:
    c.r[2].d[0] = c.r[18].sd[0] < 118ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003394B8u | kUnwind; return; } goto L_003394B8; } }
    set32(c.r[2], c.r[29].w[0] + 208u);
    set32(c.r[2], c.r[20].w[0] - c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[21], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));  if (t) { goto L_003398C0; } }
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[21], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_003398C0:
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[20], 0u + 1u);  if (t) { goto L_00339904; } }
    c.r[1].d[0] = c.r[21].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[20], 0u + 5u);  if (t) { goto L_00339904; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 50u);  if (t) { goto L_003398F4; } }
L_003398E4:
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[2].w[0] + 208u), c.r[3].w[0]);
    c.budget -= 4;
L_003398F4:
    c.r[2].d[0] = c.r[4].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003398E4u | kUnwind; return; } goto L_003398E4; } }
    set32(c.r[20], 0u + 5u);
    c.budget -= 1;
L_00339904:
    set32(c.r[7], ld32((c.r[29].w[0] + 200u)));
    c.r[8].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[6], 0u - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339920u); c.r[19].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008E(c, 87u, depth + 1u); else { c.pc = 0x00338EC0u; return; } if (c.pc != 0x00339920u) [[unlikely]] return; }
L_00339920:
    set32(c.r[2], c.r[16].w[0] - 4u);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 176u), c.r[2].w[0]);  if (t) { goto L_003399E4; } }
L_00339930:
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[23], c.r[2].w[0] + 208u);
    set32(c.r[4], ld32((c.r[23].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339944u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00339944u) [[unlikely]] return; }
L_00339944:
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_003399CC; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_003399CC; } }
    c.r[2].d[0] = ld8((c.r[30].w[0] + 356u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339970u); st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_008E(c, 204u, depth + 1u); else { c.pc = 0x00339E80u; return; } if (c.pc != 0x00339970u) [[unlikely]] return; }
L_00339970:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[3]);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003399E0; } }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_003399CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339990u); set32(c.r[4], ld32((c.r[23].w[0])));  if (depth < kMaxDepth) unit_008E(c, 330u, depth + 1u); else { c.pc = 0x0033B260u; return; } if (c.pc != 0x00339990u) [[unlikely]] return; }
L_00339990:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003399E0; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 7u);  if (t) { goto L_003399B4; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_003399CC; } }
L_003399B4:
    c.r[30].d[0] = ld8((c.r[30].w[0] + 356u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003399C0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008E(c, 204u, depth + 1u); else { c.pc = 0x00339E80u; return; } if (c.pc != 0x003399C0u) [[unlikely]] return; }
L_003399C0:
    c.r[1].d[0] = c.r[30].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003399E0; } }
L_003399CC:
    set32(c.r[3], ld32((c.r[23].w[0])));
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 5;
L_003399E0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_003399E4:
    c.r[2].d[0] = c.r[18].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[18].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00339930u | kUnwind; return; } goto L_00339930; } }
    c.r[1].d[0] = c.r[19].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00339A6C; } }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull; c.r[1].d[0] = c.r[20].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;  if (t) { goto L_00339A68; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00339A68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;  if (t) { goto L_00339A60; } }
L_00339A14:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[18], c.r[2].w[0] + 208u);
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339A2Cu); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 61u, depth + 1u); else { c.pc = 0x00338A00u; return; } if (c.pc != 0x00339A2Cu) [[unlikely]] return; }
L_00339A2C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[19].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;  if (t) { goto L_00339A50; } }
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[1].d[0] = c.r[19].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
L_00339A50:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00339A68; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 2;
L_00339A60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00339A14u | kUnwind; return; } goto L_00339A14; } }
L_00339A68:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00339A6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_00339A70:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 688u);  c.pc = t; return; }
L_00339AA0:
    set32(c.r[29], c.r[29].w[0] - 368u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[11].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 236u), c.r[7].w[0]);
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 21;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; st32((c.r[29].w[0] + 232u), c.r[9].w[0]);  if (t) { goto L_00339B24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339AFCu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00339AFCu) [[unlikely]] return; }
L_00339AFC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24832u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339B10u); st32((c.r[29].w[0] + 360u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00339B10u) [[unlikely]] return; }
L_00339B10:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24830u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 364u), c.r[2].w[0]);  if (t) { goto L_00339B5C; } }
L_00339B24:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[2].d[0];  if (t) { goto L_00339B5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339B38u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00339B38u) [[unlikely]] return; }
L_00339B38:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24828u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339B4Cu); st32((c.r[29].w[0] + 360u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00339B4Cu) [[unlikely]] return; }
L_00339B4C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24826u));
    st32((c.r[29].w[0] + 364u), c.r[2].w[0]);
    c.budget -= 4;
L_00339B5C:
    set32(c.r[2], ld32((c.r[29].w[0] + 364u)));
    c.r[16].d[0] = c.r[16].d[0] & 255ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    c.budget -= 5;
L_00339B70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339B78u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 264u, depth + 1u); else { c.pc = 0x00173050u; return; } if (c.pc != 0x00339B78u) [[unlikely]] return; }
L_00339B78:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 22u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00339D38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339B90u);  if (depth < kMaxDepth) unit_001C(c, 335u, depth + 1u); else { c.pc = 0x00173940u; return; } if (c.pc != 0x00339B90u) [[unlikely]] return; }
L_00339B90:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00339D38; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 22u)));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00339D38; } }
    c.r[4].d[0] = ld16((c.r[19].w[0] + 26u));
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339BBCu); c.r[6].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 61u, depth + 1u); else { c.pc = 0x00338A00u; return; } if (c.pc != 0x00339BBCu) [[unlikely]] return; }
L_00339BBC:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00339D38; } }
    c.r[4].d[0] = ld16((c.r[19].w[0] + 28u));
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339BD8u); c.r[6].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 61u, depth + 1u); else { c.pc = 0x00338A00u; return; } if (c.pc != 0x00339BD8u) [[unlikely]] return; }
L_00339BD8:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_00339D38; } }
    set32(c.r[2], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00339C80; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00339C38; } }
    c.r[2].d[0] = ld16((c.r[19].w[0] + 26u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339C04u); st128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00339C04u) [[unlikely]] return; }
L_00339C04:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] - 25584u)));
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_00339C38; } }
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339C28u); set32(c.r[5], 0u + 357u);  if (depth < kMaxDepth) unit_0058(c, 46u, depth + 1u); else { c.pc = 0x00260440u; return; } if (c.pc != 0x00339C28u) [[unlikely]] return; }
L_00339C28:
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00339D38; } }
L_00339C38:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00339C80; } }
    c.r[2].d[0] = ld16((c.r[19].w[0] + 28u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339C4Cu); st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00339C4Cu) [[unlikely]] return; }
L_00339C4C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] - 25584u)));
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_00339C80; } }
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339C70u); set32(c.r[5], 0u + 357u);  if (depth < kMaxDepth) unit_0058(c, 46u, depth + 1u); else { c.pc = 0x00260440u; return; } if (c.pc != 0x00339C70u) [[unlikely]] return; }
L_00339C70:
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00339D38; } }
L_00339C80:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 23u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 360u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339C94u); st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00339C94u) [[unlikely]] return; }
L_00339C94:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 353u)));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00339D38; } }
    c.r[4].d[0] = ld16((c.r[19].w[0] + 26u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339CB0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00339CB0u) [[unlikely]] return; }
L_00339CB0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 346u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00339D38; } }
    c.r[4].d[0] = ld16((c.r[19].w[0] + 28u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339CCCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00339CCCu) [[unlikely]] return; }
L_00339CCC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 346u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00339D38; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 22u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 360u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00339D0C; } }
L_00339CEC:
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = ld16((c.r[2].w[0] + 26u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[2].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;  if (t) { goto L_00339D1C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00339D18; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_00339D0C:
    c.r[2].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[6].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00339CECu | kUnwind; return; } goto L_00339CEC; } }
L_00339D18:
    c.r[2].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00339D1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00339D38; } }
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] <= 0; set32(c.r[2], c.r[17].w[0] << 2);  if (t) { goto L_00339D38; } }
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[2].w[0] + 240u), c.r[19].w[0]);
    c.budget -= 3;
L_00339D38:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 27ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00339B70u | kUnwind; return; } goto L_00339B70; } }
    set32(c.r[7], ld32((c.r[29].w[0] + 232u)));
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[8], ld32((c.r[29].w[0] + 236u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339D60u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_008E(c, 73u, depth + 1u); else { c.pc = 0x00338BE0u; return; } if (c.pc != 0x00339D60u) [[unlikely]] return; }
L_00339D60:
    set32(c.r[22], c.r[17].w[0] << 1);
    set32(c.r[18], c.r[29].w[0] + 240u);
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00339E04; } }
L_00339D74:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[4].d[0] = ld16((c.r[2].w[0] + 26u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339D84u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00339D84u) [[unlikely]] return; }
L_00339D84:
    c.r[23].d[0] = ld8((c.r[2].w[0] + 356u));
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[4].d[0] = ld16((c.r[2].w[0] + 28u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339D98u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00339D98u) [[unlikely]] return; }
L_00339D98:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 356u));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339DA8u); set32(c.r[23], c.r[23].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_008E(c, 204u, depth + 1u); else { c.pc = 0x00339E80u; return; } if (c.pc != 0x00339DA8u) [[unlikely]] return; }
L_00339DA8:
    c.r[2].d[0] = c.r[23].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00339E00; } }
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 26u));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[2].d[0] = ld16((c.r[2].w[0] + 28u));
    c.budget -= 9;
    { const bool t = c.r[30].d[0] == 0ull; st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_00339DF8; } }
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 1));  if (t) { goto L_00339DEC; } }
    set32(c.r[2], c.r[17].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_00339DEC:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[30].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_00339DF8:
    set32(c.r[19], c.r[19].w[0] + 2u);
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 2;
L_00339E00:
    set32(c.r[17], c.r[17].w[0] + 2u);
    c.budget -= 1;
L_00339E04:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00339D74u | kUnwind; return; } goto L_00339D74; } }
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] > 0; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00339E48; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00339E44; } }
    c.budget -= 2;
    { const bool t = c.r[22].sd[0] <= 0;  if (t) { goto L_00339E44; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[19], 0u + 2u);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 26u));
    st32((c.r[21].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    c.r[2].d[0] = ld16((c.r[2].w[0] + 28u));
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 7;
L_00339E44:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00339E48:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 368u);  c.pc = t; return; }
L_00339E80:
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] << 2);  if (t) { goto L_00339EE8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[4].w[0] - 10112u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00338000u < 16384u) { entry = entries_008E[(t - 0x00338000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00339EA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 85u);  if (t) { goto L_00339EE8; } }
L_00339EAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 85u);  if (t) { goto L_00339EE8; } }
L_00339EB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 130u);  if (t) { goto L_00339EE8; } }
L_00339EBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 130u);  if (t) { goto L_00339EE8; } }
L_00339EC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 70u);  if (t) { goto L_00339EE8; } }
L_00339ECC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 70u);  if (t) { goto L_00339EE8; } }
L_00339ED4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 60u);  if (t) { goto L_00339EE8; } }
L_00339EDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 60u);  if (t) { goto L_00339EE8; } }
L_00339EE4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00339EE8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00339EF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0033A048; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 10064u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00338000u < 16384u) { entry = entries_008E[(t - 0x00338000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00339F28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339F30u); set32(c.r[16], 0u + 1u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00339F30u) [[unlikely]] return; }
L_00339F30:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24836u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0033A048; } }
L_00339F44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339F4Cu); set32(c.r[16], 0u + 1u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00339F4Cu) [[unlikely]] return; }
L_00339F4C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24834u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0033A048; } }
L_00339F60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339F68u); set32(c.r[16], 0u + 2u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00339F68u) [[unlikely]] return; }
L_00339F68:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24832u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339F7Cu); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00339F7Cu) [[unlikely]] return; }
L_00339F7C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24830u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0033A048; } }
L_00339F90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339F98u); set32(c.r[16], 0u + 2u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00339F98u) [[unlikely]] return; }
L_00339F98:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24828u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339FACu); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00339FACu) [[unlikely]] return; }
L_00339FAC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24826u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0033A048; } }
L_00339FC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339FC8u); set32(c.r[16], 0u + 1u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00339FC8u) [[unlikely]] return; }
L_00339FC8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24824u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0033A048; } }
L_00339FDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339FE4u); set32(c.r[16], 0u + 1u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00339FE4u) [[unlikely]] return; }
L_00339FE4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24822u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0033A048; } }
L_00339FF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A000u); set32(c.r[16], 0u + 1u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0033A000u) [[unlikely]] return; }
L_0033A000:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24820u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0033A048; } }
L_0033A014:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A01Cu); set32(c.r[16], 0u + 1u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0033A01Cu) [[unlikely]] return; }
L_0033A01C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24818u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0033A048; } }
L_0033A030:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A038u); set32(c.r[16], 0u + 1u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0033A038u) [[unlikely]] return; }
L_0033A038:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24816u));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_0033A048:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0033A060:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A078u); set32(c.r[4], 0u + 100u);  if (depth < kMaxDepth) unit_008F(c, 10u, depth + 1u); else { c.pc = 0x0033C160u; return; } if (c.pc != 0x0033A078u) [[unlikely]] return; }
L_0033A078:
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033A090:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[1].w[0] - 1560u)));
    c.r[2].d[0] = c.r[4].sd[0] < 100ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0033A0C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0033A0DC; } }
L_0033A0C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A0C8u);  if (depth < kMaxDepth) unit_008E(c, 235u, depth + 1u); else { c.pc = 0x0033A060u; return; } if (c.pc != 0x0033A0C8u) [[unlikely]] return; }
L_0033A0C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033A0D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[17].w[0] - c.r[16].w[0]);  if (t) { goto L_0033A0DC; } }
L_0033A0D8:
    set32(c.r[2], c.r[16].w[0] - c.r[17].w[0]);
    c.budget -= 1;
L_0033A0DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0033A0F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].d[0] = c.r[7].sd[0] < 100ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0033A114; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[1].w[0] - 1560u), c.r[7].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00340000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A114u); set32(c.r[7], c.r[7].w[0] - 24432u);  if (depth < kMaxDepth) unit_0009(c, 126u, depth + 1u); else { c.pc = 0x00126150u; return; } if (c.pc != 0x0033A114u) [[unlikely]] return; }
L_0033A114:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0033A120:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[2], c.r[2].w[0] - 3136u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[5], c.r[29].w[0] + 64u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A164u); st64((c.r[5].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_008D(c, 238u, depth + 1u); else { c.pc = 0x00336B70u; return; } if (c.pc != 0x0033A164u) [[unlikely]] return; }
L_0033A164:
    set32(c.r[3], c.r[18].w[0] + c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 22u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 16u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0033A194; } }
L_0033A178:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; set32(c.r[3], c.r[16].w[0] << 2);  if (t) { goto L_0033A190; } }
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    st32((c.r[3].w[0] + 64u), c.r[6].w[0]);
    c.budget -= 3;
L_0033A190:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0033A194:
    c.r[3].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[2].w[0] + c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033A178u | kUnwind; return; } goto L_0033A178; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { goto L_0033A1B0; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0033A1B0:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[18].d[0]; set32(c.r[3], 0u - 1u);  if (t) { goto L_0033A1CC; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0033A1D4; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0033A1CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_0033A1D8; } }
L_0033A1D4:
    st32((c.r[17].w[0]), c.r[4].w[0]);
    c.budget -= 1;
L_0033A1D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0033A1F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A204u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 238u, depth + 1u); else { c.pc = 0x00336B70u; return; } if (c.pc != 0x0033A204u) [[unlikely]] return; }
L_0033A204:
    set32(c.r[3], c.r[16].w[0] + c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 22u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 16u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0033A230; } }
L_0033A21C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_0033A22C; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0033A22C:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_0033A230:
    c.r[3].d[0] = c.r[7].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[2].w[0] + c.r[7].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033A21Cu | kUnwind; return; } goto L_0033A21C; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033A250:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[4].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A298u); st32((c.r[29].w[0] + 188u), c.r[8].w[0]);  if (depth < kMaxDepth) unit_001C(c, 264u, depth + 1u); else { c.pc = 0x00173050u; return; } if (c.pc != 0x0033A298u) [[unlikely]] return; }
L_0033A298:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_0033A2A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0033A374; } }
L_0033A2AC:
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0033A370; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A2C0u);  if (depth < kMaxDepth) unit_001C(c, 335u, depth + 1u); else { c.pc = 0x00173940u; return; } if (c.pc != 0x0033A2C0u) [[unlikely]] return; }
L_0033A2C0:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033A370; } }
    set32(c.r[2], c.r[18].w[0] << 1);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 26u));
    c.budget -= 5;
    { const bool t = c.r[21].d[0] != c.r[2].d[0]; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0033A370; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 22u)));  if (t) { goto L_0033A344; } }
L_0033A2E8:
    set32(c.r[3], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] + 26u);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    c.r[5].d[0] = ld16((c.r[3].w[0] + 26u));
    c.budget -= 6;
    { const bool t = c.r[21].d[0] == c.r[5].d[0];  if (t) { goto L_0033A33C; } }
    c.budget -= 2;
    { const bool t = c.r[30].d[0] == c.r[5].d[0];  if (t) { goto L_0033A33C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A310u); set32(c.r[4], ld32((c.r[22].w[0])));  if (depth < kMaxDepth) unit_0082(c, 293u, depth + 1u); else { c.pc = 0x0030AF70u; return; } if (c.pc != 0x0033A310u) [[unlikely]] return; }
L_0033A310:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033A350; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.r[4].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A32Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0033A32Cu) [[unlikely]] return; }
L_0033A32C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 346u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0033A350; } }
L_0033A33C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 22u)));
    c.budget -= 2;
L_0033A344:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033A2E8u | kUnwind; return; } goto L_0033A2E8; } }
L_0033A350:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 22u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { goto L_0033A370; } }
    set32(c.r[2], c.r[23].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[20].w[0]);  if (t) { goto L_0033A384; } }
L_0033A370:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0033A374:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 22u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033A2ACu | kUnwind; return; } goto L_0033A2AC; } }
L_0033A384:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 27ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 38u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033A2A4u | kUnwind; return; } goto L_0033A2A4; } }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
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
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_0033A3D0:
    set32(c.r[29], c.r[29].w[0] - 864u);
    set32(c.r[2], 0u + 118u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 19;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; st32((c.r[29].w[0] + 236u), c.r[6].w[0]);  if (t) { goto L_0033A430; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_0033A430; } }
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
L_0033A430:
    set32(c.r[2], 0u + 118u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0033A584; } }
    c.r[21].d[0] = 0ull + 0ull;
    c.r[23].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0033A444:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A44Cu); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 264u, depth + 1u); else { c.pc = 0x00173050u; return; } if (c.pc != 0x0033A44Cu) [[unlikely]] return; }
L_0033A44C:
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A458u); c.r[4].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 335u, depth + 1u); else { c.pc = 0x00173940u; return; } if (c.pc != 0x0033A458u) [[unlikely]] return; }
L_0033A458:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033A56C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[30].w[0] + 22u)));
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 208u), c.r[2].w[0]);  if (t) { goto L_0033A534; } }
L_0033A474:
    set32(c.r[4], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[20].w[0] << 1);
    set32(c.r[3], c.r[30].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] + 26u);
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A490u); c.r[5].d[0] = ld16((c.r[3].w[0] + 26u));  if (depth < kMaxDepth) unit_0082(c, 309u, depth + 1u); else { c.pc = 0x0030B290u; return; } if (c.pc != 0x0033A490u) [[unlikely]] return; }
L_0033A490:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033A544; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.r[5].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A4ACu); set32(c.r[4], ld32((c.r[19].w[0])));  if (depth < kMaxDepth) unit_0082(c, 293u, depth + 1u); else { c.pc = 0x0030AF70u; return; } if (c.pc != 0x0033A4ACu) [[unlikely]] return; }
L_0033A4AC:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033A544; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 236u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.r[4].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A4D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0033A4D4u) [[unlikely]] return; }
L_0033A4D4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 353u)));
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0033A544; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 236u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.r[4].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A500u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0033A500u) [[unlikely]] return; }
L_0033A500:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 354u)));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0033A544; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.r[4].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A520u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0033A520u) [[unlikely]] return; }
L_0033A520:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 346u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0033A544; } }
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_0033A534:
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    c.r[2].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033A474u | kUnwind; return; } goto L_0033A474; } }
L_0033A544:
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    c.r[2].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033A56C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[2], c.r[21].w[0] << 2);  if (t) { goto L_0033A56C; } }
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[21], c.r[21].w[0] + 1u);
    st32((c.r[2].w[0] + 752u), c.r[30].w[0]);
    c.budget -= 3;
L_0033A56C:
    set32(c.r[23], c.r[23].w[0] + 1u);
    c.r[2].d[0] = c.r[23].sd[0] < 27ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033A444u | kUnwind; return; } goto L_0033A444; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0033A5A0; } }
L_0033A584:
    set32(c.r[5], c.r[29].w[0] + 752u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A598u); c.r[8].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 247u, depth + 1u); else { c.pc = 0x0033A250u; return; } if (c.pc != 0x0033A598u) [[unlikely]] return; }
L_0033A598:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0033A5A0:
    c.budget -= 2;
    { const bool t = c.r[21].sd[0] <= 0; c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0033A5FC; } }
    set32(c.r[4], c.r[29].w[0] + 752u);
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A5B8u); set32(c.r[7], 0u + 50u);  if (depth < kMaxDepth) unit_008E(c, 81u, depth + 1u); else { c.pc = 0x00338DA0u; return; } if (c.pc != 0x0033A5B8u) [[unlikely]] return; }
L_0033A5B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0033A5E8; } }
L_0033A5C0:
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 26u));
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0033A5E4; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0033A5E4; } }
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 3;
L_0033A5E4:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_0033A5E8:
    set32(c.r[4], ld32((c.r[29].w[0] + 752u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 22u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033A5C0u | kUnwind; return; } goto L_0033A5C0; } }
L_0033A5FC:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull; c.r[2].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0033A6D4; } }
    set32(c.r[2], 0u + 118u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0033A624; } }
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A61Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008E(c, 274u, depth + 1u); else { c.pc = 0x0033A710u; return; } if (c.pc != 0x0033A61Cu) [[unlikely]] return; }
L_0033A61C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0033A65C; } }
L_0033A624:
    set32(c.r[5], ld32((c.r[29].w[0] + 236u)));
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A634u); set32(c.r[6], 0u + 20u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0033A634u) [[unlikely]] return; }
L_0033A634:
    set32(c.r[2], 0u + 2u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[29].w[0] + 252u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 272u);
    set32(c.r[7], ld32((c.r[19].w[0])));
    set32(c.r[6], c.r[29].w[0] + 240u);
    set32(c.r[8], ld32((c.r[7].w[0] + 168u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A658u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008E(c, 38u, depth + 1u); else { c.pc = 0x003385C0u; return; } if (c.pc != 0x0033A658u) [[unlikely]] return; }
L_0033A658:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0033A65C:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0033A668; } }
    c.r[22].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_0033A668:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0033A6C4; } }
L_0033A670:
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[17], c.r[2].w[0] + 272u);
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A684u); set32(c.r[4], ld32((c.r[19].w[0])));  if (depth < kMaxDepth) unit_0082(c, 309u, depth + 1u); else { c.pc = 0x0030B290u; return; } if (c.pc != 0x0033A684u) [[unlikely]] return; }
L_0033A684:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033A6C0; } }
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A69Cu); set32(c.r[4], ld32((c.r[19].w[0])));  if (depth < kMaxDepth) unit_0082(c, 293u, depth + 1u); else { c.pc = 0x0030AF70u; return; } if (c.pc != 0x0033A69Cu) [[unlikely]] return; }
L_0033A69C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033A6C0; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[1].d[0] = c.r[20].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { goto L_0033A6D0; } }
L_0033A6C0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0033A6C4:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033A670u | kUnwind; return; } goto L_0033A670; } }
L_0033A6D0:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0033A6D4:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 864u);  c.pc = t; return; }
L_0033A710:
    set32(c.r[29], c.r[29].w[0] - 608u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[29].w[0] + 128u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A754u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0033A754u) [[unlikely]] return; }
L_0033A754:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
L_0033A760:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A768u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 108u, depth + 1u); else { c.pc = 0x0012D050u; return; } if (c.pc != 0x0033A768u) [[unlikely]] return; }
L_0033A768:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0033A7D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A77Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0033A77Cu) [[unlikely]] return; }
L_0033A77C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0] + 346u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0033A794; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[3].d[0] << 56;  if (t) { goto L_0033A79C; } }
L_0033A794:
    c.r[3].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[3].d[0] << 56;
    c.budget -= 2;
L_0033A79C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 346u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);  if (t) { goto L_0033A7B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] << 56;  if (t) { goto L_0033A7BC; } }
L_0033A7B4:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.budget -= 2;
L_0033A7BC:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0033A7D4; } }
    st32((c.r[17].w[0]), c.r[18].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 3;
L_0033A7D4:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 118ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033A760u | kUnwind; return; } goto L_0033A760; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A7F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0033A7F0u) [[unlikely]] return; }
L_0033A7F0:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A800u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 96u, depth + 1u); else { c.pc = 0x00339060u; return; } if (c.pc != 0x0033A800u) [[unlikely]] return; }
L_0033A800:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0033A81C; } }
    c.r[1].d[0] = c.r[19].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0033A818; } }
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0033A818:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0033A81C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;  if (t) { goto L_0033A83C; } }
L_0033A824:
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], ld32((c.r[2].w[0] + 128u)));
    st32((c.r[21].w[0]), c.r[2].w[0]);
    set32(c.r[21], c.r[21].w[0] + 4u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
L_0033A83C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033A824u | kUnwind; return; } goto L_0033A824; } }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 608u);  c.pc = t; return; }
L_0033A870:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[4].w[0] + 12u), c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0033A8AC; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 22u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0033A8B4; } }
L_0033A8AC:
    set32(c.r[2], 0u + 255u);
    st8((c.r[18].w[0] + 22u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0033A8B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A8BCu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0033A8BCu) [[unlikely]] return; }
L_0033A8BC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] - 25584u)));
    c.budget -= 5;
    { const bool t = c.r[17].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0033A8E0; } }
    st8((c.r[18].w[0] + 8u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 255u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0033A8E8; } }
L_0033A8E0:
    st8((c.r[18].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.budget -= 2;
L_0033A8E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0033A900:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A914u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 51u, depth + 1u); else { c.pc = 0x00130510u; return; } if (c.pc != 0x0033A914u) [[unlikely]] return; }
L_0033A914:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(14ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_0033A97C; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 10016u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00338000u < 16384u) { entry = entries_008E[(t - 0x00338000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0033A938:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0033A948; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0033A980; } }
L_0033A948:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0033A984; } }
L_0033A950:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0033A980; } }
L_0033A958:
    c.r[1].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0033A96C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0033A980; } }
L_0033A96C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033A980; } }
L_0033A974:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_0033A980; } }
L_0033A97C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0033A980:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0033A984:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033A990:
    set32(c.r[29], c.r[29].w[0] - 288u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[18], 0u + 255u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A9C8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x0033A9C8u) [[unlikely]] return; }
L_0033A9C8:
    set32(c.r[23], 0u - 1u);
    c.r[22].d[0] = 0ull + static_cast<std::uint64_t>(255ll);
    set32(c.r[20], c.r[2].w[0] + 600u);
    c.r[17].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != 0ull; c.r[30].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_0033AA2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A9E8u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0033A9E8u) [[unlikely]] return; }
L_0033A9E8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[3].d[0] = ld16((c.r[1].w[0] - 25464u));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033AA0Cu); set32(c.r[16], c.r[2].w[0] << 4);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0033AA0Cu) [[unlikely]] return; }
L_0033AA0C:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[1].d[0] = 0ull | 40076ull;
    set32(c.r[2], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[21], ld32((c.r[2].w[0])));
    c.r[22].d[0] = ld16((c.r[2].w[0] + 12u));
    c.r[30].d[0] = ld16((c.r[2].w[0] + 14u));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[2].w[0] + 16u);  if (t) { goto L_0033AA34; } }
L_0033AA2C:
    c.r[21].d[0] = ld8((c.r[16].w[0] + 268u));
    set32(c.r[19], c.r[16].w[0] + 12u);
    c.budget -= 2;
L_0033AA34:
    set32(c.r[2], 0u + 13u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0033AAD8; } }
    set32(c.r[16], 0u + 30u);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0033AA48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033AA50u);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x0033AA50u) [[unlikely]] return; }
L_0033AA50:
    set32(c.r[3], c.r[18].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = ld16((c.r[2].w[0] + 520u));
    set32(c.r[3], c.r[4].w[0] - 10000u);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_0033AA84; } }
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_0033AA78; } }
    breakpoint(c, 0x0033AA74u);
    c.budget -= 1;
L_0033AA78:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033AA88; } }
L_0033AA84:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0033AA88:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[3].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_0033AA98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[2].w[0] + 86u);  if (t) { goto L_0033AAAC; } }
L_0033AA98:
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_0033AAA8; } }
    breakpoint(c, 0x0033AAA4u);
    c.budget -= 1;
L_0033AAA8:
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 1;
L_0033AAAC:
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    st32((c.r[2].w[0] + 160u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[18].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033AA48u | kUnwind; return; } goto L_0033AA48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033AAD0u);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x0033AAD0u) [[unlikely]] return; }
L_0033AAD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = ld8((c.r[2].w[0] + 517u));  if (t) { goto L_0033AB74; } }
L_0033AAD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033AAE0u);  if (depth < kMaxDepth) unit_008D(c, 238u, depth + 1u); else { c.pc = 0x00336B70u; return; } if (c.pc != 0x0033AAE0u) [[unlikely]] return; }
L_0033AAE0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 22u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 255u);  if (t) { goto L_0033AB18; } }
L_0033AAF0:
    set32(c.r[6], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0033AB28; } }
    c.r[3].d[0] = ld8((c.r[6].w[0] + 22u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0033AB14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0033AB24; } }
L_0033AB14:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0033AB18:
    c.r[3].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] << 5);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033AAF0u | kUnwind; return; } goto L_0033AAF0; } }
L_0033AB24:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0033AB28:
    set32(c.r[5], 0u + 255u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 118u);  if (t) { goto L_0033AB68; } }
L_0033AB34:
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_0033AB74; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[4].d[0];  if (t) { goto L_0033AB74; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0033AB74; } }
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    st32((c.r[3].w[0] + 160u), c.r[6].w[0]);
    c.budget -= 4;
L_0033AB68:
    c.r[3].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[16].w[0] << 5);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033AB34u | kUnwind; return; } goto L_0033AB34; } }
L_0033AB74:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033AB84u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 103u, depth + 1u); else { c.pc = 0x00339160u; return; } if (c.pc != 0x0033AB84u) [[unlikely]] return; }
L_0033AB84:
    set32(c.r[3], 0u + 13u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[22].d[0] & 65535ull;  if (t) { goto L_0033AD40; } }
    st8((c.r[20].w[0] + 88u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st8((c.r[20].w[0] + 89u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0033AC60; } }
L_0033ABA4:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0033ABD8; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 160u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033ABC8u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 99u, depth + 1u); else { c.pc = 0x0012CCE0u; return; } if (c.pc != 0x0033ABC8u) [[unlikely]] return; }
L_0033ABC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033ABD0u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x0033ABD0u) [[unlikely]] return; }
L_0033ABD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0] + 266u), static_cast<std::uint16_t>(c.r[17].w[0]));  if (t) { goto L_0033AC44; } }
L_0033ABD8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_0033AC0C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 276u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033ABFCu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 99u, depth + 1u); else { c.pc = 0x0012CCE0u; return; } if (c.pc != 0x0033ABFCu) [[unlikely]] return; }
L_0033ABFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033AC04u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x0033AC04u) [[unlikely]] return; }
L_0033AC04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0] + 298u), static_cast<std::uint16_t>(c.r[17].w[0]));  if (t) { goto L_0033AC44; } }
L_0033AC0C:
    set32(c.r[2], c.r[18].w[0] << 2);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 160u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033AC30u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 99u, depth + 1u); else { c.pc = 0x0012CCE0u; return; } if (c.pc != 0x0033AC30u) [[unlikely]] return; }
L_0033AC30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033AC38u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x0033AC38u) [[unlikely]] return; }
L_0033AC38:
    set32(c.r[3], c.r[18].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st16((c.r[2].w[0] + 266u), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.budget -= 3;
L_0033AC44:
    c.r[17].d[0] = c.r[18].d[0] << 56;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033AC50u); c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x0033AC50u) [[unlikely]] return; }
L_0033AC50:
    set32(c.r[3], c.r[18].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    st8((c.r[2].w[0] + 265u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.budget -= 4;
L_0033AC60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033AC68u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 238u, depth + 1u); else { c.pc = 0x00336B70u; return; } if (c.pc != 0x0033AC68u) [[unlikely]] return; }
L_0033AC68:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 22u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033ABA4u | kUnwind; return; } goto L_0033ABA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;  if (t) { goto L_0033ACB8; } }
L_0033AC80:
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 160u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033ACA4u); c.r[18].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x0033ACA4u) [[unlikely]] return; }
L_0033ACA4:
    set32(c.r[3], c.r[17].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    st16((c.r[2].w[0] + 520u), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
L_0033ACB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033AC80u | kUnwind; return; } goto L_0033AC80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033ACC8u);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x0033ACC8u) [[unlikely]] return; }
L_0033ACC8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 89u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = ld16((c.r[2].w[0] + 266u));
    set32(c.r[3], c.r[4].w[0] - 10000u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_0033AD00; } }
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_0033ACF4; } }
    breakpoint(c, 0x0033ACF0u);
    c.budget -= 1;
L_0033ACF4:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033AD04; } }
L_0033AD00:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0033AD04:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[3].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_0033AD14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[2].w[0] + 86u);  if (t) { goto L_0033AD28; } }
L_0033AD14:
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_0033AD24; } }
    breakpoint(c, 0x0033AD20u);
    c.budget -= 1;
L_0033AD24:
    c.r[6].d[0] = c.lo.d[0];
    c.budget -= 1;
L_0033AD28:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033AD38u); set32(c.r[5], 0u + 310u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0033AD38u) [[unlikely]] return; }
L_0033AD38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_0033B0B8; } }
L_0033AD40:
    set32(c.r[3], 0u + 255u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[3].d[0] = c.r[30].d[0] & 65535ull;  if (t) { goto L_0033AE08; } }
    set32(c.r[3], c.r[16].w[0] << 2);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[3].w[0] + 160u);  if (t) { goto L_0033AD84; } }
L_0033AD60:
    set32(c.r[3], ld32((c.r[7].w[0] - 4u)));
    set32(c.r[5], c.r[19].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0033AD80; } }
    st8((c.r[20].w[0] + 89u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 9u)));  if (t) { goto L_0033AD90; } }
L_0033AD80:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0033AD84:
    c.r[3].d[0] = c.r[6].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[6].w[0] << 5);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033AD60u | kUnwind; return; } goto L_0033AD60; } }
L_0033AD90:
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u - 1u);  if (t) { goto L_0033ADF4; } }
L_0033AD9C:
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[3].w[0] + 160u);  if (t) { goto L_0033ADDC; } }
L_0033ADAC:
    set32(c.r[3], ld32((c.r[8].w[0])));
    set32(c.r[7], c.r[19].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[7].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0033ADD8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 9u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[3].d[0]; set32(c.r[5], c.r[7].w[0] + 9u);  if (t) { goto L_0033ADE8; } }
    st8((c.r[20].w[0] + 88u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[23].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));  if (t) { goto L_0033ADE8; } }
L_0033ADD8:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0033ADDC:
    c.r[3].d[0] = c.r[6].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[6].w[0] << 5);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033ADACu | kUnwind; return; } goto L_0033ADAC; } }
L_0033ADE8:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] != c.r[4].d[0]; set32(c.r[3], 0u + 77u);  if (t) { goto L_0033AE20; } }
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 1;
L_0033ADF4:
    c.r[3].d[0] = c.r[9].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[9].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033AD9Cu | kUnwind; return; } goto L_0033AD9C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033AE1C; } }
L_0033AE08:
    st8((c.r[20].w[0] + 88u), static_cast<std::uint8_t>(c.r[22].w[0]));
    set32(c.r[3], c.r[3].w[0] << 5);
    st8((c.r[20].w[0] + 89u), static_cast<std::uint8_t>(c.r[30].w[0]));
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 9u)));
    c.budget -= 5;
L_0033AE1C:
    set32(c.r[3], 0u + 77u);
    c.budget -= 1;
L_0033AE20:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != c.r[3].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0033AE5C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0033AE4C; } }
L_0033AE30:
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 9u)));
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != c.r[3].d[0];  if (t) { goto L_0033AE48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 89u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0033AE58; } }
L_0033AE48:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_0033AE4C:
    c.r[3].d[0] = c.r[4].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] << 5);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033AE30u | kUnwind; return; } goto L_0033AE30; } }
L_0033AE58:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0033AE5C:
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_0033AE60:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[3], c.r[5].w[0] << 1);  if (t) { goto L_0033AE7C; } }
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 92u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_0033AE84; } }
L_0033AE7C:
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    st16((c.r[3].w[0] + 92u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_0033AE84:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[5].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 71u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033AE60u | kUnwind; return; } goto L_0033AE60; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != c.r[3].d[0]; set32(c.r[19], 0u + 1u);  if (t) { goto L_0033AEA0; } }
    set32(c.r[19], 0u + 3u);
    c.budget -= 1;
L_0033AEA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_0033B0A8; } }
L_0033AEA8:
    set32(c.r[2], 0u + 71u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != c.r[2].d[0];  if (t) { goto L_0033AF48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033AEBCu);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x0033AEBCu) [[unlikely]] return; }
L_0033AEBC:
    set32(c.r[3], ld32((c.r[2].w[0] + 876u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0033B0B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033AED4u);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x0033AED4u) [[unlikely]] return; }
L_0033AED4:
    set32(c.r[3], ld32((c.r[2].w[0] + 880u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0033B0B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033AEECu);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x0033AEECu) [[unlikely]] return; }
L_0033AEEC:
    set32(c.r[4], c.r[22].w[0] << 6);
    set32(c.r[5], c.r[20].w[0] + c.r[22].w[0]);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[22].w[0] << 2);
    set32(c.r[17], c.r[4].w[0] + 64u);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 110u)));
    set32(c.r[18], c.r[3].w[0] + 116u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[6], c.r[5].w[0] + 110u);  if (t) { goto L_0033B0A4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 88u)));
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 89u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033AF2Cu); st8((c.r[5].w[0] + 113u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x0033AF2Cu) [[unlikely]] return; }
L_0033AF2C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 876u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 876u), c.r[3].w[0]);  if (t) { goto L_0033AF58; } }
L_0033AF48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033AF50u);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x0033AF50u) [[unlikely]] return; }
L_0033AF50:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[18].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 2;
L_0033AF58:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0033AF6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[3].w[0]);  if (t) { goto L_0033AFCC; } }
L_0033AF6C:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_0033AF80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[3].w[0]);  if (t) { goto L_0033AFCC; } }
L_0033AF80:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 7u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 6u);  if (t) { goto L_0033AF94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[3].w[0]);  if (t) { goto L_0033AFCC; } }
L_0033AF94:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 27u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_0033AFA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[3].w[0]);  if (t) { goto L_0033AFCC; } }
L_0033AFA8:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0033AFC8; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 5u));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; set32(c.r[3], 0u + 4u);  if (t) { goto L_0033AFC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[3].w[0]);  if (t) { goto L_0033AFCC; } }
L_0033AFC8:
    st32((c.r[18].w[0]), 0u);
    c.budget -= 1;
L_0033AFCC:
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u + 6u);  if (t) { goto L_0033B098; } }
L_0033AFE0:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 16u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0033B000; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 89u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0033B00C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 1u);  if (t) { goto L_0033B098; } }
L_0033B000:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0033B094; } }
L_0033B00C:
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 88u)));
    set32(c.r[8], c.r[3].w[0] << 2);
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[9], c.r[10].w[0] << 1);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    set32(c.r[9], c.r[9].w[0] << 3);
    set32(c.r[9], c.r[20].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[9].w[0] + c.r[8].w[0]);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[7].d[0]; set32(c.r[8], c.r[8].w[0] + 128u);  if (t) { goto L_0033B088; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[6].d[0];  if (t) { goto L_0033B05C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_0033B04C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033B094; } }
L_0033B04C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0033B094; } }
L_0033B05C:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 18u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_0033B078; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 3u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[8].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0033B094; } }
L_0033B078:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 1u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[8].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0033B094; } }
L_0033B088:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 2u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[8].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
L_0033B094:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_0033B098:
    c.r[4].d[0] = c.r[3].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033AFE0u | kUnwind; return; } goto L_0033AFE0; } }
L_0033B0A4:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.budget -= 1;
L_0033B0A8:
    c.r[3].d[0] = c.r[22].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033AEA8u | kUnwind; return; } goto L_0033AEA8; } }
L_0033B0B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_0033B0B8:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_0033B0F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 2u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 8u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = ld8((c.r[1].w[0] + 8384u));
    st8((c.r[4].w[0] + 268u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 8448u));
    c.budget -= 18;
    { const bool t = c.r[2].d[0] != 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0033B148; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 8449u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033B150; } }
L_0033B148:
    set32(c.r[2], 0u + 71u);
    st8((c.r[19].w[0] + 268u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0033B150:
    st8((c.r[19].w[0] + 269u), static_cast<std::uint8_t>(0u));
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0033B158:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[4], c.r[18].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + 8384u);
    set32(c.r[3], c.r[19].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld8((c.r[5].w[0] + 256u));
    st8((c.r[3].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[5].w[0] + 260u)));
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[5].w[0] + 264u));
    st8((c.r[3].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 265u)));
    st8((c.r[3].w[0] + 21u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].d[0] = ld16((c.r[5].w[0] + 266u));
    set32(c.r[3], c.r[5].w[0] - 10000u);
    c.budget -= 17;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[2], 0u - 1u);  if (t) { goto L_0033B1B0; } }
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_0033B1AC; } }
    breakpoint(c, 0x0033B1A8u);
    c.budget -= 1;
L_0033B1AC:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 1;
L_0033B1B0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[3].d[0] = c.r[5].d[0] & 65535ull;  if (t) { goto L_0033B1C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[2].w[0] + 86u);  if (t) { goto L_0033B1D4; } }
L_0033B1C0:
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_0033B1D0; } }
    breakpoint(c, 0x0033B1CCu);
    c.budget -= 1;
L_0033B1D0:
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 1;
L_0033B1D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[17], c.r[19].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + 8384u);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[16], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[6], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 268u)));
    set32(c.r[4], c.r[17].w[0] + 30u);
    set32(c.r[5], c.r[16].w[0] + 270u);
    st8((c.r[17].w[0] + 28u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 269u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B208u); st8((c.r[17].w[0] + 29u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0033B208u) [[unlikely]] return; }
L_0033B208:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 274u));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 6ll ? 1ull : 0ull;
    st8((c.r[17].w[0] + 34u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 275u)));
    st8((c.r[17].w[0] + 35u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 276u)));
    st16((c.r[17].w[0] + 36u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 278u)));
    st16((c.r[17].w[0] + 38u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 286u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[17].w[0] + 40u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033B158u | kUnwind; return; } goto L_0033B158; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0033B260:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B270u);  if (depth < kMaxDepth) unit_008E(c, 332u, depth + 1u); else { c.pc = 0x0033B280u; return; } if (c.pc != 0x0033B270u) [[unlikely]] return; }
L_0033B270:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0033B280:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[29].w[0] + 72u);
    c.budget -= 9;
L_0033B2A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B2ACu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 214u, depth + 1u); else { c.pc = 0x00339EF0u; return; } if (c.pc != 0x0033B2ACu) [[unlikely]] return; }
L_0033B2AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0033B2D0; } }
L_0033B2B4:
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 72u)));
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != c.r[3].d[0];  if (t) { goto L_0033B2CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_0033B2DC; } }
L_0033B2CC:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_0033B2D0:
    c.r[3].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033B2B4u | kUnwind; return; } goto L_0033B2B4; } }
L_0033B2DC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 72u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033B2A4u | kUnwind; return; } goto L_0033B2A4; } }
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0033B310:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B320u);  if (depth < kMaxDepth) unit_008E(c, 338u, depth + 1u); else { c.pc = 0x0033B340u; return; } if (c.pc != 0x0033B320u) [[unlikely]] return; }
L_0033B320:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0033B340:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0033B41C; } }
L_0033B370:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B378u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 264u, depth + 1u); else { c.pc = 0x00173050u; return; } if (c.pc != 0x0033B378u) [[unlikely]] return; }
L_0033B378:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B384u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 335u, depth + 1u); else { c.pc = 0x00173940u; return; } if (c.pc != 0x0033B384u) [[unlikely]] return; }
L_0033B384:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033B418; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 22u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0033B3B8; } }
L_0033B39C:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 26u));
    c.budget -= 4;
    { const bool t = c.r[20].d[0] != c.r[2].d[0];  if (t) { goto L_0033B3B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0033B3C4; } }
L_0033B3B4:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_0033B3B8:
    c.r[2].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033B39Cu | kUnwind; return; } goto L_0033B39C; } }
L_0033B3C4:
    set32(c.r[2], 0u + 118u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[17].d[0] & 255ull;  if (t) { goto L_0033B410; } }
    c.r[2].d[0] = c.r[17].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033B40C; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0033B400; } }
L_0033B3E8:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 26u));
    c.budget -= 4;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_0033B3FC; } }
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0033B3FC:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_0033B400:
    c.r[2].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033B3E8u | kUnwind; return; } goto L_0033B3E8; } }
L_0033B40C:
    c.r[2].d[0] = c.r[17].d[0] & 255ull;
    c.budget -= 1;
L_0033B410:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[16].sd[0] < 27ll ? 1ull : 0ull;  if (t) { goto L_0033B42C; } }
L_0033B418:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0033B41C:
    c.r[2].d[0] = c.r[16].sd[0] < 27ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033B370u | kUnwind; return; } goto L_0033B370; } }
    c.r[2].d[0] = c.r[16].sd[0] < 27ll ? 1ull : 0ull;
    c.budget -= 1;
L_0033B42C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033B438; } }
    set32(c.r[16], 0u - 1u);
    c.budget -= 1;
L_0033B438:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0033B460:
    set32(c.r[2], 0u + 255u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 1u);  if (t) { goto L_0033B474; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[4].w[0] + 2u);  if (t) { goto L_0033B474; } }
L_0033B474:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033B480:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B49Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0033B49Cu) [[unlikely]] return; }
L_0033B49C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] - 25584u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B4B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0033B4B0u) [[unlikely]] return; }
L_0033B4B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B4B8u); c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 353u)));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0033B4B8u) [[unlikely]] return; }
L_0033B4B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[4].d[0] = ld16((c.r[1].w[0] - 24836u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B4CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0033B4CCu) [[unlikely]] return; }
L_0033B4CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B4D4u); c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 353u)));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0033B4D4u) [[unlikely]] return; }
L_0033B4D4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[4].d[0] = ld16((c.r[1].w[0] - 24832u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B4E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0033B4E8u) [[unlikely]] return; }
L_0033B4E8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; c.r[3].d[0] = c.r[17].d[0] << 56;  if (t) { goto L_0033B54C; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] << 56;  if (t) { goto L_0033B52C; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 255u);  if (t) { goto L_0033B520; } }
    set32(c.r[2], 0u + 255u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_0033B51C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[18].w[0] - 2u);  if (t) { goto L_0033B578; } }
L_0033B51C:
    set32(c.r[2], 0u + 255u);
    c.budget -= 1;
L_0033B520:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0033B57C; } }
    c.r[4].d[0] = c.r[17].d[0] << 56;
    c.budget -= 1;
L_0033B52C:
    c.r[3].d[0] = c.r[16].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0033B578; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0033B578; } }
    c.r[3].d[0] = c.r[17].d[0] << 56;
    c.budget -= 1;
L_0033B54C:
    c.r[2].d[0] = c.r[16].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_0033B56C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0033B578; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_0033B56C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033B578; } }
    set32(c.r[2], c.r[18].w[0] - 2u);
    c.budget -= 1;
L_0033B578:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0033B57C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0033B590:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = c.r[5].d[0] & 255ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0033B5BC; } }
    set32(c.r[2], 0u + 255u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], 0u - 1u);  if (t) { goto L_0033B5C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 50u);  if (t) { goto L_0033B5F4; } }
L_0033B5BC:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0033B5C0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 999u);  if (t) { goto L_0033B5D0; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0033B5E8; } }
L_0033B5D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B5D8u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0033B5D8u) [[unlikely]] return; }
L_0033B5D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[1].w[0] - 25584u)));  if (t) { goto L_0033B5F0; } }
L_0033B5E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B5F0u);  if (depth < kMaxDepth) unit_0054(c, 299u, depth + 1u); else { c.pc = 0x00251F40u; return; } if (c.pc != 0x0033B5F0u) [[unlikely]] return; }
L_0033B5F0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0033B5F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033B610:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B62Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0033B62Cu) [[unlikely]] return; }
L_0033B62C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25575u)));
    set32(c.r[16], c.r[2].w[0] - 4u);
    c.budget -= 6;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { goto L_0033B648; } }
    set32(c.r[16], c.r[16].w[0] + 12u);
    c.budget -= 1;
L_0033B648:
    c.r[2].d[0] = c.r[18].d[0] & 255ull;
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(19ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_0033B72C; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 9952u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00338000u < 16384u) { entry = entries_008E[(t - 0x00338000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0033B670:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(111ll);  if (t) { goto L_0033B72C; } }
L_0033B678:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(112ll);  if (t) { goto L_0033B72C; } }
L_0033B680:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(113ll);  if (t) { goto L_0033B72C; } }
L_0033B688:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(100ll);  if (t) { goto L_0033B72C; } }
L_0033B690:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(101ll);  if (t) { goto L_0033B72C; } }
L_0033B698:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(103ll);  if (t) { goto L_0033B72C; } }
L_0033B6A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(104ll);  if (t) { goto L_0033B72C; } }
L_0033B6A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(105ll);  if (t) { goto L_0033B72C; } }
L_0033B6B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(106ll);  if (t) { goto L_0033B72C; } }
L_0033B6B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(107ll);  if (t) { goto L_0033B72C; } }
L_0033B6C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(109ll);  if (t) { goto L_0033B72C; } }
L_0033B6C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(110ll);  if (t) { goto L_0033B72C; } }
L_0033B6D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(108ll);  if (t) { goto L_0033B72C; } }
L_0033B6D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(102ll);  if (t) { goto L_0033B72C; } }
L_0033B6E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B6E8u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0033B6E8u) [[unlikely]] return; }
L_0033B6E8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25573u)));
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_0033B72C; } }
L_0033B708:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B710u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0033B710u) [[unlikely]] return; }
L_0033B710:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25573u)));
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 49u);
    c.r[17].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 7;
L_0033B72C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0033B750:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B764u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0033B764u) [[unlikely]] return; }
L_0033B764:
    c.r[1].d[0] = 0ull | 35856ull;
    set32(c.r[16], c.r[2].w[0] + c.r[1].w[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 4104u));
    set32(c.r[2], 0u + 15u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[17], 0u + 51u);  if (t) { goto L_0033B784; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033B7CC; } }
L_0033B784:
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[17], 0u + 49u);  if (t) { goto L_0033B798; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033B7CC; } }
L_0033B798:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B7A0u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0033B7A0u) [[unlikely]] return; }
L_0033B7A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4105u)));
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4107u)));
    c.r[5].d[0] = ld16((c.r[1].w[0] - 25464u));
    set32(c.r[17], 0u + 51u);
    set32(c.r[2], 0u + 49u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    if (c.r[3].d[0] == 0) c.r[17].d[0] = c.r[2].d[0];
    c.budget -= 11;
L_0033B7CC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B7DCu); set32(c.r[5], 0u + 238u);  if (depth < kMaxDepth) unit_0058(c, 46u, depth + 1u); else { c.pc = 0x00260440u; return; } if (c.pc != 0x0033B7DCu) [[unlikely]] return; }
L_0033B7DC:
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_0033B7F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 49u);  if (t) { goto L_0033B838; } }
L_0033B7F4:
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B800u); set32(c.r[5], 0u + 238u);  if (depth < kMaxDepth) unit_0058(c, 46u, depth + 1u); else { c.pc = 0x00260440u; return; } if (c.pc != 0x0033B800u) [[unlikely]] return; }
L_0033B800:
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_0033B818; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 51u);  if (t) { goto L_0033B838; } }
L_0033B818:
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B824u); set32(c.r[5], 0u + 238u);  if (depth < kMaxDepth) unit_0058(c, 46u, depth + 1u); else { c.pc = 0x00260440u; return; } if (c.pc != 0x0033B824u) [[unlikely]] return; }
L_0033B824:
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0033B838; } }
    set32(c.r[17], 0u + 118u);
    c.budget -= 1;
L_0033B838:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0033B850:
    set32(c.r[2], 0u + 61u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0033B87C; } }
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0033B878; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0033B878; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0033B87C; } }
L_0033B878:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0033B87C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033B890:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B8ACu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 382u, depth + 1u); else { c.pc = 0x0033B850u; return; } if (c.pc != 0x0033B8ACu) [[unlikely]] return; }
L_0033B8AC:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_0033B8C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0033B930; } }
L_0033B8C0:
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B8CCu); set32(c.r[5], 0u + 520u);  if (depth < kMaxDepth) unit_0058(c, 46u, depth + 1u); else { c.pc = 0x00260440u; return; } if (c.pc != 0x0033B8CCu) [[unlikely]] return; }
L_0033B8CC:
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033B8E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0033B930; } }
L_0033B8E0:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B8ECu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 336u, depth + 1u); else { c.pc = 0x0033B310u; return; } if (c.pc != 0x0033B8ECu) [[unlikely]] return; }
L_0033B8EC:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033B900; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0033B930; } }
L_0033B900:
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B90Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 336u, depth + 1u); else { c.pc = 0x0033B310u; return; } if (c.pc != 0x0033B90Cu) [[unlikely]] return; }
L_0033B90C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_0033B920; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0033B930; } }
L_0033B920:
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B92Cu); set32(c.r[5], 0u + 355u);  if (depth < kMaxDepth) unit_0058(c, 46u, depth + 1u); else { c.pc = 0x00260440u; return; } if (c.pc != 0x0033B92Cu) [[unlikely]] return; }
L_0033B92C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0033B930:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0033B950:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] >= 0; c.r[6].d[0] = c.r[5].d[0] & 1ull;  if (t) { goto L_0033B964; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[3], c.r[6].w[0] << 1);  if (t) { goto L_0033B968; } }
    set32(c.r[6], c.r[6].w[0] - 2u);
    c.budget -= 1;
L_0033B964:
    set32(c.r[3], c.r[6].w[0] << 1);
    c.budget -= 1;
L_0033B968:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 1));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 5;
    { const bool t = c.r[5].sd[0] >= 0; set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);  if (t) { goto L_0033B984; } }
    set32(c.r[2], c.r[5].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_0033B984:
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld16((c.r[2].w[0]));  c.pc = t; return; }
L_0033B9A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B9B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0033B9B0u) [[unlikely]] return; }
L_0033B9B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 364u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0033B9C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = ld8((c.r[2].w[0]));  if (t) { goto L_0033B9CC; } }
L_0033B9C4:
    set32(c.r[2], c.r[2].w[0] + 8u);
    c.r[6].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 2;
L_0033B9CC:
    c.r[5].d[0] = ld8((c.r[2].w[0] + 1u));
    c.r[4].d[0] = ld8((c.r[2].w[0] + 2u));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 3u));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 4u));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0033BA00:
    set32(c.r[8], 0u + 255u);
    c.r[9].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0]), c.r[8].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[8].w[0]);  if (t) { goto L_0033BA5C; } }
L_0033BA14:
    set32(c.r[7], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0033BA68; } }
    c.r[7].d[0] = ld8((c.r[7].w[0] + 22u));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[8].d[0];  if (t) { goto L_0033BA58; } }
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[8].d[0];  if (t) { goto L_0033BA44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[7].w[0]);  if (t) { goto L_0033BA58; } }
L_0033BA44:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[8].d[0];  if (t) { goto L_0033BA58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[7].w[0]);  if (t) { goto L_0033BA68; } }
L_0033BA58:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 1;
L_0033BA5C:
    c.r[3].d[0] = c.r[9].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[9].w[0] << 5);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033BA14u | kUnwind; return; } goto L_0033BA14; } }
L_0033BA68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033BA70:
    set32(c.r[29], c.r[29].w[0] - 448u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BA98u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_001C(c, 282u, depth + 1u); else { c.pc = 0x00173210u; return; } if (c.pc != 0x0033BA98u) [[unlikely]] return; }
L_0033BA98:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0033BAAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0033BCA4; } }
L_0033BAAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BAB4u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0033BAB4u) [[unlikely]] return; }
L_0033BAB4:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0033BAB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BAC0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 264u, depth + 1u); else { c.pc = 0x00173050u; return; } if (c.pc != 0x0033BAC0u) [[unlikely]] return; }
L_0033BAC0:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 22u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033BC70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BAD8u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0033BAD8u) [[unlikely]] return; }
L_0033BAD8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[5].d[0] = ld16((c.r[1].w[0] - 24832u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BAECu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 275u, depth + 1u); else { c.pc = 0x00173130u; return; } if (c.pc != 0x0033BAECu) [[unlikely]] return; }
L_0033BAEC:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033BC70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BB00u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0033BB00u) [[unlikely]] return; }
L_0033BB00:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[5].d[0] = ld16((c.r[1].w[0] - 24830u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BB14u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 275u, depth + 1u); else { c.pc = 0x00173130u; return; } if (c.pc != 0x0033BB14u) [[unlikely]] return; }
L_0033BB14:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033BC70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BB28u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0033BB28u) [[unlikely]] return; }
L_0033BB28:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[5].d[0] = ld16((c.r[1].w[0] - 24828u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BB3Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 275u, depth + 1u); else { c.pc = 0x00173130u; return; } if (c.pc != 0x0033BB3Cu) [[unlikely]] return; }
L_0033BB3C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033BC70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BB50u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0033BB50u) [[unlikely]] return; }
L_0033BB50:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[5].d[0] = ld16((c.r[1].w[0] - 24826u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BB64u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 275u, depth + 1u); else { c.pc = 0x00173130u; return; } if (c.pc != 0x0033BB64u) [[unlikely]] return; }
L_0033BB64:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[19].w[0] << 1);  if (t) { goto L_0033BC70; } }
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[21], c.r[3].w[0] + 112u);
    st32((c.r[21].w[0]), c.r[18].w[0]);
    st32((c.r[21].w[0] + 4u), c.r[20].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 22u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0033BBBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BBA0u);  if (depth < kMaxDepth) unit_006D(c, 225u, depth + 1u); else { c.pc = 0x002B6350u; return; } if (c.pc != 0x0033BBA0u) [[unlikely]] return; }
L_0033BBA0:
    c.r[5].d[0] = ld16((c.r[20].w[0] + 26u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = ld16((c.r[20].w[0] + 28u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BBB4u); set32(c.r[7], 0u + 118u);  if (depth < kMaxDepth) unit_006D(c, 348u, depth + 1u); else { c.pc = 0x002B7860u; return; } if (c.pc != 0x0033BBB4u) [[unlikely]] return; }
L_0033BBB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0033BBDC; } }
L_0033BBBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BBC4u);  if (depth < kMaxDepth) unit_006D(c, 225u, depth + 1u); else { c.pc = 0x002B6350u; return; } if (c.pc != 0x0033BBC4u) [[unlikely]] return; }
L_0033BBC4:
    c.r[5].d[0] = ld16((c.r[20].w[0] + 26u));
    c.r[6].d[0] = ld16((c.r[20].w[0] + 28u));
    c.r[7].d[0] = ld16((c.r[20].w[0] + 30u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BBD8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 348u, depth + 1u); else { c.pc = 0x002B7860u; return; } if (c.pc != 0x0033BBD8u) [[unlikely]] return; }
L_0033BBD8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0033BBDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BBE4u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0033BBE4u) [[unlikely]] return; }
L_0033BBE4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[5], ld32((c.r[1].w[0] - 25584u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BBF8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 275u, depth + 1u); else { c.pc = 0x00173130u; return; } if (c.pc != 0x0033BBF8u) [[unlikely]] return; }
L_0033BBF8:
    c.r[4].d[0] = ld16((c.r[20].w[0] + 26u));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BC0Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0033BC0Cu) [[unlikely]] return; }
L_0033BC0C:
    c.r[4].d[0] = ld16((c.r[20].w[0] + 28u));
    c.r[20].d[0] = ld8((c.r[2].w[0] + 356u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BC1Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0033BC1Cu) [[unlikely]] return; }
L_0033BC1C:
    c.r[5].d[0] = ld8((c.r[2].w[0] + 356u));
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[2], c.r[17].w[0] << 4);
    set32(c.r[5], c.r[20].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[2].w[0] - c.r[17].w[0]);
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[21].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 21;
L_0033BC70:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 27ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[7].sd[0] = static_cast<std::int32_t>(0x00330000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033BAB8u | kUnwind; return; } goto L_0033BAB8; } }
    set32(c.r[2], 0u + 100u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[1].w[0] - 1560u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[6], 0u + 12u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BCA0u); set32(c.r[7], c.r[7].w[0] + 29904u);  if (depth < kMaxDepth) unit_0009(c, 126u, depth + 1u); else { c.pc = 0x00126150u; return; } if (c.pc != 0x0033BCA0u) [[unlikely]] return; }
L_0033BCA0:
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    c.budget -= 1;
L_0033BCA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 448u);  c.pc = t; return; }
L_0033BCD0:
    set32(c.r[29], c.r[29].w[0] - 592u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] << 56;
    c.r[16].d[0] = c.r[7].d[0] << 56;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 17;
L_0033BD14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BD1Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 108u, depth + 1u); else { c.pc = 0x0012D050u; return; } if (c.pc != 0x0033BD1Cu) [[unlikely]] return; }
L_0033BD1C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0033BD70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BD30u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0033BD30u) [[unlikely]] return; }
L_0033BD30:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 353u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[17].d[0];  if (t) { goto L_0033BD70; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 354u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[16].d[0];  if (t) { goto L_0033BD70; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 355u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0033BD60; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0033BD70; } }
L_0033BD60:
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    st32((c.r[2].w[0] + 112u), c.r[18].w[0]);
    c.budget -= 4;
L_0033BD70:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 118ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033BD14u | kUnwind; return; } goto L_0033BD14; } }
    set32(c.r[6], 0u - 1u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[8], 0u + 100u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BD98u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 87u, depth + 1u); else { c.pc = 0x00338EC0u; return; } if (c.pc != 0x0033BD98u) [[unlikely]] return; }
L_0033BD98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0033BDBC; } }
L_0033BDA0:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[29].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], ld32((c.r[4].w[0] + 108u)));
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 7;
L_0033BDBC:
    c.r[3].d[0] = c.r[5].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[19].w[0] - c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033BDA0u | kUnwind; return; } goto L_0033BDA0; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 592u);  c.pc = t; return; }
L_0033BDF0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BE04u); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0020(c, 143u, depth + 1u); else { c.pc = 0x00181D30u; return; } if (c.pc != 0x0033BE04u) [[unlikely]] return; }
L_0033BE04:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 49u));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0033BE20:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] & 255ull;
    c.budget -= 15;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0033BE64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BE64u); set32(c.r[5], 0u + 64u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x0033BE64u) [[unlikely]] return; }
L_0033BE64:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull; c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_0033BE74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BE74u); set32(c.r[5], 0u + 192u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x0033BE74u) [[unlikely]] return; }
L_0033BE74:
    c.r[16].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[3], 0u + 71u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_0033BE94; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[19], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 9256u), 0u);  if (t) { goto L_0033BEC4; } }
L_0033BE94:
    set32(c.r[2], 0u + 1u);
    st32((c.r[1].w[0] + 9260u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[1].w[0] + 9256u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[1].w[0] + 9264u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BEBCu); set32(c.r[5], 0u + 420u);  if (depth < kMaxDepth) unit_0058(c, 46u, depth + 1u); else { c.pc = 0x00260440u; return; } if (c.pc != 0x0033BEBCu) [[unlikely]] return; }
L_0033BEBC:
    c.r[17].d[0] = ld8((c.r[2].w[0] + 4u));
    set32(c.r[19], 0u + 4u);
    c.budget -= 2;
L_0033BEC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0033BF9C; } }
L_0033BECC:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] <= 0; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0033BF4C; } }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull; set32(c.r[2], c.r[20].w[0] << 6);  if (t) { goto L_0033BF48; } }
    set32(c.r[3], c.r[20].w[0] - 1u);
    set32(c.r[4], c.r[22].w[0] + c.r[2].w[0]);
    set32(c.r[2], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[18], c.r[4].w[0] - 64u);  if (t) { goto L_0033BF34; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_0033BF20; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_0033BF0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033BF48; } }
L_0033BF0C:
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BF18u); set32(c.r[5], 0u + 420u);  if (depth < kMaxDepth) unit_0058(c, 46u, depth + 1u); else { c.pc = 0x00260440u; return; } if (c.pc != 0x0033BF18u) [[unlikely]] return; }
L_0033BF18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = ld8((c.r[2].w[0] + 4u));  if (t) { goto L_0033BF48; } }
L_0033BF20:
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BF2Cu); set32(c.r[5], 0u + 421u);  if (depth < kMaxDepth) unit_0058(c, 46u, depth + 1u); else { c.pc = 0x00260440u; return; } if (c.pc != 0x0033BF2Cu) [[unlikely]] return; }
L_0033BF2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = ld8((c.r[2].w[0] + 4u));  if (t) { goto L_0033BF48; } }
L_0033BF34:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BF44u); set32(c.r[5], 0u + 422u);  if (depth < kMaxDepth) unit_0058(c, 46u, depth + 1u); else { c.pc = 0x00260440u; return; } if (c.pc != 0x0033BF44u) [[unlikely]] return; }
L_0033BF44:
    c.r[17].d[0] = ld8((c.r[2].w[0] + 4u));
    c.budget -= 1;
L_0033BF48:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0033BF4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BF54u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0020(c, 143u, depth + 1u); else { c.pc = 0x00181D30u; return; } if (c.pc != 0x0033BF54u) [[unlikely]] return; }
L_0033BF54:
    set32(c.r[2], 0u + 255u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == c.r[2].d[0]; st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0033BF64; } }
    st8((c.r[18].w[0] + 27u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0033BF64:
    set32(c.r[2], 0u + 85u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0033BF80; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 22u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033BF80; } }
    st8((c.r[18].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0033BF80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BF88u);  if (depth < kMaxDepth) unit_008E(c, 376u, depth + 1u); else { c.pc = 0x0033B750u; return; } if (c.pc != 0x0033BF88u) [[unlikely]] return; }
L_0033BF88:
    set32(c.r[3], 0u + 118u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0033BF98; } }
    st8((c.r[18].w[0] + 27u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0033BF98:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_0033BF9C:
    c.r[3].d[0] = c.r[20].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033BECCu | kUnwind; return; } goto L_0033BECC; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0033BFD0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BFF8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0083(c, 66u, depth + 1u); else { c.pc = 0x0030C910u; return; } if (c.pc != 0x0033BFF8u) [[unlikely]] return; }
L_0033BFF8:
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[18].w[0] << 5);
    c.budget -= 2;
    [[clang::musttail]] return unit_008F(c, 1u, depth);
}

}
