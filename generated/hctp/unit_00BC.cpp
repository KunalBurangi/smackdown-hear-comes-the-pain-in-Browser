#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00BC[4096] = {
    1, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 9, 0,
    0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 11, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0,
    0, 16, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 21, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 24, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 39, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0,
    41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0,
    45, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 48, 0, 0, 49, 0, 0, 50, 0, 0, 51, 0, 0, 52, 0, 0, 53, 0, 0, 54, 0,
    0, 55, 0, 0, 56, 0, 57, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 61, 0,
    0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 66, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0,
    71, 0, 0, 0, 0, 72, 0, 73, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0,
    79, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 84, 0, 85, 0, 0, 0, 86, 0,
    0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 95,
    0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 0,
    0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0,
    0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0,
    115, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 120,
    0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 124, 0,
    0, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0,
    130, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 134, 0, 135, 0, 0, 0, 0, 0,
    136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 141, 0,
    0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 145, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0,
    150, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0,
    0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0,
    161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 165, 0,
    0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 167, 0, 168, 0, 169, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 0,
    0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0,
    0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188,
    0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0,
    0, 0, 203, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 207, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 215, 0, 0, 0, 216, 0, 217, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    222, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 228, 0,
    0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 234,
    0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 256, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 259, 0,
    0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 263, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 280, 0, 281, 0,
    0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0,
    0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 290, 0, 0, 0, 0, 0, 291, 0,
    0, 0, 292, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0,
    296, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0,
    302, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    314, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 318, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0,
    0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 327, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 329, 0,
    0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 335, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339,
    0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0,
    0, 0, 0, 0, 0, 346, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0,
    0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 355, 0, 356, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0,
    0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0,
    363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 366, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 370, 0, 0,
    0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 375, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 391, 0,
    0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 393, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 395, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0,
    400, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 404, 0, 0,
    0, 0, 405, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 408, 0, 409, 0, 410,
    0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 414, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 418, 0, 419, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0,
    423, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0,
};

void unit_00BC(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003F0000;
    case 2u: goto L_003F0004;
    case 3u: goto L_003F0018;
    case 4u: goto L_003F0054;
    case 5u: goto L_003F0060;
    case 6u: goto L_003F007C;
    case 7u: goto L_003F00C4;
    case 8u: goto L_003F00DC;
    case 9u: goto L_003F00F8;
    case 10u: goto L_003F0114;
    case 11u: goto L_003F0130;
    case 12u: goto L_003F0138;
    case 13u: goto L_003F01A8;
    case 14u: goto L_003F01CC;
    case 15u: goto L_003F01F0;
    case 16u: goto L_003F0204;
    case 17u: goto L_003F0210;
    case 18u: goto L_003F0228;
    case 19u: goto L_003F0240;
    case 20u: goto L_003F0260;
    case 21u: goto L_003F0278;
    case 22u: goto L_003F02A0;
    case 23u: goto L_003F02B0;
    case 24u: goto L_003F02BC;
    case 25u: goto L_003F02C8;
    case 26u: goto L_003F0308;
    case 27u: goto L_003F0318;
    case 28u: goto L_003F0328;
    case 29u: goto L_003F0340;
    case 30u: goto L_003F0348;
    case 31u: goto L_003F0360;
    case 32u: goto L_003F0388;
    case 33u: goto L_003F03A8;
    case 34u: goto L_003F03D4;
    case 35u: goto L_003F03E8;
    case 36u: goto L_003F03F8;
    case 37u: goto L_003F0438;
    case 38u: goto L_003F04C8;
    case 39u: goto L_003F04D4;
    case 40u: goto L_003F04DC;
    case 41u: goto L_003F0500;
    case 42u: goto L_003F0548;
    case 43u: goto L_003F05D8;
    case 44u: goto L_003F05EC;
    case 45u: goto L_003F0600;
    case 46u: goto L_003F0614;
    case 47u: goto L_003F0624;
    case 48u: goto L_003F0630;
    case 49u: goto L_003F063C;
    case 50u: goto L_003F0648;
    case 51u: goto L_003F0654;
    case 52u: goto L_003F0660;
    case 53u: goto L_003F066C;
    case 54u: goto L_003F0678;
    case 55u: goto L_003F0684;
    case 56u: goto L_003F0690;
    case 57u: goto L_003F0698;
    case 58u: goto L_003F06B8;
    case 59u: goto L_003F06CC;
    case 60u: goto L_003F06E8;
    case 61u: goto L_003F06F8;
    case 62u: goto L_003F0710;
    case 63u: goto L_003F0728;
    case 64u: goto L_003F0738;
    case 65u: goto L_003F0758;
    case 66u: goto L_003F0778;
    case 67u: goto L_003F07B4;
    case 68u: goto L_003F07DC;
    case 69u: goto L_003F0838;
    case 70u: goto L_003F0868;
    case 71u: goto L_003F0880;
    case 72u: goto L_003F0894;
    case 73u: goto L_003F089C;
    case 74u: goto L_003F08B4;
    case 75u: goto L_003F08E0;
    case 76u: goto L_003F0950;
    case 77u: goto L_003F0964;
    case 78u: goto L_003F0978;
    case 79u: goto L_003F0980;
    case 80u: goto L_003F0994;
    case 81u: goto L_003F09B0;
    case 82u: goto L_003F09C0;
    case 83u: goto L_003F09D0;
    case 84u: goto L_003F09E0;
    case 85u: goto L_003F09E8;
    case 86u: goto L_003F09F8;
    case 87u: goto L_003F0A08;
    case 88u: goto L_003F0A1C;
    case 89u: goto L_003F0A30;
    case 90u: goto L_003F0A8C;
    case 91u: goto L_003F0AA0;
    case 92u: goto L_003F0AB0;
    case 93u: goto L_003F0AC4;
    case 94u: goto L_003F0ADC;
    case 95u: goto L_003F0AFC;
    case 96u: goto L_003F0B20;
    case 97u: goto L_003F0B70;
    case 98u: goto L_003F0BB8;
    case 99u: goto L_003F0BD8;
    case 100u: goto L_003F0BF8;
    case 101u: goto L_003F0C1C;
    case 102u: goto L_003F0C2C;
    case 103u: goto L_003F0C48;
    case 104u: goto L_003F0C68;
    case 105u: goto L_003F0C88;
    case 106u: goto L_003F0CA8;
    case 107u: goto L_003F0CC8;
    case 108u: goto L_003F0CE0;
    case 109u: goto L_003F0D1C;
    case 110u: goto L_003F0D28;
    case 111u: goto L_003F0D58;
    case 112u: goto L_003F0D88;
    case 113u: goto L_003F0DAC;
    case 114u: goto L_003F0DE0;
    case 115u: goto L_003F0E00;
    case 116u: goto L_003F0E18;
    case 117u: goto L_003F0E34;
    case 118u: goto L_003F0E4C;
    case 119u: goto L_003F0E60;
    case 120u: goto L_003F0E7C;
    case 121u: goto L_003F0E90;
    case 122u: goto L_003F0EAC;
    case 123u: goto L_003F0EDC;
    case 124u: goto L_003F0EF8;
    case 125u: goto L_003F0F10;
    case 126u: goto L_003F0F24;
    case 127u: goto L_003F0F3C;
    case 128u: goto L_003F0F54;
    case 129u: goto L_003F0F6C;
    case 130u: goto L_003F0F80;
    case 131u: goto L_003F0FA0;
    case 132u: goto L_003F0FC0;
    case 133u: goto L_003F0FD8;
    case 134u: goto L_003F0FE0;
    case 135u: goto L_003F0FE8;
    case 136u: goto L_003F1000;
    case 137u: goto L_003F1028;
    case 138u: goto L_003F103C;
    case 139u: goto L_003F1044;
    case 140u: goto L_003F1058;
    case 141u: goto L_003F1078;
    case 142u: goto L_003F1088;
    case 143u: goto L_003F10C8;
    case 144u: goto L_003F10E8;
    case 145u: goto L_003F10F8;
    case 146u: goto L_003F1138;
    case 147u: goto L_003F1150;
    case 148u: goto L_003F1164;
    case 149u: goto L_003F1178;
    case 150u: goto L_003F1180;
    case 151u: goto L_003F1188;
    case 152u: goto L_003F11A0;
    case 153u: goto L_003F11C0;
    case 154u: goto L_003F11D0;
    case 155u: goto L_003F11E8;
    case 156u: goto L_003F1208;
    case 157u: goto L_003F1218;
    case 158u: goto L_003F1230;
    case 159u: goto L_003F1250;
    case 160u: goto L_003F1260;
    case 161u: goto L_003F1280;
    case 162u: goto L_003F12A0;
    case 163u: goto L_003F12B8;
    case 164u: goto L_003F12D8;
    case 165u: goto L_003F12F8;
    case 166u: goto L_003F1318;
    case 167u: goto L_003F1338;
    case 168u: goto L_003F1340;
    case 169u: goto L_003F1348;
    case 170u: goto L_003F1350;
    case 171u: goto L_003F138C;
    case 172u: goto L_003F13BC;
    case 173u: goto L_003F13D8;
    case 174u: goto L_003F13F4;
    case 175u: goto L_003F1418;
    case 176u: goto L_003F1434;
    case 177u: goto L_003F1448;
    case 178u: goto L_003F1460;
    case 179u: goto L_003F1474;
    case 180u: goto L_003F1488;
    case 181u: goto L_003F14B0;
    case 182u: goto L_003F14C0;
    case 183u: goto L_003F14F0;
    case 184u: goto L_003F1560;
    case 185u: goto L_003F1588;
    case 186u: goto L_003F1598;
    case 187u: goto L_003F15B8;
    case 188u: goto L_003F15FC;
    case 189u: goto L_003F1610;
    case 190u: goto L_003F1628;
    case 191u: goto L_003F1634;
    case 192u: goto L_003F1650;
    case 193u: goto L_003F16A4;
    case 194u: goto L_003F16B8;
    case 195u: goto L_003F170C;
    case 196u: goto L_003F1738;
    case 197u: goto L_003F1770;
    case 198u: goto L_003F17C0;
    case 199u: goto L_003F1810;
    case 200u: goto L_003F1898;
    case 201u: goto L_003F18D0;
    case 202u: goto L_003F18E8;
    case 203u: goto L_003F1908;
    case 204u: goto L_003F1910;
    case 205u: goto L_003F1938;
    case 206u: goto L_003F1958;
    case 207u: goto L_003F1988;
    case 208u: goto L_003F19A0;
    case 209u: goto L_003F19B8;
    case 210u: goto L_003F19E0;
    case 211u: goto L_003F1A28;
    case 212u: goto L_003F1A88;
    case 213u: goto L_003F1A98;
    case 214u: goto L_003F1AC8;
    case 215u: goto L_003F1B04;
    case 216u: goto L_003F1B14;
    case 217u: goto L_003F1B1C;
    case 218u: goto L_003F1B38;
    case 219u: goto L_003F1B48;
    case 220u: goto L_003F1B90;
    case 221u: goto L_003F1BD8;
    case 222u: goto L_003F1C00;
    case 223u: goto L_003F1C18;
    case 224u: goto L_003F1C30;
    case 225u: goto L_003F1CA0;
    case 226u: goto L_003F1CB4;
    case 227u: goto L_003F1CDC;
    case 228u: goto L_003F1CF8;
    case 229u: goto L_003F1D10;
    case 230u: goto L_003F1D28;
    case 231u: goto L_003F1DAC;
    case 232u: goto L_003F1DBC;
    case 233u: goto L_003F1DE0;
    case 234u: goto L_003F1DFC;
    case 235u: goto L_003F1E1C;
    case 236u: goto L_003F1E4C;
    case 237u: goto L_003F1E80;
    case 238u: goto L_003F1EA8;
    case 239u: goto L_003F1F10;
    case 240u: goto L_003F1F48;
    case 241u: goto L_003F1F6C;
    case 242u: goto L_003F1F9C;
    case 243u: goto L_003F1FB4;
    case 244u: goto L_003F1FE0;
    case 245u: goto L_003F2008;
    case 246u: goto L_003F2030;
    case 247u: goto L_003F2048;
    case 248u: goto L_003F2060;
    case 249u: goto L_003F20A0;
    case 250u: goto L_003F20B8;
    case 251u: goto L_003F20D0;
    case 252u: goto L_003F2110;
    case 253u: goto L_003F2120;
    case 254u: goto L_003F2138;
    case 255u: goto L_003F2158;
    case 256u: goto L_003F2178;
    case 257u: goto L_003F21B0;
    case 258u: goto L_003F21DC;
    case 259u: goto L_003F21F8;
    case 260u: goto L_003F2218;
    case 261u: goto L_003F2278;
    case 262u: goto L_003F22B0;
    case 263u: goto L_003F2310;
    case 264u: goto L_003F2324;
    case 265u: goto L_003F235C;
    case 266u: goto L_003F2458;
    case 267u: goto L_003F24B8;
    case 268u: goto L_003F24C8;
    case 269u: goto L_003F2518;
    case 270u: goto L_003F252C;
    case 271u: goto L_003F2550;
    case 272u: goto L_003F25B0;
    case 273u: goto L_003F25C4;
    case 274u: goto L_003F25FC;
    case 275u: goto L_003F2700;
    case 276u: goto L_003F2760;
    case 277u: goto L_003F2770;
    case 278u: goto L_003F27BC;
    case 279u: goto L_003F27D0;
    case 280u: goto L_003F27F0;
    case 281u: goto L_003F27F8;
    case 282u: goto L_003F2808;
    case 283u: goto L_003F2860;
    case 284u: goto L_003F28AC;
    case 285u: goto L_003F28D0;
    case 286u: goto L_003F28F0;
    case 287u: goto L_003F2910;
    case 288u: goto L_003F2930;
    case 289u: goto L_003F2950;
    case 290u: goto L_003F2960;
    case 291u: goto L_003F2978;
    case 292u: goto L_003F2988;
    case 293u: goto L_003F29A0;
    case 294u: goto L_003F29B4;
    case 295u: goto L_003F29E8;
    case 296u: goto L_003F2A00;
    case 297u: goto L_003F2A10;
    case 298u: goto L_003F2A20;
    case 299u: goto L_003F2A38;
    case 300u: goto L_003F2A4C;
    case 301u: goto L_003F2A68;
    case 302u: goto L_003F2A80;
    case 303u: goto L_003F2A94;
    case 304u: goto L_003F2AB0;
    case 305u: goto L_003F2AD8;
    case 306u: goto L_003F2B20;
    case 307u: goto L_003F2B38;
    case 308u: goto L_003F2B70;
    case 309u: goto L_003F2BCC;
    case 310u: goto L_003F2BF0;
    case 311u: goto L_003F2C24;
    case 312u: goto L_003F2C98;
    case 313u: goto L_003F2CC0;
    case 314u: goto L_003F2D00;
    case 315u: goto L_003F2D14;
    case 316u: goto L_003F2D3C;
    case 317u: goto L_003F2D64;
    case 318u: goto L_003F2D70;
    case 319u: goto L_003F2DB0;
    case 320u: goto L_003F2DE4;
    case 321u: goto L_003F2E18;
    case 322u: goto L_003F2E40;
    case 323u: goto L_003F2E50;
    case 324u: goto L_003F2EF8;
    case 325u: goto L_003F2F10;
    case 326u: goto L_003F2F38;
    case 327u: goto L_003F2F48;
    case 328u: goto L_003F2F60;
    case 329u: goto L_003F2F78;
    case 330u: goto L_003F2F90;
    case 331u: goto L_003F2FA8;
    case 332u: goto L_003F2FC4;
    case 333u: goto L_003F3008;
    case 334u: goto L_003F3030;
    case 335u: goto L_003F3084;
    case 336u: goto L_003F3094;
    case 337u: goto L_003F30A4;
    case 338u: goto L_003F30C0;
    case 339u: goto L_003F30FC;
    case 340u: goto L_003F311C;
    case 341u: goto L_003F313C;
    case 342u: goto L_003F317C;
    case 343u: goto L_003F31A8;
    case 344u: goto L_003F31D0;
    case 345u: goto L_003F31F4;
    case 346u: goto L_003F3214;
    case 347u: goto L_003F321C;
    case 348u: goto L_003F3240;
    case 349u: goto L_003F3278;
    case 350u: goto L_003F329C;
    case 351u: goto L_003F32BC;
    case 352u: goto L_003F32F8;
    case 353u: goto L_003F3328;
    case 354u: goto L_003F3348;
    case 355u: goto L_003F3388;
    case 356u: goto L_003F3390;
    case 357u: goto L_003F339C;
    case 358u: goto L_003F33C0;
    case 359u: goto L_003F33F0;
    case 360u: goto L_003F3410;
    case 361u: goto L_003F3450;
    case 362u: goto L_003F3478;
    case 363u: goto L_003F3480;
    case 364u: goto L_003F34B8;
    case 365u: goto L_003F34D8;
    case 366u: goto L_003F350C;
    case 367u: goto L_003F3514;
    case 368u: goto L_003F3538;
    case 369u: goto L_003F355C;
    case 370u: goto L_003F3574;
    case 371u: goto L_003F358C;
    case 372u: goto L_003F35B0;
    case 373u: goto L_003F35D0;
    case 374u: goto L_003F3618;
    case 375u: goto L_003F3628;
    case 376u: goto L_003F363C;
    case 377u: goto L_003F36A8;
    case 378u: goto L_003F36C4;
    case 379u: goto L_003F3720;
    case 380u: goto L_003F373C;
    case 381u: goto L_003F37D8;
    case 382u: goto L_003F3800;
    case 383u: goto L_003F38A0;
    case 384u: goto L_003F38E8;
    case 385u: goto L_003F3910;
    case 386u: goto L_003F3970;
    case 387u: goto L_003F39F0;
    case 388u: goto L_003F3A30;
    case 389u: goto L_003F3A3C;
    case 390u: goto L_003F3B58;
    case 391u: goto L_003F3B78;
    case 392u: goto L_003F3B90;
    case 393u: goto L_003F3BA8;
    case 394u: goto L_003F3BB8;
    case 395u: goto L_003F3C04;
    case 396u: goto L_003F3C1C;
    case 397u: goto L_003F3C34;
    case 398u: goto L_003F3C4C;
    case 399u: goto L_003F3C70;
    case 400u: goto L_003F3C80;
    case 401u: goto L_003F3C98;
    case 402u: goto L_003F3CC8;
    case 403u: goto L_003F3CDC;
    case 404u: goto L_003F3CF4;
    case 405u: goto L_003F3D08;
    case 406u: goto L_003F3D20;
    case 407u: goto L_003F3D60;
    case 408u: goto L_003F3D6C;
    case 409u: goto L_003F3D74;
    case 410u: goto L_003F3D7C;
    case 411u: goto L_003F3D98;
    case 412u: goto L_003F3DAC;
    case 413u: goto L_003F3DD8;
    case 414u: goto L_003F3DE8;
    case 415u: goto L_003F3E48;
    case 416u: goto L_003F3EA8;
    case 417u: goto L_003F3EC4;
    case 418u: goto L_003F3ED8;
    case 419u: goto L_003F3EE0;
    case 420u: goto L_003F3F10;
    case 421u: goto L_003F3F34;
    case 422u: goto L_003F3F60;
    case 423u: goto L_003F3F80;
    case 424u: goto L_003F3F98;
    case 425u: goto L_003F3FC8;
    case 426u: goto L_003F3FEC;
    default: bad_entry(c, 0x003F0000u); return;
    }
L_003F0000:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_003F0004:
    c.r[2].d[0] = c.r[2].d[0] ^ 3ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F0018:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    set32(c.r[20], c.r[17].w[0] + 3936u);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[19], ld32((c.r[17].w[0] + 7028u)));
    set32(c.r[16], ld32((c.r[19].w[0])));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0054u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 265u, depth + 1u); else { c.pc = 0x003BE0A0u; return; } if (c.pc != 0x003F0054u) [[unlikely]] return; }
L_003F0054:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0060u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 354u, depth + 1u); else { c.pc = 0x003BEE98u; return; } if (c.pc != 0x003F0060u) [[unlikely]] return; }
L_003F0060:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003F0070; } }
    st32((c.r[2].w[0] - 19028u), c.r[16].w[0]);
    c.budget -= 1;
L_003F0070:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F007Cu); set32(c.r[5], 0u + 26u);  if (depth < kMaxDepth) unit_00C0(c, 20u, depth + 1u); else { c.pc = 0x00400258u; return; } if (c.pc != 0x003F007Cu) [[unlikely]] return; }
L_003F007C:
    set32(c.r[3], 0u - 1u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003F00B8; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0; set32(c.r[2], 0u - 2u);  if (t) { goto L_003F00A8; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_003F00D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F00E8; } }
    c.budget -= 1;
L_003F00A8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[2], c.r[18].w[0] - 4u);  if (t) { goto L_003F00FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F00E8; } }
L_003F00B8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F00C4u); c.r[5].d[0] = c.r[5].d[0] | 3080ull;  if (depth < kMaxDepth) unit_00BD(c, 82u, depth + 1u); else { c.pc = 0x003F4840u; return; } if (c.pc != 0x003F00C4u) [[unlikely]] return; }
L_003F00C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[18].w[0] - 4u);  if (t) { goto L_003F00FC; } }
    c.budget -= 1;
L_003F00D0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F00DCu); c.r[5].d[0] = c.r[5].d[0] | 3081ull;  if (depth < kMaxDepth) unit_00BD(c, 82u, depth + 1u); else { c.pc = 0x003F4840u; return; } if (c.pc != 0x003F00DCu) [[unlikely]] return; }
L_003F00DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[18].w[0] - 4u);  if (t) { goto L_003F00FC; } }
    c.budget -= 1;
L_003F00E8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F00F8u); c.r[5].d[0] = c.r[5].d[0] | 3079ull;  if (depth < kMaxDepth) unit_00BD(c, 82u, depth + 1u); else { c.pc = 0x003F4840u; return; } if (c.pc != 0x003F00F8u) [[unlikely]] return; }
L_003F00F8:
    set32(c.r[2], c.r[18].w[0] - 4u);
    c.budget -= 1;
L_003F00FC:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 5u);  goto L_003F0118; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0114u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 258u, depth + 1u); else { c.pc = 0x00402A80u; return; } if (c.pc != 0x003F0114u) [[unlikely]] return; }
L_003F0114:
    set32(c.r[2], 0u + 5u);
    c.budget -= 1;
L_003F0118:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003F0128; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003F0130; } }
L_003F0128:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0130u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00BC(c, 19u, depth + 1u); else { c.pc = 0x003F0240u; return; } if (c.pc != 0x003F0130u) [[unlikely]] return; }
L_003F0130:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0138u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 17u, depth + 1u); else { c.pc = 0x003F0210u; return; } if (c.pc != 0x003F0138u) [[unlikely]] return; }
L_003F0138:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003F0188; } }
    c.budget -= 2;
    if (c.r[21].d[0] != 0ull) { c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));  goto L_003F018C; }
    set32(c.r[2], ld32((c.r[19].w[0] + 72u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));  goto L_003F018C; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[5], 0u + 1u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 11;
    { set32(c.r[29], c.r[29].w[0] + 64u);  goto L_003F0240; }
L_003F0188:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 1;
L_003F018C:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003F01A8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F01CCu); set32(c.r[5], ld32((c.r[4].w[0] + 7036u)));  if (depth < kMaxDepth) unit_00BC(c, 223u, depth + 1u); else { c.pc = 0x003F1C18u; return; } if (c.pc != 0x003F01CCu) [[unlikely]] return; }
L_003F01CC:
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[4], ld32((c.r[29].w[0] + 4u)));
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[4].w[0]);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003F01F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0204u); set32(c.r[5], ld32((c.r[4].w[0] + 7036u)));  if (depth < kMaxDepth) unit_00BC(c, 229u, depth + 1u); else { c.pc = 0x003F1D10u; return; } if (c.pc != 0x003F0204u) [[unlikely]] return; }
L_003F0204:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F0210:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 7036u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003F2930; }
L_003F0228:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 7040u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003F2930; }
L_003F0240:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 7040u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003F2910; }
L_003F0260:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0278u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 111u, depth + 1u); else { c.pc = 0x003F0D58u; return; } if (c.pc != 0x003F0278u) [[unlikely]] return; }
L_003F0278:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003F0304; }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003F0304; }
    set32(c.r[2], ld32((c.r[16].w[0] + 7028u)));
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F02A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 27u, depth + 1u); else { c.pc = 0x003F0318u; return; } if (c.pc != 0x003F02A0u) [[unlikely]] return; }
L_003F02A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003F0300; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F02B0u);  if (depth < kMaxDepth) unit_00AF(c, 295u, depth + 1u); else { c.pc = 0x003BE6A0u; return; } if (c.pc != 0x003F02B0u) [[unlikely]] return; }
L_003F02B0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F02BCu); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AF(c, 293u, depth + 1u); else { c.pc = 0x003BE650u; return; } if (c.pc != 0x003F02BCu) [[unlikely]] return; }
L_003F02BC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F02C8u); st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AF(c, 297u, depth + 1u); else { c.pc = 0x003BE6F0u; return; } if (c.pc != 0x003F02C8u) [[unlikely]] return; }
L_003F02C8:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[2], c.r[4].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] + 15u);
    c.r[2].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[3].d[0] = c.r[4].d[0];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 14;
L_003F0300:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003F0304:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 1;
L_003F0308:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F0318:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0328u);  if (depth < kMaxDepth) unit_00AF(c, 265u, depth + 1u); else { c.pc = 0x003BE0A0u; return; } if (c.pc != 0x003F0328u) [[unlikely]] return; }
L_003F0328:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F0340:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 27u);
    c.budget -= 2;
L_003F0348:
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[17], ld32((c.r[4].w[0] + 7028u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0360u); set32(c.r[16], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_00C0(c, 20u, depth + 1u); else { c.pc = 0x00400258u; return; } if (c.pc != 0x003F0360u) [[unlikely]] return; }
L_003F0360:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003F0390; } }
    st32((c.r[17].w[0] + 68u), c.r[3].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BEA60u | kUnwind; return; } [[clang::musttail]] return unit_00AF(c, 324u, depth); }
L_003F0388:
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 1;
    c.pc = 0x003F038Cu; [[clang::musttail]] return dispatch(c, 0u, depth);
L_003F0390:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F03A8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 6u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[16].w[0] + 10680u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F03D4u); set32(c.r[19], c.r[16].w[0] + 10672u);  if (depth < kMaxDepth) unit_00C0(c, 20u, depth + 1u); else { c.pc = 0x00400258u; return; } if (c.pc != 0x003F03D4u) [[unlikely]] return; }
L_003F03D4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_003F04E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F03E8u); st32((c.r[16].w[0] + 7028u), c.r[19].w[0]);  if (depth < kMaxDepth) unit_00BC(c, 41u, depth + 1u); else { c.pc = 0x003F0500u; return; } if (c.pc != 0x003F03E8u) [[unlikely]] return; }
L_003F03E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003F04E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F03F8u);  if (depth < kMaxDepth) unit_00BC(c, 58u, depth + 1u); else { c.pc = 0x003F06B8u; return; } if (c.pc != 0x003F03F8u) [[unlikely]] return; }
L_003F03F8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[18].d[0] != 0ull; c.r[5].d[0] = c.r[5].d[0] | 3076ull;  if (t) { goto L_003F0428; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 48u);  [[clang::musttail]] return unit_00BD(c, 82u, depth); }
L_003F0428:
    set32(c.r[6], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0438u); set32(c.r[5], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_00B4(c, 157u, depth + 1u); else { c.pc = 0x003D1450u; return; } if (c.pc != 0x003F0438u) [[unlikely]] return; }
L_003F0438:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    set32(c.r[11], c.r[5].w[0] - 2992u);
    c.r[5].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[8], c.r[16].w[0] + 10844u);
    set32(c.r[10], c.r[2].w[0] - 3056u);
    set32(c.r[3], c.r[3].w[0] - 3024u);
    set32(c.r[6], c.r[6].w[0] - 2960u);
    c.budget -= 15;
    { const bool t = c.r[9].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] - 2928u);  if (t) { goto L_003F0498; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[5].d[0] = c.r[5].d[0] | 3077ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 48u);  [[clang::musttail]] return unit_00BD(c, 82u, depth); }
L_003F0498:
    st32((c.r[19].w[0] + 4u), c.r[9].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[19].w[0]), c.r[18].w[0]);
    st32((c.r[16].w[0] + 7300u), c.r[8].w[0]);
    st32((c.r[8].w[0] + 20u), c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    st32((c.r[8].w[0] + 4u), c.r[10].w[0]);
    st32((c.r[8].w[0]), c.r[2].w[0]);
    st32((c.r[8].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[8].w[0] + 12u), c.r[11].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F04C8u); st32((c.r[8].w[0] + 16u), c.r[6].w[0]);  if (depth < kMaxDepth) unit_00AF(c, 246u, depth + 1u); else { c.pc = 0x003BDEB8u; return; } if (c.pc != 0x003F04C8u) [[unlikely]] return; }
L_003F04C8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F04D4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00BC(c, 96u, depth + 1u); else { c.pc = 0x003F0B20u; return; } if (c.pc != 0x003F04D4u) [[unlikely]] return; }
L_003F04D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F04DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 64u, depth + 1u); else { c.pc = 0x003F0738u; return; } if (c.pc != 0x003F04DCu) [[unlikely]] return; }
L_003F04DC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003F04E0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F0500:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st64((c.r[29].w[0] + 80u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    set32(c.r[8], c.r[2].w[0] - 19056u);
    st64((c.r[29].w[0] + 72u), c.r[17].d[0]);
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 88u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    set32(c.r[2], ld32((c.r[8].w[0] + 8u)));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] | 3078ull;  if (t) { goto L_003F0540; } }
    set32(c.r[2], ld32((c.r[8].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x003F0000u);  if (t) { goto L_003F0550; } }
L_003F0540:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0548u);  if (depth < kMaxDepth) unit_00BD(c, 82u, depth + 1u); else { c.pc = 0x003F4840u; return; } if (c.pc != 0x003F0548u) [[unlikely]] return; }
L_003F0548:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_003F06A0; } }
L_003F0550:
    set32(c.r[6], 0u - 1u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - 1960u);
    ldl(c.r[5], (c.r[8].w[0] + 7u));
    ldr(c.r[5], (c.r[8].w[0]));
    ldl(c.r[9], (c.r[8].w[0] + 15u));
    ldr(c.r[9], (c.r[8].w[0] + 8u));
    ldl(c.r[10], (c.r[8].w[0] + 23u));
    ldr(c.r[10], (c.r[8].w[0] + 16u));
    set32(c.r[11], ld32((c.r[8].w[0] + 24u)));
    sdl(c.r[5], (c.r[7].w[0] + 15u));
    sdr(c.r[5], (c.r[7].w[0] + 8u));
    sdl(c.r[9], (c.r[7].w[0] + 23u));
    sdr(c.r[9], (c.r[7].w[0] + 16u));
    sdl(c.r[10], (c.r[7].w[0] + 31u));
    sdr(c.r[10], (c.r[7].w[0] + 24u));
    st32((c.r[7].w[0] + 32u), c.r[11].w[0]);
    set32(c.r[5], 0u + 63u);
    st32((c.r[7].w[0] + 40u), c.r[3].w[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[17].d[0] = c.r[17].d[0] | 16960ull;
    st32((c.r[7].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[16], c.r[18].w[0] + 3936u);
    st32((c.r[7].w[0] + 68u), c.r[6].w[0]);
    st32((c.r[7].w[0] + 72u), 0u);
    st32((c.r[7].w[0]), 0u);
    st32((c.r[7].w[0] + 4u), 0u);
    st32((c.r[7].w[0] + 36u), c.r[6].w[0]);
    st32((c.r[7].w[0] + 44u), 0u);
    st32((c.r[7].w[0] + 48u), 0u);
    st32((c.r[7].w[0] + 52u), 0u);
    st32((c.r[7].w[0] + 56u), 0u);
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F05D8u); st32((c.r[7].w[0] + 64u), 0u);  if (depth < kMaxDepth) unit_00C0(c, 20u, depth + 1u); else { c.pc = 0x00400258u; return; } if (c.pc != 0x003F05D8u) [[unlikely]] return; }
L_003F05D8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 64u);
    st64((c.r[29].w[0]), c.r[2].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F05ECu); st64((c.r[29].w[0] + 8u), c.r[17].d[0]);  if (depth < kMaxDepth) unit_00C0(c, 20u, depth + 1u); else { c.pc = 0x00400258u; return; } if (c.pc != 0x003F05ECu) [[unlikely]] return; }
L_003F05EC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 65u);
    st64((c.r[29].w[0] + 16u), c.r[2].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0600u); st64((c.r[29].w[0] + 24u), c.r[17].d[0]);  if (depth < kMaxDepth) unit_00C0(c, 20u, depth + 1u); else { c.pc = 0x00400258u; return; } if (c.pc != 0x003F0600u) [[unlikely]] return; }
L_003F0600:
    set32(c.r[5], 0u + 66u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[2].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0614u); st64((c.r[29].w[0] + 40u), c.r[17].d[0]);  if (depth < kMaxDepth) unit_00C0(c, 20u, depth + 1u); else { c.pc = 0x00400258u; return; } if (c.pc != 0x003F0614u) [[unlikely]] return; }
L_003F0614:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[2].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0624u); st64((c.r[29].w[0] + 56u), c.r[17].d[0]);  if (depth < kMaxDepth) unit_00C0(c, 246u, depth + 1u); else { c.pc = 0x004028E0u; return; } if (c.pc != 0x003F0624u) [[unlikely]] return; }
L_003F0624:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0630u); set32(c.r[5], 0u + 72u);  if (depth < kMaxDepth) unit_00C0(c, 20u, depth + 1u); else { c.pc = 0x00400258u; return; } if (c.pc != 0x003F0630u) [[unlikely]] return; }
L_003F0630:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F063Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 251u, depth + 1u); else { c.pc = 0x00402A00u; return; } if (c.pc != 0x003F063Cu) [[unlikely]] return; }
L_003F063C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0648u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 252u, depth + 1u); else { c.pc = 0x00402A08u; return; } if (c.pc != 0x003F0648u) [[unlikely]] return; }
L_003F0648:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0654u); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_00C0(c, 253u, depth + 1u); else { c.pc = 0x00402A20u; return; } if (c.pc != 0x003F0654u) [[unlikely]] return; }
L_003F0654:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0660u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00C0(c, 254u, depth + 1u); else { c.pc = 0x00402A38u; return; } if (c.pc != 0x003F0660u) [[unlikely]] return; }
L_003F0660:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F066Cu); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_00C0(c, 255u, depth + 1u); else { c.pc = 0x00402A50u; return; } if (c.pc != 0x003F066Cu) [[unlikely]] return; }
L_003F066C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0678u); set32(c.r[5], 0u + 62u);  if (depth < kMaxDepth) unit_00C0(c, 20u, depth + 1u); else { c.pc = 0x00400258u; return; } if (c.pc != 0x003F0678u) [[unlikely]] return; }
L_003F0678:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0684u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 256u, depth + 1u); else { c.pc = 0x00402A68u; return; } if (c.pc != 0x003F0684u) [[unlikely]] return; }
L_003F0684:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0690u); set32(c.r[5], 0u + 61u);  if (depth < kMaxDepth) unit_00C0(c, 20u, depth + 1u); else { c.pc = 0x00400258u; return; } if (c.pc != 0x003F0690u) [[unlikely]] return; }
L_003F0690:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0698u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 145u, depth + 1u); else { c.pc = 0x004093A8u; return; } if (c.pc != 0x003F0698u) [[unlikely]] return; }
L_003F0698:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 2;
L_003F06A0:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 88u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003F06B8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F06CCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 307u, depth + 1u); else { c.pc = 0x003FE830u; return; } if (c.pc != 0x003F06CCu) [[unlikely]] return; }
L_003F06CC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003F06F0; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F06E8u); set32(c.r[5], ld32((c.r[16].w[0] + 24u)));  if (depth < kMaxDepth) unit_00AF(c, 192u, depth + 1u); else { c.pc = 0x003BD778u; return; } if (c.pc != 0x003F06E8u) [[unlikely]] return; }
L_003F06E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003F06FC; } }
L_003F06F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F06F8u);  if (depth < kMaxDepth) unit_00BC(c, 63u, depth + 1u); else { c.pc = 0x003F0728u; return; } if (c.pc != 0x003F06F8u) [[unlikely]] return; }
L_003F06F8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003F06FC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003F0714; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0710u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 342u, depth + 1u); else { c.pc = 0x003BED70u; return; } if (c.pc != 0x003F0710u) [[unlikely]] return; }
L_003F0710:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003F0714:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F0728:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[3].w[0] - 16904u)));  c.pc = t; return; }
L_003F0738:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[5], c.r[5].w[0] + 1912u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0758u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 134u, depth + 1u); else { c.pc = 0x004015E0u; return; } if (c.pc != 0x003F0758u) [[unlikely]] return; }
L_003F0758:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[5], 0u + 15u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C0(c, 9u, depth); }
L_003F0778:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    set32(c.r[19], c.r[16].w[0] + 3936u);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[17], ld32((c.r[16].w[0] + 7028u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F07B4u); set32(c.r[18], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_00C0(c, 111u, depth + 1u); else { c.pc = 0x004012A0u; return; } if (c.pc != 0x003F07B4u) [[unlikely]] return; }
L_003F07B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 4u);  if (t) { goto L_003F0810; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 36u)));  goto L_003F0800; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F07DCu); set32(c.r[7], c.r[29].w[0] + 4u);  if (depth < kMaxDepth) unit_00BC(c, 69u, depth + 1u); else { c.pc = 0x003F0838u; return; } if (c.pc != 0x003F07DCu) [[unlikely]] return; }
L_003F07DC:
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { st32((c.r[20].w[0]), c.r[4].w[0]);  goto L_003F0804; }
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[17].w[0] + 36u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 4;
L_003F0800:
    st32((c.r[20].w[0]), c.r[4].w[0]);
    c.budget -= 1;
L_003F0804:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    st32((c.r[21].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_003F0810:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003F0838:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0868u); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 265u, depth + 1u); else { c.pc = 0x003BE0A0u; return; } if (c.pc != 0x003F0868u) [[unlikely]] return; }
L_003F0868:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[6], c.r[29].w[0] + 52u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0880u); st32((c.r[3].w[0] - 17448u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AF(c, 282u, depth + 1u); else { c.pc = 0x003BE308u; return; } if (c.pc != 0x003F0880u) [[unlikely]] return; }
L_003F0880:
    set32(c.r[3], ld32((c.r[29].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    st64((c.r[29].w[0] + 8u), c.r[3].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0894u); st64((c.r[29].w[0]), c.r[2].d[0]);  if (depth < kMaxDepth) unit_00C2(c, 146u, depth + 1u); else { c.pc = 0x004094A0u; return; } if (c.pc != 0x003F0894u) [[unlikely]] return; }
L_003F0894:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F089Cu); st64((c.r[29].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_00C2(c, 148u, depth + 1u); else { c.pc = 0x004095C8u; return; } if (c.pc != 0x003F089Cu) [[unlikely]] return; }
L_003F089C:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 16u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F08B4u); st64((c.r[29].w[0] + 24u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_00C0(c, 262u, depth + 1u); else { c.pc = 0x00402AE0u; return; } if (c.pc != 0x003F08B4u) [[unlikely]] return; }
L_003F08B4:
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 40u)));
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    st32((c.r[19].w[0]), c.r[3].w[0]);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 88u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003F08E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 7028u)));
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 11;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[18], ld32((c.r[3].w[0] + 4u)));  if (t) { goto L_003F0998; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[7], c.r[2].w[0] - 19056u);
    ldl(c.r[4], (c.r[3].w[0] + 15u));
    ldr(c.r[4], (c.r[3].w[0] + 8u));
    ldl(c.r[5], (c.r[3].w[0] + 23u));
    ldr(c.r[5], (c.r[3].w[0] + 16u));
    ldl(c.r[6], (c.r[3].w[0] + 31u));
    ldr(c.r[6], (c.r[3].w[0] + 24u));
    sdl(c.r[4], (c.r[7].w[0] + 7u));
    sdr(c.r[4], (c.r[7].w[0]));
    sdl(c.r[5], (c.r[7].w[0] + 15u));
    sdr(c.r[5], (c.r[7].w[0] + 8u));
    sdl(c.r[6], (c.r[7].w[0] + 23u));
    sdr(c.r[6], (c.r[7].w[0] + 16u));
    set32(c.r[4], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0950u); st32((c.r[7].w[0] + 24u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_00BF(c, 307u, depth + 1u); else { c.pc = 0x003FE830u; return; } if (c.pc != 0x003F0950u) [[unlikely]] return; }
L_003F0950:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003F0970; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0964u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 81u, depth + 1u); else { c.pc = 0x003F09B0u; return; } if (c.pc != 0x003F0964u) [[unlikely]] return; }
L_003F0964:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003F0984; } }
    c.budget -= 1;
L_003F0970:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0978u);  if (depth < kMaxDepth) unit_00BC(c, 87u, depth + 1u); else { c.pc = 0x003F0A08u; return; } if (c.pc != 0x003F0978u) [[unlikely]] return; }
L_003F0978:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0980u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 83u, depth + 1u); else { c.pc = 0x003F09D0u; return; } if (c.pc != 0x003F0980u) [[unlikely]] return; }
L_003F0980:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003F0984:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0994u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F0994u) [[unlikely]] return; }
L_003F0994:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003F0998:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F09B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F09C0u);  if (depth < kMaxDepth) unit_00AF(c, 211u, depth + 1u); else { c.pc = 0x003BDAB8u; return; } if (c.pc != 0x003F09C0u) [[unlikely]] return; }
L_003F09C0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F09D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] - 16904u), c.r[4].w[0]);  c.pc = t; return; }
L_003F09E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003F09E8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F09F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 96u, depth + 1u); else { c.pc = 0x003F0B20u; return; } if (c.pc != 0x003F09F8u) [[unlikely]] return; }
L_003F09F8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F0A08:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 7028u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0A1Cu); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00AF(c, 259u, depth + 1u); else { c.pc = 0x003BDFE0u; return; } if (c.pc != 0x003F0A1Cu) [[unlikely]] return; }
L_003F0A1C:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F0A30:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[31].d[0]);
    set32(c.r[19], ld32((c.r[20].w[0] + 7028u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[18], ld32((c.r[19].w[0])));  if (t) { goto L_003F0A84; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[19].w[0] + 48u), 0u);  goto L_003F0A80; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003F0A98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003F0B04; } }
L_003F0A80:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003F0A84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0A8Cu);  if (depth < kMaxDepth) unit_00BC(c, 97u, depth + 1u); else { c.pc = 0x003F0B70u; return; } if (c.pc != 0x003F0A8Cu) [[unlikely]] return; }
L_003F0A8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003F0B00; } }
    c.budget -= 1;
L_003F0A98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0AA0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 27u, depth + 1u); else { c.pc = 0x003F0318u; return; } if (c.pc != 0x003F0AA0u) [[unlikely]] return; }
L_003F0AA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003F0B00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0AB0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 295u, depth + 1u); else { c.pc = 0x003BE6A0u; return; } if (c.pc != 0x003F0AB0u) [[unlikely]] return; }
L_003F0AB0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0AC4u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 100u, depth + 1u); else { c.pc = 0x003F0BF8u; return; } if (c.pc != 0x003F0AC4u) [[unlikely]] return; }
L_003F0AC4:
    set32(c.r[2], ld32((c.r[19].w[0] + 48u)));
    set32(c.r[16], ld32((c.r[29].w[0] + 16u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0ADCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 387u, depth + 1u); else { c.pc = 0x003BF200u; return; } if (c.pc != 0x003F0ADCu) [[unlikely]] return; }
L_003F0ADC:
    set32(c.r[4], c.r[20].w[0] + 3936u);
    set32(c.r[16], c.r[16].w[0] - c.r[2].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[19].w[0] + 48u), c.r[16].w[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0AFCu); st64((c.r[29].w[0]), c.r[2].d[0]);  if (depth < kMaxDepth) unit_00C0(c, 259u, depth + 1u); else { c.pc = 0x00402A88u; return; } if (c.pc != 0x003F0AFCu) [[unlikely]] return; }
L_003F0AFC:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003F0B00:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003F0B04:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003F0B20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[4].w[0] + 3936u);
    set32(c.r[3], ld32((c.r[4].w[0] + 7028u)));
    st32((c.r[3].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], ld32((c.r[3].w[0])));  if (t) { goto L_003F0B54; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003F0B68; } }
L_003F0B54:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003F0BB8; }
L_003F0B68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F0B70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 7028u)));
    set32(c.r[4], c.r[4].w[0] + 3936u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], ld32((c.r[3].w[0])));  if (t) { goto L_003F0BA4; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003F0BB0; } }
L_003F0BA4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003F0BB8; }
L_003F0BB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F0BB8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0BD8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 365u, depth + 1u); else { c.pc = 0x003BEFF8u; return; } if (c.pc != 0x003F0BD8u) [[unlikely]] return; }
L_003F0BD8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00C0(c, 257u, depth); }
L_003F0BF8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 4u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0C1Cu); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 156u, depth + 1u); else { c.pc = 0x00401A18u; return; } if (c.pc != 0x003F0C1Cu) [[unlikely]] return; }
L_003F0C1C:
    set32(c.r[5], ld32((c.r[29].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0C2Cu); set32(c.r[6], ld32((c.r[29].w[0] + 4u)));  if (depth < kMaxDepth) unit_00B9(c, 198u, depth + 1u); else { c.pc = 0x003E66B0u; return; } if (c.pc != 0x003F0C2Cu) [[unlikely]] return; }
L_003F0C2C:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F0C48:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[5].d[0] | 3075ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00BD(c, 82u, depth); }
L_003F0C68:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[5].d[0] | 3075ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00BD(c, 82u, depth); }
L_003F0C88:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[5].d[0] | 3075ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00BD(c, 82u, depth); }
L_003F0CA8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[5].d[0] | 3075ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00BD(c, 82u, depth); }
L_003F0CC8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0CE0u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 111u, depth + 1u); else { c.pc = 0x003F0D58u; return; } if (c.pc != 0x003F0CE0u) [[unlikely]] return; }
L_003F0CE0:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[6].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003F0D44; }
    set32(c.r[16], ld32((c.r[16].w[0] + 7028u)));
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], ld32((c.r[16].w[0])));  if (t) { goto L_003F0D40; } }
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003F0D40; } }
    set32(c.r[7], ld32((c.r[6].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0D1Cu); set32(c.r[6], ld32((c.r[6].w[0] + 16u)));  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B6510u; return; } if (c.pc != 0x003F0D1Cu) [[unlikely]] return; }
L_003F0D1C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0D28u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 391u, depth + 1u); else { c.pc = 0x003BF2E8u; return; } if (c.pc != 0x003F0D28u) [[unlikely]] return; }
L_003F0D28:
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 528u);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 60u), c.r[3].w[0]);
    c.budget -= 6;
L_003F0D40:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003F0D44:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F0D58:
    set32(c.r[3], ld32((c.r[4].w[0] + 10928u)));
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 7028u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], c.r[3].w[0] + 3324u);  if (t) { goto L_003F0D80; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    c.r[3].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = 0ull + 0ull;
    if (c.r[3].d[0] == 0) c.r[2].d[0] = c.r[5].d[0];
    c.budget -= 5;
L_003F0D80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003F0D88:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0DACu); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 94u, depth + 1u); else { c.pc = 0x003F4A60u; return; } if (c.pc != 0x003F0DACu) [[unlikely]] return; }
L_003F0DAC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] | 417ull;  if (t) { goto L_003F0DD8; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00BD(c, 82u, depth); }
L_003F0DD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0DE0u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_00C0(c, 20u, depth + 1u); else { c.pc = 0x00400258u; return; } if (c.pc != 0x003F0DE0u) [[unlikely]] return; }
L_003F0DE0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003F0E00; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 7300u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0E00u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F0E00u) [[unlikely]] return; }
L_003F0E00:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F0E18:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0E34u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 94u, depth + 1u); else { c.pc = 0x003F4A60u; return; } if (c.pc != 0x003F0E34u) [[unlikely]] return; }
L_003F0E34:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003F0E58; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0E4Cu); c.r[5].d[0] = c.r[5].d[0] | 418ull;  if (depth < kMaxDepth) unit_00BD(c, 82u, depth + 1u); else { c.pc = 0x003F4840u; return; } if (c.pc != 0x003F0E4Cu) [[unlikely]] return; }
L_003F0E4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003F0E7C; } }
    c.budget -= 1;
L_003F0E58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0E60u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_00C0(c, 20u, depth + 1u); else { c.pc = 0x00400258u; return; } if (c.pc != 0x003F0E60u) [[unlikely]] return; }
L_003F0E60:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003F0E7C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 7300u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0E7Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F0E7Cu) [[unlikely]] return; }
L_003F0E7C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F0E90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0EACu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 94u, depth + 1u); else { c.pc = 0x003F4A60u; return; } if (c.pc != 0x003F0EACu) [[unlikely]] return; }
L_003F0EAC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003F0ED0; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[5].d[0] | 419ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00BD(c, 82u, depth); }
L_003F0ED0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0EDCu); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_00C0(c, 20u, depth + 1u); else { c.pc = 0x00400258u; return; } if (c.pc != 0x003F0EDCu) [[unlikely]] return; }
L_003F0EDC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003F0EF8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 7300u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0EF8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F0EF8u) [[unlikely]] return; }
L_003F0EF8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F0F10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0F24u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 94u, depth + 1u); else { c.pc = 0x003F4A60u; return; } if (c.pc != 0x003F0F24u) [[unlikely]] return; }
L_003F0F24:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] | 420ull;  if (t) { goto L_003F0F48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0F3Cu);  if (depth < kMaxDepth) unit_00BD(c, 82u, depth + 1u); else { c.pc = 0x003F4840u; return; } if (c.pc != 0x003F0F3Cu) [[unlikely]] return; }
L_003F0F3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003F0F6C; } }
    c.budget -= 1;
L_003F0F48:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0F54u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_00C0(c, 20u, depth + 1u); else { c.pc = 0x00400258u; return; } if (c.pc != 0x003F0F54u) [[unlikely]] return; }
L_003F0F54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003F0F6C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 7300u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0F6Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F0F6Cu) [[unlikely]] return; }
L_003F0F6C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F0F80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0FA0u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 20u, depth + 1u); else { c.pc = 0x00400258u; return; } if (c.pc != 0x003F0FA0u) [[unlikely]] return; }
L_003F0FA0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003F0FC4; }
    set32(c.r[2], ld32((c.r[16].w[0] + 7300u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003F0FC0; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0FC0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F0FC0u) [[unlikely]] return; }
L_003F0FC0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003F0FC4:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F0FD8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003F0FE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003F0FE8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 6u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1000u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 20u, depth + 1u); else { c.pc = 0x00400258u; return; } if (c.pc != 0x003F1000u) [[unlikely]] return; }
L_003F1000:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003F1018; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003F1028; }
L_003F1018:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F1028:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F103Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 140u, depth + 1u); else { c.pc = 0x003F1058u; return; } if (c.pc != 0x003F103Cu) [[unlikely]] return; }
L_003F103C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1044u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 143u, depth + 1u); else { c.pc = 0x003F10C8u; return; } if (c.pc != 0x003F1044u) [[unlikely]] return; }
L_003F1044:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F1058:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 7u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1078u); set32(c.r[17], 0u + 1u);  if (depth < kMaxDepth) unit_00C0(c, 242u, depth + 1u); else { c.pc = 0x00402878u; return; } if (c.pc != 0x003F1078u) [[unlikely]] return; }
L_003F1078:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[17].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003F10B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1088u); set32(c.r[5], ld32((c.r[16].w[0] + 7308u)));  if (depth < kMaxDepth) unit_00BC(c, 286u, depth + 1u); else { c.pc = 0x003F28F0u; return; } if (c.pc != 0x003F1088u) [[unlikely]] return; }
L_003F1088:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[17].d[0]; set32(c.r[6], 0u + 1u);  if (t) { goto L_003F10B0; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00C0(c, 241u, depth); }
L_003F10B0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F10C8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 7u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F10E8u); set32(c.r[17], 0u + 1u);  if (depth < kMaxDepth) unit_00C0(c, 244u, depth + 1u); else { c.pc = 0x004028A8u; return; } if (c.pc != 0x003F10E8u) [[unlikely]] return; }
L_003F10E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[17].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003F1120; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F10F8u); set32(c.r[5], ld32((c.r[16].w[0] + 7308u)));  if (depth < kMaxDepth) unit_00BC(c, 288u, depth + 1u); else { c.pc = 0x003F2930u; return; } if (c.pc != 0x003F10F8u) [[unlikely]] return; }
L_003F10F8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[17].d[0]; set32(c.r[6], 0u + 1u);  if (t) { goto L_003F1120; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00C0(c, 243u, depth); }
L_003F1120:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F1138:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 6u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1150u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 20u, depth + 1u); else { c.pc = 0x00400258u; return; } if (c.pc != 0x003F1150u) [[unlikely]] return; }
L_003F1150:
    set32(c.r[3], c.r[16].w[0] + 10844u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_003F1168; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1164u); st32((c.r[16].w[0] + 7300u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00BC(c, 149u, depth + 1u); else { c.pc = 0x003F1178u; return; } if (c.pc != 0x003F1164u) [[unlikely]] return; }
L_003F1164:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003F1168:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F1178:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003F1180:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003F1188:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 6u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F11A0u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 20u, depth + 1u); else { c.pc = 0x00400258u; return; } if (c.pc != 0x003F11A0u) [[unlikely]] return; }
L_003F11A0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 5u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_003F11C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F11C0u);  if (depth < kMaxDepth) unit_00C0(c, 239u, depth + 1u); else { c.pc = 0x00402810u; return; } if (c.pc != 0x003F11C0u) [[unlikely]] return; }
L_003F11C0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F11D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 6u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F11E8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 20u, depth + 1u); else { c.pc = 0x00400258u; return; } if (c.pc != 0x003F11E8u) [[unlikely]] return; }
L_003F11E8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 6u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_003F1208; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1208u);  if (depth < kMaxDepth) unit_00C0(c, 239u, depth + 1u); else { c.pc = 0x00402810u; return; } if (c.pc != 0x003F1208u) [[unlikely]] return; }
L_003F1208:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F1218:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 6u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1230u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 20u, depth + 1u); else { c.pc = 0x00400258u; return; } if (c.pc != 0x003F1230u) [[unlikely]] return; }
L_003F1230:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 7u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_003F1250; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1250u);  if (depth < kMaxDepth) unit_00C0(c, 239u, depth + 1u); else { c.pc = 0x00402810u; return; } if (c.pc != 0x003F1250u) [[unlikely]] return; }
L_003F1250:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F1260:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1280u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 20u, depth + 1u); else { c.pc = 0x00400258u; return; } if (c.pc != 0x003F1280u) [[unlikely]] return; }
L_003F1280:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 8u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_003F12A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F12A0u);  if (depth < kMaxDepth) unit_00C0(c, 239u, depth + 1u); else { c.pc = 0x00402810u; return; } if (c.pc != 0x003F12A0u) [[unlikely]] return; }
L_003F12A0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F12B8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[5].d[0] | 2561ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00BD(c, 82u, depth); }
L_003F12D8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[5].d[0] | 2561ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00BD(c, 82u, depth); }
L_003F12F8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[5].d[0] | 2561ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00BD(c, 82u, depth); }
L_003F1318:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[5].d[0] | 2561ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00BD(c, 82u, depth); }
L_003F1338:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003F1340:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003F1348:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003F1350:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    set32(c.r[17], c.r[16].w[0] + 8u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F138Cu); set32(c.r[6], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00BC(c, 181u, depth + 1u); else { c.pc = 0x003F14B0u; return; } if (c.pc != 0x003F138Cu) [[unlikely]] return; }
L_003F138C:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x003F13ACu);  goto L_003F13B0; }
L_003F13B0:
    c.r[8].d[0] = c.hi.d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F13BCu);  if (depth < kMaxDepth) unit_00BC(c, 183u, depth + 1u); else { c.pc = 0x003F14F0u; return; } if (c.pc != 0x003F13BCu) [[unlikely]] return; }
L_003F13BC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    set32(c.r[8], 0u + 2048u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F13D8u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 183u, depth + 1u); else { c.pc = 0x003F14F0u; return; } if (c.pc != 0x003F13D8u) [[unlikely]] return; }
L_003F13D8:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], 0u + 2u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F13F4u); c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 183u, depth + 1u); else { c.pc = 0x003F14F0u; return; } if (c.pc != 0x003F13F4u) [[unlikely]] return; }
L_003F13F4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_003F1410; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { goto L_003F1410; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_003F1420; } }
L_003F1410:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1418u); c.r[5].d[0] = c.r[5].d[0] | 1034ull;  if (depth < kMaxDepth) unit_00BD(c, 82u, depth + 1u); else { c.pc = 0x003F4840u; return; } if (c.pc != 0x003F1418u) [[unlikely]] return; }
L_003F1418:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003F1490; } }
L_003F1420:
    set32(c.r[8], 0u + 3u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1434u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 194u, depth + 1u); else { c.pc = 0x003F16B8u; return; } if (c.pc != 0x003F1434u) [[unlikely]] return; }
L_003F1434:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1448u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_00BC(c, 197u, depth + 1u); else { c.pc = 0x003F1770u; return; } if (c.pc != 0x003F1448u) [[unlikely]] return; }
L_003F1448:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[8], 0u + 5u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1460u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 194u, depth + 1u); else { c.pc = 0x003F16B8u; return; } if (c.pc != 0x003F1460u) [[unlikely]] return; }
L_003F1460:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1474u); set32(c.r[7], 0u + 6u);  if (depth < kMaxDepth) unit_00BC(c, 197u, depth + 1u); else { c.pc = 0x003F1770u; return; } if (c.pc != 0x003F1474u) [[unlikely]] return; }
L_003F1474:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1488u); set32(c.r[7], 0u + 7u);  if (depth < kMaxDepth) unit_00BC(c, 200u, depth + 1u); else { c.pc = 0x003F1898u; return; } if (c.pc != 0x003F1488u) [[unlikely]] return; }
L_003F1488:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 2;
L_003F1490:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003F14B0:
    c.r[9].d[0] = c.r[4].d[0] + 0ull;
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_003F14C0:
    set32(c.r[2], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[3], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[9].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.r[5].d[0] = c.r[7].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[2].w[0]), c.r[6].w[0]);
    c.budget -= 9;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F14C0u | kUnwind; return; } goto L_003F14C0; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003F14F0:
    set32(c.r[2], c.r[7].w[0] << 3);
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], c.r[2].w[0] - c.r[7].w[0]);
    set32(c.r[9], c.r[7].w[0] << 2);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[9].w[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[16], c.r[4].w[0] + c.r[2].w[0]);
    c.r[7].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + c.r[9].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[17], c.r[16].w[0] + 16u);
    c.budget -= 21;
    { const bool t = c.r[3].d[0] != 0ull; c.r[6].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_003F1550; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 4u);  if (t) { goto L_003F1588; } }
L_003F1550:
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[19], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1560u); set32(c.r[18], 0u + 5u);  if (depth < kMaxDepth) unit_00BC(c, 187u, depth + 1u); else { c.pc = 0x003F15B8u; return; } if (c.pc != 0x003F1560u) [[unlikely]] return; }
L_003F1560:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], 0u + 1u);  if (t) { goto L_003F1580; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003F159C; } }
    c.budget -= 1;
L_003F1580:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1588u);  if (depth < kMaxDepth) unit_00BC(c, 213u, depth + 1u); else { c.pc = 0x003F1A98u; return; } if (c.pc != 0x003F1588u) [[unlikely]] return; }
L_003F1588:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1598u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 202u, depth + 1u); else { c.pc = 0x003F18E8u; return; } if (c.pc != 0x003F1598u) [[unlikely]] return; }
L_003F1598:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003F159C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003F15B8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[6].w[0] - c.r[7].w[0]);
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[16].w[0]), 0u);
    c.budget -= 14;
    { const bool t = c.r[3].sd[0] <= 0; st32((c.r[16].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_003F1600; } }
    st32((c.r[16].w[0] + 16u), c.r[7].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F15FCu); st32((c.r[16].w[0] + 20u), 0u);  if (depth < kMaxDepth) unit_00B4(c, 157u, depth + 1u); else { c.pc = 0x003D1450u; return; } if (c.pc != 0x003F15FCu) [[unlikely]] return; }
L_003F15FC:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 1;
L_003F1600:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F1610:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1628u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 192u, depth + 1u); else { c.pc = 0x003F1650u; return; } if (c.pc != 0x003F1628u) [[unlikely]] return; }
L_003F1628:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1634u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00BC(c, 192u, depth + 1u); else { c.pc = 0x003F1650u; return; } if (c.pc != 0x003F1634u) [[unlikely]] return; }
L_003F1634:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[5], 0u + 2u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003F1650; }
L_003F1650:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + 4416u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[6], 0u + 5u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != c.r[6].d[0]; set32(c.r[16], c.r[4].w[0] + 16u);  if (t) { goto L_003F16A8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003F16A8; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F16A4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F16A4u) [[unlikely]] return; }
L_003F16A4:
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 1;
L_003F16A8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F16B8:
    set32(c.r[2], c.r[8].w[0] << 3);
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], c.r[2].w[0] - c.r[8].w[0]);
    set32(c.r[3], c.r[8].w[0] << 2);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[6].w[0] + c.r[3].w[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], c.r[7].w[0] + c.r[3].w[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[16], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F170Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 202u, depth + 1u); else { c.pc = 0x003F18E8u; return; } if (c.pc != 0x003F170Cu) [[unlikely]] return; }
L_003F170C:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[16], c.r[16].w[0] + 16u);
    set32(c.r[2], c.r[19].w[0] + 5344u);
    set32(c.r[19], c.r[19].w[0] + 6724u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], 0u + 15u);
    c.budget -= 11;
L_003F1738:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[19].w[0]), 0u);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[19], c.r[19].w[0] - 92u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F1738u | kUnwind; return; } goto L_003F1738; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F1770:
    set32(c.r[2], c.r[7].w[0] << 3);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], c.r[2].w[0] - c.r[7].w[0]);
    set32(c.r[3], c.r[7].w[0] << 2);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[5].w[0] + c.r[3].w[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], c.r[6].w[0] + c.r[3].w[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], ld32((c.r[18].w[0])));
    set32(c.r[16], c.r[4].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 16u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F17C0u); c.r[6].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_00BC(c, 202u, depth + 1u); else { c.pc = 0x003F18E8u; return; } if (c.pc != 0x003F17C0u) [[unlikely]] return; }
L_003F17C0:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[18].w[0])));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 44u), 0u);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 20u), 0u);
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0] + 28u), 0u);
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 40u), 0u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F1810:
    set32(c.r[2], c.r[5].w[0] << 3);
    c.r[11].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[11].w[0] + 7u);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[10].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[6].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[7], c.r[11].w[0] + 14u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    if (c.r[6].d[0] != 0) c.r[3].d[0] = c.r[7].d[0];
    set32(c.r[4], c.r[4].w[0] + 4432u);
    c.r[9].d[0] = c.r[10].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 18;
    { const bool t = c.r[9].d[0] != 0ull; set32(c.r[6], ld32((c.r[4].w[0])));  if (t) { goto L_003F1868; } }
    mmi::div(c, 0, c.r[2].w[0], c.r[10].w[0]);
    c.budget -= 3;
    if (c.r[10].d[0] == 0ull) { breakpoint(c, 0x003F1860u);  goto L_003F1864; }
L_003F1864:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 1;
L_003F1868:
    mmi::div(c, 0, c.r[2].w[0], c.r[5].w[0]);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[11].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[10].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 9;
    if (c.r[5].d[0] == 0ull) { breakpoint(c, 0x003F1888u);  goto L_003F188C; }
L_003F188C:
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 28u), c.r[3].w[0]);  c.pc = t; return; }
L_003F1898:
    set32(c.r[2], c.r[7].w[0] << 3);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], c.r[2].w[0] - c.r[7].w[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], 0u + 3u);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[16], c.r[4].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F18D0u); set32(c.r[16], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_00BC(c, 202u, depth + 1u); else { c.pc = 0x003F18E8u; return; } if (c.pc != 0x003F18D0u) [[unlikely]] return; }
L_003F18D0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003F1908; }
L_003F18E8:
    set32(c.r[2], 0u + 9u);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    st32((c.r[4].w[0] + 80u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 76u), c.r[2].w[0]);  c.pc = t; return; }
L_003F1908:
    set32(c.r[2], 0u + 2u);
    c.budget -= 2;
L_003F1910:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[4], c.r[4].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F1910u | kUnwind; return; } goto L_003F1910; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003F1938:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1958u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 210u, depth + 1u); else { c.pc = 0x003F19E0u; return; } if (c.pc != 0x003F1958u) [[unlikely]] return; }
L_003F1958:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_003F1980; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[5].d[0] = c.r[5].d[0] | 1032ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00BD(c, 82u, depth); }
L_003F1980:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1988u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 245u, depth + 1u); else { c.pc = 0x004028C0u; return; } if (c.pc != 0x003F1988u) [[unlikely]] return; }
L_003F1988:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_003F19C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F19A0u);  if (depth < kMaxDepth) unit_00C0(c, 245u, depth + 1u); else { c.pc = 0x004028C0u; return; } if (c.pc != 0x003F19A0u) [[unlikely]] return; }
L_003F19A0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_003F19C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F19B8u);  if (depth < kMaxDepth) unit_00C0(c, 245u, depth + 1u); else { c.pc = 0x004028C0u; return; } if (c.pc != 0x003F19B8u) [[unlikely]] return; }
L_003F19B8:
    set32(c.r[3], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    if (c.r[2].d[0] != 0) c.r[6].d[0] = c.r[3].d[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
L_003F19C8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003F1A28; }
L_003F19E0:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003F1A1C; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003F1A1C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003F1A1C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003F1A1C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[3].sd[0] <= 0) { c.r[2].d[0] = 0ull + 0ull;  goto L_003F1A1C; }
L_003F1A1C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003F1A28:
    set32(c.r[2], c.r[6].w[0] << 3);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], c.r[2].w[0] - c.r[6].w[0]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + 4416u);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[7], 0u + 4u);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == c.r[7].d[0]; set32(c.r[3], c.r[3].w[0] + 16u);  if (t) { goto L_003F1A78; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[5].d[0] | 1033ull;
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00BD(c, 82u, depth); }
L_003F1A78:
    set32(c.r[7], ld32((c.r[8].w[0] + 4u)));
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1A88u); c.r[7].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_00BC(c, 213u, depth + 1u); else { c.pc = 0x003F1A98u; return; } if (c.pc != 0x003F1A88u) [[unlikely]] return; }
L_003F1A88:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F1A98:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1AC8u); c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 102u, depth + 1u); else { c.pc = 0x003F4AF8u; return; } if (c.pc != 0x003F1AC8u) [[unlikely]] return; }
L_003F1AC8:
    st32((c.r[18].w[0] + 4u), c.r[17].w[0]);
    set32(c.r[4], c.r[16].w[0] + 24u);
    ldl(c.r[2], (c.r[19].w[0] + 7u));
    ldr(c.r[2], (c.r[19].w[0]));
    ldl(c.r[3], (c.r[19].w[0] + 15u));
    ldr(c.r[3], (c.r[19].w[0] + 8u));
    ldl(c.r[5], (c.r[19].w[0] + 23u));
    ldr(c.r[5], (c.r[19].w[0] + 16u));
    sdl(c.r[2], (c.r[16].w[0] + 7u));
    sdr(c.r[2], (c.r[16].w[0]));
    sdl(c.r[3], (c.r[16].w[0] + 15u));
    sdr(c.r[3], (c.r[16].w[0] + 8u));
    sdl(c.r[5], (c.r[16].w[0] + 23u));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1B04u); sdr(c.r[5], (c.r[16].w[0] + 16u));  if (depth < kMaxDepth) unit_00BC(c, 218u, depth + 1u); else { c.pc = 0x003F1B38u; return; } if (c.pc != 0x003F1B04u) [[unlikely]] return; }
L_003F1B04:
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 36u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1B14u); set32(c.r[4], c.r[16].w[0] + 40u);  if (depth < kMaxDepth) unit_00BF(c, 341u, depth + 1u); else { c.pc = 0x003FED30u; return; } if (c.pc != 0x003F1B14u) [[unlikely]] return; }
L_003F1B14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1B1Cu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 103u, depth + 1u); else { c.pc = 0x003F4B10u; return; } if (c.pc != 0x003F1B1Cu) [[unlikely]] return; }
L_003F1B1C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003F1B38:
    st32((c.r[4].w[0] + 4u), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), 0u);  c.pc = t; return; }
L_003F1B48:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 4432u);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    ldl(c.r[2], (c.r[7].w[0] + 7u));
    ldr(c.r[2], (c.r[7].w[0]));
    ldl(c.r[3], (c.r[7].w[0] + 15u));
    ldr(c.r[3], (c.r[7].w[0] + 8u));
    sdl(c.r[2], (c.r[4].w[0] + 7u));
    sdr(c.r[2], (c.r[4].w[0]));
    sdl(c.r[3], (c.r[4].w[0] + 15u));
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; sdr(c.r[3], (c.r[4].w[0] + 8u));  c.pc = t; return; }
L_003F1B90:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 4432u);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    ldl(c.r[2], (c.r[4].w[0] + 7u));
    ldr(c.r[2], (c.r[4].w[0]));
    ldl(c.r[3], (c.r[4].w[0] + 15u));
    ldr(c.r[3], (c.r[4].w[0] + 8u));
    sdl(c.r[2], (c.r[7].w[0] + 7u));
    sdr(c.r[2], (c.r[7].w[0]));
    sdl(c.r[3], (c.r[7].w[0] + 15u));
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; sdr(c.r[3], (c.r[7].w[0] + 8u));  c.pc = t; return; }
L_003F1BD8:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4436u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[6].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_003F1C00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003F1C30; }
L_003F1C18:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[7], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003F1C30; }
L_003F1C30:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[17].d[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    st64((c.r[29].w[0] + 72u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 4416u);
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 12u), 0u);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[16].w[0] + 20u), 0u);
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0]), 0u);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    c.budget -= 24;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], ld32((c.r[4].w[0] + 20u)));  if (t) { goto L_003F1CDC; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003F1CE0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1CA0u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00BD(c, 102u, depth + 1u); else { c.pc = 0x003F4AF8u; return; } if (c.pc != 0x003F1CA0u) [[unlikely]] return; }
L_003F1CA0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1CB4u); set32(c.r[7], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_00BC(c, 239u, depth + 1u); else { c.pc = 0x003F1F10u; return; } if (c.pc != 0x003F1CB4u) [[unlikely]] return; }
L_003F1CB4:
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 16u)));
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[5].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1CDCu); st32((c.r[16].w[0] + 8u), c.r[6].w[0]);  if (depth < kMaxDepth) unit_00BD(c, 103u, depth + 1u); else { c.pc = 0x003F4B10u; return; } if (c.pc != 0x003F1CDCu) [[unlikely]] return; }
L_003F1CDC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003F1CE0:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003F1CF8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003F1D28; }
L_003F1D10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[7], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003F1D28; }
L_003F1D28:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], c.r[21].w[0] << 3);
    st64((c.r[29].w[0] + 64u), c.r[22].d[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[21].w[0]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[22].w[0] + 4416u);
    set32(c.r[3], c.r[3].w[0] + c.r[21].w[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[23].d[0]);
    c.r[23].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    set32(c.r[18], c.r[4].w[0] + 16u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 26;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[17], ld32((c.r[18].w[0] + 4u)));  if (t) { goto L_003F1E50; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003F1E50; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003F1E54; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1DACu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 102u, depth + 1u); else { c.pc = 0x003F4AF8u; return; } if (c.pc != 0x003F1DACu) [[unlikely]] return; }
L_003F1DAC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1DBCu); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 245u, depth + 1u); else { c.pc = 0x003F2008u; return; } if (c.pc != 0x003F1DBCu) [[unlikely]] return; }
L_003F1DBC:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_003F1E04; }
    set32(c.r[16], c.r[19].w[0] - c.r[3].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1DE0u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 245u, depth + 1u); else { c.pc = 0x003F2008u; return; } if (c.pc != 0x003F1DE0u) [[unlikely]] return; }
L_003F1DE0:
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_003F1E04; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1DFCu); c.r[5].d[0] = c.r[5].d[0] | 1035ull;  if (depth < kMaxDepth) unit_00BD(c, 82u, depth + 1u); else { c.pc = 0x003F4840u; return; } if (c.pc != 0x003F1DFCu) [[unlikely]] return; }
L_003F1DFC:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_003F1E04:
    c.budget -= 2;
    if (c.r[20].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[18].w[0] + 32u)));  goto L_003F1E30; }
    c.budget -= 2;
    if (c.r[21].d[0] != c.r[20].d[0]) { set32(c.r[2], ld32((c.r[18].w[0] + 36u)));  goto L_003F1E20; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1E1Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 237u, depth + 1u); else { c.pc = 0x003F1E80u; return; } if (c.pc != 0x003F1E1Cu) [[unlikely]] return; }
L_003F1E1C:
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 1;
L_003F1E20:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);  if (t) { goto L_003F1E3C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_003F1E3C; } }
L_003F1E30:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);  if (t) { goto L_003F1E3C; } }
    st32((c.r[18].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 1;
L_003F1E3C:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1E4Cu); st32((c.r[22].w[0] + 68u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BD(c, 103u, depth + 1u); else { c.pc = 0x003F4B10u; return; } if (c.pc != 0x003F1E4Cu) [[unlikely]] return; }
L_003F1E4C:
    c.r[2].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 1;
L_003F1E50:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003F1E54:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003F1E80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    set32(c.r[16], c.r[2].w[0] + 24u);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 16u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1EA8u); set32(c.r[4], ld32((c.r[2].w[0] + 4u)));  if (depth < kMaxDepth) unit_00BC(c, 239u, depth + 1u); else { c.pc = 0x003F1F10u; return; } if (c.pc != 0x003F1EA8u) [[unlikely]] return; }
L_003F1EA8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.r[2].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 16u)));  goto L_003F1ED4; }
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_003F1F00; }
    set32(c.r[4], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 1;
L_003F1ED4:
    c.r[2].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st32((c.r[16].w[0] + 4u), 0u);  goto L_003F1EF8; }
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_003F1F00; }
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 1;
L_003F1EF8:
    st32((c.r[16].w[0]), 0u);
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 2;
L_003F1F00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F1F10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1F48u); c.r[19].d[0] = c.r[6].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F1F48u) [[unlikely]] return; }
L_003F1F48:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1F6Cu); c.r[7].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F1F6Cu) [[unlikely]] return; }
L_003F1F6C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003F1FC0; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1F9Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F1F9Cu) [[unlikely]] return; }
L_003F1F9C:
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1FB4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F1FB4u) [[unlikely]] return; }
L_003F1FB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0])));  if (t) { goto L_003F1FCC; } }
    c.budget -= 1;
L_003F1FC0:
    st32((c.r[17].w[0] + 4u), 0u);
    st32((c.r[17].w[0]), 0u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
L_003F1FCC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1FE0u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F1FE0u) [[unlikely]] return; }
L_003F1FE0:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F2008:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2030u); c.r[7].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F2030u) [[unlikely]] return; }
L_003F2030:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2048u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F2048u) [[unlikely]] return; }
L_003F2048:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F2060:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[16], c.r[4].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 4456u);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F20A0u); c.r[18].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 102u, depth + 1u); else { c.pc = 0x003F4AF8u; return; } if (c.pc != 0x003F20A0u) [[unlikely]] return; }
L_003F20A0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F20B8u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BD(c, 103u, depth + 1u); else { c.pc = 0x003F4B10u; return; } if (c.pc != 0x003F20B8u) [[unlikely]] return; }
L_003F20B8:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F20D0:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[16], c.r[4].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2110u); set32(c.r[16], c.r[16].w[0] + 4456u);  if (depth < kMaxDepth) unit_00BD(c, 102u, depth + 1u); else { c.pc = 0x003F4AF8u; return; } if (c.pc != 0x003F2110u) [[unlikely]] return; }
L_003F2110:
    st32((c.r[16].w[0] + 4u), c.r[17].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2120u); st32((c.r[16].w[0]), c.r[18].w[0]);  if (depth < kMaxDepth) unit_00BD(c, 103u, depth + 1u); else { c.pc = 0x003F4B10u; return; } if (c.pc != 0x003F2120u) [[unlikely]] return; }
L_003F2120:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F2138:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 4444u)));  c.pc = t; return; }
L_003F2158:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 4468u)));  c.pc = t; return; }
L_003F2178:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F21B0u); set32(c.r[16], c.r[3].w[0] + 4432u);  if (depth < kMaxDepth) unit_00BD(c, 102u, depth + 1u); else { c.pc = 0x003F4AF8u; return; } if (c.pc != 0x003F21B0u) [[unlikely]] return; }
L_003F21B0:
    set32(c.r[17], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[18], ld32((c.r[16].w[0] + 36u)));  if (t) { goto L_003F21E0; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  if (t) { goto L_003F21E4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F21DCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F21DCu) [[unlikely]] return; }
L_003F21DC:
    set32(c.r[17], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_003F21E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.budget -= 1;
L_003F21E4:
    c.r[3].d[0] = c.r[17].sd[0] < 0ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F21F8u); if (c.r[3].d[0] != 0) c.r[17].d[0] = c.r[2].d[0];  if (depth < kMaxDepth) unit_00BD(c, 103u, depth + 1u); else { c.pc = 0x003F4B10u; return; } if (c.pc != 0x003F21F8u) [[unlikely]] return; }
L_003F21F8:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F2218:
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[7], c.r[4].w[0] + 4416u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    st32((c.r[6].w[0]), 0u);
    set32(c.r[7], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = c.r[5].d[0] | 1025ull;  if (t) { goto L_003F2260; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00BD(c, 82u, depth); }
L_003F2260:
    set32(c.r[3], ld32((c.r[7].w[0] + 20u)));
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F2278:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 4432u);
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 10;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] + c.r[6].w[0]);  if (t) { goto L_003F22A4; } }
    st32((c.r[4].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 1;
L_003F22A4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003F22B0:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    st64((c.r[29].w[0] + 72u), c.r[21].d[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    set32(c.r[7], c.r[4].w[0] + 4416u);
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[2].w[0]);
    st64((c.r[29].w[0] + 80u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 104u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    c.budget -= 21;
    { const bool t = c.r[3].d[0] != 0ull; c.r[21].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003F2318; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2310u); c.r[5].d[0] = c.r[5].d[0] | 1025ull;  if (depth < kMaxDepth) unit_00BD(c, 82u, depth + 1u); else { c.pc = 0x003F4840u; return; } if (c.pc != 0x003F2310u) [[unlikely]] return; }
L_003F2310:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003F242C; } }
L_003F2318:
    set32(c.r[16], c.r[7].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2324u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 102u, depth + 1u); else { c.pc = 0x003F4AF8u; return; } if (c.pc != 0x003F2324u) [[unlikely]] return; }
L_003F2324:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[19], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[20], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[17], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[23], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[18], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[30], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[22], ld32((c.r[16].w[0] + 32u)));
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[5]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F235Cu); set32(c.r[16], ld32((c.r[16].w[0] + 36u)));  if (depth < kMaxDepth) unit_00BD(c, 103u, depth + 1u); else { c.pc = 0x003F4B10u; return; } if (c.pc != 0x003F235Cu) [[unlikely]] return; }
L_003F235C:
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[2], c.r[19].w[0] + c.r[20].w[0]);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    st32((c.r[21].w[0] + 8u), c.r[18].w[0]);
    st32((c.r[21].w[0]), c.r[3].w[0]);
    st32((c.r[21].w[0] + 4u), c.r[23].w[0]);
    st32((c.r[21].w[0] + 36u), c.r[17].w[0]);
    st32((c.r[21].w[0] + 40u), c.r[19].w[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[5]);  if (t) { goto L_003F2398; } }
    st32((c.r[21].w[0] + 32u), 0u);
    st32((c.r[21].w[0] + 12u), 0u);
    st32((c.r[21].w[0] + 20u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 24u), 0u);  if (t) { goto L_003F23DC; } }
L_003F2398:
    c.r[2].d[0] = c.r[22].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[20].w[0] - c.r[22].w[0]);  goto L_003F23E8; }
    set32(c.r[2], c.r[16].w[0] - c.r[22].w[0]);
    c.r[3].d[0] = c.r[23].sd[0] < 9ll ? 1ull : 0ull;
    st32((c.r[21].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[30].w[0] + c.r[22].w[0]);  if (t) { goto L_003F23C0; } }
    set32(c.r[2], c.r[22].w[0] << 1);
    set32(c.r[2], c.r[30].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_003F23C0:
    st32((c.r[21].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[5].w[0] + c.r[22].w[0]);  if (t) { goto L_003F23D4; } }
    set32(c.r[2], c.r[22].w[0] << 1);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_003F23D4:
    st32((c.r[21].w[0] + 24u), c.r[2].w[0]);
    st32((c.r[21].w[0] + 32u), 0u);
    c.budget -= 2;
L_003F23DC:
    st32((c.r[21].w[0] + 16u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 28u), 0u);  if (t) { goto L_003F2424; } }
L_003F23E8:
    c.r[3].d[0] = c.r[23].sd[0] < 9ll ? 1ull : 0ull;
    st32((c.r[21].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[30].w[0] + c.r[22].w[0]);  if (t) { goto L_003F2400; } }
    set32(c.r[2], c.r[22].w[0] << 1);
    set32(c.r[2], c.r[30].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_003F2400:
    st32((c.r[21].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[5].w[0] + c.r[22].w[0]);  if (t) { goto L_003F2414; } }
    set32(c.r[2], c.r[22].w[0] << 1);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_003F2414:
    st32((c.r[21].w[0] + 32u), c.r[5].w[0]);
    st32((c.r[21].w[0] + 24u), c.r[2].w[0]);
    st32((c.r[21].w[0] + 16u), c.r[16].w[0]);
    st32((c.r[21].w[0] + 28u), c.r[30].w[0]);
    c.budget -= 4;
L_003F2424:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 2;
L_003F242C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 88u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 104u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003F2458:
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[6], c.r[18].w[0] + 4416u);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 18;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);  if (t) { goto L_003F2530; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[6].w[0] + 16u);  goto L_003F24C0; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F24B8u); c.r[5].d[0] = c.r[5].d[0] | 1025ull;  if (depth < kMaxDepth) unit_00BD(c, 82u, depth + 1u); else { c.pc = 0x003F4840u; return; } if (c.pc != 0x003F24B8u) [[unlikely]] return; }
L_003F24B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003F2534; } }
L_003F24C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F24C8u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 102u, depth + 1u); else { c.pc = 0x003F4AF8u; return; } if (c.pc != 0x003F24C8u) [[unlikely]] return; }
L_003F24C8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 28u)));
    c.r[5].d[0] = c.r[5].d[0] | 1030ull;
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[3].d[0] = c.r[2].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    set32(c.r[7], c.r[2].w[0] - c.r[6].w[0]);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[16].w[0] + 32u), c.r[2].w[0]);  if (t) { goto L_003F24F4; } }
    st32((c.r[16].w[0] + 32u), c.r[7].w[0]);
    c.budget -= 1;
L_003F24F4:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[16].w[0] + 40u), c.r[2].w[0]);  if (t) { goto L_003F251C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2518u);  if (depth < kMaxDepth) unit_00BD(c, 82u, depth + 1u); else { c.pc = 0x003F4840u; return; } if (c.pc != 0x003F2518u) [[unlikely]] return; }
L_003F2518:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003F251C:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F252Cu); st32((c.r[18].w[0] + 68u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BD(c, 103u, depth + 1u); else { c.pc = 0x003F4B10u; return; } if (c.pc != 0x003F252Cu) [[unlikely]] return; }
L_003F252C:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_003F2530:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003F2534:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003F2550:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[7], c.r[4].w[0] + 4416u);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[2].w[0]);
    st64((c.r[29].w[0] + 64u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    c.budget -= 21;
    { const bool t = c.r[3].d[0] != 0ull; c.r[21].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003F25B8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F25B0u); c.r[5].d[0] = c.r[5].d[0] | 1025ull;  if (depth < kMaxDepth) unit_00BD(c, 82u, depth + 1u); else { c.pc = 0x003F4840u; return; } if (c.pc != 0x003F25B0u) [[unlikely]] return; }
L_003F25B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003F26D4; } }
L_003F25B8:
    set32(c.r[16], c.r[7].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F25C4u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 102u, depth + 1u); else { c.pc = 0x003F4AF8u; return; } if (c.pc != 0x003F25C4u) [[unlikely]] return; }
L_003F25C4:
    set32(c.r[20], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[19], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[17], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[22], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[18], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[23], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[30], ld32((c.r[16].w[0] + 24u)));
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F25FCu); set32(c.r[16], ld32((c.r[16].w[0] + 36u)));  if (depth < kMaxDepth) unit_00BD(c, 103u, depth + 1u); else { c.pc = 0x003F4B10u; return; } if (c.pc != 0x003F25FCu) [[unlikely]] return; }
L_003F25FC:
    c.r[2].d[0] = c.r[19].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    st32((c.r[21].w[0]), c.r[20].w[0]);
    st32((c.r[21].w[0] + 8u), c.r[18].w[0]);
    st32((c.r[21].w[0] + 4u), c.r[22].w[0]);
    st32((c.r[21].w[0] + 36u), c.r[17].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[21].w[0] + 40u), c.r[19].w[0]);  if (t) { goto L_003F2630; } }
    st32((c.r[21].w[0] + 32u), 0u);
    st32((c.r[21].w[0] + 12u), 0u);
    st32((c.r[21].w[0] + 20u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 24u), 0u);  if (t) { goto L_003F2678; } }
    c.budget -= 1;
L_003F2630:
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 4u)));  goto L_003F2688; }
    set32(c.r[2], c.r[3].w[0] - c.r[16].w[0]);
    c.r[3].d[0] = c.r[22].sd[0] < 9ll ? 1ull : 0ull;
    st32((c.r[21].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[23].w[0] + c.r[16].w[0]);  if (t) { goto L_003F265C; } }
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[23].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_003F265C:
    st32((c.r[21].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[30].w[0] + c.r[16].w[0]);  if (t) { goto L_003F2670; } }
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[30].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_003F2670:
    st32((c.r[21].w[0] + 24u), c.r[2].w[0]);
    st32((c.r[21].w[0] + 32u), 0u);
    c.budget -= 2;
L_003F2678:
    st32((c.r[21].w[0] + 16u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 28u), 0u);  if (t) { goto L_003F26CC; } }
    c.budget -= 1;
L_003F2688:
    set32(c.r[2], c.r[3].w[0] - c.r[16].w[0]);
    c.r[3].d[0] = c.r[22].sd[0] < 9ll ? 1ull : 0ull;
    st32((c.r[21].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[23].w[0] + c.r[16].w[0]);  if (t) { goto L_003F26A4; } }
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[23].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_003F26A4:
    st32((c.r[21].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[30].w[0] + c.r[16].w[0]);  if (t) { goto L_003F26B8; } }
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[30].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_003F26B8:
    st32((c.r[21].w[0] + 32u), c.r[30].w[0]);
    st32((c.r[21].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    st32((c.r[21].w[0] + 28u), c.r[23].w[0]);
    st32((c.r[21].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 5;
L_003F26CC:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_003F26D4:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 88u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003F2700:
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[6], c.r[18].w[0] + 4416u);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 18;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);  if (t) { goto L_003F27D4; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[6].w[0] + 16u);  goto L_003F2768; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2760u); c.r[5].d[0] = c.r[5].d[0] | 1025ull;  if (depth < kMaxDepth) unit_00BD(c, 82u, depth + 1u); else { c.pc = 0x003F4840u; return; } if (c.pc != 0x003F2760u) [[unlikely]] return; }
L_003F2760:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003F27D8; } }
L_003F2768:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2770u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 102u, depth + 1u); else { c.pc = 0x003F4AF8u; return; } if (c.pc != 0x003F2770u) [[unlikely]] return; }
L_003F2770:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.r[5].d[0] = c.r[5].d[0] | 1031ull;
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[6], c.r[2].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[16].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_003F279C; } }
    st32((c.r[16].w[0] + 36u), c.r[6].w[0]);
    c.budget -= 1;
L_003F279C:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[16].w[0] + 44u), c.r[2].w[0]);  if (t) { goto L_003F27C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F27BCu);  if (depth < kMaxDepth) unit_00BD(c, 82u, depth + 1u); else { c.pc = 0x003F4840u; return; } if (c.pc != 0x003F27BCu) [[unlikely]] return; }
L_003F27BC:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003F27C0:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F27D0u); st32((c.r[18].w[0] + 68u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BD(c, 103u, depth + 1u); else { c.pc = 0x003F4B10u; return; } if (c.pc != 0x003F27D0u) [[unlikely]] return; }
L_003F27D0:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_003F27D4:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003F27D8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003F27F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003F27F8:
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003F2808:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[8], c.r[4].w[0] + 4416u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[8].w[0] + 4u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], 0u + 11u);  if (t) { goto L_003F2850; } }
    set32(c.r[5], ld32((c.r[8].w[0] + 76u)));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C0(c, 239u, depth); }
L_003F2850:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F2860:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[8], c.r[16].w[0] + 4416u);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[8], c.r[8].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[8].w[0] + 4u)));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], 0u + 12u);  if (t) { goto L_003F28B0; } }
    set32(c.r[5], ld32((c.r[8].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F28ACu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 239u, depth + 1u); else { c.pc = 0x00402810u; return; } if (c.pc != 0x003F28ACu) [[unlikely]] return; }
L_003F28AC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003F28B0:
    set32(c.r[3], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F28D0:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4424u), c.r[6].w[0]);  c.pc = t; return; }
L_003F28F0:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 4424u)));  c.pc = t; return; }
L_003F2910:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4428u), c.r[6].w[0]);  c.pc = t; return; }
L_003F2930:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 4428u)));  c.pc = t; return; }
L_003F2950:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2960u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 223u, depth + 1u); else { c.pc = 0x003F1C18u; return; } if (c.pc != 0x003F2960u) [[unlikely]] return; }
L_003F2960:
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 12u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F2978:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2988u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 222u, depth + 1u); else { c.pc = 0x003F1C00u; return; } if (c.pc != 0x003F2988u) [[unlikely]] return; }
L_003F2988:
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 12u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F29A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F29B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 94u, depth + 1u); else { c.pc = 0x003F4A60u; return; } if (c.pc != 0x003F29B4u) [[unlikely]] return; }
L_003F29B4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] | 353ull;  if (t) { goto L_003F29E0; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00BD(c, 82u, depth); }
L_003F29E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F29E8u); set32(c.r[5], 0u + 49u);  if (depth < kMaxDepth) unit_00C0(c, 9u, depth + 1u); else { c.pc = 0x00400090u; return; } if (c.pc != 0x003F29E8u) [[unlikely]] return; }
L_003F29E8:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F2A00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2A10u); set32(c.r[5], 0u + 49u);  if (depth < kMaxDepth) unit_00C0(c, 20u, depth + 1u); else { c.pc = 0x00400258u; return; } if (c.pc != 0x003F2A10u) [[unlikely]] return; }
L_003F2A10:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F2A20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 49u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2A38u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 20u, depth + 1u); else { c.pc = 0x00400258u; return; } if (c.pc != 0x003F2A38u) [[unlikely]] return; }
L_003F2A38:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 56u);  if (t) { goto L_003F2A54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2A4Cu);  if (depth < kMaxDepth) unit_00C0(c, 20u, depth + 1u); else { c.pc = 0x00400258u; return; } if (c.pc != 0x003F2A4Cu) [[unlikely]] return; }
L_003F2A4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003F2A5C; } }
L_003F2A54:
    set32(c.r[2], 0u + 1u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_003F2A5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F2A68:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 49u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2A80u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 20u, depth + 1u); else { c.pc = 0x00400258u; return; } if (c.pc != 0x003F2A80u) [[unlikely]] return; }
L_003F2A80:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 57u);  if (t) { goto L_003F2A9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2A94u);  if (depth < kMaxDepth) unit_00C0(c, 20u, depth + 1u); else { c.pc = 0x00400258u; return; } if (c.pc != 0x003F2A94u) [[unlikely]] return; }
L_003F2A94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003F2AA4; } }
L_003F2A9C:
    set32(c.r[2], 0u + 1u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_003F2AA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F2AB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[16], c.r[18].w[0] + 3264u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2AD8u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 102u, depth + 1u); else { c.pc = 0x003F4AF8u; return; } if (c.pc != 0x003F2AD8u) [[unlikely]] return; }
L_003F2AD8:
    set32(c.r[6], ld32((c.r[16].w[0] + 288u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 292u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 288u), c.r[6].w[0]);
    set32(c.r[7], c.r[3].w[0] + 31u);
    c.r[5].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    if (c.r[5].d[0] != 0) c.r[2].d[0] = c.r[7].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st32((c.r[2].w[0] + 3560u), c.r[6].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2B20u); st32((c.r[16].w[0] + 292u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00BD(c, 103u, depth + 1u); else { c.pc = 0x003F4B10u; return; } if (c.pc != 0x003F2B20u) [[unlikely]] return; }
L_003F2B20:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F2B38:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[16], c.r[17].w[0] + 3264u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    c.r[20].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2B70u); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 102u, depth + 1u); else { c.pc = 0x003F4AF8u; return; } if (c.pc != 0x003F2B70u) [[unlikely]] return; }
L_003F2B70:
    set32(c.r[7], ld32((c.r[16].w[0] + 432u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 436u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[7].w[0] + 31u);
    c.r[5].d[0] = c.r[7].sd[0] < 0ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[3], c.r[7].w[0] - c.r[3].w[0]);
    if (c.r[5].d[0] != 0) c.r[2].d[0] = c.r[6].d[0];
    c.r[3].d[0] = c.r[3].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));  if (t) { goto L_003F2BC4; } }
    set32(c.r[2], c.r[2].w[0] << 5);
    st32((c.r[16].w[0] + 424u), c.r[18].w[0]);
    set32(c.r[2], c.r[7].w[0] - c.r[2].w[0]);
    set32(c.r[20], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 3704u), c.r[19].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 432u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 432u), c.r[3].w[0]);
    c.budget -= 10;
L_003F2BC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2BCCu);  if (depth < kMaxDepth) unit_00BD(c, 103u, depth + 1u); else { c.pc = 0x003F4B10u; return; } if (c.pc != 0x003F2BCCu) [[unlikely]] return; }
L_003F2BCC:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003F2BF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[16], c.r[18].w[0] + 3264u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2C24u); c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 102u, depth + 1u); else { c.pc = 0x003F4AF8u; return; } if (c.pc != 0x003F2C24u) [[unlikely]] return; }
L_003F2C24:
    set32(c.r[3], ld32((c.r[16].w[0] + 436u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 432u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] > 0; c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_003F2C48; } }
    set32(c.r[2], 0u - 1u);
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.r[2].w[0]);  if (t) { goto L_003F2C90; } }
L_003F2C48:
    set32(c.r[2], ld32((c.r[16].w[0] + 424u)));
    set32(c.r[20], 0u + 1u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 436u)));
    c.r[5].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[6], c.r[3].w[0] + 31u);
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    if (c.r[5].d[0] != 0) c.r[2].d[0] = c.r[6].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 3704u)));
    st32((c.r[19].w[0]), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 436u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 436u), c.r[2].w[0]);
    c.budget -= 18;
L_003F2C90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2C98u);  if (depth < kMaxDepth) unit_00BD(c, 103u, depth + 1u); else { c.pc = 0x003F4B10u; return; } if (c.pc != 0x003F2C98u) [[unlikely]] return; }
L_003F2C98:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003F2CC0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[31].d[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2D00u); c.r[23].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 94u, depth + 1u); else { c.pc = 0x003F4A60u; return; } if (c.pc != 0x003F2D00u) [[unlikely]] return; }
L_003F2D00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003F2D20; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2D14u); c.r[5].d[0] = c.r[5].d[0] | 354ull;  if (depth < kMaxDepth) unit_00BD(c, 82u, depth + 1u); else { c.pc = 0x003F4840u; return; } if (c.pc != 0x003F2D14u) [[unlikely]] return; }
L_003F2D14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003F2DEC; } }
    c.budget -= 1;
L_003F2D20:
    set32(c.r[22], ld32((c.r[16].w[0] + 3528u)));
    set32(c.r[17], c.r[16].w[0] + 3264u);
    st32((c.r[23].w[0]), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2D3Cu); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 86u, depth + 1u); else { c.pc = 0x00400E40u; return; } if (c.pc != 0x003F2D3Cu) [[unlikely]] return; }
L_003F2D3C:
    set32(c.r[3], ld32((c.r[17].w[0] + 288u)));
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003F2DE8; } }
    set32(c.r[4], ld32((c.r[20].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_003F2DE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2D64u); set32(c.r[21], c.r[16].w[0] + 3272u);  if (depth < kMaxDepth) unit_00BD(c, 102u, depth + 1u); else { c.pc = 0x003F4AF8u; return; } if (c.pc != 0x003F2D64u) [[unlikely]] return; }
L_003F2D64:
    set32(c.r[16], ld32((c.r[17].w[0] + 292u)));
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_003F2D70:
    c.r[2].d[0] = c.r[17].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_003F2DC4; } }
    set32(c.r[4], c.r[16].w[0] + 31u);
    c.r[3].d[0] = c.r[16].sd[0] < 0ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[20].w[0])));
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[16].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2DB0u); set32(c.r[4], ld32((c.r[2].w[0] + 288u)));  if (depth < kMaxDepth) unit_00B9(c, 198u, depth + 1u); else { c.pc = 0x003E66B0u; return; } if (c.pc != 0x003F2DB0u) [[unlikely]] return; }
L_003F2DB0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] - 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F2D70u | kUnwind; return; } goto L_003F2D70; }
L_003F2DC4:
    st32((c.r[23].w[0]), c.r[16].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] - c.r[18].w[0]);
    c.r[3].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2DE4u); st32((c.r[19].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BD(c, 103u, depth + 1u); else { c.pc = 0x003F4B10u; return; } if (c.pc != 0x003F2DE4u) [[unlikely]] return; }
L_003F2DE4:
    c.r[2].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 1;
L_003F2DE8:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003F2DEC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 88u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003F2E18:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2E40u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 102u, depth + 1u); else { c.pc = 0x003F4AF8u; return; } if (c.pc != 0x003F2E40u) [[unlikely]] return; }
L_003F2E40:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2E50u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 325u, depth + 1u); else { c.pc = 0x003F2F10u; return; } if (c.pc != 0x003F2E50u) [[unlikely]] return; }
L_003F2E50:
    set32(c.r[8], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != 0ull; c.r[4].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_003F2E78; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003F2E7C; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);  if (t) { goto L_003F2E84; } }
L_003F2E78:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003F2E7C:
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.budget -= 2;
L_003F2E84:
    set32(c.r[2], c.r[2].w[0] - 31216u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_003F2ED8; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[2], c.r[4].w[0] + 15u);
    set32(c.r[4], c.r[4].w[0] + 30u);
    set32(c.r[3], c.r[5].w[0] + 15u);
    set32(c.r[5], c.r[5].w[0] + 30u);
    c.r[6].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.r[7].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[6].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];
    if (c.r[7].d[0] != 0) c.r[3].d[0] = c.r[5].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.r[2].sd[0] < 1621ll ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F2ED8; } }
    st32((c.r[18].w[0] + 8u), 0u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003F2ED8:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003F2EEC; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003F2EF0; } }
L_003F2EEC:
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_003F2EF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2EF8u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 103u, depth + 1u); else { c.pc = 0x003F4B10u; return; } if (c.pc != 0x003F2EF8u) [[unlikely]] return; }
L_003F2EF8:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F2F10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2F38u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 331u, depth + 1u); else { c.pc = 0x003F2FA8u; return; } if (c.pc != 0x003F2F38u) [[unlikely]] return; }
L_003F2F38:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2F48u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 333u, depth + 1u); else { c.pc = 0x003F3008u; return; } if (c.pc != 0x003F2F48u) [[unlikely]] return; }
L_003F2F48:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003F2F90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2F60u);  if (depth < kMaxDepth) unit_00BC(c, 387u, depth + 1u); else { c.pc = 0x003F39F0u; return; } if (c.pc != 0x003F2F60u) [[unlikely]] return; }
L_003F2F60:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003F2F94; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2F78u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 368u, depth + 1u); else { c.pc = 0x003F3538u; return; } if (c.pc != 0x003F2F78u) [[unlikely]] return; }
L_003F2F78:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003F2F90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2F90u);  if (depth < kMaxDepth) unit_00BC(c, 381u, depth + 1u); else { c.pc = 0x003F37D8u; return; } if (c.pc != 0x003F2F90u) [[unlikely]] return; }
L_003F2F90:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003F2F94:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F2FA8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 64u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2FC4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003F2FC4u) [[unlikely]] return; }
L_003F2FC4:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 44u), 0u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 20u), 0u);
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0] + 28u), 0u);
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 36u), 0u);
    st8((c.r[16].w[0] + 40u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F3008:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3030u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 338u, depth + 1u); else { c.pc = 0x003F30C0u; return; } if (c.pc != 0x003F3030u) [[unlikely]] return; }
L_003F3030:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], 0u - 1u);  if (t) { goto L_003F30A8; } }
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_003F30A8; } }
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; set32(c.r[2], c.r[3].w[0] << 1);  if (t) { goto L_003F3068; } }
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 5;
L_003F3068:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 31288u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3084u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 348u, depth + 1u); else { c.pc = 0x003F3240u; return; } if (c.pc != 0x003F3084u) [[unlikely]] return; }
L_003F3084:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3094u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 354u, depth + 1u); else { c.pc = 0x003F3348u; return; } if (c.pc != 0x003F3094u) [[unlikely]] return; }
L_003F3094:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F30A4u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 387u, depth + 1u); else { c.pc = 0x003F39F0u; return; } if (c.pc != 0x003F30A4u) [[unlikely]] return; }
L_003F30A4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003F30A8:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F30C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F30FCu); st32((c.r[22].w[0]), 0u);  if (depth < kMaxDepth) unit_00BC(c, 361u, depth + 1u); else { c.pc = 0x003F3450u; return; } if (c.pc != 0x003F30FCu) [[unlikely]] return; }
L_003F30FC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], c.r[17].w[0] - c.r[19].w[0]);
    set32(c.r[4], c.r[17].w[0] + 1u);
    c.budget -= 6;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[21], c.r[20].w[0] - c.r[18].w[0]);  if (t) { goto L_003F3180; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F311Cu); set32(c.r[5], c.r[21].w[0] - 1u);  if (depth < kMaxDepth) unit_00BC(c, 361u, depth + 1u); else { c.pc = 0x003F3450u; return; } if (c.pc != 0x003F311Cu) [[unlikely]] return; }
L_003F311C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[16].w[0] - c.r[19].w[0]);
    set32(c.r[4], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[5], c.r[20].w[0] - c.r[3].w[0]);  if (t) { goto L_003F3180; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F313Cu); set32(c.r[5], c.r[5].w[0] - 1u);  if (depth < kMaxDepth) unit_00BC(c, 361u, depth + 1u); else { c.pc = 0x003F3450u; return; } if (c.pc != 0x003F313Cu) [[unlikely]] return; }
L_003F313C:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] - c.r[16].w[0]);  if (t) { goto L_003F3180; } }
    set32(c.r[16], c.r[16].w[0] - c.r[17].w[0]);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[4].d[0]; set32(c.r[2], 0u - 1u);  if (t) { goto L_003F3180; } }
    mmi::div(c, 0, c.r[18].w[0], c.r[16].w[0]);
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x003F315Cu);  goto L_003F3160; }
L_003F3160:
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003F3184; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F317Cu); c.r[6].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 343u, depth + 1u); else { c.pc = 0x003F31A8u; return; } if (c.pc != 0x003F317Cu) [[unlikely]] return; }
L_003F317C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003F3180:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003F3184:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003F31A8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F31D0u); c.r[19].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 125u, depth + 1u); else { c.pc = 0x003E3008u; return; } if (c.pc != 0x003F31D0u) [[unlikely]] return; }
L_003F31D0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[8], c.r[29].w[0] + 20u);  if (t) { goto L_003F3224; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F31F4u);  if (depth < kMaxDepth) unit_00B8(c, 60u, depth + 1u); else { c.pc = 0x003E1018u; return; } if (c.pc != 0x003F31F4u) [[unlikely]] return; }
L_003F31F4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003F3224; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3214u);  if (depth < kMaxDepth) unit_00B8(c, 86u, depth + 1u); else { c.pc = 0x003E29E8u; return; } if (c.pc != 0x003F3214u) [[unlikely]] return; }
L_003F3214:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F321Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 141u, depth + 1u); else { c.pc = 0x003E3180u; return; } if (c.pc != 0x003F321Cu) [[unlikely]] return; }
L_003F321C:
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    st32((c.r[19].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_003F3224:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003F3240:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[20].w[0] + 16u)));  if (t) { goto L_003F3290; } }
    c.budget -= 1;
L_003F3278:
    set32(c.r[16], c.r[16].w[0] - c.r[18].w[0]);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[17], c.r[17].w[0] + c.r[18].w[0]);  if (t) { goto L_003F32D4; } }
    c.budget -= 2;
    if (c.r[16].sd[0] <= 0) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003F32D8; }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_003F3290:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F329Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 402u, depth + 1u); else { c.pc = 0x003F3CC8u; return; } if (c.pc != 0x003F329Cu) [[unlikely]] return; }
L_003F329C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[19].sd[0] < 3ll ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F3278u | kUnwind; return; } goto L_003F3278; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], c.r[2].w[0] - 16976u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F32BCu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 352u, depth + 1u); else { c.pc = 0x003F32F8u; return; } if (c.pc != 0x003F32BCu) [[unlikely]] return; }
L_003F32BC:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003F32D8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { st32((c.r[20].w[0] + 28u), c.r[2].w[0]);  goto L_003F32D8; }
L_003F32D4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003F32D8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F32F8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = c.r[5].sd[0] < 2049ll ? 1ull : 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], 0u + 2048u);
    if (c.r[2].d[0] != 0) c.r[16].d[0] = c.r[5].d[0];
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 148u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3328u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 36u, depth + 1u); else { c.pc = 0x003E0A78u; return; } if (c.pc != 0x003F3328u) [[unlikely]] return; }
L_003F3328:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 144u), c.r[16].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003F3F60; }
L_003F3348:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    set32(c.r[22], c.r[20].w[0] + c.r[19].w[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; set32(c.r[23], ld32((c.r[21].w[0] + 16u)));  if (t) { goto L_003F33A8; } }
L_003F3388:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3390u);  if (depth < kMaxDepth) unit_00BC(c, 381u, depth + 1u); else { c.pc = 0x003F37D8u; return; } if (c.pc != 0x003F3390u) [[unlikely]] return; }
L_003F3390:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003F3424; } }
    set32(c.r[2], c.r[18].w[0] - c.r[20].w[0]);
    c.budget -= 1;
L_003F339C:
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[19], c.r[19].w[0] - c.r[2].w[0]);
    set32(c.r[20], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 3;
L_003F33A8:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] <= 0; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003F3424; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F33C0u); c.r[6].sd[0] = static_cast<std::int32_t>(0x00040000u);  if (depth < kMaxDepth) unit_00BC(c, 361u, depth + 1u); else { c.pc = 0x003F3450u; return; } if (c.pc != 0x003F33C0u) [[unlikely]] return; }
L_003F33C0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[5], c.r[22].w[0] - c.r[18].w[0]);  if (t) { goto L_003F3420; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 3u));
    set32(c.r[2], c.r[2].w[0] + 64u);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(32ll) ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[18].w[0] - c.r[20].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F339Cu | kUnwind; return; } goto L_003F339C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F33F0u); c.r[16].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 364u, depth + 1u); else { c.pc = 0x003F34B8u; return; } if (c.pc != 0x003F33F0u) [[unlikely]] return; }
L_003F33F0:
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[22].w[0] - c.r[17].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[3].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[16].d[0] = c.r[2].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3410u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 368u, depth + 1u); else { c.pc = 0x003F3538u; return; } if (c.pc != 0x003F3410u) [[unlikely]] return; }
L_003F3410:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F3388u | kUnwind; return; } goto L_003F3388; } }
L_003F3420:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003F3424:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003F3450:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F349C; } }
L_003F3478:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3480u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 77u, depth + 1u); else { c.pc = 0x003E2940u; return; } if (c.pc != 0x003F3480u) [[unlikely]] return; }
L_003F3480:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[18].d[0]; set32(c.r[17], c.r[17].w[0] - 1u);  if (t) { goto L_003F3490; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003F34A0; } }
L_003F3490:
    c.r[2].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F3478u | kUnwind; return; } goto L_003F3478; } }
L_003F349C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003F34A0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F34B8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F34D8u); c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 125u, depth + 1u); else { c.pc = 0x003E3008u; return; } if (c.pc != 0x003F34D8u) [[unlikely]] return; }
L_003F34D8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[16].sd[0] < 7ll ? 1ull : 0ull;
    set32(c.r[3], 0u + 6u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    if (c.r[2].d[0] != 0) c.r[3].d[0] = c.r[16].d[0];
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[8], c.r[29].w[0] + 4u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[2], c.r[18].w[0] + c.r[3].w[0]);  if (t) { goto L_003F351C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F350Cu);  if (depth < kMaxDepth) unit_00B8(c, 60u, depth + 1u); else { c.pc = 0x003E1018u; return; } if (c.pc != 0x003F350Cu) [[unlikely]] return; }
L_003F350C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3514u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 141u, depth + 1u); else { c.pc = 0x003E3180u; return; } if (c.pc != 0x003F3514u) [[unlikely]] return; }
L_003F3514:
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_003F351C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F3538:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F355Cu); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 373u, depth + 1u); else { c.pc = 0x003F35D0u; return; } if (c.pc != 0x003F355Cu) [[unlikely]] return; }
L_003F355C:
    set32(c.r[4], c.r[16].w[0] + 2u);
    set32(c.r[5], c.r[17].w[0] - 2u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003F359C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3574u);  if (depth < kMaxDepth) unit_00BC(c, 373u, depth + 1u); else { c.pc = 0x003F35D0u; return; } if (c.pc != 0x003F3574u) [[unlikely]] return; }
L_003F3574:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_003F35B4; }
    set32(c.r[4], c.r[16].w[0] + 1u);
    set32(c.r[5], c.r[17].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F358Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 373u, depth + 1u); else { c.pc = 0x003F35D0u; return; } if (c.pc != 0x003F358Cu) [[unlikely]] return; }
L_003F358C:
    set32(c.r[4], c.r[16].w[0] + 3u);
    set32(c.r[5], c.r[17].w[0] - 3u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003F35A8; } }
L_003F359C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003F35B4; } }
    c.budget -= 1;
L_003F35A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F35B0u);  if (depth < kMaxDepth) unit_00BC(c, 373u, depth + 1u); else { c.pc = 0x003F35D0u; return; } if (c.pc != 0x003F35B0u) [[unlikely]] return; }
L_003F35B0:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003F35B4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F35D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[3].d[0] = c.r[16].sd[0] < 2049ll ? 1ull : 0ull;
    set32(c.r[5], 0u + 2048u);
    if (c.r[3].d[0] == 0) c.r[16].d[0] = c.r[5].d[0];
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 19024u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3618u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x003F3618u) [[unlikely]] return; }
L_003F3618:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003F368C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[19], c.r[2].w[0] - 31912u);
    c.budget -= 2;
L_003F3628:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 4u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F363Cu); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 490u, depth + 1u); else { c.pc = 0x003EF370u; return; } if (c.pc != 0x003F363Cu) [[unlikely]] return; }
L_003F363C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003F3680; } }
    st32((c.r[18].w[0] + 12u), c.r[19].w[0]);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 7u));
    st8((c.r[18].w[0] + 40u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].d[0] = ld8((c.r[17].w[0] + 9u));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 8u));
    c.r[4].d[0] = ld8((c.r[17].w[0] + 10u));
    set32(c.r[5], c.r[5].w[0] << 16);
    c.r[6].d[0] = ld8((c.r[17].w[0] + 11u));
    set32(c.r[3], c.r[3].w[0] << 24);
    set32(c.r[4], c.r[4].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 44u), c.r[3].w[0]);  if (t) { goto L_003F368C; } }
L_003F3680:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] > 0; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F3628u | kUnwind; return; } goto L_003F3628; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003F368C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003F36A8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F36C4u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 383u, depth + 1u); else { c.pc = 0x003F38A0u; return; } if (c.pc != 0x003F36C4u) [[unlikely]] return; }
L_003F36C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u - 1u);  if (t) { goto L_003F36D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003F3714; } }
    c.budget -= 1;
L_003F36D8:
    c.r[3].d[0] = ld8((c.r[29].w[0]));
    set32(c.r[2], 0u - 1u);
    c.r[4].d[0] = ld8((c.r[29].w[0] + 2u));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[1], c.r[1].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] - 31696u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[4], c.r[3].w[0] << 5);  if (t) { goto L_003F3714; } }
    set32(c.r[2], c.r[4].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 4;
L_003F3714:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F3720:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F373Cu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 383u, depth + 1u); else { c.pc = 0x003F38A0u; return; } if (c.pc != 0x003F373Cu) [[unlikely]] return; }
L_003F373C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], 0u - 1u);  if (t) { goto L_003F3750; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003F37C8; } }
    c.budget -= 1;
L_003F3750:
    c.r[3].d[0] = ld8((c.r[29].w[0]));
    c.r[4].d[0] = ld8((c.r[29].w[0] + 2u));
    set32(c.r[5], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[1], c.r[1].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] - 31696u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[6].d[0]; set32(c.r[2], 0u - 1u);  if (t) { goto L_003F37C8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] - 31440u)));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 3u));
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] - 31712u)));
    set32(c.r[2], c.r[4].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    c.budget -= 14;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x003F37B0u);  goto L_003F37B4; }
L_003F37B4:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 5;
L_003F37C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F37D8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3800u); c.r[6].d[0] = c.r[3].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 383u, depth + 1u); else { c.pc = 0x003F38A0u; return; } if (c.pc != 0x003F3800u) [[unlikely]] return; }
L_003F3800:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_003F388C; } }
    c.r[2].d[0] = ld8((c.r[29].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);  if (t) { goto L_003F385C; } }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = ld8((c.r[29].w[0] + 3u));  if (t) { goto L_003F3858; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);  if (t) { goto L_003F385C; } }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 6u));
    c.r[4].d[0] = ld8((c.r[29].w[0] + 3u));
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] - 31728u));
    set32(c.r[4], c.r[4].w[0] << 2);
    st8((c.r[16].w[0] + 40u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] - 31712u)));
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 12;
L_003F3858:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 1;
L_003F385C:
    set32(c.r[6], c.r[2].w[0] - 17440u);
    ldl(c.r[3], (c.r[29].w[0] + 7u));
    ldr(c.r[3], (c.r[29].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 8u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 9u)));
    sdl(c.r[3], (c.r[6].w[0] + 7u));
    sdr(c.r[3], (c.r[6].w[0]));
    st8((c.r[6].w[0] + 8u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[6].w[0] + 9u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 10u)));
    st8((c.r[6].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 12;
L_003F388C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F38A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0] + 56u), c.r[31].d[0]);  if (t) { goto L_003F3944; } }
    set32(c.r[22], 0u + 255u);
    set32(c.r[21], 0u + 248u);
    set32(c.r[20], 0u + 15u);
    set32(c.r[19], 0u + 3u);
    c.budget -= 4;
L_003F38E8:
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[22].d[0]) { set32(c.r[18], c.r[18].w[0] - 1u);  goto L_003F3938; }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1u));
    c.r[2].d[0] = c.r[2].d[0] & 248ull;
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[21].d[0]) { set32(c.r[18], c.r[18].w[0] - 1u);  goto L_003F3938; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3910u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 386u, depth + 1u); else { c.pc = 0x003F3970u; return; } if (c.pc != 0x003F3910u) [[unlikely]] return; }
L_003F3910:
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] - 1u);  goto L_003F3938; }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 2u));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[20].d[0]) { set32(c.r[18], c.r[18].w[0] - 1u);  goto L_003F3938; }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 3u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[19].d[0]; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003F3948; } }
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 1;
L_003F3938:
    c.r[2].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F38E8u | kUnwind; return; } goto L_003F38E8; } }
L_003F3944:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003F3948:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003F3970:
    c.r[2].d[0] = ld8((c.r[5].w[0] + 3u));
    c.r[6].d[0] = ld8((c.r[5].w[0] + 2u));
    c.r[7].d[0] = ld8((c.r[5].w[0] + 1u));
    set32(c.r[12], c.r[2].w[0] >> 4);
    set32(c.r[8], c.r[6].w[0] >> 2);
    set32(c.r[9], c.r[6].w[0] >> 1);
    set32(c.r[5], c.r[7].w[0] >> 1);
    c.r[7].d[0] = c.r[7].d[0] & 1ull;
    set32(c.r[10], c.r[2].w[0] >> 3);
    set32(c.r[11], c.r[2].w[0] >> 2);
    c.r[13].d[0] = c.r[6].d[0] & 1ull;
    set32(c.r[6], c.r[6].w[0] >> 4);
    c.r[3].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[2], c.r[2].w[0] >> 6);
    c.r[5].d[0] = c.r[5].d[0] & 3ull;
    c.r[8].d[0] = c.r[8].d[0] & 3ull;
    c.r[9].d[0] = c.r[9].d[0] & 1ull;
    c.r[12].d[0] = c.r[12].d[0] & 3ull;
    c.r[10].d[0] = c.r[10].d[0] & 1ull;
    c.r[11].d[0] = c.r[11].d[0] & 1ull;
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[13].w[0]));
    st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(c.r[12].w[0]));
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.budget -= 32;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 9u), static_cast<std::uint8_t>(c.r[11].w[0]));  c.pc = t; return; }
L_003F39F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.budget -= 11;
    { const bool t = c.r[16].sd[0] <= 0; st64((c.r[29].w[0] + 40u), c.r[31].d[0]);  if (t) { goto L_003F3B30; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[19], c.r[2].w[0] - 31768u);
    set32(c.r[20], c.r[3].w[0] - 31216u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
L_003F3A30:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3A3Cu); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_00B8(c, 147u, depth + 1u); else { c.pc = 0x003E3368u; return; } if (c.pc != 0x003F3A3Cu) [[unlikely]] return; }
L_003F3A3C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[4], c.r[5].w[0] - c.r[17].w[0]);  if (t) { goto L_003F3B34; } }
    c.r[6].d[0] = ld8((c.r[5].w[0] + 7u));
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] - c.r[4].w[0]);
    set32(c.r[17], c.r[17].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[6].w[0] >> 4);
    c.r[6].d[0] = c.r[6].d[0] & 15ull;
    set32(c.r[2], c.r[6].w[0] + 255u);
    c.r[12].d[0] = ld8((c.r[5].w[0] + 11u));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[7].d[0] = ld8((c.r[5].w[0] + 10u));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.r[8].d[0] = ld8((c.r[5].w[0] + 4u));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 5u));
    c.r[9].d[0] = ld8((c.r[5].w[0] + 6u));
    c.r[10].d[0] = ld8((c.r[5].w[0] + 8u));
    c.budget -= 17;
    { const bool t = c.r[3].d[0] == 0ull; c.r[11].d[0] = ld8((c.r[5].w[0] + 9u));  if (t) { goto L_003F3B28; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[7].w[0] >> 5);  if (t) { goto L_003F3B28; } }
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[4].d[0] & 15ull;  if (t) { goto L_003F3B28; } }
    set32(c.r[4], c.r[4].w[0] >> 4);
    set32(c.r[3], c.r[8].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[5], ld32((c.r[18].w[0] + 28u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[9].d[0];
    st32((c.r[18].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = c.r[5].d[0] != 0ull; st32((c.r[18].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_003F3AF4; } }
    set32(c.r[2], c.r[11].w[0] << 2);
    set32(c.r[3], c.r[10].w[0] << 10);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[4], c.r[7].w[0] >> 6);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    st32((c.r[18].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 11;
L_003F3AF4:
    set32(c.r[3], c.r[6].w[0] << 2);
    c.r[2].d[0] = c.r[7].d[0] & 31ull;
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[4], c.r[12].w[0] >> 3);
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st32((c.r[18].w[0] + 8u), c.r[20].w[0]);
    set32(c.r[2], c.r[2].w[0] << 11);
    st32((c.r[18].w[0] + 32u), c.r[5].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_003F3B30; } }
    c.budget -= 1;
L_003F3B28:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] > 0; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F3A30u | kUnwind; return; } goto L_003F3A30; } }
L_003F3B30:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003F3B34:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F3B58:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], 0u + 32u);
    set32(c.r[5], c.r[5].w[0] - 14776u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C0(c, 385u, depth); }
L_003F3B78:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C0(c, 388u, depth); }
L_003F3B90:
    st32((c.r[4].w[0] + 144u), 0u);
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), 0u);  c.pc = t; return; }
L_003F3BA8:
    st32((c.r[4].w[0] + 144u), 0u);
    st32((c.r[4].w[0]), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), 0u);  c.pc = t; return; }
L_003F3BB8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 6u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[17], c.r[17].w[0] + 6u);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[18].w[0]), 0u);
    c.budget -= 17;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003F3C54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3C04u);  if (depth < kMaxDepth) unit_00BC(c, 399u, depth + 1u); else { c.pc = 0x003F3C70u; return; } if (c.pc != 0x003F3C04u) [[unlikely]] return; }
L_003F3C04:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] - 12u);  goto L_003F3C24; }
    set32(c.r[16], c.r[16].w[0] - 2u);
    set32(c.r[17], c.r[17].w[0] + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3C1Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 399u, depth + 1u); else { c.pc = 0x003F3C70u; return; } if (c.pc != 0x003F3C1Cu) [[unlikely]] return; }
L_003F3C1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] - 12u);  if (t) { goto L_003F3C54; } }
L_003F3C24:
    set32(c.r[17], c.r[17].w[0] + 12u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3C34u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 402u, depth + 1u); else { c.pc = 0x003F3CC8u; return; } if (c.pc != 0x003F3C34u) [[unlikely]] return; }
L_003F3C34:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003F3C54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3C4Cu);  if (depth < kMaxDepth) unit_00BC(c, 406u, depth + 1u); else { c.pc = 0x003F3D20u; return; } if (c.pc != 0x003F3C4Cu) [[unlikely]] return; }
L_003F3C4C:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_003F3C54:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F3C70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3C80u);  if (depth < kMaxDepth) unit_00BC(c, 401u, depth + 1u); else { c.pc = 0x003F3C98u; return; } if (c.pc != 0x003F3C80u) [[unlikely]] return; }
L_003F3C80:
    c.r[2].d[0] = c.r[2].d[0] ^ 447ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F3C98:
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 2u));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[6].d[0] = ld8((c.r[4].w[0] + 3u));
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    set32(c.r[2], c.r[2].w[0] << 8);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];  c.pc = t; return; }
L_003F3CC8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3CDCu);  if (depth < kMaxDepth) unit_00C0(c, 389u, depth + 1u); else { c.pc = 0x00403D20u; return; } if (c.pc != 0x003F3CDCu) [[unlikely]] return; }
L_003F3CDC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003F3D0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3CF4u);  if (depth < kMaxDepth) unit_00C0(c, 406u, depth + 1u); else { c.pc = 0x00403F38u; return; } if (c.pc != 0x003F3CF4u) [[unlikely]] return; }
L_003F3CF4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0])));
    if (c.r[2].d[0] == 0) c.r[3].d[0] = 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3D08u); st32((c.r[29].w[0]), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00C0(c, 393u, depth + 1u); else { c.pc = 0x00403DE8u; return; } if (c.pc != 0x003F3D08u) [[unlikely]] return; }
L_003F3D08:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 1;
L_003F3D0C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F3D20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[7].d[0] = c.r[6].sd[0] < 2049ll ? 1ull : 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[17], c.r[18].w[0] + 120u);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[18].w[0] + 268u);  if (t) { goto L_003F3D80; } }
    set32(c.r[16], 0u + 2048u);
    if (c.r[7].d[0] != 0) c.r[16].d[0] = c.r[6].d[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3D60u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 36u, depth + 1u); else { c.pc = 0x003E0A78u; return; } if (c.pc != 0x003F3D60u) [[unlikely]] return; }
L_003F3D60:
    st32((c.r[17].w[0] + 144u), c.r[16].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3D6Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 422u, depth + 1u); else { c.pc = 0x003F3F60u; return; } if (c.pc != 0x003F3D6Cu) [[unlikely]] return; }
L_003F3D6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3D74u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 50u, depth + 1u); else { c.pc = 0x003F4580u; return; } if (c.pc != 0x003F3D74u) [[unlikely]] return; }
L_003F3D74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3D7Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 411u, depth + 1u); else { c.pc = 0x003F3D98u; return; } if (c.pc != 0x003F3D7Cu) [[unlikely]] return; }
L_003F3D7C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003F3D80:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F3D98:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3DACu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 420u, depth + 1u); else { c.pc = 0x003F3F10u; return; } if (c.pc != 0x003F3DACu) [[unlikely]] return; }
L_003F3DAC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[16].w[0] + 120u);  if (t) { goto L_003F3DC8; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003F3DD8; }
L_003F3DC8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F3DD8:
    c.r[2].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[5].w[0] + 2176u);  if (t) { goto L_003F3E48; } }
L_003F3DE8:
    ldl(c.r[3], (c.r[5].w[0] + 7u));
    ldr(c.r[3], (c.r[5].w[0]));
    ldl(c.r[6], (c.r[5].w[0] + 15u));
    ldr(c.r[6], (c.r[5].w[0] + 8u));
    ldl(c.r[7], (c.r[5].w[0] + 23u));
    ldr(c.r[7], (c.r[5].w[0] + 16u));
    ldl(c.r[8], (c.r[5].w[0] + 31u));
    ldr(c.r[8], (c.r[5].w[0] + 24u));
    sdl(c.r[3], (c.r[4].w[0] + 7u));
    sdr(c.r[3], (c.r[4].w[0]));
    sdl(c.r[6], (c.r[4].w[0] + 15u));
    sdr(c.r[6], (c.r[4].w[0] + 8u));
    sdl(c.r[7], (c.r[4].w[0] + 23u));
    sdr(c.r[7], (c.r[4].w[0] + 16u));
    sdl(c.r[8], (c.r[4].w[0] + 31u));
    sdr(c.r[8], (c.r[4].w[0] + 24u));
    set32(c.r[5], c.r[5].w[0] + 32u);
    c.budget -= 21;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[4].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F3DE8u | kUnwind; return; } goto L_003F3DE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F3E7C; } }
    c.budget -= 1;
L_003F3E48:
    c.r[3].d[0] = ld64((c.r[5].w[0]));
    c.r[6].d[0] = ld64((c.r[5].w[0] + 8u));
    c.r[7].d[0] = ld64((c.r[5].w[0] + 16u));
    c.r[8].d[0] = ld64((c.r[5].w[0] + 24u));
    st64((c.r[4].w[0]), c.r[3].d[0]);
    st64((c.r[4].w[0] + 8u), c.r[6].d[0]);
    st64((c.r[4].w[0] + 16u), c.r[7].d[0]);
    st64((c.r[4].w[0] + 24u), c.r[8].d[0]);
    set32(c.r[5], c.r[5].w[0] + 32u);
    c.budget -= 13;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[4].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F3E48u | kUnwind; return; } goto L_003F3E48; } }
L_003F3E7C:
    ldl(c.r[2], (c.r[5].w[0] + 7u));
    ldr(c.r[2], (c.r[5].w[0]));
    ldl(c.r[3], (c.r[5].w[0] + 15u));
    ldr(c.r[3], (c.r[5].w[0] + 8u));
    set32(c.r[6], ld32((c.r[5].w[0] + 16u)));
    sdl(c.r[2], (c.r[4].w[0] + 7u));
    sdr(c.r[2], (c.r[4].w[0]));
    sdl(c.r[3], (c.r[4].w[0] + 15u));
    sdr(c.r[3], (c.r[4].w[0] + 8u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 16u), c.r[6].w[0]);  c.pc = t; return; }
L_003F3EA8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3EC4u); set32(c.r[16], c.r[17].w[0] + 120u);  if (depth < kMaxDepth) unit_00BC(c, 420u, depth + 1u); else { c.pc = 0x003F3F10u; return; } if (c.pc != 0x003F3EC4u) [[unlikely]] return; }
L_003F3EC4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003F3EF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3ED8u);  if (depth < kMaxDepth) unit_00BC(c, 413u, depth + 1u); else { c.pc = 0x003F3DD8u; return; } if (c.pc != 0x003F3ED8u) [[unlikely]] return; }
L_003F3ED8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3EE0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 422u, depth + 1u); else { c.pc = 0x003F3F60u; return; } if (c.pc != 0x003F3EE0u) [[unlikely]] return; }
L_003F3EE0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00BD(c, 50u, depth); }
L_003F3EF8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F3F10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 10928u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003F3F4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3F34u);  if (depth < kMaxDepth) unit_00BD(c, 303u, depth + 1u); else { c.pc = 0x003F6818u; return; } if (c.pc != 0x003F3F34u) [[unlikely]] return; }
L_003F3F34:
    c.budget -= 2;
    if (c.r[2].sd[0] <= 0) { set32(c.r[2], ld32((c.r[16].w[0] + 10928u)));  goto L_003F3F48; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003F3F4C; } }
    c.budget -= 1;
L_003F3F48:
    set32(c.r[2], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_003F3F4C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F3F60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[4], c.r[16].w[0] + 148u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3F80u); set32(c.r[5], ld32((c.r[16].w[0] + 144u)));  if (depth < kMaxDepth) unit_00C0(c, 389u, depth + 1u); else { c.pc = 0x00403D20u; return; } if (c.pc != 0x003F3F80u) [[unlikely]] return; }
L_003F3F80:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003F3FB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3F98u);  if (depth < kMaxDepth) unit_00BC(c, 425u, depth + 1u); else { c.pc = 0x003F3FC8u; return; } if (c.pc != 0x003F3F98u) [[unlikely]] return; }
L_003F3F98:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00C0(c, 393u, depth); }
L_003F3FB0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F3FC8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3FECu); c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 406u, depth + 1u); else { c.pc = 0x00403F38u; return; } if (c.pc != 0x003F3FECu) [[unlikely]] return; }
L_003F3FEC:
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[5], c.r[29].w[0] + 4u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 8u);
    if (c.r[2].d[0] == 0) c.r[3].d[0] = 0ull;
    c.budget -= 5;
    [[clang::musttail]] return unit_00BD(c, 1u, depth);
}

}
