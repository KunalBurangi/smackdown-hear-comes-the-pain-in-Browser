#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_005E[4096] = {
    1, 0, 0, 0, 0, 0, 2, 0, 3, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0,
    6, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 9, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 12, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0,
    0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 23, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0,
    27, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 30, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 48, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0,
    57, 0, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0,
    61, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0,
    0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 79, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0,
    0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 86, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    89, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 93, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0,
    0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 0,
    0, 101, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0,
    104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 108, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 115, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 118, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 132, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 136, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0,
    0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0,
    0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0,
    150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 156, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 203, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0,
    0, 0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0,
    216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 223, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0,
    0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0,
    0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 232, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 240, 0, 0, 0, 0, 241, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0,
    0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 253, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    263, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 265, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 267, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0,
    0, 271, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 274, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0,
    278, 0, 0, 0, 0, 279, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 282, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    285, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0,
    289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 293, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 295, 0, 296, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0,
    0, 0, 0, 299, 0, 300, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302,
    0, 0, 0, 0, 0, 303, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0,
    306, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 311, 0, 0, 312, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 314, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 321, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 325, 0, 0,
    0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    331, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0,
    334, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 338, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0,
    341, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 344, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 347, 0, 0, 0,
    0, 348, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 351, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0,
    358, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0,
    361, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0,
    0, 365, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 368, 0, 0, 0,
    0, 369, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 372, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 376, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 378, 0, 0, 0, 0, 379, 0, 0, 0, 0, 380, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 383, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 389, 0, 0, 0, 390, 0, 391, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 395,
    0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 398, 0, 399, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 402, 0,
    0, 0, 0, 0, 0, 403, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0,
    406, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 420,
    0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0,
    424, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0,
    0, 427, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 431, 0, 432, 0, 0, 0, 433, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 436, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_005E(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00278000;
    case 2u: goto L_00278018;
    case 3u: goto L_00278020;
    case 4u: goto L_00278028;
    case 5u: goto L_00278068;
    case 6u: goto L_00278080;
    case 7u: goto L_00278094;
    case 8u: goto L_002780D4;
    case 9u: goto L_00278114;
    case 10u: goto L_00278120;
    case 11u: goto L_00278168;
    case 12u: goto L_00278174;
    case 13u: goto L_002781BC;
    case 14u: goto L_002781D0;
    case 15u: goto L_002781E4;
    case 16u: goto L_002781F8;
    case 17u: goto L_00278240;
    case 18u: goto L_00278260;
    case 19u: goto L_00278274;
    case 20u: goto L_00278290;
    case 21u: goto L_002782A8;
    case 22u: goto L_002782E8;
    case 23u: goto L_002782F0;
    case 24u: goto L_00278334;
    case 25u: goto L_00278350;
    case 26u: goto L_00278364;
    case 27u: goto L_00278380;
    case 28u: goto L_00278398;
    case 29u: goto L_002783D8;
    case 30u: goto L_002783E0;
    case 31u: goto L_00278428;
    case 32u: goto L_00278440;
    case 33u: goto L_00278454;
    case 34u: goto L_00278468;
    case 35u: goto L_002784A8;
    case 36u: goto L_002784C0;
    case 37u: goto L_002784D4;
    case 38u: goto L_002784E8;
    case 39u: goto L_00278528;
    case 40u: goto L_00278540;
    case 41u: goto L_00278560;
    case 42u: goto L_00278574;
    case 43u: goto L_002785B8;
    case 44u: goto L_002785D0;
    case 45u: goto L_002785E4;
    case 46u: goto L_00278618;
    case 47u: goto L_00278658;
    case 48u: goto L_00278664;
    case 49u: goto L_002786AC;
    case 50u: goto L_002786C0;
    case 51u: goto L_002786D8;
    case 52u: goto L_0027870C;
    case 53u: goto L_0027874C;
    case 54u: goto L_00278768;
    case 55u: goto L_002787C4;
    case 56u: goto L_002787DC;
    case 57u: goto L_00278800;
    case 58u: goto L_00278814;
    case 59u: goto L_00278828;
    case 60u: goto L_00278868;
    case 61u: goto L_00278880;
    case 62u: goto L_0027889C;
    case 63u: goto L_002788B8;
    case 64u: goto L_002788CC;
    case 65u: goto L_002788DC;
    case 66u: goto L_00278904;
    case 67u: goto L_00278944;
    case 68u: goto L_00278950;
    case 69u: goto L_00278990;
    case 70u: goto L_002789B0;
    case 71u: goto L_002789C4;
    case 72u: goto L_002789D8;
    case 73u: goto L_00278A28;
    case 74u: goto L_00278A30;
    case 75u: goto L_00278A78;
    case 76u: goto L_00278A90;
    case 77u: goto L_00278AA4;
    case 78u: goto L_00278AB8;
    case 79u: goto L_00278B08;
    case 80u: goto L_00278B10;
    case 81u: goto L_00278B50;
    case 82u: goto L_00278B70;
    case 83u: goto L_00278B84;
    case 84u: goto L_00278B98;
    case 85u: goto L_00278BE8;
    case 86u: goto L_00278BF0;
    case 87u: goto L_00278C38;
    case 88u: goto L_00278C40;
    case 89u: goto L_00278C80;
    case 90u: goto L_00278CA0;
    case 91u: goto L_00278CB4;
    case 92u: goto L_00278CC8;
    case 93u: goto L_00278D10;
    case 94u: goto L_00278D18;
    case 95u: goto L_00278D58;
    case 96u: goto L_00278D70;
    case 97u: goto L_00278D84;
    case 98u: goto L_00278D98;
    case 99u: goto L_00278DD8;
    case 100u: goto L_00278DF0;
    case 101u: goto L_00278E04;
    case 102u: goto L_00278E18;
    case 103u: goto L_00278E64;
    case 104u: goto L_00278E80;
    case 105u: goto L_00278E94;
    case 106u: goto L_00278EA8;
    case 107u: goto L_00278EE8;
    case 108u: goto L_00278EF0;
    case 109u: goto L_00278F38;
    case 110u: goto L_00278F40;
    case 111u: goto L_00278F8C;
    case 112u: goto L_00278FA0;
    case 113u: goto L_00278FB4;
    case 114u: goto L_00278FC8;
    case 115u: goto L_00279008;
    case 116u: goto L_00279010;
    case 117u: goto L_00279058;
    case 118u: goto L_00279060;
    case 119u: goto L_002790AC;
    case 120u: goto L_002790C0;
    case 121u: goto L_002790DC;
    case 122u: goto L_002790F0;
    case 123u: goto L_00279138;
    case 124u: goto L_00279150;
    case 125u: goto L_00279164;
    case 126u: goto L_00279178;
    case 127u: goto L_002791B8;
    case 128u: goto L_002791D0;
    case 129u: goto L_002791E4;
    case 130u: goto L_00279218;
    case 131u: goto L_00279258;
    case 132u: goto L_00279264;
    case 133u: goto L_002792A4;
    case 134u: goto L_002792C0;
    case 135u: goto L_002792DC;
    case 136u: goto L_002792F0;
    case 137u: goto L_00279338;
    case 138u: goto L_00279350;
    case 139u: goto L_00279364;
    case 140u: goto L_00279390;
    case 141u: goto L_002793D0;
    case 142u: goto L_002793F0;
    case 143u: goto L_00279404;
    case 144u: goto L_00279430;
    case 145u: goto L_00279470;
    case 146u: goto L_00279490;
    case 147u: goto L_002794A4;
    case 148u: goto L_002794B8;
    case 149u: goto L_002794F8;
    case 150u: goto L_00279500;
    case 151u: goto L_00279540;
    case 152u: goto L_00279560;
    case 153u: goto L_00279574;
    case 154u: goto L_002795A4;
    case 155u: goto L_002795E4;
    case 156u: goto L_002795F0;
    case 157u: goto L_00279634;
    case 158u: goto L_00279650;
    case 159u: goto L_00279664;
    case 160u: goto L_00279694;
    case 161u: goto L_002796D4;
    case 162u: goto L_002796E0;
    case 163u: goto L_00279724;
    case 164u: goto L_00279740;
    case 165u: goto L_00279754;
    case 166u: goto L_00279784;
    case 167u: goto L_002797C4;
    case 168u: goto L_002797D0;
    case 169u: goto L_00279810;
    case 170u: goto L_00279830;
    case 171u: goto L_00279844;
    case 172u: goto L_00279874;
    case 173u: goto L_002798B4;
    case 174u: goto L_002798C0;
    case 175u: goto L_00279904;
    case 176u: goto L_00279920;
    case 177u: goto L_00279934;
    case 178u: goto L_00279948;
    case 179u: goto L_00279988;
    case 180u: goto L_002799A0;
    case 181u: goto L_002799B8;
    case 182u: goto L_002799E4;
    case 183u: goto L_00279A38;
    case 184u: goto L_00279A40;
    case 185u: goto L_00279A94;
    case 186u: goto L_00279AB0;
    case 187u: goto L_00279AC4;
    case 188u: goto L_00279AD8;
    case 189u: goto L_00279B20;
    case 190u: goto L_00279B40;
    case 191u: goto L_00279B54;
    case 192u: goto L_00279B68;
    case 193u: goto L_00279BA8;
    case 194u: goto L_00279BC0;
    case 195u: goto L_00279BD4;
    case 196u: goto L_00279BE8;
    case 197u: goto L_00279C28;
    case 198u: goto L_00279C40;
    case 199u: goto L_00279C54;
    case 200u: goto L_00279C68;
    case 201u: goto L_00279CA8;
    case 202u: goto L_00279CC0;
    case 203u: goto L_00279CD4;
    case 204u: goto L_00279CE8;
    case 205u: goto L_00279D28;
    case 206u: goto L_00279D40;
    case 207u: goto L_00279D54;
    case 208u: goto L_00279D68;
    case 209u: goto L_00279DA8;
    case 210u: goto L_00279DB0;
    case 211u: goto L_00279DF0;
    case 212u: goto L_00279E10;
    case 213u: goto L_00279E24;
    case 214u: goto L_00279E38;
    case 215u: goto L_00279E78;
    case 216u: goto L_00279E80;
    case 217u: goto L_00279EC0;
    case 218u: goto L_00279EC8;
    case 219u: goto L_00279F08;
    case 220u: goto L_00279F20;
    case 221u: goto L_00279F34;
    case 222u: goto L_00279F48;
    case 223u: goto L_00279F88;
    case 224u: goto L_00279F90;
    case 225u: goto L_00279FD0;
    case 226u: goto L_00279FF0;
    case 227u: goto L_0027A004;
    case 228u: goto L_0027A034;
    case 229u: goto L_0027A074;
    case 230u: goto L_0027A094;
    case 231u: goto L_0027A0DC;
    case 232u: goto L_0027A0E4;
    case 233u: goto L_0027A124;
    case 234u: goto L_0027A140;
    case 235u: goto L_0027A154;
    case 236u: goto L_0027A184;
    case 237u: goto L_0027A1C4;
    case 238u: goto L_0027A1E4;
    case 239u: goto L_0027A22C;
    case 240u: goto L_0027A240;
    case 241u: goto L_0027A254;
    case 242u: goto L_0027A268;
    case 243u: goto L_0027A2A8;
    case 244u: goto L_0027A2C0;
    case 245u: goto L_0027A2D4;
    case 246u: goto L_0027A2E8;
    case 247u: goto L_0027A328;
    case 248u: goto L_0027A330;
    case 249u: goto L_0027A370;
    case 250u: goto L_0027A390;
    case 251u: goto L_0027A3A8;
    case 252u: goto L_0027A3C4;
    case 253u: goto L_0027A404;
    case 254u: goto L_0027A424;
    case 255u: goto L_0027A464;
    case 256u: goto L_0027A474;
    case 257u: goto L_0027A4B4;
    case 258u: goto L_0027A4D0;
    case 259u: goto L_0027A4E4;
    case 260u: goto L_0027A4F8;
    case 261u: goto L_0027A538;
    case 262u: goto L_0027A540;
    case 263u: goto L_0027A580;
    case 264u: goto L_0027A5A0;
    case 265u: goto L_0027A5B4;
    case 266u: goto L_0027A5C8;
    case 267u: goto L_0027A608;
    case 268u: goto L_0027A610;
    case 269u: goto L_0027A650;
    case 270u: goto L_0027A670;
    case 271u: goto L_0027A684;
    case 272u: goto L_0027A698;
    case 273u: goto L_0027A6D8;
    case 274u: goto L_0027A6E0;
    case 275u: goto L_0027A720;
    case 276u: goto L_0027A728;
    case 277u: goto L_0027A768;
    case 278u: goto L_0027A780;
    case 279u: goto L_0027A794;
    case 280u: goto L_0027A7A8;
    case 281u: goto L_0027A7E8;
    case 282u: goto L_0027A7F0;
    case 283u: goto L_0027A838;
    case 284u: goto L_0027A840;
    case 285u: goto L_0027A880;
    case 286u: goto L_0027A8A0;
    case 287u: goto L_0027A8C0;
    case 288u: goto L_0027A8E0;
    case 289u: goto L_0027A900;
    case 290u: goto L_0027A940;
    case 291u: goto L_0027A954;
    case 292u: goto L_0027A99C;
    case 293u: goto L_0027A9B0;
    case 294u: goto L_0027A9BC;
    case 295u: goto L_0027AA04;
    case 296u: goto L_0027AA0C;
    case 297u: goto L_0027AA18;
    case 298u: goto L_0027AA74;
    case 299u: goto L_0027AA8C;
    case 300u: goto L_0027AA94;
    case 301u: goto L_0027AAA0;
    case 302u: goto L_0027AAFC;
    case 303u: goto L_0027AB14;
    case 304u: goto L_0027AB1C;
    case 305u: goto L_0027AB5C;
    case 306u: goto L_0027AB80;
    case 307u: goto L_0027AB9C;
    case 308u: goto L_0027ABCC;
    case 309u: goto L_0027AC08;
    case 310u: goto L_0027AC50;
    case 311u: goto L_0027AC64;
    case 312u: goto L_0027AC70;
    case 313u: goto L_0027ACB8;
    case 314u: goto L_0027ACC0;
    case 315u: goto L_0027ACCC;
    case 316u: goto L_0027AD14;
    case 317u: goto L_0027AD30;
    case 318u: goto L_0027AD4C;
    case 319u: goto L_0027AD78;
    case 320u: goto L_0027ADAC;
    case 321u: goto L_0027AE04;
    case 322u: goto L_0027AE20;
    case 323u: goto L_0027AE40;
    case 324u: goto L_0027AE58;
    case 325u: goto L_0027AE74;
    case 326u: goto L_0027AE90;
    case 327u: goto L_0027AED0;
    case 328u: goto L_0027AED8;
    case 329u: goto L_0027AF18;
    case 330u: goto L_0027AF40;
    case 331u: goto L_0027AF80;
    case 332u: goto L_0027AFA4;
    case 333u: goto L_0027AFE4;
    case 334u: goto L_0027B000;
    case 335u: goto L_0027B014;
    case 336u: goto L_0027B030;
    case 337u: goto L_0027B040;
    case 338u: goto L_0027B088;
    case 339u: goto L_0027B098;
    case 340u: goto L_0027B0E0;
    case 341u: goto L_0027B100;
    case 342u: goto L_0027B114;
    case 343u: goto L_0027B148;
    case 344u: goto L_0027B188;
    case 345u: goto L_0027B194;
    case 346u: goto L_0027B1DC;
    case 347u: goto L_0027B1F0;
    case 348u: goto L_0027B204;
    case 349u: goto L_0027B218;
    case 350u: goto L_0027B258;
    case 351u: goto L_0027B260;
    case 352u: goto L_0027B2A8;
    case 353u: goto L_0027B2C0;
    case 354u: goto L_0027B2DC;
    case 355u: goto L_0027B308;
    case 356u: goto L_0027B32C;
    case 357u: goto L_0027B36C;
    case 358u: goto L_0027B380;
    case 359u: goto L_0027B38C;
    case 360u: goto L_0027B3E8;
    case 361u: goto L_0027B400;
    case 362u: goto L_0027B408;
    case 363u: goto L_0027B448;
    case 364u: goto L_0027B470;
    case 365u: goto L_0027B484;
    case 366u: goto L_0027B498;
    case 367u: goto L_0027B4D8;
    case 368u: goto L_0027B4F0;
    case 369u: goto L_0027B504;
    case 370u: goto L_0027B518;
    case 371u: goto L_0027B558;
    case 372u: goto L_0027B560;
    case 373u: goto L_0027B5A4;
    case 374u: goto L_0027B5AC;
    case 375u: goto L_0027B5F0;
    case 376u: goto L_0027B5F8;
    case 377u: goto L_0027B63C;
    case 378u: goto L_0027B650;
    case 379u: goto L_0027B664;
    case 380u: goto L_0027B678;
    case 381u: goto L_0027B6B8;
    case 382u: goto L_0027B6C0;
    case 383u: goto L_0027B704;
    case 384u: goto L_0027B70C;
    case 385u: goto L_0027B750;
    case 386u: goto L_0027B758;
    case 387u: goto L_0027B79C;
    case 388u: goto L_0027B7B0;
    case 389u: goto L_0027B7C8;
    case 390u: goto L_0027B7D8;
    case 391u: goto L_0027B7E0;
    case 392u: goto L_0027B828;
    case 393u: goto L_0027B850;
    case 394u: goto L_0027B868;
    case 395u: goto L_0027B87C;
    case 396u: goto L_0027B890;
    case 397u: goto L_0027B8E0;
    case 398u: goto L_0027B8E4;
    case 399u: goto L_0027B8EC;
    case 400u: goto L_0027B934;
    case 401u: goto L_0027B960;
    case 402u: goto L_0027B978;
    case 403u: goto L_0027B994;
    case 404u: goto L_0027B9A0;
    case 405u: goto L_0027B9E4;
    case 406u: goto L_0027BA00;
    case 407u: goto L_0027BA1C;
    case 408u: goto L_0027BA40;
    case 409u: goto L_0027BA6C;
    case 410u: goto L_0027BA98;
    case 411u: goto L_0027BAC4;
    case 412u: goto L_0027BAE8;
    case 413u: goto L_0027BB28;
    case 414u: goto L_0027BBF8;
    case 415u: goto L_0027BC9C;
    case 416u: goto L_0027BCC4;
    case 417u: goto L_0027BD24;
    case 418u: goto L_0027BD3C;
    case 419u: goto L_0027BD60;
    case 420u: goto L_0027BD7C;
    case 421u: goto L_0027BDA0;
    case 422u: goto L_0027BDC4;
    case 423u: goto L_0027BDF8;
    case 424u: goto L_0027BE00;
    case 425u: goto L_0027BE0C;
    case 426u: goto L_0027BE6C;
    case 427u: goto L_0027BE84;
    case 428u: goto L_0027BEA0;
    case 429u: goto L_0027BEBC;
    case 430u: goto L_0027BEE8;
    case 431u: goto L_0027BF10;
    case 432u: goto L_0027BF18;
    case 433u: goto L_0027BF28;
    case 434u: goto L_0027BF40;
    case 435u: goto L_0027BF64;
    case 436u: goto L_0027BF78;
    case 437u: goto L_0027BFD8;
    default: bad_entry(c, 0x00278000u); return;
    }
L_00278000:
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
L_00278018:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278020u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00278020u) [[unlikely]] return; }
L_00278020:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278028u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00278028u) [[unlikely]] return; }
L_00278028:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00278060; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 4864u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_00278060:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278068u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00278068u) [[unlikely]] return; }
L_00278068:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00278080:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278094u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x00278094u) [[unlikely]] return; }
L_00278094:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 736u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 370u));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 24u);  if (t) { goto L_0027816C; } }
    c.r[2].d[0] = ld64((c.r[3].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 24u);  if (t) { goto L_00278118; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002780D4u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002780D4u) [[unlikely]] return; }
L_002780D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027810C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 3936u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_0027810C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278114u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00278114u) [[unlikely]] return; }
L_00278114:
    set32(c.r[4], 0u + 24u);
    c.budget -= 1;
L_00278118:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278120u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00278120u) [[unlikely]] return; }
L_00278120:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00278160; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[5], c.r[5].w[0] + 6048u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 4224u);
    set32(c.r[3], 0u - 1u);
    st32((c.r[2].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 14;
L_00278160:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278168u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00278168u) [[unlikely]] return; }
L_00278168:
    set32(c.r[4], 0u + 24u);
    c.budget -= 1;
L_0027816C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278174u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00278174u) [[unlikely]] return; }
L_00278174:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002781B4; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[5], c.r[5].w[0] + 6048u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 4832u);
    set32(c.r[3], 0u - 1u);
    st32((c.r[2].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 14;
L_002781B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002781BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x002781BCu) [[unlikely]] return; }
L_002781BC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002781D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002781E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x002781E4u) [[unlikely]] return; }
L_002781E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], 0u + 24u);
    set32(c.r[2], c.r[2].w[0] + 720u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002781F8u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002781F8u) [[unlikely]] return; }
L_002781F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00278238; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[5], c.r[5].w[0] + 6048u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 4800u);
    set32(c.r[3], 0u - 1u);
    st32((c.r[2].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 14;
L_00278238:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278240u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00278240u) [[unlikely]] return; }
L_00278240:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00278260:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278274u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x00278274u) [[unlikely]] return; }
L_00278274:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 704u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278290u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_006F(c, 292u, depth + 1u); else { c.pc = 0x002BFF20u; return; } if (c.pc != 0x00278290u) [[unlikely]] return; }
L_00278290:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 20u);  if (t) { goto L_002782A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00278338; } }
L_002782A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002782A8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002782A8u) [[unlikely]] return; }
L_002782A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002782E0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 4256u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_002782E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002782E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x002782E8u) [[unlikely]] return; }
L_002782E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002782F0u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002782F0u) [[unlikely]] return; }
L_002782F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027832C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 3456u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st16((c.r[2].w[0] + 20u), static_cast<std::uint16_t>(0u));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 13;
L_0027832C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278334u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00278334u) [[unlikely]] return; }
L_00278334:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00278338:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00278350:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278364u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x00278364u) [[unlikely]] return; }
L_00278364:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 688u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278380u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_006F(c, 292u, depth + 1u); else { c.pc = 0x002BFF20u; return; } if (c.pc != 0x00278380u) [[unlikely]] return; }
L_00278380:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 20u);  if (t) { goto L_00278390; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0027842C; } }
L_00278390:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278398u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00278398u) [[unlikely]] return; }
L_00278398:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002783D0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 4256u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_002783D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002783D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x002783D8u) [[unlikely]] return; }
L_002783D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002783E0u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002783E0u) [[unlikely]] return; }
L_002783E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00278420; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[5], c.r[5].w[0] + 6048u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 4224u);
    set32(c.r[3], 0u - 1u);
    st32((c.r[2].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 14;
L_00278420:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278428u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00278428u) [[unlikely]] return; }
L_00278428:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0027842C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00278440:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278454u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x00278454u) [[unlikely]] return; }
L_00278454:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], 0u + 20u);
    set32(c.r[2], c.r[2].w[0] + 672u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278468u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00278468u) [[unlikely]] return; }
L_00278468:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002784A0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 4768u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_002784A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002784A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x002784A8u) [[unlikely]] return; }
L_002784A8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002784C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002784D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x002784D4u) [[unlikely]] return; }
L_002784D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], 0u + 20u);
    set32(c.r[2], c.r[2].w[0] + 656u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002784E8u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002784E8u) [[unlikely]] return; }
L_002784E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00278520; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 4736u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_00278520:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278528u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00278528u) [[unlikely]] return; }
L_00278528:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00278540:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278560u); c.r[6].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x00278560u) [[unlikely]] return; }
L_00278560:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], 0u + 20u);
    set32(c.r[2], c.r[2].w[0] + 640u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278574u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00278574u) [[unlikely]] return; }
L_00278574:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002785B0; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 4640u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 13;
L_002785B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002785B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x002785B8u) [[unlikely]] return; }
L_002785B8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002785D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002785E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x002785E4u) [[unlikely]] return; }
L_002785E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 624u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = ld64((c.r[2].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 24u);  if (t) { goto L_0027865C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278618u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00278618u) [[unlikely]] return; }
L_00278618:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00278650; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 3936u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_00278650:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278658u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00278658u) [[unlikely]] return; }
L_00278658:
    set32(c.r[4], 0u + 24u);
    c.budget -= 1;
L_0027865C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278664u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00278664u) [[unlikely]] return; }
L_00278664:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002786A4; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[5], c.r[5].w[0] + 6048u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 5472u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st8((c.r[2].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 14;
L_002786A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002786ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x002786ACu) [[unlikely]] return; }
L_002786AC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002786C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002786D8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x002786D8u) [[unlikely]] return; }
L_002786D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 608u);
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = ld64((c.r[2].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027874C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027870Cu); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027870Cu) [[unlikely]] return; }
L_0027870C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00278744; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 3936u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_00278744:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027874Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027874Cu) [[unlikely]] return; }
L_0027874C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[29].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] - 20544u);
    set32(c.r[4], 0u + 64u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278768u); st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00278768u) [[unlikely]] return; }
L_00278768:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002787D4; } }
    set32(c.r[7], ld32((c.r[17].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[5], c.r[5].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 5952u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[2].w[0] + 32u);
    set32(c.r[4], c.r[29].w[0] + 76u);
    st32((c.r[2].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[7].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[3]);
    st128((c.r[2].w[0] + 32u) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002787C4u); set32(c.r[5], c.r[2].w[0] + 224u);  if (depth < kMaxDepth) unit_005C(c, 29u, depth + 1u); else { c.pc = 0x002705F0u; return; } if (c.pc != 0x002787C4u) [[unlikely]] return; }
L_002787C4:
    c.r[3].d[0] = ld16((c.r[29].w[0] + 76u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st16((c.r[16].w[0] + 48u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
L_002787D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002787DCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x002787DCu) [[unlikely]] return; }
L_002787DC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00278800:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278814u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x00278814u) [[unlikely]] return; }
L_00278814:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], 0u + 24u);
    set32(c.r[2], c.r[2].w[0] + 592u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278828u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00278828u) [[unlikely]] return; }
L_00278828:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00278860; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 5408u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_00278860:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278868u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00278868u) [[unlikely]] return; }
L_00278868:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00278880:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027889Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x0027889Cu) [[unlikely]] return; }
L_0027889C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 576u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002788B8u); set32(c.r[18], c.r[2].w[0] + 24u);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x002788B8u) [[unlikely]] return; }
L_002788B8:
    set32(c.r[3], 0u + 35u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002788E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002788CCu); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0059(c, 74u, depth + 1u); else { c.pc = 0x002650C0u; return; } if (c.pc != 0x002788CCu) [[unlikely]] return; }
L_002788CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002788E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002788DCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005C(c, 76u, depth + 1u); else { c.pc = 0x00271410u; return; } if (c.pc != 0x002788DCu) [[unlikely]] return; }
L_002788DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00278994; } }
L_002788E4:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[2].d[0] = ld64((c.r[2].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 20u);  if (t) { goto L_00278948; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278904u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00278904u) [[unlikely]] return; }
L_00278904:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027893C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 3936u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_0027893C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278944u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00278944u) [[unlikely]] return; }
L_00278944:
    set32(c.r[4], 0u + 20u);
    c.budget -= 1;
L_00278948:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278950u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00278950u) [[unlikely]] return; }
L_00278950:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00278988; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 5376u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_00278988:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278990u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00278990u) [[unlikely]] return; }
L_00278990:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00278994:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002789B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002789C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x002789C4u) [[unlikely]] return; }
L_002789C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], 0u + 24u);
    set32(c.r[2], c.r[2].w[0] + 560u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002789D8u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002789D8u) [[unlikely]] return; }
L_002789D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00278A20; } }
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[6], c.r[6].w[0] + 6048u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[5], c.r[5].w[0] + 5280u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], 0u + 60u);
    st32((c.r[2].w[0] + 16u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[7].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[5].w[0]);
    st8((c.r[2].w[0] + 20u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 16;
L_00278A20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278A28u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00278A28u) [[unlikely]] return; }
L_00278A28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278A30u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00278A30u) [[unlikely]] return; }
L_00278A30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00278A70; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[5], c.r[5].w[0] + 6048u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 5184u);
    set32(c.r[3], 0u + 120u);
    st32((c.r[2].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 14;
L_00278A70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278A78u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00278A78u) [[unlikely]] return; }
L_00278A78:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00278A90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278AA4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x00278AA4u) [[unlikely]] return; }
L_00278AA4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], 0u + 24u);
    set32(c.r[2], c.r[2].w[0] + 544u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278AB8u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00278AB8u) [[unlikely]] return; }
L_00278AB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00278B00; } }
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[6], c.r[6].w[0] + 6048u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[5], c.r[5].w[0] + 5280u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], 0u + 60u);
    st32((c.r[2].w[0] + 16u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[7].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[5].w[0]);
    st8((c.r[2].w[0] + 20u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 16;
L_00278B00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278B08u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00278B08u) [[unlikely]] return; }
L_00278B08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278B10u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00278B10u) [[unlikely]] return; }
L_00278B10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00278B48; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 5152u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_00278B48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278B50u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00278B50u) [[unlikely]] return; }
L_00278B50:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00278B70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278B84u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x00278B84u) [[unlikely]] return; }
L_00278B84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], 0u + 24u);
    set32(c.r[2], c.r[2].w[0] + 528u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278B98u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00278B98u) [[unlikely]] return; }
L_00278B98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00278BE0; } }
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[6], c.r[6].w[0] + 6048u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[5], c.r[5].w[0] + 5280u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], 0u + 60u);
    st32((c.r[2].w[0] + 16u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[7].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[5].w[0]);
    st8((c.r[2].w[0] + 20u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 16;
L_00278BE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278BE8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00278BE8u) [[unlikely]] return; }
L_00278BE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278BF0u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00278BF0u) [[unlikely]] return; }
L_00278BF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00278C30; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[5], c.r[5].w[0] + 6048u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 5184u);
    set32(c.r[3], 0u + 120u);
    st32((c.r[2].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 14;
L_00278C30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278C38u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00278C38u) [[unlikely]] return; }
L_00278C38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278C40u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00278C40u) [[unlikely]] return; }
L_00278C40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00278C78; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 5152u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_00278C78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278C80u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00278C80u) [[unlikely]] return; }
L_00278C80:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00278CA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278CB4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x00278CB4u) [[unlikely]] return; }
L_00278CB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], 0u + 20u);
    set32(c.r[2], c.r[2].w[0] + 512u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278CC8u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00278CC8u) [[unlikely]] return; }
L_00278CC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00278D08; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[5], c.r[5].w[0] + 6048u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 5184u);
    set32(c.r[3], 0u + 60u);
    st32((c.r[2].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 14;
L_00278D08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278D10u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00278D10u) [[unlikely]] return; }
L_00278D10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278D18u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00278D18u) [[unlikely]] return; }
L_00278D18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00278D50; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 5152u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_00278D50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278D58u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00278D58u) [[unlikely]] return; }
L_00278D58:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00278D70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278D84u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x00278D84u) [[unlikely]] return; }
L_00278D84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], 0u + 20u);
    set32(c.r[2], c.r[2].w[0] + 496u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278D98u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00278D98u) [[unlikely]] return; }
L_00278D98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00278DD0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 5312u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_00278DD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278DD8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00278DD8u) [[unlikely]] return; }
L_00278DD8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00278DF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278E04u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x00278E04u) [[unlikely]] return; }
L_00278E04:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], 0u + 24u);
    set32(c.r[2], c.r[2].w[0] + 480u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278E18u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00278E18u) [[unlikely]] return; }
L_00278E18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00278E5C; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[5], c.r[5].w[0] + 6048u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 5280u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st8((c.r[2].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[2].w[0] + 8u), 0u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 15;
L_00278E5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278E64u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00278E64u) [[unlikely]] return; }
L_00278E64:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00278E80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278E94u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x00278E94u) [[unlikely]] return; }
L_00278E94:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], 0u + 20u);
    set32(c.r[2], c.r[2].w[0] + 464u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278EA8u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00278EA8u) [[unlikely]] return; }
L_00278EA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00278EE0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 5504u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_00278EE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278EE8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00278EE8u) [[unlikely]] return; }
L_00278EE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278EF0u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00278EF0u) [[unlikely]] return; }
L_00278EF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00278F30; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[5], c.r[5].w[0] + 6048u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 5472u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st8((c.r[2].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 14;
L_00278F30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278F38u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00278F38u) [[unlikely]] return; }
L_00278F38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278F40u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00278F40u) [[unlikely]] return; }
L_00278F40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00278F84; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[5], c.r[5].w[0] + 6048u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 5248u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st8((c.r[2].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 21u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 15;
L_00278F84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278F8Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00278F8Cu) [[unlikely]] return; }
L_00278F8C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00278FA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278FB4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x00278FB4u) [[unlikely]] return; }
L_00278FB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], 0u + 20u);
    set32(c.r[2], c.r[2].w[0] + 448u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278FC8u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00278FC8u) [[unlikely]] return; }
L_00278FC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00279000; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 5504u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_00279000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279008u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00279008u) [[unlikely]] return; }
L_00279008:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279010u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00279010u) [[unlikely]] return; }
L_00279010:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00279050; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[5], c.r[5].w[0] + 6048u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 5472u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st8((c.r[2].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 14;
L_00279050:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279058u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00279058u) [[unlikely]] return; }
L_00279058:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279060u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00279060u) [[unlikely]] return; }
L_00279060:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002790A4; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[5], c.r[5].w[0] + 6048u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 5216u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st8((c.r[2].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 21u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 15;
L_002790A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002790ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x002790ACu) [[unlikely]] return; }
L_002790AC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002790C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002790DCu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x002790DCu) [[unlikely]] return; }
L_002790DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], 0u + 24u);
    set32(c.r[2], c.r[2].w[0] + 432u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002790F0u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002790F0u) [[unlikely]] return; }
L_002790F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00279130; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 5536u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 42u));
    st16((c.r[2].w[0] + 20u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 14;
L_00279130:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279138u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00279138u) [[unlikely]] return; }
L_00279138:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00279150:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279164u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x00279164u) [[unlikely]] return; }
L_00279164:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], 0u + 20u);
    set32(c.r[2], c.r[2].w[0] + 416u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279178u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00279178u) [[unlikely]] return; }
L_00279178:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002791B0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 5152u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_002791B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002791B8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x002791B8u) [[unlikely]] return; }
L_002791B8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002791D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002791E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x002791E4u) [[unlikely]] return; }
L_002791E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 400u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = ld64((c.r[2].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 20u);  if (t) { goto L_0027925C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279218u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00279218u) [[unlikely]] return; }
L_00279218:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00279250; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 3936u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_00279250:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279258u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00279258u) [[unlikely]] return; }
L_00279258:
    set32(c.r[4], 0u + 20u);
    c.budget -= 1;
L_0027925C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279264u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00279264u) [[unlikely]] return; }
L_00279264:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027929C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 5120u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_0027929C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002792A4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x002792A4u) [[unlikely]] return; }
L_002792A4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002792C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002792DCu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x002792DCu) [[unlikely]] return; }
L_002792DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], 0u + 48u);
    set32(c.r[2], c.r[2].w[0] + 384u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002792F0u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002792F0u) [[unlikely]] return; }
L_002792F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00279330; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 5056u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    ld128((c.r[16].w[0]) & ~15u, c.r[3]);
    st128((c.r[2].w[0] + 32u) & ~15u, c.r[3]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 14;
L_00279330:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279338u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00279338u) [[unlikely]] return; }
L_00279338:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00279350:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279364u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x00279364u) [[unlikely]] return; }
L_00279364:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 368u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 370u));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002793D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279390u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00279390u) [[unlikely]] return; }
L_00279390:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002793C8; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 5024u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_002793C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002793D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x002793D0u) [[unlikely]] return; }
L_002793D0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002793D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002793F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279404u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x00279404u) [[unlikely]] return; }
L_00279404:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 352u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 370u));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00279474; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279430u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00279430u) [[unlikely]] return; }
L_00279430:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00279468; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 4992u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_00279468:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279470u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00279470u) [[unlikely]] return; }
L_00279470:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00279474:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00279490:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002794A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x002794A4u) [[unlikely]] return; }
L_002794A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], 0u + 20u);
    set32(c.r[2], c.r[2].w[0] + 336u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002794B8u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002794B8u) [[unlikely]] return; }
L_002794B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002794F0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 5152u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_002794F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002794F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x002794F8u) [[unlikely]] return; }
L_002794F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279500u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00279500u) [[unlikely]] return; }
L_00279500:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00279538; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 3584u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_00279538:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279540u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00279540u) [[unlikely]] return; }
L_00279540:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00279560:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279574u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x00279574u) [[unlikely]] return; }
L_00279574:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 320u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 424u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 28u);  if (t) { goto L_002795E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002795A4u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002795A4u) [[unlikely]] return; }
L_002795A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002795DC; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 5152u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_002795DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002795E4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x002795E4u) [[unlikely]] return; }
L_002795E4:
    set32(c.r[4], 0u + 28u);
    c.budget -= 1;
L_002795E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002795F0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002795F0u) [[unlikely]] return; }
L_002795F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027962C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 4096u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st8((c.r[2].w[0] + 24u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 13;
L_0027962C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279634u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00279634u) [[unlikely]] return; }
L_00279634:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00279650:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279664u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x00279664u) [[unlikely]] return; }
L_00279664:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 304u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 424u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 28u);  if (t) { goto L_002796D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279694u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00279694u) [[unlikely]] return; }
L_00279694:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002796CC; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 5152u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_002796CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002796D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x002796D4u) [[unlikely]] return; }
L_002796D4:
    set32(c.r[4], 0u + 28u);
    c.budget -= 1;
L_002796D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002796E0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002796E0u) [[unlikely]] return; }
L_002796E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027971C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 4064u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st8((c.r[2].w[0] + 24u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 13;
L_0027971C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279724u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00279724u) [[unlikely]] return; }
L_00279724:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00279740:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279754u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x00279754u) [[unlikely]] return; }
L_00279754:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 288u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 424u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 20u);  if (t) { goto L_002797C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279784u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00279784u) [[unlikely]] return; }
L_00279784:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002797BC; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 5152u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_002797BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002797C4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x002797C4u) [[unlikely]] return; }
L_002797C4:
    set32(c.r[4], 0u + 20u);
    c.budget -= 1;
L_002797C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002797D0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002797D0u) [[unlikely]] return; }
L_002797D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00279808; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 4160u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_00279808:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279810u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00279810u) [[unlikely]] return; }
L_00279810:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00279830:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279844u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x00279844u) [[unlikely]] return; }
L_00279844:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 272u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 424u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 28u);  if (t) { goto L_002798B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279874u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00279874u) [[unlikely]] return; }
L_00279874:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002798AC; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 5152u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_002798AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002798B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x002798B4u) [[unlikely]] return; }
L_002798B4:
    set32(c.r[4], 0u + 28u);
    c.budget -= 1;
L_002798B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002798C0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002798C0u) [[unlikely]] return; }
L_002798C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002798FC; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 4128u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st8((c.r[2].w[0] + 24u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 13;
L_002798FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279904u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00279904u) [[unlikely]] return; }
L_00279904:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00279920:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279934u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x00279934u) [[unlikely]] return; }
L_00279934:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], 0u + 20u);
    set32(c.r[2], c.r[2].w[0] + 256u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279948u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00279948u) [[unlikely]] return; }
L_00279948:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00279980; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 4928u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_00279980:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279988u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00279988u) [[unlikely]] return; }
L_00279988:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002799A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002799B8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x002799B8u) [[unlikely]] return; }
L_002799B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 240u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 370u));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00279A98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002799E4u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002799E4u) [[unlikely]] return; }
L_002799E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00279A30; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 624u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[8], 0u + 1u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[3], c.r[3].w[0] + 5728u);
    if (c.r[6].d[0] != 0) c.r[8].d[0] = c.r[5].d[0];
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[7].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[8].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 17;
L_00279A30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279A38u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00279A38u) [[unlikely]] return; }
L_00279A38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279A40u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00279A40u) [[unlikely]] return; }
L_00279A40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00279A8C; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 624u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[8], 0u + 1u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[3], c.r[3].w[0] + 5632u);
    if (c.r[6].d[0] != 0) c.r[8].d[0] = c.r[5].d[0];
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[7].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[8].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 17;
L_00279A8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279A94u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00279A94u) [[unlikely]] return; }
L_00279A94:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00279A98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00279AB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279AC4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x00279AC4u) [[unlikely]] return; }
L_00279AC4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], 0u + 24u);
    set32(c.r[2], c.r[2].w[0] + 224u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279AD8u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00279AD8u) [[unlikely]] return; }
L_00279AD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00279B18; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[5], c.r[5].w[0] + 6048u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 2624u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st8((c.r[2].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 14;
L_00279B18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279B20u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00279B20u) [[unlikely]] return; }
L_00279B20:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00279B40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279B54u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x00279B54u) [[unlikely]] return; }
L_00279B54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], 0u + 20u);
    set32(c.r[2], c.r[2].w[0] + 208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279B68u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00279B68u) [[unlikely]] return; }
L_00279B68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00279BA0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 2528u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_00279BA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279BA8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00279BA8u) [[unlikely]] return; }
L_00279BA8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00279BC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279BD4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x00279BD4u) [[unlikely]] return; }
L_00279BD4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], 0u + 20u);
    set32(c.r[2], c.r[2].w[0] + 192u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279BE8u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00279BE8u) [[unlikely]] return; }
L_00279BE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00279C20; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 2496u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_00279C20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279C28u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00279C28u) [[unlikely]] return; }
L_00279C28:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00279C40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279C54u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x00279C54u) [[unlikely]] return; }
L_00279C54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], 0u + 20u);
    set32(c.r[2], c.r[2].w[0] + 176u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279C68u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00279C68u) [[unlikely]] return; }
L_00279C68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00279CA0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 2592u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_00279CA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279CA8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00279CA8u) [[unlikely]] return; }
L_00279CA8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00279CC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279CD4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x00279CD4u) [[unlikely]] return; }
L_00279CD4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], 0u + 20u);
    set32(c.r[2], c.r[2].w[0] + 160u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279CE8u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00279CE8u) [[unlikely]] return; }
L_00279CE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00279D20; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 2560u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_00279D20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279D28u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00279D28u) [[unlikely]] return; }
L_00279D28:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00279D40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279D54u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x00279D54u) [[unlikely]] return; }
L_00279D54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], 0u + 20u);
    set32(c.r[2], c.r[2].w[0] + 144u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279D68u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00279D68u) [[unlikely]] return; }
L_00279D68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00279DA0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 5504u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_00279DA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279DA8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00279DA8u) [[unlikely]] return; }
L_00279DA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279DB0u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00279DB0u) [[unlikely]] return; }
L_00279DB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00279DE8; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 3552u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_00279DE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279DF0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00279DF0u) [[unlikely]] return; }
L_00279DF0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00279E10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279E24u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x00279E24u) [[unlikely]] return; }
L_00279E24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], 0u + 20u);
    set32(c.r[2], c.r[2].w[0] + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279E38u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00279E38u) [[unlikely]] return; }
L_00279E38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00279E70; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 5504u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_00279E70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279E78u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00279E78u) [[unlikely]] return; }
L_00279E78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279E80u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00279E80u) [[unlikely]] return; }
L_00279E80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00279EB8; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 3552u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_00279EB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279EC0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00279EC0u) [[unlikely]] return; }
L_00279EC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279EC8u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00279EC8u) [[unlikely]] return; }
L_00279EC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00279F00; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 3520u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_00279F00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279F08u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00279F08u) [[unlikely]] return; }
L_00279F08:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00279F20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279F34u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x00279F34u) [[unlikely]] return; }
L_00279F34:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], 0u + 20u);
    set32(c.r[2], c.r[2].w[0] + 112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279F48u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00279F48u) [[unlikely]] return; }
L_00279F48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00279F80; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 5504u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_00279F80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279F88u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00279F88u) [[unlikely]] return; }
L_00279F88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279F90u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00279F90u) [[unlikely]] return; }
L_00279F90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00279FC8; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 3488u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_00279FC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279FD0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x00279FD0u) [[unlikely]] return; }
L_00279FD0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00279FF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A004u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x0027A004u) [[unlikely]] return; }
L_0027A004:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 96u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 432u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 20u);  if (t) { goto L_0027A074; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A034u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027A034u) [[unlikely]] return; }
L_0027A034:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027A06C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 4032u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_0027A06C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A074u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027A074u) [[unlikely]] return; }
L_0027A074:
    c.r[5].d[0] = ld8((c.r[29].w[0] + 44u));
    set32(c.r[2], 0u - 129u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    set32(c.r[4], 0u + 24u);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A094u); st8((c.r[29].w[0] + 44u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027A094u) [[unlikely]] return; }
L_0027A094:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027A0D4; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 4000u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[29].w[0] + 44u));
    st16((c.r[2].w[0] + 20u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 14;
L_0027A0D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A0DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027A0DCu) [[unlikely]] return; }
L_0027A0DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A0E4u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027A0E4u) [[unlikely]] return; }
L_0027A0E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027A11C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 3968u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_0027A11C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A124u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027A124u) [[unlikely]] return; }
L_0027A124:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027A140:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A154u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x0027A154u) [[unlikely]] return; }
L_0027A154:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 80u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 432u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 20u);  if (t) { goto L_0027A1C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A184u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027A184u) [[unlikely]] return; }
L_0027A184:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027A1BC; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 4032u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_0027A1BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A1C4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027A1C4u) [[unlikely]] return; }
L_0027A1C4:
    c.r[5].d[0] = ld8((c.r[29].w[0] + 44u));
    set32(c.r[2], 0u - 2u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[4], 0u + 24u);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A1E4u); st8((c.r[29].w[0] + 44u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027A1E4u) [[unlikely]] return; }
L_0027A1E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027A224; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 4000u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[29].w[0] + 44u));
    st16((c.r[2].w[0] + 20u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 14;
L_0027A224:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A22Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027A22Cu) [[unlikely]] return; }
L_0027A22C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027A240:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A254u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x0027A254u) [[unlikely]] return; }
L_0027A254:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], 0u + 20u);
    set32(c.r[2], c.r[2].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A268u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027A268u) [[unlikely]] return; }
L_0027A268:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027A2A0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 3936u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_0027A2A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A2A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027A2A8u) [[unlikely]] return; }
L_0027A2A8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027A2C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A2D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x0027A2D4u) [[unlikely]] return; }
L_0027A2D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], 0u + 20u);
    set32(c.r[2], c.r[2].w[0] + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A2E8u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027A2E8u) [[unlikely]] return; }
L_0027A2E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027A320; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 4608u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_0027A320:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A328u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027A328u) [[unlikely]] return; }
L_0027A328:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A330u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027A330u) [[unlikely]] return; }
L_0027A330:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027A368; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 4544u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_0027A368:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A370u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027A370u) [[unlikely]] return; }
L_0027A370:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027A390:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A3A8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x0027A3A8u) [[unlikely]] return; }
L_0027A3A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 32u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A3C4u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027A3C4u) [[unlikely]] return; }
L_0027A3C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027A3FC; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 4608u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_0027A3FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A404u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027A404u) [[unlikely]] return; }
L_0027A404:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[2].d[0] = ld64((c.r[2].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 20u);  if (t) { goto L_0027A46C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A424u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027A424u) [[unlikely]] return; }
L_0027A424:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027A45C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 4512u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_0027A45C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A464u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027A464u) [[unlikely]] return; }
L_0027A464:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0027A4B8; } }
L_0027A46C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A474u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027A474u) [[unlikely]] return; }
L_0027A474:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027A4AC; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 4544u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_0027A4AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A4B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027A4B4u) [[unlikely]] return; }
L_0027A4B4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0027A4B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027A4D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A4E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x0027A4E4u) [[unlikely]] return; }
L_0027A4E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], 0u + 20u);
    set32(c.r[2], c.r[2].w[0] + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A4F8u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027A4F8u) [[unlikely]] return; }
L_0027A4F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027A530; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 4320u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_0027A530:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A538u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027A538u) [[unlikely]] return; }
L_0027A538:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A540u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027A540u) [[unlikely]] return; }
L_0027A540:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027A578; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 4480u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_0027A578:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A580u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027A580u) [[unlikely]] return; }
L_0027A580:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027A5A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A5B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x0027A5B4u) [[unlikely]] return; }
L_0027A5B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], 0u + 20u);
    set32(c.r[2], c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A5C8u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027A5C8u) [[unlikely]] return; }
L_0027A5C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027A600; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 4320u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_0027A600:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A608u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027A608u) [[unlikely]] return; }
L_0027A608:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A610u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027A610u) [[unlikely]] return; }
L_0027A610:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027A648; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 4448u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_0027A648:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A650u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027A650u) [[unlikely]] return; }
L_0027A650:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027A670:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A684u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x0027A684u) [[unlikely]] return; }
L_0027A684:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], 0u + 20u);
    set32(c.r[2], c.r[2].w[0] - 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A698u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027A698u) [[unlikely]] return; }
L_0027A698:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027A6D0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 4320u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_0027A6D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A6D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027A6D8u) [[unlikely]] return; }
L_0027A6D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A6E0u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027A6E0u) [[unlikely]] return; }
L_0027A6E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027A718; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 4448u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_0027A718:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A720u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027A720u) [[unlikely]] return; }
L_0027A720:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A728u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027A728u) [[unlikely]] return; }
L_0027A728:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027A760; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 4768u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_0027A760:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A768u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027A768u) [[unlikely]] return; }
L_0027A768:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027A780:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A794u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x0027A794u) [[unlikely]] return; }
L_0027A794:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], 0u + 20u);
    set32(c.r[2], c.r[2].w[0] - 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A7A8u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027A7A8u) [[unlikely]] return; }
L_0027A7A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027A7E0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 4352u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_0027A7E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A7E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027A7E8u) [[unlikely]] return; }
L_0027A7E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A7F0u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027A7F0u) [[unlikely]] return; }
L_0027A7F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027A830; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[5], c.r[5].w[0] + 6048u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 4384u);
    set32(c.r[3], 0u + 180u);
    st32((c.r[2].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 14;
L_0027A830:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A838u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027A838u) [[unlikely]] return; }
L_0027A838:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A840u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027A840u) [[unlikely]] return; }
L_0027A840:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027A878; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 4320u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_0027A878:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A880u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027A880u) [[unlikely]] return; }
L_0027A880:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027A8A0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A8C0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x0027A8C0u) [[unlikely]] return; }
L_0027A8C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 48u);
    st32((c.r[19].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A8E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0070(c, 86u, depth + 1u); else { c.pc = 0x002C1A60u; return; } if (c.pc != 0x0027A8E0u) [[unlikely]] return; }
L_0027A8E0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = ld64((c.r[16].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 20u);  if (t) { goto L_0027A940; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A900u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027A900u) [[unlikely]] return; }
L_0027A900:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027A938; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 2240u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_0027A938:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A940u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027A940u) [[unlikely]] return; }
L_0027A940:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 24u);  if (t) { goto L_0027A99C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A954u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027A954u) [[unlikely]] return; }
L_0027A954:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027A994; } }
    set32(c.r[6], ld32((c.r[19].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[5], c.r[5].w[0] + 6048u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 4224u);
    set32(c.r[3], 0u - 1u);
    st32((c.r[2].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 14;
L_0027A994:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A99Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027A99Cu) [[unlikely]] return; }
L_0027A99C:
    set32(c.r[3], ld32((c.r[16].w[0] + 624u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A9B0u); if (c.r[3].d[0] != 0) c.r[4].d[0] = c.r[2].d[0];  if (depth < kMaxDepth) unit_006F(c, 222u, depth + 1u); else { c.pc = 0x002BE550u; return; } if (c.pc != 0x0027A9B0u) [[unlikely]] return; }
L_0027A9B0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A9BCu); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027A9BCu) [[unlikely]] return; }
L_0027A9BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027A9FC; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 5056u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    ld128((c.r[16].w[0]) & ~15u, c.r[3]);
    st128((c.r[2].w[0] + 32u) & ~15u, c.r[3]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 14;
L_0027A9FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AA04u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027AA04u) [[unlikely]] return; }
L_0027AA04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AA0Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 219u, depth + 1u); else { c.pc = 0x002BE4F0u; return; } if (c.pc != 0x0027AA0Cu) [[unlikely]] return; }
L_0027AA0C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AA18u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027AA18u) [[unlikely]] return; }
L_0027AA18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027AA84; } }
    set32(c.r[7], ld32((c.r[19].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[5], c.r[5].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 5952u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[2].w[0] + 32u);
    set32(c.r[4], c.r[29].w[0] + 92u);
    st32((c.r[2].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[7].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    ld128((c.r[17].w[0]) & ~15u, c.r[3]);
    st128((c.r[2].w[0] + 32u) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AA74u); set32(c.r[5], c.r[2].w[0] + 224u);  if (depth < kMaxDepth) unit_005C(c, 29u, depth + 1u); else { c.pc = 0x002705F0u; return; } if (c.pc != 0x0027AA74u) [[unlikely]] return; }
L_0027AA74:
    c.r[3].d[0] = ld16((c.r[29].w[0] + 92u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st16((c.r[16].w[0] + 48u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
L_0027AA84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AA8Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027AA8Cu) [[unlikely]] return; }
L_0027AA8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AA94u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 218u, depth + 1u); else { c.pc = 0x002BE4D0u; return; } if (c.pc != 0x0027AA94u) [[unlikely]] return; }
L_0027AA94:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AAA0u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027AAA0u) [[unlikely]] return; }
L_0027AAA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027AB0C; } }
    set32(c.r[7], ld32((c.r[19].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[5], c.r[5].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 5952u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[2].w[0] + 32u);
    set32(c.r[4], c.r[29].w[0] + 88u);
    st32((c.r[2].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[7].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    ld128((c.r[17].w[0]) & ~15u, c.r[3]);
    st128((c.r[2].w[0] + 32u) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AAFCu); set32(c.r[5], c.r[2].w[0] + 224u);  if (depth < kMaxDepth) unit_005C(c, 29u, depth + 1u); else { c.pc = 0x002705F0u; return; } if (c.pc != 0x0027AAFCu) [[unlikely]] return; }
L_0027AAFC:
    c.r[3].d[0] = ld16((c.r[29].w[0] + 88u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st16((c.r[16].w[0] + 48u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
L_0027AB0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AB14u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027AB14u) [[unlikely]] return; }
L_0027AB14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AB1Cu); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027AB1Cu) [[unlikely]] return; }
L_0027AB1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027AB54; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 4512u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_0027AB54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AB5Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027AB5Cu) [[unlikely]] return; }
L_0027AB5C:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0027AB80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AB9Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x0027AB9Cu) [[unlikely]] return; }
L_0027AB9C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[17], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - 64u);
    st32((c.r[18].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[16], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[16].w[0] + 624u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027ABCCu); if (c.r[3].d[0] != 0) c.r[17].d[0] = c.r[2].d[0];  if (depth < kMaxDepth) unit_0070(c, 81u, depth + 1u); else { c.pc = 0x002C1960u; return; } if (c.pc != 0x0027ABCCu) [[unlikely]] return; }
L_0027ABCC:
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027ABF4; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] >= 0; c.r[2].d[0] = c.r[17].d[0] & 3ull;  if (t) { goto L_0027ABF0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027ABF4; } }
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 1;
L_0027ABF0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0027ABF4:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 24u);  if (t) { goto L_0027AC50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AC08u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027AC08u) [[unlikely]] return; }
L_0027AC08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027AC48; } }
    set32(c.r[6], ld32((c.r[18].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[5], c.r[5].w[0] + 6048u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 4224u);
    set32(c.r[3], 0u - 1u);
    st32((c.r[2].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 14;
L_0027AC48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AC50u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027AC50u) [[unlikely]] return; }
L_0027AC50:
    set32(c.r[3], ld32((c.r[16].w[0] + 624u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AC64u); if (c.r[3].d[0] != 0) c.r[4].d[0] = c.r[2].d[0];  if (depth < kMaxDepth) unit_006F(c, 222u, depth + 1u); else { c.pc = 0x002BE550u; return; } if (c.pc != 0x0027AC64u) [[unlikely]] return; }
L_0027AC64:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AC70u); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027AC70u) [[unlikely]] return; }
L_0027AC70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027ACB0; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 5056u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    ld128((c.r[16].w[0]) & ~15u, c.r[3]);
    st128((c.r[2].w[0] + 32u) & ~15u, c.r[3]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 14;
L_0027ACB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027ACB8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027ACB8u) [[unlikely]] return; }
L_0027ACB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027ACC0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 226u, depth + 1u); else { c.pc = 0x002BE5D0u; return; } if (c.pc != 0x0027ACC0u) [[unlikely]] return; }
L_0027ACC0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027ACCCu); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027ACCCu) [[unlikely]] return; }
L_0027ACCC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027AD0C; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 5056u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    ld128((c.r[16].w[0]) & ~15u, c.r[3]);
    st128((c.r[2].w[0] + 32u) & ~15u, c.r[3]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 14;
L_0027AD0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AD14u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027AD14u) [[unlikely]] return; }
L_0027AD14:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0027AD30:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AD4Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x0027AD4Cu) [[unlikely]] return; }
L_0027AD4C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[17], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - 80u);
    st32((c.r[18].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 624u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AD78u); if (c.r[3].d[0] != 0) c.r[17].d[0] = c.r[2].d[0];  if (depth < kMaxDepth) unit_0070(c, 81u, depth + 1u); else { c.pc = 0x002C1960u; return; } if (c.pc != 0x0027AD78u) [[unlikely]] return; }
L_0027AD78:
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 28u);  if (t) { goto L_0027ADA4; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] >= 0; c.r[2].d[0] = c.r[17].d[0] & 3ull;  if (t) { goto L_0027AD9C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027ADA0; } }
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 1;
L_0027AD9C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0027ADA0:
    set32(c.r[4], 0u + 28u);
    c.budget -= 1;
L_0027ADA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027ADACu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027ADACu) [[unlikely]] return; }
L_0027ADAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027AE18; } }
    set32(c.r[6], ld32((c.r[18].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[5], c.r[5].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 5888u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 76u);
    st32((c.r[2].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 984u)));
    set32(c.r[5], c.r[3].w[0] + 224u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AE04u); set32(c.r[6], c.r[2].w[0] + 224u);  if (depth < kMaxDepth) unit_005C(c, 29u, depth + 1u); else { c.pc = 0x002705F0u; return; } if (c.pc != 0x0027AE04u) [[unlikely]] return; }
L_0027AE04:
    c.r[3].d[0] = ld16((c.r[29].w[0] + 76u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st16((c.r[16].w[0] + 20u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 24u), c.r[17].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
L_0027AE18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AE20u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027AE20u) [[unlikely]] return; }
L_0027AE20:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0027AE40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AE58u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x0027AE58u) [[unlikely]] return; }
L_0027AE58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 96u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AE74u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0070(c, 86u, depth + 1u); else { c.pc = 0x002C1A60u; return; } if (c.pc != 0x0027AE74u) [[unlikely]] return; }
L_0027AE74:
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[2], c.r[3].w[0] - 250u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] - 234u);  if (t) { goto L_0027AF20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AE90u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027AE90u) [[unlikely]] return; }
L_0027AE90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027AEC8; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 4608u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_0027AEC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AED0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027AED0u) [[unlikely]] return; }
L_0027AED0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AED8u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027AED8u) [[unlikely]] return; }
L_0027AED8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027AF10; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 4544u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_0027AF10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AF18u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027AF18u) [[unlikely]] return; }
L_0027AF18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0027AFE8; } }
L_0027AF20:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[4], 0u + 20u);  if (t) { goto L_0027AF38; } }
    set32(c.r[2], 0u + 231u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 233u);  if (t) { goto L_0027AF88; } }
L_0027AF38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AF40u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027AF40u) [[unlikely]] return; }
L_0027AF40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027AF78; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 4544u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_0027AF78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AF80u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027AF80u) [[unlikely]] return; }
L_0027AF80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027AFE4; } }
L_0027AF88:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 20u);  if (t) { goto L_0027AF9C; } }
    set32(c.r[2], 0u + 232u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0027AFE4; } }
L_0027AF9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AFA4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027AFA4u) [[unlikely]] return; }
L_0027AFA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027AFDC; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 4544u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_0027AFDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AFE4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027AFE4u) [[unlikely]] return; }
L_0027AFE4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0027AFE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027B000:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B014u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x0027B014u) [[unlikely]] return; }
L_0027B014:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 112u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B030u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_006F(c, 234u, depth + 1u); else { c.pc = 0x002BE840u; return; } if (c.pc != 0x0027B030u) [[unlikely]] return; }
L_0027B030:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 24u);  if (t) { goto L_0027B090; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B040u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027B040u) [[unlikely]] return; }
L_0027B040:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027B080; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[5], c.r[5].w[0] + 6048u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 4224u);
    set32(c.r[3], 0u - 1u);
    st32((c.r[2].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 14;
L_0027B080:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B088u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027B088u) [[unlikely]] return; }
L_0027B088:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0027B0E4; } }
L_0027B090:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B098u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027B098u) [[unlikely]] return; }
L_0027B098:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027B0D8; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[5], c.r[5].w[0] + 6048u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 4192u);
    set32(c.r[3], 0u - 1u);
    st32((c.r[2].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 14;
L_0027B0D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B0E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027B0E0u) [[unlikely]] return; }
L_0027B0E0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0027B0E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027B100:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B114u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x0027B114u) [[unlikely]] return; }
L_0027B114:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 128u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = ld64((c.r[2].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 24u);  if (t) { goto L_0027B18C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B148u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027B148u) [[unlikely]] return; }
L_0027B148:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027B180; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 3936u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_0027B180:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B188u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027B188u) [[unlikely]] return; }
L_0027B188:
    set32(c.r[4], 0u + 24u);
    c.budget -= 1;
L_0027B18C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B194u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027B194u) [[unlikely]] return; }
L_0027B194:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027B1D4; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[5], c.r[5].w[0] + 6048u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 4224u);
    set32(c.r[3], 0u - 1u);
    st32((c.r[2].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 14;
L_0027B1D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B1DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027B1DCu) [[unlikely]] return; }
L_0027B1DC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027B1F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B204u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x0027B204u) [[unlikely]] return; }
L_0027B204:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], 0u + 20u);
    set32(c.r[2], c.r[2].w[0] - 144u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B218u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027B218u) [[unlikely]] return; }
L_0027B218:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027B250; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 4320u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_0027B250:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B258u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027B258u) [[unlikely]] return; }
L_0027B258:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B260u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027B260u) [[unlikely]] return; }
L_0027B260:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027B2A0; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[5], c.r[5].w[0] + 6048u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 4224u);
    set32(c.r[3], 0u - 1u);
    st32((c.r[2].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 14;
L_0027B2A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B2A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027B2A8u) [[unlikely]] return; }
L_0027B2A8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027B2C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B2DCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x0027B2DCu) [[unlikely]] return; }
L_0027B2DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 160u);
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 370u));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0027B44C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B308u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0070(c, 91u, depth + 1u); else { c.pc = 0x002C1B80u; return; } if (c.pc != 0x0027B308u) [[unlikely]] return; }
L_0027B308:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027B448; } }
    c.r[2].d[0] = ld64((c.r[16].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 20u);  if (t) { goto L_0027B36C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B32Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027B32Cu) [[unlikely]] return; }
L_0027B32C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027B364; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 2240u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_0027B364:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B36Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027B36Cu) [[unlikely]] return; }
L_0027B36C:
    set32(c.r[3], ld32((c.r[16].w[0] + 624u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B380u); if (c.r[3].d[0] != 0) c.r[4].d[0] = c.r[2].d[0];  if (depth < kMaxDepth) unit_006F(c, 223u, depth + 1u); else { c.pc = 0x002BE570u; return; } if (c.pc != 0x0027B380u) [[unlikely]] return; }
L_0027B380:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B38Cu); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027B38Cu) [[unlikely]] return; }
L_0027B38C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027B3F8; } }
    set32(c.r[7], ld32((c.r[17].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[5], c.r[5].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 5792u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[2].w[0] + 32u);
    set32(c.r[4], c.r[29].w[0] + 76u);
    st32((c.r[2].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[7].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    ld128((c.r[18].w[0]) & ~15u, c.r[3]);
    st128((c.r[2].w[0] + 32u) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B3E8u); set32(c.r[5], c.r[2].w[0] + 224u);  if (depth < kMaxDepth) unit_005C(c, 29u, depth + 1u); else { c.pc = 0x002705F0u; return; } if (c.pc != 0x0027B3E8u) [[unlikely]] return; }
L_0027B3E8:
    c.r[3].d[0] = ld16((c.r[29].w[0] + 76u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st16((c.r[16].w[0] + 48u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
L_0027B3F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B400u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027B400u) [[unlikely]] return; }
L_0027B400:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B408u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027B408u) [[unlikely]] return; }
L_0027B408:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027B440; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 4416u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_0027B440:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B448u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027B448u) [[unlikely]] return; }
L_0027B448:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027B44C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0027B470:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B484u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x0027B484u) [[unlikely]] return; }
L_0027B484:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], 0u + 20u);
    set32(c.r[2], c.r[2].w[0] - 176u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B498u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027B498u) [[unlikely]] return; }
L_0027B498:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027B4D0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 5344u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_0027B4D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B4D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027B4D8u) [[unlikely]] return; }
L_0027B4D8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027B4F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B504u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x0027B504u) [[unlikely]] return; }
L_0027B504:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], 0u + 20u);
    set32(c.r[2], c.r[2].w[0] - 192u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B518u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027B518u) [[unlikely]] return; }
L_0027B518:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027B550; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 5504u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_0027B550:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B558u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027B558u) [[unlikely]] return; }
L_0027B558:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B560u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027B560u) [[unlikely]] return; }
L_0027B560:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027B59C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 1984u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st8((c.r[2].w[0] + 20u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 13;
L_0027B59C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B5A4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027B5A4u) [[unlikely]] return; }
L_0027B5A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B5ACu); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027B5ACu) [[unlikely]] return; }
L_0027B5AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027B5E8; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 1984u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st8((c.r[2].w[0] + 20u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 13;
L_0027B5E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B5F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027B5F0u) [[unlikely]] return; }
L_0027B5F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B5F8u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027B5F8u) [[unlikely]] return; }
L_0027B5F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027B634; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 1984u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st8((c.r[2].w[0] + 20u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 13;
L_0027B634:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B63Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027B63Cu) [[unlikely]] return; }
L_0027B63C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027B650:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B664u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x0027B664u) [[unlikely]] return; }
L_0027B664:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], 0u + 20u);
    set32(c.r[2], c.r[2].w[0] - 208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B678u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027B678u) [[unlikely]] return; }
L_0027B678:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027B6B0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 5152u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
L_0027B6B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B6B8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027B6B8u) [[unlikely]] return; }
L_0027B6B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B6C0u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027B6C0u) [[unlikely]] return; }
L_0027B6C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027B6FC; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 1952u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st8((c.r[2].w[0] + 20u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 13;
L_0027B6FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B704u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027B704u) [[unlikely]] return; }
L_0027B704:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B70Cu); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027B70Cu) [[unlikely]] return; }
L_0027B70C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027B748; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 1984u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st8((c.r[2].w[0] + 20u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 13;
L_0027B748:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B750u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027B750u) [[unlikely]] return; }
L_0027B750:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B758u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027B758u) [[unlikely]] return; }
L_0027B758:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027B794; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 1984u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st8((c.r[2].w[0] + 20u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 13;
L_0027B794:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B79Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027B79Cu) [[unlikely]] return; }
L_0027B79C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027B7B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B7C8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x0027B7C8u) [[unlikely]] return; }
L_0027B7C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 224u);
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 4;
L_0027B7D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B7E0u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027B7E0u) [[unlikely]] return; }
L_0027B7E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027B820; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[5], c.r[5].w[0] + 6048u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 1920u);
    set32(c.r[3], 0u + 360u);
    st32((c.r[2].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 14;
L_0027B820:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B828u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027B828u) [[unlikely]] return; }
L_0027B828:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027B7D8u | kUnwind; return; } goto L_0027B7D8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027B850:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B868u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x0027B868u) [[unlikely]] return; }
L_0027B868:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 240u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B87Cu); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0070(c, 208u, depth + 1u); else { c.pc = 0x002C3850u; return; } if (c.pc != 0x0027B87Cu) [[unlikely]] return; }
L_0027B87C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[4], 0u + 24u);  if (t) { goto L_0027B8E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B890u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027B890u) [[unlikely]] return; }
L_0027B890:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027B8D8; } }
    set32(c.r[7], ld32((c.r[17].w[0] + 912u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] + 6048u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], c.r[4].w[0] + 1856u);
    st32((c.r[2].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[7].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 16;
L_0027B8D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B8E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027B8E0u) [[unlikely]] return; }
L_0027B8E0:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027B8E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B8ECu); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027B8ECu) [[unlikely]] return; }
L_0027B8EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027B92C; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[5], c.r[5].w[0] + 6048u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 1888u);
    set32(c.r[3], 0u + 120u);
    st32((c.r[2].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 14;
L_0027B92C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B934u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027B934u) [[unlikely]] return; }
L_0027B934:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027B8E4u | kUnwind; return; } goto L_0027B8E4; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027B960:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B978u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x0027B978u) [[unlikely]] return; }
L_0027B978:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 256u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B994u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0070(c, 223u, depth + 1u); else { c.pc = 0x002C3E40u; return; } if (c.pc != 0x0027B994u) [[unlikely]] return; }
L_0027B994:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B9A0u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027B9A0u) [[unlikely]] return; }
L_0027B9A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027B9DC; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 6016u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[17].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 13;
L_0027B9DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B9E4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027B9E4u) [[unlikely]] return; }
L_0027B9E4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027BA00:
    set32(c.r[29], c.r[29].w[0] - 336u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BA1Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x0027BA1Cu) [[unlikely]] return; }
L_0027BA1C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[29].w[0] + 304u);
    set32(c.r[2], c.r[2].w[0] - 272u);
    st32((c.r[18].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[16], ld32((c.r[4].w[0])));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 16u);  if (t) { goto L_0027BA5C; } }
L_0027BA40:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027BA40u | kUnwind; return; } goto L_0027BA40; } }
L_0027BA5C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[5], c.r[5].w[0] - 20528u);
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
L_0027BA6C:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027BA6Cu | kUnwind; return; } goto L_0027BA6C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[5].w[0] - 20448u);
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
L_0027BA98:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027BA98u | kUnwind; return; } goto L_0027BA98; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[5].w[0] - 20368u);
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
L_0027BAC4:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027BAC4u | kUnwind; return; } goto L_0027BAC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BAE8u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x0027BAE8u) [[unlikely]] return; }
L_0027BAE8:
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.r[2].d[0] = c.r[3].sd[0] < 44ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 47ll ? 1ull : 0ull;  if (t) { goto L_0027BB08; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027BB0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0027BB0C; } }
L_0027BB08:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027BB0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_0027BBE8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], c.r[29].w[0] + 304u);
    set32(c.r[2], ld32((c.r[1].w[0] + 28272u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BB28u); set32(c.r[4], c.r[2].w[0] + 448u);  if (depth < kMaxDepth) unit_0011(c, 26u, depth + 1u); else { c.pc = 0x00144590u; return; } if (c.pc != 0x0027BB28u) [[unlikely]] return; }
L_0027BB28:
    set32(c.r[2], ld32((c.r[16].w[0] + 624u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_0027BB90; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = ld32((c.r[1].w[0] - 31912u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027BB50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] << 4);  if (t) { goto L_0027BB84; } }
L_0027BB50:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_0027BB6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0027BB80; } }
L_0027BB6C:
    c.f[1] = ld32((c.r[1].w[0] - 31920u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_0027BB80; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_0027BB80:
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 1;
L_0027BB84:
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[2].w[0] + 144u);  if (t) { goto L_0027BC84; } }
L_0027BB90:
    c.f[1] = ld32((c.r[1].w[0] - 31920u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027BBA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] << 4);  if (t) { goto L_0027BBDC; } }
L_0027BBA8:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_0027BBC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0027BBD8; } }
L_0027BBC4:
    c.f[1] = ld32((c.r[1].w[0] - 31912u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0027BBD8; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_0027BBD8:
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 1;
L_0027BBDC:
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[2].w[0] + 64u);  if (t) { goto L_0027BC84; } }
L_0027BBE8:
    set32(c.r[5], c.r[29].w[0] + 304u);
    set32(c.r[2], ld32((c.r[1].w[0] + 28272u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BBF8u); set32(c.r[4], c.r[2].w[0] + 448u);  if (depth < kMaxDepth) unit_0011(c, 26u, depth + 1u); else { c.pc = 0x00144590u; return; } if (c.pc != 0x0027BBF8u) [[unlikely]] return; }
L_0027BBF8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = ld32((c.r[1].w[0] - 31920u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_0027BC14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[16].w[0] + 224u));  if (t) { goto L_0027BC28; } }
L_0027BC14:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 4u);  if (t) { goto L_0027BC24; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_0027BC24:
    c.f[1] = ld32((c.r[16].w[0] + 224u));
    c.budget -= 1;
L_0027BC28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0xC1200000u);  if (t) { goto L_0027BC54; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0027BC50; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_0027BC50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1200000u);
    c.budget -= 1;
L_0027BC54:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], c.r[3].w[0] << 4);  if (t) { goto L_0027BC7C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0027BC78; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027BC78:
    set32(c.r[2], c.r[3].w[0] << 4);
    c.budget -= 1;
L_0027BC7C:
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[17], c.r[2].w[0] + 224u);
    c.budget -= 2;
L_0027BC84:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 224u);  if (t) { goto L_0027BC94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0027BD40; } }
L_0027BC94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BC9Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 14u, depth + 1u); else { c.pc = 0x001443A0u; return; } if (c.pc != 0x0027BC9Cu) [[unlikely]] return; }
L_0027BC9C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], 0u + 64u);  if (t) { goto L_0027BCBC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0027BD40; } }
L_0027BCBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BCC4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027BCC4u) [[unlikely]] return; }
L_0027BCC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027BD34; } }
    set32(c.r[7], ld32((c.r[18].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[5], c.r[5].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 5856u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[2].w[0] + 32u);
    set32(c.r[4], c.r[29].w[0] + 332u);
    st32((c.r[2].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[7].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 52u), 0u);
    ld128((c.r[17].w[0]) & ~15u, c.r[3]);
    st128((c.r[2].w[0] + 32u) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BD24u); set32(c.r[5], c.r[2].w[0] + 224u);  if (depth < kMaxDepth) unit_005C(c, 29u, depth + 1u); else { c.pc = 0x002705F0u; return; } if (c.pc != 0x0027BD24u) [[unlikely]] return; }
L_0027BD24:
    c.r[3].d[0] = ld16((c.r[29].w[0] + 332u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st16((c.r[16].w[0] + 48u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
L_0027BD34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BD3Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027BD3Cu) [[unlikely]] return; }
L_0027BD3C:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0027BD40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_0027BD60:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BD7Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x0027BD7Cu) [[unlikely]] return; }
L_0027BD7C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[29].w[0] + 64u);
    set32(c.r[2], c.r[2].w[0] - 288u);
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 16u);  if (t) { goto L_0027BDBC; } }
L_0027BDA0:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027BDA0u | kUnwind; return; } goto L_0027BDA0; } }
L_0027BDBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BDC4u);  if (depth < kMaxDepth) unit_0070(c, 212u, depth + 1u); else { c.pc = 0x002C38F0u; return; } if (c.pc != 0x0027BDC4u) [[unlikely]] return; }
L_0027BDC4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_0027BDDC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0027BE88; } }
L_0027BDDC:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[29].w[0] + 92u);  if (t) { goto L_0027BDF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0027BE88; } }
L_0027BDF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BDF8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 19u, depth + 1u); else { c.pc = 0x002702F0u; return; } if (c.pc != 0x0027BDF8u) [[unlikely]] return; }
L_0027BDF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BE00u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 227u, depth + 1u); else { c.pc = 0x002BE5F0u; return; } if (c.pc != 0x0027BE00u) [[unlikely]] return; }
L_0027BE00:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BE0Cu); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027BE0Cu) [[unlikely]] return; }
L_0027BE0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027BE7C; } }
    set32(c.r[7], ld32((c.r[17].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[5], c.r[5].w[0] + 6048u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 5824u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[2].w[0] + 32u);
    set32(c.r[4], c.r[29].w[0] + 88u);
    st32((c.r[2].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[7].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 52u), 0u);
    ld128((c.r[18].w[0]) & ~15u, c.r[3]);
    st128((c.r[2].w[0] + 32u) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BE6Cu); set32(c.r[5], c.r[2].w[0] + 224u);  if (depth < kMaxDepth) unit_005C(c, 29u, depth + 1u); else { c.pc = 0x002705F0u; return; } if (c.pc != 0x0027BE6Cu) [[unlikely]] return; }
L_0027BE6C:
    c.r[3].d[0] = ld16((c.r[29].w[0] + 88u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st16((c.r[16].w[0] + 48u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
L_0027BE7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BE84u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027BE84u) [[unlikely]] return; }
L_0027BE84:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027BE88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0027BEA0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BEBCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_005C(c, 107u, depth + 1u); else { c.pc = 0x00271B70u; return; } if (c.pc != 0x0027BEBCu) [[unlikely]] return; }
L_0027BEBC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] - 304u);
    set32(c.r[3], c.r[29].w[0] + 64u);
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[1].w[0] + 28272u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[18], ld32((c.r[16].w[0])));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 16u);  if (t) { goto L_0027BF04; } }
L_0027BEE8:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027BEE8u | kUnwind; return; } goto L_0027BEE8; } }
L_0027BF04:
    set32(c.r[4], c.r[5].w[0] + 448u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BF10u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0011(c, 26u, depth + 1u); else { c.pc = 0x00144590u; return; } if (c.pc != 0x0027BF10u) [[unlikely]] return; }
L_0027BF10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BF18u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0070(c, 147u, depth + 1u); else { c.pc = 0x002C28D0u; return; } if (c.pc != 0x0027BF18u) [[unlikely]] return; }
L_0027BF18:
    set32(c.r[5], c.r[18].w[0] + 224u);
    set32(c.r[6], c.r[2].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BF28u); set32(c.r[4], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_005C(c, 34u, depth + 1u); else { c.pc = 0x00270B40u; return; } if (c.pc != 0x0027BF28u) [[unlikely]] return; }
L_0027BF28:
    set32(c.r[2], c.r[29].w[0] + 104u);
    set32(c.r[5], c.r[29].w[0] + 108u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[4], c.r[29].w[0] + 100u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BF40u); st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_005C(c, 26u, depth + 1u); else { c.pc = 0x002704E0u; return; } if (c.pc != 0x0027BF40u) [[unlikely]] return; }
L_0027BF40:
    c.r[2].d[0] = ld16((c.r[29].w[0] + 100u));
    st16((c.r[29].w[0] + 108u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 396u));
    c.r[3].d[0] = ld16((c.r[29].w[0] + 108u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 24u);  if (t) { goto L_0027BF70; } }
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BF64u); set32(c.r[5], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_005C(c, 24u, depth + 1u); else { c.pc = 0x00270400u; return; } if (c.pc != 0x0027BF64u) [[unlikely]] return; }
L_0027BF64:
    c.r[2].d[0] = ld16((c.r[29].w[0] + 96u));
    st16((c.r[29].w[0] + 108u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
L_0027BF70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BF78u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0027BF78u) [[unlikely]] return; }
L_0027BF78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027BFD0; } }
    set32(c.r[3], c.r[29].w[0] + 108u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    set32(c.r[7], c.r[29].w[0] + 92u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[5], c.r[5].w[0] + 6048u);
    set32(c.r[4], c.r[4].w[0] + 5440u);
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[3], 0u + 60u);
    set32(c.r[6], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[2].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[29].w[0] + 92u));
    st16((c.r[2].w[0] + 20u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 20;
L_0027BFD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BFD8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 98u, depth + 1u); else { c.pc = 0x00271A60u; return; } if (c.pc != 0x0027BFD8u) [[unlikely]] return; }
L_0027BFD8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
}

}
