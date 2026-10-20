#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00AA[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0,
    0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 27,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0,
    0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0,
    0, 36, 0, 0, 0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 50, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0,
    58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0,
    0, 0, 62, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0,
    67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 70,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 74, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 84, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 87, 0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90,
    0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0,
    95, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97,
    0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 102, 0, 103, 0, 0, 0, 0, 0, 104, 0,
    0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 109, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0,
    0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0,
    0, 119, 0, 0, 0, 120, 0, 0, 0, 121, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 125, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 129, 0,
    0, 0, 130, 0, 0, 131, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 142,
    0, 0, 143, 0, 0, 144, 0, 0, 145, 0, 0, 146, 0, 0, 147, 0, 0, 148, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0,
    150, 0, 0, 0, 0, 0, 151, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155,
    0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 159, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 0,
    162, 0, 0, 0, 0, 0, 163, 0, 164, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 168, 0, 0, 169, 0,
    0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 177, 0, 178,
    0, 0, 0, 0, 0, 179, 0, 0, 180, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 184, 0, 0, 185, 0,
    0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0,
    195, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0,
    0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222,
    0, 0, 0, 223, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    237, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0,
    248, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    252, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 256, 0, 0, 0, 0, 257, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    270, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 277, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 283, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0,
    0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 291, 0, 292, 0, 0, 0, 293, 0, 0, 0,
    294, 0, 0, 0, 0, 0, 295, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 300, 0, 301, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 305, 0, 306, 0, 0,
    0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 310, 0, 311, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 317, 0, 0, 318, 0, 0, 0, 0, 0, 319,
    0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 322, 0, 0, 0, 0, 0, 323, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 325, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 328, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 330, 0, 0,
    0, 0, 331, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 333, 0, 0, 0, 0, 334, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0,
    0, 336, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 338, 0, 339, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    345, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 349,
    0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 352, 0, 0, 353, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 359, 0, 360, 0, 0, 0, 361, 0, 0, 0, 362, 0, 0, 0, 363, 0, 0, 0,
    364, 0, 0, 0, 0, 365, 0, 0, 0, 0, 366, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 371, 0,
    0, 372, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0,
    0, 380, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0,
    0, 0, 0, 385, 0, 0, 0, 0, 386, 0, 0, 0, 387, 0, 0, 0, 0, 388, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 390, 0, 0, 0, 0, 391, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 394, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 396, 0, 0, 0, 0, 397, 0, 0, 0, 0, 398, 0, 0, 399, 0, 400, 0, 0, 401, 0, 0,
    402, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 405, 0, 406, 0, 407, 0, 0, 408, 0, 0, 0, 0,
    0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 411, 0,
    0, 412, 0, 0, 413, 0, 0, 0, 0, 0, 414, 0, 0, 415, 0, 0, 416, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 418, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 422, 0, 423, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0,
    426, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 429, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0,
    432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 434, 0, 435, 0, 436, 0, 0, 437, 0, 0, 0, 0, 0, 0,
    438, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 440, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 443, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 445, 0, 446, 0, 0, 0, 447, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    449, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 452, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0,
    455, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 458, 0, 0, 0, 459, 0, 0, 0, 460, 0, 0, 0, 461, 0,
    0, 0, 0, 462, 0, 463, 0, 0, 0, 464, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 467, 0, 0, 0, 0, 0, 0,
    468, 0, 0, 0, 469, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 473, 0, 0,
    0, 0, 0, 0, 474, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 478, 0, 479,
    0, 0, 480, 0, 481, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 484, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0,
};

void unit_00AA(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003A8000;
    case 2u: goto L_003A803C;
    case 3u: goto L_003A8084;
    case 4u: goto L_003A80A4;
    case 5u: goto L_003A80F0;
    case 6u: goto L_003A81C0;
    case 7u: goto L_003A81F8;
    case 8u: goto L_003A82A4;
    case 9u: goto L_003A82C4;
    case 10u: goto L_003A8318;
    case 11u: goto L_003A8370;
    case 12u: goto L_003A83A0;
    case 13u: goto L_003A83B0;
    case 14u: goto L_003A83D4;
    case 15u: goto L_003A848C;
    case 16u: goto L_003A849C;
    case 17u: goto L_003A84B0;
    case 18u: goto L_003A84D0;
    case 19u: goto L_003A84F8;
    case 20u: goto L_003A8504;
    case 21u: goto L_003A8518;
    case 22u: goto L_003A8550;
    case 23u: goto L_003A858C;
    case 24u: goto L_003A85B8;
    case 25u: goto L_003A85D0;
    case 26u: goto L_003A85E0;
    case 27u: goto L_003A85FC;
    case 28u: goto L_003A8624;
    case 29u: goto L_003A862C;
    case 30u: goto L_003A8640;
    case 31u: goto L_003A866C;
    case 32u: goto L_003A8690;
    case 33u: goto L_003A869C;
    case 34u: goto L_003A86C4;
    case 35u: goto L_003A86F8;
    case 36u: goto L_003A8704;
    case 37u: goto L_003A8718;
    case 38u: goto L_003A8724;
    case 39u: goto L_003A879C;
    case 40u: goto L_003A87BC;
    case 41u: goto L_003A87DC;
    case 42u: goto L_003A8810;
    case 43u: goto L_003A8834;
    case 44u: goto L_003A8860;
    case 45u: goto L_003A888C;
    case 46u: goto L_003A88B8;
    case 47u: goto L_003A88CC;
    case 48u: goto L_003A88F8;
    case 49u: goto L_003A8934;
    case 50u: goto L_003A893C;
    case 51u: goto L_003A8950;
    case 52u: goto L_003A8984;
    case 53u: goto L_003A89B4;
    case 54u: goto L_003A89C0;
    case 55u: goto L_003A89E8;
    case 56u: goto L_003A8A4C;
    case 57u: goto L_003A8A5C;
    case 58u: goto L_003A8A80;
    case 59u: goto L_003A8AA8;
    case 60u: goto L_003A8AD4;
    case 61u: goto L_003A8AE8;
    case 62u: goto L_003A8B08;
    case 63u: goto L_003A8B10;
    case 64u: goto L_003A8B28;
    case 65u: goto L_003A8B50;
    case 66u: goto L_003A8B74;
    case 67u: goto L_003A8B80;
    case 68u: goto L_003A8BA8;
    case 69u: goto L_003A8BE8;
    case 70u: goto L_003A8BFC;
    case 71u: goto L_003A8C30;
    case 72u: goto L_003A8C40;
    case 73u: goto L_003A8CF0;
    case 74u: goto L_003A8CF8;
    case 75u: goto L_003A8D20;
    case 76u: goto L_003A8D54;
    case 77u: goto L_003A8E20;
    case 78u: goto L_003A8E28;
    case 79u: goto L_003A8E50;
    case 80u: goto L_003A8E94;
    case 81u: goto L_003A8EF0;
    case 82u: goto L_003A8F54;
    case 83u: goto L_003A8F5C;
    case 84u: goto L_003A9014;
    case 85u: goto L_003A901C;
    case 86u: goto L_003A90E0;
    case 87u: goto L_003A9114;
    case 88u: goto L_003A9120;
    case 89u: goto L_003A9138;
    case 90u: goto L_003A917C;
    case 91u: goto L_003A9198;
    case 92u: goto L_003A91B0;
    case 93u: goto L_003A91CC;
    case 94u: goto L_003A91E4;
    case 95u: goto L_003A9200;
    case 96u: goto L_003A9220;
    case 97u: goto L_003A927C;
    case 98u: goto L_003A9290;
    case 99u: goto L_003A92A0;
    case 100u: goto L_003A92B0;
    case 101u: goto L_003A92D0;
    case 102u: goto L_003A92D8;
    case 103u: goto L_003A92E0;
    case 104u: goto L_003A92F8;
    case 105u: goto L_003A9314;
    case 106u: goto L_003A9324;
    case 107u: goto L_003A9338;
    case 108u: goto L_003A9348;
    case 109u: goto L_003A9354;
    case 110u: goto L_003A9370;
    case 111u: goto L_003A9388;
    case 112u: goto L_003A939C;
    case 113u: goto L_003A93AC;
    case 114u: goto L_003A93D0;
    case 115u: goto L_003A941C;
    case 116u: goto L_003A942C;
    case 117u: goto L_003A9444;
    case 118u: goto L_003A9460;
    case 119u: goto L_003A9484;
    case 120u: goto L_003A9494;
    case 121u: goto L_003A94A4;
    case 122u: goto L_003A94AC;
    case 123u: goto L_003A94C8;
    case 124u: goto L_003A94E0;
    case 125u: goto L_003A950C;
    case 126u: goto L_003A9518;
    case 127u: goto L_003A9550;
    case 128u: goto L_003A9568;
    case 129u: goto L_003A9578;
    case 130u: goto L_003A9588;
    case 131u: goto L_003A9594;
    case 132u: goto L_003A95A0;
    case 133u: goto L_003A95B0;
    case 134u: goto L_003A95C4;
    case 135u: goto L_003A95D0;
    case 136u: goto L_003A9638;
    case 137u: goto L_003A969C;
    case 138u: goto L_003A96C0;
    case 139u: goto L_003A9724;
    case 140u: goto L_003A974C;
    case 141u: goto L_003A9774;
    case 142u: goto L_003A977C;
    case 143u: goto L_003A9788;
    case 144u: goto L_003A9794;
    case 145u: goto L_003A97A0;
    case 146u: goto L_003A97AC;
    case 147u: goto L_003A97B8;
    case 148u: goto L_003A97C4;
    case 149u: goto L_003A97DC;
    case 150u: goto L_003A9800;
    case 151u: goto L_003A9818;
    case 152u: goto L_003A9820;
    case 153u: goto L_003A9834;
    case 154u: goto L_003A9848;
    case 155u: goto L_003A987C;
    case 156u: goto L_003A989C;
    case 157u: goto L_003A98B0;
    case 158u: goto L_003A98C8;
    case 159u: goto L_003A98D0;
    case 160u: goto L_003A98DC;
    case 161u: goto L_003A98EC;
    case 162u: goto L_003A9900;
    case 163u: goto L_003A9918;
    case 164u: goto L_003A9920;
    case 165u: goto L_003A992C;
    case 166u: goto L_003A993C;
    case 167u: goto L_003A9950;
    case 168u: goto L_003A996C;
    case 169u: goto L_003A9978;
    case 170u: goto L_003A9988;
    case 171u: goto L_003A9998;
    case 172u: goto L_003A99A8;
    case 173u: goto L_003A99B8;
    case 174u: goto L_003A99C8;
    case 175u: goto L_003A99D4;
    case 176u: goto L_003A99E4;
    case 177u: goto L_003A99F4;
    case 178u: goto L_003A99FC;
    case 179u: goto L_003A9A14;
    case 180u: goto L_003A9A20;
    case 181u: goto L_003A9A28;
    case 182u: goto L_003A9A40;
    case 183u: goto L_003A9A50;
    case 184u: goto L_003A9A6C;
    case 185u: goto L_003A9A78;
    case 186u: goto L_003A9A90;
    case 187u: goto L_003A9AC8;
    case 188u: goto L_003A9AE0;
    case 189u: goto L_003A9B14;
    case 190u: goto L_003A9B28;
    case 191u: goto L_003A9B5C;
    case 192u: goto L_003A9BB0;
    case 193u: goto L_003A9BD0;
    case 194u: goto L_003A9BF4;
    case 195u: goto L_003A9C00;
    case 196u: goto L_003A9C24;
    case 197u: goto L_003A9C30;
    case 198u: goto L_003A9C60;
    case 199u: goto L_003A9C8C;
    case 200u: goto L_003A9CA0;
    case 201u: goto L_003A9D38;
    case 202u: goto L_003A9D4C;
    case 203u: goto L_003A9D74;
    case 204u: goto L_003A9DB4;
    case 205u: goto L_003A9DC0;
    case 206u: goto L_003A9E0C;
    case 207u: goto L_003A9E20;
    case 208u: goto L_003A9E3C;
    case 209u: goto L_003A9E7C;
    case 210u: goto L_003A9EB4;
    case 211u: goto L_003A9EC8;
    case 212u: goto L_003A9EDC;
    case 213u: goto L_003A9F24;
    case 214u: goto L_003A9F5C;
    case 215u: goto L_003A9F70;
    case 216u: goto L_003A9F90;
    case 217u: goto L_003A9FB0;
    case 218u: goto L_003A9FC4;
    case 219u: goto L_003A9FD4;
    case 220u: goto L_003A9FEC;
    case 221u: goto L_003AA030;
    case 222u: goto L_003AA07C;
    case 223u: goto L_003AA08C;
    case 224u: goto L_003AA0A4;
    case 225u: goto L_003AA0C0;
    case 226u: goto L_003AA10C;
    case 227u: goto L_003AA120;
    case 228u: goto L_003AA130;
    case 229u: goto L_003AA140;
    case 230u: goto L_003AA150;
    case 231u: goto L_003AA160;
    case 232u: goto L_003AA170;
    case 233u: goto L_003AA198;
    case 234u: goto L_003AA1AC;
    case 235u: goto L_003AA1C4;
    case 236u: goto L_003AA1D8;
    case 237u: goto L_003AA200;
    case 238u: goto L_003AA210;
    case 239u: goto L_003AA224;
    case 240u: goto L_003AA234;
    case 241u: goto L_003AA248;
    case 242u: goto L_003AA260;
    case 243u: goto L_003AA288;
    case 244u: goto L_003AA29C;
    case 245u: goto L_003AA2B4;
    case 246u: goto L_003AA2C8;
    case 247u: goto L_003AA2F0;
    case 248u: goto L_003AA300;
    case 249u: goto L_003AA324;
    case 250u: goto L_003AA330;
    case 251u: goto L_003AA358;
    case 252u: goto L_003AA380;
    case 253u: goto L_003AA390;
    case 254u: goto L_003AA3B4;
    case 255u: goto L_003AA3CC;
    case 256u: goto L_003AA3E0;
    case 257u: goto L_003AA3F4;
    case 258u: goto L_003AA430;
    case 259u: goto L_003AA440;
    case 260u: goto L_003AA45C;
    case 261u: goto L_003AA46C;
    case 262u: goto L_003AA4A0;
    case 263u: goto L_003AA4B0;
    case 264u: goto L_003AA4CC;
    case 265u: goto L_003AA4DC;
    case 266u: goto L_003AA510;
    case 267u: goto L_003AA520;
    case 268u: goto L_003AA53C;
    case 269u: goto L_003AA54C;
    case 270u: goto L_003AA580;
    case 271u: goto L_003AA598;
    case 272u: goto L_003AA5C0;
    case 273u: goto L_003AA5D4;
    case 274u: goto L_003AA5F4;
    case 275u: goto L_003AA640;
    case 276u: goto L_003AA660;
    case 277u: goto L_003AA688;
    case 278u: goto L_003AA69C;
    case 279u: goto L_003AA6D0;
    case 280u: goto L_003AA6E8;
    case 281u: goto L_003AA710;
    case 282u: goto L_003AA744;
    case 283u: goto L_003AA78C;
    case 284u: goto L_003AA7A0;
    case 285u: goto L_003AA7D4;
    case 286u: goto L_003AA7F4;
    case 287u: goto L_003AA80C;
    case 288u: goto L_003AA850;
    case 289u: goto L_003AA890;
    case 290u: goto L_003AA8C8;
    case 291u: goto L_003AA8D8;
    case 292u: goto L_003AA8E0;
    case 293u: goto L_003AA8F0;
    case 294u: goto L_003AA900;
    case 295u: goto L_003AA918;
    case 296u: goto L_003AA924;
    case 297u: goto L_003AA950;
    case 298u: goto L_003AA970;
    case 299u: goto L_003AA9A0;
    case 300u: goto L_003AA9B4;
    case 301u: goto L_003AA9BC;
    case 302u: goto L_003AA9D0;
    case 303u: goto L_003AAA40;
    case 304u: goto L_003AAA58;
    case 305u: goto L_003AAA6C;
    case 306u: goto L_003AAA74;
    case 307u: goto L_003AAA88;
    case 308u: goto L_003AAAF0;
    case 309u: goto L_003AAB20;
    case 310u: goto L_003AAB34;
    case 311u: goto L_003AAB3C;
    case 312u: goto L_003AAB50;
    case 313u: goto L_003AABD0;
    case 314u: goto L_003AAC24;
    case 315u: goto L_003AAC3C;
    case 316u: goto L_003AAC4C;
    case 317u: goto L_003AAC58;
    case 318u: goto L_003AAC64;
    case 319u: goto L_003AAC7C;
    case 320u: goto L_003AACA0;
    case 321u: goto L_003AACD0;
    case 322u: goto L_003AACD8;
    case 323u: goto L_003AACF0;
    case 324u: goto L_003AAD28;
    case 325u: goto L_003AAD34;
    case 326u: goto L_003AAD3C;
    case 327u: goto L_003AAD68;
    case 328u: goto L_003AAD70;
    case 329u: goto L_003AADDC;
    case 330u: goto L_003AADF4;
    case 331u: goto L_003AAE08;
    case 332u: goto L_003AAE24;
    case 333u: goto L_003AAE38;
    case 334u: goto L_003AAE4C;
    case 335u: goto L_003AAE60;
    case 336u: goto L_003AAE84;
    case 337u: goto L_003AAE98;
    case 338u: goto L_003AAEB0;
    case 339u: goto L_003AAEB8;
    case 340u: goto L_003AAECC;
    case 341u: goto L_003AAEE4;
    case 342u: goto L_003AAF10;
    case 343u: goto L_003AAF38;
    case 344u: goto L_003AAF50;
    case 345u: goto L_003AAF80;
    case 346u: goto L_003AAF98;
    case 347u: goto L_003AAFD0;
    case 348u: goto L_003AAFE8;
    case 349u: goto L_003AAFFC;
    case 350u: goto L_003AB014;
    case 351u: goto L_003AB04C;
    case 352u: goto L_003AB064;
    case 353u: goto L_003AB070;
    case 354u: goto L_003AB098;
    case 355u: goto L_003AB0B0;
    case 356u: goto L_003AB0D0;
    case 357u: goto L_003AB0F0;
    case 358u: goto L_003AB120;
    case 359u: goto L_003AB138;
    case 360u: goto L_003AB140;
    case 361u: goto L_003AB150;
    case 362u: goto L_003AB160;
    case 363u: goto L_003AB170;
    case 364u: goto L_003AB180;
    case 365u: goto L_003AB194;
    case 366u: goto L_003AB1A8;
    case 367u: goto L_003AB1B4;
    case 368u: goto L_003AB1F0;
    case 369u: goto L_003AB23C;
    case 370u: goto L_003AB25C;
    case 371u: goto L_003AB278;
    case 372u: goto L_003AB284;
    case 373u: goto L_003AB29C;
    case 374u: goto L_003AB2C0;
    case 375u: goto L_003AB2E8;
    case 376u: goto L_003AB314;
    case 377u: goto L_003AB330;
    case 378u: goto L_003AB340;
    case 379u: goto L_003AB370;
    case 380u: goto L_003AB384;
    case 381u: goto L_003AB3A0;
    case 382u: goto L_003AB3BC;
    case 383u: goto L_003AB3CC;
    case 384u: goto L_003AB3F0;
    case 385u: goto L_003AB40C;
    case 386u: goto L_003AB420;
    case 387u: goto L_003AB430;
    case 388u: goto L_003AB444;
    case 389u: goto L_003AB458;
    case 390u: goto L_003AB50C;
    case 391u: goto L_003AB520;
    case 392u: goto L_003AB530;
    case 393u: goto L_003AB55C;
    case 394u: goto L_003AB568;
    case 395u: goto L_003AB5A0;
    case 396u: goto L_003AB5AC;
    case 397u: goto L_003AB5C0;
    case 398u: goto L_003AB5D4;
    case 399u: goto L_003AB5E0;
    case 400u: goto L_003AB5E8;
    case 401u: goto L_003AB5F4;
    case 402u: goto L_003AB600;
    case 403u: goto L_003AB60C;
    case 404u: goto L_003AB6B0;
    case 405u: goto L_003AB6D0;
    case 406u: goto L_003AB6D8;
    case 407u: goto L_003AB6E0;
    case 408u: goto L_003AB6EC;
    case 409u: goto L_003AB710;
    case 410u: goto L_003AB768;
    case 411u: goto L_003AB778;
    case 412u: goto L_003AB784;
    case 413u: goto L_003AB790;
    case 414u: goto L_003AB7A8;
    case 415u: goto L_003AB7B4;
    case 416u: goto L_003AB7C0;
    case 417u: goto L_003AB7D8;
    case 418u: goto L_003AB7F0;
    case 419u: goto L_003AB81C;
    case 420u: goto L_003AB8F8;
    case 421u: goto L_003AB920;
    case 422u: goto L_003AB92C;
    case 423u: goto L_003AB934;
    case 424u: goto L_003AB944;
    case 425u: goto L_003AB960;
    case 426u: goto L_003AB980;
    case 427u: goto L_003AB994;
    case 428u: goto L_003AB9AC;
    case 429u: goto L_003AB9C0;
    case 430u: goto L_003AB9D4;
    case 431u: goto L_003AB9EC;
    case 432u: goto L_003ABA00;
    case 433u: goto L_003ABA38;
    case 434u: goto L_003ABA48;
    case 435u: goto L_003ABA50;
    case 436u: goto L_003ABA58;
    case 437u: goto L_003ABA64;
    case 438u: goto L_003ABA80;
    case 439u: goto L_003ABA98;
    case 440u: goto L_003ABAB0;
    case 441u: goto L_003ABAC0;
    case 442u: goto L_003ABADC;
    case 443u: goto L_003ABAF4;
    case 444u: goto L_003ABB20;
    case 445u: goto L_003ABB28;
    case 446u: goto L_003ABB30;
    case 447u: goto L_003ABB40;
    case 448u: goto L_003ABB58;
    case 449u: goto L_003ABB80;
    case 450u: goto L_003ABB94;
    case 451u: goto L_003ABBAC;
    case 452u: goto L_003ABBC0;
    case 453u: goto L_003ABBD4;
    case 454u: goto L_003ABBEC;
    case 455u: goto L_003ABC00;
    case 456u: goto L_003ABC18;
    case 457u: goto L_003ABC34;
    case 458u: goto L_003ABC48;
    case 459u: goto L_003ABC58;
    case 460u: goto L_003ABC68;
    case 461u: goto L_003ABC78;
    case 462u: goto L_003ABC8C;
    case 463u: goto L_003ABC94;
    case 464u: goto L_003ABCA4;
    case 465u: goto L_003ABCB0;
    case 466u: goto L_003ABCDC;
    case 467u: goto L_003ABCE4;
    case 468u: goto L_003ABD00;
    case 469u: goto L_003ABD10;
    case 470u: goto L_003ABD24;
    case 471u: goto L_003ABD40;
    case 472u: goto L_003ABD6C;
    case 473u: goto L_003ABD74;
    case 474u: goto L_003ABD90;
    case 475u: goto L_003ABDA4;
    case 476u: goto L_003ABDC0;
    case 477u: goto L_003ABDEC;
    case 478u: goto L_003ABDF4;
    case 479u: goto L_003ABDFC;
    case 480u: goto L_003ABE08;
    case 481u: goto L_003ABE10;
    case 482u: goto L_003ABE20;
    case 483u: goto L_003ABEB8;
    case 484u: goto L_003ABECC;
    case 485u: goto L_003ABED8;
    case 486u: goto L_003ABF50;
    case 487u: goto L_003ABF78;
    case 488u: goto L_003ABFE4;
    default: bad_entry(c, 0x003A8000u); return;
    }
L_003A8000:
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = ld32((c.r[1].w[0] + 4392u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    st32((c.r[5].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    st32((c.r[5].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    st32((c.r[5].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 15;
L_003A803C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42B80000u);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.f[3] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x438A0000u);
    c.f[2] = c.r[20].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[1] = c.r[3].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[0] = fp::cvt_s_w(c.f[2]);
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    c.f[12] = fp::add(c.f[1], c.f[0]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8084u); c.f[13] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A8084u) [[unlikely]] return; }
L_003A8084:
    set32(c.r[3], ld32((c.r[21].w[0] + 672u)));
    set32(c.r[2], ld32((c.r[17].w[0])));
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A80A4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A80A4u) [[unlikely]] return; }
L_003A80A4:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[3].d[0] = c.r[20].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[20].w[0] + c.r[19].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A7F2Cu | kUnwind; return; } [[clang::musttail]] return unit_00A9(c, 484u, depth); } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A7EF8u | kUnwind; return; } [[clang::musttail]] return unit_00A9(c, 483u, depth); } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_003A80F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 720u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003A8360; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 676u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 320u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003A81F8; } }
    c.f[2] = ld32((c.r[16].w[0] + 724u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43280000u);
    c.f[1] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    st32((c.r[5].w[0] + 16u), c.r[4].w[0]);
    c.f[3] = c.r[3].w[0];
    st32((c.r[5].w[0] + 20u), c.f[2]);
    st32((c.r[5].w[0] + 24u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42F00000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 676u)));
    c.f[12] = c.r[3].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 476u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 320u)));
    set32(c.r[2], ld32((c.r[3].w[0])));
    st32((c.r[4].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[4].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    st32((c.r[4].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 676u)));
    c.f[2] = c.r[3].w[0];
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    set32(c.r[4], ld32((c.r[2].w[0] + 320u)));
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[0] = ld32((c.r[2].w[0] + 708u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 40;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A81C0u); c.f[13] = fp::add(c.f[1], c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A81C0u) [[unlikely]] return; }
L_003A81C0:
    set32(c.r[2], ld32((c.r[16].w[0] + 676u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 672u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 320u)));
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 676u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 320u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A81F8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A81F8u) [[unlikely]] return; }
L_003A81F8:
    set32(c.r[5], ld32((c.r[16].w[0] + 392u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003A82C4; } }
    c.f[3] = ld32((c.r[16].w[0] + 728u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43280000u);
    c.f[1] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    st32((c.r[5].w[0] + 16u), c.r[4].w[0]);
    c.f[2] = c.r[3].w[0];
    st32((c.r[5].w[0] + 20u), c.f[3]);
    st32((c.r[5].w[0] + 24u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42F00000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 676u)));
    c.f[12] = c.r[3].w[0];
    set32(c.r[4], ld32((c.r[16].w[0] + 392u)));
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 476u)));
    set32(c.r[2], ld32((c.r[3].w[0])));
    st32((c.r[4].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[4].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    st32((c.r[4].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 676u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 392u)));
    c.f[0] = c.r[3].w[0];
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[3] = ld32((c.r[2].w[0] + 708u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 40;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A82A4u); c.f[13] = fp::add(c.f[0], c.f[3]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A82A4u) [[unlikely]] return; }
L_003A82A4:
    set32(c.r[3], ld32((c.r[16].w[0] + 672u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 392u)));
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 392u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A82C4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A82C4u) [[unlikely]] return; }
L_003A82C4:
    set32(c.r[3], ld32((c.r[16].w[0] + 720u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[16].w[0] + 720u), c.r[3].w[0]);  if (t) { goto L_003A831C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 676u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 320u)));
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 392u)));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A8318; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A8318; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8318u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A8318u) [[unlikely]] return; }
L_003A8318:
    st32((c.r[16].w[0] + 392u), 0u);
    c.budget -= 1;
L_003A831C:
    set32(c.r[3], ld32((c.r[16].w[0] + 720u)));
    c.r[3].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003A8348; } }
    c.f[1] = ld32((c.r[16].w[0] + 728u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E000000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 728u), c.f[0]);  if (t) { goto L_003A8360; } }
L_003A8348:
    c.f[1] = ld32((c.r[16].w[0] + 724u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E000000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 724u), c.f[0]);
    c.budget -= 6;
L_003A8360:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A8370:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_003A8398; } }
    c.r[3].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003A838C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A8398; } }
L_003A838C:
    st32((c.r[4].w[0] + 700u), c.r[5].w[0]);
    set32(c.r[3], 0u + 16u);
    st32((c.r[4].w[0] + 696u), c.r[3].w[0]);
    c.budget -= 3;
L_003A8398:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A83A0:
    set32(c.r[3], 0u - 16u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 696u), c.r[3].w[0]);  c.pc = t; return; }
L_003A83B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 696u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003A83CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A84A0; } }
L_003A83CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40600000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 2;
L_003A83D4:
    set32(c.r[2], ld32((c.r[4].w[0] + 700u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003A8418; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 696u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[2], c.r[3].w[0] << 2);  if (t) { goto L_003A8408; } }
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 704u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 704u), c.f[0]);  if (t) { goto L_003A8418; } }
L_003A8408:
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 704u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[2].w[0] + 704u), c.f[0]);
    c.budget -= 4;
L_003A8418:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A83D4u | kUnwind; return; } goto L_003A83D4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 696u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003A8458; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0] + 696u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 696u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003A8478; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 680u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 680u), c.r[2].w[0]);  if (t) { goto L_003A8478; } }
L_003A8458:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0] + 696u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 696u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003A8478; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 680u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0] + 680u), c.r[2].w[0]);
    c.budget -= 3;
L_003A8478:
    set32(c.r[2], ld32((c.r[4].w[0] + 680u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003A8494; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A848Cu); set32(c.r[4], 0u + 11u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x003A848Cu) [[unlikely]] return; }
L_003A848C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003A84A0; } }
L_003A8494:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A849Cu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x003A849Cu) [[unlikely]] return; }
L_003A849C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003A84A0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A84B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 680u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A84D0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x003A84D0u) [[unlikely]] return; }
L_003A84D0:
    st32((c.r[16].w[0] + 692u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A84F8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A84F8; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A84F8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A84F8u) [[unlikely]] return; }
L_003A84F8:
    set32(c.r[4], 0u + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8504u); st32((c.r[16].w[0] + 132u), 0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003A8504u) [[unlikely]] return; }
L_003A8504:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A851C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8518u);  if (depth < kMaxDepth) unit_0017(c, 177u, depth + 1u); else { c.pc = 0x0015E070u; return; } if (c.pc != 0x003A8518u) [[unlikely]] return; }
L_003A8518:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003A851C:
    st32((c.r[16].w[0] + 132u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x429E0000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 132u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x42C40000u);
    st32((c.r[5].w[0] + 160u), c.r[4].w[0]);
    st32((c.r[5].w[0] + 164u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A8550:
    set32(c.r[29], c.r[29].w[0] - 2496u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 2448u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[4], c.r[4].w[0] + 6976u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 15;
L_003A858C:
    ld128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], c.r[4].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A858Cu | kUnwind; return; } goto L_003A858C; } }
    c.f[0] = ld32((c.r[4].w[0]));
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A85B8u); st32((c.r[5].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003A85B8u) [[unlikely]] return; }
L_003A85B8:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_003A85D8; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A85D0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0016(c, 410u, depth + 1u); else { c.pc = 0x0015B6A0u; return; } if (c.pc != 0x003A85D0u) [[unlikely]] return; }
L_003A85D0:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003A85D8:
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[18].w[0] << 1);
    c.budget -= 2;
L_003A85E0:
    c.r[3].d[0] = 0ull | 65535ull;
    set32(c.r[4], c.r[21].w[0] + c.r[4].w[0]);
    c.r[5].d[0] = ld16((c.r[4].w[0] + 548u));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[23], c.r[4].w[0] + 548u);  if (t) { goto L_003A87E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A85FCu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 88u, depth + 1u); else { c.pc = 0x003A9120u; return; } if (c.pc != 0x003A85FCu) [[unlikely]] return; }
L_003A85FC:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_003A86CC; } }
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[16], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 404u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8624u); set32(c.r[6], 0u + 2304u);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x003A8624u) [[unlikely]] return; }
L_003A8624:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A862Cu); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003A862Cu) [[unlikely]] return; }
L_003A862C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003A8644; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8640u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0017(c, 89u, depth + 1u); else { c.pc = 0x0015D1B0u; return; } if (c.pc != 0x003A8640u) [[unlikely]] return; }
L_003A8640:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003A8644:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[18].w[0] + 11416u);
    set32(c.r[3], c.r[18].w[0] << 3);
    st32((c.r[29].w[0] + 2460u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] + 11264u);
    set32(c.r[5], c.r[29].w[0] + 2448u);
    st32((c.r[29].w[0] + 2456u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A866Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0016(c, 424u, depth + 1u); else { c.pc = 0x0015B880u; return; } if (c.pc != 0x003A866Cu) [[unlikely]] return; }
L_003A866C:
    set32(c.r[4], ld32((c.r[16].w[0] + 320u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[17], c.r[16].w[0] + 320u);  if (t) { goto L_003A8690; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A8690; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8690u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A8690u) [[unlikely]] return; }
L_003A8690:
    set32(c.r[4], 0u + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A869Cu); st32((c.r[17].w[0]), 0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003A869Cu) [[unlikely]] return; }
L_003A869C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A86C4; } }
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 44u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A86C4u); c.r[5].d[0] = ld64((c.r[2].w[0]));  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x003A86C4u) [[unlikely]] return; }
L_003A86C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003A872C; } }
L_003A86CC:
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[16], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 320u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[17], c.r[16].w[0] + 320u);  if (t) { goto L_003A86F8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A86F8; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A86F8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A86F8u) [[unlikely]] return; }
L_003A86F8:
    set32(c.r[4], 0u + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8704u); st32((c.r[17].w[0]), 0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003A8704u) [[unlikely]] return; }
L_003A8704:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[22].d[0] == 0ull; set32(c.r[4], 0u + 51u);  if (t) { goto L_003A8728; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8718u);  if (depth < kMaxDepth) unit_009F(c, 119u, depth + 1u); else { c.pc = 0x0037D1D0u; return; } if (c.pc != 0x003A8718u) [[unlikely]] return; }
L_003A8718:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8724u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x003A8724u) [[unlikely]] return; }
L_003A8724:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003A8728:
    st32((c.r[17].w[0]), c.r[22].w[0]);
    c.budget -= 1;
L_003A872C:
    c.r[1].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], ld32((c.r[17].w[0])));  if (t) { goto L_003A8748; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42D00000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_003A8754; } }
L_003A8748:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A80000u);
    c.f[0] = c.r[2].w[0];
    c.r[1].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
L_003A8754:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[3].w[0] + 160u), c.f[0]);  if (t) { goto L_003A876C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 164u), c.f[0]);  if (t) { goto L_003A8778; } }
L_003A876C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42820000u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[3].w[0] + 164u), c.f[0]);
    c.budget -= 3;
L_003A8778:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 320u)));
    set32(c.r[17], c.r[16].w[0] + 320u);
    set32(c.r[4], 0u + 16u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + 476u);
    st32((c.r[3].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A879Cu); st32((c.r[3].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003A879Cu) [[unlikely]] return; }
L_003A879C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[16].w[0])));
    ld128((c.r[3].w[0] + 48u) & ~15u, c.r[3]);
    st128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[5].d[0] = ld16((c.r[23].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A87BCu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 88u, depth + 1u); else { c.pc = 0x003A9120u; return; } if (c.pc != 0x003A87BCu) [[unlikely]] return; }
L_003A87BC:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_003A8814; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_003A87DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A87DCu);  if (depth < kMaxDepth) unit_0017(c, 91u, depth + 1u); else { c.pc = 0x0015D1F0u; return; } if (c.pc != 0x003A87DCu) [[unlikely]] return; }
L_003A87DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_003A8814; } }
L_003A87E4:
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 320u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[3].w[0] + 320u);  if (t) { goto L_003A8810; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A8810; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8810u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A8810u) [[unlikely]] return; }
L_003A8810:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_003A8814:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 18ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[18].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A85E0u | kUnwind; return; } goto L_003A85E0; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_003A8834; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8834u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0016(c, 413u, depth + 1u); else { c.pc = 0x0015B710u; return; } if (c.pc != 0x003A8834u) [[unlikely]] return; }
L_003A8834:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 2496u);  c.pc = t; return; }
L_003A8860:
    set32(c.r[29], c.r[29].w[0] - 2432u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 2384u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], c.r[4].w[0] + 7024u);
    c.budget -= 11;
L_003A888C:
    ld128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], c.r[4].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A888Cu | kUnwind; return; } goto L_003A888C; } }
    c.f[0] = ld32((c.r[4].w[0]));
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A88B8u); st32((c.r[5].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003A88B8u) [[unlikely]] return; }
L_003A88B8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003A88D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A88CCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0016(c, 410u, depth + 1u); else { c.pc = 0x0015B6A0u; return; } if (c.pc != 0x003A88CCu) [[unlikely]] return; }
L_003A88CC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003A88D0:
    set32(c.r[3], ld32((c.r[18].w[0] + 676u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 692u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 404u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 412u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A88F8u); set32(c.r[6], 0u + 2304u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x003A88F8u) [[unlikely]] return; }
L_003A88F8:
    set32(c.r[3], ld32((c.r[18].w[0] + 692u)));
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[2], ld32((c.r[18].w[0] + 676u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 552u));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st16((c.r[2].w[0] + 548u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 676u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 404u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8934u); set32(c.r[6], 0u + 2304u);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x003A8934u) [[unlikely]] return; }
L_003A8934:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A893Cu); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003A893Cu) [[unlikely]] return; }
L_003A893C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A8954; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8950u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0017(c, 89u, depth + 1u); else { c.pc = 0x0015D1B0u; return; } if (c.pc != 0x003A8950u) [[unlikely]] return; }
L_003A8950:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003A8954:
    set32(c.r[2], ld32((c.r[18].w[0] + 676u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 2384u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + 11264u);
    st32((c.r[29].w[0] + 2392u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 676u)));
    set32(c.r[2], c.r[2].w[0] + 11416u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8984u); st32((c.r[29].w[0] + 2396u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0016(c, 424u, depth + 1u); else { c.pc = 0x0015B880u; return; } if (c.pc != 0x003A8984u) [[unlikely]] return; }
L_003A8984:
    set32(c.r[2], ld32((c.r[18].w[0] + 676u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 320u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[2].w[0] + 320u);  if (t) { goto L_003A89B4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A89B4; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A89B4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A89B4u) [[unlikely]] return; }
L_003A89B4:
    set32(c.r[4], 0u + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A89C0u); st32((c.r[19].w[0]), 0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003A89C0u) [[unlikely]] return; }
L_003A89C0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A89EC; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 44u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A89E8u); c.r[5].d[0] = ld64((c.r[2].w[0]));  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x003A89E8u) [[unlikely]] return; }
L_003A89E8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003A89EC:
    set32(c.r[7], ld32((c.r[18].w[0] + 676u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x42D00000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[18].w[0]);
    st32((c.r[7].w[0] + 320u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 676u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 320u)));
    st32((c.r[4].w[0] + 160u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 164u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 676u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 320u)));
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 21;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[4].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_003A8A4C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8A4Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0017(c, 91u, depth + 1u); else { c.pc = 0x0015D1F0u; return; } if (c.pc != 0x003A8A4Cu) [[unlikely]] return; }
L_003A8A4C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003A8A5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8A5Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0016(c, 413u, depth + 1u); else { c.pc = 0x0015B710u; return; } if (c.pc != 0x003A8A5Cu) [[unlikely]] return; }
L_003A8A5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 2432u);  c.pc = t; return; }
L_003A8A80:
    set32(c.r[29], c.r[29].w[0] - 2416u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 2368u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], c.r[4].w[0] + 7072u);
    c.budget -= 10;
L_003A8AA8:
    ld128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], c.r[4].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8AA8u | kUnwind; return; } goto L_003A8AA8; } }
    c.f[0] = ld32((c.r[4].w[0]));
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8AD4u); st32((c.r[5].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003A8AD4u) [[unlikely]] return; }
L_003A8AD4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003A8AEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8AE8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0016(c, 410u, depth + 1u); else { c.pc = 0x0015B6A0u; return; } if (c.pc != 0x003A8AE8u) [[unlikely]] return; }
L_003A8AE8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003A8AEC:
    set32(c.r[2], ld32((c.r[18].w[0] + 676u)));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 404u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8B08u); set32(c.r[6], 0u + 2304u);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x003A8B08u) [[unlikely]] return; }
L_003A8B08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8B10u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003A8B10u) [[unlikely]] return; }
L_003A8B10:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[3], 0u + 11408u);  if (t) { goto L_003A8B30; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8B28u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0017(c, 89u, depth + 1u); else { c.pc = 0x0015D1B0u; return; } if (c.pc != 0x003A8B28u) [[unlikely]] return; }
L_003A8B28:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], 0u + 11408u);
    c.budget -= 2;
L_003A8B30:
    set32(c.r[2], 0u + 11434u);
    st32((c.r[29].w[0] + 2376u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 2380u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 2368u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8B50u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0016(c, 424u, depth + 1u); else { c.pc = 0x0015B880u; return; } if (c.pc != 0x003A8B50u) [[unlikely]] return; }
L_003A8B50:
    set32(c.r[4], ld32((c.r[18].w[0] + 392u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A8B74; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A8B74; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8B74u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A8B74u) [[unlikely]] return; }
L_003A8B74:
    set32(c.r[4], 0u + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8B80u); st32((c.r[18].w[0] + 392u), 0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003A8B80u) [[unlikely]] return; }
L_003A8B80:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A8BAC; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 44u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8BA8u); c.r[5].d[0] = ld64((c.r[2].w[0]));  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x003A8BA8u) [[unlikely]] return; }
L_003A8BA8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003A8BAC:
    st32((c.r[18].w[0] + 392u), c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x42D00000u);
    set32(c.r[6], ld32((c.r[18].w[0] + 392u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[6].w[0] + 160u), c.r[5].w[0]);
    st32((c.r[6].w[0] + 164u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 392u)));
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 12;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[4].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_003A8BE8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8BE8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0017(c, 91u, depth + 1u); else { c.pc = 0x0015D1F0u; return; } if (c.pc != 0x003A8BE8u) [[unlikely]] return; }
L_003A8BE8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[4], 0u + 16u);  if (t) { goto L_003A8C00; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8BFCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0016(c, 413u, depth + 1u); else { c.pc = 0x0015B710u; return; } if (c.pc != 0x003A8BFCu) [[unlikely]] return; }
L_003A8BFC:
    set32(c.r[4], 0u + 16u);
    c.budget -= 1;
L_003A8C00:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[18].w[0] + 720u), c.r[4].w[0]);
    st32((c.r[18].w[0] + 724u), 0u);
    st32((c.r[18].w[0] + 728u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 2416u);  c.pc = t; return; }
L_003A8C30:
    set32(c.r[2], ld32((c.r[4].w[0] + 720u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_003A8C40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 692u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] >= 0; c.r[2].d[0] = c.r[3].d[0] & 3ull;  if (t) { goto L_003A8C6C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A8C6C; } }
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 1;
L_003A8C6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003A8D00; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 692u)));
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[16].w[0] + 692u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 688u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003A8CA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 660u)));  if (t) { goto L_003A8CA4; } }
L_003A8CA0:
    set32(c.r[2], ld32((c.r[16].w[0] + 664u)));
    c.budget -= 1;
L_003A8CA4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[2].w[0] >> 4);  if (t) { goto L_003A8CB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 660u)));  if (t) { goto L_003A8CB8; } }
L_003A8CB4:
    set32(c.r[2], ld32((c.r[16].w[0] + 664u)));
    c.budget -= 1;
L_003A8CB8:
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003A8CC8; } }
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 1;
L_003A8CC8:
    set32(c.r[2], ld32((c.r[16].w[0] + 684u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[16].w[0] + 684u), c.r[2].w[0]);  if (t) { goto L_003A8CDC; } }
    st32((c.r[16].w[0] + 684u), c.r[4].w[0]);
    c.budget -= 1;
L_003A8CDC:
    set32(c.r[4], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8CF0u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A8CF0u) [[unlikely]] return; }
L_003A8CF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8CF8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 421u, depth + 1u); else { c.pc = 0x003A71C0u; return; } if (c.pc != 0x003A8CF8u) [[unlikely]] return; }
L_003A8CF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003A8D04; } }
L_003A8D00:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A8D04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A8D20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 692u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] >= 0; c.r[6].d[0] = c.r[2].d[0] & 3ull;  if (t) { goto L_003A8D48; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003A8D4C; } }
    set32(c.r[6], c.r[6].w[0] - 4u);
    c.budget -= 1;
L_003A8D48:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A8D4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull | 65535ull;  if (t) { goto L_003A8D74; } }
L_003A8D54:
    set32(c.r[4], ld32((c.r[16].w[0] + 692u)));
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 552u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[2], c.r[4].w[0] + 1u);  if (t) { goto L_003A8D80; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[16].w[0] + 692u), c.r[2].w[0]);
    c.budget -= 2;
L_003A8D74:
    c.r[2].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8D54u | kUnwind; return; } goto L_003A8D54; } }
L_003A8D80:
    set32(c.r[3], ld32((c.r[16].w[0] + 692u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; c.r[2].d[0] = c.r[3].d[0] & 3ull;  if (t) { goto L_003A8D98; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A8D98; } }
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 1;
L_003A8D98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003A8E30; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 692u)));
    set32(c.r[2], c.r[2].w[0] - 4u);
    st32((c.r[16].w[0] + 692u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 688u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003A8DCC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 660u)));  if (t) { goto L_003A8DD0; } }
L_003A8DCC:
    set32(c.r[2], ld32((c.r[16].w[0] + 664u)));
    c.budget -= 1;
L_003A8DD0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[2].w[0] >> 4);  if (t) { goto L_003A8DE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 660u)));  if (t) { goto L_003A8DE4; } }
L_003A8DE0:
    set32(c.r[2], ld32((c.r[16].w[0] + 664u)));
    c.budget -= 1;
L_003A8DE4:
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003A8DF4; } }
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 1;
L_003A8DF4:
    set32(c.r[2], ld32((c.r[16].w[0] + 684u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[16].w[0] + 684u), c.r[2].w[0]);  if (t) { goto L_003A8E0C; } }
    st32((c.r[16].w[0] + 684u), 0u);
    c.budget -= 1;
L_003A8E0C:
    set32(c.r[4], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8E20u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A8E20u) [[unlikely]] return; }
L_003A8E20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8E28u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 421u, depth + 1u); else { c.pc = 0x003A71C0u; return; } if (c.pc != 0x003A8E28u) [[unlikely]] return; }
L_003A8E28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003A8E34; } }
L_003A8E30:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A8E34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A8E50:
    c.r[5].d[0] = c.r[5].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[3], 0u + 3u);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[2], ld32((c.r[4].w[0] + 692u)));  if (t) { goto L_003A9008; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003A8F4C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003A8EE8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003A8E8C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[4].w[0] + 692u)));  if (t) { goto L_003A90CC; } }
L_003A8E8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull | 65535ull;  if (t) { goto L_003A8EC8; } }
L_003A8E94:
    set32(c.r[6], ld32((c.r[4].w[0] + 692u)));
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 552u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; set32(c.r[3], 0u + 4u);  if (t) { goto L_003A8ED8; } }
    set32(c.r[3], c.r[6].w[0] - 4u);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; st32((c.r[4].w[0] + 692u), c.r[3].w[0]);  if (t) { goto L_003A8EC4; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 692u)));
    set32(c.r[3], c.r[3].w[0] + 16u);
    st32((c.r[4].w[0] + 692u), c.r[3].w[0]);
    c.budget -= 3;
L_003A8EC4:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_003A8EC8:
    c.r[3].d[0] = c.r[7].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8E94u | kUnwind; return; } goto L_003A8E94; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_003A8ED8:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[3].d[0];  if (t) { goto L_003A90C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 692u), c.r[2].w[0]);  if (t) { goto L_003A90C8; } }
L_003A8EE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull | 65535ull;  if (t) { goto L_003A8F2C; } }
L_003A8EF0:
    set32(c.r[6], ld32((c.r[4].w[0] + 692u)));
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 552u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; set32(c.r[3], 0u + 4u);  if (t) { goto L_003A8F3C; } }
    set32(c.r[3], c.r[6].w[0] + 4u);
    st32((c.r[4].w[0] + 692u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003A8F28; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 692u)));
    set32(c.r[3], c.r[3].w[0] - 16u);
    st32((c.r[4].w[0] + 692u), c.r[3].w[0]);
    c.budget -= 3;
L_003A8F28:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_003A8F2C:
    c.r[3].d[0] = c.r[7].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8EF0u | kUnwind; return; } goto L_003A8EF0; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_003A8F3C:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[3].d[0];  if (t) { goto L_003A90C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 692u), c.r[2].w[0]);  if (t) { goto L_003A90C8; } }
L_003A8F4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull | 65535ull;  if (t) { goto L_003A8FE8; } }
L_003A8F54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_003A8FB0; } }
L_003A8F5C:
    set32(c.r[5], ld32((c.r[4].w[0] + 692u)));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 552u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[6].d[0]; c.r[3].d[0] = c.r[8].sd[0] < 4ll ? 1ull : 0ull;  if (t) { goto L_003A8FC0; } }
    set32(c.r[3], c.r[5].w[0] - 1u);
    st32((c.r[4].w[0] + 692u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 692u)));
    set32(c.r[5], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = c.r[5].sd[0] >= 0; c.r[3].d[0] = c.r[5].d[0] & 3ull;  if (t) { goto L_003A8F98; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003A8F98; } }
    set32(c.r[3], c.r[3].w[0] - 4u);
    c.budget -= 1;
L_003A8F98:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003A8FAC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 692u)));
    set32(c.r[3], c.r[3].w[0] + 4u);
    st32((c.r[4].w[0] + 692u), c.r[3].w[0]);
    c.budget -= 3;
L_003A8FAC:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_003A8FB0:
    c.r[3].d[0] = c.r[8].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8F5Cu | kUnwind; return; } goto L_003A8F5C; } }
    c.r[3].d[0] = c.r[8].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 1;
L_003A8FC0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 4u);  if (t) { goto L_003A8FF8; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 692u)));
    set32(c.r[3], c.r[3].w[0] - 4u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; st32((c.r[4].w[0] + 692u), c.r[3].w[0]);  if (t) { goto L_003A8FE4; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 692u)));
    set32(c.r[3], c.r[3].w[0] + 16u);
    st32((c.r[4].w[0] + 692u), c.r[3].w[0]);
    c.budget -= 3;
L_003A8FE4:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_003A8FE8:
    c.r[3].d[0] = c.r[7].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8F54u | kUnwind; return; } goto L_003A8F54; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_003A8FF8:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[3].d[0];  if (t) { goto L_003A90C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 692u), c.r[2].w[0]);  if (t) { goto L_003A90C8; } }
L_003A9008:
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull | 65535ull;  if (t) { goto L_003A90AC; } }
L_003A9014:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003A906C; } }
L_003A901C:
    set32(c.r[5], ld32((c.r[4].w[0] + 692u)));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 552u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[6].d[0]; c.r[3].d[0] = c.r[7].sd[0] < 4ll ? 1ull : 0ull;  if (t) { goto L_003A907C; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0] + 692u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 692u)));
    c.budget -= 5;
    { const bool t = c.r[5].sd[0] >= 0; c.r[3].d[0] = c.r[5].d[0] & 3ull;  if (t) { goto L_003A9054; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003A9054; } }
    set32(c.r[3], c.r[3].w[0] - 4u);
    c.budget -= 1;
L_003A9054:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003A9068; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 692u)));
    set32(c.r[3], c.r[3].w[0] - 4u);
    st32((c.r[4].w[0] + 692u), c.r[3].w[0]);
    c.budget -= 3;
L_003A9068:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_003A906C:
    c.r[3].d[0] = c.r[7].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A901Cu | kUnwind; return; } goto L_003A901C; } }
    c.r[3].d[0] = c.r[7].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 1;
L_003A907C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 4u);  if (t) { goto L_003A90BC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 692u)));
    set32(c.r[3], c.r[3].w[0] + 4u);
    st32((c.r[4].w[0] + 692u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003A90A8; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 692u)));
    set32(c.r[3], c.r[3].w[0] - 16u);
    st32((c.r[4].w[0] + 692u), c.r[3].w[0]);
    c.budget -= 3;
L_003A90A8:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_003A90AC:
    c.r[3].d[0] = c.r[8].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A9014u | kUnwind; return; } goto L_003A9014; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_003A90BC:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != c.r[3].d[0];  if (t) { goto L_003A90C8; } }
    st32((c.r[4].w[0] + 692u), c.r[2].w[0]);
    c.budget -= 1;
L_003A90C8:
    set32(c.r[3], ld32((c.r[4].w[0] + 692u)));
    c.budget -= 1;
L_003A90CC:
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_003A90E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = 0ull | 65535ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 692u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[5].d[0] = ld16((c.r[3].w[0] + 552u));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A910C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003A9118; } }
L_003A910C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9114u);  if (depth < kMaxDepth) unit_00AA(c, 88u, depth + 1u); else { c.pc = 0x003A9120u; return; } if (c.pc != 0x003A9114u) [[unlikely]] return; }
L_003A9114:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003A9118:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A9120:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 4272u);  if (t) { goto L_003A914C; } }
L_003A9138:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 12u);  if (t) { goto L_003A915C; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_003A914C:
    c.r[2].d[0] = c.r[4].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A9138u | kUnwind; return; } goto L_003A9138; } }
    set32(c.r[2], 0u + 12u);
    c.budget -= 1;
L_003A915C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[1].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_003A916C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003A9208; } }
L_003A916C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003A9184; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A917Cu); set32(c.r[4], 0u + 9u);  if (depth < kMaxDepth) unit_0081(c, 172u, depth + 1u); else { c.pc = 0x00306060u; return; } if (c.pc != 0x003A917Cu) [[unlikely]] return; }
L_003A917C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003A920C; } }
L_003A9184:
    c.r[1].d[0] = c.r[4].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[4].sd[0] < 6ll ? 1ull : 0ull;  if (t) { goto L_003A91A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9198u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0081(c, 172u, depth + 1u); else { c.pc = 0x00306060u; return; } if (c.pc != 0x003A9198u) [[unlikely]] return; }
L_003A9198:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A9208; } }
L_003A91A0:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003A91B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A91B0u); set32(c.r[4], 0u + 7u);  if (depth < kMaxDepth) unit_0081(c, 172u, depth + 1u); else { c.pc = 0x00306060u; return; } if (c.pc != 0x003A91B0u) [[unlikely]] return; }
L_003A91B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A9208; } }
L_003A91B8:
    c.r[1].d[0] = c.r[4].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[4].sd[0] < 10ll ? 1ull : 0ull;  if (t) { goto L_003A91D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A91CCu); set32(c.r[4], 0u + 10u);  if (depth < kMaxDepth) unit_0081(c, 172u, depth + 1u); else { c.pc = 0x00306060u; return; } if (c.pc != 0x003A91CCu) [[unlikely]] return; }
L_003A91CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A9208; } }
L_003A91D4:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003A91EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A91E4u); set32(c.r[4], 0u + 50u);  if (depth < kMaxDepth) unit_0081(c, 172u, depth + 1u); else { c.pc = 0x00306060u; return; } if (c.pc != 0x003A91E4u) [[unlikely]] return; }
L_003A91E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A9208; } }
L_003A91EC:
    c.r[1].d[0] = c.r[4].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003A9208; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9200u); set32(c.r[4], 0u + 51u);  if (depth < kMaxDepth) unit_0081(c, 172u, depth + 1u); else { c.pc = 0x00306060u; return; } if (c.pc != 0x003A9200u) [[unlikely]] return; }
L_003A9200:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A9208; } }
L_003A9208:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003A920C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A9220:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 7112u);
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[12], c.r[29].w[0] + 28u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + 7120u);
    set32(c.r[11], c.r[29].w[0] + 24u);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 14u);
    c.r[8].d[0] = 0ull + 0ull;
    st32((c.r[12].w[0]), c.f[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[29].w[0]);
    c.r[10].d[0] = ld8((c.r[10].w[0]));
    st8((c.r[11].w[0]), static_cast<std::uint8_t>(c.r[10].w[0]));
    st32((c.r[4].w[0] + 32u), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 24u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A927Cu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 267u, depth + 1u); else { c.pc = 0x0016A910u; return; } if (c.pc != 0x003A927Cu) [[unlikely]] return; }
L_003A927C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A9290:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A7000u | kUnwind; return; } [[clang::musttail]] return unit_00A9(c, 405u, depth); }
L_003A92A0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A6050u | kUnwind; return; } [[clang::musttail]] return unit_00A9(c, 252u, depth); }
L_003A92B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A92D0u); st32((c.r[29].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x003A92D0u) [[unlikely]] return; }
L_003A92D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A92D8u);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x003A92D8u) [[unlikely]] return; }
L_003A92D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A92E0u); c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 688u)));  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x003A92E0u) [[unlikely]] return; }
L_003A92E0:
    set32(c.r[3], ld32((c.r[2].w[0] + 600u)));
    set32(c.r[2], 0u + 11u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 16u);  if (t) { goto L_003A9330; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A92F8u);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x003A92F8u) [[unlikely]] return; }
L_003A92F8:
    set32(c.r[3], c.r[16].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 264u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 16u);  if (t) { goto L_003A932C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9314u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003A9314u) [[unlikely]] return; }
L_003A9314:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003A9348; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9324u);  if (depth < kMaxDepth) unit_00AA(c, 110u, depth + 1u); else { c.pc = 0x003A9370u; return; } if (c.pc != 0x003A9324u) [[unlikely]] return; }
L_003A9324:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 44u)));  if (t) { goto L_003A934C; } }
L_003A932C:
    set32(c.r[4], 0u + 16u);
    c.budget -= 1;
L_003A9330:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9338u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003A9338u) [[unlikely]] return; }
L_003A9338:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003A9348; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9348u);  if (depth < kMaxDepth) unit_000E(c, 4u, depth + 1u); else { c.pc = 0x00138030u; return; } if (c.pc != 0x003A9348u) [[unlikely]] return; }
L_003A9348:
    set32(c.r[4], ld32((c.r[29].w[0] + 44u)));
    c.budget -= 1;
L_003A934C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9354u);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x003A9354u) [[unlikely]] return; }
L_003A9354:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A9370:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 11u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9388u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 29u, depth + 1u); else { c.pc = 0x00140690u; return; } if (c.pc != 0x003A9388u) [[unlikely]] return; }
L_003A9388:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[4], 0u + 560u);
    set32(c.r[2], c.r[2].w[0] - 27008u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A939Cu); st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003A939Cu) [[unlikely]] return; }
L_003A939C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003A93AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A93ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 124u, depth + 1u); else { c.pc = 0x003A94E0u; return; } if (c.pc != 0x003A93ACu) [[unlikely]] return; }
L_003A93AC:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A93D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003A9444; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 27008u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A941C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A941C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A941Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A941Cu) [[unlikely]] return; }
L_003A941C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A942Cu); st32((c.r[17].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_0010(c, 31u, depth + 1u); else { c.pc = 0x00140700u; return; } if (c.pc != 0x003A942Cu) [[unlikely]] return; }
L_003A942C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003A9448; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9444u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x003A9444u) [[unlikely]] return; }
L_003A9444:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003A9448:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A9460:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9484u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A9484u) [[unlikely]] return; }
L_003A9484:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 16u);  if (t) { goto L_003A94C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9494u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003A9494u) [[unlikely]] return; }
L_003A9494:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003A94A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A94A4u);  if (depth < kMaxDepth) unit_000E(c, 4u, depth + 1u); else { c.pc = 0x00138030u; return; } if (c.pc != 0x003A94A4u) [[unlikely]] return; }
L_003A94A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A94ACu);  if (depth < kMaxDepth) unit_0051(c, 4u, depth + 1u); else { c.pc = 0x00244030u; return; } if (c.pc != 0x003A94ACu) [[unlikely]] return; }
L_003A94AC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003A94C8; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A94C8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A94C8u) [[unlikely]] return; }
L_003A94C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A94E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[8].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A950Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_000B(c, 465u, depth + 1u); else { c.pc = 0x0012FE40u; return; } if (c.pc != 0x003A950Cu) [[unlikely]] return; }
L_003A950C:
    set32(c.r[4], c.r[17].w[0] + 72u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9518u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x003A9518u) [[unlikely]] return; }
L_003A9518:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 27168u);
    set32(c.r[3], c.r[3].w[0] - 27080u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 27032u);
    set32(c.r[3], 0u + 11264u);
    st32((c.r[17].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[2], 0u + 11775u);
    st16((c.r[29].w[0] + 60u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9550u); st16((c.r[29].w[0] + 62u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x003A9550u) [[unlikely]] return; }
L_003A9550:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 88u);
    set32(c.r[5], c.r[5].w[0] + 4408u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9568u); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_002A(c, 7u, depth + 1u); else { c.pc = 0x001A80E0u; return; } if (c.pc != 0x003A9568u) [[unlikely]] return; }
L_003A9568:
    set32(c.r[4], c.r[17].w[0] + 176u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9578u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0025(c, 304u, depth + 1u); else { c.pc = 0x00196C90u; return; } if (c.pc != 0x003A9578u) [[unlikely]] return; }
L_003A9578:
    set32(c.r[4], c.r[17].w[0] + 336u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9588u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_0025(c, 304u, depth + 1u); else { c.pc = 0x00196C90u; return; } if (c.pc != 0x003A9588u) [[unlikely]] return; }
L_003A9588:
    set32(c.r[4], c.r[17].w[0] + 508u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9594u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0049(c, 271u, depth + 1u); else { c.pc = 0x002275A0u; return; } if (c.pc != 0x003A9594u) [[unlikely]] return; }
L_003A9594:
    set32(c.r[4], 0u + 72u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A95A0u); st32((c.r[17].w[0] + 84u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003A95A0u) [[unlikely]] return; }
L_003A95A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003A95B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A95B0u);  if (depth < kMaxDepth) unit_0076(c, 539u, depth + 1u); else { c.pc = 0x002DBEA0u; return; } if (c.pc != 0x003A95B0u) [[unlikely]] return; }
L_003A95B0:
    st32((c.r[17].w[0] + 496u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; st32((c.r[17].w[0] + 504u), 0u);  if (t) { goto L_003A9630; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A95C4u);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x003A95C4u) [[unlikely]] return; }
L_003A95C4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 688u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A95D0u); set32(c.r[16], c.r[2].w[0] << 5);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x003A95D0u) [[unlikely]] return; }
L_003A95D0:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = ld16((c.r[2].w[0] + 266u));
    set32(c.r[3], c.r[4].w[0] - 10000u);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_003A9600; } }
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_003A95F4; } }
    breakpoint(c, 0x003A95F0u);
    c.budget -= 1;
L_003A95F4:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A9604; } }
L_003A9600:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_003A9604:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[3].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_003A9614; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 86u);  if (t) { goto L_003A9628; } }
L_003A9614:
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_003A9624; } }
    breakpoint(c, 0x003A9620u);
    c.budget -= 1;
L_003A9624:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 1;
L_003A9628:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 544u), c.r[2].w[0]);  if (t) { goto L_003A9690; } }
L_003A9630:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9638u);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x003A9638u) [[unlikely]] return; }
L_003A9638:
    c.r[4].d[0] = ld16((c.r[2].w[0] + 266u));
    set32(c.r[3], c.r[4].w[0] - 10000u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_003A9664; } }
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_003A9658; } }
    breakpoint(c, 0x003A9654u);
    c.budget -= 1;
L_003A9658:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A9668; } }
L_003A9664:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_003A9668:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[3].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_003A9678; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 86u);  if (t) { goto L_003A968C; } }
L_003A9678:
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_003A9688; } }
    breakpoint(c, 0x003A9684u);
    c.budget -= 1;
L_003A9688:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 1;
L_003A968C:
    st32((c.r[17].w[0] + 544u), c.r[2].w[0]);
    c.budget -= 1;
L_003A9690:
    set32(c.r[4], 0u + 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A969Cu); st32((c.r[17].w[0] + 548u), 0u);  if (depth < kMaxDepth) unit_0053(c, 59u, depth + 1u); else { c.pc = 0x0024C560u; return; } if (c.pc != 0x003A969Cu) [[unlikely]] return; }
L_003A969C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003A96C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003A97DC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 27168u);
    set32(c.r[3], c.r[3].w[0] - 27080u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 27032u);
    st32((c.r[17].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 496u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A9724; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A9724; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9724u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A9724u) [[unlikely]] return; }
L_003A9724:
    st32((c.r[17].w[0] + 496u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 500u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A974C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A974C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A974Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A974Cu) [[unlikely]] return; }
L_003A974C:
    st32((c.r[17].w[0] + 500u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 504u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A9774; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A9774; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9774u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A9774u) [[unlikely]] return; }
L_003A9774:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A977Cu); st32((c.r[17].w[0] + 504u), 0u);  if (depth < kMaxDepth) unit_0053(c, 75u, depth + 1u); else { c.pc = 0x0024C780u; return; } if (c.pc != 0x003A977Cu) [[unlikely]] return; }
L_003A977C:
    set32(c.r[4], c.r[17].w[0] + 508u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9788u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0049(c, 274u, depth + 1u); else { c.pc = 0x002275F0u; return; } if (c.pc != 0x003A9788u) [[unlikely]] return; }
L_003A9788:
    set32(c.r[4], c.r[17].w[0] + 336u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9794u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0025(c, 310u, depth + 1u); else { c.pc = 0x00196D20u; return; } if (c.pc != 0x003A9794u) [[unlikely]] return; }
L_003A9794:
    set32(c.r[4], c.r[17].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A97A0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0025(c, 310u, depth + 1u); else { c.pc = 0x00196D20u; return; } if (c.pc != 0x003A97A0u) [[unlikely]] return; }
L_003A97A0:
    set32(c.r[4], c.r[17].w[0] + 88u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A97ACu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002A(c, 11u, depth + 1u); else { c.pc = 0x001A8150u; return; } if (c.pc != 0x003A97ACu) [[unlikely]] return; }
L_003A97AC:
    set32(c.r[4], c.r[17].w[0] + 72u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A97B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x003A97B8u) [[unlikely]] return; }
L_003A97B8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A97C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 469u, depth + 1u); else { c.pc = 0x0012FEF0u; return; } if (c.pc != 0x003A97C4u) [[unlikely]] return; }
L_003A97C4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003A97E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A97DCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x003A97DCu) [[unlikely]] return; }
L_003A97DC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003A97E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A9800:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9818u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x003A9818u) [[unlikely]] return; }
L_003A9818:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9820u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 475u, depth + 1u); else { c.pc = 0x0012FFA0u; return; } if (c.pc != 0x003A9820u) [[unlikely]] return; }
L_003A9820:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[4], c.r[16].w[0] + 176u);
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9834u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A9834u) [[unlikely]] return; }
L_003A9834:
    set32(c.r[25], ld32((c.r[16].w[0] + 336u)));
    set32(c.r[4], c.r[16].w[0] + 336u);
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9848u); set32(c.r[5], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A9848u) [[unlikely]] return; }
L_003A9848:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00260000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 22647ull;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[1] = c.r[3].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[5], 0u + 1u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 280u), c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A987Cu); st32((c.r[16].w[0] + 440u), c.f[0]);  if (depth < kMaxDepth) unit_00AA(c, 197u, depth + 1u); else { c.pc = 0x003A9C30u; return; } if (c.pc != 0x003A987Cu) [[unlikely]] return; }
L_003A987C:
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], 0u + 10u);  if (t) { goto L_003A9890; } }
    set32(c.r[5], 0u + 11u);
    c.budget -= 1;
L_003A9890:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A989Cu); set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));  if (depth < kMaxDepth) unit_002A(c, 147u, depth + 1u); else { c.pc = 0x001A96C0u; return; } if (c.pc != 0x003A989Cu) [[unlikely]] return; }
L_003A989C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A98B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A98C8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x003A98C8u) [[unlikely]] return; }
L_003A98C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A98D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 476u, depth + 1u); else { c.pc = 0x0012FFB0u; return; } if (c.pc != 0x003A98D0u) [[unlikely]] return; }
L_003A98D0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A98DCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 197u, depth + 1u); else { c.pc = 0x003A9C30u; return; } if (c.pc != 0x003A98DCu) [[unlikely]] return; }
L_003A98DC:
    set32(c.r[4], ld32((c.r[16].w[0] + 496u)));
    set32(c.r[5], 0u + 28u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A98ECu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0077(c, 5u, depth + 1u); else { c.pc = 0x002DC050u; return; } if (c.pc != 0x003A98ECu) [[unlikely]] return; }
L_003A98EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A9900:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9918u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x003A9918u) [[unlikely]] return; }
L_003A9918:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9920u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 477u, depth + 1u); else { c.pc = 0x0012FFC0u; return; } if (c.pc != 0x003A9920u) [[unlikely]] return; }
L_003A9920:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A992Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 197u, depth + 1u); else { c.pc = 0x003A9C30u; return; } if (c.pc != 0x003A992Cu) [[unlikely]] return; }
L_003A992C:
    set32(c.r[4], ld32((c.r[16].w[0] + 496u)));
    set32(c.r[5], 0u + 28u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A993Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0077(c, 5u, depth + 1u); else { c.pc = 0x002DC050u; return; } if (c.pc != 0x003A993Cu) [[unlikely]] return; }
L_003A993C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A9950:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A996Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 78u, depth + 1u); else { c.pc = 0x0024C7C0u; return; } if (c.pc != 0x003A996Cu) [[unlikely]] return; }
L_003A996C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9978u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0053(c, 82u, depth + 1u); else { c.pc = 0x0024C840u; return; } if (c.pc != 0x003A9978u) [[unlikely]] return; }
L_003A9978:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 88u);  if (t) { goto L_003A9AC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9988u);  if (depth < kMaxDepth) unit_0029(c, 351u, depth + 1u); else { c.pc = 0x001A7FE0u; return; } if (c.pc != 0x003A9988u) [[unlikely]] return; }
L_003A9988:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A9AC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9998u);  if (depth < kMaxDepth) unit_002A(c, 135u, depth + 1u); else { c.pc = 0x001A9560u; return; } if (c.pc != 0x003A9998u) [[unlikely]] return; }
L_003A9998:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 88u);  if (t) { goto L_003A9AC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A99A8u); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x003A99A8u) [[unlikely]] return; }
L_003A99A8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 88u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A99B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x003A99B8u) [[unlikely]] return; }
L_003A99B8:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A99C8u); set32(c.r[4], c.r[16].w[0] + 176u);  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x003A99C8u) [[unlikely]] return; }
L_003A99C8:
    set32(c.r[4], c.r[16].w[0] + 88u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A99D4u); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x003A99D4u) [[unlikely]] return; }
L_003A99D4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 88u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A99E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x003A99E4u) [[unlikely]] return; }
L_003A99E4:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A99F4u); set32(c.r[4], c.r[16].w[0] + 336u);  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x003A99F4u) [[unlikely]] return; }
L_003A99F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A99FCu);  if (depth < kMaxDepth) unit_0053(c, 78u, depth + 1u); else { c.pc = 0x0024C7C0u; return; } if (c.pc != 0x003A99FCu) [[unlikely]] return; }
L_003A99FC:
    set32(c.r[7], ld32((c.r[16].w[0] + 544u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9A14u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0053(c, 87u, depth + 1u); else { c.pc = 0x0024C8E0u; return; } if (c.pc != 0x003A9A14u) [[unlikely]] return; }
L_003A9A14:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9A20u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0053(c, 90u, depth + 1u); else { c.pc = 0x0024C940u; return; } if (c.pc != 0x003A9A20u) [[unlikely]] return; }
L_003A9A20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9A28u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003A9A28u) [[unlikely]] return; }
L_003A9A28:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003A9A54; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9A40u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0053(c, 93u, depth + 1u); else { c.pc = 0x0024C9A0u; return; } if (c.pc != 0x003A9A40u) [[unlikely]] return; }
L_003A9A40:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9A50u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_00AA(c, 216u, depth + 1u); else { c.pc = 0x003A9F90u; return; } if (c.pc != 0x003A9A50u) [[unlikely]] return; }
L_003A9A50:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003A9A54:
    st32((c.r[16].w[0] + 500u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 88u);  if (t) { goto L_003A9AB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9A6Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x003A9A6Cu) [[unlikely]] return; }
L_003A9A6C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9A78u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003A9A78u) [[unlikely]] return; }
L_003A9A78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A9A90; } }
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[5].d[0] = ld64((c.r[3].w[0] + 16u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9A90u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x003A9A90u) [[unlikely]] return; }
L_003A9A90:
    st32((c.r[16].w[0] + 504u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] + 4456u));
    set32(c.r[3], ld32((c.r[16].w[0] + 504u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[3].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] + 4448u));
    st32((c.r[3].w[0] + 20u), c.f[0]);
    st32((c.r[3].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 10;
L_003A9AB8:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9AC8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A9AC8u) [[unlikely]] return; }
L_003A9AC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003A9AE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 313u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003A9B7C; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 473u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003A9B7C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9B14u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A9B14u) [[unlikely]] return; }
L_003A9B14:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[4], c.r[16].w[0] + 176u);
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9B28u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A9B28u) [[unlikely]] return; }
L_003A9B28:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00260000u);
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] | 22647ull;
    set32(c.r[4], c.r[16].w[0] + 336u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 280u), c.f[0]);
    st8((c.r[16].w[0] + 312u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[16].w[0] + 336u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9B5Cu); set32(c.r[5], 0u + 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A9B5Cu) [[unlikely]] return; }
L_003A9B5C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 440u), c.f[0]);
    st8((c.r[16].w[0] + 472u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
L_003A9B7C:
    c.f[0] = ld32((c.r[16].w[0] + 520u));
    set32(c.r[3], ld32((c.r[16].w[0] + 500u)));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    st32((c.r[3].w[0] + 16u), c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A9BB0:
    c.f[0] = ld32((c.r[4].w[0] + 520u));
    set32(c.r[3], ld32((c.r[4].w[0] + 500u)));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 16u), c.r[4].w[0]);  c.pc = t; return; }
L_003A9BD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 540u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003A9BF4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9BF4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A9BF4u) [[unlikely]] return; }
L_003A9BF4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A9C00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 540u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003A9C24; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9C24u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A9C24u) [[unlikely]] return; }
L_003A9C24:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A9C30:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003A9C68; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] + 7136u);
    set32(c.r[4], c.r[4].w[0] + 508u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9C60u); st64((c.r[5].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x003A9C60u) [[unlikely]] return; }
L_003A9C60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003A9C90; } }
L_003A9C68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[29].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] + 7168u);
    set32(c.r[4], c.r[4].w[0] + 508u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9C8Cu); st64((c.r[5].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x003A9C8Cu) [[unlikely]] return; }
L_003A9C8C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003A9C90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003A9CA0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003A9F70; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    c.f[0] = ld32((c.r[18].w[0] + 520u));
    set32(c.r[17], ld32((c.r[2].w[0] + 332u)));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 84u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { goto L_003A9D54; } }
    c.f[1] = ld32((c.r[18].w[0] + 520u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[12] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x439F0000u);
    set32(c.r[4], ld32((c.r[18].w[0] + 504u)));
    c.f[13] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[1]);
    st32((c.r[4].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 504u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 19;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9D38u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A9D38u) [[unlikely]] return; }
L_003A9D38:
    set32(c.r[4], ld32((c.r[18].w[0] + 504u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9D4Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A9D4Cu) [[unlikely]] return; }
L_003A9D4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 3u);  if (t) { goto L_003A9E34; } }
L_003A9D54:
    set32(c.r[3], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[5].w[0] + 7192u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld64((c.r[5].w[0]));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st64((c.r[3].w[0]), c.r[2].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9D74u); st32((c.r[3].w[0] + 8u), c.f[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x003A9D74u) [[unlikely]] return; }
L_003A9D74:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 48u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[17].w[0] + 52u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[1].w[0] + 4440u));
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] + 4440u));
    st32((c.r[17].w[0] + 20u), c.f[0]);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 16;
L_003A9DB4:
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9DC0u); set32(c.r[4], ld32((c.r[2].w[0] + 64u)));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x003A9DC0u) [[unlikely]] return; }
L_003A9DC0:
    st32((c.r[17].w[0] + 352u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    set32(c.r[2], c.r[16].w[0] << 3);
    st32((c.r[17].w[0] + 356u), 0u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] + 306u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.f[0] = c.r[4].w[0];
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[12] = c.r[3].w[0];
    c.f[13] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = c.r[2].w[0];
    c.budget -= 19;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9E0Cu); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A9E0Cu) [[unlikely]] return; }
L_003A9E0C:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9E20u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A9E20u) [[unlikely]] return; }
L_003A9E20:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A9DB4u | kUnwind; return; } goto L_003A9DB4; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 1;
L_003A9E34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9E3Cu);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x003A9E3Cu) [[unlikely]] return; }
L_003A9E3C:
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], 0u + 769u);
    st32((c.r[17].w[0] + 48u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[17].w[0] + 52u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[1].w[0] + 4456u));
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] + 4456u));
    st32((c.r[17].w[0] + 20u), c.f[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9E7Cu); st32((c.r[17].w[0] + 24u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x003A9E7Cu) [[unlikely]] return; }
L_003A9E7C:
    st32((c.r[17].w[0] + 352u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43B70000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    st32((c.r[17].w[0] + 356u), 0u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.f[13] = c.r[3].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9EB4u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A9EB4u) [[unlikely]] return; }
L_003A9EB4:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9EC8u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A9EC8u) [[unlikely]] return; }
L_003A9EC8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 440u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9EDCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x003A9EDCu) [[unlikely]] return; }
L_003A9EDC:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 48u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[16].w[0] + 52u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[18].w[0] + 520u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 544u)));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9F24u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012CDE0u; return; } if (c.pc != 0x003A9F24u) [[unlikely]] return; }
L_003A9F24:
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43C30000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    st32((c.r[16].w[0] + 356u), 0u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.f[13] = c.r[3].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9F5Cu); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A9F5Cu) [[unlikely]] return; }
L_003A9F5C:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9F70u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A9F70u) [[unlikely]] return; }
L_003A9F70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003A9F90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9FB0u); c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x003A9FB0u) [[unlikely]] return; }
L_003A9FB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[4], 0u + 304u);
    set32(c.r[2], c.r[2].w[0] - 27184u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9FC4u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003A9FC4u) [[unlikely]] return; }
L_003A9FC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A9FD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9FD4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 207u, depth + 1u); else { c.pc = 0x0015FE10u; return; } if (c.pc != 0x003A9FD4u) [[unlikely]] return; }
L_003A9FD4:
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.f[12] = ld32((c.r[1].w[0] + 4432u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9FECu); set32(c.r[5], 0u + 31u);  if (depth < kMaxDepth) unit_0017(c, 209u, depth + 1u); else { c.pc = 0x0015FE60u; return; } if (c.pc != 0x003A9FECu) [[unlikely]] return; }
L_003A9FEC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.f[0] = ld32((c.r[1].w[0] + 4424u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[4].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] + 4424u));
    st32((c.r[4].w[0] + 20u), c.f[0]);
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 16u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003AA030:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003AA0A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 27184u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003AA07C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003AA07C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA07Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AA07Cu) [[unlikely]] return; }
L_003AA07C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA08Cu); st32((c.r[17].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x003AA08Cu) [[unlikely]] return; }
L_003AA08C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003AA0A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA0A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x003AA0A4u) [[unlikely]] return; }
L_003AA0A4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003AA0A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003AA0C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[12] = c.r[2].w[0];
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43340000u);
    set32(c.r[6], ld32((c.r[4].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[13] = c.r[3].w[0];
    st32((c.r[5].w[0] + 60u), c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 19;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA10Cu); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AA10Cu) [[unlikely]] return; }
L_003AA10C:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA120u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AA120u) [[unlikely]] return; }
L_003AA120:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AA130:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A96C0u | kUnwind; return; } goto L_003A96C0; }
L_003AA140:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 72u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A9CA0u | kUnwind; return; } goto L_003A9CA0; }
L_003AA150:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 72u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A96C0u | kUnwind; return; } goto L_003A96C0; }
L_003AA160:
    set32(c.r[3], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] + 7208u), c.r[3].w[0]);  c.pc = t; return; }
L_003AA170:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA198u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00AA(c, 250u, depth + 1u); else { c.pc = 0x003AA330u; return; } if (c.pc != 0x003AA198u) [[unlikely]] return; }
L_003AA198:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_003AA1D8; } }
    set32(c.r[16], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA1ACu); set32(c.r[4], 0u + 136u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003AA1ACu) [[unlikely]] return; }
L_003AA1AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_003AA1C4; } }
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA1C4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 298u, depth + 1u); else { c.pc = 0x003AA970u; return; } if (c.pc != 0x003AA1C4u) [[unlikely]] return; }
L_003AA1C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003AA1D0; } }
    set32(c.r[2], c.r[2].w[0] + 8u);
    c.budget -= 1;
L_003AA1D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA1D8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x003AA1D8u) [[unlikely]] return; }
L_003AA1D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003AA200:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA210u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00AA(c, 250u, depth + 1u); else { c.pc = 0x003AA330u; return; } if (c.pc != 0x003AA210u) [[unlikely]] return; }
L_003AA210:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_003AA248; } }
    set32(c.r[16], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA224u); set32(c.r[4], 0u + 136u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003AA224u) [[unlikely]] return; }
L_003AA224:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003AA234; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA234u);  if (depth < kMaxDepth) unit_00AA(c, 303u, depth + 1u); else { c.pc = 0x003AAA40u; return; } if (c.pc != 0x003AA234u) [[unlikely]] return; }
L_003AA234:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003AA240; } }
    set32(c.r[2], c.r[2].w[0] + 8u);
    c.budget -= 1;
L_003AA240:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA248u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x003AA248u) [[unlikely]] return; }
L_003AA248:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AA260:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA288u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00AA(c, 250u, depth + 1u); else { c.pc = 0x003AA330u; return; } if (c.pc != 0x003AA288u) [[unlikely]] return; }
L_003AA288:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_003AA2C8; } }
    set32(c.r[16], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA29Cu); set32(c.r[4], 0u + 136u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003AA29Cu) [[unlikely]] return; }
L_003AA29C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_003AA2B4; } }
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA2B4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 308u, depth + 1u); else { c.pc = 0x003AAAF0u; return; } if (c.pc != 0x003AA2B4u) [[unlikely]] return; }
L_003AA2B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003AA2C0; } }
    set32(c.r[2], c.r[2].w[0] + 8u);
    c.budget -= 1;
L_003AA2C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA2C8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x003AA2C8u) [[unlikely]] return; }
L_003AA2C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003AA2F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA300u);  if (depth < kMaxDepth) unit_00AA(c, 250u, depth + 1u); else { c.pc = 0x003AA330u; return; } if (c.pc != 0x003AA300u) [[unlikely]] return; }
L_003AA300:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003AA324; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003AA324; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA324u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AA324u) [[unlikely]] return; }
L_003AA324:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003AA330:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x43520000u);  if (t) { goto L_003AA350; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003AA36C; } }
L_003AA350:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA358u); c.r[5].d[0] = c.r[2].d[0] | 21326ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x003AA358u) [[unlikely]] return; }
L_003AA358:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003AA368; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_003AA36C; } }
L_003AA368:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003AA36C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003AA380:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA390u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00AA(c, 250u, depth + 1u); else { c.pc = 0x003AA330u; return; } if (c.pc != 0x003AA390u) [[unlikely]] return; }
L_003AA390:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 48u);  if (t) { goto L_003AA3D8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003AA3D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA3B4u);  if (depth < kMaxDepth) unit_002A(c, 135u, depth + 1u); else { c.pc = 0x001A9560u; return; } if (c.pc != 0x003AA3B4u) [[unlikely]] return; }
L_003AA3B4:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003AA3CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA3CCu);  if (depth < kMaxDepth) unit_00AA(c, 237u, depth + 1u); else { c.pc = 0x003AA200u; return; } if (c.pc != 0x003AA3CCu) [[unlikely]] return; }
L_003AA3CC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003AA3D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003AA418; } }
L_003AA3D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA3E0u);  if (depth < kMaxDepth) unit_0011(c, 177u, depth + 1u); else { c.pc = 0x00146C10u; return; } if (c.pc != 0x003AA3E0u) [[unlikely]] return; }
L_003AA3E0:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 48u);  if (t) { goto L_003AA3F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA3F4u);  if (depth < kMaxDepth) unit_0011(c, 182u, depth + 1u); else { c.pc = 0x00146C90u; return; } if (c.pc != 0x003AA3F4u) [[unlikely]] return; }
L_003AA3F4:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003AA3F8:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003AA40C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003AA414; } }
L_003AA40C:
    set32(c.r[2], ld32((c.r[16].w[0] + 92u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_003AA414:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003AA418:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AA430:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA440u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00AA(c, 250u, depth + 1u); else { c.pc = 0x003AA330u; return; } if (c.pc != 0x003AA440u) [[unlikely]] return; }
L_003AA440:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 48u);  if (t) { goto L_003AA454; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003AA484; } }
L_003AA454:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA45Cu);  if (depth < kMaxDepth) unit_0011(c, 177u, depth + 1u); else { c.pc = 0x00146C10u; return; } if (c.pc != 0x003AA45Cu) [[unlikely]] return; }
L_003AA45C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 48u);  if (t) { goto L_003AA47C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA46Cu);  if (depth < kMaxDepth) unit_0011(c, 182u, depth + 1u); else { c.pc = 0x00146C90u; return; } if (c.pc != 0x003AA46Cu) [[unlikely]] return; }
L_003AA46C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003AA47C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 96u)));  if (t) { goto L_003AA484; } }
L_003AA47C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003AA484; } }
L_003AA484:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AA4A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA4B0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00AA(c, 250u, depth + 1u); else { c.pc = 0x003AA330u; return; } if (c.pc != 0x003AA4B0u) [[unlikely]] return; }
L_003AA4B0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 48u);  if (t) { goto L_003AA4C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003AA4F4; } }
L_003AA4C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA4CCu);  if (depth < kMaxDepth) unit_0011(c, 177u, depth + 1u); else { c.pc = 0x00146C10u; return; } if (c.pc != 0x003AA4CCu) [[unlikely]] return; }
L_003AA4CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 48u);  if (t) { goto L_003AA4EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA4DCu);  if (depth < kMaxDepth) unit_0011(c, 182u, depth + 1u); else { c.pc = 0x00146C90u; return; } if (c.pc != 0x003AA4DCu) [[unlikely]] return; }
L_003AA4DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003AA4EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 100u)));  if (t) { goto L_003AA4F4; } }
L_003AA4EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003AA4F4; } }
L_003AA4F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AA510:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA520u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00AA(c, 250u, depth + 1u); else { c.pc = 0x003AA330u; return; } if (c.pc != 0x003AA520u) [[unlikely]] return; }
L_003AA520:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 48u);  if (t) { goto L_003AA534; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003AA564; } }
L_003AA534:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA53Cu);  if (depth < kMaxDepth) unit_0011(c, 177u, depth + 1u); else { c.pc = 0x00146C10u; return; } if (c.pc != 0x003AA53Cu) [[unlikely]] return; }
L_003AA53C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 48u);  if (t) { goto L_003AA55C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA54Cu);  if (depth < kMaxDepth) unit_0011(c, 182u, depth + 1u); else { c.pc = 0x00146C90u; return; } if (c.pc != 0x003AA54Cu) [[unlikely]] return; }
L_003AA54C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003AA55C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 104u)));  if (t) { goto L_003AA564; } }
L_003AA55C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003AA564; } }
L_003AA564:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AA580:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA598u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00AA(c, 250u, depth + 1u); else { c.pc = 0x003AA330u; return; } if (c.pc != 0x003AA598u) [[unlikely]] return; }
L_003AA598:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003AA5A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003AA620; } }
L_003AA5A8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 48u);  if (t) { goto L_003AA5B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003AA620; } }
L_003AA5B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA5C0u);  if (depth < kMaxDepth) unit_0011(c, 177u, depth + 1u); else { c.pc = 0x00146C10u; return; } if (c.pc != 0x003AA5C0u) [[unlikely]] return; }
L_003AA5C0:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 48u);  if (t) { goto L_003AA5D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA5D4u);  if (depth < kMaxDepth) unit_0011(c, 182u, depth + 1u); else { c.pc = 0x00146C90u; return; } if (c.pc != 0x003AA5D4u) [[unlikely]] return; }
L_003AA5D4:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003AA5D8:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003AA5EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003AA620; } }
L_003AA5EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 96u)));  if (t) { goto L_003AA614; } }
L_003AA5F4:
    set32(c.r[3], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[17].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 8;
L_003AA614:
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AA5F4u | kUnwind; return; } goto L_003AA5F4; } }
L_003AA620:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003AA640:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA660u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00AA(c, 250u, depth + 1u); else { c.pc = 0x003AA330u; return; } if (c.pc != 0x003AA660u) [[unlikely]] return; }
L_003AA660:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003AA670; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003AA6EC; } }
L_003AA670:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 48u);  if (t) { goto L_003AA680; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003AA6EC; } }
L_003AA680:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA688u);  if (depth < kMaxDepth) unit_0011(c, 177u, depth + 1u); else { c.pc = 0x00146C10u; return; } if (c.pc != 0x003AA688u) [[unlikely]] return; }
L_003AA688:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 48u);  if (t) { goto L_003AA6A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA69Cu);  if (depth < kMaxDepth) unit_0011(c, 182u, depth + 1u); else { c.pc = 0x00146C90u; return; } if (c.pc != 0x003AA69Cu) [[unlikely]] return; }
L_003AA69C:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003AA6A0:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003AA6B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003AA6EC; } }
L_003AA6B4:
    set32(c.r[16], ld32((c.r[16].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003AA6C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003AA6EC; } }
L_003AA6C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA6D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x003AA6D0u) [[unlikely]] return; }
L_003AA6D0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003AA6E8; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA6E8u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 147u, depth + 1u); else { c.pc = 0x0015DBB0u; return; } if (c.pc != 0x003AA6E8u) [[unlikely]] return; }
L_003AA6E8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003AA6EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003AA710:
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
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA744u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00AA(c, 250u, depth + 1u); else { c.pc = 0x003AA330u; return; } if (c.pc != 0x003AA744u) [[unlikely]] return; }
L_003AA744:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] > 0; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003AA754; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003AA820; } }
L_003AA754:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003AA764; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_003AA824; } }
L_003AA764:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003AA774; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AA820; } }
L_003AA774:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; set32(c.r[4], c.r[19].w[0] + 48u);  if (t) { goto L_003AA784; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003AA820; } }
L_003AA784:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA78Cu);  if (depth < kMaxDepth) unit_0011(c, 177u, depth + 1u); else { c.pc = 0x00146C10u; return; } if (c.pc != 0x003AA78Cu) [[unlikely]] return; }
L_003AA78C:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[19].w[0] + 48u);  if (t) { goto L_003AA7A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA7A0u);  if (depth < kMaxDepth) unit_0011(c, 182u, depth + 1u); else { c.pc = 0x00146C90u; return; } if (c.pc != 0x003AA7A0u) [[unlikely]] return; }
L_003AA7A0:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003AA7A4:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003AA7B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003AA820; } }
L_003AA7B8:
    set32(c.r[2], ld32((c.r[19].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003AA7CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003AA820; } }
L_003AA7CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;  if (t) { goto L_003AA814; } }
L_003AA7D4:
    set32(c.r[17], ld32((c.r[19].w[0] + 92u)));
    set32(c.r[3], c.r[22].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[18].w[0] << 1);
    set32(c.r[16], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA7F4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x003AA7F4u) [[unlikely]] return; }
L_003AA7F4:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003AA80C; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA80Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 147u, depth + 1u); else { c.pc = 0x0015DBB0u; return; } if (c.pc != 0x003AA80Cu) [[unlikely]] return; }
L_003AA80C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 2;
L_003AA814:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[18].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AA7D4u | kUnwind; return; } goto L_003AA7D4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003AA820:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_003AA824:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003AA850:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].sd[0] < 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003AA880; } }
    c.r[2].d[0] = c.r[16].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003AA888; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003AA880:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003AA958; } }
L_003AA888:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA890u);  if (depth < kMaxDepth) unit_00AA(c, 252u, depth + 1u); else { c.pc = 0x003AA380u; return; } if (c.pc != 0x003AA890u) [[unlikely]] return; }
L_003AA890:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[3], c.r[16].w[0] << 3);  if (t) { goto L_003AA8F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[5], c.r[3].w[0] - c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + 8384u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] << 9);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA8C8u); set32(c.r[17], c.r[4].w[0] << 5);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x003AA8C8u) [[unlikely]] return; }
L_003AA8C8:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[5].d[0] = ld16((c.r[2].w[0] + 1112u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA8D8u); set32(c.r[4], c.r[16].w[0] + 884u);  if (depth < kMaxDepth) unit_00AA(c, 275u, depth + 1u); else { c.pc = 0x003AA640u; return; } if (c.pc != 0x003AA8D8u) [[unlikely]] return; }
L_003AA8D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA8E0u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x003AA8E0u) [[unlikely]] return; }
L_003AA8E0:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[5].d[0] = ld16((c.r[2].w[0] + 1114u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA8F0u); set32(c.r[4], c.r[16].w[0] + 3188u);  if (depth < kMaxDepth) unit_00AA(c, 275u, depth + 1u); else { c.pc = 0x003AA640u; return; } if (c.pc != 0x003AA8F0u) [[unlikely]] return; }
L_003AA8F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003AA954; } }
L_003AA8F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA900u);  if (depth < kMaxDepth) unit_00AA(c, 247u, depth + 1u); else { c.pc = 0x003AA2F0u; return; } if (c.pc != 0x003AA900u) [[unlikely]] return; }
L_003AA900:
    set32(c.r[2], c.r[16].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA918u); set32(c.r[18], c.r[2].w[0] << 5);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x003AA918u) [[unlikely]] return; }
L_003AA918:
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA924u); c.r[17].d[0] = ld16((c.r[2].w[0] + 1112u));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x003AA924u) [[unlikely]] return; }
L_003AA924:
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = ld16((c.r[2].w[0] + 1114u));
    set32(c.r[2], c.r[16].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] << 9);
    set32(c.r[2], c.r[2].w[0] + 8384u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA950u); set32(c.r[4], c.r[2].w[0] + 884u);  if (depth < kMaxDepth) unit_00AA(c, 232u, depth + 1u); else { c.pc = 0x003AA170u; return; } if (c.pc != 0x003AA950u) [[unlikely]] return; }
L_003AA950:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003AA954:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003AA958:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003AA970:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA9A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 256u, depth + 1u); else { c.pc = 0x0013E440u; return; } if (c.pc != 0x003AA9A0u) [[unlikely]] return; }
L_003AA9A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43520000u);
    set32(c.r[4], c.r[19].w[0] + 8u);
    c.r[5].d[0] = c.r[2].d[0] | 21326ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA9B4u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013C370u; return; } if (c.pc != 0x003AA9B4u) [[unlikely]] return; }
L_003AA9B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA9BCu);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x003AA9BCu) [[unlikely]] return; }
L_003AA9BC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[19].w[0] + 40u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA9D0u); set32(c.r[5], c.r[5].w[0] + 4464u);  if (depth < kMaxDepth) unit_0012(c, 115u, depth + 1u); else { c.pc = 0x00148E50u; return; } if (c.pc != 0x003AA9D0u) [[unlikely]] return; }
L_003AA9D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 26960u);
    set32(c.r[2], c.r[2].w[0] - 26944u);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[19].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 26928u);
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[19].w[0] + 40u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 88u), 0u);
    st32((c.r[19].w[0] + 92u), 0u);
    st32((c.r[19].w[0] + 108u), c.r[18].w[0]);
    st16((c.r[19].w[0] + 112u), static_cast<std::uint16_t>(c.r[17].w[0]));
    st16((c.r[19].w[0] + 114u), static_cast<std::uint16_t>(c.r[16].w[0]));
    st32((c.r[19].w[0] + 116u), 0u);
    st32((c.r[19].w[0] + 120u), 0u);
    st32((c.r[19].w[0] + 124u), 0u);
    st32((c.r[19].w[0] + 128u), 0u);
    st32((c.r[1].w[0] + 7208u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 28;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003AAA40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AAA58u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 256u, depth + 1u); else { c.pc = 0x0013E440u; return; } if (c.pc != 0x003AAA58u) [[unlikely]] return; }
L_003AAA58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43520000u);
    set32(c.r[4], c.r[16].w[0] + 8u);
    c.r[5].d[0] = c.r[2].d[0] | 21326ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AAA6Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013C370u; return; } if (c.pc != 0x003AAA6Cu) [[unlikely]] return; }
L_003AAA6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AAA74u);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x003AAA74u) [[unlikely]] return; }
L_003AAA74:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 40u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AAA88u); set32(c.r[5], c.r[5].w[0] + 4464u);  if (depth < kMaxDepth) unit_0012(c, 115u, depth + 1u); else { c.pc = 0x00148E50u; return; } if (c.pc != 0x003AAA88u) [[unlikely]] return; }
L_003AAA88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 26960u);
    set32(c.r[3], c.r[3].w[0] - 26944u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[16].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 26928u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 88u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 92u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    st16((c.r[16].w[0] + 112u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 114u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 116u), 0u);
    st32((c.r[16].w[0] + 120u), 0u);
    st32((c.r[16].w[0] + 124u), 0u);
    st32((c.r[16].w[0] + 128u), 0u);
    st32((c.r[1].w[0] + 7208u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 26;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AAAF0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AAB20u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 256u, depth + 1u); else { c.pc = 0x0013E440u; return; } if (c.pc != 0x003AAB20u) [[unlikely]] return; }
L_003AAB20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43520000u);
    set32(c.r[4], c.r[19].w[0] + 8u);
    c.r[5].d[0] = c.r[2].d[0] | 21326ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AAB34u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013C370u; return; } if (c.pc != 0x003AAB34u) [[unlikely]] return; }
L_003AAB34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AAB3Cu);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x003AAB3Cu) [[unlikely]] return; }
L_003AAB3C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[19].w[0] + 40u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AAB50u); set32(c.r[5], c.r[5].w[0] + 4464u);  if (depth < kMaxDepth) unit_0012(c, 115u, depth + 1u); else { c.pc = 0x00148E50u; return; } if (c.pc != 0x003AAB50u) [[unlikely]] return; }
L_003AAB50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 26960u);
    set32(c.r[3], c.r[3].w[0] - 26944u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[19].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 26928u);
    set32(c.r[3], 0u + 2u);
    st32((c.r[19].w[0] + 40u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 88u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[19].w[0] + 92u), 0u);
    st32((c.r[19].w[0] + 108u), 0u);
    st16((c.r[19].w[0] + 112u), static_cast<std::uint16_t>(0u));
    st16((c.r[19].w[0] + 114u), static_cast<std::uint16_t>(0u));
    st32((c.r[19].w[0] + 116u), c.r[18].w[0]);
    st32((c.r[19].w[0] + 120u), c.r[17].w[0]);
    st32((c.r[19].w[0] + 124u), c.r[16].w[0]);
    st32((c.r[19].w[0] + 128u), 0u);
    st32((c.r[1].w[0] + 7208u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 29;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003AABD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003AAC7C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 26960u);
    set32(c.r[3], c.r[3].w[0] - 26944u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[17].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 26928u);
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 92u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_003AAC24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AAC24u);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x003AAC24u) [[unlikely]] return; }
L_003AAC24:
    st32((c.r[17].w[0] + 92u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 128u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003AAC3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AAC3Cu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x003AAC3Cu) [[unlikely]] return; }
L_003AAC3C:
    set32(c.r[4], c.r[17].w[0] + 40u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AAC4Cu); st32((c.r[17].w[0] + 128u), 0u);  if (depth < kMaxDepth) unit_0012(c, 118u, depth + 1u); else { c.pc = 0x00148EC0u; return; } if (c.pc != 0x003AAC4Cu) [[unlikely]] return; }
L_003AAC4C:
    set32(c.r[4], c.r[17].w[0] + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AAC58u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x003AAC58u) [[unlikely]] return; }
L_003AAC58:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AAC64u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E490u; return; } if (c.pc != 0x003AAC64u) [[unlikely]] return; }
L_003AAC64:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003AAC80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AAC7Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x003AAC7Cu) [[unlikely]] return; }
L_003AAC7C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003AAC80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003AACA0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AACD0u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0017(c, 125u, depth + 1u); else { c.pc = 0x0015D850u; return; } if (c.pc != 0x003AACD0u) [[unlikely]] return; }
L_003AACD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AACD8u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003AACD8u) [[unlikely]] return; }
L_003AACD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003AACF0; } }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AACF0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 125u, depth + 1u); else { c.pc = 0x0015D850u; return; } if (c.pc != 0x003AACF0u) [[unlikely]] return; }
L_003AACF0:
    st32((c.r[17].w[0] + 92u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 80u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20430000u);
    c.r[2].d[0] = c.r[2].d[0] | 16720ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003AAD14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[4].w[0] + 4u)));  if (t) { goto L_003AAD18; } }
L_003AAD14:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003AAD18:
    st32((c.r[17].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AAD28u); set32(c.r[4], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x003AAD28u) [[unlikely]] return; }
L_003AAD28:
    st32((c.r[17].w[0] + 128u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003AAD50; } }
L_003AAD34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AAD3Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 141u, depth + 1u); else { c.pc = 0x0015DA30u; return; } if (c.pc != 0x003AAD3Cu) [[unlikely]] return; }
L_003AAD3C:
    set32(c.r[3], ld32((c.r[17].w[0] + 128u)));
    set32(c.r[4], c.r[16].w[0] << 1);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
L_003AAD50:
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 80u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AAD34u | kUnwind; return; } goto L_003AAD34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003AAD84; } }
L_003AAD68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AAD70u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 141u, depth + 1u); else { c.pc = 0x0015DA30u; return; } if (c.pc != 0x003AAD70u) [[unlikely]] return; }
L_003AAD70:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], 0u + 1000u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003AAD94; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_003AAD84:
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 80u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AAD68u | kUnwind; return; } goto L_003AAD68; } }
L_003AAD94:
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    c.r[1].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003AADAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), c.r[16].w[0]);  if (t) { goto L_003AADB0; } }
L_003AADAC:
    st32((c.r[17].w[0] + 100u), 0u);
    c.budget -= 1;
L_003AADB0:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[17].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003AAE2C; } }
    c.r[5].d[0] = ld16((c.r[17].w[0] + 112u));
    set32(c.r[16], ld32((c.r[17].w[0] + 108u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AADDCu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x003AADDCu) [[unlikely]] return; }
L_003AADDC:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003AADF4; } }
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AADF4u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0017(c, 147u, depth + 1u); else { c.pc = 0x0015DBB0u; return; } if (c.pc != 0x003AADF4u) [[unlikely]] return; }
L_003AADF4:
    set32(c.r[2], ld32((c.r[17].w[0] + 108u)));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[5].d[0] = ld16((c.r[17].w[0] + 114u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AAE08u); set32(c.r[16], c.r[2].w[0] + 2304u);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x003AAE08u) [[unlikely]] return; }
L_003AAE08:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 80u);  if (t) { goto L_003AB0C8; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AAE24u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0017(c, 147u, depth + 1u); else { c.pc = 0x0015DBB0u; return; } if (c.pc != 0x003AAE24u) [[unlikely]] return; }
L_003AAE24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AB0C4; } }
L_003AAE2C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[16], 0u + 86u);  if (t) { goto L_003AAEFC; } }
    set32(c.r[2], c.r[16].w[0] << 3);
    c.budget -= 1;
L_003AAE38:
    set32(c.r[3], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AAE4Cu); set32(c.r[17], c.r[2].w[0] << 5);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x003AAE4Cu) [[unlikely]] return; }
L_003AAE4C:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AAE60u); c.r[18].d[0] = ld16((c.r[1].w[0] - 29672u));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x003AAE60u) [[unlikely]] return; }
L_003AAE60:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[3], c.r[16].w[0] - 86u);
    c.r[17].d[0] = ld16((c.r[1].w[0] - 29670u));
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AAE84u); set32(c.r[19], c.r[2].w[0] << 9);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x003AAE84u) [[unlikely]] return; }
L_003AAE84:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[18], c.r[2].w[0] + 884u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AAE98u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x003AAE98u) [[unlikely]] return; }
L_003AAE98:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003AAEB0; } }
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AAEB0u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0017(c, 147u, depth + 1u); else { c.pc = 0x0015DBB0u; return; } if (c.pc != 0x003AAEB0u) [[unlikely]] return; }
L_003AAEB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AAEB8u);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x003AAEB8u) [[unlikely]] return; }
L_003AAEB8:
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], c.r[2].w[0] + 3188u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AAECCu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x003AAECCu) [[unlikely]] return; }
L_003AAECC:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003AAEE4; } }
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AAEE4u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0017(c, 147u, depth + 1u); else { c.pc = 0x0015DBB0u; return; } if (c.pc != 0x003AAEE4u) [[unlikely]] return; }
L_003AAEE4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(118ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 3);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AAE38u | kUnwind; return; } goto L_003AAE38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AB0C4; } }
L_003AAEFC:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003AAF6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 124u)));  if (t) { goto L_003AAF58; } }
L_003AAF10:
    set32(c.r[5], ld32((c.r[17].w[0] + 116u)));
    set32(c.r[6], c.r[16].w[0] << 2);
    set32(c.r[2], ld32((c.r[17].w[0] + 120u)));
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[18], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AAF38u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x003AAF38u) [[unlikely]] return; }
L_003AAF38:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003AAF50; } }
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AAF50u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0017(c, 147u, depth + 1u); else { c.pc = 0x0015DBB0u; return; } if (c.pc != 0x003AAF50u) [[unlikely]] return; }
L_003AAF50:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 2;
L_003AAF58:
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AAF10u | kUnwind; return; } goto L_003AAF10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AB0C4; } }
L_003AAF6C:
    set32(c.r[2], ld32((c.r[17].w[0] + 116u)));
    c.r[5].d[0] = ld16((c.r[17].w[0] + 112u));
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AAF80u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x003AAF80u) [[unlikely]] return; }
L_003AAF80:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003AAFA0; } }
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AAF98u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 147u, depth + 1u); else { c.pc = 0x0015DBB0u; return; } if (c.pc != 0x003AAF98u) [[unlikely]] return; }
L_003AAF98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_003AAFA8; } }
L_003AAFA0:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 2;
L_003AAFA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003AAFE8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 128u)));
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    st16((c.r[17].w[0] + 112u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 116u)));
    c.r[5].d[0] = ld16((c.r[17].w[0] + 112u));
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AAFD0u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x003AAFD0u) [[unlikely]] return; }
L_003AAFD0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003AAFE8; } }
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AAFE8u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0017(c, 147u, depth + 1u); else { c.pc = 0x0015DBB0u; return; } if (c.pc != 0x003AAFE8u) [[unlikely]] return; }
L_003AAFE8:
    set32(c.r[2], ld32((c.r[17].w[0] + 116u)));
    c.r[5].d[0] = ld16((c.r[17].w[0] + 114u));
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AAFFCu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x003AAFFCu) [[unlikely]] return; }
L_003AAFFC:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003AB01C; } }
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB014u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 147u, depth + 1u); else { c.pc = 0x0015DBB0u; return; } if (c.pc != 0x003AB014u) [[unlikely]] return; }
L_003AB014:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_003AB024; } }
L_003AB01C:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 2;
L_003AB024:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], 0u + 2u);  if (t) { goto L_003AB068; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 128u)));
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    st16((c.r[17].w[0] + 114u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 116u)));
    c.r[5].d[0] = ld16((c.r[17].w[0] + 114u));
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB04Cu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x003AB04Cu) [[unlikely]] return; }
L_003AB04C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003AB064; } }
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB064u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0017(c, 147u, depth + 1u); else { c.pc = 0x0015DBB0u; return; } if (c.pc != 0x003AB064u) [[unlikely]] return; }
L_003AB064:
    set32(c.r[16], 0u + 2u);
    c.budget -= 1;
L_003AB068:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 124u)));  if (t) { goto L_003AB0B8; } }
L_003AB070:
    set32(c.r[5], ld32((c.r[17].w[0] + 116u)));
    set32(c.r[6], c.r[16].w[0] << 2);
    set32(c.r[2], ld32((c.r[17].w[0] + 128u)));
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[18], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = ld16((c.r[2].w[0] - 4u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB098u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x003AB098u) [[unlikely]] return; }
L_003AB098:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003AB0B0; } }
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB0B0u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0017(c, 147u, depth + 1u); else { c.pc = 0x0015DBB0u; return; } if (c.pc != 0x003AB0B0u) [[unlikely]] return; }
L_003AB0B0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 2;
L_003AB0B8:
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AB070u | kUnwind; return; } goto L_003AB070; } }
L_003AB0C4:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 1;
L_003AB0C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB0D0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x003AB0D0u) [[unlikely]] return; }
L_003AB0D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003AB0F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u + 4u);
    set32(c.r[4], ld32((c.r[1].w[0] + 7208u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_003AB140; } }
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AB140; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB120u);  if (depth < kMaxDepth) unit_002A(c, 135u, depth + 1u); else { c.pc = 0x001A9560u; return; } if (c.pc != 0x003AB120u) [[unlikely]] return; }
L_003AB120:
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003AB140; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB138u);  if (depth < kMaxDepth) unit_00AA(c, 247u, depth + 1u); else { c.pc = 0x003AA2F0u; return; } if (c.pc != 0x003AB138u) [[unlikely]] return; }
L_003AB138:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB140u);  if (depth < kMaxDepth) unit_00AA(c, 237u, depth + 1u); else { c.pc = 0x003AA200u; return; } if (c.pc != 0x003AB140u) [[unlikely]] return; }
L_003AB140:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003AB150:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AABD0u | kUnwind; return; } goto L_003AABD0; }
L_003AB160:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AACA0u | kUnwind; return; } goto L_003AACA0; }
L_003AB170:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AABD0u | kUnwind; return; } goto L_003AABD0; }
L_003AB180:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB194u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 39u, depth + 1u); else { c.pc = 0x001486F0u; return; } if (c.pc != 0x003AB194u) [[unlikely]] return; }
L_003AB194:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] - 26688u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB1A8u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0017(c, 177u, depth + 1u); else { c.pc = 0x0015E070u; return; } if (c.pc != 0x003AB1A8u) [[unlikely]] return; }
L_003AB1A8:
    set32(c.r[4], c.r[16].w[0] + 288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB1B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x003AB1B4u) [[unlikely]] return; }
L_003AB1B4:
    st32((c.r[16].w[0] + 576u), 0u);
    set32(c.r[4], 0u + 3u);
    st32((c.r[16].w[0] + 580u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42000000u);
    st32((c.r[16].w[0] + 584u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 588u), 0u);
    st32((c.r[16].w[0] + 592u), c.r[4].w[0]);
    st8((c.r[16].w[0] + 596u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 192u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 196u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AB1F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003AB29C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 26688u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 576u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003AB23C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003AB23C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 72u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB23Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AB23Cu) [[unlikely]] return; }
L_003AB23C:
    set32(c.r[4], c.r[17].w[0] + 288u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0] + 576u), 0u);  if (t) { goto L_003AB25C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 17536u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB25Cu); st32((c.r[17].w[0] + 464u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 264u, depth + 1u); else { c.pc = 0x0014ADA0u; return; } if (c.pc != 0x003AB25Cu) [[unlikely]] return; }
L_003AB25C:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);  if (t) { goto L_003AB278; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 17408u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB278u); st32((c.r[17].w[0] + 208u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 264u, depth + 1u); else { c.pc = 0x0014ADA0u; return; } if (c.pc != 0x003AB278u) [[unlikely]] return; }
L_003AB278:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB284u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 42u, depth + 1u); else { c.pc = 0x00148750u; return; } if (c.pc != 0x003AB284u) [[unlikely]] return; }
L_003AB284:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003AB2A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB29Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x003AB29Cu) [[unlikely]] return; }
L_003AB29C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003AB2A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003AB2C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[4].w[0] + 80u) & ~15u, c.r[2]);
    set32(c.r[25], ld32((c.r[16].w[0] + 208u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB2E8u); set32(c.r[4], c.r[16].w[0] + 32u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AB2E8u) [[unlikely]] return; }
L_003AB2E8:
    set32(c.r[4], ld32((c.r[16].w[0] + 592u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003AB314; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 596u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AB314; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 464u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB314u); set32(c.r[4], c.r[16].w[0] + 288u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AB314u) [[unlikely]] return; }
L_003AB314:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AB330:
    st32((c.r[4].w[0] + 584u), c.r[6].w[0]);
    c.budget -= 3;
    { st32((c.r[4].w[0] + 588u), c.r[5].w[0]);  goto L_003AB3A0; }
L_003AB340:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[4].w[0] + 560u) & ~15u, c.r[2]);
    set32(c.r[25], ld32((c.r[17].w[0] + 208u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB370u); set32(c.r[4], c.r[17].w[0] + 32u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AB370u) [[unlikely]] return; }
L_003AB370:
    set32(c.r[25], ld32((c.r[17].w[0] + 464u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB384u); set32(c.r[4], c.r[17].w[0] + 288u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AB384u) [[unlikely]] return; }
L_003AB384:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003AB3A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 588u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB3BCu); set32(c.r[4], ld32((c.r[4].w[0] + 584u)));  if (depth < kMaxDepth) unit_0028(c, 221u, depth + 1u); else { c.pc = 0x001A2130u; return; } if (c.pc != 0x003AB3BCu) [[unlikely]] return; }
L_003AB3BC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB3CCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 45u, depth + 1u); else { c.pc = 0x001487B0u; return; } if (c.pc != 0x003AB3CCu) [[unlikely]] return; }
L_003AB3CC:
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 592u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AB3F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB40Cu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0017(c, 125u, depth + 1u); else { c.pc = 0x0015D850u; return; } if (c.pc != 0x003AB40Cu) [[unlikely]] return; }
L_003AB40C:
    set32(c.r[2], ld32((c.r[16].w[0] + 576u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 80u);  if (t) { goto L_003AB434; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB420u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003AB420u) [[unlikely]] return; }
L_003AB420:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003AB430; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB430u);  if (depth < kMaxDepth) unit_0012(c, 130u, depth + 1u); else { c.pc = 0x00149000u; return; } if (c.pc != 0x003AB430u) [[unlikely]] return; }
L_003AB430:
    st32((c.r[16].w[0] + 576u), c.r[2].w[0]);
    c.budget -= 1;
L_003AB434:
    set32(c.r[4], ld32((c.r[16].w[0] + 576u)));
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB444u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 145u, depth + 1u); else { c.pc = 0x001491D0u; return; } if (c.pc != 0x003AB444u) [[unlikely]] return; }
L_003AB444:
    set32(c.r[5], ld32((c.r[16].w[0] + 580u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 576u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB458u); set32(c.r[6], c.r[5].w[0] + 4u);  if (depth < kMaxDepth) unit_0012(c, 153u, depth + 1u); else { c.pc = 0x001492C0u; return; } if (c.pc != 0x003AB458u) [[unlikely]] return; }
L_003AB458:
    set32(c.r[12], ld32((c.r[16].w[0] + 576u)));
    c.r[3].d[0] = 0ull & 3ull;
    set32(c.r[8], c.r[3].w[0] << 3);
    set32(c.r[9], 0u - 5u);
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    set32(c.r[7], 0u - 25u);
    set32(c.r[3], c.r[29].w[0] + 40u);
    set32(c.r[6], c.r[29].w[0] + 32u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 288u);
    c.r[11].d[0] = ld8((c.r[12].w[0] + 4u));
    c.r[9].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st8((c.r[12].w[0] + 4u), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[10], ld32((c.r[16].w[0] + 576u)));
    c.r[9].d[0] = ld8((c.r[10].w[0] + 4u));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[10].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[7], ld32((c.r[16].w[0] + 576u)));
    c.r[7].d[0] = ld64((c.r[7].w[0]));
    st64((c.r[29].w[0] + 40u), c.r[7].d[0]);
    st64((c.r[16].w[0] + 544u), c.r[7].d[0]);
    c.r[3].d[0] = ld64((c.r[3].w[0]));
    st64((c.r[6].w[0]), c.r[3].d[0]);
    c.r[3].d[0] = ld8((c.r[29].w[0] + 35u));
    c.r[3].d[0] = c.r[3].d[0] << 58;
    c.r[3].d[0] = c.r[3].d[0] >> 60;
    set32(c.r[3], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 448u), c.f[0]);
    c.r[3].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[3].d[0] = c.r[3].d[0] << 30;
    c.r[3].d[0] = c.r[3].d[0] >> 60;
    set32(c.r[2], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 452u), c.f[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 464u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 45;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB50Cu); set32(c.r[5], c.r[16].w[0] + 560u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AB50Cu) [[unlikely]] return; }
L_003AB50C:
    set32(c.r[2], 0u + 2u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    st32((c.r[16].w[0] + 592u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB520u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x003AB520u) [[unlikely]] return; }
L_003AB520:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003AB530:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB55Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000B(c, 298u, depth + 1u); else { c.pc = 0x0012E440u; return; } if (c.pc != 0x003AB55Cu) [[unlikely]] return; }
L_003AB55C:
    set32(c.r[4], c.r[19].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB568u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x003AB568u) [[unlikely]] return; }
L_003AB568:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 26800u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[2], c.r[2].w[0] - 26712u);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[19].w[0] + 32u);
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 20096u);
    set32(c.r[6], c.r[6].w[0] - 19984u);
    set32(c.r[7], 0u + 608u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB5A0u); set32(c.r[8], 0u + 30u);  if (depth < kMaxDepth) unit_0000(c, 89u, depth + 1u); else { c.pc = 0x00100790u; return; } if (c.pc != 0x003AB5A0u) [[unlikely]] return; }
L_003AB5A0:
    set32(c.r[4], c.r[19].w[0] + 18272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB5ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 159u, depth + 1u); else { c.pc = 0x00389750u; return; } if (c.pc != 0x003AB5ACu) [[unlikely]] return; }
L_003AB5AC:
    set32(c.r[4], c.r[19].w[0] + 18512u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 5u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB5C0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002A(c, 346u, depth + 1u); else { c.pc = 0x001ABAD0u; return; } if (c.pc != 0x003AB5C0u) [[unlikely]] return; }
L_003AB5C0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[19].w[0] + 18864u);
    set32(c.r[5], c.r[5].w[0] + 7216u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB5D4u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_00A1(c, 155u, depth + 1u); else { c.pc = 0x00385B50u; return; } if (c.pc != 0x003AB5D4u) [[unlikely]] return; }
L_003AB5D4:
    set32(c.r[4], c.r[19].w[0] + 18992u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB5E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 271u, depth + 1u); else { c.pc = 0x002275A0u; return; } if (c.pc != 0x003AB5E0u) [[unlikely]] return; }
L_003AB5E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB5E8u); set32(c.r[4], 0u + 9u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x003AB5E8u) [[unlikely]] return; }
L_003AB5E8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB5F4u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x003AB5F4u) [[unlikely]] return; }
L_003AB5F4:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB600u); set32(c.r[4], 0u + 9u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x003AB600u) [[unlikely]] return; }
L_003AB600:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB60Cu); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x003AB60Cu) [[unlikely]] return; }
L_003AB60C:
    ld128((c.r[20].w[0]) & ~15u, c.r[8]);
    set32(c.r[7], 0u + 30u);
    set32(c.r[6], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x42A80000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43AA0000u);
    st128((c.r[19].w[0] + 19056u) & ~15u, c.r[8]);
    ld128((c.r[16].w[0]) & ~15u, c.r[8]);
    st128((c.r[19].w[0] + 19072u) & ~15u, c.r[8]);
    st32((c.r[19].w[0] + 19108u), c.r[7].w[0]);
    st32((c.r[19].w[0] + 19104u), 0u);
    st32((c.r[19].w[0] + 19116u), 0u);
    st8((c.r[19].w[0] + 19112u), static_cast<std::uint8_t>(0u));
    ld128((c.r[19].w[0] + 19056u) & ~15u, c.r[7]);
    st128((c.r[19].w[0] + 19088u) & ~15u, c.r[7]);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[19].w[0] + 19120u) & ~15u, c.r[2]);
    ld128((c.r[17].w[0]) & ~15u, c.r[2]);
    st128((c.r[19].w[0] + 19136u) & ~15u, c.r[2]);
    st32((c.r[19].w[0] + 19152u), c.r[6].w[0]);
    st32((c.r[19].w[0] + 19168u), 0u);
    st32((c.r[19].w[0] + 19172u), c.r[18].w[0]);
    st32((c.r[19].w[0] + 19176u), 0u);
    st32((c.r[19].w[0] + 19180u), 0u);
    st32((c.r[19].w[0] + 19184u), 0u);
    st32((c.r[19].w[0] + 19188u), 0u);
    st32((c.r[19].w[0] + 19192u), 0u);
    st32((c.r[19].w[0] + 19196u), 0u);
    st32((c.r[19].w[0] + 19200u), 0u);
    st8((c.r[19].w[0] + 19204u), static_cast<std::uint8_t>(0u));
    c.f[0] = ld32((c.r[1].w[0] + 4536u));
    st32((c.r[19].w[0] + 18960u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] + 4536u));
    st32((c.r[19].w[0] + 18964u), c.f[0]);
    st32((c.r[19].w[0] + 18968u), c.r[5].w[0]);
    st32((c.r[19].w[0] + 18944u), c.r[4].w[0]);
    st32((c.r[19].w[0] + 18948u), c.r[3].w[0]);
    c.budget -= 41;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB6B0u); st32((c.r[19].w[0] + 18952u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x003AB6B0u) [[unlikely]] return; }
L_003AB6B0:
    set32(c.r[3], ld32((c.r[2].w[0] + 384u)));
    set32(c.r[4], c.r[19].w[0] + 19056u);
    set32(c.r[2], 0u + 2u);
    st32((c.r[19].w[0] + 19208u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 19152u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 19116u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB6D0u); st8((c.r[19].w[0] + 19112u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x003AB6D0u) [[unlikely]] return; }
L_003AB6D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB6D8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 84u, depth + 1u); else { c.pc = 0x0037CF10u; return; } if (c.pc != 0x003AB6D8u) [[unlikely]] return; }
L_003AB6D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB6E0u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 200u, depth + 1u); else { c.pc = 0x0037DCF0u; return; } if (c.pc != 0x003AB6E0u) [[unlikely]] return; }
L_003AB6E0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB6ECu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 179u, depth + 1u); else { c.pc = 0x0037D9B0u; return; } if (c.pc != 0x003AB6ECu) [[unlikely]] return; }
L_003AB6EC:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003AB710:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003AB7D8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 26800u);
    set32(c.r[2], c.r[2].w[0] - 26712u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 19168u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003AB768; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003AB768; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB768u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AB768u) [[unlikely]] return; }
L_003AB768:
    set32(c.r[4], c.r[17].w[0] + 18992u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB778u); st32((c.r[17].w[0] + 19168u), 0u);  if (depth < kMaxDepth) unit_0049(c, 274u, depth + 1u); else { c.pc = 0x002275F0u; return; } if (c.pc != 0x003AB778u) [[unlikely]] return; }
L_003AB778:
    set32(c.r[4], c.r[17].w[0] + 18512u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB784u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002A(c, 353u, depth + 1u); else { c.pc = 0x001ABB90u; return; } if (c.pc != 0x003AB784u) [[unlikely]] return; }
L_003AB784:
    set32(c.r[4], c.r[17].w[0] + 18272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB790u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00A2(c, 197u, depth + 1u); else { c.pc = 0x00389B20u; return; } if (c.pc != 0x003AB790u) [[unlikely]] return; }
L_003AB790:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[4], c.r[17].w[0] + 32u);
    set32(c.r[5], c.r[5].w[0] - 19984u);
    set32(c.r[6], 0u + 608u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB7A8u); set32(c.r[7], 0u + 30u);  if (depth < kMaxDepth) unit_0000(c, 86u, depth + 1u); else { c.pc = 0x00100720u; return; } if (c.pc != 0x003AB7A8u) [[unlikely]] return; }
L_003AB7A8:
    set32(c.r[4], c.r[17].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB7B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x003AB7B4u) [[unlikely]] return; }
L_003AB7B4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB7C0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 300u, depth + 1u); else { c.pc = 0x0012E490u; return; } if (c.pc != 0x003AB7C0u) [[unlikely]] return; }
L_003AB7C0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003AB7DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB7D8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x003AB7D8u) [[unlikely]] return; }
L_003AB7D8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003AB7DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003AB7F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 72u), 0u);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[2], 0u + 5u);
    c.budget -= 11;
L_003AB81C:
    mmi::divu(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_003AB840; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003AB858; } }
L_003AB840:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 6;
L_003AB858:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42240000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42D00000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = c.r[3].w[0];
    set32(c.r[2], 0u + 5u);
    mmi::divu(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 64u), c.f[0]);  if (t) { goto L_003AB884; } }
    breakpoint(c, 0x003AB880u);
    c.budget -= 1;
L_003AB884:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_003AB89C; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003AB8B4; } }
L_003AB89C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 6;
L_003AB8B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42240000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42D60000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    set32(c.r[2], c.r[16].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    set32(c.r[18], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB8F8u); st32((c.r[29].w[0] + 68u), c.f[0]);  if (depth < kMaxDepth) unit_00AA(c, 378u, depth + 1u); else { c.pc = 0x003AB340u; return; } if (c.pc != 0x003AB8F8u) [[unlikely]] return; }
L_003AB8F8:
    set32(c.r[2], c.r[16].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 11264u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    st32((c.r[18].w[0] + 612u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(30ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 5u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AB81Cu | kUnwind; return; } goto L_003AB81C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB920u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 79u, depth + 1u); else { c.pc = 0x003AC890u; return; } if (c.pc != 0x003AB920u) [[unlikely]] return; }
L_003AB920:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB92Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 63u, depth + 1u); else { c.pc = 0x003AC710u; return; } if (c.pc != 0x003AB92Cu) [[unlikely]] return; }
L_003AB92C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB934u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 93u, depth + 1u); else { c.pc = 0x003ACAF0u; return; } if (c.pc != 0x003AB934u) [[unlikely]] return; }
L_003AB934:
    set32(c.r[25], ld32((c.r[17].w[0] + 18272u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB944u); set32(c.r[4], c.r[17].w[0] + 18272u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AB944u) [[unlikely]] return; }
L_003AB944:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003AB960:
    set32(c.r[3], ld32((c.r[4].w[0] + 19168u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003AB970; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 137u));
    c.budget -= 1;
L_003AB970:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003AB980:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB994u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 80u, depth + 1u); else { c.pc = 0x0037CE90u; return; } if (c.pc != 0x003AB994u) [[unlikely]] return; }
L_003AB994:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003AB9AC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB9ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AB9ACu) [[unlikely]] return; }
L_003AB9AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AB9C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB9D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 425u, depth + 1u); else { c.pc = 0x003AB960u; return; } if (c.pc != 0x003AB9D4u) [[unlikely]] return; }
L_003AB9D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003AB9EC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB9ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AB9ECu) [[unlikely]] return; }
L_003AB9EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003ABA00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[1].w[0] + 25376u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003ABA6C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABA38u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003ABA38u) [[unlikely]] return; }
L_003ABA38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003ABB5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABA48u);  if (depth < kMaxDepth) unit_001A(c, 271u, depth + 1u); else { c.pc = 0x0016A9E0u; return; } if (c.pc != 0x003ABA48u) [[unlikely]] return; }
L_003ABA48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABA50u);  if (depth < kMaxDepth) unit_009F(c, 127u, depth + 1u); else { c.pc = 0x0037D270u; return; } if (c.pc != 0x003ABA50u) [[unlikely]] return; }
L_003ABA50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABA58u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 157u, depth + 1u); else { c.pc = 0x0037D560u; return; } if (c.pc != 0x003ABA58u) [[unlikely]] return; }
L_003ABA58:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABA64u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00AB(c, 63u, depth + 1u); else { c.pc = 0x003AC710u; return; } if (c.pc != 0x003ABA64u) [[unlikely]] return; }
L_003ABA64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003ABB60; } }
L_003ABA6C:
    set32(c.r[2], ld32((c.r[16].w[0] + 19176u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003ABA88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABA80u);  if (depth < kMaxDepth) unit_00AB(c, 9u, depth + 1u); else { c.pc = 0x003AC0C0u; return; } if (c.pc != 0x003ABA80u) [[unlikely]] return; }
L_003ABA80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003ABB5C; } }
L_003ABA88:
    set32(c.r[25], ld32((c.r[16].w[0] + 18272u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABA98u); set32(c.r[4], c.r[16].w[0] + 18272u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003ABA98u) [[unlikely]] return; }
L_003ABA98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003ABB5C; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 18272u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABAB0u); set32(c.r[4], c.r[16].w[0] + 18272u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003ABAB0u) [[unlikely]] return; }
L_003ABAB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003ABB40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABAC0u);  if (depth < kMaxDepth) unit_00AB(c, 93u, depth + 1u); else { c.pc = 0x003ACAF0u; return; } if (c.pc != 0x003ABAC0u) [[unlikely]] return; }
L_003ABAC0:
    set32(c.r[3], ld32((c.r[16].w[0] + 19184u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] + 4484u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABADCu); set32(c.r[18], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x003ABADCu) [[unlikely]] return; }
L_003ABADC:
    set32(c.r[7], ld32((c.r[16].w[0] + 19172u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABAF4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 238u, depth + 1u); else { c.pc = 0x0031DDE0u; return; } if (c.pc != 0x003ABAF4u) [[unlikely]] return; }
L_003ABAF4:
    set32(c.r[3], ld32((c.r[17].w[0] + 384u)));
    set32(c.r[2], 0u + 35u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003ABB38; } }
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 21u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 14u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABB20u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 267u, depth + 1u); else { c.pc = 0x0016A910u; return; } if (c.pc != 0x003ABB20u) [[unlikely]] return; }
L_003ABB20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABB28u);  if (depth < kMaxDepth) unit_009F(c, 127u, depth + 1u); else { c.pc = 0x0037D270u; return; } if (c.pc != 0x003ABB28u) [[unlikely]] return; }
L_003ABB28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABB30u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 156u, depth + 1u); else { c.pc = 0x0037D530u; return; } if (c.pc != 0x003ABB30u) [[unlikely]] return; }
L_003ABB30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_003ABB44; } }
L_003ABB38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABB40u);  if (depth < kMaxDepth) unit_00AB(c, 87u, depth + 1u); else { c.pc = 0x003ACA20u; return; } if (c.pc != 0x003ABB40u) [[unlikely]] return; }
L_003ABB40:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_003ABB44:
    set32(c.r[4], c.r[16].w[0] + 19056u);
    st32((c.r[16].w[0] + 19152u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 19116u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABB58u); st8((c.r[16].w[0] + 19112u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x003ABB58u) [[unlikely]] return; }
L_003ABB58:
    st32((c.r[16].w[0] + 19176u), 0u);
    c.budget -= 1;
L_003ABB5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003ABB60:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003ABB80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABB94u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 425u, depth + 1u); else { c.pc = 0x003AB960u; return; } if (c.pc != 0x003ABB94u) [[unlikely]] return; }
L_003ABB94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003ABBAC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABBACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003ABBACu) [[unlikely]] return; }
L_003ABBAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003ABBC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABBD4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 425u, depth + 1u); else { c.pc = 0x003AB960u; return; } if (c.pc != 0x003ABBD4u) [[unlikely]] return; }
L_003ABBD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003ABBEC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABBECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003ABBECu) [[unlikely]] return; }
L_003ABBEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003ABC00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABC18u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 318u, depth + 1u); else { c.pc = 0x0012E5E0u; return; } if (c.pc != 0x003ABC18u) [[unlikely]] return; }
L_003ABC18:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 19168u)));
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[3].w[0] + 624u);  if (t) { goto L_003ABC78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABC34u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003ABC34u) [[unlikely]] return; }
L_003ABC34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003ABC48; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABC48u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_002A(c, 287u, depth + 1u); else { c.pc = 0x001AB200u; return; } if (c.pc != 0x003ABC48u) [[unlikely]] return; }
L_003ABC48:
    st32((c.r[16].w[0] + 19168u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABC58u); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x003ABC58u) [[unlikely]] return; }
L_003ABC58:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABC68u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x003ABC68u) [[unlikely]] return; }
L_003ABC68:
    set32(c.r[4], ld32((c.r[16].w[0] + 19168u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABC78u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x003ABC78u) [[unlikely]] return; }
L_003ABC78:
    set32(c.r[4], ld32((c.r[16].w[0] + 19168u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABC8Cu); set32(c.r[5], 0u + 171u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003ABC8Cu) [[unlikely]] return; }
L_003ABC8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABC94u);  if (depth < kMaxDepth) unit_009F(c, 200u, depth + 1u); else { c.pc = 0x0037DCF0u; return; } if (c.pc != 0x003ABC94u) [[unlikely]] return; }
L_003ABC94:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABCA4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 211u, depth + 1u); else { c.pc = 0x0037DE40u; return; } if (c.pc != 0x003ABCA4u) [[unlikely]] return; }
L_003ABCA4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABCB0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009F(c, 186u, depth + 1u); else { c.pc = 0x0037DB10u; return; } if (c.pc != 0x003ABCB0u) [[unlikely]] return; }
L_003ABCB0:
    st32((c.r[16].w[0] + 19028u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    st32((c.r[16].w[0] + 19032u), 0u);
    set32(c.r[2], 0u + 15u);
    st32((c.r[16].w[0] + 19036u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 18992u);
    st32((c.r[16].w[0] + 19040u), c.r[2].w[0]);
    set32(c.r[5], c.r[16].w[0] + 19028u);
    st32((c.r[16].w[0] + 19044u), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABCDCu); st32((c.r[16].w[0] + 19048u), 0u);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x003ABCDCu) [[unlikely]] return; }
L_003ABCDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABCE4u); set32(c.r[4], c.r[16].w[0] + 18512u);  if (depth < kMaxDepth) unit_002A(c, 364u, depth + 1u); else { c.pc = 0x001ABD60u; return; } if (c.pc != 0x003ABCE4u) [[unlikely]] return; }
L_003ABCE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003ABD00:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E600u | kUnwind; return; } [[clang::musttail]] return unit_000B(c, 319u, depth); }
L_003ABD10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABD24u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 320u, depth + 1u); else { c.pc = 0x0012E610u; return; } if (c.pc != 0x003ABD24u) [[unlikely]] return; }
L_003ABD24:
    set32(c.r[4], ld32((c.r[16].w[0] + 19168u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);  if (t) { goto L_003ABD44; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABD40u); set32(c.r[5], 0u + 172u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003ABD40u) [[unlikely]] return; }
L_003ABD40:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.budget -= 1;
L_003ABD44:
    set32(c.r[2], 0u + 15u);
    st32((c.r[16].w[0] + 19028u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 18992u);
    st32((c.r[16].w[0] + 19032u), c.r[3].w[0]);
    set32(c.r[5], c.r[16].w[0] + 19028u);
    st32((c.r[16].w[0] + 19036u), 0u);
    st32((c.r[16].w[0] + 19040u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 19044u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABD6Cu); st32((c.r[16].w[0] + 19048u), 0u);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x003ABD6Cu) [[unlikely]] return; }
L_003ABD6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABD74u); set32(c.r[4], c.r[16].w[0] + 18512u);  if (depth < kMaxDepth) unit_002A(c, 367u, depth + 1u); else { c.pc = 0x001ABDD0u; return; } if (c.pc != 0x003ABD74u) [[unlikely]] return; }
L_003ABD74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003ABD90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABDA4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 321u, depth + 1u); else { c.pc = 0x0012E630u; return; } if (c.pc != 0x003ABDA4u) [[unlikely]] return; }
L_003ABDA4:
    set32(c.r[4], ld32((c.r[16].w[0] + 19168u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);  if (t) { goto L_003ABDC4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABDC0u); set32(c.r[5], 0u + 172u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003ABDC0u) [[unlikely]] return; }
L_003ABDC0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.budget -= 1;
L_003ABDC4:
    set32(c.r[2], 0u + 15u);
    st32((c.r[16].w[0] + 19028u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 18992u);
    st32((c.r[16].w[0] + 19032u), c.r[3].w[0]);
    set32(c.r[5], c.r[16].w[0] + 19028u);
    st32((c.r[16].w[0] + 19036u), 0u);
    st32((c.r[16].w[0] + 19040u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 19044u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABDECu); st32((c.r[16].w[0] + 19048u), 0u);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x003ABDECu) [[unlikely]] return; }
L_003ABDEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABDF4u); set32(c.r[4], c.r[16].w[0] + 18512u);  if (depth < kMaxDepth) unit_002A(c, 367u, depth + 1u); else { c.pc = 0x001ABDD0u; return; } if (c.pc != 0x003ABDF4u) [[unlikely]] return; }
L_003ABDF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABDFCu);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x003ABDFCu) [[unlikely]] return; }
L_003ABDFC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABE08u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 288u, depth + 1u); else { c.pc = 0x0031E750u; return; } if (c.pc != 0x003ABE08u) [[unlikely]] return; }
L_003ABE08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABE10u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 161u, depth + 1u); else { c.pc = 0x0031D350u; return; } if (c.pc != 0x003ABE10u) [[unlikely]] return; }
L_003ABE10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003ABE20:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[0] = ld32((c.r[4].w[0] + 19004u));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 19112u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[18], c.f[0]);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003ABE7C; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 19116u)));
    set32(c.r[3], c.r[2].w[0] - 1u);
    st32((c.r[19].w[0] + 19116u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 19104u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[19].w[0] + 19056u);  if (t) { goto L_003ABEB0; } }
    st32((c.r[19].w[0] + 19116u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 19112u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003ABEAC; } }
L_003ABE7C:
    set32(c.r[2], ld32((c.r[19].w[0] + 19116u)));
    set32(c.r[4], c.r[2].w[0] + 1u);
    st32((c.r[19].w[0] + 19116u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 19108u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 19104u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003ABEAC; } }
    st32((c.r[19].w[0] + 19116u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[19].w[0] + 19112u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_003ABEAC:
    set32(c.r[4], c.r[19].w[0] + 19056u);
    c.budget -= 1;
L_003ABEB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABEB8u);  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x003ABEB8u) [[unlikely]] return; }
L_003ABEB8:
    c.r[1].d[0] = c.r[18].sd[0] < 251ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003ABF88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABECCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x003ABECCu) [[unlikely]] return; }
L_003ABECC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003ABF7C; } }
L_003ABED8:
    set32(c.r[2], ld32((c.r[19].w[0] + 19200u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[16].w[0] << 3);  if (t) { goto L_003ABF58; } }
    ld128((c.r[17].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[2], 0u + 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    set32(c.r[3], ld32((c.r[19].w[0] + 19180u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[16].w[0] << 3);  if (t) { goto L_003ABF30; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 19152u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[19].w[0] + 19088u);  if (t) { goto L_003ABF18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[2].w[0]) & ~15u, c.r[2]);  if (t) { goto L_003ABF28; } }
L_003ABF18:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[19].w[0] + 19136u);  if (t) { goto L_003ABF24; } }
    set32(c.r[2], c.r[19].w[0] + 19120u);
    c.budget -= 1;
L_003ABF24:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.budget -= 1;
L_003ABF28:
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[2]);
    set32(c.r[2], c.r[16].w[0] << 3);
    c.budget -= 2;
L_003ABF30:
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABF50u); set32(c.r[4], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_00AA(c, 374u, depth + 1u); else { c.pc = 0x003AB2C0u; return; } if (c.pc != 0x003ABF50u) [[unlikely]] return; }
L_003ABF50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_003ABF7C; } }
L_003ABF58:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABF78u); set32(c.r[4], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_00AA(c, 374u, depth + 1u); else { c.pc = 0x003AB2C0u; return; } if (c.pc != 0x003ABF78u) [[unlikely]] return; }
L_003ABF78:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_003ABF7C:
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(30ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ABED8u | kUnwind; return; } goto L_003ABED8; } }
L_003ABF88:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[5], ld32((c.r[1].w[0] + 26392u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[2], c.r[2].w[0] + 4480u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[16], ld32((c.r[5].w[0] + 440u)));
    c.f[0] = ld32((c.r[1].w[0] + 4536u));
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] + 4536u));
    st32((c.r[16].w[0] + 20u), c.f[0]);
    st32((c.r[16].w[0] + 24u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 304u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 308u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 312u), 0u);
    st32((c.r[16].w[0] + 316u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 19184u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABFE4u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x003ABFE4u) [[unlikely]] return; }
L_003ABFE4:
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    c.f[14] = 0u;
    st32((c.r[16].w[0] + 356u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43390000u);
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42580000u);
    c.budget -= 7;
    [[clang::musttail]] return unit_00AB(c, 1u, depth);
}

}
