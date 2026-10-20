#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_007A[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0,
    0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0,
    11, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0,
    16, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0,
    0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0,
    24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 32, 0, 0, 33, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0,
    0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0,
    42, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 45, 0, 0, 46, 0, 0, 47, 0,
    0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 64, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 69, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0,
    0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 86, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 88, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0,
    0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0,
    0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0,
    104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0,
    0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 110, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0,
    0, 113, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0,
    0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0,
    0, 122, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0,
    0, 0, 126, 0, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0,
    131, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0,
    139, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 143, 0,
    0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 146, 0, 0, 147, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 160, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 0,
    163, 0, 0, 164, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 0, 167, 0, 0, 168, 0, 0, 169, 0, 0, 0, 0, 0, 0, 170, 0, 0,
    171, 0, 0, 0, 0, 0, 172, 0, 173, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176,
    0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 185, 0,
    186, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0,
    0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193,
    0, 0, 0, 194, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 199, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0,
    205, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0,
    0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0,
    219, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 223, 0, 224, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0, 0, 232, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0,
    0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 243, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0,
    245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0,
    253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0,
    257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 262,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 265,
    0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 268, 0, 0, 269, 0, 0, 0, 0, 0, 270, 0, 0, 271,
    0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0,
    0, 274, 0, 0, 275, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 279, 0,
    0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 284, 0, 0, 0, 285, 0, 0, 0,
    286, 0, 287, 0, 0, 0, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0, 290, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0,
    299, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0,
    307, 0, 0, 0, 308, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0,
    311, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 0, 317, 0, 0, 0,
    0, 318, 0, 0, 319, 0, 0, 320, 0, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0,
    325, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 332, 0, 0, 333, 0, 0, 0,
    0, 0, 334, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0,
    0, 339, 0, 340, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 343, 0, 0,
    0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 348, 0, 349, 0,
    0, 0, 0, 350, 0, 0, 351, 0, 352, 0, 0, 0, 0, 0, 0, 353, 0, 0, 354, 0, 355, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 357,
    0, 358, 0, 0, 0, 0, 0, 0, 359, 0, 0, 360, 0, 361, 0, 0, 0, 0, 0, 0, 362, 0, 0, 363, 0, 364, 0, 0, 0, 0, 365, 0,
    0, 366, 0, 367, 0, 0, 0, 0, 368, 0, 0, 369, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0,
    0, 0, 0, 0, 0, 372, 0, 0, 0, 373, 0, 0, 374, 0, 375, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 378, 0, 379, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 384, 0, 0, 0, 385, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0,
    388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    389, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0,
    393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 396, 0, 0, 0, 0,
    0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 399, 0, 400, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0,
    412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0,
    415, 0, 0, 0, 416, 0, 0, 0, 0, 417, 0, 0, 418, 0, 0, 419, 0, 0, 0, 0, 420, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 422,
    0, 0, 0, 0, 423, 0, 0, 0, 424, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0,
    428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 430, 0, 0, 0, 0, 431, 0, 0, 0, 432, 0, 0, 0, 433, 0, 434, 0, 0, 0, 0,
    0, 435, 0, 0, 0, 436, 0, 0, 0, 437, 0, 0, 438, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0,
    0, 0, 0, 0, 0, 0, 443, 0, 0, 444, 0, 0, 445, 0, 0, 446, 0, 0, 447, 0, 0, 448, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0,
    0, 0, 0, 0, 450, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0,
    0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 457, 0, 458, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0,
    460, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0,
    0, 0, 464, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 467, 0, 0, 0, 468, 0, 0, 469,
    0, 470, 0, 0, 0, 0, 471, 0, 0, 472, 0, 473, 0, 0, 0, 0, 0, 0, 474, 0, 0, 475, 0, 476, 0, 0, 0, 0, 0, 0, 0, 477,
    0, 0, 478, 0, 479, 0, 0, 0, 0, 0, 0, 480, 0, 0, 481, 0, 482, 0, 0, 0, 0, 0, 0, 483, 0, 0, 484, 0, 485, 0, 0, 0,
    0, 486, 0, 0, 487, 0, 488, 0, 0, 0, 0, 489, 0, 0, 490, 0, 0, 491, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0,
    0, 0, 0, 494, 0, 0, 0, 495, 0, 0, 496, 0, 497, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 500, 0, 501, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 504, 0, 0,
    0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 506, 0, 0, 0, 507, 0, 0, 0, 508, 0, 0, 0, 509, 0, 0, 0, 510, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 511, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    514, 0, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 516, 0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 519, 0,
    0, 0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0, 0,
    523, 0, 0, 0, 0, 0, 0, 524, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_007A(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002E8000;
    case 2u: goto L_002E8010;
    case 3u: goto L_002E8030;
    case 4u: goto L_002E804C;
    case 5u: goto L_002E8060;
    case 6u: goto L_002E8070;
    case 7u: goto L_002E8090;
    case 8u: goto L_002E80B0;
    case 9u: goto L_002E80C4;
    case 10u: goto L_002E80E0;
    case 11u: goto L_002E8100;
    case 12u: goto L_002E8114;
    case 13u: goto L_002E8130;
    case 14u: goto L_002E8150;
    case 15u: goto L_002E8164;
    case 16u: goto L_002E8180;
    case 17u: goto L_002E81A4;
    case 18u: goto L_002E81E0;
    case 19u: goto L_002E81F4;
    case 20u: goto L_002E8218;
    case 21u: goto L_002E8228;
    case 22u: goto L_002E8240;
    case 23u: goto L_002E8260;
    case 24u: goto L_002E8280;
    case 25u: goto L_002E82A8;
    case 26u: goto L_002E82B8;
    case 27u: goto L_002E82C8;
    case 28u: goto L_002E8304;
    case 29u: goto L_002E832C;
    case 30u: goto L_002E833C;
    case 31u: goto L_002E834C;
    case 32u: goto L_002E8388;
    case 33u: goto L_002E8394;
    case 34u: goto L_002E83A0;
    case 35u: goto L_002E83C4;
    case 36u: goto L_002E83D4;
    case 37u: goto L_002E83E4;
    case 38u: goto L_002E8468;
    case 39u: goto L_002E8478;
    case 40u: goto L_002E8488;
    case 41u: goto L_002E84F0;
    case 42u: goto L_002E8500;
    case 43u: goto L_002E8510;
    case 44u: goto L_002E8554;
    case 45u: goto L_002E8560;
    case 46u: goto L_002E856C;
    case 47u: goto L_002E8578;
    case 48u: goto L_002E8584;
    case 49u: goto L_002E85AC;
    case 50u: goto L_002E85BC;
    case 51u: goto L_002E85CC;
    case 52u: goto L_002E8628;
    case 53u: goto L_002E8638;
    case 54u: goto L_002E8648;
    case 55u: goto L_002E86A4;
    case 56u: goto L_002E86B4;
    case 57u: goto L_002E86C4;
    case 58u: goto L_002E872C;
    case 59u: goto L_002E873C;
    case 60u: goto L_002E874C;
    case 61u: goto L_002E87B4;
    case 62u: goto L_002E87C4;
    case 63u: goto L_002E87D4;
    case 64u: goto L_002E8804;
    case 65u: goto L_002E880C;
    case 66u: goto L_002E8830;
    case 67u: goto L_002E8848;
    case 68u: goto L_002E8854;
    case 69u: goto L_002E8888;
    case 70u: goto L_002E8894;
    case 71u: goto L_002E88AC;
    case 72u: goto L_002E88B8;
    case 73u: goto L_002E88D0;
    case 74u: goto L_002E88DC;
    case 75u: goto L_002E8938;
    case 76u: goto L_002E8980;
    case 77u: goto L_002E89D8;
    case 78u: goto L_002E8A00;
    case 79u: goto L_002E8A28;
    case 80u: goto L_002E8A50;
    case 81u: goto L_002E8A60;
    case 82u: goto L_002E8A78;
    case 83u: goto L_002E8A90;
    case 84u: goto L_002E8AD8;
    case 85u: goto L_002E8B3C;
    case 86u: goto L_002E8B44;
    case 87u: goto L_002E8B60;
    case 88u: goto L_002E8B78;
    case 89u: goto L_002E8BD4;
    case 90u: goto L_002E8BEC;
    case 91u: goto L_002E8C1C;
    case 92u: goto L_002E8C38;
    case 93u: goto L_002E8C54;
    case 94u: goto L_002E8C70;
    case 95u: goto L_002E8C8C;
    case 96u: goto L_002E8CA8;
    case 97u: goto L_002E8CC4;
    case 98u: goto L_002E8CE4;
    case 99u: goto L_002E8D08;
    case 100u: goto L_002E8D18;
    case 101u: goto L_002E8D2C;
    case 102u: goto L_002E8D4C;
    case 103u: goto L_002E8D5C;
    case 104u: goto L_002E8D80;
    case 105u: goto L_002E8DC0;
    case 106u: goto L_002E8DD4;
    case 107u: goto L_002E8DF4;
    case 108u: goto L_002E8E14;
    case 109u: goto L_002E8E34;
    case 110u: goto L_002E8E54;
    case 111u: goto L_002E8E5C;
    case 112u: goto L_002E8E70;
    case 113u: goto L_002E8E84;
    case 114u: goto L_002E8EA4;
    case 115u: goto L_002E8EC4;
    case 116u: goto L_002E8EE4;
    case 117u: goto L_002E8F04;
    case 118u: goto L_002E8F20;
    case 119u: goto L_002E8F30;
    case 120u: goto L_002E8F48;
    case 121u: goto L_002E8F64;
    case 122u: goto L_002E8F84;
    case 123u: goto L_002E8FA4;
    case 124u: goto L_002E8FC4;
    case 125u: goto L_002E8FF0;
    case 126u: goto L_002E9008;
    case 127u: goto L_002E901C;
    case 128u: goto L_002E9030;
    case 129u: goto L_002E9050;
    case 130u: goto L_002E9064;
    case 131u: goto L_002E9080;
    case 132u: goto L_002E90A0;
    case 133u: goto L_002E90B4;
    case 134u: goto L_002E90D0;
    case 135u: goto L_002E90F4;
    case 136u: goto L_002E9138;
    case 137u: goto L_002E914C;
    case 138u: goto L_002E9170;
    case 139u: goto L_002E9180;
    case 140u: goto L_002E91A0;
    case 141u: goto L_002E91C4;
    case 142u: goto L_002E91D8;
    case 143u: goto L_002E91F8;
    case 144u: goto L_002E9204;
    case 145u: goto L_002E9220;
    case 146u: goto L_002E9228;
    case 147u: goto L_002E9234;
    case 148u: goto L_002E9250;
    case 149u: goto L_002E926C;
    case 150u: goto L_002E92A0;
    case 151u: goto L_002E92C8;
    case 152u: goto L_002E92D8;
    case 153u: goto L_002E92E8;
    case 154u: goto L_002E9324;
    case 155u: goto L_002E934C;
    case 156u: goto L_002E935C;
    case 157u: goto L_002E936C;
    case 158u: goto L_002E93A8;
    case 159u: goto L_002E93C0;
    case 160u: goto L_002E93CC;
    case 161u: goto L_002E93D8;
    case 162u: goto L_002E93E8;
    case 163u: goto L_002E9400;
    case 164u: goto L_002E940C;
    case 165u: goto L_002E9418;
    case 166u: goto L_002E9428;
    case 167u: goto L_002E9440;
    case 168u: goto L_002E944C;
    case 169u: goto L_002E9458;
    case 170u: goto L_002E9474;
    case 171u: goto L_002E9480;
    case 172u: goto L_002E9498;
    case 173u: goto L_002E94A0;
    case 174u: goto L_002E94A8;
    case 175u: goto L_002E94CC;
    case 176u: goto L_002E94FC;
    case 177u: goto L_002E9518;
    case 178u: goto L_002E9530;
    case 179u: goto L_002E9554;
    case 180u: goto L_002E9580;
    case 181u: goto L_002E95E0;
    case 182u: goto L_002E9608;
    case 183u: goto L_002E9630;
    case 184u: goto L_002E9658;
    case 185u: goto L_002E9678;
    case 186u: goto L_002E9680;
    case 187u: goto L_002E969C;
    case 188u: goto L_002E96B8;
    case 189u: goto L_002E96D0;
    case 190u: goto L_002E96F0;
    case 191u: goto L_002E970C;
    case 192u: goto L_002E9734;
    case 193u: goto L_002E977C;
    case 194u: goto L_002E978C;
    case 195u: goto L_002E97A0;
    case 196u: goto L_002E97E4;
    case 197u: goto L_002E9830;
    case 198u: goto L_002E985C;
    case 199u: goto L_002E9878;
    case 200u: goto L_002E98A0;
    case 201u: goto L_002E98BC;
    case 202u: goto L_002E9928;
    case 203u: goto L_002E9948;
    case 204u: goto L_002E9964;
    case 205u: goto L_002E9980;
    case 206u: goto L_002E999C;
    case 207u: goto L_002E99B8;
    case 208u: goto L_002E99D4;
    case 209u: goto L_002E99F8;
    case 210u: goto L_002E9A20;
    case 211u: goto L_002E9A34;
    case 212u: goto L_002E9A70;
    case 213u: goto L_002E9AF8;
    case 214u: goto L_002E9B14;
    case 215u: goto L_002E9B68;
    case 216u: goto L_002E9BC4;
    case 217u: goto L_002E9BCC;
    case 218u: goto L_002E9BDC;
    case 219u: goto L_002E9C00;
    case 220u: goto L_002E9C14;
    case 221u: goto L_002E9C30;
    case 222u: goto L_002E9C60;
    case 223u: goto L_002E9C70;
    case 224u: goto L_002E9C78;
    case 225u: goto L_002E9CA4;
    case 226u: goto L_002E9CCC;
    case 227u: goto L_002E9CDC;
    case 228u: goto L_002E9D3C;
    case 229u: goto L_002E9D60;
    case 230u: goto L_002E9DA0;
    case 231u: goto L_002E9DB8;
    case 232u: goto L_002E9DC8;
    case 233u: goto L_002E9DD0;
    case 234u: goto L_002E9DFC;
    case 235u: goto L_002E9E6C;
    case 236u: goto L_002E9E90;
    case 237u: goto L_002E9EFC;
    case 238u: goto L_002E9F28;
    case 239u: goto L_002E9F60;
    case 240u: goto L_002E9F90;
    case 241u: goto L_002E9FD4;
    case 242u: goto L_002EA058;
    case 243u: goto L_002EA06C;
    case 244u: goto L_002EA0EC;
    case 245u: goto L_002EA100;
    case 246u: goto L_002EA128;
    case 247u: goto L_002EA150;
    case 248u: goto L_002EA174;
    case 249u: goto L_002EA1A0;
    case 250u: goto L_002EA1B0;
    case 251u: goto L_002EA1CC;
    case 252u: goto L_002EA1E8;
    case 253u: goto L_002EA200;
    case 254u: goto L_002EA230;
    case 255u: goto L_002EA24C;
    case 256u: goto L_002EA268;
    case 257u: goto L_002EA280;
    case 258u: goto L_002EA2B0;
    case 259u: goto L_002EA2C0;
    case 260u: goto L_002EA2DC;
    case 261u: goto L_002EA2EC;
    case 262u: goto L_002EA2FC;
    case 263u: goto L_002EA324;
    case 264u: goto L_002EA360;
    case 265u: goto L_002EA37C;
    case 266u: goto L_002EA388;
    case 267u: goto L_002EA3C0;
    case 268u: goto L_002EA3CC;
    case 269u: goto L_002EA3D8;
    case 270u: goto L_002EA3F0;
    case 271u: goto L_002EA3FC;
    case 272u: goto L_002EA420;
    case 273u: goto L_002EA474;
    case 274u: goto L_002EA484;
    case 275u: goto L_002EA490;
    case 276u: goto L_002EA4A8;
    case 277u: goto L_002EA4C0;
    case 278u: goto L_002EA4DC;
    case 279u: goto L_002EA4F8;
    case 280u: goto L_002EA510;
    case 281u: goto L_002EA5A0;
    case 282u: goto L_002EA5B4;
    case 283u: goto L_002EA64C;
    case 284u: goto L_002EA660;
    case 285u: goto L_002EA670;
    case 286u: goto L_002EA680;
    case 287u: goto L_002EA688;
    case 288u: goto L_002EA6A0;
    case 289u: goto L_002EA6B0;
    case 290u: goto L_002EA6C0;
    case 291u: goto L_002EA6D4;
    case 292u: goto L_002EA710;
    case 293u: goto L_002EA720;
    case 294u: goto L_002EA730;
    case 295u: goto L_002EA740;
    case 296u: goto L_002EA750;
    case 297u: goto L_002EA760;
    case 298u: goto L_002EA770;
    case 299u: goto L_002EA780;
    case 300u: goto L_002EA790;
    case 301u: goto L_002EA7A0;
    case 302u: goto L_002EA7B0;
    case 303u: goto L_002EA7C4;
    case 304u: goto L_002EA800;
    case 305u: goto L_002EA84C;
    case 306u: goto L_002EA864;
    case 307u: goto L_002EA880;
    case 308u: goto L_002EA890;
    case 309u: goto L_002EA8A0;
    case 310u: goto L_002EA8F0;
    case 311u: goto L_002EA900;
    case 312u: goto L_002EA910;
    case 313u: goto L_002EA930;
    case 314u: goto L_002EA940;
    case 315u: goto L_002EA950;
    case 316u: goto L_002EA960;
    case 317u: goto L_002EA970;
    case 318u: goto L_002EA984;
    case 319u: goto L_002EA990;
    case 320u: goto L_002EA99C;
    case 321u: goto L_002EA9B0;
    case 322u: goto L_002EA9C0;
    case 323u: goto L_002EA9D0;
    case 324u: goto L_002EA9F0;
    case 325u: goto L_002EAA00;
    case 326u: goto L_002EAA20;
    case 327u: goto L_002EAA40;
    case 328u: goto L_002EAA4C;
    case 329u: goto L_002EAA6C;
    case 330u: goto L_002EAAA0;
    case 331u: goto L_002EAAD8;
    case 332u: goto L_002EAAE4;
    case 333u: goto L_002EAAF0;
    case 334u: goto L_002EAB08;
    case 335u: goto L_002EAB20;
    case 336u: goto L_002EABA4;
    case 337u: goto L_002EABC8;
    case 338u: goto L_002EABE0;
    case 339u: goto L_002EAC04;
    case 340u: goto L_002EAC0C;
    case 341u: goto L_002EAC24;
    case 342u: goto L_002EAC5C;
    case 343u: goto L_002EAC74;
    case 344u: goto L_002EAC8C;
    case 345u: goto L_002EACC4;
    case 346u: goto L_002EACD4;
    case 347u: goto L_002EACE4;
    case 348u: goto L_002EACF0;
    case 349u: goto L_002EACF8;
    case 350u: goto L_002EAD0C;
    case 351u: goto L_002EAD18;
    case 352u: goto L_002EAD20;
    case 353u: goto L_002EAD3C;
    case 354u: goto L_002EAD48;
    case 355u: goto L_002EAD50;
    case 356u: goto L_002EAD70;
    case 357u: goto L_002EAD7C;
    case 358u: goto L_002EAD84;
    case 359u: goto L_002EADA0;
    case 360u: goto L_002EADAC;
    case 361u: goto L_002EADB4;
    case 362u: goto L_002EADD0;
    case 363u: goto L_002EADDC;
    case 364u: goto L_002EADE4;
    case 365u: goto L_002EADF8;
    case 366u: goto L_002EAE04;
    case 367u: goto L_002EAE0C;
    case 368u: goto L_002EAE20;
    case 369u: goto L_002EAE2C;
    case 370u: goto L_002EAE44;
    case 371u: goto L_002EAE78;
    case 372u: goto L_002EAE94;
    case 373u: goto L_002EAEA4;
    case 374u: goto L_002EAEB0;
    case 375u: goto L_002EAEB8;
    case 376u: goto L_002EAEC4;
    case 377u: goto L_002EAF30;
    case 378u: goto L_002EAF40;
    case 379u: goto L_002EAF48;
    case 380u: goto L_002EAF58;
    case 381u: goto L_002EAF80;
    case 382u: goto L_002EAFAC;
    case 383u: goto L_002EAFC8;
    case 384u: goto L_002EAFE0;
    case 385u: goto L_002EAFF0;
    case 386u: goto L_002EB034;
    case 387u: goto L_002EB060;
    case 388u: goto L_002EB080;
    case 389u: goto L_002EB100;
    case 390u: goto L_002EB120;
    case 391u: goto L_002EB148;
    case 392u: goto L_002EB168;
    case 393u: goto L_002EB180;
    case 394u: goto L_002EB1B0;
    case 395u: goto L_002EB1D8;
    case 396u: goto L_002EB1EC;
    case 397u: goto L_002EB210;
    case 398u: goto L_002EB24C;
    case 399u: goto L_002EB284;
    case 400u: goto L_002EB28C;
    case 401u: goto L_002EB2A4;
    case 402u: goto L_002EB2C0;
    case 403u: goto L_002EB2F8;
    case 404u: goto L_002EB358;
    case 405u: goto L_002EB390;
    case 406u: goto L_002EB3AC;
    case 407u: goto L_002EB3D0;
    case 408u: goto L_002EB3FC;
    case 409u: goto L_002EB42C;
    case 410u: goto L_002EB450;
    case 411u: goto L_002EB474;
    case 412u: goto L_002EB480;
    case 413u: goto L_002EB4B8;
    case 414u: goto L_002EB4F0;
    case 415u: goto L_002EB500;
    case 416u: goto L_002EB510;
    case 417u: goto L_002EB524;
    case 418u: goto L_002EB530;
    case 419u: goto L_002EB53C;
    case 420u: goto L_002EB550;
    case 421u: goto L_002EB560;
    case 422u: goto L_002EB57C;
    case 423u: goto L_002EB590;
    case 424u: goto L_002EB5A0;
    case 425u: goto L_002EB5B0;
    case 426u: goto L_002EB5D0;
    case 427u: goto L_002EB5F4;
    case 428u: goto L_002EB600;
    case 429u: goto L_002EB628;
    case 430u: goto L_002EB630;
    case 431u: goto L_002EB644;
    case 432u: goto L_002EB654;
    case 433u: goto L_002EB664;
    case 434u: goto L_002EB66C;
    case 435u: goto L_002EB684;
    case 436u: goto L_002EB694;
    case 437u: goto L_002EB6A4;
    case 438u: goto L_002EB6B0;
    case 439u: goto L_002EB6BC;
    case 440u: goto L_002EB6E0;
    case 441u: goto L_002EB71C;
    case 442u: goto L_002EB778;
    case 443u: goto L_002EB798;
    case 444u: goto L_002EB7A4;
    case 445u: goto L_002EB7B0;
    case 446u: goto L_002EB7BC;
    case 447u: goto L_002EB7C8;
    case 448u: goto L_002EB7D4;
    case 449u: goto L_002EB7EC;
    case 450u: goto L_002EB810;
    case 451u: goto L_002EB820;
    case 452u: goto L_002EB840;
    case 453u: goto L_002EB854;
    case 454u: goto L_002EB870;
    case 455u: goto L_002EB890;
    case 456u: goto L_002EB8B0;
    case 457u: goto L_002EB8CC;
    case 458u: goto L_002EB8D4;
    case 459u: goto L_002EB8E4;
    case 460u: goto L_002EB900;
    case 461u: goto L_002EB920;
    case 462u: goto L_002EB938;
    case 463u: goto L_002EB96C;
    case 464u: goto L_002EB988;
    case 465u: goto L_002EB998;
    case 466u: goto L_002EB9D0;
    case 467u: goto L_002EB9E0;
    case 468u: goto L_002EB9F0;
    case 469u: goto L_002EB9FC;
    case 470u: goto L_002EBA04;
    case 471u: goto L_002EBA18;
    case 472u: goto L_002EBA24;
    case 473u: goto L_002EBA2C;
    case 474u: goto L_002EBA48;
    case 475u: goto L_002EBA54;
    case 476u: goto L_002EBA5C;
    case 477u: goto L_002EBA7C;
    case 478u: goto L_002EBA88;
    case 479u: goto L_002EBA90;
    case 480u: goto L_002EBAAC;
    case 481u: goto L_002EBAB8;
    case 482u: goto L_002EBAC0;
    case 483u: goto L_002EBADC;
    case 484u: goto L_002EBAE8;
    case 485u: goto L_002EBAF0;
    case 486u: goto L_002EBB04;
    case 487u: goto L_002EBB10;
    case 488u: goto L_002EBB18;
    case 489u: goto L_002EBB2C;
    case 490u: goto L_002EBB38;
    case 491u: goto L_002EBB44;
    case 492u: goto L_002EBB50;
    case 493u: goto L_002EBB70;
    case 494u: goto L_002EBB8C;
    case 495u: goto L_002EBB9C;
    case 496u: goto L_002EBBA8;
    case 497u: goto L_002EBBB0;
    case 498u: goto L_002EBBBC;
    case 499u: goto L_002EBC28;
    case 500u: goto L_002EBC38;
    case 501u: goto L_002EBC40;
    case 502u: goto L_002EBC4C;
    case 503u: goto L_002EBC70;
    case 504u: goto L_002EBCF4;
    case 505u: goto L_002EBD18;
    case 506u: goto L_002EBD30;
    case 507u: goto L_002EBD40;
    case 508u: goto L_002EBD50;
    case 509u: goto L_002EBD60;
    case 510u: goto L_002EBD70;
    case 511u: goto L_002EBD9C;
    case 512u: goto L_002EBDB4;
    case 513u: goto L_002EBDD0;
    case 514u: goto L_002EBE00;
    case 515u: goto L_002EBE18;
    case 516u: goto L_002EBE30;
    case 517u: goto L_002EBE40;
    case 518u: goto L_002EBE5C;
    case 519u: goto L_002EBE78;
    case 520u: goto L_002EBE9C;
    case 521u: goto L_002EBF40;
    case 522u: goto L_002EBF60;
    case 523u: goto L_002EBF80;
    case 524u: goto L_002EBF9C;
    case 525u: goto L_002EBFAC;
    case 526u: goto L_002EBFD4;
    default: bad_entry(c, 0x002E8000u); return;
    }
L_002E8000:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8010u);  if (depth < kMaxDepth) unit_0079(c, 209u, depth + 1u); else { c.pc = 0x002E6540u; return; } if (c.pc != 0x002E8010u) [[unlikely]] return; }
L_002E8010:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002E8030:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E804Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012CDE0u; return; } if (c.pc != 0x002E804Cu) [[unlikely]] return; }
L_002E804C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 23168u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8060u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x002E8060u) [[unlikely]] return; }
L_002E8060:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E8070:
    set32(c.r[2], ld32((c.r[4].w[0] + 2460u)));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[6], c.r[2].w[0] + 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 6;
    { set32(c.r[5], c.r[5].w[0] - 23272u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00127458u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 204u, depth); }
L_002E8090:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 2444u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E80B0u); set32(c.r[4], ld32((c.r[4].w[0] + 2440u)));  if (depth < kMaxDepth) unit_006D(c, 334u, depth + 1u); else { c.pc = 0x002B7590u; return; } if (c.pc != 0x002E80B0u) [[unlikely]] return; }
L_002E80B0:
    c.r[6].d[0] = ld8((c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E80C4u); set32(c.r[5], c.r[5].w[0] - 23272u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x002E80C4u) [[unlikely]] return; }
L_002E80C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E80E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 2444u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8100u); set32(c.r[4], ld32((c.r[4].w[0] + 2440u)));  if (depth < kMaxDepth) unit_006D(c, 334u, depth + 1u); else { c.pc = 0x002B7590u; return; } if (c.pc != 0x002E8100u) [[unlikely]] return; }
L_002E8100:
    c.r[6].d[0] = ld8((c.r[2].w[0] + 1u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8114u); set32(c.r[5], c.r[5].w[0] - 23272u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x002E8114u) [[unlikely]] return; }
L_002E8114:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E8130:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 2444u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8150u); set32(c.r[4], ld32((c.r[4].w[0] + 2440u)));  if (depth < kMaxDepth) unit_006D(c, 334u, depth + 1u); else { c.pc = 0x002B7590u; return; } if (c.pc != 0x002E8150u) [[unlikely]] return; }
L_002E8150:
    c.r[6].d[0] = ld8((c.r[2].w[0] + 2u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8164u); set32(c.r[5], c.r[5].w[0] - 23272u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x002E8164u) [[unlikely]] return; }
L_002E8164:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E8180:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 2444u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E81A4u); set32(c.r[4], ld32((c.r[4].w[0] + 2440u)));  if (depth < kMaxDepth) unit_006D(c, 334u, depth + 1u); else { c.pc = 0x002B7590u; return; } if (c.pc != 0x002E81A4u) [[unlikely]] return; }
L_002E81A4:
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = ld8((c.r[2].w[0] + 1u));  if (t) { goto L_002E81BC; } }
    c.f[20] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[12] = c.f[20];  if (t) { goto L_002E81D8; } }
L_002E81BC:
    c.f[1] = c.r[2].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 20u, c.f[1], c.f[0]);
    c.f[12] = c.f[20];
    c.budget -= 7;
L_002E81D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E81E0u);  if (depth < kMaxDepth) unit_0007(c, 36u, depth + 1u); else { c.pc = 0x0011C438u; return; } if (c.pc != 0x002E81E0u) [[unlikely]] return; }
L_002E81E0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E81F4u); set32(c.r[5], c.r[5].w[0] - 23088u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x002E81F4u) [[unlikely]] return; }
L_002E81F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002E8220; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8218u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x002E8218u) [[unlikely]] return; }
L_002E8218:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002E822C; } }
L_002E8220:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8228u); set32(c.r[5], c.r[29].w[0] + 49u);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x002E8228u) [[unlikely]] return; }
L_002E8228:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002E822C:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002E8240:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8260u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0079(c, 117u, depth + 1u); else { c.pc = 0x002E5710u; return; } if (c.pc != 0x002E8260u) [[unlikely]] return; }
L_002E8260:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 14400u);
    set32(c.r[2], c.r[2].w[0] + 14488u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    set32(c.r[4], 0u + 315u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8280u); st32((c.r[18].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002E8280u) [[unlikely]] return; }
L_002E8280:
    st32((c.r[18].w[0] + 2468u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 2u);
    set32(c.r[4], 0u + 4u);
    st32((c.r[18].w[0] + 2480u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 2484u), c.r[3].w[0]);
    set32(c.r[2], c.r[18].w[0] + 2468u);
    st32((c.r[18].w[0] + 2488u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E82A8u); st32((c.r[18].w[0] + 2492u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E82A8u) [[unlikely]] return; }
L_002E82A8:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E82B8u); st128((c.r[18].w[0] + 2496u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E82B8u) [[unlikely]] return; }
L_002E82B8:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E82C8u); st128((c.r[18].w[0] + 2512u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E82C8u) [[unlikely]] return; }
L_002E82C8:
    ld128((c.r[2].w[0]) & ~15u, c.r[5]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], 0u + 313u);
    st128((c.r[18].w[0] + 2528u) & ~15u, c.r[5]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    st32((c.r[18].w[0] + 2544u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 2548u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 23024u));
    st32((c.r[18].w[0] + 2552u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 23024u));
    st32((c.r[18].w[0] + 2556u), c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8304u); st32((c.r[18].w[0] + 2560u), 0u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002E8304u) [[unlikely]] return; }
L_002E8304:
    st32((c.r[18].w[0] + 2576u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 3u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 2592u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 2596u), c.r[3].w[0]);
    set32(c.r[2], c.r[18].w[0] + 2576u);
    st32((c.r[18].w[0] + 2600u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E832Cu); st32((c.r[18].w[0] + 2604u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E832Cu) [[unlikely]] return; }
L_002E832C:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E833Cu); st128((c.r[18].w[0] + 2608u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E833Cu) [[unlikely]] return; }
L_002E833C:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E834Cu); st128((c.r[18].w[0] + 2624u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E834Cu) [[unlikely]] return; }
L_002E834C:
    ld128((c.r[2].w[0]) & ~15u, c.r[5]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], 0u + 318u);
    st128((c.r[18].w[0] + 2640u) & ~15u, c.r[5]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    st32((c.r[18].w[0] + 2656u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 2660u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 23032u));
    st32((c.r[18].w[0] + 2664u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 23032u));
    st32((c.r[18].w[0] + 2668u), c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8388u); st32((c.r[18].w[0] + 2672u), 0u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002E8388u) [[unlikely]] return; }
L_002E8388:
    st32((c.r[18].w[0] + 2688u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8394u); set32(c.r[4], 0u + 319u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002E8394u) [[unlikely]] return; }
L_002E8394:
    st32((c.r[18].w[0] + 2692u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E83A0u); set32(c.r[4], 0u + 320u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002E83A0u) [[unlikely]] return; }
L_002E83A0:
    st32((c.r[18].w[0] + 2696u), c.r[2].w[0]);
    set32(c.r[3], 0u + 3u);
    st32((c.r[18].w[0] + 2704u), c.r[3].w[0]);
    set32(c.r[2], c.r[18].w[0] + 2688u);
    st32((c.r[18].w[0] + 2708u), 0u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 2712u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E83C4u); st32((c.r[18].w[0] + 2716u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E83C4u) [[unlikely]] return; }
L_002E83C4:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E83D4u); st128((c.r[18].w[0] + 2720u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E83D4u) [[unlikely]] return; }
L_002E83D4:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E83E4u); st128((c.r[18].w[0] + 2736u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E83E4u) [[unlikely]] return; }
L_002E83E4:
    ld128((c.r[2].w[0]) & ~15u, c.r[4]);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x42840000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x42B00000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x432C0000u);
    set32(c.r[6], 0u + 3u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], c.r[18].w[0] + 2824u);
    set32(c.r[2], 0u + 371u);
    st128((c.r[18].w[0] + 2752u) & ~15u, c.r[4]);
    c.f[0] = c.r[2].w[0];
    c.r[4].d[0] = 0ull + 0ull;
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], 0u + 2u);
    st32((c.r[18].w[0] + 2768u), c.f[0]);
    st32((c.r[18].w[0] + 2772u), c.r[11].w[0]);
    st32((c.r[18].w[0] + 2776u), c.r[10].w[0]);
    st32((c.r[18].w[0] + 2780u), c.r[10].w[0]);
    st32((c.r[18].w[0] + 2784u), 0u);
    st32((c.r[18].w[0] + 2800u), c.r[9].w[0]);
    st32((c.r[18].w[0] + 2804u), 0u);
    st32((c.r[18].w[0] + 2808u), c.r[8].w[0]);
    st32((c.r[18].w[0] + 2812u), 0u);
    st32((c.r[18].w[0] + 2816u), c.r[7].w[0]);
    st32((c.r[18].w[0] + 2820u), 0u);
    st32((c.r[18].w[0] + 2824u), 0u);
    st32((c.r[18].w[0] + 2828u), 0u);
    st32((c.r[18].w[0] + 2832u), c.r[6].w[0]);
    st32((c.r[18].w[0] + 2836u), c.r[5].w[0]);
    st32((c.r[18].w[0] + 2840u), c.r[3].w[0]);
    c.budget -= 33;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8468u); st32((c.r[18].w[0] + 2844u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E8468u) [[unlikely]] return; }
L_002E8468:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8478u); st128((c.r[18].w[0] + 2848u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E8478u) [[unlikely]] return; }
L_002E8478:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8488u); st128((c.r[18].w[0] + 2864u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E8488u) [[unlikely]] return; }
L_002E8488:
    ld128((c.r[2].w[0]) & ~15u, c.r[10]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x42840000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x43340000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[7], 0u + 56u);
    set32(c.r[6], 0u + 3u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], c.r[18].w[0] + 2928u);
    c.r[4].d[0] = 0ull + 0ull;
    st128((c.r[18].w[0] + 2880u) & ~15u, c.r[10]);
    set32(c.r[2], 0u + 2u);
    st32((c.r[18].w[0] + 2896u), c.r[9].w[0]);
    st32((c.r[18].w[0] + 2900u), c.r[8].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 23048u));
    st32((c.r[18].w[0] + 2904u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 23048u));
    st32((c.r[18].w[0] + 2908u), c.f[0]);
    st32((c.r[18].w[0] + 2912u), c.r[7].w[0]);
    st32((c.r[18].w[0] + 2928u), 0u);
    st32((c.r[18].w[0] + 2932u), 0u);
    st32((c.r[18].w[0] + 2944u), c.r[6].w[0]);
    st32((c.r[18].w[0] + 2948u), c.r[5].w[0]);
    st32((c.r[18].w[0] + 2952u), c.r[3].w[0]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E84F0u); st32((c.r[18].w[0] + 2956u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E84F0u) [[unlikely]] return; }
L_002E84F0:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8500u); st128((c.r[18].w[0] + 2960u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E8500u) [[unlikely]] return; }
L_002E8500:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8510u); st128((c.r[18].w[0] + 2976u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E8510u) [[unlikely]] return; }
L_002E8510:
    ld128((c.r[2].w[0]) & ~15u, c.r[7]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x42E80000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43340000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[18].w[0] + 3040u);
    set32(c.r[5], 0u + 32u);
    st128((c.r[18].w[0] + 2992u) & ~15u, c.r[7]);
    set32(c.r[2], 0u + 56u);
    st32((c.r[18].w[0] + 3008u), c.r[6].w[0]);
    st32((c.r[18].w[0] + 3012u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 23048u));
    st32((c.r[18].w[0] + 3016u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 23048u));
    st32((c.r[18].w[0] + 3020u), c.f[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8554u); st32((c.r[18].w[0] + 3024u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x002E8554u) [[unlikely]] return; }
L_002E8554:
    set32(c.r[4], c.r[18].w[0] + 3072u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8560u); set32(c.r[5], 0u + 32u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x002E8560u) [[unlikely]] return; }
L_002E8560:
    set32(c.r[4], c.r[18].w[0] + 3104u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E856Cu); set32(c.r[5], 0u + 32u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x002E856Cu) [[unlikely]] return; }
L_002E856C:
    set32(c.r[4], c.r[18].w[0] + 3136u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8578u); set32(c.r[5], 0u + 32u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x002E8578u) [[unlikely]] return; }
L_002E8578:
    set32(c.r[4], c.r[18].w[0] + 3168u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8584u); set32(c.r[5], 0u + 32u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x002E8584u) [[unlikely]] return; }
L_002E8584:
    set32(c.r[3], 0u + 3u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 3200u), c.r[3].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 3204u), c.r[2].w[0]);
    set32(c.r[3], c.r[18].w[0] + 3040u);
    set32(c.r[2], 0u + 8u);
    st32((c.r[18].w[0] + 3208u), c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E85ACu); st32((c.r[18].w[0] + 3212u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E85ACu) [[unlikely]] return; }
L_002E85AC:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E85BCu); st128((c.r[18].w[0] + 3216u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E85BCu) [[unlikely]] return; }
L_002E85BC:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E85CCu); st128((c.r[18].w[0] + 3232u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E85CCu) [[unlikely]] return; }
L_002E85CC:
    ld128((c.r[2].w[0]) & ~15u, c.r[9]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x42AC0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x42940000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[6], 0u + 37u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[3], c.r[18].w[0] + 3072u);
    c.r[4].d[0] = 0ull + 0ull;
    st128((c.r[18].w[0] + 3248u) & ~15u, c.r[9]);
    set32(c.r[2], 0u + 8u);
    st32((c.r[18].w[0] + 3264u), c.r[8].w[0]);
    st32((c.r[18].w[0] + 3268u), c.r[7].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 23048u));
    st32((c.r[18].w[0] + 3272u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 23048u));
    st32((c.r[18].w[0] + 3276u), c.f[0]);
    st32((c.r[18].w[0] + 3280u), c.r[6].w[0]);
    st32((c.r[18].w[0] + 3296u), c.r[5].w[0]);
    st32((c.r[18].w[0] + 3300u), 0u);
    st32((c.r[18].w[0] + 3304u), c.r[3].w[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8628u); st32((c.r[18].w[0] + 3308u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E8628u) [[unlikely]] return; }
L_002E8628:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8638u); st128((c.r[18].w[0] + 3312u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E8638u) [[unlikely]] return; }
L_002E8638:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8648u); st128((c.r[18].w[0] + 3328u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E8648u) [[unlikely]] return; }
L_002E8648:
    ld128((c.r[2].w[0]) & ~15u, c.r[9]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x43BD0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x42B20000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[6], 0u + 37u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[3], c.r[18].w[0] + 3104u);
    c.r[4].d[0] = 0ull + 0ull;
    st128((c.r[18].w[0] + 3344u) & ~15u, c.r[9]);
    set32(c.r[2], 0u + 8u);
    st32((c.r[18].w[0] + 3360u), c.r[8].w[0]);
    st32((c.r[18].w[0] + 3364u), c.r[7].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 23040u));
    st32((c.r[18].w[0] + 3368u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 23040u));
    st32((c.r[18].w[0] + 3372u), c.f[0]);
    st32((c.r[18].w[0] + 3376u), c.r[6].w[0]);
    st32((c.r[18].w[0] + 3392u), c.r[5].w[0]);
    st32((c.r[18].w[0] + 3396u), 0u);
    st32((c.r[18].w[0] + 3400u), c.r[3].w[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E86A4u); st32((c.r[18].w[0] + 3404u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E86A4u) [[unlikely]] return; }
L_002E86A4:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E86B4u); st128((c.r[18].w[0] + 3408u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E86B4u) [[unlikely]] return; }
L_002E86B4:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E86C4u); st128((c.r[18].w[0] + 3424u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E86C4u) [[unlikely]] return; }
L_002E86C4:
    ld128((c.r[2].w[0]) & ~15u, c.r[8]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x42B20000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[6], 0u + 37u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[3], c.r[18].w[0] + 3136u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 459u);
    st128((c.r[18].w[0] + 3440u) & ~15u, c.r[8]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], 0u + 8u);
    st32((c.r[18].w[0] + 3456u), c.f[0]);
    st32((c.r[18].w[0] + 3460u), c.r[7].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 23040u));
    st32((c.r[18].w[0] + 3464u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 23040u));
    st32((c.r[18].w[0] + 3468u), c.f[0]);
    st32((c.r[18].w[0] + 3472u), c.r[6].w[0]);
    st32((c.r[18].w[0] + 3488u), c.r[5].w[0]);
    st32((c.r[18].w[0] + 3492u), 0u);
    st32((c.r[18].w[0] + 3496u), c.r[3].w[0]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E872Cu); st32((c.r[18].w[0] + 3500u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E872Cu) [[unlikely]] return; }
L_002E872C:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E873Cu); st128((c.r[18].w[0] + 3504u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E873Cu) [[unlikely]] return; }
L_002E873C:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E874Cu); st128((c.r[18].w[0] + 3520u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E874Cu) [[unlikely]] return; }
L_002E874C:
    ld128((c.r[2].w[0]) & ~15u, c.r[8]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x42B20000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[6], 0u + 37u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], c.r[18].w[0] + 3168u);
    set32(c.r[2], 0u + 543u);
    st128((c.r[18].w[0] + 3536u) & ~15u, c.r[8]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], 0u + 8u);
    st32((c.r[18].w[0] + 3552u), c.f[0]);
    st32((c.r[18].w[0] + 3556u), c.r[7].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 23040u));
    st32((c.r[18].w[0] + 3560u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 23040u));
    st32((c.r[18].w[0] + 3564u), c.f[0]);
    st32((c.r[18].w[0] + 3568u), c.r[6].w[0]);
    st32((c.r[18].w[0] + 3584u), c.r[4].w[0]);
    st32((c.r[18].w[0] + 3588u), c.r[5].w[0]);
    st32((c.r[18].w[0] + 3592u), c.r[3].w[0]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E87B4u); st32((c.r[18].w[0] + 3596u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E87B4u) [[unlikely]] return; }
L_002E87B4:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E87C4u); st128((c.r[18].w[0] + 3600u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E87C4u) [[unlikely]] return; }
L_002E87C4:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E87D4u); st128((c.r[18].w[0] + 3616u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E87D4u) [[unlikely]] return; }
L_002E87D4:
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x42AA0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x42B20000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.r[16].d[0] = 0ull + 0ull;
    st128((c.r[18].w[0] + 3632u) & ~15u, c.r[6]);
    set32(c.r[2], 0u + 37u);
    st32((c.r[18].w[0] + 3648u), c.r[5].w[0]);
    st32((c.r[18].w[0] + 3652u), c.r[4].w[0]);
    st32((c.r[18].w[0] + 3656u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 3660u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 3664u), c.r[2].w[0]);
    c.budget -= 12;
L_002E8804:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E880Cu); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E880Cu) [[unlikely]] return; }
L_002E880C:
    ld128((c.r[2].w[0]) & ~15u, c.r[4]);
    set32(c.r[2], c.r[16].w[0] << 4);
    set32(c.r[3], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st128((c.r[3].w[0] + 3680u) & ~15u, c.r[4]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E8804u | kUnwind; return; } goto L_002E8804; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8830u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002E8830u) [[unlikely]] return; }
L_002E8830:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002E8848; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8848u); set32(c.r[6], 0u + 11u);  if (depth < kMaxDepth) unit_006F(c, 5u, depth + 1u); else { c.pc = 0x002BC070u; return; } if (c.pc != 0x002E8848u) [[unlikely]] return; }
L_002E8848:
    st32((c.r[18].w[0] + 3840u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8854u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002E8854u) [[unlikely]] return; }
L_002E8854:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x426C0000u);  if (t) { goto L_002E8888; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42940000u);
    c.f[12] = c.r[4].w[0];
    set32(c.r[5], 0u + 3u);
    c.f[13] = c.r[3].w[0];
    set32(c.r[6], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x42980000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[14] = c.r[4].w[0];
    c.f[15] = c.r[3].w[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8888u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 27u, depth + 1u); else { c.pc = 0x002BC5A0u; return; } if (c.pc != 0x002E8888u) [[unlikely]] return; }
L_002E8888:
    st32((c.r[18].w[0] + 3844u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8894u); set32(c.r[4], 0u + 208u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002E8894u) [[unlikely]] return; }
L_002E8894:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002E88AC; } }
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 11u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E88ACu); set32(c.r[7], c.r[18].w[0] + 2832u);  if (depth < kMaxDepth) unit_006E(c, 452u, depth + 1u); else { c.pc = 0x002BB370u; return; } if (c.pc != 0x002E88ACu) [[unlikely]] return; }
L_002E88AC:
    st32((c.r[18].w[0] + 3848u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E88B8u); set32(c.r[4], 0u + 208u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002E88B8u) [[unlikely]] return; }
L_002E88B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002E88D0; } }
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 11u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E88D0u); set32(c.r[7], c.r[18].w[0] + 2944u);  if (depth < kMaxDepth) unit_006E(c, 452u, depth + 1u); else { c.pc = 0x002BB370u; return; } if (c.pc != 0x002E88D0u) [[unlikely]] return; }
L_002E88D0:
    st32((c.r[18].w[0] + 3852u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E88DCu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E88DCu) [[unlikely]] return; }
L_002E88DC:
    ld128((c.r[2].w[0]) & ~15u, c.r[7]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42940000u);
    set32(c.r[6], 0u + 64u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[13] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[7]);
    c.f[12] = c.r[2].w[0];
    st32((c.r[29].w[0] + 92u), c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[18].w[0] + 3844u)));
    st128((c.r[2].w[0] + 128u) & ~15u, c.r[3]);
    set32(c.r[4], ld32((c.r[18].w[0] + 3840u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 72u)));
    c.budget -= 23;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8938u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E8938u) [[unlikely]] return; }
L_002E8938:
    set32(c.r[3], ld32((c.r[18].w[0] + 3840u)));
    set32(c.r[4], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[3].w[0] + 128u), c.r[4].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 23048u));
    set32(c.r[3], ld32((c.r[18].w[0] + 3840u)));
    st32((c.r[3].w[0] + 52u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 23048u));
    st32((c.r[3].w[0] + 56u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002E8980:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002E8A78; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 14400u);
    set32(c.r[2], c.r[2].w[0] + 14488u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 3840u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E89D8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E89D8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E89D8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E89D8u) [[unlikely]] return; }
L_002E89D8:
    st32((c.r[17].w[0] + 3840u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 3844u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E8A00; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E8A00; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8A00u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E8A00u) [[unlikely]] return; }
L_002E8A00:
    st32((c.r[17].w[0] + 3844u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 3848u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E8A28; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E8A28; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8A28u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E8A28u) [[unlikely]] return; }
L_002E8A28:
    st32((c.r[17].w[0] + 3848u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 3852u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E8A50; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E8A50; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8A50u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E8A50u) [[unlikely]] return; }
L_002E8A50:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8A60u); st32((c.r[17].w[0] + 3852u), 0u);  if (depth < kMaxDepth) unit_0079(c, 130u, depth + 1u); else { c.pc = 0x002E5880u; return; } if (c.pc != 0x002E8A60u) [[unlikely]] return; }
L_002E8A60:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002E8A7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8A78u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002E8A78u) [[unlikely]] return; }
L_002E8A78:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002E8A7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E8A90:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[18].w[0] + 2480u);
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[3], c.r[18].w[0] + 2592u);
    set32(c.r[2], c.r[18].w[0] + 2704u);
    st32((c.r[29].w[0] + 68u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[3], c.r[18].w[0] + 2800u);
    set32(c.r[2], 0u + 5u);
    st32((c.r[29].w[0] + 76u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8AD8u); set32(c.r[4], ld32((c.r[4].w[0] + 2444u)));  if (depth < kMaxDepth) unit_006E(c, 92u, depth + 1u); else { c.pc = 0x002B8670u; return; } if (c.pc != 0x002E8AD8u) [[unlikely]] return; }
L_002E8AD8:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E8B00; } }
    set32(c.r[2], 0u + 8u);
    set32(c.r[16], c.r[29].w[0] + 108u);
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002E8B0C; } }
L_002E8B00:
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    set32(c.r[16], c.r[29].w[0] + 108u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002E8B0C:
    set32(c.r[2], c.r[18].w[0] + 3200u);
    set32(c.r[3], c.r[18].w[0] + 3296u);
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[18].w[0] + 3392u);
    st32((c.r[29].w[0] + 84u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[3], c.r[18].w[0] + 3488u);
    set32(c.r[2], c.r[18].w[0] + 3584u);
    st32((c.r[29].w[0] + 92u), c.r[3].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 96u), c.r[2].w[0]);  if (t) { goto L_002E8B88; } }
L_002E8B3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8B44u); set32(c.r[4], ld32((c.r[18].w[0] + 2444u)));  if (depth < kMaxDepth) unit_006E(c, 92u, depth + 1u); else { c.pc = 0x002B8670u; return; } if (c.pc != 0x002E8B44u) [[unlikely]] return; }
L_002E8B44:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    set32(c.r[5], 0u + 1u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002E8B70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8B60u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 39u, depth + 1u); else { c.pc = 0x002C85D0u; return; } if (c.pc != 0x002E8B60u) [[unlikely]] return; }
L_002E8B60:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 3808u), c.r[2].w[0]);  if (t) { goto L_002E8B84; } }
L_002E8B70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8B78u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0072(c, 39u, depth + 1u); else { c.pc = 0x002C85D0u; return; } if (c.pc != 0x002E8B78u) [[unlikely]] return; }
L_002E8B78:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 3808u), c.r[2].w[0]);
    c.budget -= 3;
L_002E8B84:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002E8B88:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E8B3Cu | kUnwind; return; } goto L_002E8B3C; } }
    set32(c.r[3], 0u + 320u);
    c.f[0] = ld32((c.r[1].w[0] - 23048u));
    set32(c.r[2], c.r[18].w[0] + 3808u);
    st32((c.r[29].w[0] + 116u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], 0u + 58u);
    st32((c.r[29].w[0] + 120u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[2], 0u + 388u);
    st32((c.r[29].w[0] + 128u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 132u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 136u), c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8BD4u); st32((c.r[29].w[0] + 140u), c.f[0]);  if (depth < kMaxDepth) unit_0079(c, 144u, depth + 1u); else { c.pc = 0x002E5B00u; return; } if (c.pc != 0x002E8BD4u) [[unlikely]] return; }
L_002E8BD4:
    st32((c.r[18].w[0] + 2824u), 0u);
    st32((c.r[18].w[0] + 2928u), 0u);
    st32((c.r[18].w[0] + 2828u), 0u);
    st32((c.r[18].w[0] + 2932u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8BECu); set32(c.r[4], ld32((c.r[18].w[0] + 2444u)));  if (depth < kMaxDepth) unit_006E(c, 92u, depth + 1u); else { c.pc = 0x002B8670u; return; } if (c.pc != 0x002E8BECu) [[unlikely]] return; }
L_002E8BEC:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E8D64; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 2372u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[5].w[0] - 11120u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8C1Cu); set32(c.r[6], 0u + 8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E8C1Cu) [[unlikely]] return; }
L_002E8C1C:
    set32(c.r[4], ld32((c.r[18].w[0] + 2376u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[5].w[0] - 11056u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8C38u); set32(c.r[6], 0u + 8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E8C38u) [[unlikely]] return; }
L_002E8C38:
    set32(c.r[4], ld32((c.r[18].w[0] + 2380u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[5].w[0] - 11056u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8C54u); set32(c.r[6], 0u + 8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E8C54u) [[unlikely]] return; }
L_002E8C54:
    set32(c.r[4], ld32((c.r[18].w[0] + 2384u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[5].w[0] - 11056u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8C70u); set32(c.r[6], 0u + 8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E8C70u) [[unlikely]] return; }
L_002E8C70:
    set32(c.r[4], ld32((c.r[18].w[0] + 2388u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[5].w[0] - 11120u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8C8Cu); set32(c.r[6], 0u + 8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E8C8Cu) [[unlikely]] return; }
L_002E8C8C:
    set32(c.r[4], ld32((c.r[18].w[0] + 3840u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[5].w[0] - 10992u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8CA8u); set32(c.r[6], 0u + 6u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E8CA8u) [[unlikely]] return; }
L_002E8CA8:
    set32(c.r[4], ld32((c.r[18].w[0] + 3844u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[5].w[0] - 10944u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8CC4u); set32(c.r[6], 0u + 32u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E8CC4u) [[unlikely]] return; }
L_002E8CC4:
    set32(c.r[2], ld32((c.r[18].w[0] + 3844u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[3].w[0] - 10688u);
    st32((c.r[2].w[0] + 144u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 2444u)));
    set32(c.r[6], ld32((c.r[18].w[0] + 3816u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8CE4u); set32(c.r[4], ld32((c.r[18].w[0] + 2440u)));  if (depth < kMaxDepth) unit_006D(c, 337u, depth + 1u); else { c.pc = 0x002B7630u; return; } if (c.pc != 0x002E8CE4u) [[unlikely]] return; }
L_002E8CE4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[2].w[0] + 2u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[4], 0u + 387u);  if (t) { goto L_002E8D00; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E8D1C; } }
L_002E8D00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8D08u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002E8D08u) [[unlikely]] return; }
L_002E8D08:
    st32((c.r[18].w[0] + 2824u), c.r[2].w[0]);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 4u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8D18u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012CDE0u; return; } if (c.pc != 0x002E8D18u) [[unlikely]] return; }
L_002E8D18:
    st32((c.r[18].w[0] + 2928u), c.r[2].w[0]);
    c.budget -= 1;
L_002E8D1C:
    set32(c.r[5], ld32((c.r[18].w[0] + 2444u)));
    set32(c.r[6], ld32((c.r[18].w[0] + 3820u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8D2Cu); set32(c.r[4], ld32((c.r[18].w[0] + 2440u)));  if (depth < kMaxDepth) unit_006D(c, 337u, depth + 1u); else { c.pc = 0x002B7630u; return; } if (c.pc != 0x002E8D2Cu) [[unlikely]] return; }
L_002E8D2C:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002E8D44; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E8D90; } }
L_002E8D44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8D4Cu); set32(c.r[4], 0u + 387u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002E8D4Cu) [[unlikely]] return; }
L_002E8D4C:
    st32((c.r[18].w[0] + 2828u), c.r[2].w[0]);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 4u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8D5Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012CDE0u; return; } if (c.pc != 0x002E8D5Cu) [[unlikely]] return; }
L_002E8D5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 2932u), c.r[2].w[0]);  if (t) { goto L_002E8D90; } }
L_002E8D64:
    set32(c.r[4], ld32((c.r[18].w[0] + 3844u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[5].w[0] - 10944u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8D80u); set32(c.r[6], 0u + 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E8D80u) [[unlikely]] return; }
L_002E8D80:
    set32(c.r[3], ld32((c.r[18].w[0] + 3844u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[4].w[0] - 10688u);
    st32((c.r[3].w[0] + 144u), c.r[4].w[0]);
    c.budget -= 4;
L_002E8D90:
    set32(c.r[3], ld32((c.r[18].w[0] + 2388u)));
    set32(c.r[4], c.r[18].w[0] + 3680u);
    st32((c.r[3].w[0] + 196u), c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_002E8DC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8DD4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0079(c, 221u, depth + 1u); else { c.pc = 0x002E6700u; return; } if (c.pc != 0x002E8DD4u) [[unlikely]] return; }
L_002E8DD4:
    set32(c.r[4], ld32((c.r[16].w[0] + 3840u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 5u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8DF4u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E8DF4u) [[unlikely]] return; }
L_002E8DF4:
    set32(c.r[4], ld32((c.r[16].w[0] + 3844u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 5u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8E14u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E8E14u) [[unlikely]] return; }
L_002E8E14:
    set32(c.r[4], ld32((c.r[16].w[0] + 3848u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 5u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8E34u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E8E34u) [[unlikely]] return; }
L_002E8E34:
    set32(c.r[4], ld32((c.r[16].w[0] + 3852u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 5u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8E54u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E8E54u) [[unlikely]] return; }
L_002E8E54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8E5Cu); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x002E8E5Cu) [[unlikely]] return; }
L_002E8E5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E8E70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8E84u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0079(c, 238u, depth + 1u); else { c.pc = 0x002E6920u; return; } if (c.pc != 0x002E8E84u) [[unlikely]] return; }
L_002E8E84:
    set32(c.r[4], ld32((c.r[16].w[0] + 3840u)));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 3u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8EA4u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E8EA4u) [[unlikely]] return; }
L_002E8EA4:
    set32(c.r[4], ld32((c.r[16].w[0] + 3844u)));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 3u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8EC4u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E8EC4u) [[unlikely]] return; }
L_002E8EC4:
    set32(c.r[4], ld32((c.r[16].w[0] + 3848u)));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 3u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8EE4u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E8EE4u) [[unlikely]] return; }
L_002E8EE4:
    set32(c.r[4], ld32((c.r[16].w[0] + 3852u)));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 3u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8F04u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E8F04u) [[unlikely]] return; }
L_002E8F04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E8F20:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C4DB0u | kUnwind; return; } [[clang::musttail]] return unit_0071(c, 58u, depth); }
L_002E8F30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8F48u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0079(c, 209u, depth + 1u); else { c.pc = 0x002E6540u; return; } if (c.pc != 0x002E8F48u) [[unlikely]] return; }
L_002E8F48:
    set32(c.r[4], ld32((c.r[16].w[0] + 3840u)));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8F64u); c.r[17].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E8F64u) [[unlikely]] return; }
L_002E8F64:
    set32(c.r[4], ld32((c.r[16].w[0] + 3844u)));
    c.r[3].d[0] = c.r[17].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8F84u); c.r[17].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E8F84u) [[unlikely]] return; }
L_002E8F84:
    set32(c.r[4], ld32((c.r[16].w[0] + 3848u)));
    c.r[3].d[0] = c.r[17].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8FA4u); c.r[17].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E8FA4u) [[unlikely]] return; }
L_002E8FA4:
    set32(c.r[4], ld32((c.r[16].w[0] + 3852u)));
    c.r[3].d[0] = c.r[17].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8FC4u); c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E8FC4u) [[unlikely]] return; }
L_002E8FC4:
    c.r[3].d[0] = c.r[16].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E8FF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9008u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 12u, depth + 1u); else { c.pc = 0x002B8150u; return; } if (c.pc != 0x002E9008u) [[unlikely]] return; }
L_002E9008:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 23168u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E901Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x002E901Cu) [[unlikely]] return; }
L_002E901C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E9030:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 2444u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9050u); set32(c.r[4], ld32((c.r[4].w[0] + 2440u)));  if (depth < kMaxDepth) unit_006D(c, 337u, depth + 1u); else { c.pc = 0x002B7630u; return; } if (c.pc != 0x002E9050u) [[unlikely]] return; }
L_002E9050:
    c.r[6].d[0] = ld8((c.r[2].w[0] + 2u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9064u); set32(c.r[5], c.r[5].w[0] - 23272u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x002E9064u) [[unlikely]] return; }
L_002E9064:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E9080:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 2444u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E90A0u); set32(c.r[4], ld32((c.r[4].w[0] + 2440u)));  if (depth < kMaxDepth) unit_006D(c, 337u, depth + 1u); else { c.pc = 0x002B7630u; return; } if (c.pc != 0x002E90A0u) [[unlikely]] return; }
L_002E90A0:
    c.r[6].d[0] = ld8((c.r[2].w[0] + 3u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E90B4u); set32(c.r[5], c.r[5].w[0] - 23272u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x002E90B4u) [[unlikely]] return; }
L_002E90B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E90D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 2444u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E90F4u); set32(c.r[4], ld32((c.r[4].w[0] + 2440u)));  if (depth < kMaxDepth) unit_006D(c, 337u, depth + 1u); else { c.pc = 0x002B7630u; return; } if (c.pc != 0x002E90F4u) [[unlikely]] return; }
L_002E90F4:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 2u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 3u));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_002E9114; } }
    c.f[20] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[12] = c.f[20];  if (t) { goto L_002E9130; } }
L_002E9114:
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 20u, c.f[1], c.f[0]);
    c.f[12] = c.f[20];
    c.budget -= 7;
L_002E9130:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9138u);  if (depth < kMaxDepth) unit_0007(c, 36u, depth + 1u); else { c.pc = 0x0011C438u; return; } if (c.pc != 0x002E9138u) [[unlikely]] return; }
L_002E9138:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E914Cu); set32(c.r[5], c.r[5].w[0] - 23088u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x002E914Cu) [[unlikely]] return; }
L_002E914C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002E9178; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9170u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x002E9170u) [[unlikely]] return; }
L_002E9170:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002E9184; } }
L_002E9178:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9180u); set32(c.r[5], c.r[29].w[0] + 49u);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x002E9180u) [[unlikely]] return; }
L_002E9180:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002E9184:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002E91A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 2444u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E91C4u); set32(c.r[4], ld32((c.r[4].w[0] + 2440u)));  if (depth < kMaxDepth) unit_006D(c, 337u, depth + 1u); else { c.pc = 0x002B7630u; return; } if (c.pc != 0x002E91C4u) [[unlikely]] return; }
L_002E91C4:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 3u);  if (t) { goto L_002E91F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E91D8u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E91D8u) [[unlikely]] return; }
L_002E91D8:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[17].w[0] + 2460u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st128((c.r[2].w[0] + 3680u) & ~15u, c.r[3]);  if (t) { goto L_002E9220; } }
L_002E91F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E91F8u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E91F8u) [[unlikely]] return; }
L_002E91F8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9204u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_006E(c, 450u, depth + 1u); else { c.pc = 0x002BB320u; return; } if (c.pc != 0x002E9204u) [[unlikely]] return; }
L_002E9204:
    set32(c.r[2], ld32((c.r[17].w[0] + 2460u)));
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[6], 0u + 16u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9220u); set32(c.r[4], c.r[2].w[0] + 3680u);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x002E9220u) [[unlikely]] return; }
L_002E9220:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9228u); set32(c.r[4], 0u + 338u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002E9228u) [[unlikely]] return; }
L_002E9228:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9234u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x002E9234u) [[unlikely]] return; }
L_002E9234:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002E9250:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E926Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0079(c, 117u, depth + 1u); else { c.pc = 0x002E5710u; return; } if (c.pc != 0x002E926Cu) [[unlikely]] return; }
L_002E926C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 14160u);
    set32(c.r[2], c.r[2].w[0] + 14248u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    set32(c.r[4], 0u + 315u);
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 2716u), 0u);
    st32((c.r[18].w[0] + 2720u), 0u);
    st32((c.r[18].w[0] + 2724u), 0u);
    st32((c.r[18].w[0] + 2728u), 0u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E92A0u); st32((c.r[18].w[0] + 2732u), 0u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002E92A0u) [[unlikely]] return; }
L_002E92A0:
    st32((c.r[18].w[0] + 2468u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 2u);
    set32(c.r[4], 0u + 4u);
    st32((c.r[18].w[0] + 2480u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 2484u), c.r[3].w[0]);
    set32(c.r[2], c.r[18].w[0] + 2468u);
    st32((c.r[18].w[0] + 2488u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E92C8u); st32((c.r[18].w[0] + 2492u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E92C8u) [[unlikely]] return; }
L_002E92C8:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E92D8u); st128((c.r[18].w[0] + 2496u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E92D8u) [[unlikely]] return; }
L_002E92D8:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E92E8u); st128((c.r[18].w[0] + 2512u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E92E8u) [[unlikely]] return; }
L_002E92E8:
    ld128((c.r[2].w[0]) & ~15u, c.r[5]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], 0u + 314u);
    st128((c.r[18].w[0] + 2528u) & ~15u, c.r[5]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    st32((c.r[18].w[0] + 2544u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 2548u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 23024u));
    st32((c.r[18].w[0] + 2552u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 23024u));
    st32((c.r[18].w[0] + 2556u), c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9324u); st32((c.r[18].w[0] + 2560u), 0u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002E9324u) [[unlikely]] return; }
L_002E9324:
    st32((c.r[18].w[0] + 2576u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 3u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 2592u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 2596u), c.r[3].w[0]);
    set32(c.r[2], c.r[18].w[0] + 2576u);
    st32((c.r[18].w[0] + 2600u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E934Cu); st32((c.r[18].w[0] + 2604u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E934Cu) [[unlikely]] return; }
L_002E934C:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E935Cu); st128((c.r[18].w[0] + 2608u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E935Cu) [[unlikely]] return; }
L_002E935C:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E936Cu); st128((c.r[18].w[0] + 2624u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E936Cu) [[unlikely]] return; }
L_002E936C:
    ld128((c.r[2].w[0]) & ~15u, c.r[5]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], 0u + 272u);
    st128((c.r[18].w[0] + 2640u) & ~15u, c.r[5]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    st32((c.r[18].w[0] + 2656u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 2660u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 23032u));
    st32((c.r[18].w[0] + 2664u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 23032u));
    st32((c.r[18].w[0] + 2668u), c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E93A8u); st32((c.r[18].w[0] + 2672u), 0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002E93A8u) [[unlikely]] return; }
L_002E93A8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[4], 0u + 272u);  if (t) { goto L_002E93E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x73720000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E93C0u); c.r[4].d[0] = c.r[2].d[0] | 25955ull;  if (depth < kMaxDepth) unit_0087(c, 63u, depth + 1u); else { c.pc = 0x0031C6B0u; return; } if (c.pc != 0x002E93C0u) [[unlikely]] return; }
L_002E93C0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E93CCu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0087(c, 68u, depth + 1u); else { c.pc = 0x0031C750u; return; } if (c.pc != 0x002E93CCu) [[unlikely]] return; }
L_002E93CC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E93D8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x002E93D8u) [[unlikely]] return; }
L_002E93D8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 272u);
    c.budget -= 2;
L_002E93E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E93E8u); st32((c.r[18].w[0] + 2688u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002E93E8u) [[unlikely]] return; }
L_002E93E8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[4], 0u + 272u);  if (t) { goto L_002E9420; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x73720000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9400u); c.r[4].d[0] = c.r[2].d[0] | 25955ull;  if (depth < kMaxDepth) unit_0087(c, 63u, depth + 1u); else { c.pc = 0x0031C6B0u; return; } if (c.pc != 0x002E9400u) [[unlikely]] return; }
L_002E9400:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E940Cu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0087(c, 68u, depth + 1u); else { c.pc = 0x0031C750u; return; } if (c.pc != 0x002E940Cu) [[unlikely]] return; }
L_002E940C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9418u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x002E9418u) [[unlikely]] return; }
L_002E9418:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 272u);
    c.budget -= 2;
L_002E9420:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9428u); st32((c.r[18].w[0] + 2692u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002E9428u) [[unlikely]] return; }
L_002E9428:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002E945C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x73720000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9440u); c.r[4].d[0] = c.r[2].d[0] | 25955ull;  if (depth < kMaxDepth) unit_0087(c, 63u, depth + 1u); else { c.pc = 0x0031C6B0u; return; } if (c.pc != 0x002E9440u) [[unlikely]] return; }
L_002E9440:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E944Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0087(c, 68u, depth + 1u); else { c.pc = 0x0031C750u; return; } if (c.pc != 0x002E944Cu) [[unlikely]] return; }
L_002E944C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9458u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x002E9458u) [[unlikely]] return; }
L_002E9458:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002E945C:
    st32((c.r[18].w[0] + 2700u), c.r[16].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[5], 0u + 12u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9474u); set32(c.r[4], c.r[2].w[0] + 624u);  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x002E9474u) [[unlikely]] return; }
L_002E9474:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9480u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002E9480u) [[unlikely]] return; }
L_002E9480:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E9498; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[5].d[0] = ld64((c.r[3].w[0] + 16u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9498u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x002E9498u) [[unlikely]] return; }
L_002E9498:
    st32((c.r[18].w[0] + 2696u), c.r[2].w[0]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002E94A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E94A8u); set32(c.r[4], 0u + 1168u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002E94A8u) [[unlikely]] return; }
L_002E94A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] << 2);  if (t) { goto L_002E94D0; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 2688u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[18].w[0] + 2692u)));
    set32(c.r[7], ld32((c.r[18].w[0] + 2700u)));
    set32(c.r[8], ld32((c.r[18].w[0] + 2696u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E94CCu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_007C(c, 257u, depth + 1u); else { c.pc = 0x002F2870u; return; } if (c.pc != 0x002E94CCu) [[unlikely]] return; }
L_002E94CC:
    set32(c.r[16], c.r[17].w[0] << 2);
    c.budget -= 1;
L_002E94D0:
    set32(c.r[3], c.r[17].w[0] << 3);
    set32(c.r[4], c.r[18].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[17].w[0]);
    st32((c.r[4].w[0] + 2704u), c.r[2].w[0]);
    set32(c.r[5], 0u + 320u);
    set32(c.r[4], ld32((c.r[4].w[0] + 2704u)));
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E94FCu); set32(c.r[6], c.r[2].w[0] + 102u);  if (depth < kMaxDepth) unit_007D(c, 52u, depth + 1u); else { c.pc = 0x002F47E0u; return; } if (c.pc != 0x002E94FCu) [[unlikely]] return; }
L_002E94FC:
    set32(c.r[2], c.r[18].w[0] + c.r[16].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 2704u)));
    set32(c.r[6], 0u + 45u);
    set32(c.r[7], 0u + 640u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9518u); set32(c.r[8], 0u + 147u);  if (depth < kMaxDepth) unit_007D(c, 51u, depth + 1u); else { c.pc = 0x002F4710u; return; } if (c.pc != 0x002E9518u) [[unlikely]] return; }
L_002E9518:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 1168u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E94A0u | kUnwind; return; } goto L_002E94A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9530u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002E9530u) [[unlikely]] return; }
L_002E9530:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E9554; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 2688u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[18].w[0] + 2692u)));
    set32(c.r[7], ld32((c.r[18].w[0] + 2700u)));
    set32(c.r[8], ld32((c.r[18].w[0] + 2696u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9554u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_007C(c, 257u, depth + 1u); else { c.pc = 0x002F2870u; return; } if (c.pc != 0x002E9554u) [[unlikely]] return; }
L_002E9554:
    st32((c.r[18].w[0] + 2716u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002E9580:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002E96D0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 14160u);
    set32(c.r[2], c.r[2].w[0] + 14248u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 2688u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E95E0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E95E0; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E95E0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E95E0u) [[unlikely]] return; }
L_002E95E0:
    st32((c.r[17].w[0] + 2688u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 2692u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E9608; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E9608; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9608u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E9608u) [[unlikely]] return; }
L_002E9608:
    st32((c.r[17].w[0] + 2692u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 2696u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E9630; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E9630; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9630u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E9630u) [[unlikely]] return; }
L_002E9630:
    st32((c.r[17].w[0] + 2696u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 2700u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E9658; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E9658; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9658u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E9658u) [[unlikely]] return; }
L_002E9658:
    st32((c.r[17].w[0] + 2700u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 2716u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_002E9680; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_002E9678; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9678u);  if (depth < kMaxDepth) unit_007C(c, 298u, depth + 1u); else { c.pc = 0x002F2E30u; return; } if (c.pc != 0x002E9678u) [[unlikely]] return; }
L_002E9678:
    st32((c.r[17].w[0] + 2716u), 0u);
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002E9680:
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 2704u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[18], c.r[2].w[0] + 2704u);  if (t) { goto L_002E969C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E969Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_007C(c, 298u, depth + 1u); else { c.pc = 0x002F2E30u; return; } if (c.pc != 0x002E969Cu) [[unlikely]] return; }
L_002E969C:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[18].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E9680u | kUnwind; return; } goto L_002E9680; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E96B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0079(c, 130u, depth + 1u); else { c.pc = 0x002E5880u; return; } if (c.pc != 0x002E96B8u) [[unlikely]] return; }
L_002E96B8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002E96D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E96D0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002E96D0u) [[unlikely]] return; }
L_002E96D0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002E96D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002E96F0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[5], 0u + 80u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E970Cu); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x002E970Cu) [[unlikely]] return; }
L_002E970C:
    set32(c.r[2], c.r[16].w[0] + 2480u);
    st32((c.r[29].w[0] + 40u), 0u);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + 2592u);
    st32((c.r[29].w[0] + 44u), 0u);
    st32((c.r[29].w[0] + 36u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 72u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 2444u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9734u); set32(c.r[4], ld32((c.r[16].w[0] + 2440u)));  if (depth < kMaxDepth) unit_006D(c, 345u, depth + 1u); else { c.pc = 0x002B77E0u; return; } if (c.pc != 0x002E9734u) [[unlikely]] return; }
L_002E9734:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], 0u + 320u);
    c.f[0] = ld32((c.r[1].w[0] - 23048u));
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], 0u + 3u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[2], 0u + 68u);
    st32((c.r[29].w[0] + 88u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    set32(c.r[2], 0u + 394u);
    st32((c.r[29].w[0] + 96u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 104u), c.f[0]);
    st32((c.r[29].w[0] + 108u), c.f[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E977Cu); st32((c.r[29].w[0] + 84u), 0u);  if (depth < kMaxDepth) unit_0079(c, 144u, depth + 1u); else { c.pc = 0x002E5B00u; return; } if (c.pc != 0x002E977Cu) [[unlikely]] return; }
L_002E977C:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 224u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E978Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E978Cu) [[unlikely]] return; }
L_002E978C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002E97A0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 2720u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002E97D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[20].w[0] + 2452u)));  if (t) { goto L_002E97DC; } }
L_002E97D4:
    set32(c.r[3], ld32((c.r[20].w[0] + 2452u)));
    set32(c.r[18], c.r[3].w[0] + 1u);
    c.budget -= 2;
L_002E97DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002E9A38; } }
L_002E97E4:
    set32(c.r[4], ld32((c.r[20].w[0] + 2720u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_002E9880; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002E9838; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E980C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E98C0; } }
L_002E980C:
    set32(c.r[3], ld32((c.r[20].w[0] + 2456u)));
    c.r[1].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002E98C0; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 2464u)));
    set32(c.r[4], ld32((c.r[20].w[0] + 2440u)));
    set32(c.r[5], ld32((c.r[20].w[0] + 2444u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9830u); set32(c.r[6], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_006D(c, 341u, depth + 1u); else { c.pc = 0x002B7720u; return; } if (c.pc != 0x002E9830u) [[unlikely]] return; }
L_002E9830:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002E98C0; } }
L_002E9838:
    c.r[2].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E9864; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 2464u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 2452u)));
    set32(c.r[4], ld32((c.r[20].w[0] + 2440u)));
    set32(c.r[5], ld32((c.r[20].w[0] + 2444u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E985Cu); set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_006D(c, 341u, depth + 1u); else { c.pc = 0x002B7720u; return; } if (c.pc != 0x002E985Cu) [[unlikely]] return; }
L_002E985C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002E98C0; } }
L_002E9864:
    set32(c.r[2], ld32((c.r[20].w[0] + 2464u)));
    set32(c.r[4], ld32((c.r[20].w[0] + 2440u)));
    set32(c.r[5], ld32((c.r[20].w[0] + 2444u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9878u); set32(c.r[6], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_006D(c, 341u, depth + 1u); else { c.pc = 0x002B7720u; return; } if (c.pc != 0x002E9878u) [[unlikely]] return; }
L_002E9878:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002E98C0; } }
L_002E9880:
    c.r[2].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E98A8; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 2464u)));
    set32(c.r[4], ld32((c.r[20].w[0] + 2440u)));
    set32(c.r[5], ld32((c.r[20].w[0] + 2444u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E98A0u); set32(c.r[6], c.r[2].w[0] - 1u);  if (depth < kMaxDepth) unit_006D(c, 341u, depth + 1u); else { c.pc = 0x002B7720u; return; } if (c.pc != 0x002E98A0u) [[unlikely]] return; }
L_002E98A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002E98C0; } }
L_002E98A8:
    set32(c.r[2], ld32((c.r[20].w[0] + 2464u)));
    set32(c.r[4], ld32((c.r[20].w[0] + 2440u)));
    set32(c.r[5], ld32((c.r[20].w[0] + 2444u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E98BCu); set32(c.r[6], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_006D(c, 341u, depth + 1u); else { c.pc = 0x002B7720u; return; } if (c.pc != 0x002E98BCu) [[unlikely]] return; }
L_002E98BC:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002E98C0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002E9A44; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[21], c.r[29].w[0] + 132u);
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    c.r[3].d[0] = ld8((c.r[19].w[0]));
    set32(c.r[2], 0u - 1u);
    st32((c.r[29].w[0] + 116u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[19].w[0] + 1u));
    st32((c.r[29].w[0] + 120u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[19].w[0] + 2u));
    st32((c.r[29].w[0] + 124u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[19].w[0] + 3u));
    st32((c.r[29].w[0] + 128u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[19].w[0] + 4u));
    st32((c.r[21].w[0]), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[19].w[0] + 17u));
    st32((c.r[29].w[0] + 184u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[19].w[0] + 18u));
    st32((c.r[29].w[0] + 188u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 196u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[19].w[0] + 19u));
    c.budget -= 24;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 200u), c.r[2].w[0]);  if (t) { goto L_002E99F0; } }
L_002E9928:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_002E99EC; } }
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 23072u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002E8000u < 16384u) { entry = entries_007A[(t - 0x002E8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002E9948:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 5u));
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[3], c.r[3].w[0] + 112u);
    st32((c.r[3].w[0] + 24u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[19].w[0] + 11u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 48u), c.r[2].w[0]);  if (t) { goto L_002E99EC; } }
L_002E9964:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 6u));
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[3], c.r[3].w[0] + 112u);
    st32((c.r[3].w[0] + 24u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[19].w[0] + 12u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 48u), c.r[2].w[0]);  if (t) { goto L_002E99EC; } }
L_002E9980:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 7u));
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[3], c.r[3].w[0] + 112u);
    st32((c.r[3].w[0] + 24u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[19].w[0] + 13u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 48u), c.r[2].w[0]);  if (t) { goto L_002E99EC; } }
L_002E999C:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 8u));
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[3], c.r[3].w[0] + 112u);
    st32((c.r[3].w[0] + 24u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[19].w[0] + 14u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 48u), c.r[2].w[0]);  if (t) { goto L_002E99EC; } }
L_002E99B8:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 9u));
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[3], c.r[3].w[0] + 112u);
    st32((c.r[3].w[0] + 24u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[19].w[0] + 15u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 48u), c.r[2].w[0]);  if (t) { goto L_002E99EC; } }
L_002E99D4:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 10u));
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[3], c.r[3].w[0] + 112u);
    st32((c.r[3].w[0] + 24u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[19].w[0] + 16u));
    st32((c.r[3].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 6;
L_002E99EC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002E99F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E99F8u); set32(c.r[4], ld32((c.r[21].w[0])));  if (depth < kMaxDepth) unit_006E(c, 100u, depth + 1u); else { c.pc = 0x002B8770u; return; } if (c.pc != 0x002E99F8u) [[unlikely]] return; }
L_002E99F8:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E9928u | kUnwind; return; } goto L_002E9928; } }
    c.r[1].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] << 2);  if (t) { goto L_002E9A28; } }
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 2704u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9A20u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_007C(c, 311u, depth + 1u); else { c.pc = 0x002F3120u; return; } if (c.pc != 0x002E9A20u) [[unlikely]] return; }
L_002E9A20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_002E9A38; } }
L_002E9A28:
    set32(c.r[4], ld32((c.r[20].w[0] + 2716u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9A34u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_007C(c, 311u, depth + 1u); else { c.pc = 0x002F3120u; return; } if (c.pc != 0x002E9A34u) [[unlikely]] return; }
L_002E9A34:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002E9A38:
    c.r[3].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E97E4u | kUnwind; return; } goto L_002E97E4; } }
L_002E9A44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_002E9A70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 24u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 2732u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[1].w[0] - 1536u)));
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 6);
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);  if (t) { goto L_002E9AB4; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 2432u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002E9AB4:
    set32(c.r[4], ld32((c.r[16].w[0] + 2720u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_002E9C0C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002E9C0C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E9ADC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002E9C18; } }
L_002E9ADC:
    c.r[3].d[0] = ld16((c.r[5].w[0] + 168u));
    c.r[2].d[0] = c.r[3].d[0] & 4096ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 16384ull;  if (t) { goto L_002E9B00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9AF8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007A(c, 221u, depth + 1u); else { c.pc = 0x002E9C30u; return; } if (c.pc != 0x002E9AF8u) [[unlikely]] return; }
L_002E9AF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002E9BCC; } }
L_002E9B00:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002E9B1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9B14u);  if (depth < kMaxDepth) unit_007A(c, 229u, depth + 1u); else { c.pc = 0x002E9D60u; return; } if (c.pc != 0x002E9B14u) [[unlikely]] return; }
L_002E9B14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E9BC8; } }
L_002E9B1C:
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 8ull;  if (t) { goto L_002E9B70; } }
    set32(c.r[2], 0u + 437u);
    st32((c.r[16].w[0] + 2436u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 2452u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 2464u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002E9B50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 2732u), c.r[3].w[0]);  if (t) { goto L_002E9B54; } }
L_002E9B50:
    st32((c.r[16].w[0] + 2732u), c.r[2].w[0]);
    c.budget -= 1;
L_002E9B54:
    set32(c.r[2], ld32((c.r[16].w[0] + 2732u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002E9B68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9B68u);  if (depth < kMaxDepth) unit_007A(c, 221u, depth + 1u); else { c.pc = 0x002E9C30u; return; } if (c.pc != 0x002E9B68u) [[unlikely]] return; }
L_002E9B68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 2432u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002E9BC8; } }
L_002E9B70:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E9BC8; } }
    set32(c.r[2], 0u + 437u);
    st32((c.r[16].w[0] + 2436u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 2452u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 2464u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 2456u)));
    set32(c.r[5], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    c.r[1].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002E9BA8; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002E9BA8:
    set32(c.r[2], c.r[3].w[0] - c.r[5].w[0]);
    st32((c.r[16].w[0] + 2732u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 2732u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] >= 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002E9BC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9BC4u);  if (depth < kMaxDepth) unit_007A(c, 229u, depth + 1u); else { c.pc = 0x002E9D60u; return; } if (c.pc != 0x002E9BC4u) [[unlikely]] return; }
L_002E9BC4:
    st8((c.r[16].w[0] + 2432u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002E9BC8:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002E9BCC:
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9BDCu); set32(c.r[4], ld32((c.r[2].w[0] + 2704u)));  if (depth < kMaxDepth) unit_007C(c, 310u, depth + 1u); else { c.pc = 0x002F3020u; return; } if (c.pc != 0x002E9BDCu) [[unlikely]] return; }
L_002E9BDC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E9BCCu | kUnwind; return; } goto L_002E9BCC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 2716u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 402u);  if (t) { goto L_002E9C04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9C00u);  if (depth < kMaxDepth) unit_007C(c, 310u, depth + 1u); else { c.pc = 0x002F3020u; return; } if (c.pc != 0x002E9C00u) [[unlikely]] return; }
L_002E9C00:
    set32(c.r[3], 0u + 402u);
    c.budget -= 1;
L_002E9C04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 2436u), c.r[3].w[0]);  if (t) { goto L_002E9C14; } }
L_002E9C0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9C14u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007A(c, 236u, depth + 1u); else { c.pc = 0x002E9E90u; return; } if (c.pc != 0x002E9C14u) [[unlikely]] return; }
L_002E9C14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002E9C18:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E9C30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 2464u)));
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] <= 0; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002E9D40; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 2716u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9C60u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_007D(c, 29u, depth + 1u); else { c.pc = 0x002F4410u; return; } if (c.pc != 0x002E9C60u) [[unlikely]] return; }
L_002E9C60:
    set32(c.r[4], ld32((c.r[17].w[0] + 2716u)));
    set32(c.r[5], 0u + 320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9C70u); set32(c.r[6], 0u + 298u);  if (depth < kMaxDepth) unit_007D(c, 52u, depth + 1u); else { c.pc = 0x002F47E0u; return; } if (c.pc != 0x002E9C70u) [[unlikely]] return; }
L_002E9C70:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 2;
L_002E9C78:
    set32(c.r[3], c.r[16].w[0] - 1u);
    set32(c.r[4], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[5], 0u + 320u);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[4], ld32((c.r[4].w[0] + 2704u)));
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9CA4u); set32(c.r[6], c.r[2].w[0] + 102u);  if (depth < kMaxDepth) unit_007D(c, 52u, depth + 1u); else { c.pc = 0x002F47E0u; return; } if (c.pc != 0x002E9CA4u) [[unlikely]] return; }
L_002E9CA4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E9C78u | kUnwind; return; } goto L_002E9C78; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 2716u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 45u);
    set32(c.r[7], 0u + 640u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9CCCu); set32(c.r[8], 0u + 147u);  if (depth < kMaxDepth) unit_007D(c, 51u, depth + 1u); else { c.pc = 0x002F4710u; return; } if (c.pc != 0x002E9CCCu) [[unlikely]] return; }
L_002E9CCC:
    set32(c.r[4], ld32((c.r[17].w[0] + 2716u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9CDCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_007D(c, 18u, depth + 1u); else { c.pc = 0x002F4290u; return; } if (c.pc != 0x002E9CDCu) [[unlikely]] return; }
L_002E9CDC:
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 2720u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 2724u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 2732u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 10u);  if (t) { goto L_002E9D00; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 2728u), c.r[2].w[0]);  if (t) { goto L_002E9D2C; } }
L_002E9D00:
    st32((c.r[17].w[0] + 2728u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 2732u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_002E9D1C; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 2732u), c.r[2].w[0]);  if (t) { goto L_002E9D2C; } }
L_002E9D1C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002E9D2C; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0] + 2732u), c.r[2].w[0]);
    c.budget -= 2;
L_002E9D2C:
    set32(c.r[2], ld32((c.r[17].w[0] + 2464u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9D3Cu); set32(c.r[5], c.r[2].w[0] - 1u);  if (depth < kMaxDepth) unit_0079(c, 194u, depth + 1u); else { c.pc = 0x002E62C0u; return; } if (c.pc != 0x002E9D3Cu) [[unlikely]] return; }
L_002E9D3C:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002E9D40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E9D60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 2456u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 2452u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 2464u)));
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    c.r[1].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002E9E70; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 2716u)));
    set32(c.r[5], 0u + 320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9DA0u); set32(c.r[6], 0u + 102u);  if (depth < kMaxDepth) unit_007D(c, 52u, depth + 1u); else { c.pc = 0x002F47E0u; return; } if (c.pc != 0x002E9DA0u) [[unlikely]] return; }
L_002E9DA0:
    set32(c.r[4], ld32((c.r[17].w[0] + 2716u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 45u);
    set32(c.r[7], 0u + 640u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9DB8u); set32(c.r[8], 0u + 147u);  if (depth < kMaxDepth) unit_007D(c, 51u, depth + 1u); else { c.pc = 0x002F4710u; return; } if (c.pc != 0x002E9DB8u) [[unlikely]] return; }
L_002E9DB8:
    set32(c.r[4], ld32((c.r[17].w[0] + 2716u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9DC8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_007D(c, 18u, depth + 1u); else { c.pc = 0x002F4290u; return; } if (c.pc != 0x002E9DC8u) [[unlikely]] return; }
L_002E9DC8:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 2;
L_002E9DD0:
    set32(c.r[3], c.r[16].w[0] + 1u);
    set32(c.r[4], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[5], 0u + 320u);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[4], ld32((c.r[4].w[0] + 2704u)));
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9DFCu); set32(c.r[6], c.r[2].w[0] + 102u);  if (depth < kMaxDepth) unit_007D(c, 52u, depth + 1u); else { c.pc = 0x002F47E0u; return; } if (c.pc != 0x002E9DFCu) [[unlikely]] return; }
L_002E9DFC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E9DD0u | kUnwind; return; } goto L_002E9DD0; } }
    set32(c.r[2], 0u + 2u);
    st32((c.r[17].w[0] + 2720u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 2724u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 2732u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 10u);  if (t) { goto L_002E9E30; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 2728u), c.r[2].w[0]);  if (t) { goto L_002E9E5C; } }
L_002E9E30:
    st32((c.r[17].w[0] + 2728u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 2732u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_002E9E4C; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 2732u), c.r[2].w[0]);  if (t) { goto L_002E9E5C; } }
L_002E9E4C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002E9E5C; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0] + 2732u), c.r[2].w[0]);
    c.budget -= 2;
L_002E9E5C:
    set32(c.r[2], ld32((c.r[17].w[0] + 2464u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9E6Cu); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0079(c, 194u, depth + 1u); else { c.pc = 0x002E62C0u; return; } if (c.pc != 0x002E9E6Cu) [[unlikely]] return; }
L_002E9E6C:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002E9E70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E9E90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[6], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[5], ld32((c.r[1].w[0] - 1536u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 2724u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 2728u)));
    set32(c.r[7], ld32((c.r[6].w[0] + 8u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 6);
    c.budget -= 20;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);  if (t) { goto L_002E9EE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002E9FA8; } }
L_002E9EE8:
    set32(c.r[2], ld32((c.r[17].w[0] + 2732u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002E9F18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9EFCu);  if (depth < kMaxDepth) unit_007A(c, 221u, depth + 1u); else { c.pc = 0x002E9C30u; return; } if (c.pc != 0x002E9EFCu) [[unlikely]] return; }
L_002E9EFC:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E9FA8; } }
    set32(c.r[2], 0u + 1u);
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 2720u), c.r[2].w[0]);  if (t) { goto L_002E9FA8; } }
L_002E9F18:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_002E9F44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9F28u);  if (depth < kMaxDepth) unit_007A(c, 229u, depth + 1u); else { c.pc = 0x002E9D60u; return; } if (c.pc != 0x002E9F28u) [[unlikely]] return; }
L_002E9F28:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E9FA8; } }
    set32(c.r[2], 0u + 2u);
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 2720u), c.r[2].w[0]);  if (t) { goto L_002E9FA8; } }
L_002E9F44:
    c.r[3].d[0] = ld16((c.r[5].w[0]));
    c.r[2].d[0] = c.r[3].d[0] & 4096ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 16384ull;  if (t) { goto L_002E9F7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9F60u);  if (depth < kMaxDepth) unit_007A(c, 221u, depth + 1u); else { c.pc = 0x002E9C30u; return; } if (c.pc != 0x002E9F60u) [[unlikely]] return; }
L_002E9F60:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E9FA8; } }
    set32(c.r[2], 0u + 1u);
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 2720u), c.r[2].w[0]);  if (t) { goto L_002E9FA8; } }
L_002E9F7C:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E9FA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9F90u);  if (depth < kMaxDepth) unit_007A(c, 229u, depth + 1u); else { c.pc = 0x002E9D60u; return; } if (c.pc != 0x002E9F90u) [[unlikely]] return; }
L_002E9F90:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E9FA8; } }
    set32(c.r[2], 0u + 2u);
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[17].w[0] + 2720u), c.r[2].w[0]);
    c.budget -= 3;
L_002E9FA8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002EA120; } }
    c.f[2] = ld32((c.r[17].w[0] + 2724u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[1] = c.r[2].w[0];
    c.r[16].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    fpu_div(c, 21u, c.f[2], c.f[1]);
    c.f[20] = fp::sub(c.f[0], c.f[21]);
    c.budget -= 9;
L_002E9FD4:
    set32(c.r[3], ld32((c.r[17].w[0] + 2720u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x42CC0000u);  if (t) { goto L_002EA074; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42CC0000u);
    set32(c.r[3], c.r[16].w[0] - 1u);
    c.f[1] = c.r[2].w[0];
    c.r[1].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[4], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[16].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[2], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.f[2] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[2] = fp::mul(c.f[20], c.f[2]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.facc = fp::add(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[21], c.f[0]));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 25;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { goto L_002EA060; } }
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 2704u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA058u); set32(c.r[5], 0u + 320u);  if (depth < kMaxDepth) unit_007D(c, 52u, depth + 1u); else { c.pc = 0x002F47E0u; return; } if (c.pc != 0x002EA058u) [[unlikely]] return; }
L_002EA058:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_002EA104; } }
L_002EA060:
    set32(c.r[4], ld32((c.r[17].w[0] + 2716u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA06Cu); set32(c.r[5], 0u + 320u);  if (depth < kMaxDepth) unit_007D(c, 52u, depth + 1u); else { c.pc = 0x002F47E0u; return; } if (c.pc != 0x002EA06Cu) [[unlikely]] return; }
L_002EA06C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EA100; } }
L_002EA074:
    set32(c.r[3], c.r[16].w[0] << 3);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[3].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[16].w[0] - 1u);
    set32(c.r[2], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[4].w[0] << 1);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.f[1] = fp::mul(c.f[20], c.f[1]);
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[21], c.f[0]));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 25;
    { const bool t = c.r[16].sd[0] <= 0;  if (t) { goto L_002EA0F4; } }
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 2700u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA0ECu); set32(c.r[5], 0u + 320u);  if (depth < kMaxDepth) unit_007D(c, 52u, depth + 1u); else { c.pc = 0x002F47E0u; return; } if (c.pc != 0x002EA0ECu) [[unlikely]] return; }
L_002EA0EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EA100; } }
L_002EA0F4:
    set32(c.r[4], ld32((c.r[17].w[0] + 2716u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA100u); set32(c.r[5], 0u + 320u);  if (depth < kMaxDepth) unit_007D(c, 52u, depth + 1u); else { c.pc = 0x002F47E0u; return; } if (c.pc != 0x002EA100u) [[unlikely]] return; }
L_002EA100:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002EA104:
    c.r[3].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E9FD4u | kUnwind; return; } goto L_002E9FD4; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 2724u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 2724u), c.r[3].w[0]);  if (t) { goto L_002EA17C; } }
L_002EA120:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[16].w[0] << 2);
    c.budget -= 2;
L_002EA128:
    set32(c.r[2], c.r[16].w[0] << 3);
    set32(c.r[4], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[5], 0u + 320u);
    set32(c.r[4], ld32((c.r[4].w[0] + 2704u)));
    set32(c.r[3], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA150u); set32(c.r[6], c.r[2].w[0] + 102u);  if (depth < kMaxDepth) unit_007D(c, 52u, depth + 1u); else { c.pc = 0x002F47E0u; return; } if (c.pc != 0x002EA150u) [[unlikely]] return; }
L_002EA150:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EA128u | kUnwind; return; } goto L_002EA128; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 2716u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002EA174; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA174u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_007D(c, 29u, depth + 1u); else { c.pc = 0x002F4410u; return; } if (c.pc != 0x002EA174u) [[unlikely]] return; }
L_002EA174:
    st32((c.r[17].w[0] + 2720u), 0u);
    st32((c.r[17].w[0] + 2724u), 0u);
    c.budget -= 2;
L_002EA17C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002EA1A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002EA1B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA1CCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0079(c, 221u, depth + 1u); else { c.pc = 0x002E6700u; return; } if (c.pc != 0x002EA1CCu) [[unlikely]] return; }
L_002EA1CC:
    set32(c.r[17], ld32((c.r[18].w[0] + 2456u)));
    c.r[3].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002EA1E0; } }
    set32(c.r[17], 0u + 3u);
    c.budget -= 1;
L_002EA1E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002EA204; } }
L_002EA1E8:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[5], 0u + 10u);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 2704u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA200u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_007D(c, 18u, depth + 1u); else { c.pc = 0x002F4290u; return; } if (c.pc != 0x002EA200u) [[unlikely]] return; }
L_002EA200:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002EA204:
    c.r[3].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EA1E8u | kUnwind; return; } goto L_002EA1E8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002EA230:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA24Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0079(c, 238u, depth + 1u); else { c.pc = 0x002E6920u; return; } if (c.pc != 0x002EA24Cu) [[unlikely]] return; }
L_002EA24C:
    set32(c.r[17], ld32((c.r[18].w[0] + 2456u)));
    c.r[3].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002EA260; } }
    set32(c.r[17], 0u + 3u);
    c.budget -= 1;
L_002EA260:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002EA284; } }
L_002EA268:
    set32(c.r[2], c.r[16].w[0] << 2);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 2704u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA280u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_007D(c, 29u, depth + 1u); else { c.pc = 0x002F4410u; return; } if (c.pc != 0x002EA280u) [[unlikely]] return; }
L_002EA280:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002EA284:
    c.r[3].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EA268u | kUnwind; return; } goto L_002EA268; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002EA2B0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C4DB0u | kUnwind; return; } [[clang::musttail]] return unit_0071(c, 58u, depth); }
L_002EA2C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA2DCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0079(c, 209u, depth + 1u); else { c.pc = 0x002E6540u; return; } if (c.pc != 0x002EA2DCu) [[unlikely]] return; }
L_002EA2DC:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[18].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_002EA2EC:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA2FCu); set32(c.r[4], ld32((c.r[2].w[0] + 2704u)));  if (depth < kMaxDepth) unit_007D(c, 40u, depth + 1u); else { c.pc = 0x002F4590u; return; } if (c.pc != 0x002EA2FCu) [[unlikely]] return; }
L_002EA2FC:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[18].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EA2ECu | kUnwind; return; } goto L_002EA2EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA324u); set32(c.r[4], ld32((c.r[17].w[0] + 2716u)));  if (depth < kMaxDepth) unit_007D(c, 40u, depth + 1u); else { c.pc = 0x002F4590u; return; } if (c.pc != 0x002EA324u) [[unlikely]] return; }
L_002EA324:
    set32(c.r[3], ld32((c.r[17].w[0] + 2720u)));
    c.r[4].d[0] = c.r[18].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[4].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].d[0] = c.r[3].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002EA360:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA37Cu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0079(c, 117u, depth + 1u); else { c.pc = 0x002E5710u; return; } if (c.pc != 0x002EA37Cu) [[unlikely]] return; }
L_002EA37C:
    set32(c.r[4], c.r[17].w[0] + 2468u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA388u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x002EA388u) [[unlikely]] return; }
L_002EA388:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 13904u);
    set32(c.r[3], c.r[3].w[0] + 13992u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 14132u);
    set32(c.r[3], 0u - 1u);
    st32((c.r[17].w[0] + 2468u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x73720000u);
    st32((c.r[17].w[0] + 2484u), c.r[3].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA3C0u); c.r[4].d[0] = c.r[2].d[0] | 25955ull;  if (depth < kMaxDepth) unit_0087(c, 63u, depth + 1u); else { c.pc = 0x0031C6B0u; return; } if (c.pc != 0x002EA3C0u) [[unlikely]] return; }
L_002EA3C0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA3CCu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0087(c, 68u, depth + 1u); else { c.pc = 0x0031C750u; return; } if (c.pc != 0x002EA3CCu) [[unlikely]] return; }
L_002EA3CC:
    st64((c.r[29].w[0] + 56u), c.r[2].d[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA3D8u); set32(c.r[4], 0u + 444u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002EA3D8u) [[unlikely]] return; }
L_002EA3D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002EA3F0; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA3F0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008F(c, 24u, depth + 1u); else { c.pc = 0x0033C2C0u; return; } if (c.pc != 0x002EA3F0u) [[unlikely]] return; }
L_002EA3F0:
    st32((c.r[17].w[0] + 2480u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA3FCu); set32(c.r[4], ld32((c.r[17].w[0] + 2480u)));  if (depth < kMaxDepth) unit_008F(c, 58u, depth + 1u); else { c.pc = 0x0033C7A0u; return; } if (c.pc != 0x002EA3FCu) [[unlikely]] return; }
L_002EA3FC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002EA420:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002EA4A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 13904u);
    set32(c.r[3], c.r[3].w[0] + 13992u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 14132u);
    st32((c.r[17].w[0] + 2468u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 2480u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_002EA474; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA474u);  if (depth < kMaxDepth) unit_008F(c, 46u, depth + 1u); else { c.pc = 0x0033C5D0u; return; } if (c.pc != 0x002EA474u) [[unlikely]] return; }
L_002EA474:
    set32(c.r[4], c.r[17].w[0] + 2468u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA484u); st32((c.r[17].w[0] + 2480u), 0u);  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x002EA484u) [[unlikely]] return; }
L_002EA484:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA490u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0079(c, 130u, depth + 1u); else { c.pc = 0x002E5880u; return; } if (c.pc != 0x002EA490u) [[unlikely]] return; }
L_002EA490:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002EA4AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA4A8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002EA4A8u) [[unlikely]] return; }
L_002EA4A8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002EA4AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002EA4C0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[5], 0u + 80u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA4DCu); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x002EA4DCu) [[unlikely]] return; }
L_002EA4DC:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA4F8u); st32((c.r[29].w[0] + 72u), 0u);  if (depth < kMaxDepth) unit_0079(c, 144u, depth + 1u); else { c.pc = 0x002E5B00u; return; } if (c.pc != 0x002EA4F8u) [[unlikely]] return; }
L_002EA4F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002EA510:
    set32(c.r[2], ld32((c.r[4].w[0] + 2484u)));
    c.r[1].d[0] = c.r[2].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[2].sd[0] < 15ll ? 1ull : 0ull;  if (t) { goto L_002EA530; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.f[1] = 0u;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 2484u), c.r[2].w[0]);  if (t) { goto L_002EA578; } }
L_002EA530:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_002EA56C; } }
    set32(c.r[3], c.r[2].w[0] - 10u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0] + 2484u), c.r[2].w[0]);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 1u, c.f[1], c.f[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EA578; } }
L_002EA56C:
    set32(c.r[2], 0u - 1u);
    c.f[1] = c.r[3].w[0];
    st32((c.r[4].w[0] + 2484u), c.r[2].w[0]);
    c.budget -= 3;
L_002EA578:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[2], ld32((c.r[4].w[0] + 2480u)));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 9;
    { st32((c.r[2].w[0] + 44u), c.r[3].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C4E50u | kUnwind; return; } [[clang::musttail]] return unit_0071(c, 66u, depth); }
L_002EA5A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA5B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0071(c, 72u, depth + 1u); else { c.pc = 0x002C4EF0u; return; } if (c.pc != 0x002EA5B4u) [[unlikely]] return; }
L_002EA5B4:
    set32(c.r[2], ld32((c.r[16].w[0] + 2484u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;  if (t) { goto L_002EA5D0; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.f[2] = 0u;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 2484u), c.r[2].w[0]);  if (t) { goto L_002EA618; } }
L_002EA5D0:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_002EA60C; } }
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 2484u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 2u, c.f[1], c.f[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EA618; } }
L_002EA60C:
    set32(c.r[2], 0u - 1u);
    c.f[2] = c.r[3].w[0];
    st32((c.r[16].w[0] + 2484u), c.r[2].w[0]);
    c.budget -= 3;
L_002EA618:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[0] = c.r[3].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    set32(c.r[2], ld32((c.r[16].w[0] + 2480u)));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA64Cu); st32((c.r[2].w[0] + 44u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0071(c, 72u, depth + 1u); else { c.pc = 0x002C4EF0u; return; } if (c.pc != 0x002EA64Cu) [[unlikely]] return; }
L_002EA64C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002EA660:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 2480u)));  [[clang::musttail]] return unit_008F(c, 73u, depth); }
L_002EA670:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA680u); st32((c.r[4].w[0] + 2484u), 0u);  if (depth < kMaxDepth) unit_0079(c, 221u, depth + 1u); else { c.pc = 0x002E6700u; return; } if (c.pc != 0x002EA680u) [[unlikely]] return; }
L_002EA680:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA688u); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x002EA688u) [[unlikely]] return; }
L_002EA688:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002EA6A0:
    c.budget -= 2;
    { st32((c.r[4].w[0] + 2484u), 0u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E6920u | kUnwind; return; } [[clang::musttail]] return unit_0079(c, 238u, depth); }
L_002EA6B0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C4DB0u | kUnwind; return; } [[clang::musttail]] return unit_0071(c, 58u, depth); }
L_002EA6C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA6D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0079(c, 209u, depth + 1u); else { c.pc = 0x002E6540u; return; } if (c.pc != 0x002EA6D4u) [[unlikely]] return; }
L_002EA6D4:
    set32(c.r[3], ld32((c.r[16].w[0] + 2484u)));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[4].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ~(c.r[3].d[0] | 0ull);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002EA710:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E5880u | kUnwind; return; } [[clang::musttail]] return unit_0079(c, 130u, depth); }
L_002EA720:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E7050u | kUnwind; return; } [[clang::musttail]] return unit_0079(c, 296u, depth); }
L_002EA730:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E7E80u | kUnwind; return; } [[clang::musttail]] return unit_0079(c, 436u, depth); }
L_002EA740:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E8980u | kUnwind; return; } goto L_002E8980; }
L_002EA750:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002EA1A0u | kUnwind; return; } goto L_002EA1A0; }
L_002EA760:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E9580u | kUnwind; return; } goto L_002E9580; }
L_002EA770:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E6440u | kUnwind; return; } [[clang::musttail]] return unit_0079(c, 205u, depth); }
L_002EA780:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002EA420u | kUnwind; return; } goto L_002EA420; }
L_002EA790:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 2468u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002EA660u | kUnwind; return; } goto L_002EA660; }
L_002EA7A0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 2468u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002EA420u | kUnwind; return; } goto L_002EA420; }
L_002EA7B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA7C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 218u, depth + 1u); else { c.pc = 0x001667A0u; return; } if (c.pc != 0x002EA7C4u) [[unlikely]] return; }
L_002EA7C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 15360u);
    set32(c.r[3], c.r[3].w[0] + 15376u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 44u), 0u);
    st32((c.r[16].w[0] + 48u), 0u);
    st8((c.r[16].w[0] + 52u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002EA800:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002EA864; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 15360u);
    set32(c.r[2], c.r[2].w[0] + 15376u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[1].w[0] + 20144u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA84Cu); st8((c.r[2].w[0] + 24u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0019(c, 221u, depth + 1u); else { c.pc = 0x00166810u; return; } if (c.pc != 0x002EA84Cu) [[unlikely]] return; }
L_002EA84C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002EA868; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA864u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002EA864u) [[unlikely]] return; }
L_002EA864:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002EA868:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002EA880:
    set32(c.r[2], 0u + 4u);
    st32((c.r[4].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_002EA890:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_002EA8A0:
    set32(c.r[5], ld32((c.r[4].w[0] + 44u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[6], ld32((c.r[1].w[0] + 20144u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; mmi::div(c, 0, c.r[5].w[0], c.r[3].w[0]);  if (t) { goto L_002EA8BC; } }
    breakpoint(c, 0x002EA8B8u);
    c.budget -= 1;
L_002EA8BC:
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002EA8D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 24u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002EA8D4; } }
L_002EA8D0:
    st8((c.r[6].w[0] + 24u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002EA8D4:
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 44u), c.r[3].w[0]);  c.pc = t; return; }
L_002EA8F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002EA900:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 52u), static_cast<std::uint8_t>(c.r[2].w[0]));  c.pc = t; return; }
L_002EA910:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[1].w[0] + 20144u)));
    st8((c.r[3].w[0] + 24u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 52u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_002EA930:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002EA8F0u | kUnwind; return; } goto L_002EA8F0; }
L_002EA940:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002EA800u | kUnwind; return; } goto L_002EA800; }
L_002EA950:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA960u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_007A(c, 321u, depth + 1u); else { c.pc = 0x002EA9B0u; return; } if (c.pc != 0x002EA960u) [[unlikely]] return; }
L_002EA960:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 56u);  if (t) { goto L_002EA99C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA970u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002EA970u) [[unlikely]] return; }
L_002EA970:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002EA988; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA984u);  if (depth < kMaxDepth) unit_007A(c, 326u, depth + 1u); else { c.pc = 0x002EAA20u; return; } if (c.pc != 0x002EA984u) [[unlikely]] return; }
L_002EA984:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002EA988:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA990u);  if (depth < kMaxDepth) unit_009F(c, 79u, depth + 1u); else { c.pc = 0x0037CE80u; return; } if (c.pc != 0x002EA990u) [[unlikely]] return; }
L_002EA990:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA99Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x002EA99Cu) [[unlikely]] return; }
L_002EA99C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002EA9B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA9C0u);  if (depth < kMaxDepth) unit_009F(c, 79u, depth + 1u); else { c.pc = 0x0037CE80u; return; } if (c.pc != 0x002EA9C0u) [[unlikely]] return; }
L_002EA9C0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x65640000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA9D0u); c.r[5].d[0] = c.r[2].d[0] | 17256ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x002EA9D0u) [[unlikely]] return; }
L_002EA9D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EA9E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_002EA9E4; } }
L_002EA9E0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002EA9E4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002EA9F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAA00u);  if (depth < kMaxDepth) unit_007A(c, 321u, depth + 1u); else { c.pc = 0x002EA9B0u; return; } if (c.pc != 0x002EAA00u) [[unlikely]] return; }
L_002EAA00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_002EAA0C; } }
    st32((c.r[2].w[0] + 48u), c.r[3].w[0]);
    c.budget -= 1;
L_002EAA0C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002EAA20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x65640000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[2].d[0] | 17256ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAA40u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013C370u; return; } if (c.pc != 0x002EAA40u) [[unlikely]] return; }
L_002EAA40:
    set32(c.r[4], c.r[16].w[0] + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAA4Cu); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x002EAA4Cu) [[unlikely]] return; }
L_002EAA4C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 15472u);
    set32(c.r[2], c.r[2].w[0] + 15488u);
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAA6Cu); st32((c.r[16].w[0] + 40u), 0u);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x002EAA6Cu) [[unlikely]] return; }
L_002EAA6C:
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 48u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 52u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 53u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002EAAA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002EAB08; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 15472u);
    set32(c.r[2], c.r[2].w[0] + 15488u);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAAD8u); st32((c.r[17].w[0] + 28u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_007A(c, 335u, depth + 1u); else { c.pc = 0x002EAB20u; return; } if (c.pc != 0x002EAAD8u) [[unlikely]] return; }
L_002EAAD8:
    set32(c.r[4], c.r[17].w[0] + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAAE4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x002EAAE4u) [[unlikely]] return; }
L_002EAAE4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAAF0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x002EAAF0u) [[unlikely]] return; }
L_002EAAF0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002EAB0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAB08u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002EAB08u) [[unlikely]] return; }
L_002EAB08:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002EAB0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002EAB20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002EABCC; } }
    st8((c.r[3].w[0] + 432u), static_cast<std::uint8_t>(0u));
    c.r[8].d[0] = 0ull & 1ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[7], 0u - 2u);
    set32(c.r[5], 0u - 17u);
    set32(c.r[6], c.r[8].w[0] << 4);
    set32(c.r[4], 0u + 20u);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 392u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[8].d[0];
    st8((c.r[3].w[0] + 392u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 398u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st8((c.r[3].w[0] + 398u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 400u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[8].d[0];
    st8((c.r[3].w[0] + 400u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 406u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EABA4u); st8((c.r[3].w[0] + 406u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002EABA4u) [[unlikely]] return; }
L_002EABA4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002EABC8; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002EABC0; } }
    set32(c.r[5], c.r[5].w[0] + 424u);
    c.budget -= 1;
L_002EABC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EABC8u);  if (depth < kMaxDepth) unit_0050(c, 220u, depth + 1u); else { c.pc = 0x00243140u; return; } if (c.pc != 0x002EABC8u) [[unlikely]] return; }
L_002EABC8:
    st32((c.r[16].w[0] + 40u), 0u);
    c.budget -= 1;
L_002EABCC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002EABE0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAC04u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_007A(c, 335u, depth + 1u); else { c.pc = 0x002EAB20u; return; } if (c.pc != 0x002EAC04u) [[unlikely]] return; }
L_002EAC04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAC0Cu);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x002EAC0Cu) [[unlikely]] return; }
L_002EAC0C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAC24u); st32((c.r[29].w[0] + 108u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002EAC24u) [[unlikely]] return; }
L_002EAC24:
    set32(c.r[5], ld32((c.r[20].w[0] + 44u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], 0u + 13312u);
    set32(c.r[2], 0u + 12544u);
    set32(c.r[4], 0u + 52u);
    st32((c.r[1].w[0] + 28000u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[19].w[0] + 268u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 27968u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 27984u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAC5Cu); st32((c.r[1].w[0] + 27976u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002EAC5Cu) [[unlikely]] return; }
L_002EAC5C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002EAC78; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAC74u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0075(c, 207u, depth + 1u); else { c.pc = 0x002D6BA0u; return; } if (c.pc != 0x002EAC74u) [[unlikely]] return; }
L_002EAC74:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002EAC78:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 52u));
    set32(c.r[4], 0u + 6736u);
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAC8Cu); st8((c.r[2].w[0] + 116u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002EAC8Cu) [[unlikely]] return; }
L_002EAC8C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002EACC8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 10000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EACC4u); c.r[11].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 118u, depth + 1u); else { c.pc = 0x001B9C40u; return; } if (c.pc != 0x002EACC4u) [[unlikely]] return; }
L_002EACC4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002EACC8:
    set32(c.r[5], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EACD4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 23u, depth + 1u); else { c.pc = 0x001A4650u; return; } if (c.pc != 0x002EACD4u) [[unlikely]] return; }
L_002EACD4:
    set32(c.r[4], c.r[17].w[0] + 416u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EACE4u); st32((c.r[20].w[0] + 40u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_000F(c, 261u, depth + 1u); else { c.pc = 0x0013E500u; return; } if (c.pc != 0x002EACE4u) [[unlikely]] return; }
L_002EACE4:
    set32(c.r[4], c.r[17].w[0] + 424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EACF0u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_000F(c, 269u, depth + 1u); else { c.pc = 0x0013E620u; return; } if (c.pc != 0x002EACF0u) [[unlikely]] return; }
L_002EACF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EACF8u); set32(c.r[4], 0u + 96u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002EACF8u) [[unlikely]] return; }
L_002EACF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002EAD10; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAD0Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 90u, depth + 1u); else { c.pc = 0x001B4F50u; return; } if (c.pc != 0x002EAD0Cu) [[unlikely]] return; }
L_002EAD0C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002EAD10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAD18u); set32(c.r[4], c.r[17].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x002EAD18u) [[unlikely]] return; }
L_002EAD18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAD20u); set32(c.r[4], 0u + 84u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002EAD20u) [[unlikely]] return; }
L_002EAD20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002EAD40; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002EAD34; } }
    set32(c.r[5], c.r[5].w[0] + 436u);
    c.budget -= 1;
L_002EAD34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAD3Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 98u, depth + 1u); else { c.pc = 0x001B5050u; return; } if (c.pc != 0x002EAD3Cu) [[unlikely]] return; }
L_002EAD3C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002EAD40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAD48u); set32(c.r[4], c.r[17].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x002EAD48u) [[unlikely]] return; }
L_002EAD48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAD50u); set32(c.r[4], 0u + 1664u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002EAD50u) [[unlikely]] return; }
L_002EAD50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002EAD74; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002EAD64; } }
    set32(c.r[5], c.r[5].w[0] + 436u);
    c.budget -= 1;
L_002EAD64:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAD70u); set32(c.r[6], 0u + 21u);  if (depth < kMaxDepth) unit_002D(c, 119u, depth + 1u); else { c.pc = 0x001B54E0u; return; } if (c.pc != 0x002EAD70u) [[unlikely]] return; }
L_002EAD70:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002EAD74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAD7Cu); set32(c.r[4], c.r[17].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x002EAD7Cu) [[unlikely]] return; }
L_002EAD7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAD84u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002EAD84u) [[unlikely]] return; }
L_002EAD84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002EADA4; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002EAD98; } }
    set32(c.r[5], c.r[5].w[0] + 436u);
    c.budget -= 1;
L_002EAD98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EADA0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 169u, depth + 1u); else { c.pc = 0x001B63B0u; return; } if (c.pc != 0x002EADA0u) [[unlikely]] return; }
L_002EADA0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002EADA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EADACu); set32(c.r[4], c.r[17].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x002EADACu) [[unlikely]] return; }
L_002EADAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EADB4u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002EADB4u) [[unlikely]] return; }
L_002EADB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002EADD4; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002EADC8; } }
    set32(c.r[5], c.r[5].w[0] + 436u);
    c.budget -= 1;
L_002EADC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EADD0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 471u, depth + 1u); else { c.pc = 0x001B3010u; return; } if (c.pc != 0x002EADD0u) [[unlikely]] return; }
L_002EADD0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002EADD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EADDCu); set32(c.r[4], c.r[17].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x002EADDCu) [[unlikely]] return; }
L_002EADDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EADE4u); set32(c.r[4], 0u + 116u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002EADE4u) [[unlikely]] return; }
L_002EADE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002EADFC; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EADF8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 29u, depth + 1u); else { c.pc = 0x001CC750u; return; } if (c.pc != 0x002EADF8u) [[unlikely]] return; }
L_002EADF8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002EADFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAE04u); set32(c.r[4], c.r[17].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x002EAE04u) [[unlikely]] return; }
L_002EAE04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAE0Cu); set32(c.r[4], 0u + 12976u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002EAE0Cu) [[unlikely]] return; }
L_002EAE0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002EAE24; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAE20u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 34u, depth + 1u); else { c.pc = 0x001C0500u; return; } if (c.pc != 0x002EAE20u) [[unlikely]] return; }
L_002EAE20:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002EAE24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAE2Cu); set32(c.r[4], c.r[17].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x002EAE2Cu) [[unlikely]] return; }
L_002EAE2C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002EAE38; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_002EAE38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4D430000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAE44u); c.r[5].d[0] = c.r[2].d[0] | 21580ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x002EAE44u) [[unlikely]] return; }
L_002EAE44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EAE54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_002EAE58; } }
L_002EAE54:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002EAE58:
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], 0u + 1120u);
    c.f[1] = ld32((c.r[17].w[0] + 360u));
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.f[0] = ld32((c.r[17].w[0] + 356u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAE78u); st32((c.r[2].w[0] + 36u), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002EAE78u) [[unlikely]] return; }
L_002EAE78:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 436u);  if (t) { goto L_002EAE9C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAE94u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 134u, depth + 1u); else { c.pc = 0x00334BC0u; return; } if (c.pc != 0x002EAE94u) [[unlikely]] return; }
L_002EAE94:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 436u);
    c.budget -= 2;
L_002EAE9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAEA4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x002EAEA4u) [[unlikely]] return; }
L_002EAEA4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAEB0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 233u, depth + 1u); else { c.pc = 0x002D6F20u; return; } if (c.pc != 0x002EAEB0u) [[unlikely]] return; }
L_002EAEB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAEB8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 176u, depth + 1u); else { c.pc = 0x003356B0u; return; } if (c.pc != 0x002EAEB8u) [[unlikely]] return; }
L_002EAEB8:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAEC4u); set32(c.r[4], c.r[17].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x002EAEC4u) [[unlikely]] return; }
L_002EAEC4:
    c.r[11].d[0] = ld8((c.r[17].w[0] + 392u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[9], 0u - 2u);
    set32(c.r[6], c.r[2].w[0] << 4);
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[3], 0u - 17u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1717u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[10].d[0];
    st8((c.r[17].w[0] + 392u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 398u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st8((c.r[17].w[0] + 398u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 400u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[9].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[10].d[0];
    st8((c.r[17].w[0] + 400u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 406u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st8((c.r[17].w[0] + 406u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], ld32((c.r[19].w[0] + 272u)));
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAF30u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x002EAF30u) [[unlikely]] return; }
L_002EAF30:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAF40u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EAF40u) [[unlikely]] return; }
L_002EAF40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAF48u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 176u, depth + 1u); else { c.pc = 0x003356B0u; return; } if (c.pc != 0x002EAF48u) [[unlikely]] return; }
L_002EAF48:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 53u));
    st8((c.r[17].w[0] + 432u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAF58u); set32(c.r[4], ld32((c.r[29].w[0] + 108u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002EAF58u) [[unlikely]] return; }
L_002EAF58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002EAF80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002EAFE0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x434D0000u);  if (t) { goto L_002EAFA4; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_002EAFA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAFACu); c.r[5].d[0] = c.r[2].d[0] | 20304ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x002EAFACu) [[unlikely]] return; }
L_002EAFAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002EAFB8; } }
    set32(c.r[16], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_002EAFB8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002EAFE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAFC8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 49u, depth + 1u); else { c.pc = 0x001CCC60u; return; } if (c.pc != 0x002EAFC8u) [[unlikely]] return; }
L_002EAFC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002EAFE0; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAFE0u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_0033(c, 36u, depth + 1u); else { c.pc = 0x001CC810u; return; } if (c.pc != 0x002EAFE0u) [[unlikely]] return; }
L_002EAFE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002EAFF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[29].w[0] + 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[20] = 0u;
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002EB02C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.f[20] = ld32((c.r[2].w[0] + 212u));
    ld128((c.r[2].w[0] + 224u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[2]);
    c.budget -= 4;
L_002EB02C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB034u);  if (depth < kMaxDepth) unit_007A(c, 338u, depth + 1u); else { c.pc = 0x002EABE0u; return; } if (c.pc != 0x002EB034u) [[unlikely]] return; }
L_002EB034:
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    st32((c.r[3].w[0] + 212u), c.f[20]);
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[3]);
    st128((c.r[4].w[0] + 224u) & ~15u, c.r[3]);
    st32((c.r[16].w[0] + 48u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002EB060:
    st8((c.r[4].w[0] + 53u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002EB074; } }
    st8((c.r[3].w[0] + 432u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 1;
L_002EB074:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002EB080:
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002EB0F8; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[12]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_002EB0A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 212u), c.f[0]);  if (t) { goto L_002EB0F8; } }
L_002EB0A8:
    c.f[1] = ld32((c.r[1].w[0] - 22992u));
    c.f[2] = ld32((c.r[3].w[0] + 212u));
    c.f[1] = fp::mul(c.f[1], c.f[12]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 23000u));
    c.f[2] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EB0D8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 23008u));
    c.f[2] = fp::sub(c.f[2], c.f[0]);
    c.budget -= 3;
L_002EB0D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 23016u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_002EB0F4; } }
    c.f[0] = ld32((c.r[1].w[0] - 23008u));
    c.f[2] = fp::add(c.f[2], c.f[0]);
    c.budget -= 2;
L_002EB0F4:
    st32((c.r[3].w[0] + 212u), c.f[2]);
    c.budget -= 1;
L_002EB0F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002EB100:
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002EB110; } }
    st32((c.r[3].w[0] + 212u), c.f[12]);
    c.budget -= 1;
L_002EB110:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002EB120:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002EB168; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x434D0000u);  if (t) { goto L_002EB140; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_002EB140:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB148u); c.r[5].d[0] = c.r[2].d[0] | 20304ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x002EB148u) [[unlikely]] return; }
L_002EB148:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002EB154; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_002EB154:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002EB168; } }
    set32(c.r[6], 0u + 1990u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB168u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_0033(c, 36u, depth + 1u); else { c.pc = 0x001CC810u; return; } if (c.pc != 0x002EB168u) [[unlikely]] return; }
L_002EB168:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002EB180:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002EB1F8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x45440000u);  if (t) { goto L_002EB1A8; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_002EB1A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB1B0u); c.r[5].d[0] = c.r[2].d[0] | 19531ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x002EB1B0u) [[unlikely]] return; }
L_002EB1B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002EB1BC; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_002EB1BC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002EB1F8; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB1D8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EB1D8u) [[unlikely]] return; }
L_002EB1D8:
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002EB1F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB1ECu);  if (depth < kMaxDepth) unit_007A(c, 397u, depth + 1u); else { c.pc = 0x002EB210u; return; } if (c.pc != 0x002EB1ECu) [[unlikely]] return; }
L_002EB1EC:
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    c.budget -= 3;
L_002EB1F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002EB210:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[16], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 9;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002EB3AC; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002EB240; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_002EB240:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45440000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB24Cu); c.r[5].d[0] = c.r[2].d[0] | 19531ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x002EB24Cu) [[unlikely]] return; }
L_002EB24C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002EB258; } }
    set32(c.r[17], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_002EB258:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002EB3AC; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.f[1] = ld32((c.r[16].w[0] + 360u));
    c.f[0] = ld32((c.r[16].w[0] + 356u));
    set32(c.r[5], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB284u); c.f[21] = fp::mul(c.f[1], c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EB284u) [[unlikely]] return; }
L_002EB284:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB28Cu); set32(c.r[4], ld32((c.r[16].w[0] + 52u)));  if (depth < kMaxDepth) unit_0014(c, 69u, depth + 1u); else { c.pc = 0x00151160u; return; } if (c.pc != 0x002EB28Cu) [[unlikely]] return; }
L_002EB28C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002EB298; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_002EB298:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x48410000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB2A4u); c.r[5].d[0] = c.r[2].d[0] | 18770ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x002EB2A4u) [[unlikely]] return; }
L_002EB2A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002EB2B0; } }
    set32(c.r[5], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_002EB2B0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002EB2C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB2C0u);  if (depth < kMaxDepth) unit_0075(c, 233u, depth + 1u); else { c.pc = 0x002D6F20u; return; } if (c.pc != 0x002EB2C0u) [[unlikely]] return; }
L_002EB2C0:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[2].w[0] + 108u));
    st32((c.r[16].w[0] + 356u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.f[1] = ld32((c.r[2].w[0] + 112u));
    st32((c.r[16].w[0] + 360u), c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 356u));
    c.budget -= 10;
    { const bool t = c.r[16].d[0] == 0ull; c.f[20] = fp::mul(c.f[1], c.f[0]);  if (t) { goto L_002EB2EC; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_002EB2EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53440000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB2F8u); c.r[5].d[0] = c.r[2].d[0] | 13133ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x002EB2F8u) [[unlikely]] return; }
L_002EB2F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EB308; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_002EB30C; } }
L_002EB308:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002EB30C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002EB344; } }
    fpu_div(c, 1u, c.f[20], c.f[21]);
    c.f[0] = ld32((c.r[2].w[0] + 1140u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[2].w[0] + 1140u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 1124u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[2].w[0] + 1124u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 1108u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[2].w[0] + 1108u), c.f[0]);
    c.budget -= 12;
L_002EB344:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x4D430000u);  if (t) { goto L_002EB350; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_002EB350:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB358u); c.r[5].d[0] = c.r[2].d[0] | 21580ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x002EB358u) [[unlikely]] return; }
L_002EB358:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EB368; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_002EB36C; } }
L_002EB368:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002EB36C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EB378; } }
    st32((c.r[2].w[0] + 36u), c.f[20]);
    c.budget -= 1;
L_002EB378:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x334D0000u);  if (t) { goto L_002EB384; } }
    set32(c.r[16], c.r[16].w[0] + 436u);
    c.budget -= 1;
L_002EB384:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB390u); c.r[5].d[0] = c.r[2].d[0] | 17985ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x002EB390u) [[unlikely]] return; }
L_002EB390:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002EB39C; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_002EB39C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002EB3AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB3ACu);  if (depth < kMaxDepth) unit_0030(c, 62u, depth + 1u); else { c.pc = 0x001C1250u; return; } if (c.pc != 0x002EB3ACu) [[unlikely]] return; }
L_002EB3AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002EB3D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002EB434; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB3FCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EB3FCu) [[unlikely]] return; }
L_002EB3FC:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002EB434; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], c.r[2].w[0] << 6);
    set32(c.r[6], c.r[29].w[0] + 32u);
    set32(c.r[2], ld32((c.r[4].w[0] + 208u)));
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    st128((c.r[6].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB42Cu); set32(c.r[6], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0011(c, 20u, depth + 1u); else { c.pc = 0x001444C0u; return; } if (c.pc != 0x002EB42Cu) [[unlikely]] return; }
L_002EB42C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[29].w[0] + 36u));  if (t) { goto L_002EB438; } }
L_002EB434:
    c.f[0] = 0u;
    c.budget -= 1;
L_002EB438:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002EB450:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002EB474; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 72u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB474u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EB474u) [[unlikely]] return; }
L_002EB474:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002EB480:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[4].w[0] + 52u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002EB4DC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x45440000u);  if (t) { goto L_002EB4B0; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_002EB4B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB4B8u); c.r[5].d[0] = c.r[2].d[0] | 19531ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x002EB4B8u) [[unlikely]] return; }
L_002EB4B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002EB4C4; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_002EB4C4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002EB4DC; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 116u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[17].w[0] + 48u), c.r[3].w[0]);
    c.budget -= 4;
L_002EB4DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002EB4F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB500u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_007A(c, 423u, depth + 1u); else { c.pc = 0x002EB590u; return; } if (c.pc != 0x002EB500u) [[unlikely]] return; }
L_002EB500:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 2656u);  if (t) { goto L_002EB53C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB510u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002EB510u) [[unlikely]] return; }
L_002EB510:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002EB528; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB524u);  if (depth < kMaxDepth) unit_007A(c, 426u, depth + 1u); else { c.pc = 0x002EB5D0u; return; } if (c.pc != 0x002EB524u) [[unlikely]] return; }
L_002EB524:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002EB528:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB530u);  if (depth < kMaxDepth) unit_009F(c, 79u, depth + 1u); else { c.pc = 0x0037CE80u; return; } if (c.pc != 0x002EB530u) [[unlikely]] return; }
L_002EB530:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB53Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x002EB53Cu) [[unlikely]] return; }
L_002EB53C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002EB550:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB560u);  if (depth < kMaxDepth) unit_007A(c, 423u, depth + 1u); else { c.pc = 0x002EB590u; return; } if (c.pc != 0x002EB560u) [[unlikely]] return; }
L_002EB560:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002EB57C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB57Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EB57Cu) [[unlikely]] return; }
L_002EB57C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002EB590:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB5A0u);  if (depth < kMaxDepth) unit_009F(c, 79u, depth + 1u); else { c.pc = 0x0037CE80u; return; } if (c.pc != 0x002EB5A0u) [[unlikely]] return; }
L_002EB5A0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x65640000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB5B0u); c.r[5].d[0] = c.r[2].d[0] | 16983ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x002EB5B0u) [[unlikely]] return; }
L_002EB5B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EB5C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_002EB5C4; } }
L_002EB5C0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002EB5C4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002EB5D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x65640000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[2].d[0] | 16983ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB5F4u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013C370u; return; } if (c.pc != 0x002EB5F4u) [[unlikely]] return; }
L_002EB5F4:
    set32(c.r[4], c.r[17].w[0] + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB600u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x002EB600u) [[unlikely]] return; }
L_002EB600:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 15424u);
    set32(c.r[2], c.r[2].w[0] + 15440u);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 40u);
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB628u); set32(c.r[6], 0u + 11264u);  if (depth < kMaxDepth) unit_0028(c, 373u, depth + 1u); else { c.pc = 0x001A3AD0u; return; } if (c.pc != 0x002EB628u) [[unlikely]] return; }
L_002EB628:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB630u); set32(c.r[4], c.r[17].w[0] + 1472u);  if (depth < kMaxDepth) unit_009F(c, 158u, depth + 1u); else { c.pc = 0x0037D580u; return; } if (c.pc != 0x002EB630u) [[unlikely]] return; }
L_002EB630:
    set32(c.r[4], c.r[17].w[0] + 2208u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB644u); set32(c.r[7], 0u + 6u);  if (depth < kMaxDepth) unit_002A(c, 335u, depth + 1u); else { c.pc = 0x001AB970u; return; } if (c.pc != 0x002EB644u) [[unlikely]] return; }
L_002EB644:
    set32(c.r[4], c.r[17].w[0] + 352u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB654u); st32((c.r[17].w[0] + 2640u), 0u);  if (depth < kMaxDepth) unit_0087(c, 75u, depth + 1u); else { c.pc = 0x0031C900u; return; } if (c.pc != 0x002EB654u) [[unlikely]] return; }
L_002EB654:
    set32(c.r[4], c.r[17].w[0] + 40u);
    set32(c.r[5], c.r[17].w[0] + 352u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB664u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0029(c, 63u, depth + 1u); else { c.pc = 0x001A4C10u; return; } if (c.pc != 0x002EB664u) [[unlikely]] return; }
L_002EB664:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB66Cu); set32(c.r[4], c.r[17].w[0] + 40u);  if (depth < kMaxDepth) unit_0028(c, 405u, depth + 1u); else { c.pc = 0x001A3DC0u; return; } if (c.pc != 0x002EB66Cu) [[unlikely]] return; }
L_002EB66C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], 0u + 10018u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[16], c.r[2].w[0] + 624u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB684u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x002EB684u) [[unlikely]] return; }
L_002EB684:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB694u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x002EB694u) [[unlikely]] return; }
L_002EB694:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB6A4u); set32(c.r[4], c.r[17].w[0] + 2208u);  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x002EB6A4u) [[unlikely]] return; }
L_002EB6A4:
    set32(c.r[4], c.r[17].w[0] + 1472u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB6B0u); set32(c.r[5], 0u + 19u);  if (depth < kMaxDepth) unit_009F(c, 179u, depth + 1u); else { c.pc = 0x0037D9B0u; return; } if (c.pc != 0x002EB6B0u) [[unlikely]] return; }
L_002EB6B0:
    set32(c.r[4], c.r[17].w[0] + 1472u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB6BCu); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_009F(c, 186u, depth + 1u); else { c.pc = 0x0037DB10u; return; } if (c.pc != 0x002EB6BCu) [[unlikely]] return; }
L_002EB6BC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002EB6E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002EB7EC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 15424u);
    set32(c.r[2], c.r[2].w[0] + 15440u);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB71Cu); st32((c.r[17].w[0] + 28u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_007A(c, 503u, depth + 1u); else { c.pc = 0x002EBC70u; return; } if (c.pc != 0x002EB71Cu) [[unlikely]] return; }
L_002EB71C:
    set32(c.r[2], c.r[17].w[0] + 2208u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 1472u);  if (t) { goto L_002EB7A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 11056u);
    set32(c.r[3], c.r[3].w[0] - 11040u);
    st32((c.r[17].w[0] + 2208u), c.r[2].w[0]);
    set32(c.r[18], c.r[17].w[0] + 2368u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 2216u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 11024u);
    c.budget -= 11;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 2232u), c.r[2].w[0]);  if (t) { goto L_002EB798; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 10992u);
    set32(c.r[2], c.r[2].w[0] - 10932u);
    st32((c.r[17].w[0] + 2544u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 2624u);
    st32((c.r[17].w[0] + 2624u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB778u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x002EB778u) [[unlikely]] return; }
L_002EB778:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 2208u);  if (t) { goto L_002EB79C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 17888u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB798u); st32((c.r[17].w[0] + 2544u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 264u, depth + 1u); else { c.pc = 0x0014ADA0u; return; } if (c.pc != 0x002EB798u) [[unlikely]] return; }
L_002EB798:
    set32(c.r[4], c.r[17].w[0] + 2208u);
    c.budget -= 1;
L_002EB79C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB7A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 310u, depth + 1u); else { c.pc = 0x00196D20u; return; } if (c.pc != 0x002EB7A4u) [[unlikely]] return; }
L_002EB7A4:
    set32(c.r[4], c.r[17].w[0] + 1472u);
    c.budget -= 1;
L_002EB7A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB7B0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_009F(c, 165u, depth + 1u); else { c.pc = 0x0037D840u; return; } if (c.pc != 0x002EB7B0u) [[unlikely]] return; }
L_002EB7B0:
    set32(c.r[4], c.r[17].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB7BCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0028(c, 384u, depth + 1u); else { c.pc = 0x001A3C40u; return; } if (c.pc != 0x002EB7BCu) [[unlikely]] return; }
L_002EB7BC:
    set32(c.r[4], c.r[17].w[0] + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB7C8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x002EB7C8u) [[unlikely]] return; }
L_002EB7C8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB7D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x002EB7D4u) [[unlikely]] return; }
L_002EB7D4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002EB7F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB7ECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002EB7ECu) [[unlikely]] return; }
L_002EB7EC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002EB7F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002EB810:
    set32(c.r[2], ld32((c.r[4].w[0] + 316u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_002EB820:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 2640u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002EB840; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB840u);  if (depth < kMaxDepth) unit_007A(c, 460u, depth + 1u); else { c.pc = 0x002EB900u; return; } if (c.pc != 0x002EB840u) [[unlikely]] return; }
L_002EB840:
    set32(c.r[25], ld32((c.r[16].w[0] + 2208u)));
    set32(c.r[4], c.r[16].w[0] + 2208u);
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB854u); set32(c.r[5], 0u + 5u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EB854u) [[unlikely]] return; }
L_002EB854:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002EB870:
    set32(c.r[4], c.r[4].w[0] + 2208u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x002E8000u < 16384u) { entry = entries_007A[(t - 0x002E8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002EB890:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[16].w[0] + 1472u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB8B0u); set32(c.r[4], c.r[16].w[0] + 1472u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EB8B0u) [[unlikely]] return; }
L_002EB8B0:
    set32(c.r[4], ld32((c.r[16].w[0] + 2640u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002EB8CC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 72u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB8CCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EB8CCu) [[unlikely]] return; }
L_002EB8CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB8D4u);  if (depth < kMaxDepth) unit_009F(c, 200u, depth + 1u); else { c.pc = 0x0037DCF0u; return; } if (c.pc != 0x002EB8D4u) [[unlikely]] return; }
L_002EB8D4:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB8E4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EB8E4u) [[unlikely]] return; }
L_002EB8E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002EB900:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB920u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x002EB920u) [[unlikely]] return; }
L_002EB920:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB938u); st32((c.r[29].w[0] + 92u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002EB938u) [[unlikely]] return; }
L_002EB938:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], 0u + 13312u);
    st32((c.r[1].w[0] + 28000u), c.r[16].w[0]);
    set32(c.r[2], 0u + 12544u);
    set32(c.r[5], ld32((c.r[19].w[0] + 308u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], 0u + 52u);
    st32((c.r[1].w[0] + 27968u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 27984u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB96Cu); st32((c.r[1].w[0] + 27976u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002EB96Cu) [[unlikely]] return; }
L_002EB96C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[4], 0u + 6736u);  if (t) { goto L_002EB990; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[19].w[0] + 40u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB988u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0075(c, 207u, depth + 1u); else { c.pc = 0x002D6BA0u; return; } if (c.pc != 0x002EB988u) [[unlikely]] return; }
L_002EB988:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 6736u);
    c.budget -= 2;
L_002EB990:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB998u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002EB998u) [[unlikely]] return; }
L_002EB998:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002EB9D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 10000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB9D0u); c.r[11].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 118u, depth + 1u); else { c.pc = 0x001B9C40u; return; } if (c.pc != 0x002EB9D0u) [[unlikely]] return; }
L_002EB9D0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002EB9D4:
    set32(c.r[5], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB9E0u); set32(c.r[4], c.r[19].w[0] + 40u);  if (depth < kMaxDepth) unit_0029(c, 23u, depth + 1u); else { c.pc = 0x001A4650u; return; } if (c.pc != 0x002EB9E0u) [[unlikely]] return; }
L_002EB9E0:
    set32(c.r[4], c.r[17].w[0] + 416u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB9F0u); st32((c.r[19].w[0] + 2640u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_000F(c, 261u, depth + 1u); else { c.pc = 0x0013E500u; return; } if (c.pc != 0x002EB9F0u) [[unlikely]] return; }
L_002EB9F0:
    set32(c.r[4], c.r[17].w[0] + 424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB9FCu); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_000F(c, 269u, depth + 1u); else { c.pc = 0x0013E620u; return; } if (c.pc != 0x002EB9FCu) [[unlikely]] return; }
L_002EB9FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBA04u); set32(c.r[4], 0u + 96u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002EBA04u) [[unlikely]] return; }
L_002EBA04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002EBA1C; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBA18u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 90u, depth + 1u); else { c.pc = 0x001B4F50u; return; } if (c.pc != 0x002EBA18u) [[unlikely]] return; }
L_002EBA18:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002EBA1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBA24u); set32(c.r[4], c.r[17].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x002EBA24u) [[unlikely]] return; }
L_002EBA24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBA2Cu); set32(c.r[4], 0u + 84u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002EBA2Cu) [[unlikely]] return; }
L_002EBA2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002EBA4C; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002EBA40; } }
    set32(c.r[5], c.r[5].w[0] + 436u);
    c.budget -= 1;
L_002EBA40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBA48u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 98u, depth + 1u); else { c.pc = 0x001B5050u; return; } if (c.pc != 0x002EBA48u) [[unlikely]] return; }
L_002EBA48:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002EBA4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBA54u); set32(c.r[4], c.r[17].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x002EBA54u) [[unlikely]] return; }
L_002EBA54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBA5Cu); set32(c.r[4], 0u + 1664u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002EBA5Cu) [[unlikely]] return; }
L_002EBA5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002EBA80; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002EBA70; } }
    set32(c.r[5], c.r[5].w[0] + 436u);
    c.budget -= 1;
L_002EBA70:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBA7Cu); set32(c.r[6], 0u + 21u);  if (depth < kMaxDepth) unit_002D(c, 119u, depth + 1u); else { c.pc = 0x001B54E0u; return; } if (c.pc != 0x002EBA7Cu) [[unlikely]] return; }
L_002EBA7C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002EBA80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBA88u); set32(c.r[4], c.r[17].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x002EBA88u) [[unlikely]] return; }
L_002EBA88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBA90u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002EBA90u) [[unlikely]] return; }
L_002EBA90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002EBAB0; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002EBAA4; } }
    set32(c.r[5], c.r[5].w[0] + 436u);
    c.budget -= 1;
L_002EBAA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBAACu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 169u, depth + 1u); else { c.pc = 0x001B63B0u; return; } if (c.pc != 0x002EBAACu) [[unlikely]] return; }
L_002EBAAC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002EBAB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBAB8u); set32(c.r[4], c.r[17].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x002EBAB8u) [[unlikely]] return; }
L_002EBAB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBAC0u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002EBAC0u) [[unlikely]] return; }
L_002EBAC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002EBAE0; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002EBAD4; } }
    set32(c.r[5], c.r[5].w[0] + 436u);
    c.budget -= 1;
L_002EBAD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBADCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 471u, depth + 1u); else { c.pc = 0x001B3010u; return; } if (c.pc != 0x002EBADCu) [[unlikely]] return; }
L_002EBADC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002EBAE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBAE8u); set32(c.r[4], c.r[17].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x002EBAE8u) [[unlikely]] return; }
L_002EBAE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBAF0u); set32(c.r[4], 0u + 116u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002EBAF0u) [[unlikely]] return; }
L_002EBAF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002EBB08; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBB04u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 29u, depth + 1u); else { c.pc = 0x001CC750u; return; } if (c.pc != 0x002EBB04u) [[unlikely]] return; }
L_002EBB04:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002EBB08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBB10u); set32(c.r[4], c.r[17].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x002EBB10u) [[unlikely]] return; }
L_002EBB10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBB18u); set32(c.r[4], 0u + 12976u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002EBB18u) [[unlikely]] return; }
L_002EBB18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002EBB30; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBB2Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 34u, depth + 1u); else { c.pc = 0x001C0500u; return; } if (c.pc != 0x002EBB2Cu) [[unlikely]] return; }
L_002EBB2C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002EBB30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBB38u); set32(c.r[4], c.r[17].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x002EBB38u) [[unlikely]] return; }
L_002EBB38:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002EBB44; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_002EBB44:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4D430000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBB50u); c.r[5].d[0] = c.r[2].d[0] | 21580ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x002EBB50u) [[unlikely]] return; }
L_002EBB50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EBB60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_002EBB64; } }
L_002EBB60:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002EBB64:
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBB70u); set32(c.r[4], 0u + 1120u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002EBB70u) [[unlikely]] return; }
L_002EBB70:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 436u);  if (t) { goto L_002EBB94; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBB8Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 134u, depth + 1u); else { c.pc = 0x00334BC0u; return; } if (c.pc != 0x002EBB8Cu) [[unlikely]] return; }
L_002EBB8C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 436u);
    c.budget -= 2;
L_002EBB94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBB9Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x002EBB9Cu) [[unlikely]] return; }
L_002EBB9C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBBA8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 233u, depth + 1u); else { c.pc = 0x002D6F20u; return; } if (c.pc != 0x002EBBA8u) [[unlikely]] return; }
L_002EBBA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBBB0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 176u, depth + 1u); else { c.pc = 0x003356B0u; return; } if (c.pc != 0x002EBBB0u) [[unlikely]] return; }
L_002EBBB0:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBBBCu); set32(c.r[4], c.r[17].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x002EBBBCu) [[unlikely]] return; }
L_002EBBBC:
    c.r[11].d[0] = ld8((c.r[17].w[0] + 392u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[9], 0u - 2u);
    set32(c.r[6], c.r[2].w[0] << 4);
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[3], 0u - 17u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1717u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[10].d[0];
    st8((c.r[17].w[0] + 392u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 398u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st8((c.r[17].w[0] + 398u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 400u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[9].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[10].d[0];
    st8((c.r[17].w[0] + 400u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 406u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st8((c.r[17].w[0] + 406u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], ld32((c.r[19].w[0] + 312u)));
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBC28u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x002EBC28u) [[unlikely]] return; }
L_002EBC28:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBC38u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EBC38u) [[unlikely]] return; }
L_002EBC38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBC40u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 176u, depth + 1u); else { c.pc = 0x003356B0u; return; } if (c.pc != 0x002EBC40u) [[unlikely]] return; }
L_002EBC40:
    st8((c.r[17].w[0] + 432u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBC4Cu); set32(c.r[4], ld32((c.r[29].w[0] + 92u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002EBC4Cu) [[unlikely]] return; }
L_002EBC4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002EBC70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 2640u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002EBD1C; } }
    st8((c.r[3].w[0] + 432u), static_cast<std::uint8_t>(0u));
    c.r[8].d[0] = 0ull & 1ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 2640u)));
    set32(c.r[7], 0u - 2u);
    set32(c.r[5], 0u - 17u);
    set32(c.r[6], c.r[8].w[0] << 4);
    set32(c.r[4], 0u + 20u);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 392u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[8].d[0];
    st8((c.r[3].w[0] + 392u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 2640u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 398u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st8((c.r[3].w[0] + 398u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 2640u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 400u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[8].d[0];
    st8((c.r[3].w[0] + 400u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 2640u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 406u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBCF4u); st8((c.r[3].w[0] + 406u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002EBCF4u) [[unlikely]] return; }
L_002EBCF4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002EBD18; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 2640u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002EBD10; } }
    set32(c.r[5], c.r[5].w[0] + 424u);
    c.budget -= 1;
L_002EBD10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBD18u);  if (depth < kMaxDepth) unit_0050(c, 220u, depth + 1u); else { c.pc = 0x00243140u; return; } if (c.pc != 0x002EBD18u) [[unlikely]] return; }
L_002EBD18:
    st32((c.r[16].w[0] + 2640u), 0u);
    c.budget -= 1;
L_002EBD1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002EBD30:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 28u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002EAF80u | kUnwind; return; } goto L_002EAF80; }
L_002EBD40:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 28u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002EAAA0u | kUnwind; return; } goto L_002EAAA0; }
L_002EBD50:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 28u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002EB890u | kUnwind; return; } goto L_002EB890; }
L_002EBD60:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 28u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002EB6E0u | kUnwind; return; } goto L_002EB6E0; }
L_002EBD70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x474F0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBD9Cu); c.r[7].d[0] = c.r[2].d[0] | 16970ull;  if (depth < kMaxDepth) unit_002C(c, 200u, depth + 1u); else { c.pc = 0x001B1A30u; return; } if (c.pc != 0x002EBD9Cu) [[unlikely]] return; }
L_002EBD9C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 15520u);
    set32(c.r[4], c.r[17].w[0] + 96u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBDB4u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002A(c, 154u, depth + 1u); else { c.pc = 0x001A97D0u; return; } if (c.pc != 0x002EBDB4u) [[unlikely]] return; }
L_002EBDB4:
    st8((c.r[17].w[0] + 116u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002EBDD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002EBE18; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 15520u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBE00u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002C(c, 203u, depth + 1u); else { c.pc = 0x001B1AC0u; return; } if (c.pc != 0x002EBE00u) [[unlikely]] return; }
L_002EBE00:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002EBE1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBE18u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002EBE18u) [[unlikely]] return; }
L_002EBE18:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002EBE1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002EBE30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002EBE40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 96u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBE5Cu); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_002A(c, 155u, depth + 1u); else { c.pc = 0x001A9810u; return; } if (c.pc != 0x002EBE5Cu) [[unlikely]] return; }
L_002EBE5C:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 116u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 112u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002EBF2C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBE78u); c.f[20] = ld32((c.r[2].w[0]));  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x002EBE78u) [[unlikely]] return; }
L_002EBE78:
    c.f[0] = fp::cvt_w_s(c.f[20]);
    set32(c.r[3], c.f[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002EBF24; } }
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[7], 0u - 2u);
    c.r[8].d[0] = 0ull & 1ull;
    set32(c.r[9], 0u - 1u);
    c.budget -= 4;
L_002EBE9C:
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[6], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == c.r[9].d[0]; c.r[1].d[0] = c.r[6].sd[0] < 160ll ? 1ull : 0ull;  if (t) { goto L_002EBF14; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002EBF14; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 112u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_002EBEF8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[6], c.r[6].w[0] << 3);
    set32(c.r[4], ld32((c.r[1].w[0] + 31072u)));
    set32(c.r[6], c.r[4].w[0] + c.r[6].w[0]);
    c.r[4].d[0] = ld8((c.r[6].w[0] + 474u));
    c.r[4].d[0] = c.r[4].d[0] & c.r[7].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[8].d[0];
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 474u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_002EBF14; } }
L_002EBEF8:
    set32(c.r[6], c.r[6].w[0] << 3);
    set32(c.r[4], ld32((c.r[1].w[0] + 31072u)));
    set32(c.r[6], c.r[4].w[0] + c.r[6].w[0]);
    c.r[4].d[0] = ld8((c.r[6].w[0] + 474u));
    c.r[4].d[0] = c.r[4].d[0] & c.r[7].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[6].w[0] + 474u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 7;
L_002EBF14:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[4].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EBE9Cu | kUnwind; return; } goto L_002EBE9C; } }
L_002EBF24:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 112u));
    st8((c.r[16].w[0] + 116u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002EBF2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002EBF40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002EBFE8; } }
L_002EBF60:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[18].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002EBFE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBF80u);  if (depth < kMaxDepth) unit_0049(c, 322u, depth + 1u); else { c.pc = 0x00227CB0u; return; } if (c.pc != 0x002EBF80u) [[unlikely]] return; }
L_002EBF80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EBFE4; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002EBFE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBF9Cu);  if (depth < kMaxDepth) unit_0034(c, 237u, depth + 1u); else { c.pc = 0x001D3670u; return; } if (c.pc != 0x002EBF9Cu) [[unlikely]] return; }
L_002EBF9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EBFB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBFACu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 85u, depth + 1u); else { c.pc = 0x001D0B30u; return; } if (c.pc != 0x002EBFACu) [[unlikely]] return; }
L_002EBFAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EBFE4; } }
L_002EBFB4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = ld32((c.r[18].w[0] + 228u));
    c.f[0] = ld32((c.r[1].w[0] - 22984u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[17].w[0] + 48u);  if (t) { goto L_002EBFE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBFD4u); set32(c.r[5], c.r[18].w[0] + 224u);  if (depth < kMaxDepth) unit_0010(c, 144u, depth + 1u); else { c.pc = 0x00141C30u; return; } if (c.pc != 0x002EBFD4u) [[unlikely]] return; }
L_002EBFD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EBFE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002EBFF8; } }
L_002EBFE4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002EBFE8:
    c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EBF60u | kUnwind; return; } goto L_002EBF60; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002EBFF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.budget -= 2;
    [[clang::musttail]] return unit_007B(c, 1u, depth);
}

}
