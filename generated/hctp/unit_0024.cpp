#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0024[4096] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    4, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0,
    0, 14, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0,
    0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 27,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0,
    34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 38, 0, 39, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0,
    42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0,
    45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0,
    49, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0,
    0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0,
    0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 67, 0,
    0, 68, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0,
    0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    88, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0,
    0, 99, 0, 0, 100, 0, 0, 101, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 106,
    0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 110, 0, 0, 111, 0, 0, 112, 0, 0, 0, 113, 0, 0,
    0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 128, 0, 0,
    0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 131, 0, 132, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 134, 0, 0, 135, 0, 0, 136, 0, 137, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141,
    0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0,
    147, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0,
    153, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 161,
    0, 162, 0, 0, 0, 0, 163, 0, 164, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0,
    0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0,
    0, 173, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 182,
    183, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0,
    0, 197, 0, 198, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 202, 0, 0, 0, 0,
    0, 0, 0, 0, 203, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 205, 0, 0, 206, 0, 0, 207, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0,
    0, 0, 0, 209, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 211, 0, 212, 0, 0, 0, 213, 0, 0, 214, 0, 0, 215, 0, 0, 216,
    0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 220, 0, 0, 221, 0, 0, 0, 0, 0, 222,
    0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225,
    0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 229, 0, 0, 0, 0, 230, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 232, 0, 233, 0, 234, 0, 0, 0, 235, 0, 0, 0, 236, 237, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 240, 0, 0, 0, 0, 241,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 243, 0, 0, 0,
    0, 0, 0, 244, 0, 0, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0,
    0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 256, 0, 0, 0, 257, 0, 0,
    0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267,
    0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0,
    0, 0, 272, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 276, 0, 0, 0, 277, 0,
    0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0,
    0, 0, 0, 285, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 289, 0, 0,
    0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0,
    0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 295, 0, 0, 296, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0,
    310, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 332, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 333, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    338, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 343,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 347, 0, 0, 0,
    0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 351, 0, 0, 0,
    352, 0, 0, 0, 353, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0,
    357, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0,
    0, 0, 0, 361, 0, 0, 0, 0, 362, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0,
    0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0,
    367, 0, 0, 0, 368, 0, 0, 0, 0, 0, 369, 0, 0, 0, 370, 0, 0, 0, 0, 0, 371, 0, 0, 0, 372, 0, 0, 0, 0, 0, 373, 0,
    0, 0, 374, 0, 0, 0, 0, 0, 375, 0, 0, 0, 376, 0, 0, 0, 0, 0, 377, 0, 0, 0, 378, 0, 0, 0, 0, 0, 379, 0, 0, 0,
    380, 0, 0, 0, 0, 0, 381, 0, 0, 0, 382, 0, 0, 0, 0, 0, 383, 0, 0, 0, 384, 0, 0, 0, 0, 0, 385, 0, 0, 0, 386, 0,
    0, 0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 0, 0, 0, 389, 0, 0, 0, 390, 0, 0, 0, 0, 0, 391, 0, 0, 0, 392, 0, 0, 0,
    0, 0, 393, 0, 0, 0, 394, 0, 0, 0, 0, 0, 395, 0, 0, 0, 396, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 399, 0, 0, 0, 400, 0, 0, 0,
    0, 0, 401, 0, 0, 0, 402, 0, 0, 0, 0, 0, 403, 0, 0, 0, 404, 0, 0, 0, 0, 0, 405, 0, 0, 0, 406, 0, 0, 0, 0, 0,
    407, 0, 0, 0, 408, 0, 0, 0, 0, 0, 409, 0, 0, 0, 410, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0,
    413, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 415, 0, 416, 0, 0, 0, 0, 417, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 421, 0, 0, 422, 0, 0, 0, 0, 0,
    423, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 427, 0, 0, 0,
    428, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0,
    432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0,
    0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 438, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 442, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0,
    0, 0, 0, 445, 0, 0, 0, 0, 446, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 449, 0,
};

void unit_0024(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00190000;
    case 2u: goto L_0019001C;
    case 3u: goto L_00190044;
    case 4u: goto L_00190080;
    case 5u: goto L_00190090;
    case 6u: goto L_001900B4;
    case 7u: goto L_001900C4;
    case 8u: goto L_001900F0;
    case 9u: goto L_00190140;
    case 10u: goto L_0019017C;
    case 11u: goto L_001901C0;
    case 12u: goto L_001901D4;
    case 13u: goto L_001901F0;
    case 14u: goto L_00190204;
    case 15u: goto L_00190220;
    case 16u: goto L_00190234;
    case 17u: goto L_00190250;
    case 18u: goto L_00190280;
    case 19u: goto L_001902B0;
    case 20u: goto L_001902C8;
    case 21u: goto L_001902E0;
    case 22u: goto L_001902F8;
    case 23u: goto L_00190310;
    case 24u: goto L_00190328;
    case 25u: goto L_00190340;
    case 26u: goto L_00190368;
    case 27u: goto L_0019037C;
    case 28u: goto L_001903B0;
    case 29u: goto L_001903D8;
    case 30u: goto L_001903EC;
    case 31u: goto L_00190420;
    case 32u: goto L_00190448;
    case 33u: goto L_0019045C;
    case 34u: goto L_00190480;
    case 35u: goto L_001904A8;
    case 36u: goto L_001904BC;
    case 37u: goto L_001904E0;
    case 38u: goto L_00190508;
    case 39u: goto L_00190510;
    case 40u: goto L_00190524;
    case 41u: goto L_00190560;
    case 42u: goto L_00190580;
    case 43u: goto L_001905B0;
    case 44u: goto L_001905E0;
    case 45u: goto L_00190600;
    case 46u: goto L_00190650;
    case 47u: goto L_00190660;
    case 48u: goto L_00190670;
    case 49u: goto L_00190680;
    case 50u: goto L_00190690;
    case 51u: goto L_001906B0;
    case 52u: goto L_001906D0;
    case 53u: goto L_00190700;
    case 54u: goto L_00190740;
    case 55u: goto L_001907A4;
    case 56u: goto L_001907BC;
    case 57u: goto L_001907C8;
    case 58u: goto L_001907F0;
    case 59u: goto L_0019080C;
    case 60u: goto L_0019081C;
    case 61u: goto L_0019082C;
    case 62u: goto L_00190864;
    case 63u: goto L_00190878;
    case 64u: goto L_0019089C;
    case 65u: goto L_001908DC;
    case 66u: goto L_001908EC;
    case 67u: goto L_001908F8;
    case 68u: goto L_00190904;
    case 69u: goto L_00190914;
    case 70u: goto L_00190930;
    case 71u: goto L_0019093C;
    case 72u: goto L_00190960;
    case 73u: goto L_00190998;
    case 74u: goto L_001909B0;
    case 75u: goto L_001909C8;
    case 76u: goto L_001909D4;
    case 77u: goto L_001909F4;
    case 78u: goto L_00190A0C;
    case 79u: goto L_00190A20;
    case 80u: goto L_00190A38;
    case 81u: goto L_00190A50;
    case 82u: goto L_00190A90;
    case 83u: goto L_00190AB8;
    case 84u: goto L_00190AD4;
    case 85u: goto L_00190AE0;
    case 86u: goto L_00190B08;
    case 87u: goto L_00190B40;
    case 88u: goto L_00190B80;
    case 89u: goto L_00190BA4;
    case 90u: goto L_00190BD0;
    case 91u: goto L_00190C0C;
    case 92u: goto L_00190C38;
    case 93u: goto L_00190C50;
    case 94u: goto L_00190C68;
    case 95u: goto L_00190C90;
    case 96u: goto L_00190CC0;
    case 97u: goto L_00190CCC;
    case 98u: goto L_00190CE0;
    case 99u: goto L_00190D04;
    case 100u: goto L_00190D10;
    case 101u: goto L_00190D1C;
    case 102u: goto L_00190D28;
    case 103u: goto L_00190D3C;
    case 104u: goto L_00190D60;
    case 105u: goto L_00190D70;
    case 106u: goto L_00190D7C;
    case 107u: goto L_00190D88;
    case 108u: goto L_00190D9C;
    case 109u: goto L_00190DC0;
    case 110u: goto L_00190DCC;
    case 111u: goto L_00190DD8;
    case 112u: goto L_00190DE4;
    case 113u: goto L_00190DF4;
    case 114u: goto L_00190E10;
    case 115u: goto L_00190E40;
    case 116u: goto L_00190E54;
    case 117u: goto L_00190E84;
    case 118u: goto L_00190E98;
    case 119u: goto L_00190ED0;
    case 120u: goto L_00190F18;
    case 121u: goto L_00190F30;
    case 122u: goto L_00190F38;
    case 123u: goto L_00190F48;
    case 124u: goto L_00190F8C;
    case 125u: goto L_00190FA4;
    case 126u: goto L_00190FC0;
    case 127u: goto L_00190FEC;
    case 128u: goto L_00190FF4;
    case 129u: goto L_00191008;
    case 130u: goto L_001910A4;
    case 131u: goto L_001910B0;
    case 132u: goto L_001910B8;
    case 133u: goto L_001910C0;
    case 134u: goto L_0019110C;
    case 135u: goto L_00191118;
    case 136u: goto L_00191124;
    case 137u: goto L_0019112C;
    case 138u: goto L_00191138;
    case 139u: goto L_0019114C;
    case 140u: goto L_00191168;
    case 141u: goto L_0019117C;
    case 142u: goto L_00191194;
    case 143u: goto L_001911B4;
    case 144u: goto L_001911C0;
    case 145u: goto L_001911DC;
    case 146u: goto L_001911EC;
    case 147u: goto L_00191200;
    case 148u: goto L_00191208;
    case 149u: goto L_00191224;
    case 150u: goto L_0019123C;
    case 151u: goto L_00191248;
    case 152u: goto L_0019125C;
    case 153u: goto L_00191280;
    case 154u: goto L_00191298;
    case 155u: goto L_001912B0;
    case 156u: goto L_001912C4;
    case 157u: goto L_001912D4;
    case 158u: goto L_001912E8;
    case 159u: goto L_00191340;
    case 160u: goto L_0019136C;
    case 161u: goto L_0019137C;
    case 162u: goto L_00191384;
    case 163u: goto L_00191398;
    case 164u: goto L_001913A0;
    case 165u: goto L_001913B0;
    case 166u: goto L_001913D0;
    case 167u: goto L_001913F8;
    case 168u: goto L_0019140C;
    case 169u: goto L_00191428;
    case 170u: goto L_00191438;
    case 171u: goto L_00191450;
    case 172u: goto L_0019146C;
    case 173u: goto L_00191484;
    case 174u: goto L_001914A4;
    case 175u: goto L_001914B4;
    case 176u: goto L_001914D0;
    case 177u: goto L_001914FC;
    case 178u: goto L_00191534;
    case 179u: goto L_00191560;
    case 180u: goto L_00191590;
    case 181u: goto L_001915D8;
    case 182u: goto L_001915FC;
    case 183u: goto L_00191600;
    case 184u: goto L_00191620;
    case 185u: goto L_00191690;
    case 186u: goto L_001916C0;
    case 187u: goto L_001916D0;
    case 188u: goto L_00191748;
    case 189u: goto L_0019175C;
    case 190u: goto L_001917B0;
    case 191u: goto L_001917C4;
    case 192u: goto L_001917E4;
    case 193u: goto L_00191818;
    case 194u: goto L_0019182C;
    case 195u: goto L_00191850;
    case 196u: goto L_00191864;
    case 197u: goto L_00191884;
    case 198u: goto L_0019188C;
    case 199u: goto L_00191894;
    case 200u: goto L_001918A8;
    case 201u: goto L_001918E0;
    case 202u: goto L_001918EC;
    case 203u: goto L_00191910;
    case 204u: goto L_00191924;
    case 205u: goto L_0019193C;
    case 206u: goto L_00191948;
    case 207u: goto L_00191954;
    case 208u: goto L_00191968;
    case 209u: goto L_0019198C;
    case 210u: goto L_001919A0;
    case 211u: goto L_001919C0;
    case 212u: goto L_001919C8;
    case 213u: goto L_001919D8;
    case 214u: goto L_001919E4;
    case 215u: goto L_001919F0;
    case 216u: goto L_001919FC;
    case 217u: goto L_00191A10;
    case 218u: goto L_00191A2C;
    case 219u: goto L_00191A3C;
    case 220u: goto L_00191A58;
    case 221u: goto L_00191A64;
    case 222u: goto L_00191A7C;
    case 223u: goto L_00191A8C;
    case 224u: goto L_00191AB0;
    case 225u: goto L_00191AFC;
    case 226u: goto L_00191B14;
    case 227u: goto L_00191B30;
    case 228u: goto L_00191B5C;
    case 229u: goto L_00191B64;
    case 230u: goto L_00191B78;
    case 231u: goto L_00191BB4;
    case 232u: goto L_00191BC0;
    case 233u: goto L_00191BC8;
    case 234u: goto L_00191BD0;
    case 235u: goto L_00191BE0;
    case 236u: goto L_00191BF0;
    case 237u: goto L_00191BF4;
    case 238u: goto L_00191C2C;
    case 239u: goto L_00191C60;
    case 240u: goto L_00191C68;
    case 241u: goto L_00191C7C;
    case 242u: goto L_00191CE4;
    case 243u: goto L_00191CF0;
    case 244u: goto L_00191D0C;
    case 245u: goto L_00191D24;
    case 246u: goto L_00191D34;
    case 247u: goto L_00191D70;
    case 248u: goto L_00191D88;
    case 249u: goto L_00191DE0;
    case 250u: goto L_00191E0C;
    case 251u: goto L_00191E28;
    case 252u: goto L_00191E60;
    case 253u: goto L_00191E98;
    case 254u: goto L_00191EB4;
    case 255u: goto L_00191ED0;
    case 256u: goto L_00191EE4;
    case 257u: goto L_00191EF4;
    case 258u: goto L_00191F14;
    case 259u: goto L_00191F40;
    case 260u: goto L_00191F50;
    case 261u: goto L_00191F60;
    case 262u: goto L_00191F8C;
    case 263u: goto L_00191FE0;
    case 264u: goto L_00192010;
    case 265u: goto L_00192020;
    case 266u: goto L_001920A0;
    case 267u: goto L_001920FC;
    case 268u: goto L_00192110;
    case 269u: goto L_0019213C;
    case 270u: goto L_00192154;
    case 271u: goto L_00192170;
    case 272u: goto L_00192188;
    case 273u: goto L_001921A4;
    case 274u: goto L_001921BC;
    case 275u: goto L_001921D0;
    case 276u: goto L_001921E8;
    case 277u: goto L_001921F8;
    case 278u: goto L_00192214;
    case 279u: goto L_0019222C;
    case 280u: goto L_0019223C;
    case 281u: goto L_0019224C;
    case 282u: goto L_0019226C;
    case 283u: goto L_00192340;
    case 284u: goto L_0019236C;
    case 285u: goto L_0019238C;
    case 286u: goto L_001923A4;
    case 287u: goto L_001923C4;
    case 288u: goto L_001923DC;
    case 289u: goto L_001923F4;
    case 290u: goto L_00192410;
    case 291u: goto L_0019244C;
    case 292u: goto L_00192478;
    case 293u: goto L_00192490;
    case 294u: goto L_00192530;
    case 295u: goto L_00192538;
    case 296u: goto L_00192544;
    case 297u: goto L_00192560;
    case 298u: goto L_00192594;
    case 299u: goto L_00192630;
    case 300u: goto L_00192650;
    case 301u: goto L_001926B0;
    case 302u: goto L_001926E8;
    case 303u: goto L_0019272C;
    case 304u: goto L_00192798;
    case 305u: goto L_001927A8;
    case 306u: goto L_00192844;
    case 307u: goto L_0019284C;
    case 308u: goto L_001928D0;
    case 309u: goto L_001928F4;
    case 310u: goto L_00192900;
    case 311u: goto L_00192910;
    case 312u: goto L_001929B8;
    case 313u: goto L_001929D8;
    case 314u: goto L_00192A50;
    case 315u: goto L_00192B50;
    case 316u: goto L_00192BD8;
    case 317u: goto L_00192C10;
    case 318u: goto L_00192C34;
    case 319u: goto L_00192CE0;
    case 320u: goto L_00192D50;
    case 321u: goto L_00192D8C;
    case 322u: goto L_00192DC0;
    case 323u: goto L_00192DD4;
    case 324u: goto L_00192E00;
    case 325u: goto L_00192E3C;
    case 326u: goto L_00192EC0;
    case 327u: goto L_00192ED4;
    case 328u: goto L_00192F00;
    case 329u: goto L_00192F38;
    case 330u: goto L_00192F7C;
    case 331u: goto L_00192FE8;
    case 332u: goto L_00192FF8;
    case 333u: goto L_00193094;
    case 334u: goto L_0019309C;
    case 335u: goto L_00193120;
    case 336u: goto L_00193148;
    case 337u: goto L_00193158;
    case 338u: goto L_00193200;
    case 339u: goto L_00193220;
    case 340u: goto L_001932A0;
    case 341u: goto L_001932B4;
    case 342u: goto L_001932E0;
    case 343u: goto L_001932FC;
    case 344u: goto L_00193390;
    case 345u: goto L_001933BC;
    case 346u: goto L_001933DC;
    case 347u: goto L_001933F0;
    case 348u: goto L_00193410;
    case 349u: goto L_00193440;
    case 350u: goto L_00193458;
    case 351u: goto L_00193470;
    case 352u: goto L_00193480;
    case 353u: goto L_00193490;
    case 354u: goto L_001934A0;
    case 355u: goto L_001934C4;
    case 356u: goto L_001934E0;
    case 357u: goto L_00193500;
    case 358u: goto L_00193520;
    case 359u: goto L_00193550;
    case 360u: goto L_00193570;
    case 361u: goto L_0019358C;
    case 362u: goto L_001935A0;
    case 363u: goto L_001935B4;
    case 364u: goto L_001935E0;
    case 365u: goto L_00193604;
    case 366u: goto L_001936E8;
    case 367u: goto L_00193700;
    case 368u: goto L_00193710;
    case 369u: goto L_00193728;
    case 370u: goto L_00193738;
    case 371u: goto L_00193750;
    case 372u: goto L_00193760;
    case 373u: goto L_00193778;
    case 374u: goto L_00193788;
    case 375u: goto L_001937A0;
    case 376u: goto L_001937B0;
    case 377u: goto L_001937C8;
    case 378u: goto L_001937D8;
    case 379u: goto L_001937F0;
    case 380u: goto L_00193800;
    case 381u: goto L_00193818;
    case 382u: goto L_00193828;
    case 383u: goto L_00193840;
    case 384u: goto L_00193850;
    case 385u: goto L_00193868;
    case 386u: goto L_00193878;
    case 387u: goto L_00193890;
    case 388u: goto L_001938A0;
    case 389u: goto L_001938B8;
    case 390u: goto L_001938C8;
    case 391u: goto L_001938E0;
    case 392u: goto L_001938F0;
    case 393u: goto L_00193908;
    case 394u: goto L_00193918;
    case 395u: goto L_00193930;
    case 396u: goto L_00193940;
    case 397u: goto L_00193958;
    case 398u: goto L_001939C8;
    case 399u: goto L_001939E0;
    case 400u: goto L_001939F0;
    case 401u: goto L_00193A08;
    case 402u: goto L_00193A18;
    case 403u: goto L_00193A30;
    case 404u: goto L_00193A40;
    case 405u: goto L_00193A58;
    case 406u: goto L_00193A68;
    case 407u: goto L_00193A80;
    case 408u: goto L_00193A90;
    case 409u: goto L_00193AA8;
    case 410u: goto L_00193AB8;
    case 411u: goto L_00193AD0;
    case 412u: goto L_00193AE8;
    case 413u: goto L_00193B00;
    case 414u: goto L_00193B1C;
    case 415u: goto L_00193B30;
    case 416u: goto L_00193B38;
    case 417u: goto L_00193B4C;
    case 418u: goto L_00193B54;
    case 419u: goto L_00193B80;
    case 420u: goto L_00193BCC;
    case 421u: goto L_00193BDC;
    case 422u: goto L_00193BE8;
    case 423u: goto L_00193C00;
    case 424u: goto L_00193C20;
    case 425u: goto L_00193C3C;
    case 426u: goto L_00193C5C;
    case 427u: goto L_00193C70;
    case 428u: goto L_00193C80;
    case 429u: goto L_00193C98;
    case 430u: goto L_00193CB8;
    case 431u: goto L_00193CE4;
    case 432u: goto L_00193D00;
    case 433u: goto L_00193DD4;
    case 434u: goto L_00193DF0;
    case 435u: goto L_00193E10;
    case 436u: goto L_00193E44;
    case 437u: goto L_00193E60;
    case 438u: goto L_00193E70;
    case 439u: goto L_00193EB0;
    case 440u: goto L_00193EFC;
    case 441u: goto L_00193F24;
    case 442u: goto L_00193F34;
    case 443u: goto L_00193F4C;
    case 444u: goto L_00193F70;
    case 445u: goto L_00193F8C;
    case 446u: goto L_00193FA0;
    case 447u: goto L_00193FB0;
    case 448u: goto L_00193FD8;
    case 449u: goto L_00193FF8;
    default: bad_entry(c, 0x00190000u); return;
    }
L_00190000:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019001Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0019001Cu) [[unlikely]] return; }
L_0019001C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[3], c.r[17].w[0] << 1);
    c.r[1].d[0] = c.r[1].d[0] | 23854ull;
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[4], 0u + 255u);
    set32(c.r[3], c.r[7].w[0] << 1);
    c.budget -= 10;
L_00190044:
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[5], c.r[6].w[0] + c.r[7].w[0]);  if (t) { goto L_00190064; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 7360u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00190068; } }
L_00190064:
    st8((c.r[5].w[0] + 7360u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 1;
L_00190068:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[7].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00190044u | kUnwind; return; } goto L_00190044; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 2;
L_00190080:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00190090:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001900BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001900B4u);  if (depth < kMaxDepth) unit_00A6(c, 22u, depth + 1u); else { c.pc = 0x003982B0u; return; } if (c.pc != 0x001900B4u) [[unlikely]] return; }
L_001900B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001900D0; } }
L_001900BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001900C4u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x001900C4u) [[unlikely]] return; }
L_001900C4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[1].d[0] = c.r[1].d[0] | 23854ull;
    set32(c.r[4], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 3;
L_001900D0:
    set32(c.r[3], c.r[17].w[0] << 1);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[8], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[4], 0u - 1u);
    set32(c.r[5], 0u + 255u);
    set32(c.r[3], c.r[9].w[0] << 1);
    c.budget -= 8;
L_001900F0:
    set32(c.r[7], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[6], c.r[3].w[0] + c.r[9].w[0]);
    c.r[3].d[0] = ld8((c.r[7].w[0] + 7360u));
    set32(c.r[6], c.r[6].w[0] << 2);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[6], c.r[16].w[0] + c.r[6].w[0]);  if (t) { goto L_00190110; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 32u), c.r[3].w[0]);  if (t) { goto L_00190114; } }
L_00190110:
    st32((c.r[6].w[0] + 32u), c.r[4].w[0]);
    c.budget -= 1;
L_00190114:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[3].d[0] = c.r[9].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[9].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001900F0u | kUnwind; return; } goto L_001900F0; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00190140:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[1].w[0] + 28324u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00190234; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x434D0000u);  if (t) { goto L_00190174; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_00190174:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019017Cu); c.r[5].d[0] = c.r[2].d[0] | 20304ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x0019017Cu) [[unlikely]] return; }
L_0019017C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00190188; } }
    set32(c.r[17], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_00190188:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00190234; } }
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[1].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00190234; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[16], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001901C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001901C0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0023(c, 425u, depth + 1u); else { c.pc = 0x0018FE80u; return; } if (c.pc != 0x001901C0u) [[unlikely]] return; }
L_001901C0:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001901C4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001901D4u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_0033(c, 36u, depth + 1u); else { c.pc = 0x001CC810u; return; } if (c.pc != 0x001901D4u) [[unlikely]] return; }
L_001901D4:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001901F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001901F0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0023(c, 425u, depth + 1u); else { c.pc = 0x0018FE80u; return; } if (c.pc != 0x001901F0u) [[unlikely]] return; }
L_001901F0:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001901F4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190204u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_0033(c, 36u, depth + 1u); else { c.pc = 0x001CC810u; return; } if (c.pc != 0x00190204u) [[unlikely]] return; }
L_00190204:
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00190224; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190220u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0023(c, 425u, depth + 1u); else { c.pc = 0x0018FE80u; return; } if (c.pc != 0x00190220u) [[unlikely]] return; }
L_00190220:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00190224:
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190234u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_0033(c, 36u, depth + 1u); else { c.pc = 0x001CC810u; return; } if (c.pc != 0x00190234u) [[unlikely]] return; }
L_00190234:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00190250:
    st32((c.r[4].w[0]), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 24u), 0u);  c.pc = t; return; }
L_00190280:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00190328; } }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001902B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001902B0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x001902B0u) [[unlikely]] return; }
L_001902B0:
    st32((c.r[17].w[0]), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001902C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001902C8u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x001902C8u) [[unlikely]] return; }
L_001902C8:
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001902E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001902E0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x001902E0u) [[unlikely]] return; }
L_001902E0:
    st32((c.r[17].w[0] + 20u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001902F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001902F8u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x001902F8u) [[unlikely]] return; }
L_001902F8:
    st32((c.r[17].w[0] + 16u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] << 48;  if (t) { goto L_00190314; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190310u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00190310u) [[unlikely]] return; }
L_00190310:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_00190314:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[17].w[0] + 24u), 0u);  if (t) { goto L_00190328; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190328u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00190328u) [[unlikely]] return; }
L_00190328:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00190340:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190368u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x00190368u) [[unlikely]] return; }
L_00190368:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019037Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x0019037Cu) [[unlikely]] return; }
L_0019037C:
    st32((c.r[18].w[0]), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 6u)));
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001903B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001903D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x001903D8u) [[unlikely]] return; }
L_001903D8:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001903ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x001903ECu) [[unlikely]] return; }
L_001903EC:
    st32((c.r[18].w[0] + 8u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 6u)));
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 12u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00190420:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190448u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x00190448u) [[unlikely]] return; }
L_00190448:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019045Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x0019045Cu) [[unlikely]] return; }
L_0019045C:
    st32((c.r[18].w[0] + 16u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00190480:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001904A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x001904A8u) [[unlikely]] return; }
L_001904A8:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001904BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x001904BCu) [[unlikely]] return; }
L_001904BC:
    st32((c.r[18].w[0] + 20u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001904E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190508u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 52u, depth + 1u); else { c.pc = 0x001906D0u; return; } if (c.pc != 0x00190508u) [[unlikely]] return; }
L_00190508:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190510u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x00190510u) [[unlikely]] return; }
L_00190510:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190524u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x00190524u) [[unlikely]] return; }
L_00190524:
    st32((c.r[18].w[0] + 24u), c.r[16].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 28312u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00190540; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_00190540:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00190560:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00190574; } }
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_00190574:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00190580:
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0019059C; } }
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0019059C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001905B0:
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001905C8; } }
    set32(c.r[2], c.r[5].w[0] << 5);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_001905CC; } }
L_001905C8:
    set32(c.r[2], c.r[2].w[0] + 13592u);
    c.budget -= 1;
L_001905CC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001905E0:
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001905F8; } }
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_001905F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00190600:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 7;
    { const bool t = c.r[7].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00190688; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00190678; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_00190668; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_00190658; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_00190648; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 28u)));  if (t) { goto L_00190694; } }
L_00190648:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190650u);  if (depth < kMaxDepth) unit_0024(c, 37u, depth + 1u); else { c.pc = 0x001904E0u; return; } if (c.pc != 0x00190650u) [[unlikely]] return; }
L_00190650:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00190690; } }
L_00190658:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190660u);  if (depth < kMaxDepth) unit_0024(c, 25u, depth + 1u); else { c.pc = 0x00190340u; return; } if (c.pc != 0x00190660u) [[unlikely]] return; }
L_00190660:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00190690; } }
L_00190668:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190670u);  if (depth < kMaxDepth) unit_0024(c, 28u, depth + 1u); else { c.pc = 0x001903B0u; return; } if (c.pc != 0x00190670u) [[unlikely]] return; }
L_00190670:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00190690; } }
L_00190678:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190680u);  if (depth < kMaxDepth) unit_0024(c, 31u, depth + 1u); else { c.pc = 0x00190420u; return; } if (c.pc != 0x00190680u) [[unlikely]] return; }
L_00190680:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00190690; } }
L_00190688:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190690u);  if (depth < kMaxDepth) unit_0024(c, 34u, depth + 1u); else { c.pc = 0x00190480u; return; } if (c.pc != 0x00190690u) [[unlikely]] return; }
L_00190690:
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 1;
L_00190694:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 28u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001906B0:
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[2], c.r[2].w[0] + 4544u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0])));  c.pc = t; return; }
L_001906D0:
    set32(c.r[5], 0u + 2u);
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 87u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 94u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 103u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 192u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 81u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 80u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 88u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 109u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00190700:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190740u); set32(c.r[4], c.r[18].w[0] + 2020u);  if (depth < kMaxDepth) unit_002C(c, 144u, depth + 1u); else { c.pc = 0x001B1440u; return; } if (c.pc != 0x00190740u) [[unlikely]] return; }
L_00190740:
    st32((c.r[18].w[0] + 6072u), 0u);
    set32(c.r[4], 0u + 11664u);
    st32((c.r[18].w[0] + 6076u), 0u);
    set32(c.r[3], 0u + 12245u);
    st32((c.r[18].w[0] + 6080u), 0u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[18].w[0] + 6084u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[18].w[0] + 6088u), 0u);
    st32((c.r[18].w[0] + 6092u), 0u);
    st32((c.r[18].w[0] + 6096u), 0u);
    st16((c.r[18].w[0] + 6100u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[18].w[0] + 6102u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[18].w[0] + 6104u), 0u);
    st32((c.r[18].w[0] + 6108u), 0u);
    st32((c.r[18].w[0] + 6112u), 0u);
    st32((c.r[18].w[0] + 6116u), 0u);
    st32((c.r[18].w[0] + 6120u), 0u);
    st32((c.r[18].w[0] + 6124u), 0u);
    st32((c.r[18].w[0] + 6128u), 0u);
    st32((c.r[18].w[0] + 6132u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 6136u), 0u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001907A4u); st32((c.r[29].w[0] + 76u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003F(c, 303u, depth + 1u); else { c.pc = 0x001FF110u; return; } if (c.pc != 0x001907A4u) [[unlikely]] return; }
L_001907A4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26176u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001907BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001907BCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0024(c, 72u, depth + 1u); else { c.pc = 0x00190960u; return; } if (c.pc != 0x001907BCu) [[unlikely]] return; }
L_001907BC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001907C8u); st32((c.r[1].w[0] + 26176u), 0u);  if (depth < kMaxDepth) unit_0049(c, 336u, depth + 1u); else { c.pc = 0x00227E60u; return; } if (c.pc != 0x001907C8u) [[unlikely]] return; }
L_001907C8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26328u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001907F0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001907F0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001907F0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001907F0u) [[unlikely]] return; }
L_001907F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[18].w[0] + 20u);
    st32((c.r[1].w[0] + 26328u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 2000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019080Cu); st32((c.r[18].w[0] + 6136u), 0u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0019080Cu) [[unlikely]] return; }
L_0019080C:
    set32(c.r[4], c.r[18].w[0] + 2072u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019081Cu); set32(c.r[6], 0u + 2000u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0019081Cu) [[unlikely]] return; }
L_0019081C:
    set32(c.r[4], c.r[18].w[0] + 4072u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019082Cu); set32(c.r[6], 0u + 2000u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0019082Cu) [[unlikely]] return; }
L_0019082C:
    set32(c.r[4], ld32((c.r[18].w[0] + 6072u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 6080u)));
    set32(c.r[3], c.r[2].w[0] - c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_00190848; } }
    set32(c.r[2], c.r[3].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_00190848:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00190888; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00190870; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190864u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00190864u) [[unlikely]] return; }
L_00190864:
    st32((c.r[18].w[0] + 6080u), 0u);
    st32((c.r[18].w[0] + 6076u), 0u);
    st32((c.r[18].w[0] + 6072u), 0u);
    c.budget -= 3;
L_00190870:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190878u); set32(c.r[4], 0u + 40u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x00190878u) [[unlikely]] return; }
L_00190878:
    st32((c.r[18].w[0] + 6072u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 6072u)));
    set32(c.r[2], c.r[2].w[0] + 40u);
    st32((c.r[18].w[0] + 6076u), c.r[2].w[0]);
    c.budget -= 4;
L_00190888:
    set32(c.r[2], ld32((c.r[18].w[0] + 6072u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 40u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 6080u), c.r[2].w[0]);  if (t) { goto L_001908AC; } }
L_0019089C:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 4;
L_001908AC:
    set32(c.r[4], ld32((c.r[18].w[0] + 6072u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 6080u)));
    set32(c.r[3], c.r[2].w[0] - c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_001908C8; } }
    set32(c.r[2], c.r[3].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_001908C8:
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019089Cu | kUnwind; return; } goto L_0019089C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001908DCu); set32(c.r[4], 0u + 1260u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001908DCu) [[unlikely]] return; }
L_001908DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001908EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001908ECu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 362u, depth + 1u); else { c.pc = 0x001973D0u; return; } if (c.pc != 0x001908ECu) [[unlikely]] return; }
L_001908EC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001908F8u); st32((c.r[1].w[0] + 26328u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 303u, depth + 1u); else { c.pc = 0x00227A70u; return; } if (c.pc != 0x001908F8u) [[unlikely]] return; }
L_001908F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190904u); st32((c.r[1].w[0] + 26176u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_0018(c, 165u, depth + 1u); else { c.pc = 0x00163C40u; return; } if (c.pc != 0x00190904u) [[unlikely]] return; }
L_00190904:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190914u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 95u, depth + 1u); else { c.pc = 0x00190C90u; return; } if (c.pc != 0x00190914u) [[unlikely]] return; }
L_00190914:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31520u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00190934; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190930u);  if (depth < kMaxDepth) unit_002C(c, 454u, depth + 1u); else { c.pc = 0x001B2C70u; return; } if (c.pc != 0x00190930u) [[unlikely]] return; }
L_00190930:
    st32((c.r[18].w[0] + 6132u), c.r[2].w[0]);
    c.budget -= 1;
L_00190934:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019093Cu); set32(c.r[4], ld32((c.r[29].w[0] + 76u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0019093Cu) [[unlikely]] return; }
L_0019093C:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00190960:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[19].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00190C68; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00190998; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190998u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00190998u) [[unlikely]] return; }
L_00190998:
    st32((c.r[19].w[0] + 4u), 0u);
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001909B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001909B0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x001909B0u) [[unlikely]] return; }
L_001909B0:
    st32((c.r[19].w[0] + 12u), 0u);
    set32(c.r[4], ld32((c.r[19].w[0] + 6136u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_001909C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001909C8u);  if (depth < kMaxDepth) unit_001A(c, 40u, depth + 1u); else { c.pc = 0x00168910u; return; } if (c.pc != 0x001909C8u) [[unlikely]] return; }
L_001909C8:
    st32((c.r[19].w[0] + 6136u), 0u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[17].w[0] << 2);
    c.budget -= 3;
L_001909D4:
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[2].w[0] + 20u);  if (t) { goto L_001909F8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001909F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001909F4u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x001909F4u) [[unlikely]] return; }
L_001909F4:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_001909F8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 500ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001909D4u | kUnwind; return; } goto L_001909D4; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00190A0C:
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 2072u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190A20u); set32(c.r[16], c.r[2].w[0] + 2072u);  if (depth < kMaxDepth) unit_0015(c, 93u, depth + 1u); else { c.pc = 0x00156F20u; return; } if (c.pc != 0x00190A20u) [[unlikely]] return; }
L_00190A20:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 500ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00190A0Cu | kUnwind; return; } goto L_00190A0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00190A60; } }
L_00190A38:
    set32(c.r[2], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00190A5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190A50u);  if (depth < kMaxDepth) unit_0010(c, 83u, depth + 1u); else { c.pc = 0x00141160u; return; } if (c.pc != 0x00190A50u) [[unlikely]] return; }
L_00190A50:
    set32(c.r[2], ld32((c.r[19].w[0] + 6072u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 3;
L_00190A5C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00190A60:
    set32(c.r[4], ld32((c.r[19].w[0] + 6072u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 6080u)));
    set32(c.r[3], c.r[2].w[0] - c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_00190A7C; } }
    set32(c.r[2], c.r[3].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_00190A7C:
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00190A38u | kUnwind; return; } goto L_00190A38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190A90u);  if (depth < kMaxDepth) unit_0049(c, 336u, depth + 1u); else { c.pc = 0x00227E60u; return; } if (c.pc != 0x00190A90u) [[unlikely]] return; }
L_00190A90:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26328u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00190AB8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00190AB8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00190AB8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00190AB8u) [[unlikely]] return; }
L_00190AB8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 26328u), 0u);
    set32(c.r[4], ld32((c.r[19].w[0] + 6104u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_00190AD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190AD4u);  if (depth < kMaxDepth) unit_0018(c, 139u, depth + 1u); else { c.pc = 0x00163500u; return; } if (c.pc != 0x00190AD4u) [[unlikely]] return; }
L_00190AD4:
    st32((c.r[19].w[0] + 6104u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00190B50; } }
L_00190AE0:
    set32(c.r[2], ld32((c.r[19].w[0] + 6120u)));
    set32(c.r[16], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00190B08; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00190B08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190B08u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00190B08u) [[unlikely]] return; }
L_00190B08:
    set32(c.r[2], ld32((c.r[19].w[0] + 6120u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 6108u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00190B40; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00190B40; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00190B40u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00190B40u) [[unlikely]] return; }
L_00190B40:
    set32(c.r[2], ld32((c.r[19].w[0] + 6108u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 4;
L_00190B50:
    set32(c.r[3], ld32((c.r[19].w[0] + 6116u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 6108u)));
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_00190B6C; } }
    set32(c.r[2], c.r[3].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_00190B6C:
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00190AE0u | kUnwind; return; } goto L_00190AE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190B80u);  if (depth < kMaxDepth) unit_0018(c, 170u, depth + 1u); else { c.pc = 0x00163CA0u; return; } if (c.pc != 0x00190B80u) [[unlikely]] return; }
L_00190B80:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[19].w[0] + 6120u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[1].w[0] + 26176u), 0u);  if (t) { goto L_00190BB0; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 6120u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], c.r[19].w[0] + 6108u);  if (t) { goto L_00190BB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190BA4u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00190BA4u) [[unlikely]] return; }
L_00190BA4:
    st32((c.r[19].w[0] + 6128u), 0u);
    st32((c.r[19].w[0] + 6124u), 0u);
    st32((c.r[19].w[0] + 6120u), 0u);
    c.budget -= 3;
L_00190BB0:
    set32(c.r[2], c.r[19].w[0] + 6108u);
    c.budget -= 1;
L_00190BB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[19].w[0] + 6088u);  if (t) { goto L_00190BE0; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 6108u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00190BDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190BD0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00190BD0u) [[unlikely]] return; }
L_00190BD0:
    st32((c.r[19].w[0] + 6116u), 0u);
    st32((c.r[19].w[0] + 6112u), 0u);
    st32((c.r[19].w[0] + 6108u), 0u);
    c.budget -= 3;
L_00190BDC:
    set32(c.r[2], c.r[19].w[0] + 6088u);
    c.budget -= 1;
L_00190BE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00190C18; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00190C18; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 6088u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00190C18; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[2].w[0] - 16u);  if (t) { goto L_00190C0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190C0Cu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00190C0Cu) [[unlikely]] return; }
L_00190C0C:
    st32((c.r[19].w[0] + 6096u), 0u);
    st32((c.r[19].w[0] + 6092u), 0u);
    st32((c.r[19].w[0] + 6088u), 0u);
    c.budget -= 3;
L_00190C18:
    set32(c.r[2], c.r[19].w[0] + 6072u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[19].w[0] + 2020u);  if (t) { goto L_00190C48; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 6072u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00190C44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190C38u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00190C38u) [[unlikely]] return; }
L_00190C38:
    st32((c.r[19].w[0] + 6080u), 0u);
    st32((c.r[19].w[0] + 6076u), 0u);
    st32((c.r[19].w[0] + 6072u), 0u);
    c.budget -= 3;
L_00190C44:
    set32(c.r[4], c.r[19].w[0] + 2020u);
    c.budget -= 1;
L_00190C48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190C50u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002C(c, 149u, depth + 1u); else { c.pc = 0x001B14B0u; return; } if (c.pc != 0x00190C50u) [[unlikely]] return; }
L_00190C50:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00190C6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190C68u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00190C68u) [[unlikely]] return; }
L_00190C68:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00190C6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00190C90:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190CC0u); st32((c.r[29].w[0] + 108u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003F(c, 303u, depth + 1u); else { c.pc = 0x001FF110u; return; } if (c.pc != 0x00190CC0u) [[unlikely]] return; }
L_00190CC0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190CCCu); c.r[5].d[0] = 0ull | 50100ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x00190CCCu) [[unlikely]] return; }
L_00190CCC:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00190CE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190CE0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 143u, depth + 1u); else { c.pc = 0x0015DAE0u; return; } if (c.pc != 0x00190CE0u) [[unlikely]] return; }
L_00190CE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00190CEC; } }
L_00190CE8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00190CEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00190D20; } }
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190D04u); c.r[6].d[0] = 0ull | 50100ull;  if (depth < kMaxDepth) unit_0017(c, 127u, depth + 1u); else { c.pc = 0x0015D890u; return; } if (c.pc != 0x00190D04u) [[unlikely]] return; }
L_00190D04:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190D10u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0024(c, 114u, depth + 1u); else { c.pc = 0x00190E10u; return; } if (c.pc != 0x00190D10u) [[unlikely]] return; }
L_00190D10:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190D1Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x00190D1Cu) [[unlikely]] return; }
L_00190D1C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00190D20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190D28u); c.r[5].d[0] = 0ull | 50101ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x00190D28u) [[unlikely]] return; }
L_00190D28:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00190D44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190D3Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 144u, depth + 1u); else { c.pc = 0x0015DB40u; return; } if (c.pc != 0x00190D3Cu) [[unlikely]] return; }
L_00190D3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00190D48; } }
L_00190D44:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00190D48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00190D80; } }
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190D60u); c.r[6].d[0] = 0ull | 50101ull;  if (depth < kMaxDepth) unit_0017(c, 127u, depth + 1u); else { c.pc = 0x0015D890u; return; } if (c.pc != 0x00190D60u) [[unlikely]] return; }
L_00190D60:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190D70u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0024(c, 119u, depth + 1u); else { c.pc = 0x00190ED0u; return; } if (c.pc != 0x00190D70u) [[unlikely]] return; }
L_00190D70:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190D7Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x00190D7Cu) [[unlikely]] return; }
L_00190D7C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00190D80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190D88u); c.r[5].d[0] = 0ull | 50102ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x00190D88u) [[unlikely]] return; }
L_00190D88:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00190DA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190D9Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 144u, depth + 1u); else { c.pc = 0x0015DB40u; return; } if (c.pc != 0x00190D9Cu) [[unlikely]] return; }
L_00190D9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00190DA8; } }
L_00190DA4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00190DA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00190DDC; } }
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190DC0u); c.r[6].d[0] = 0ull | 50102ull;  if (depth < kMaxDepth) unit_0017(c, 127u, depth + 1u); else { c.pc = 0x0015D890u; return; } if (c.pc != 0x00190DC0u) [[unlikely]] return; }
L_00190DC0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190DCCu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0024(c, 159u, depth + 1u); else { c.pc = 0x00191340u; return; } if (c.pc != 0x00190DCCu) [[unlikely]] return; }
L_00190DCC:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190DD8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x00190DD8u) [[unlikely]] return; }
L_00190DD8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00190DDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190DE4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 166u, depth + 1u); else { c.pc = 0x001913D0u; return; } if (c.pc != 0x00190DE4u) [[unlikely]] return; }
L_00190DE4:
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190DF4u); set32(c.r[4], ld32((c.r[29].w[0] + 108u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00190DF4u) [[unlikely]] return; }
L_00190DF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00190E10:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190E40u); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x00190E40u) [[unlikely]] return; }
L_00190E40:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00190E5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190E54u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x00190E54u) [[unlikely]] return; }
L_00190E54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00190E64; } }
L_00190E5C:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_00190E64:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_00190E74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00190EA4; } }
L_00190E74:
    set32(c.r[18], ld32((c.r[19].w[0])));
    set32(c.r[16], c.r[18].w[0] << 5);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190E84u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x00190E84u) [[unlikely]] return; }
L_00190E84:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[19].w[0] + 16u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190E98u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x00190E98u) [[unlikely]] return; }
L_00190E98:
    st32((c.r[20].w[0] + 12u), c.r[17].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[20].w[0] + 16u), c.r[18].w[0]);
    c.budget -= 3;
L_00190EA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00190ED0:
    set32(c.r[29], c.r[29].w[0] - 2368u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    set32(c.r[2], 0u + 6u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[1].w[0] + 31520u)));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00191124; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190F18u);  if (depth < kMaxDepth) unit_0048(c, 328u, depth + 1u); else { c.pc = 0x00223900u; return; } if (c.pc != 0x00190F18u) [[unlikely]] return; }
L_00190F18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_00191128; } }
    set32(c.r[4], c.r[29].w[0] + 2352u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190F30u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 127u, depth + 1u); else { c.pc = 0x0015D890u; return; } if (c.pc != 0x00190F30u) [[unlikely]] return; }
L_00190F30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190F38u); set32(c.r[4], c.r[29].w[0] + 2344u);  if (depth < kMaxDepth) unit_001F(c, 475u, depth + 1u); else { c.pc = 0x0017FD30u; return; } if (c.pc != 0x00190F38u) [[unlikely]] return; }
L_00190F38:
    set32(c.r[4], c.r[29].w[0] + 2344u);
    set32(c.r[5], c.r[29].w[0] + 2352u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190F48u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001F(c, 494u, depth + 1u); else { c.pc = 0x0017FF40u; return; } if (c.pc != 0x00190F48u) [[unlikely]] return; }
L_00190F48:
    set32(c.r[4], ld32((c.r[18].w[0] + 6088u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 6096u)));
    set32(c.r[19], ld32((c.r[29].w[0] + 2344u)));
    set32(c.r[3], c.r[2].w[0] - c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));  if (t) { goto L_00190F68; } }
    set32(c.r[2], c.r[3].w[0] + 31u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 2;
L_00190F68:
    c.r[1].d[0] = c.r[2].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00190FD4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], c.r[19].w[0] << 5);  if (t) { goto L_00190F9C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00190F8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190F8Cu); set32(c.r[4], c.r[4].w[0] - 16u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00190F8Cu) [[unlikely]] return; }
L_00190F8C:
    st32((c.r[18].w[0] + 6096u), 0u);
    st32((c.r[18].w[0] + 6092u), 0u);
    st32((c.r[18].w[0] + 6088u), 0u);
    set32(c.r[2], c.r[19].w[0] << 5);
    c.budget -= 4;
L_00190F9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190FA4u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x00190FA4u) [[unlikely]] return; }
L_00190FA4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00180000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 176u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 32u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190FC0u); c.r[8].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 94u, depth + 1u); else { c.pc = 0x001008C0u; return; } if (c.pc != 0x00190FC0u) [[unlikely]] return; }
L_00190FC0:
    st32((c.r[18].w[0] + 6088u), c.r[2].w[0]);
    set32(c.r[3], c.r[19].w[0] << 5);
    set32(c.r[2], ld32((c.r[18].w[0] + 6088u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 6092u), c.r[2].w[0]);
    c.budget -= 5;
L_00190FD4:
    set32(c.r[2], ld32((c.r[18].w[0] + 6088u)));
    set32(c.r[3], c.r[19].w[0] << 5);
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 6096u), c.r[2].w[0]);  if (t) { goto L_0019100C; } }
L_00190FEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00190FF4u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0020(c, 8u, depth + 1u); else { c.pc = 0x00180090u; return; } if (c.pc != 0x00190FF4u) [[unlikely]] return; }
L_00190FF4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[19].w[0] << 5);
    set32(c.r[2], ld32((c.r[18].w[0] + 6088u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191008u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0020(c, 10u, depth + 1u); else { c.pc = 0x001800D0u; return; } if (c.pc != 0x00191008u) [[unlikely]] return; }
L_00191008:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0019100C:
    set32(c.r[2], ld32((c.r[29].w[0] + 2344u)));
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 2344u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00190FECu | kUnwind; return; } goto L_00190FEC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 8983u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_00191038; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0019104C; } }
L_00191038:
    set32(c.r[3], 0u + 12176u);
    set32(c.r[2], 0u + 12543u);
    st16((c.r[18].w[0] + 6100u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 6102u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0019107C; } }
L_0019104C:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0019106C; } }
    set32(c.r[3], 0u + 12176u);
    set32(c.r[2], 0u + 12543u);
    st16((c.r[18].w[0] + 6100u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 6102u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0019107C; } }
L_0019106C:
    set32(c.r[3], 0u + 11664u);
    set32(c.r[2], 0u + 12245u);
    st16((c.r[18].w[0] + 6100u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[18].w[0] + 6102u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0019107C:
    set32(c.r[3], ld32((c.r[18].w[0] + 6096u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 6088u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));  if (t) { goto L_00191098; } }
    set32(c.r[2], c.r[2].w[0] + 31u);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 2;
L_00191098:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001910A4u); set32(c.r[5], c.r[18].w[0] + 6100u);  if (depth < kMaxDepth) unit_0020(c, 15u, depth + 1u); else { c.pc = 0x001801C0u; return; } if (c.pc != 0x001910A4u) [[unlikely]] return; }
L_001910A4:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001910B0u); set32(c.r[5], c.r[18].w[0] + 6088u);  if (depth < kMaxDepth) unit_0020(c, 43u, depth + 1u); else { c.pc = 0x00180690u; return; } if (c.pc != 0x001910B0u) [[unlikely]] return; }
L_001910B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001910B8u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0020(c, 46u, depth + 1u); else { c.pc = 0x00180720u; return; } if (c.pc != 0x001910B8u) [[unlikely]] return; }
L_001910B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001910C0u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0020(c, 48u, depth + 1u); else { c.pc = 0x00180760u; return; } if (c.pc != 0x001910C0u) [[unlikely]] return; }
L_001910C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], 0u + 2u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 8983u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001910EC; } }
    c.r[3].d[0] = ld16((c.r[29].w[0] + 2304u));
    set32(c.r[2], 0u + 12245u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[18].w[0] + 6100u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 6102u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00191100; } }
L_001910EC:
    c.r[3].d[0] = ld16((c.r[29].w[0] + 2304u));
    set32(c.r[2], 0u + 12543u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[18].w[0] + 6100u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[18].w[0] + 6102u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
L_00191100:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019110Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0020(c, 26u, depth + 1u); else { c.pc = 0x00180340u; return; } if (c.pc != 0x0019110Cu) [[unlikely]] return; }
L_0019110C:
    set32(c.r[4], c.r[29].w[0] + 2344u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191118u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_001F(c, 476u, depth + 1u); else { c.pc = 0x0017FD40u; return; } if (c.pc != 0x00191118u) [[unlikely]] return; }
L_00191118:
    set32(c.r[4], c.r[29].w[0] + 2352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191124u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x00191124u) [[unlikely]] return; }
L_00191124:
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00191128:
    set32(c.r[2], c.r[21].w[0] + 1000u);
    c.budget -= 1;
L_0019112C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191138u); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x00191138u) [[unlikely]] return; }
L_00191138:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00191154; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019114Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 144u, depth + 1u); else { c.pc = 0x0015DB40u; return; } if (c.pc != 0x0019114Cu) [[unlikely]] return; }
L_0019114C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00191158; } }
L_00191154:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00191158:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001911EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191168u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x00191168u) [[unlikely]] return; }
L_00191168:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[21].w[0] + 1000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019117Cu); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0019117Cu) [[unlikely]] return; }
L_0019117C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00191194; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191194u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 147u, depth + 1u); else { c.pc = 0x0015DBB0u; return; } if (c.pc != 0x00191194u) [[unlikely]] return; }
L_00191194:
    set32(c.r[2], c.r[21].w[0] << 2);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[19], c.r[18].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001911B4u); set32(c.r[22], c.r[19].w[0] + 4072u);  if (depth < kMaxDepth) unit_0017(c, 166u, depth + 1u); else { c.pc = 0x0015DEF0u; return; } if (c.pc != 0x001911B4u) [[unlikely]] return; }
L_001911B4:
    st32((c.r[22].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001911C0u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001911C0u) [[unlikely]] return; }
L_001911C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001911DC; } }
    set32(c.r[5], ld32((c.r[22].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[3].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001911DCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 243u, depth + 1u); else { c.pc = 0x0014F930u; return; } if (c.pc != 0x001911DCu) [[unlikely]] return; }
L_001911DC:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[19].w[0] + 2072u), c.r[2].w[0]);  if (t) { goto L_001911EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001911ECu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x001911ECu) [[unlikely]] return; }
L_001911EC:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].sd[0] < 500ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[21].w[0] + 1000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019112Cu | kUnwind; return; } goto L_0019112C; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[19], 0u + 100u);  if (t) { goto L_00191234; } }
    goto L_00191204;
L_00191200:
    set32(c.r[19], 0u + 100u);
    c.budget -= 1;
L_00191204:
    set32(c.r[2], c.r[19].w[0] << 2);
    c.budget -= 1;
L_00191208:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 2072u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00191224; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191224u); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0014(c, 27u, depth + 1u); else { c.pc = 0x00150390u; return; } if (c.pc != 0x00191224u) [[unlikely]] return; }
L_00191224:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 500ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[19].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00191208u | kUnwind; return; } goto L_00191208; } }
L_00191234:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] + 2000u);
    c.budget -= 2;
L_0019123C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191248u); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x00191248u) [[unlikely]] return; }
L_00191248:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00191264; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019125Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 144u, depth + 1u); else { c.pc = 0x0015DB40u; return; } if (c.pc != 0x0019125Cu) [[unlikely]] return; }
L_0019125C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00191268; } }
L_00191264:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00191268:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] << 2);  if (t) { goto L_001912B0; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[18].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191280u); set32(c.r[19], c.r[2].w[0] + 20u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x00191280u) [[unlikely]] return; }
L_00191280:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[19], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[16].w[0] + 2000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191298u); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x00191298u) [[unlikely]] return; }
L_00191298:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001912B0; } }
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001912B0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 147u, depth + 1u); else { c.pc = 0x0015DBB0u; return; } if (c.pc != 0x001912B0u) [[unlikely]] return; }
L_001912B0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 500ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] + 2000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019123Cu | kUnwind; return; } goto L_0019123C; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001912C4:
    set32(c.r[2], c.r[16].w[0] + 3000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001912D4u); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x001912D4u) [[unlikely]] return; }
L_001912D4:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001912F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001912E8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 152u, depth + 1u); else { c.pc = 0x0015DC50u; return; } if (c.pc != 0x001912E8u) [[unlikely]] return; }
L_001912E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[18].w[0] + 6072u)));  if (t) { goto L_001912F8; } }
L_001912F0:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[18].w[0] + 6072u)));
    c.budget -= 2;
L_001912F8:
    set32(c.r[5], c.r[16].w[0] << 2);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 10ll ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001912C4u | kUnwind; return; } goto L_001912C4; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 2368u);  c.pc = t; return; }
L_00191340:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 6136u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0019136C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019136Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_001A(c, 40u, depth + 1u); else { c.pc = 0x00168910u; return; } if (c.pc != 0x0019136Cu) [[unlikely]] return; }
L_0019136C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019137Cu); st32((c.r[18].w[0] + 6136u), 0u);  if (depth < kMaxDepth) unit_0017(c, 143u, depth + 1u); else { c.pc = 0x0015DAE0u; return; } if (c.pc != 0x0019137Cu) [[unlikely]] return; }
L_0019137C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191384u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x00191384u) [[unlikely]] return; }
L_00191384:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191398u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 147u, depth + 1u); else { c.pc = 0x0015DBB0u; return; } if (c.pc != 0x00191398u) [[unlikely]] return; }
L_00191398:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001913A0u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001913A0u) [[unlikely]] return; }
L_001913A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001913B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001913B0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 38u, depth + 1u); else { c.pc = 0x001688D0u; return; } if (c.pc != 0x001913B0u) [[unlikely]] return; }
L_001913B0:
    st32((c.r[18].w[0] + 6136u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001913D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = 0ull | 50103ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001913F8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x001913F8u) [[unlikely]] return; }
L_001913F8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00191414; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019140Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 144u, depth + 1u); else { c.pc = 0x0015DB40u; return; } if (c.pc != 0x0019140Cu) [[unlikely]] return; }
L_0019140C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00191418; } }
L_00191414:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00191418:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001914B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191428u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x00191428u) [[unlikely]] return; }
L_00191428:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191438u); c.r[5].d[0] = 0ull | 50103ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x00191438u) [[unlikely]] return; }
L_00191438:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00191450; } }
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191450u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 147u, depth + 1u); else { c.pc = 0x0015DBB0u; return; } if (c.pc != 0x00191450u) [[unlikely]] return; }
L_00191450:
    c.r[2].d[0] = ld16((c.r[16].w[0]));
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0019146C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019146Cu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0019146Cu) [[unlikely]] return; }
L_0019146C:
    st32((c.r[17].w[0] + 4u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191484u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x00191484u) [[unlikely]] return; }
L_00191484:
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], c.r[16].w[0] + 16u);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001914A4u); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x001914A4u) [[unlikely]] return; }
L_001914A4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001914B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001914B4u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x001914B4u) [[unlikely]] return; }
L_001914B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001914D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001914F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00191574; } }
L_001914F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00191564; } }
L_001914FC:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], c.r[16].w[0] << 5);
    set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 12u)));
    c.r[5].d[0] = c.r[2].d[0] << 49;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 49);
    c.r[2].d[0] = c.r[5].sd[0] < 100ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019153C; } }
    c.r[1].d[0] = c.r[5].sd[0] < 1000ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0019153C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191534u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 212u, depth + 1u); else { c.pc = 0x001B1BF0u; return; } if (c.pc != 0x00191534u) [[unlikely]] return; }
L_00191534:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_00191564; } }
L_0019153C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31520u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[5].d[0] << 48;  if (t) { goto L_00191560; } }
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191560u); set32(c.r[6], c.r[17].w[0] + 2056u);  if (depth < kMaxDepth) unit_0024(c, 364u, depth + 1u); else { c.pc = 0x001935E0u; return; } if (c.pc != 0x00191560u) [[unlikely]] return; }
L_00191560:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00191564:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001914FCu | kUnwind; return; } goto L_001914FC; } }
L_00191574:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00191590:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    c.budget -= 13;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[19], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));  if (t) { goto L_001915CC; } }
    set32(c.r[3], c.r[3].w[0] + 31u);
    set32(c.r[19], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    c.budget -= 2;
L_001915CC:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[4].w[0] + 26192u);
    c.budget -= 3;
L_001915D8:
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st64((c.r[3].w[0]), 0ull);
    c.r[3].d[0] = c.r[5].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001915D8u | kUnwind; return; } goto L_001915D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0019165C; } }
L_001915FC:
    set32(c.r[16], c.r[18].w[0] << 5);
    c.budget -= 1;
L_00191600:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[4], ld32((c.r[20].w[0])));
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 4576u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191620u); set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x00127708u; return; } if (c.pc != 0x00191620u) [[unlikely]] return; }
L_00191620:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00191648; } }
    set32(c.r[5], ld32((c.r[20].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[17].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + 26192u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[5].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = ld64((c.r[4].w[0] + 16u));
    st64((c.r[3].w[0]), c.r[4].d[0]);
    c.budget -= 8;
L_00191648:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00191600u | kUnwind; return; } goto L_00191600; } }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0019165C:
    c.r[3].d[0] = c.r[18].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001915FCu | kUnwind; return; } goto L_001915FC; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00191690:
    c.r[2].d[0] = c.r[4].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001916A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001916B4; } }
L_001916A4:
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + 26192u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld64((c.r[2].w[0]));
    c.budget -= 4;
L_001916B4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001916C0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] + 2056u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00163730u | kUnwind; return; } [[clang::musttail]] return unit_0018(c, 155u, depth); }
L_001916D0:
    set32(c.r[29], c.r[29].w[0] - 2464u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 16;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[29].w[0] + 188u), c.r[5].w[0]);  if (t) { goto L_00191D98; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 6108u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 6116u)));
    set32(c.r[3], c.r[2].w[0] - c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_0019172C; } }
    set32(c.r[2], c.r[3].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_0019172C:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(48ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0019176C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00191754; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191748u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00191748u) [[unlikely]] return; }
L_00191748:
    st32((c.r[21].w[0] + 6116u), 0u);
    st32((c.r[21].w[0] + 6112u), 0u);
    st32((c.r[21].w[0] + 6108u), 0u);
    c.budget -= 3;
L_00191754:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019175Cu); set32(c.r[4], 0u + 192u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0019175Cu) [[unlikely]] return; }
L_0019175C:
    st32((c.r[21].w[0] + 6108u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 6108u)));
    set32(c.r[2], c.r[2].w[0] + 192u);
    st32((c.r[21].w[0] + 6112u), c.r[2].w[0]);
    c.budget -= 4;
L_0019176C:
    set32(c.r[2], ld32((c.r[21].w[0] + 6108u)));
    set32(c.r[2], c.r[2].w[0] + 192u);
    st32((c.r[21].w[0] + 6116u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 6120u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 6128u)));
    set32(c.r[3], c.r[2].w[0] - c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_00191794; } }
    set32(c.r[2], c.r[3].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_00191794:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(48ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001917D4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001917BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001917B0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x001917B0u) [[unlikely]] return; }
L_001917B0:
    st32((c.r[21].w[0] + 6128u), 0u);
    st32((c.r[21].w[0] + 6124u), 0u);
    st32((c.r[21].w[0] + 6120u), 0u);
    c.budget -= 3;
L_001917BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001917C4u); set32(c.r[4], 0u + 192u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x001917C4u) [[unlikely]] return; }
L_001917C4:
    st32((c.r[21].w[0] + 6120u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 6120u)));
    set32(c.r[2], c.r[2].w[0] + 192u);
    st32((c.r[21].w[0] + 6124u), c.r[2].w[0]);
    c.budget -= 4;
L_001917D4:
    set32(c.r[2], ld32((c.r[21].w[0] + 6120u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 192u);
    st32((c.r[21].w[0] + 6128u), c.r[2].w[0]);
    c.budget -= 4;
L_001917E4:
    set32(c.r[3], ld32((c.r[21].w[0] + 6120u)));
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(48ll) ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), 0u);
    set32(c.r[3], ld32((c.r[21].w[0] + 6108u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001917E4u | kUnwind; return; } goto L_001917E4; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191818u); set32(c.r[5], 0u + 10001u);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x00191818u) [[unlikely]] return; }
L_00191818:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00191834; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019182Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 152u, depth + 1u); else { c.pc = 0x0015DC50u; return; } if (c.pc != 0x0019182Cu) [[unlikely]] return; }
L_0019182C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0019183C; } }
L_00191834:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_0019183C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0019194C; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191850u); set32(c.r[5], 0u + 10001u);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x00191850u) [[unlikely]] return; }
L_00191850:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0019186C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191864u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 144u, depth + 1u); else { c.pc = 0x0015DB40u; return; } if (c.pc != 0x00191864u) [[unlikely]] return; }
L_00191864:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00191874; } }
L_0019186C:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_00191874:
    set32(c.r[4], c.r[29].w[0] + 2448u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191884u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 125u, depth + 1u); else { c.pc = 0x0015D850u; return; } if (c.pc != 0x00191884u) [[unlikely]] return; }
L_00191884:
    c.r[16].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 2;
L_0019188C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191894u); set32(c.r[4], c.r[29].w[0] + 2448u);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x00191894u) [[unlikely]] return; }
L_00191894:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 2448u);  if (t) { goto L_001918B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001918A8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 152u, depth + 1u); else { c.pc = 0x0015DC50u; return; } if (c.pc != 0x001918A8u) [[unlikely]] return; }
L_001918A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001918B8; } }
L_001918B0:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_001918B8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00191924; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 6120u)));
    set32(c.r[17], c.r[16].w[0] << 2);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001918E0u); set32(c.r[22], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_0017(c, 166u, depth + 1u); else { c.pc = 0x0015DEF0u; return; } if (c.pc != 0x001918E0u) [[unlikely]] return; }
L_001918E0:
    st32((c.r[22].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001918ECu); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001918ECu) [[unlikely]] return; }
L_001918EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00191910; } }
    set32(c.r[5], ld32((c.r[21].w[0] + 6120u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[3].w[0];
    set32(c.r[2], c.r[5].w[0] + c.r[17].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191910u); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0013(c, 243u, depth + 1u); else { c.pc = 0x0014F930u; return; } if (c.pc != 0x00191910u) [[unlikely]] return; }
L_00191910:
    set32(c.r[3], ld32((c.r[21].w[0] + 6108u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191924u); st32((c.r[3].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 83u, depth + 1u); else { c.pc = 0x00141160u; return; } if (c.pc != 0x00191924u) [[unlikely]] return; }
L_00191924:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(48ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[16].d[0] & 65535ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019188Cu | kUnwind; return; } goto L_0019188C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019193Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 83u, depth + 1u); else { c.pc = 0x00141160u; return; } if (c.pc != 0x0019193Cu) [[unlikely]] return; }
L_0019193C:
    set32(c.r[4], c.r[29].w[0] + 2448u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191948u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x00191948u) [[unlikely]] return; }
L_00191948:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0019194C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191954u); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x00191954u) [[unlikely]] return; }
L_00191954:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00191970; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191968u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 152u, depth + 1u); else { c.pc = 0x0015DC50u; return; } if (c.pc != 0x00191968u) [[unlikely]] return; }
L_00191968:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00191978; } }
L_00191970:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_00191978:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001919F4; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019198Cu); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0019198Cu) [[unlikely]] return; }
L_0019198C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001919A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001919A0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 144u, depth + 1u); else { c.pc = 0x0015DB40u; return; } if (c.pc != 0x001919A0u) [[unlikely]] return; }
L_001919A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001919B0; } }
L_001919A8:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_001919B0:
    set32(c.r[4], c.r[29].w[0] + 2432u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001919C0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 125u, depth + 1u); else { c.pc = 0x0015D850u; return; } if (c.pc != 0x001919C0u) [[unlikely]] return; }
L_001919C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001919C8u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001919C8u) [[unlikely]] return; }
L_001919C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001919D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001919D8u); set32(c.r[5], c.r[29].w[0] + 2432u);  if (depth < kMaxDepth) unit_0018(c, 134u, depth + 1u); else { c.pc = 0x00163450u; return; } if (c.pc != 0x001919D8u) [[unlikely]] return; }
L_001919D8:
    st32((c.r[21].w[0] + 6104u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001919E4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 83u, depth + 1u); else { c.pc = 0x00141160u; return; } if (c.pc != 0x001919E4u) [[unlikely]] return; }
L_001919E4:
    set32(c.r[4], c.r[29].w[0] + 2432u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001919F0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x001919F0u) [[unlikely]] return; }
L_001919F0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_001919F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001919FCu); set32(c.r[5], 0u + 10002u);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x001919FCu) [[unlikely]] return; }
L_001919FC:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00191A18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191A10u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 144u, depth + 1u); else { c.pc = 0x0015DB40u; return; } if (c.pc != 0x00191A10u) [[unlikely]] return; }
L_00191A10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00191A1C; } }
L_00191A18:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00191A1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00191D24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191A2Cu);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x00191A2Cu) [[unlikely]] return; }
L_00191A2C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191A3Cu); set32(c.r[5], 0u + 10002u);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x00191A3Cu) [[unlikely]] return; }
L_00191A3C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 16u);  if (t) { goto L_00191A5C; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191A58u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 147u, depth + 1u); else { c.pc = 0x0015DBB0u; return; } if (c.pc != 0x00191A58u) [[unlikely]] return; }
L_00191A58:
    set32(c.r[4], 0u + 16u);
    c.budget -= 1;
L_00191A5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191A64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00191A64u) [[unlikely]] return; }
L_00191A64:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 2424u);  if (t) { goto L_00191A84; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191A7Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 89u, depth + 1u); else { c.pc = 0x0015D1B0u; return; } if (c.pc != 0x00191A7Cu) [[unlikely]] return; }
L_00191A7C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 2424u);
    c.budget -= 2;
L_00191A84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191A8Cu);  if (depth < kMaxDepth) unit_001F(c, 475u, depth + 1u); else { c.pc = 0x0017FD30u; return; } if (c.pc != 0x00191A8Cu) [[unlikely]] return; }
L_00191A8C:
    st32((c.r[29].w[0] + 2408u), 0u);
    set32(c.r[30], c.r[29].w[0] + 2412u);
    st32((c.r[30].w[0]), 0u);
    set32(c.r[17], c.r[29].w[0] + 2416u);
    set32(c.r[4], c.r[29].w[0] + 2424u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191AB0u); st32((c.r[17].w[0]), 0u);  if (depth < kMaxDepth) unit_001F(c, 479u, depth + 1u); else { c.pc = 0x0017FDA0u; return; } if (c.pc != 0x00191AB0u) [[unlikely]] return; }
L_00191AB0:
    c.r[20].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 2408u)));
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[18], ld32((c.r[29].w[0] + 2424u)));
    set32(c.r[3], c.r[2].w[0] - c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));  if (t) { goto L_00191AD4; } }
    set32(c.r[2], c.r[3].w[0] + 31u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 2;
L_00191AD4:
    c.r[1].d[0] = c.r[2].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00191B44; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], c.r[18].w[0] << 5);  if (t) { goto L_00191B0C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 2408u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[2].w[0] - 16u);  if (t) { goto L_00191AFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191AFCu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00191AFCu) [[unlikely]] return; }
L_00191AFC:
    st32((c.r[17].w[0]), 0u);
    st32((c.r[30].w[0]), 0u);
    st32((c.r[29].w[0] + 2408u), 0u);
    set32(c.r[2], c.r[18].w[0] << 5);
    c.budget -= 4;
L_00191B0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191B14u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x00191B14u) [[unlikely]] return; }
L_00191B14:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00180000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 176u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 32u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191B30u); c.r[8].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 94u, depth + 1u); else { c.pc = 0x001008C0u; return; } if (c.pc != 0x00191B30u) [[unlikely]] return; }
L_00191B30:
    st32((c.r[29].w[0] + 2408u), c.r[2].w[0]);
    set32(c.r[3], c.r[18].w[0] << 5);
    set32(c.r[2], ld32((c.r[29].w[0] + 2408u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[30].w[0]), c.r[2].w[0]);
    c.budget -= 5;
L_00191B44:
    set32(c.r[2], ld32((c.r[29].w[0] + 2408u)));
    set32(c.r[3], c.r[18].w[0] << 5);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00191B7C; } }
L_00191B5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191B64u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0020(c, 8u, depth + 1u); else { c.pc = 0x00180090u; return; } if (c.pc != 0x00191B64u) [[unlikely]] return; }
L_00191B64:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[18].w[0] << 5);
    set32(c.r[2], ld32((c.r[29].w[0] + 2408u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191B78u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0020(c, 10u, depth + 1u); else { c.pc = 0x001800D0u; return; } if (c.pc != 0x00191B78u) [[unlikely]] return; }
L_00191B78:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00191B7C:
    set32(c.r[2], ld32((c.r[29].w[0] + 2424u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 2424u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00191B5Cu | kUnwind; return; } goto L_00191B5C; } }
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[2], ld32((c.r[29].w[0] + 2408u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));  if (t) { goto L_00191BA8; } }
    set32(c.r[2], c.r[2].w[0] + 31u);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 2;
L_00191BA8:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191BB4u); set32(c.r[5], c.r[21].w[0] + 6100u);  if (depth < kMaxDepth) unit_0020(c, 15u, depth + 1u); else { c.pc = 0x001801C0u; return; } if (c.pc != 0x00191BB4u) [[unlikely]] return; }
L_00191BB4:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191BC0u); set32(c.r[5], c.r[29].w[0] + 2408u);  if (depth < kMaxDepth) unit_0020(c, 43u, depth + 1u); else { c.pc = 0x00180690u; return; } if (c.pc != 0x00191BC0u) [[unlikely]] return; }
L_00191BC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191BC8u); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0020(c, 46u, depth + 1u); else { c.pc = 0x00180720u; return; } if (c.pc != 0x00191BC8u) [[unlikely]] return; }
L_00191BC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191BD0u); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0020(c, 48u, depth + 1u); else { c.pc = 0x00180760u; return; } if (c.pc != 0x00191BD0u) [[unlikely]] return; }
L_00191BD0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00191BE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191BE0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0017(c, 91u, depth + 1u); else { c.pc = 0x0015D1F0u; return; } if (c.pc != 0x00191BE0u) [[unlikely]] return; }
L_00191BE0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00191BF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191BF0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00191BF0u) [[unlikely]] return; }
L_00191BF0:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00191BF4:
    set32(c.r[2], ld32((c.r[21].w[0] + 6108u)));
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00191CCC; } }
    set32(c.r[18], ld32((c.r[2].w[0] + 200u)));
    set32(c.r[20], ld32((c.r[2].w[0] + 220u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191C2Cu); set32(c.r[5], c.r[2].w[0] << 3);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x00191C2Cu) [[unlikely]] return; }
L_00191C2C:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[29].w[0] + 2408u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[23], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));  if (t) { goto L_00191C48; } }
    set32(c.r[2], c.r[2].w[0] + 31u);
    set32(c.r[23], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 2;
L_00191C48:
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[19], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 160u), c.r[2].w[0]);  if (t) { goto L_00191CC0; } }
L_00191C60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00191CAC; } }
L_00191C68:
    set32(c.r[2], ld32((c.r[29].w[0] + 2408u)));
    set32(c.r[22], c.r[18].w[0] << 5);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191C7Cu); set32(c.r[4], c.r[2].w[0] + c.r[22].w[0]);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x00127708u; return; } if (c.pc != 0x00191C7Cu) [[unlikely]] return; }
L_00191C7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00191CA8; } }
    set32(c.r[2], 0u + 68u);
    st32((c.r[20].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 2408u)));
    set32(c.r[3], c.r[3].w[0] + c.r[22].w[0]);
    c.r[3].d[0] = ld64((c.r[3].w[0] + 16u));
    st64((c.r[20].w[0] + 8u), c.r[3].d[0]);
    st64((c.r[20].w[0] + 24u), 0ull);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st64((c.r[20].w[0] + 32u), c.r[2].d[0]);  if (t) { goto L_00191CB8; } }
L_00191CA8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00191CAC:
    c.r[2].d[0] = c.r[18].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00191C68u | kUnwind; return; } goto L_00191C68; } }
L_00191CB8:
    set32(c.r[19], c.r[19].w[0] + 16u);
    set32(c.r[20], c.r[20].w[0] + 40u);
    c.budget -= 2;
L_00191CC0:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00191C60u | kUnwind; return; } goto L_00191C60; } }
L_00191CCC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(48ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 2408u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00191BF4u | kUnwind; return; } goto L_00191BF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191CE4u);  if (depth < kMaxDepth) unit_0024(c, 180u, depth + 1u); else { c.pc = 0x00191590u; return; } if (c.pc != 0x00191CE4u) [[unlikely]] return; }
L_00191CE4:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191CF0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0020(c, 26u, depth + 1u); else { c.pc = 0x00180340u; return; } if (c.pc != 0x00191CF0u) [[unlikely]] return; }
L_00191CF0:
    set32(c.r[2], ld32((c.r[29].w[0] + 2408u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 2424u);  if (t) { goto L_00191D1C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[2].w[0] - 16u);  if (t) { goto L_00191D0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191D0Cu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00191D0Cu) [[unlikely]] return; }
L_00191D0C:
    st32((c.r[17].w[0]), 0u);
    st32((c.r[30].w[0]), 0u);
    st32((c.r[29].w[0] + 2408u), 0u);
    set32(c.r[4], c.r[29].w[0] + 2424u);
    c.budget -= 4;
L_00191D1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191D24u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_001F(c, 476u, depth + 1u); else { c.pc = 0x0017FD40u; return; } if (c.pc != 0x00191D24u) [[unlikely]] return; }
L_00191D24:
    set32(c.r[2], ld32((c.r[21].w[0] + 6104u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00191D8C; } }
L_00191D34:
    set32(c.r[2], ld32((c.r[21].w[0] + 6104u)));
    set32(c.r[3], c.r[16].w[0] << 5);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 12u)));
    c.r[5].d[0] = c.r[2].d[0] << 49;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 49);
    c.r[2].d[0] = c.r[5].sd[0] < 100ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[5].d[0] << 48;  if (t) { goto L_00191D78; } }
    c.r[1].d[0] = c.r[5].sd[0] < 1000ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00191D78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191D70u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 212u, depth + 1u); else { c.pc = 0x001B1BF0u; return; } if (c.pc != 0x00191D70u) [[unlikely]] return; }
L_00191D70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_00191D8C; } }
L_00191D78:
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191D88u); set32(c.r[6], c.r[21].w[0] + 2056u);  if (depth < kMaxDepth) unit_0024(c, 364u, depth + 1u); else { c.pc = 0x001935E0u; return; } if (c.pc != 0x00191D88u) [[unlikely]] return; }
L_00191D88:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00191D8C:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00191D34u | kUnwind; return; } goto L_00191D34; } }
L_00191D98:
    set32(c.r[3], ld32((c.r[29].w[0] + 188u)));
    st32((c.r[21].w[0] + 6084u), c.r[3].w[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[21].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
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
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 2464u);  c.pc = t; return; }
L_00191DE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00191E3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191E0Cu); set32(c.r[4], 0u + 192u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00191E0Cu) [[unlikely]] return; }
L_00191E0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00191E34; } }
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191E28u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 211u, depth + 1u); else { c.pc = 0x00142DA0u; return; } if (c.pc != 0x00191E28u) [[unlikely]] return; }
L_00191E28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 6496u);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 3;
L_00191E34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00191E40; } }
L_00191E3C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00191E40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00191E60:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00191F14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191E98u); set32(c.r[4], 0u + 208u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00191E98u) [[unlikely]] return; }
L_00191E98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00191EB8; } }
    set32(c.r[3], c.r[16].w[0] << 2);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] + c.r[19].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191EB4u); set32(c.r[5], ld32((c.r[2].w[0] + 20u)));  if (depth < kMaxDepth) unit_0042(c, 64u, depth + 1u); else { c.pc = 0x00209060u; return; } if (c.pc != 0x00191EB4u) [[unlikely]] return; }
L_00191EB4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00191EB8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00191EFC; } }
    set32(c.r[25], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00191ED0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00191ED0u) [[unlikely]] return; }
L_00191ED0:
    set32(c.r[25], ld32((c.r[18].w[0] + 56u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00191EE4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00191EE4u) [[unlikely]] return; }
L_00191EE4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191EF4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0042(c, 78u, depth + 1u); else { c.pc = 0x00209290u; return; } if (c.pc != 0x00191EF4u) [[unlikely]] return; }
L_00191EF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00191F18; } }
L_00191EFC:
    set32(c.r[2], c.r[29].w[0] + 80u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191F14u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0042(c, 78u, depth + 1u); else { c.pc = 0x00209290u; return; } if (c.pc != 0x00191F14u) [[unlikely]] return; }
L_00191F14:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00191F18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00191F40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 32u);  c.pc = t; return; }
L_00191F50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 16u);  c.pc = t; return; }
L_00191F60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[1].w[0] + 26176u)));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00191F84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00191FC8; } }
L_00191F84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00191F8Cu);  if (depth < kMaxDepth) unit_0024(c, 263u, depth + 1u); else { c.pc = 0x00191FE0u; return; } if (c.pc != 0x00191F8Cu) [[unlikely]] return; }
L_00191F8C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_00191FA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00191FC8; } }
L_00191FA0:
    set32(c.r[2], 0u + 6u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31520u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00191FC8; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00191FC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00191FCC; } }
L_00191FC4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00191FC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00191FCC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00191FE0:
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00191FF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00191FFC; } }
L_00191FF4:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 2052u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_00191FFC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00192010:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00191F60u | kUnwind; return; } goto L_00191F60; }
L_00192020:
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[13]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00192038; } }
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[16]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00192044; } }
L_00192038:
    c.f[0] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00192094; } }
L_00192044:
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[14]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[1] = fp::sub(c.f[12], c.f[13]);  if (t) { goto L_00192068; } }
    c.f[0] = fp::sub(c.f[14], c.f[13]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00192094; } }
L_00192068:
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[15]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_00192090; } }
    c.f[1] = fp::sub(c.f[16], c.f[12]);
    c.f[0] = fp::sub(c.f[16], c.f[15]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00192094; } }
L_00192090:
    c.f[0] = c.r[2].w[0];
    c.budget -= 1;
L_00192094:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001920A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] - 12656u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 112u), c.r[3].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 96u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 100u), c.r[5].w[0]);
    ld128((c.r[6].w[0]) & ~15u, c.r[3]);
    st128((c.r[4].w[0] + 64u) & ~15u, c.r[3]);
    ld128((c.r[7].w[0]) & ~15u, c.r[3]);
    st128((c.r[4].w[0] + 80u) & ~15u, c.r[3]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001920FCu); st8((c.r[4].w[0] + 108u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0024(c, 271u, depth + 1u); else { c.pc = 0x00192170u; return; } if (c.pc != 0x001920FCu) [[unlikely]] return; }
L_001920FC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00192110:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00192154; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 12656u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019213Cu); st32((c.r[17].w[0] + 112u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0024(c, 283u, depth + 1u); else { c.pc = 0x00192340u; return; } if (c.pc != 0x0019213Cu) [[unlikely]] return; }
L_0019213C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00192158; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00192154u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00192154u) [[unlikely]] return; }
L_00192154:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00192158:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00192170:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00192188u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 283u, depth + 1u); else { c.pc = 0x00192340u; return; } if (c.pc != 0x00192188u) [[unlikely]] return; }
L_00192188:
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 6u)));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[17].w[0] << 4);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001921A4u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x001921A4u) [[unlikely]] return; }
L_001921A4:
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001921BCu); set32(c.r[7], 0u + 16u);  if (depth < kMaxDepth) unit_0000(c, 94u, depth + 1u); else { c.pc = 0x001008C0u; return; } if (c.pc != 0x001921BCu) [[unlikely]] return; }
L_001921BC:
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[17].w[0] << 4);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001921D0u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x001921D0u) [[unlikely]] return; }
L_001921D0:
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001921E8u); set32(c.r[7], 0u + 16u);  if (depth < kMaxDepth) unit_0000(c, 94u, depth + 1u); else { c.pc = 0x001008C0u; return; } if (c.pc != 0x001921E8u) [[unlikely]] return; }
L_001921E8:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001921F8u); set32(c.r[4], c.r[2].w[0] << 4);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x001921F8u) [[unlikely]] return; }
L_001921F8:
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00192214u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x00192214u) [[unlikely]] return; }
L_00192214:
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019222Cu); set32(c.r[7], 0u + 48u);  if (depth < kMaxDepth) unit_0000(c, 94u, depth + 1u); else { c.pc = 0x001008C0u; return; } if (c.pc != 0x0019222Cu) [[unlikely]] return; }
L_0019222C:
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019223Cu); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0019223Cu) [[unlikely]] return; }
L_0019223C:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019224Cu); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0019224Cu) [[unlikely]] return; }
L_0019224C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.f[1] = 0u;
    c.r[3].d[0] = 0ull + 0ull;
    c.f[0] = c.r[4].w[0];
    set32(c.r[8], 0u + 128u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u - 1u);  if (t) { goto L_0019230C; } }
L_0019226C:
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[6], c.r[3].w[0] << 4);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[9], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[6], c.r[3].w[0] << 4);
    set32(c.r[4], c.r[3].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[4].w[0] << 4);
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    st32((c.r[4].w[0]), c.f[1]);
    st32((c.r[4].w[0] + 4u), c.f[1]);
    st32((c.r[4].w[0] + 8u), c.f[1]);
    st32((c.r[4].w[0] + 12u), c.f[1]);
    st32((c.r[9].w[0]), c.r[8].w[0]);
    st32((c.r[9].w[0] + 4u), c.r[8].w[0]);
    st32((c.r[9].w[0] + 8u), c.r[8].w[0]);
    st32((c.r[9].w[0] + 12u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[6], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 16u), c.f[1]);
    st32((c.r[4].w[0] + 20u), c.f[1]);
    st32((c.r[4].w[0] + 24u), c.f[1]);
    st32((c.r[4].w[0] + 28u), c.f[0]);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), c.f[1]);
    st32((c.r[4].w[0] + 40u), c.f[1]);
    st32((c.r[4].w[0] + 44u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    st32((c.r[4].w[0]), c.r[7].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0]), c.r[7].w[0]);
    c.budget -= 40;
L_0019230C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019226Cu | kUnwind; return; } goto L_0019226C; } }
    set32(c.r[3], 0u - 1u);
    st32((c.r[16].w[0] + 28u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 32u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00192340:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0]), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0019236C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] - 16u);  if (t) { goto L_0019236C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019236Cu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0019236Cu) [[unlikely]] return; }
L_0019236C:
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0019238C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] - 16u);  if (t) { goto L_0019238C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019238Cu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0019238Cu) [[unlikely]] return; }
L_0019238C:
    st32((c.r[16].w[0] + 12u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001923A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001923A4u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x001923A4u) [[unlikely]] return; }
L_001923A4:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001923C4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] - 16u);  if (t) { goto L_001923C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001923C4u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x001923C4u) [[unlikely]] return; }
L_001923C4:
    st32((c.r[16].w[0] + 96u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001923DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001923DCu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x001923DCu) [[unlikely]] return; }
L_001923DC:
    st32((c.r[16].w[0] + 20u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001923F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001923F4u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x001923F4u) [[unlikely]] return; }
L_001923F4:
    st32((c.r[16].w[0] + 24u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00192410:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[1].w[0] + 31496u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00192608; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 100u)));
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    st32((c.r[18].w[0] + 4u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[18].w[0] + 28u)));  if (t) { goto L_00192514; } }
L_0019244C:
    set32(c.r[25], ld32((c.r[18].w[0] + 112u)));
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00192478u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00192478u) [[unlikely]] return; }
L_00192478:
    set32(c.r[25], ld32((c.r[18].w[0] + 112u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00192490u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00192490u) [[unlikely]] return; }
L_00192490:
    set32(c.r[3], ld32((c.r[19].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_001924F8; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[5], c.r[16].w[0] << 2);
    set32(c.r[4], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 8;
    { const bool t = c.r[6].sd[0] < 0; set32(c.r[16], ld32((c.r[3].w[0])));  if (t) { goto L_001924CC; } }
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[16].w[0]);  if (t) { goto L_001924D0; } }
L_001924CC:
    st32((c.r[18].w[0] + 28u), c.r[16].w[0]);
    c.budget -= 1;
L_001924D0:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { goto L_001924EC; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[6].w[0]);  if (t) { goto L_001924F0; } }
L_001924EC:
    st32((c.r[18].w[0] + 32u), c.r[6].w[0]);
    c.budget -= 1;
L_001924F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00192514; } }
L_001924F8:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 7;
L_00192514:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019244Cu | kUnwind; return; } goto L_0019244C; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 108u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00192608; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00192600; } }
L_00192530:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00192538u); set32(c.r[17], c.r[17].w[0] - 1u);  if (depth < kMaxDepth) unit_0010(c, 19u, depth + 1u); else { c.pc = 0x00140410u; return; } if (c.pc != 0x00192538u) [[unlikely]] return; }
L_00192538:
    set32(c.r[5], 0u + 100u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00192544u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 228u, depth + 1u); else { c.pc = 0x0011B928u; return; } if (c.pc != 0x00192544u) [[unlikely]] return; }
L_00192544:
    set32(c.r[3], ld32((c.r[18].w[0] + 100u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 10u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00192600; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00192560u);  if (depth < kMaxDepth) unit_0024(c, 299u, depth + 1u); else { c.pc = 0x00192630u; return; } if (c.pc != 0x00192560u) [[unlikely]] return; }
L_00192560:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { goto L_00192600; } }
    set32(c.r[25], ld32((c.r[18].w[0] + 112u)));
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00192594u); set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00192594u) [[unlikely]] return; }
L_00192594:
    set32(c.r[3], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[5], c.r[3].w[0] << 2);  if (t) { goto L_001925D8; } }
    set32(c.r[6], c.r[16].w[0] << 2);
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 32u), c.r[16].w[0]);  if (t) { goto L_00192600; } }
L_001925D8:
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[5], c.r[16].w[0] << 2);
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    st32((c.r[18].w[0] + 32u), c.r[16].w[0]);
    st32((c.r[18].w[0] + 28u), c.r[16].w[0]);
    c.budget -= 10;
L_00192600:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00192530u | kUnwind; return; } goto L_00192530; } }
L_00192608:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00192630:
    set32(c.r[6], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] >= 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00192644; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001926A0; } }
L_00192644:
    set32(c.r[7], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_00192690; } }
L_00192650:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != 0ull; mmi::div(c, 0, c.r[2].w[0], c.r[7].w[0]);  if (t) { goto L_00192660; } }
    breakpoint(c, 0x0019265Cu);
    c.budget -= 1;
L_00192660:
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[5], c.r[2].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0019268C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001926A0; } }
L_0019268C:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_00192690:
    c.r[2].d[0] = c.r[8].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[8].w[0] + c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00192650u | kUnwind; return; } goto L_00192650; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_001926A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001926B0:
    set32(c.r[29], c.r[29].w[0] - 240u);
    set32(c.r[3], c.r[5].w[0] << 4);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001926E8u); set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0010(c, 27u, depth + 1u); else { c.pc = 0x00140650u; return; } if (c.pc != 0x001926E8u) [[unlikely]] return; }
L_001926E8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[2] = ld32((c.r[1].w[0] + 13832u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 13824u));
    c.f[20] = fp::mul(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_00192710; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = fp::sub(c.f[20], c.f[2]);  if (t) { goto L_00192724; } }
L_00192710:
    c.f[0] = ld32((c.r[1].w[0] + 13816u));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00192724; } }
    c.f[20] = fp::add(c.f[20], c.f[2]);
    c.budget -= 1;
L_00192724:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019272Cu);  if (depth < kMaxDepth) unit_0010(c, 27u, depth + 1u); else { c.pc = 0x00140650u; return; } if (c.pc != 0x0019272Cu) [[unlikely]] return; }
L_0019272C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[2] = ld32((c.r[1].w[0] + 13832u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 13824u));
    c.f[3] = fp::mul(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_00192754; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[3] = fp::sub(c.f[3], c.f[2]);  if (t) { goto L_00192768; } }
L_00192754:
    c.f[0] = ld32((c.r[1].w[0] + 13816u));
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0019276C; } }
    c.f[3] = fp::add(c.f[3], c.f[2]);
    c.budget -= 1;
L_00192768:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_0019276C:
    st32((c.r[29].w[0] + 168u), 0u);
    st32((c.r[29].w[0] + 160u), c.f[3]);
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 164u), c.f[20]);
    set32(c.r[4], c.r[29].w[0] + 176u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 160u);
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00192798u); st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0011(c, 48u, depth + 1u); else { c.pc = 0x00144FA0u; return; } if (c.pc != 0x00192798u) [[unlikely]] return; }
L_00192798:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001927A8u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 20u, depth + 1u); else { c.pc = 0x001444C0u; return; } if (c.pc != 0x001927A8u) [[unlikely]] return; }
L_001927A8:
    set32(c.r[2], ld32((c.r[19].w[0] + 100u)));
    set32(c.r[3], c.r[29].w[0] + 96u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 18u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.vu0.vf[6] = c.r[2];
    ld128((c.r[16].w[0]) & ~15u, c.vu0.vf[5]);
    vu::mulbc(c.vu0, 14u, 4u, 5u, c.vu0.vf[6].w[0]);
    vu::addbc(c.vu0, 1u, 4u, 5u, c.vu0.vf[0].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[4], c.r[19].w[0] + 64u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[29].w[0] + 128u);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[2]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[3], c.r[29].w[0] + 144u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 112u);
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[2]);
    st128((c.r[16].w[0]) & ~15u, c.r[2]);
    st32((c.r[16].w[0] + 12u), c.f[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 112u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 39;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00192844u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00192844u) [[unlikely]] return; }
L_00192844:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019284Cu); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0010(c, 27u, depth + 1u); else { c.pc = 0x00140650u; return; } if (c.pc != 0x0019284Cu) [[unlikely]] return; }
L_0019284C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[4] = c.r[2].w[0];
    c.f[3] = ld32((c.r[1].w[0] + 13832u));
    c.f[0] = fp::sub(c.f[0], c.f[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 13824u));
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 15;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_00192890; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[2] = fp::sub(c.f[2], c.f[3]);  if (t) { goto L_001928A4; } }
L_00192890:
    c.f[0] = ld32((c.r[1].w[0] + 13816u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001928A4; } }
    c.f[2] = fp::add(c.f[2], c.f[3]);
    c.budget -= 1;
L_001928A4:
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[6], c.r[18].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    set32(c.r[16], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 168u), c.f[2]);
    st32((c.r[29].w[0] + 160u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001928D0u); st32((c.r[29].w[0] + 164u), c.f[20]);  if (depth < kMaxDepth) unit_0011(c, 56u, depth + 1u); else { c.pc = 0x001452D0u; return; } if (c.pc != 0x001928D0u) [[unlikely]] return; }
L_001928D0:
    st32((c.r[16].w[0]), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 176u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001928F4u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 20u, depth + 1u); else { c.pc = 0x001444C0u; return; } if (c.pc != 0x001928F4u) [[unlikely]] return; }
L_001928F4:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00192900u); set32(c.r[5], c.r[19].w[0] + 80u);  if (depth < kMaxDepth) unit_0011(c, 53u, depth + 1u); else { c.pc = 0x00145110u; return; } if (c.pc != 0x00192900u) [[unlikely]] return; }
L_00192900:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00192910u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 20u, depth + 1u); else { c.pc = 0x001444C0u; return; } if (c.pc != 0x00192910u) [[unlikely]] return; }
L_00192910:
    set32(c.r[2], ld32((c.r[19].w[0] + 100u)));
    c.f[0] = ld32((c.r[2].w[0] + 28u));
    ld128((c.r[16].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.f[0]);
    c.vu0.vf[5] = c.r[2];
    vu::mulbc(c.vu0, 14u, 4u, 4u, c.vu0.vf[5].w[0]);
    st128((c.r[16].w[0]) & ~15u, c.vu0.vf[4]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[2] = c.r[2].w[0];
    st32((c.r[16].w[0] + 12u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0]), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    st32((c.r[17].w[0] + 4u), c.f[2]);
    c.f[0] = c.r[2].w[0];
    st32((c.r[17].w[0] + 8u), c.f[1]);
    st32((c.r[17].w[0] + 12u), c.f[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 100u)));
    c.f[0] = ld32((c.r[2].w[0] + 44u));
    ld128((c.r[17].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.f[0]);
    c.vu0.vf[5] = c.r[2];
    vu::mulbc(c.vu0, 14u, 4u, 4u, c.vu0.vf[5].w[0]);
    st128((c.r[17].w[0]) & ~15u, c.vu0.vf[4]);
    c.f[0] = 0u;
    c.f[1] = 0u;
    st32((c.r[17].w[0] + 28u), c.f[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 100u)));
    c.f[0] = ld32((c.r[2].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 40;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001929C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001929B8u);  if (depth < kMaxDepth) unit_0010(c, 27u, depth + 1u); else { c.pc = 0x00140650u; return; } if (c.pc != 0x001929B8u) [[unlikely]] return; }
L_001929B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 13824u));
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 3;
L_001929C4:
    st32((c.r[17].w[0] + 20u), c.f[1]);
    set32(c.r[2], ld32((c.r[19].w[0] + 100u)));
    c.f[0] = ld32((c.r[2].w[0] + 48u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001929D8u); st32((c.r[17].w[0] + 16u), c.f[0]);  if (depth < kMaxDepth) unit_0010(c, 27u, depth + 1u); else { c.pc = 0x00140650u; return; } if (c.pc != 0x001929D8u) [[unlikely]] return; }
L_001929D8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[4], ld32((c.r[19].w[0] + 100u)));
    c.f[2] = c.r[3].w[0];
    c.f[3] = fp::sub(c.f[0], c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = ld32((c.r[4].w[0] + 52u));
    c.f[1] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    st32((c.r[17].w[0] + 24u), c.f[1]);
    set32(c.r[3], ld32((c.r[19].w[0] + 100u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 12u)));
    st32((c.r[17].w[0] + 32u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 36u), 0u);
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 40u), c.f[0]);
    st32((c.r[17].w[0] + 44u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 30;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_00192A50:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 4640u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[7], c.r[29].w[0] + 80u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[6], c.r[5].w[0] << 4);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[8], c.r[29].w[0] + 48u);
    st128((c.r[7].w[0]) & ~15u, c.r[2]);
    set32(c.r[9], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 100u)));
    set32(c.r[5], c.r[3].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 100u)));
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 100u)));
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[29].w[0] + 88u), c.f[0]);
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[2]);
    ld128((c.r[8].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[7].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[8].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.r[29].w[0] + 48u);
    set32(c.r[3], c.r[29].w[0] + 64u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    ld128((c.r[9].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[9].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], ld32((c.r[17].w[0] + 100u)));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 68u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[5].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    ld128((c.r[16].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.f[0]);
    c.vu0.vf[5] = c.r[2];
    vu::addbc(c.vu0, 14u, 4u, 4u, c.vu0.vf[5].w[0]);
    st128((c.r[16].w[0]) & ~15u, c.vu0.vf[4]);
    c.f[1] = ld32((c.r[16].w[0] + 24u));
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 20u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 100u)));
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    c.f[1] = ld32((c.r[2].w[0] + 56u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 24u), c.f[0]);
    c.budget -= 64;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00192B50u); c.f[12] = ld32((c.r[16].w[0] + 20u));  if (depth < kMaxDepth) unit_0010(c, 265u, depth + 1u); else { c.pc = 0x00143C10u; return; } if (c.pc != 0x00192B50u) [[unlikely]] return; }
L_00192B50:
    st32((c.r[16].w[0] + 20u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00192B70; } }
    st32((c.r[16].w[0]), c.f[0]);
    c.budget -= 1;
L_00192B70:
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00192B8C; } }
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.budget -= 1;
L_00192B8C:
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00192BA8; } }
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.budget -= 1;
L_00192BA8:
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    c.f[16] = c.r[2].w[0];
    c.f[13] = 0u;
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 36u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 100u)));
    c.f[14] = ld32((c.r[2].w[0] + 60u));
    c.f[15] = ld32((c.r[2].w[0] + 64u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00192BD8u); c.f[12] = ld32((c.r[16].w[0] + 36u));  if (depth < kMaxDepth) unit_0024(c, 265u, depth + 1u); else { c.pc = 0x00192020u; return; } if (c.pc != 0x00192BD8u) [[unlikely]] return; }
L_00192BD8:
    st32((c.r[16].w[0] + 28u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 32u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00192C10:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[13], ld32((c.r[1].w[0] + 28272u)));
    c.f[0] = 0u;
    set32(c.r[12], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[10], c.r[29].w[0]);
    set32(c.r[6], c.r[29].w[0] + 16u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[11], c.r[13].w[0] + 464u);  if (t) { goto L_00192CC8; } }
L_00192C34:
    set32(c.r[8], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] + c.r[12].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[9], c.r[3].w[0] << 4);
    set32(c.r[7], c.r[12].w[0] << 4);
    ld128((c.r[13].w[0] + 448u) & ~15u, c.r[3]);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[3]);
    ld128((c.r[10].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[10].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[10].w[0]) & ~15u, c.r[3]);
    st128((c.r[6].w[0]) & ~15u, c.r[3]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[3]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[3]);
    c.f[6] = ld32((c.r[29].w[0] + 32u));
    c.f[5] = ld32((c.r[11].w[0]));
    c.f[4] = ld32((c.r[29].w[0] + 36u));
    c.f[3] = ld32((c.r[11].w[0] + 4u));
    c.f[2] = ld32((c.r[29].w[0] + 40u));
    c.f[1] = ld32((c.r[11].w[0] + 8u));
    c.f[5] = fp::mul(c.f[6], c.f[5]);
    c.f[3] = fp::mul(c.f[4], c.f[3]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[3] = fp::add(c.f[5], c.f[3]);
    c.f[1] = fp::add(c.f[1], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 31;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00192CB8; } }
    st32((c.r[8].w[0] + 32u), 0u);
    st32((c.r[8].w[0] + 28u), c.f[0]);
    c.budget -= 2;
L_00192CB8:
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[5], c.r[12].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[12], ld32((c.r[3].w[0])));
    c.budget -= 4;
L_00192CC8:
    c.budget -= 2;
    { const bool t = c.r[12].sd[0] >= 0; set32(c.r[3], c.r[12].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00192C34u | kUnwind; return; } goto L_00192C34; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00192CE0:
    c.f[1] = ld32((c.r[6].w[0] + 28u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[3].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[2] = c.r[6].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00192D18; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[6], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[4].w[0] + 16u)));  if (t) { goto L_00192D34; } }
L_00192D18:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[6], c.f[1]);
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 7;
L_00192D34:
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 12u), c.r[6].w[0]);  c.pc = t; return; }
L_00192D50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[0] = c.r[2].w[0];
    st32((c.r[29].w[0]), c.f[20]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 100u)));
    c.f[1] = ld32((c.r[1].w[0] + 13808u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 20u)));
    c.f[2] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00192D8Cu); c.f[20] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0010(c, 27u, depth + 1u); else { c.pc = 0x00140650u; return; } if (c.pc != 0x00192D8Cu) [[unlikely]] return; }
L_00192D8C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = c.r[3].w[0];
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00192DC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00192DD4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 266u, depth + 1u); else { c.pc = 0x001920A0u; return; } if (c.pc != 0x00192DD4u) [[unlikely]] return; }
L_00192DD4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 12688u);
    st32((c.r[16].w[0] + 112u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00192E00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[0] = c.r[2].w[0];
    st32((c.r[29].w[0]), c.f[20]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 100u)));
    c.f[1] = ld32((c.r[1].w[0] + 13808u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 20u)));
    c.f[2] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00192E3Cu); c.f[20] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0010(c, 27u, depth + 1u); else { c.pc = 0x00140650u; return; } if (c.pc != 0x00192E3Cu) [[unlikely]] return; }
L_00192E3C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[4] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = ld32((c.r[1].w[0] + 13800u));
    c.f[0] = fp::sub(c.f[0], c.f[4]);
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[3] = c.r[2].w[0];
    c.f[1] = ld32((c.r[1].w[0] + 13824u));
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 15;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_00192E88; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 13832u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[0] = fp::sub(c.f[0], c.f[1]);  if (t) { goto L_00192EA4; } }
L_00192E88:
    c.f[1] = ld32((c.r[1].w[0] + 13816u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00192EA4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 13832u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 3;
L_00192EA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00192EC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00192ED4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 266u, depth + 1u); else { c.pc = 0x001920A0u; return; } if (c.pc != 0x00192ED4u) [[unlikely]] return; }
L_00192ED4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 12720u);
    st32((c.r[16].w[0] + 112u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00192F00:
    set32(c.r[29], c.r[29].w[0] - 240u);
    set32(c.r[3], c.r[5].w[0] << 4);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00192F38u); set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0010(c, 27u, depth + 1u); else { c.pc = 0x00140650u; return; } if (c.pc != 0x00192F38u) [[unlikely]] return; }
L_00192F38:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[2] = ld32((c.r[1].w[0] + 13832u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 13824u));
    c.f[20] = fp::mul(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_00192F60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = fp::sub(c.f[20], c.f[2]);  if (t) { goto L_00192F74; } }
L_00192F60:
    c.f[0] = ld32((c.r[1].w[0] + 13816u));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00192F74; } }
    c.f[20] = fp::add(c.f[20], c.f[2]);
    c.budget -= 1;
L_00192F74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00192F7Cu);  if (depth < kMaxDepth) unit_0010(c, 27u, depth + 1u); else { c.pc = 0x00140650u; return; } if (c.pc != 0x00192F7Cu) [[unlikely]] return; }
L_00192F7C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[2] = ld32((c.r[1].w[0] + 13832u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 13824u));
    c.f[3] = fp::mul(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_00192FA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[3] = fp::sub(c.f[3], c.f[2]);  if (t) { goto L_00192FB8; } }
L_00192FA4:
    c.f[0] = ld32((c.r[1].w[0] + 13816u));
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_00192FBC; } }
    c.f[3] = fp::add(c.f[3], c.f[2]);
    c.budget -= 1;
L_00192FB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_00192FBC:
    st32((c.r[29].w[0] + 168u), 0u);
    st32((c.r[29].w[0] + 160u), c.f[3]);
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 164u), c.f[20]);
    set32(c.r[4], c.r[29].w[0] + 176u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 160u);
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00192FE8u); st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0011(c, 48u, depth + 1u); else { c.pc = 0x00144FA0u; return; } if (c.pc != 0x00192FE8u) [[unlikely]] return; }
L_00192FE8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00192FF8u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 20u, depth + 1u); else { c.pc = 0x001444C0u; return; } if (c.pc != 0x00192FF8u) [[unlikely]] return; }
L_00192FF8:
    set32(c.r[2], ld32((c.r[19].w[0] + 100u)));
    set32(c.r[3], c.r[29].w[0] + 96u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 18u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.vu0.vf[6] = c.r[2];
    ld128((c.r[16].w[0]) & ~15u, c.vu0.vf[5]);
    vu::mulbc(c.vu0, 14u, 4u, 5u, c.vu0.vf[6].w[0]);
    vu::addbc(c.vu0, 1u, 4u, 5u, c.vu0.vf[0].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[4], c.r[19].w[0] + 64u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[29].w[0] + 128u);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[2]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[3], c.r[29].w[0] + 144u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 112u);
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[2]);
    st128((c.r[16].w[0]) & ~15u, c.r[2]);
    st32((c.r[16].w[0] + 12u), c.f[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 112u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 39;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00193094u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00193094u) [[unlikely]] return; }
L_00193094:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019309Cu); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0010(c, 27u, depth + 1u); else { c.pc = 0x00140650u; return; } if (c.pc != 0x0019309Cu) [[unlikely]] return; }
L_0019309C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[4] = c.r[2].w[0];
    c.f[3] = ld32((c.r[1].w[0] + 13832u));
    c.f[0] = fp::sub(c.f[0], c.f[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 13824u));
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 15;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001930E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[2] = fp::sub(c.f[2], c.f[3]);  if (t) { goto L_001930F4; } }
L_001930E0:
    c.f[0] = ld32((c.r[1].w[0] + 13816u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001930F4; } }
    c.f[2] = fp::add(c.f[2], c.f[3]);
    c.budget -= 1;
L_001930F4:
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[6], c.r[18].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    set32(c.r[16], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 168u), c.f[2]);
    st32((c.r[29].w[0] + 160u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00193120u); st32((c.r[29].w[0] + 164u), c.f[20]);  if (depth < kMaxDepth) unit_0011(c, 56u, depth + 1u); else { c.pc = 0x001452D0u; return; } if (c.pc != 0x00193120u) [[unlikely]] return; }
L_00193120:
    st32((c.r[16].w[0]), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00193148u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 20u, depth + 1u); else { c.pc = 0x001444C0u; return; } if (c.pc != 0x00193148u) [[unlikely]] return; }
L_00193148:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[19].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00193158u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 20u, depth + 1u); else { c.pc = 0x001444C0u; return; } if (c.pc != 0x00193158u) [[unlikely]] return; }
L_00193158:
    set32(c.r[2], ld32((c.r[19].w[0] + 100u)));
    c.f[0] = ld32((c.r[2].w[0] + 28u));
    ld128((c.r[16].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.f[0]);
    c.vu0.vf[5] = c.r[2];
    vu::mulbc(c.vu0, 14u, 4u, 4u, c.vu0.vf[5].w[0]);
    st128((c.r[16].w[0]) & ~15u, c.vu0.vf[4]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[2] = c.r[2].w[0];
    st32((c.r[16].w[0] + 12u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0]), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    st32((c.r[17].w[0] + 4u), c.f[2]);
    c.f[0] = c.r[2].w[0];
    st32((c.r[17].w[0] + 8u), c.f[1]);
    st32((c.r[17].w[0] + 12u), c.f[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 100u)));
    c.f[0] = ld32((c.r[2].w[0] + 44u));
    ld128((c.r[17].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.f[0]);
    c.vu0.vf[5] = c.r[2];
    vu::mulbc(c.vu0, 14u, 4u, 4u, c.vu0.vf[5].w[0]);
    st128((c.r[17].w[0]) & ~15u, c.vu0.vf[4]);
    c.f[0] = 0u;
    c.f[1] = 0u;
    st32((c.r[17].w[0] + 28u), c.f[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 100u)));
    c.f[0] = ld32((c.r[2].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 40;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0019320C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00193200u);  if (depth < kMaxDepth) unit_0010(c, 27u, depth + 1u); else { c.pc = 0x00140650u; return; } if (c.pc != 0x00193200u) [[unlikely]] return; }
L_00193200:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 13824u));
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 3;
L_0019320C:
    st32((c.r[17].w[0] + 20u), c.f[1]);
    set32(c.r[2], ld32((c.r[19].w[0] + 100u)));
    c.f[0] = ld32((c.r[2].w[0] + 48u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00193220u); st32((c.r[17].w[0] + 16u), c.f[0]);  if (depth < kMaxDepth) unit_0010(c, 27u, depth + 1u); else { c.pc = 0x00140650u; return; } if (c.pc != 0x00193220u) [[unlikely]] return; }
L_00193220:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[4], ld32((c.r[19].w[0] + 100u)));
    c.f[2] = c.r[3].w[0];
    c.f[3] = fp::sub(c.f[0], c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = ld32((c.r[4].w[0] + 52u));
    c.f[1] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    st32((c.r[17].w[0] + 24u), c.f[1]);
    set32(c.r[3], ld32((c.r[19].w[0] + 100u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 12u)));
    st32((c.r[17].w[0] + 32u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 36u), 0u);
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 40u), c.f[0]);
    st32((c.r[17].w[0] + 44u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 30;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_001932A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001932B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 266u, depth + 1u); else { c.pc = 0x001920A0u; return; } if (c.pc != 0x001932B4u) [[unlikely]] return; }
L_001932B4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 12752u);
    st32((c.r[16].w[0] + 112u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001932E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001932FCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 314u, depth + 1u); else { c.pc = 0x00192A50u; return; } if (c.pc != 0x001932FCu) [[unlikely]] return; }
L_001932FC:
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[4], c.r[16].w[0] << 4);
    c.f[1] = 0u;
    set32(c.r[5], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00193374; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[5].w[0] + 4u), c.f[1]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_00193374; } }
    c.f[0] = ld32((c.r[1].w[0] + 13792u));
    c.f[1] = ld32((c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[3].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = ld32((c.r[1].w[0] + 13792u));
    c.f[1] = c.f[1] ^ fp::kSign;
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[1].w[0] + 13792u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.budget -= 15;
L_00193374:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00193390:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47500000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001933BCu); c.r[5].d[0] = c.r[2].d[0] | 21076ull;  if (depth < kMaxDepth) unit_0025(c, 418u, depth + 1u); else { c.pc = 0x00197EE0u; return; } if (c.pc != 0x001933BCu) [[unlikely]] return; }
L_001933BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 12816u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 64u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001933DCu); st32((c.r[18].w[0] + 68u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0025(c, 422u, depth + 1u); else { c.pc = 0x00197FC0u; return; } if (c.pc != 0x001933DCu) [[unlikely]] return; }
L_001933DC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26328u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 1212u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001933F0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 34u, depth + 1u); else { c.pc = 0x001944F0u; return; } if (c.pc != 0x001933F0u) [[unlikely]] return; }
L_001933F0:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00193410:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00193458; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 12816u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00193440u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 420u, depth + 1u); else { c.pc = 0x00197F70u; return; } if (c.pc != 0x00193440u) [[unlikely]] return; }
L_00193440:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0019345C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00193458u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00193458u) [[unlikely]] return; }
L_00193458:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0019345C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00193470:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00193480:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00193490:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001934A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001934CC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001934C4u); set32(c.r[4], ld32((c.r[1].w[0] + 26176u)));  if (depth < kMaxDepth) unit_0024(c, 186u, depth + 1u); else { c.pc = 0x001916C0u; return; } if (c.pc != 0x001934C4u) [[unlikely]] return; }
L_001934C4:
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    st32((c.r[3].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 2;
L_001934CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001934E0:
    set32(c.r[4], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001934F4; } }
    ld128((c.r[5].w[0]) & ~15u, c.r[3]);
    st128((c.r[4].w[0] + 64u) & ~15u, c.r[3]);
    c.budget -= 2;
L_001934F4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00193500:
    set32(c.r[4], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00193514; } }
    ld128((c.r[5].w[0]) & ~15u, c.r[3]);
    st128((c.r[4].w[0] + 80u) & ~15u, c.r[3]);
    c.budget -= 2;
L_00193514:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00193520:
    set32(c.r[3], ld32((c.r[4].w[0] + 64u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26176u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 100u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 2072u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 220u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld64((c.r[2].w[0] + 8u));  c.pc = t; return; }
L_00193550:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], 0u + 128u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00193570u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00193570u) [[unlikely]] return; }
L_00193570:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001935B8; } }
    set32(c.r[25], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019358Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019358Cu) [[unlikely]] return; }
L_0019358C:
    set32(c.r[25], ld32((c.r[18].w[0] + 56u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001935A0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001935A0u) [[unlikely]] return; }
L_001935A0:
    set32(c.r[5], ld32((c.r[18].w[0] + 68u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001935B4u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 266u, depth + 1u); else { c.pc = 0x001920A0u; return; } if (c.pc != 0x001935B4u) [[unlikely]] return; }
L_001935B4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001935B8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001935E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00193604u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 155u, depth + 1u); else { c.pc = 0x00163730u; return; } if (c.pc != 0x00193604u) [[unlikely]] return; }
L_00193604:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[1].w[0] + 31520u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00193960; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[3], 0u + 22u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00193938; } }
    set32(c.r[3], 0u + 21u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00193910; } }
    set32(c.r[3], 0u + 20u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001938E8; } }
    set32(c.r[3], 0u + 26u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001938C0; } }
    set32(c.r[3], 0u + 25u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00193898; } }
    set32(c.r[3], 0u + 24u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00193870; } }
    set32(c.r[3], 0u + 23u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00193848; } }
    set32(c.r[3], 0u + 18u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00193820; } }
    set32(c.r[3], 0u + 17u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001937F8; } }
    set32(c.r[3], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001937D0; } }
    set32(c.r[3], 0u + 15u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001937A8; } }
    set32(c.r[3], 0u + 14u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00193780; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00193758; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00193730; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_00193708; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001936E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00193AD0; } }
L_001936E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001936E8u); set32(c.r[4], 0u + 144u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001936E8u) [[unlikely]] return; }
L_001936E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00193AD0; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00193700u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 413u, depth + 1u); else { c.pc = 0x00193B00u; return; } if (c.pc != 0x00193700u) [[unlikely]] return; }
L_00193700:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00193AD0; } }
L_00193708:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00193710u); set32(c.r[4], 0u + 96u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00193710u) [[unlikely]] return; }
L_00193710:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00193AD0; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00193728u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 434u, depth + 1u); else { c.pc = 0x00193DF0u; return; } if (c.pc != 0x00193728u) [[unlikely]] return; }
L_00193728:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00193AD0; } }
L_00193730:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00193738u); set32(c.r[4], 0u + 144u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00193738u) [[unlikely]] return; }
L_00193738:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00193AD0; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00193750u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 10u, depth + 1u); else { c.pc = 0x00194200u; return; } if (c.pc != 0x00193750u) [[unlikely]] return; }
L_00193750:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00193AD0; } }
L_00193758:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00193760u); set32(c.r[4], 0u + 96u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00193760u) [[unlikely]] return; }
L_00193760:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00193AD0; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00193778u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 20u, depth + 1u); else { c.pc = 0x00194330u; return; } if (c.pc != 0x00193778u) [[unlikely]] return; }
L_00193778:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00193AD0; } }
L_00193780:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00193788u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00193788u) [[unlikely]] return; }
L_00193788:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00193AD0; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001937A0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0052(c, 56u, depth + 1u); else { c.pc = 0x00248700u; return; } if (c.pc != 0x001937A0u) [[unlikely]] return; }
L_001937A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00193AD0; } }
L_001937A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001937B0u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001937B0u) [[unlikely]] return; }
L_001937B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00193AD0; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001937C8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0052(c, 48u, depth + 1u); else { c.pc = 0x002485C0u; return; } if (c.pc != 0x001937C8u) [[unlikely]] return; }
L_001937C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00193AD0; } }
L_001937D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001937D8u); set32(c.r[4], 0u + 112u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001937D8u) [[unlikely]] return; }
L_001937D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00193AD0; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001937F0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0052(c, 66u, depth + 1u); else { c.pc = 0x00248830u; return; } if (c.pc != 0x001937F0u) [[unlikely]] return; }
L_001937F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00193AD0; } }
L_001937F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00193800u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00193800u) [[unlikely]] return; }
L_00193800:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00193AD0; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00193818u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0052(c, 74u, depth + 1u); else { c.pc = 0x00248970u; return; } if (c.pc != 0x00193818u) [[unlikely]] return; }
L_00193818:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00193AD0; } }
L_00193820:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00193828u); set32(c.r[4], 0u + 112u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00193828u) [[unlikely]] return; }
L_00193828:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00193AD0; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00193840u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0052(c, 82u, depth + 1u); else { c.pc = 0x00248AB0u; return; } if (c.pc != 0x00193840u) [[unlikely]] return; }
L_00193840:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00193AD0; } }
L_00193848:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00193850u); set32(c.r[4], 0u + 176u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00193850u) [[unlikely]] return; }
L_00193850:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00193AD0; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00193868u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0052(c, 120u, depth + 1u); else { c.pc = 0x00248FB0u; return; } if (c.pc != 0x00193868u) [[unlikely]] return; }
L_00193868:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00193AD0; } }
L_00193870:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00193878u); set32(c.r[4], 0u + 144u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00193878u) [[unlikely]] return; }
L_00193878:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00193AD0; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00193890u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0052(c, 135u, depth + 1u); else { c.pc = 0x00249190u; return; } if (c.pc != 0x00193890u) [[unlikely]] return; }
L_00193890:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00193AD0; } }
L_00193898:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001938A0u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001938A0u) [[unlikely]] return; }
L_001938A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00193AD0; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001938B8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0052(c, 90u, depth + 1u); else { c.pc = 0x00248BF0u; return; } if (c.pc != 0x001938B8u) [[unlikely]] return; }
L_001938B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00193AD0; } }
L_001938C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001938C8u); set32(c.r[4], 0u + 112u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001938C8u) [[unlikely]] return; }
L_001938C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00193AD0; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001938E0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0052(c, 105u, depth + 1u); else { c.pc = 0x00248DD0u; return; } if (c.pc != 0x001938E0u) [[unlikely]] return; }
L_001938E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00193AD0; } }
L_001938E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001938F0u); set32(c.r[4], 0u + 288u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001938F0u) [[unlikely]] return; }
L_001938F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00193AD0; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00193908u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 256u, depth + 1u); else { c.pc = 0x00196660u; return; } if (c.pc != 0x00193908u) [[unlikely]] return; }
L_00193908:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00193AD0; } }
L_00193910:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00193918u); set32(c.r[4], 0u + 304u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00193918u) [[unlikely]] return; }
L_00193918:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00193AD0; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00193930u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 270u, depth + 1u); else { c.pc = 0x00196820u; return; } if (c.pc != 0x00193930u) [[unlikely]] return; }
L_00193930:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00193AD0; } }
L_00193938:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00193940u); set32(c.r[4], 0u + 192u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00193940u) [[unlikely]] return; }
L_00193940:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00193AD0; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00193958u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0052(c, 35u, depth + 1u); else { c.pc = 0x00248330u; return; } if (c.pc != 0x00193958u) [[unlikely]] return; }
L_00193958:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00193AD0; } }
L_00193960:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[3], 0u + 9u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00193AB0; } }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00193A88; } }
    set32(c.r[3], 0u + 27u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00193A60; } }
    set32(c.r[3], 0u + 13u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00193A38; } }
    set32(c.r[3], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00193A10; } }
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001939E8; } }
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001939C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00193AD0; } }
L_001939C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001939C8u); set32(c.r[4], 0u + 176u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001939C8u) [[unlikely]] return; }
L_001939C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00193AD0; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001939E0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 158u, depth + 1u); else { c.pc = 0x001A9910u; return; } if (c.pc != 0x001939E0u) [[unlikely]] return; }
L_001939E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00193AD0; } }
L_001939E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001939F0u); set32(c.r[4], 0u + 144u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001939F0u) [[unlikely]] return; }
L_001939F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00193AD0; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00193A08u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 168u, depth + 1u); else { c.pc = 0x001A9A30u; return; } if (c.pc != 0x00193A08u) [[unlikely]] return; }
L_00193A08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00193AD0; } }
L_00193A10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00193A18u); set32(c.r[4], 0u + 192u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00193A18u) [[unlikely]] return; }
L_00193A18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00193AD0; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00193A30u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 190u, depth + 1u); else { c.pc = 0x001A9CE0u; return; } if (c.pc != 0x00193A30u) [[unlikely]] return; }
L_00193A30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00193AD0; } }
L_00193A38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00193A40u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00193A40u) [[unlikely]] return; }
L_00193A40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00193AD0; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00193A58u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 203u, depth + 1u); else { c.pc = 0x001A9F10u; return; } if (c.pc != 0x00193A58u) [[unlikely]] return; }
L_00193A58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00193AD0; } }
L_00193A60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00193A68u); set32(c.r[4], 0u + 192u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00193A68u) [[unlikely]] return; }
L_00193A68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00193AD0; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00193A80u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 216u, depth + 1u); else { c.pc = 0x001AA140u; return; } if (c.pc != 0x00193A80u) [[unlikely]] return; }
L_00193A80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00193AD0; } }
L_00193A88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00193A90u); set32(c.r[4], 0u + 208u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00193A90u) [[unlikely]] return; }
L_00193A90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00193AD0; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00193AA8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 258u, depth + 1u); else { c.pc = 0x001AAC70u; return; } if (c.pc != 0x00193AA8u) [[unlikely]] return; }
L_00193AA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00193AD0; } }
L_00193AB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00193AB8u); set32(c.r[4], 0u + 176u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00193AB8u) [[unlikely]] return; }
L_00193AB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00193AD0; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00193AD0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 269u, depth + 1u); else { c.pc = 0x001AAE60u; return; } if (c.pc != 0x00193AD0u) [[unlikely]] return; }
L_00193AD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00193AE8; } }
    set32(c.r[25], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00193AE8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00193AE8u) [[unlikely]] return; }
L_00193AE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00193B00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00193B1Cu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 344u, depth + 1u); else { c.pc = 0x00193390u; return; } if (c.pc != 0x00193B1Cu) [[unlikely]] return; }
L_00193B1C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[17].w[0] + 80u);
    set32(c.r[2], c.r[2].w[0] - 12880u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00193B30u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002A(c, 21u, depth + 1u); else { c.pc = 0x001A8240u; return; } if (c.pc != 0x00193B30u) [[unlikely]] return; }
L_00193B30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00193B38u); set32(c.r[4], c.r[17].w[0] + 96u);  if (depth < kMaxDepth) unit_002A(c, 26u, depth + 1u); else { c.pc = 0x001A8300u; return; } if (c.pc != 0x00193B38u) [[unlikely]] return; }
L_00193B38:
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    set32(c.r[2], c.r[17].w[0] + 80u);
    st32((c.r[17].w[0] + 124u), c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00193B4Cu); st32((c.r[17].w[0] + 120u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00163D40u; return; } if (c.pc != 0x00193B4Cu) [[unlikely]] return; }
L_00193B4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00193B54u); st32((c.r[17].w[0] + 112u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0018(c, 175u, depth + 1u); else { c.pc = 0x00163D10u; return; } if (c.pc != 0x00193B54u) [[unlikely]] return; }
L_00193B54:
    st32((c.r[17].w[0] + 108u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 6u)));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st16((c.r[17].w[0] + 132u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00193B80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00193C00; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 12880u);
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00193BCC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00193BCC; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 112u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00193BCCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00193BCCu) [[unlikely]] return; }
L_00193BCC:
    set32(c.r[4], c.r[17].w[0] + 96u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00193BDCu); st32((c.r[17].w[0] + 64u), 0u);  if (depth < kMaxDepth) unit_002A(c, 28u, depth + 1u); else { c.pc = 0x001A8340u; return; } if (c.pc != 0x00193BDCu) [[unlikely]] return; }
L_00193BDC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00193BE8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 348u, depth + 1u); else { c.pc = 0x00193410u; return; } if (c.pc != 0x00193BE8u) [[unlikely]] return; }
L_00193BE8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00193C04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00193C00u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00193C00u) [[unlikely]] return; }
L_00193C00:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00193C04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00193C20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00193C3Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00193C3Cu) [[unlikely]] return; }
L_00193C3C:
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[6], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[7], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[8], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00193C5Cu); set32(c.r[4], c.r[16].w[0] + 80u);  if (depth < kMaxDepth) unit_002A(c, 22u, depth + 1u); else { c.pc = 0x001A8260u; return; } if (c.pc != 0x00193C5Cu) [[unlikely]] return; }
L_00193C5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00193C70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00193C80:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00193C98u); set32(c.r[4], ld32((c.r[4].w[0] + 64u)));  if (depth < kMaxDepth) unit_0024(c, 290u, depth + 1u); else { c.pc = 0x00192410u; return; } if (c.pc != 0x00193C98u) [[unlikely]] return; }
L_00193C98:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].d[0] = c.r[4].sd[0] < 74ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[4].sd[0] < 78ll ? 1ull : 0ull;  if (t) { goto L_00193CB8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00193CB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00193CB8u); set32(c.r[4], ld32((c.r[16].w[0] + 64u)));  if (depth < kMaxDepth) unit_0024(c, 317u, depth + 1u); else { c.pc = 0x00192C10u; return; } if (c.pc != 0x00193CB8u) [[unlikely]] return; }
L_00193CB8:
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00193DD4; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 100u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 132u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 6u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00193D10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00193CE4u);  if (depth < kMaxDepth) unit_0024(c, 271u, depth + 1u); else { c.pc = 0x00192170u; return; } if (c.pc != 0x00193CE4u) [[unlikely]] return; }
L_00193CE4:
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[8], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[7], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00193D00u); set32(c.r[4], c.r[16].w[0] + 80u);  if (depth < kMaxDepth) unit_002A(c, 22u, depth + 1u); else { c.pc = 0x001A8260u; return; } if (c.pc != 0x00193D00u) [[unlikely]] return; }
L_00193D00:
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 100u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 6u)));
    st16((c.r[16].w[0] + 132u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00193D10:
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[3], ld32((c.r[3].w[0] + 100u)));
    c.f[0] = ld32((c.r[3].w[0] + 44u));
    st32((c.r[16].w[0] + 124u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 100u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    st32((c.r[16].w[0] + 96u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 100u)));
    c.f[0] = ld32((c.r[3].w[0] + 24u));
    st32((c.r[16].w[0] + 100u), c.f[0]);
    set32(c.r[6], ld32((c.r[1].w[0] + 28272u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 64u)));
    ld128((c.r[6].w[0] + 448u) & ~15u, c.r[3]);
    set32(c.r[5], c.r[5].w[0] + 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[3]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[3], c.r[29].w[0] + 32u);
    set32(c.r[5], c.r[6].w[0] + 464u);
    c.f[0] = 0u;
    ld128((c.r[3].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[3]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[3]);
    c.f[6] = ld32((c.r[29].w[0] + 64u));
    c.f[5] = ld32((c.r[5].w[0]));
    c.f[4] = ld32((c.r[29].w[0] + 68u));
    c.f[3] = ld32((c.r[5].w[0] + 4u));
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[2] = ld32((c.r[29].w[0] + 72u));
    c.f[5] = fp::mul(c.f[6], c.f[5]);
    c.f[3] = fp::mul(c.f[4], c.f[3]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[3] = fp::add(c.f[5], c.f[3]);
    c.f[1] = fp::add(c.f[1], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 45;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00193DD4; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00193DD4u); set32(c.r[4], c.r[16].w[0] + 96u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00193DD4u) [[unlikely]] return; }
L_00193DD4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00193DF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00193E10u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 344u, depth + 1u); else { c.pc = 0x00193390u; return; } if (c.pc != 0x00193E10u) [[unlikely]] return; }
L_00193E10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] - 12944u);
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2u)));
    set32(c.r[2], ld32((c.r[1].w[0] + 26176u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0] + 2072u)));
    c.budget -= 11;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 80u), 0u);  if (t) { goto L_00193E80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00193E44u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00193E44u) [[unlikely]] return; }
L_00193E44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00193E60; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 200u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[3].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00193E60u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 243u, depth + 1u); else { c.pc = 0x0014F930u; return; } if (c.pc != 0x00193E60u) [[unlikely]] return; }
L_00193E60:
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00193E70u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 39u, depth + 1u); else { c.pc = 0x001506D0u; return; } if (c.pc != 0x00193E70u) [[unlikely]] return; }
L_00193E70:
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00050000u);
    c.r[3].d[0] = c.r[3].d[0] | 12801ull;
    st64((c.r[2].w[0] + 192u), c.r[3].d[0]);
    c.budget -= 4;
L_00193E80:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 6u)));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st16((c.r[17].w[0] + 84u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00193EB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00193F4C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 12944u);
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00193EFC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00193EFC; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00193EFCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00193EFCu) [[unlikely]] return; }
L_00193EFC:
    st32((c.r[17].w[0] + 80u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00193F24; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00193F24; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 112u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00193F24u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00193F24u) [[unlikely]] return; }
L_00193F24:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00193F34u); st32((c.r[17].w[0] + 64u), 0u);  if (depth < kMaxDepth) unit_0024(c, 348u, depth + 1u); else { c.pc = 0x00193410u; return; } if (c.pc != 0x00193F34u) [[unlikely]] return; }
L_00193F34:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00193F50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00193F4Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00193F4Cu) [[unlikely]] return; }
L_00193F4C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00193F50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00193F70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00193F8Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00193F8Cu) [[unlikely]] return; }
L_00193F8C:
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00193FA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00193FB0:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00193FD8u); set32(c.r[4], ld32((c.r[4].w[0] + 64u)));  if (depth < kMaxDepth) unit_0024(c, 290u, depth + 1u); else { c.pc = 0x00192410u; return; } if (c.pc != 0x00193FD8u) [[unlikely]] return; }
L_00193FD8:
    set32(c.r[4], ld32((c.r[20].w[0] + 64u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 84u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 100u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 6u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_0025(c, 2u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00193FF8u);  if (depth < kMaxDepth) unit_0024(c, 271u, depth + 1u); else { c.pc = 0x00192170u; return; } if (c.pc != 0x00193FF8u) [[unlikely]] return; }
L_00193FF8:
    set32(c.r[3], ld32((c.r[20].w[0] + 64u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 100u)));
    c.budget -= 2;
    [[clang::musttail]] return unit_0025(c, 1u, depth);
}

}
