#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_006A[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 5, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 7, 8, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 12, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0,
    0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0,
    0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0,
    0, 0, 26, 0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 30, 0, 0, 0, 0, 31, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0, 0,
    0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0, 0,
    0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 46, 0, 0, 47, 0, 48, 0, 49, 0, 50, 0, 51, 0, 52, 0, 53, 0, 54, 0, 55, 0, 56, 0, 0, 0, 57, 0,
    0, 58, 0, 0, 0, 59, 0, 60, 0, 61, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 70, 0, 0, 0, 0, 0, 71,
    0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0,
    0, 0, 0, 0, 0, 87, 0, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 90, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 92, 0, 0,
    0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 97,
    0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 102, 0,
    0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0,
    106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 110,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 0, 115, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 116, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0,
    122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 134, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0,
    149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    160, 0, 0, 0, 161, 0, 162, 0, 163, 0, 164, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 167, 0, 0, 0, 0, 0, 0,
    0, 168, 0, 169, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 174, 0, 0, 0,
    175, 0, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0,
    182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 187,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0,
    0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 200, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 205, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0,
    0, 0, 207, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 217, 0, 218,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 226, 0, 227, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 229, 0, 230, 0, 231, 0, 232, 0, 233, 0, 234, 0, 235, 0, 236, 0, 237, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 239, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241,
    0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 243, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245,
    0, 0, 0, 0, 246, 0, 247, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 256,
    0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0,
    0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 270, 0, 271, 0, 272, 0, 0, 273, 0, 0, 0, 0, 0, 0, 274, 0, 275, 0,
    276, 0, 0, 277, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 281, 0,
    0, 0, 0, 0, 0, 282, 0, 283, 0, 284, 0, 0, 285, 0, 0, 286, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 289, 0, 290, 0, 0, 0, 0, 0, 291, 0, 292, 0, 0, 293, 0, 294, 0, 0, 0, 0, 0, 0, 0, 295, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 298, 0, 299, 0, 0, 0, 300, 0, 301, 0, 0,
    0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0,
    315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 317, 0, 0, 0, 0, 0, 318, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0,
    0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 330, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 337, 0,
    0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0,
    343, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0,
    0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0,
    0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0,
    0, 0, 0, 360, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 367,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 372, 0, 373, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_006A(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002A8000;
    case 2u: goto L_002A8010;
    case 3u: goto L_002A8044;
    case 4u: goto L_002A8058;
    case 5u: goto L_002A805C;
    case 6u: goto L_002A80A4;
    case 7u: goto L_002A80AC;
    case 8u: goto L_002A80B0;
    case 9u: goto L_002A80D0;
    case 10u: goto L_002A80F4;
    case 11u: goto L_002A8120;
    case 12u: goto L_002A8128;
    case 13u: goto L_002A8138;
    case 14u: goto L_002A8150;
    case 15u: goto L_002A8170;
    case 16u: goto L_002A8190;
    case 17u: goto L_002A81AC;
    case 18u: goto L_002A81CC;
    case 19u: goto L_002A81F8;
    case 20u: goto L_002A8218;
    case 21u: goto L_002A8228;
    case 22u: goto L_002A8248;
    case 23u: goto L_002A8254;
    case 24u: goto L_002A8268;
    case 25u: goto L_002A8278;
    case 26u: goto L_002A8288;
    case 27u: goto L_002A8290;
    case 28u: goto L_002A82A4;
    case 29u: goto L_002A82D8;
    case 30u: goto L_002A82E4;
    case 31u: goto L_002A82F8;
    case 32u: goto L_002A8334;
    case 33u: goto L_002A8360;
    case 34u: goto L_002A8374;
    case 35u: goto L_002A83A0;
    case 36u: goto L_002A83B0;
    case 37u: goto L_002A83C8;
    case 38u: goto L_002A83D8;
    case 39u: goto L_002A83EC;
    case 40u: goto L_002A840C;
    case 41u: goto L_002A8438;
    case 42u: goto L_002A8458;
    case 43u: goto L_002A8468;
    case 44u: goto L_002A8488;
    case 45u: goto L_002A84C4;
    case 46u: goto L_002A8514;
    case 47u: goto L_002A8520;
    case 48u: goto L_002A8528;
    case 49u: goto L_002A8530;
    case 50u: goto L_002A8538;
    case 51u: goto L_002A8540;
    case 52u: goto L_002A8548;
    case 53u: goto L_002A8550;
    case 54u: goto L_002A8558;
    case 55u: goto L_002A8560;
    case 56u: goto L_002A8568;
    case 57u: goto L_002A8578;
    case 58u: goto L_002A8584;
    case 59u: goto L_002A8594;
    case 60u: goto L_002A859C;
    case 61u: goto L_002A85A4;
    case 62u: goto L_002A85AC;
    case 63u: goto L_002A85D0;
    case 64u: goto L_002A861C;
    case 65u: goto L_002A8648;
    case 66u: goto L_002A8670;
    case 67u: goto L_002A8698;
    case 68u: goto L_002A86C0;
    case 69u: goto L_002A86D8;
    case 70u: goto L_002A86E4;
    case 71u: goto L_002A86FC;
    case 72u: goto L_002A8720;
    case 73u: goto L_002A8730;
    case 74u: goto L_002A8790;
    case 75u: goto L_002A87A4;
    case 76u: goto L_002A87C0;
    case 77u: goto L_002A8820;
    case 78u: goto L_002A8830;
    case 79u: goto L_002A8840;
    case 80u: goto L_002A8874;
    case 81u: goto L_002A8934;
    case 82u: goto L_002A8A18;
    case 83u: goto L_002A8B04;
    case 84u: goto L_002A8B30;
    case 85u: goto L_002A8B4C;
    case 86u: goto L_002A8B70;
    case 87u: goto L_002A8B94;
    case 88u: goto L_002A8BA0;
    case 89u: goto L_002A8BBC;
    case 90u: goto L_002A8BC4;
    case 91u: goto L_002A8BE0;
    case 92u: goto L_002A8BF4;
    case 93u: goto L_002A8C14;
    case 94u: goto L_002A8C28;
    case 95u: goto L_002A8C48;
    case 96u: goto L_002A8C5C;
    case 97u: goto L_002A8C7C;
    case 98u: goto L_002A8C90;
    case 99u: goto L_002A8CB0;
    case 100u: goto L_002A8CC4;
    case 101u: goto L_002A8CE4;
    case 102u: goto L_002A8CF8;
    case 103u: goto L_002A8D18;
    case 104u: goto L_002A8D30;
    case 105u: goto L_002A8D68;
    case 106u: goto L_002A8D80;
    case 107u: goto L_002A8DC0;
    case 108u: goto L_002A8DC8;
    case 109u: goto L_002A8DE0;
    case 110u: goto L_002A8DFC;
    case 111u: goto L_002A8E28;
    case 112u: goto L_002A8E3C;
    case 113u: goto L_002A8E48;
    case 114u: goto L_002A8E58;
    case 115u: goto L_002A8E70;
    case 116u: goto L_002A8EA0;
    case 117u: goto L_002A8EA4;
    case 118u: goto L_002A8EB8;
    case 119u: goto L_002A8ED0;
    case 120u: goto L_002A8EE4;
    case 121u: goto L_002A8EF8;
    case 122u: goto L_002A8F00;
    case 123u: goto L_002A8F48;
    case 124u: goto L_002A8FA0;
    case 125u: goto L_002A8FE8;
    case 126u: goto L_002A904C;
    case 127u: goto L_002A9080;
    case 128u: goto L_002A90DC;
    case 129u: goto L_002A9114;
    case 130u: goto L_002A9134;
    case 131u: goto L_002A9148;
    case 132u: goto L_002A9158;
    case 133u: goto L_002A9168;
    case 134u: goto L_002A9198;
    case 135u: goto L_002A91A0;
    case 136u: goto L_002A91D4;
    case 137u: goto L_002A922C;
    case 138u: goto L_002A923C;
    case 139u: goto L_002A924C;
    case 140u: goto L_002A92B8;
    case 141u: goto L_002A92D8;
    case 142u: goto L_002A9304;
    case 143u: goto L_002A9314;
    case 144u: goto L_002A9350;
    case 145u: goto L_002A9360;
    case 146u: goto L_002A93C8;
    case 147u: goto L_002A93E0;
    case 148u: goto L_002A9460;
    case 149u: goto L_002A9480;
    case 150u: goto L_002A9490;
    case 151u: goto L_002A94D0;
    case 152u: goto L_002A9514;
    case 153u: goto L_002A9540;
    case 154u: goto L_002A955C;
    case 155u: goto L_002A95BC;
    case 156u: goto L_002A95E0;
    case 157u: goto L_002A961C;
    case 158u: goto L_002A9630;
    case 159u: goto L_002A9644;
    case 160u: goto L_002A9680;
    case 161u: goto L_002A9690;
    case 162u: goto L_002A9698;
    case 163u: goto L_002A96A0;
    case 164u: goto L_002A96A8;
    case 165u: goto L_002A96B0;
    case 166u: goto L_002A96DC;
    case 167u: goto L_002A96E4;
    case 168u: goto L_002A9704;
    case 169u: goto L_002A970C;
    case 170u: goto L_002A9720;
    case 171u: goto L_002A9758;
    case 172u: goto L_002A97A8;
    case 173u: goto L_002A97E4;
    case 174u: goto L_002A97F0;
    case 175u: goto L_002A9800;
    case 176u: goto L_002A9818;
    case 177u: goto L_002A9828;
    case 178u: goto L_002A9858;
    case 179u: goto L_002A98C0;
    case 180u: goto L_002A98D8;
    case 181u: goto L_002A98F8;
    case 182u: goto L_002A9900;
    case 183u: goto L_002A9928;
    case 184u: goto L_002A994C;
    case 185u: goto L_002A995C;
    case 186u: goto L_002A996C;
    case 187u: goto L_002A997C;
    case 188u: goto L_002A99A4;
    case 189u: goto L_002A99B4;
    case 190u: goto L_002A99E8;
    case 191u: goto L_002A9A10;
    case 192u: goto L_002A9A58;
    case 193u: goto L_002A9A8C;
    case 194u: goto L_002A9AF0;
    case 195u: goto L_002A9B14;
    case 196u: goto L_002A9B50;
    case 197u: goto L_002A9B88;
    case 198u: goto L_002A9BA0;
    case 199u: goto L_002A9BCC;
    case 200u: goto L_002A9C08;
    case 201u: goto L_002A9C24;
    case 202u: goto L_002A9C3C;
    case 203u: goto L_002A9C90;
    case 204u: goto L_002A9CE8;
    case 205u: goto L_002A9CF0;
    case 206u: goto L_002A9D70;
    case 207u: goto L_002A9D88;
    case 208u: goto L_002A9DA4;
    case 209u: goto L_002A9E0C;
    case 210u: goto L_002A9E40;
    case 211u: goto L_002A9EA0;
    case 212u: goto L_002A9EE0;
    case 213u: goto L_002A9F18;
    case 214u: goto L_002A9F4C;
    case 215u: goto L_002A9F7C;
    case 216u: goto L_002A9FE0;
    case 217u: goto L_002A9FF4;
    case 218u: goto L_002A9FFC;
    case 219u: goto L_002AA030;
    case 220u: goto L_002AA050;
    case 221u: goto L_002AA06C;
    case 222u: goto L_002AA0A0;
    case 223u: goto L_002AA14C;
    case 224u: goto L_002AA174;
    case 225u: goto L_002AA1D4;
    case 226u: goto L_002AA1E0;
    case 227u: goto L_002AA1E8;
    case 228u: goto L_002AA21C;
    case 229u: goto L_002AA228;
    case 230u: goto L_002AA230;
    case 231u: goto L_002AA238;
    case 232u: goto L_002AA240;
    case 233u: goto L_002AA248;
    case 234u: goto L_002AA250;
    case 235u: goto L_002AA258;
    case 236u: goto L_002AA260;
    case 237u: goto L_002AA268;
    case 238u: goto L_002AA2A0;
    case 239u: goto L_002AA2A8;
    case 240u: goto L_002AA2C4;
    case 241u: goto L_002AA2FC;
    case 242u: goto L_002AA314;
    case 243u: goto L_002AA330;
    case 244u: goto L_002AA338;
    case 245u: goto L_002AA37C;
    case 246u: goto L_002AA390;
    case 247u: goto L_002AA398;
    case 248u: goto L_002AA3B0;
    case 249u: goto L_002AA3DC;
    case 250u: goto L_002AA404;
    case 251u: goto L_002AA42C;
    case 252u: goto L_002AA454;
    case 253u: goto L_002AA47C;
    case 254u: goto L_002AA4C4;
    case 255u: goto L_002AA4DC;
    case 256u: goto L_002AA4FC;
    case 257u: goto L_002AA51C;
    case 258u: goto L_002AA528;
    case 259u: goto L_002AA540;
    case 260u: goto L_002AA564;
    case 261u: goto L_002AA58C;
    case 262u: goto L_002AA5B4;
    case 263u: goto L_002AA5D0;
    case 264u: goto L_002AA5F0;
    case 265u: goto L_002AA610;
    case 266u: goto L_002AA630;
    case 267u: goto L_002AA650;
    case 268u: goto L_002AA670;
    case 269u: goto L_002AA698;
    case 270u: goto L_002AA6B8;
    case 271u: goto L_002AA6C0;
    case 272u: goto L_002AA6C8;
    case 273u: goto L_002AA6D4;
    case 274u: goto L_002AA6F0;
    case 275u: goto L_002AA6F8;
    case 276u: goto L_002AA700;
    case 277u: goto L_002AA70C;
    case 278u: goto L_002AA728;
    case 279u: goto L_002AA740;
    case 280u: goto L_002AA75C;
    case 281u: goto L_002AA778;
    case 282u: goto L_002AA794;
    case 283u: goto L_002AA79C;
    case 284u: goto L_002AA7A4;
    case 285u: goto L_002AA7B0;
    case 286u: goto L_002AA7BC;
    case 287u: goto L_002AA7C8;
    case 288u: goto L_002AA7F4;
    case 289u: goto L_002AA81C;
    case 290u: goto L_002AA824;
    case 291u: goto L_002AA83C;
    case 292u: goto L_002AA844;
    case 293u: goto L_002AA850;
    case 294u: goto L_002AA858;
    case 295u: goto L_002AA878;
    case 296u: goto L_002AA8A8;
    case 297u: goto L_002AA8B4;
    case 298u: goto L_002AA8D4;
    case 299u: goto L_002AA8DC;
    case 300u: goto L_002AA8EC;
    case 301u: goto L_002AA8F4;
    case 302u: goto L_002AA918;
    case 303u: goto L_002AA928;
    case 304u: goto L_002AA934;
    case 305u: goto L_002AA944;
    case 306u: goto L_002AA964;
    case 307u: goto L_002AA990;
    case 308u: goto L_002AA9BC;
    case 309u: goto L_002AA9CC;
    case 310u: goto L_002AA9E8;
    case 311u: goto L_002AAA20;
    case 312u: goto L_002AAA98;
    case 313u: goto L_002AAACC;
    case 314u: goto L_002AAADC;
    case 315u: goto L_002AAB00;
    case 316u: goto L_002AAB2C;
    case 317u: goto L_002AAB38;
    case 318u: goto L_002AAB50;
    case 319u: goto L_002AAB60;
    case 320u: goto L_002AABA0;
    case 321u: goto L_002AABE4;
    case 322u: goto L_002AAC10;
    case 323u: goto L_002AAC58;
    case 324u: goto L_002AACC8;
    case 325u: goto L_002AACF8;
    case 326u: goto L_002AAD18;
    case 327u: goto L_002AAD2C;
    case 328u: goto L_002AAD44;
    case 329u: goto L_002AAD5C;
    case 330u: goto L_002AAD74;
    case 331u: goto L_002AADB0;
    case 332u: goto L_002AADCC;
    case 333u: goto L_002AAE0C;
    case 334u: goto L_002AAE30;
    case 335u: goto L_002AAE48;
    case 336u: goto L_002AAE60;
    case 337u: goto L_002AAE78;
    case 338u: goto L_002AAE90;
    case 339u: goto L_002AAED0;
    case 340u: goto L_002AAEEC;
    case 341u: goto L_002AAF2C;
    case 342u: goto L_002AAF68;
    case 343u: goto L_002AAF80;
    case 344u: goto L_002AAF98;
    case 345u: goto L_002AAFB0;
    case 346u: goto L_002AAFF0;
    case 347u: goto L_002AB014;
    case 348u: goto L_002AB054;
    case 349u: goto L_002AB078;
    case 350u: goto L_002AB08C;
    case 351u: goto L_002AB0B4;
    case 352u: goto L_002AB0CC;
    case 353u: goto L_002AB0E4;
    case 354u: goto L_002AB130;
    case 355u: goto L_002AB154;
    case 356u: goto L_002AB194;
    case 357u: goto L_002AB1B8;
    case 358u: goto L_002AB1CC;
    case 359u: goto L_002AB1F4;
    case 360u: goto L_002AB20C;
    case 361u: goto L_002AB224;
    case 362u: goto L_002AB23C;
    case 363u: goto L_002AB280;
    case 364u: goto L_002AB2B0;
    case 365u: goto L_002AB2D0;
    case 366u: goto L_002AB2E4;
    case 367u: goto L_002AB2FC;
    case 368u: goto L_002AB324;
    case 369u: goto L_002AB390;
    case 370u: goto L_002AB3AC;
    case 371u: goto L_002AB3C0;
    case 372u: goto L_002AB3E0;
    case 373u: goto L_002AB3E8;
    case 374u: goto L_002AB450;
    case 375u: goto L_002AB5D0;
    case 376u: goto L_002AB660;
    case 377u: goto L_002AB68C;
    case 378u: goto L_002AB6CC;
    case 379u: goto L_002AB6D4;
    case 380u: goto L_002AB710;
    case 381u: goto L_002ABAEC;
    case 382u: goto L_002ABB50;
    case 383u: goto L_002ABD08;
    case 384u: goto L_002ABD70;
    case 385u: goto L_002ABFC4;
    default: bad_entry(c, 0x002A8000u); return;
    }
L_002A8000:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002A8038; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8010u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x002A8010u) [[unlikely]] return; }
L_002A8010:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25571u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_002A802C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A8034; } }
L_002A802C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 64u);  if (t) { goto L_002A803C; } }
L_002A8034:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A8038:
    set32(c.r[4], 0u + 64u);
    c.budget -= 1;
L_002A803C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8044u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002A8044u) [[unlikely]] return; }
L_002A8044:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002A8058; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8058u); set32(c.r[6], 0u + 512u);  if (depth < kMaxDepth) unit_0069(c, 35u, depth + 1u); else { c.pc = 0x002A44A0u; return; } if (c.pc != 0x002A8058u) [[unlikely]] return; }
L_002A8058:
    st32((c.r[18].w[0] + 140u), c.r[2].w[0]);
    c.budget -= 1;
L_002A805C:
    st32((c.r[18].w[0] + 128u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 23800u), 0u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[18].w[0] + 16u);
    st32((c.r[1].w[0] - 24384u), 0u);
    set32(c.r[5], c.r[5].w[0] - 29024u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[1].w[0] - 24376u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 24368u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 24360u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A80A4u); st32((c.r[1].w[0] - 24352u), 0u);  if (depth < kMaxDepth) unit_0012(c, 45u, depth + 1u); else { c.pc = 0x001487B0u; return; } if (c.pc != 0x002A80A4u) [[unlikely]] return; }
L_002A80A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A80ACu); set32(c.r[4], ld32((c.r[29].w[0] + 76u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002A80ACu) [[unlikely]] return; }
L_002A80AC:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002A80B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002A80D0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A80F4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_003F(c, 299u, depth + 1u); else { c.pc = 0x001FF0D0u; return; } if (c.pc != 0x002A80F4u) [[unlikely]] return; }
L_002A80F4:
    set32(c.r[3], ld32((c.r[19].w[0] + 100u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24392u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 1832u)));
    st32((c.r[19].w[0] + 120u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[19].w[0] + 100u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8120u); set32(c.r[4], ld32((c.r[1].w[0] - 24392u)));  if (depth < kMaxDepth) unit_006B(c, 88u, depth + 1u); else { c.pc = 0x002AD340u; return; } if (c.pc != 0x002A8120u) [[unlikely]] return; }
L_002A8120:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8128u);  if (depth < kMaxDepth) unit_0049(c, 26u, depth + 1u); else { c.pc = 0x002245F0u; return; } if (c.pc != 0x002A8128u) [[unlikely]] return; }
L_002A8128:
    set32(c.r[5], ld32((c.r[19].w[0] + 100u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8138u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 28u, depth + 1u); else { c.pc = 0x00224620u; return; } if (c.pc != 0x002A8138u) [[unlikely]] return; }
L_002A8138:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 28288u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A8150; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8150u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_001A(c, 40u, depth + 1u); else { c.pc = 0x00168910u; return; } if (c.pc != 0x002A8150u) [[unlikely]] return; }
L_002A8150:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 28288u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 28296u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A8170; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8170u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_001A(c, 40u, depth + 1u); else { c.pc = 0x00168910u; return; } if (c.pc != 0x002A8170u) [[unlikely]] return; }
L_002A8170:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 28296u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 28304u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A8190; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8190u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_001A(c, 40u, depth + 1u); else { c.pc = 0x00168910u; return; } if (c.pc != 0x002A8190u) [[unlikely]] return; }
L_002A8190:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 28304u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24392u)));
    set32(c.r[18], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A81ACu); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002A81ACu) [[unlikely]] return; }
L_002A81AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A81CC; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002A81C4; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 1;
L_002A81C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A81CCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 38u, depth + 1u); else { c.pc = 0x001688D0u; return; } if (c.pc != 0x002A81CCu) [[unlikely]] return; }
L_002A81CC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 28288u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A81E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[3].w[0] + 24u)));  if (t) { goto L_002A81EC; } }
L_002A81E8:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A81EC:
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A81F8u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002A81F8u) [[unlikely]] return; }
L_002A81F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A8218; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002A8210; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 1;
L_002A8210:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8218u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 38u, depth + 1u); else { c.pc = 0x001688D0u; return; } if (c.pc != 0x002A8218u) [[unlikely]] return; }
L_002A8218:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], 0u + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8228u); st32((c.r[1].w[0] + 28296u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002A8228u) [[unlikely]] return; }
L_002A8228:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A8248; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002A8240; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 1;
L_002A8240:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8248u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 38u, depth + 1u); else { c.pc = 0x001688D0u; return; } if (c.pc != 0x002A8248u) [[unlikely]] return; }
L_002A8248:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8254u); st32((c.r[1].w[0] + 28304u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x002A8254u) [[unlikely]] return; }
L_002A8254:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8268u); st32((c.r[29].w[0] + 108u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002A8268u) [[unlikely]] return; }
L_002A8268:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24392u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8278u); set32(c.r[17], ld32((c.r[2].w[0] + 92u)));  if (depth < kMaxDepth) unit_0049(c, 26u, depth + 1u); else { c.pc = 0x002245F0u; return; } if (c.pc != 0x002A8278u) [[unlikely]] return; }
L_002A8278:
    set32(c.r[5], ld32((c.r[19].w[0] + 100u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8288u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 37u, depth + 1u); else { c.pc = 0x00224950u; return; } if (c.pc != 0x002A8288u) [[unlikely]] return; }
L_002A8288:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8290u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x002A8290u) [[unlikely]] return; }
L_002A8290:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25559u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A82A4u); set32(c.r[20], 0u + 1u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x002A82A4u) [[unlikely]] return; }
L_002A82A4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] - 25559u), static_cast<std::uint8_t>(c.r[20].w[0]));
    set32(c.r[2], ld32((c.r[19].w[0] + 100u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_002A82CC; } }
    set32(c.r[6], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 1;
L_002A82CC:
    set32(c.r[5], ld32((c.r[19].w[0] + 56u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A82D8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 272u, depth + 1u); else { c.pc = 0x00166C30u; return; } if (c.pc != 0x002A82D8u) [[unlikely]] return; }
L_002A82D8:
    c.r[16].d[0] = c.r[16].d[0] << 56;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A82E4u); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x002A82E4u) [[unlikely]] return; }
L_002A82E4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] - 25559u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A82F8u); set32(c.r[4], ld32((c.r[29].w[0] + 108u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002A82F8u) [[unlikely]] return; }
L_002A82F8:
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[19].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[3], 0u + 212u);
    st8((c.r[19].w[0] + 52u), static_cast<std::uint8_t>(0u));
    st8((c.r[19].w[0] + 53u), static_cast<std::uint8_t>(0u));
    st32((c.r[19].w[0] + 136u), 0u);
    st32((c.r[19].w[0] + 132u), 0u);
    set32(c.r[4], ld32((c.r[19].w[0] + 120u)));
    set32(c.r[2], ld32((c.r[1].w[0] - 24392u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 344u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8334u); st32((c.r[19].w[0] + 124u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009D(c, 348u, depth + 1u); else { c.pc = 0x00377730u; return; } if (c.pc != 0x002A8334u) [[unlikely]] return; }
L_002A8334:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002A8360:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8374u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 299u, depth + 1u); else { c.pc = 0x001FF0D0u; return; } if (c.pc != 0x002A8374u) [[unlikely]] return; }
L_002A8374:
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24392u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 1832u)));
    st32((c.r[16].w[0] + 120u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] - 24392u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A83A0u); set32(c.r[5], ld32((c.r[16].w[0] + 100u)));  if (depth < kMaxDepth) unit_006B(c, 88u, depth + 1u); else { c.pc = 0x002AD340u; return; } if (c.pc != 0x002A83A0u) [[unlikely]] return; }
L_002A83A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A83B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A83C8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 26u, depth + 1u); else { c.pc = 0x002245F0u; return; } if (c.pc != 0x002A83C8u) [[unlikely]] return; }
L_002A83C8:
    set32(c.r[5], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A83D8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 28u, depth + 1u); else { c.pc = 0x00224620u; return; } if (c.pc != 0x002A83D8u) [[unlikely]] return; }
L_002A83D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24392u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A83ECu); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002A83ECu) [[unlikely]] return; }
L_002A83EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A840C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002A8404; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 1;
L_002A8404:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A840Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 38u, depth + 1u); else { c.pc = 0x001688D0u; return; } if (c.pc != 0x002A840Cu) [[unlikely]] return; }
L_002A840C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 28288u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A8428; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[3].w[0] + 24u)));  if (t) { goto L_002A842C; } }
L_002A8428:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A842C:
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8438u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002A8438u) [[unlikely]] return; }
L_002A8438:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A8458; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002A8450; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 1;
L_002A8450:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8458u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 38u, depth + 1u); else { c.pc = 0x001688D0u; return; } if (c.pc != 0x002A8458u) [[unlikely]] return; }
L_002A8458:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], 0u + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8468u); st32((c.r[1].w[0] + 28296u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002A8468u) [[unlikely]] return; }
L_002A8468:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A8488; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002A8480; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 1;
L_002A8480:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8488u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 38u, depth + 1u); else { c.pc = 0x001688D0u; return; } if (c.pc != 0x002A8488u) [[unlikely]] return; }
L_002A8488:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 28304u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], 0u + 2u);
    st8((c.r[1].w[0] + 8983u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st8((c.r[1].w[0] + 8982u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002A84DC; } }
    set32(c.r[2], ld32((c.r[1].w[0] - 24392u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 92u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A84C4u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_0019(c, 322u, depth + 1u); else { c.pc = 0x00167460u; return; } if (c.pc != 0x002A84C4u) [[unlikely]] return; }
L_002A84C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A850C; } }
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 8982u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002A850C; } }
L_002A84DC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002A84F4; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002A850C; } }
L_002A84F4:
    set32(c.r[2], ld32((c.r[1].w[0] - 27648u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 200u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002A850C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st8((c.r[1].w[0] + 8982u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002A850C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8514u);  if (depth < kMaxDepth) unit_0040(c, 213u, depth + 1u); else { c.pc = 0x00202800u; return; } if (c.pc != 0x002A8514u) [[unlikely]] return; }
L_002A8514:
    set32(c.r[4], 0u + 512u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8520u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 112u, depth + 1u); else { c.pc = 0x00201C80u; return; } if (c.pc != 0x002A8520u) [[unlikely]] return; }
L_002A8520:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8528u);  if (depth < kMaxDepth) unit_0040(c, 104u, depth + 1u); else { c.pc = 0x00201C00u; return; } if (c.pc != 0x002A8528u) [[unlikely]] return; }
L_002A8528:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8530u);  if (depth < kMaxDepth) unit_0040(c, 108u, depth + 1u); else { c.pc = 0x00201C40u; return; } if (c.pc != 0x002A8530u) [[unlikely]] return; }
L_002A8530:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8538u);  if (depth < kMaxDepth) unit_0040(c, 116u, depth + 1u); else { c.pc = 0x00201CE0u; return; } if (c.pc != 0x002A8538u) [[unlikely]] return; }
L_002A8538:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8540u);  if (depth < kMaxDepth) unit_0040(c, 100u, depth + 1u); else { c.pc = 0x00201BC0u; return; } if (c.pc != 0x002A8540u) [[unlikely]] return; }
L_002A8540:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8548u);  if (depth < kMaxDepth) unit_0040(c, 96u, depth + 1u); else { c.pc = 0x00201B70u; return; } if (c.pc != 0x002A8548u) [[unlikely]] return; }
L_002A8548:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8550u);  if (depth < kMaxDepth) unit_0040(c, 92u, depth + 1u); else { c.pc = 0x00201B20u; return; } if (c.pc != 0x002A8550u) [[unlikely]] return; }
L_002A8550:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8558u);  if (depth < kMaxDepth) unit_0040(c, 120u, depth + 1u); else { c.pc = 0x00201D20u; return; } if (c.pc != 0x002A8558u) [[unlikely]] return; }
L_002A8558:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8560u);  if (depth < kMaxDepth) unit_0040(c, 124u, depth + 1u); else { c.pc = 0x00201D60u; return; } if (c.pc != 0x002A8560u) [[unlikely]] return; }
L_002A8560:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8568u); set32(c.r[4], 0u + 192u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002A8568u) [[unlikely]] return; }
L_002A8568:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002A8578; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8578u);  if (depth < kMaxDepth) unit_003D(c, 91u, depth + 1u); else { c.pc = 0x001F5640u; return; } if (c.pc != 0x002A8578u) [[unlikely]] return; }
L_002A8578:
    st32((c.r[16].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8584u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002A8584u) [[unlikely]] return; }
L_002A8584:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002A8594; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8594u);  if (depth < kMaxDepth) unit_003D(c, 100u, depth + 1u); else { c.pc = 0x001F5840u; return; } if (c.pc != 0x002A8594u) [[unlikely]] return; }
L_002A8594:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A859Cu); st32((c.r[16].w[0] + 72u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003E(c, 210u, depth + 1u); else { c.pc = 0x001FA700u; return; } if (c.pc != 0x002A859Cu) [[unlikely]] return; }
L_002A859C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A85A4u);  if (depth < kMaxDepth) unit_003F(c, 185u, depth + 1u); else { c.pc = 0x001FD8A0u; return; } if (c.pc != 0x002A85A4u) [[unlikely]] return; }
L_002A85A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A85ACu);  if (depth < kMaxDepth) unit_003F(c, 224u, depth + 1u); else { c.pc = 0x001FDE20u; return; } if (c.pc != 0x002A85ACu) [[unlikely]] return; }
L_002A85AC:
    st32((c.r[16].w[0] + 48u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A85D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002A86FC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 7632u);
    set32(c.r[3], c.r[3].w[0] + 7672u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002A861C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A861Cu); set32(c.r[4], 0u + 255u);  if (depth < kMaxDepth) unit_002C(c, 23u, depth + 1u); else { c.pc = 0x001B0420u; return; } if (c.pc != 0x002A861Cu) [[unlikely]] return; }
L_002A861C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 24400u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 112u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A8648; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A8648; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8648u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A8648u) [[unlikely]] return; }
L_002A8648:
    st32((c.r[17].w[0] + 112u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 116u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A8670; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A8670; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8670u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A8670u) [[unlikely]] return; }
L_002A8670:
    st32((c.r[17].w[0] + 116u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 140u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A8698; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A8698; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8698u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A8698u) [[unlikely]] return; }
L_002A8698:
    st32((c.r[17].w[0] + 140u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 128u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A86C0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A86C0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A86C0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A86C0u) [[unlikely]] return; }
L_002A86C0:
    st32((c.r[17].w[0] + 128u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A86D8u); st8((c.r[1].w[0] + 25658u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0012(c, 42u, depth + 1u); else { c.pc = 0x00148750u; return; } if (c.pc != 0x002A86D8u) [[unlikely]] return; }
L_002A86D8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A86E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 31u, depth + 1u); else { c.pc = 0x00140700u; return; } if (c.pc != 0x002A86E4u) [[unlikely]] return; }
L_002A86E4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002A8700; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A86FCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002A86FCu) [[unlikely]] return; }
L_002A86FC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002A8700:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A8720:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A8730:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = c.r[6].d[0] & 255ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_002A8750; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002A87A8; } }
L_002A8750:
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002A87A8; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_002A8774; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002A87A4; } }
L_002A8774:
    set32(c.r[3], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002A87A4; } }
    set32(c.r[2], ld32((c.r[1].w[0] - 24392u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8790u); set32(c.r[4], ld32((c.r[2].w[0] + 92u)));  if (depth < kMaxDepth) unit_0019(c, 293u, depth + 1u); else { c.pc = 0x00166FD0u; return; } if (c.pc != 0x002A8790u) [[unlikely]] return; }
L_002A8790:
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002A87A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A87A4u); set32(c.r[4], ld32((c.r[1].w[0] - 27648u)));  if (depth < kMaxDepth) unit_0054(c, 529u, depth + 1u); else { c.pc = 0x002535F0u; return; } if (c.pc != 0x002A87A4u) [[unlikely]] return; }
L_002A87A4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002A87A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A87C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 48u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A8B04; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_002A8810; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002A8840; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_002A8810:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002A883C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8820u); set32(c.r[4], ld32((c.r[1].w[0] - 27648u)));  if (depth < kMaxDepth) unit_0054(c, 520u, depth + 1u); else { c.pc = 0x00253490u; return; } if (c.pc != 0x002A8820u) [[unlikely]] return; }
L_002A8820:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24392u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8830u); set32(c.r[4], ld32((c.r[2].w[0] + 92u)));  if (depth < kMaxDepth) unit_0019(c, 293u, depth + 1u); else { c.pc = 0x00166FD0u; return; } if (c.pc != 0x002A8830u) [[unlikely]] return; }
L_002A8830:
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st8((c.r[1].w[0] - 23696u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002A883C:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A8840:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002A8AE0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 464u)));
    set32(c.r[2], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002A8AE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8874u);  if (depth < kMaxDepth) unit_0048(c, 328u, depth + 1u); else { c.pc = 0x00223900u; return; } if (c.pc != 0x002A8874u) [[unlikely]] return; }
L_002A8874:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A8AD4; } }
    st32((c.r[16].w[0] + 1028u), 0u);
    c.f[0] = 0u;
    set32(c.r[2], ld32((c.r[16].w[0] + 240u)));
    c.f[20] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A88A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[24] = ld32((c.r[2].w[0] + 8u));  if (t) { goto L_002A88A8; } }
L_002A88A0:
    c.f[20] = c.f[20] ^ fp::kSign;
    c.f[24] = ld32((c.r[2].w[0] + 8u));
    c.budget -= 2;
L_002A88A8:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[24]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A88C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[23] = ld32((c.r[16].w[0] + 224u));  if (t) { goto L_002A88CC; } }
L_002A88C4:
    c.f[24] = c.f[24] ^ fp::kSign;
    c.f[23] = ld32((c.r[16].w[0] + 224u));
    c.budget -= 2;
L_002A88CC:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[23]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A88E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[22] = ld32((c.r[16].w[0] + 232u));  if (t) { goto L_002A88F0; } }
L_002A88E8:
    c.f[23] = c.f[23] ^ fp::kSign;
    c.f[22] = ld32((c.r[16].w[0] + 232u));
    c.budget -= 2;
L_002A88F0:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A890C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x436F0000u);  if (t) { goto L_002A8914; } }
L_002A890C:
    c.f[22] = c.f[22] ^ fp::kSign;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x436F0000u);
    c.budget -= 2;
L_002A8914:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[24]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002A8A10; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8934u); set32(c.r[4], ld32((c.r[1].w[0] - 24392u)));  if (depth < kMaxDepth) unit_006B(c, 208u, depth + 1u); else { c.pc = 0x002AF240u; return; } if (c.pc != 0x002A8934u) [[unlikely]] return; }
L_002A8934:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002A89F4; } }
    set32(c.r[2], 0u + 1602u);
    set32(c.r[3], ld32((c.r[1].w[0] - 24392u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 100u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1602u);  if (t) { goto L_002A8964; } }
    set32(c.r[2], 0u + 1612u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002A89D0; } }
    set32(c.r[2], 0u + 1602u);
    c.budget -= 1;
L_002A8964:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1612u);  if (t) { goto L_002A8978; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x429A0000u);
    c.f[21] = c.r[2].w[0];
    set32(c.r[2], 0u + 1612u);
    c.budget -= 3;
L_002A8978:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);  if (t) { goto L_002A8984; } }
    c.f[21] = c.r[2].w[0];
    c.budget -= 1;
L_002A8984:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[21]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A89AC; } }
    c.f[1] = ld32((c.r[16].w[0] + 228u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 28760u));
    c.f[1] = c.f[1] ^ fp::kSign;
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1028u), c.f[0]);  if (t) { goto L_002A8AE0; } }
L_002A89AC:
    c.f[2] = ld32((c.r[16].w[0] + 228u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1400000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[1].w[0] - 28760u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1028u), c.f[0]);  if (t) { goto L_002A8AE0; } }
L_002A89D0:
    c.f[2] = ld32((c.r[16].w[0] + 228u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1400000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[1].w[0] - 28760u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1028u), c.f[0]);  if (t) { goto L_002A8AE0; } }
L_002A89F4:
    c.f[1] = ld32((c.r[16].w[0] + 228u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 28760u));
    c.f[1] = c.f[1] ^ fp::kSign;
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1028u), c.f[0]);  if (t) { goto L_002A8AE0; } }
L_002A8A10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8A18u); set32(c.r[4], ld32((c.r[1].w[0] - 24392u)));  if (depth < kMaxDepth) unit_006B(c, 208u, depth + 1u); else { c.pc = 0x002AF240u; return; } if (c.pc != 0x002A8A18u) [[unlikely]] return; }
L_002A8A18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A8A88; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A40000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[24]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);  if (t) { goto L_002A8A8C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x436F0000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[24]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[4] = fp::sub(c.f[24], c.f[1]);  if (t) { goto L_002A8A88; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x431D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1400000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[3] = c.r[3].w[0];
    c.f[2] = c.r[2].w[0];
    fpu_div(c, 3u, c.f[4], c.f[3]);
    c.f[1] = ld32((c.r[16].w[0] + 228u));
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.f[0] = ld32((c.r[1].w[0] - 28760u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1028u), c.f[0]);  if (t) { goto L_002A8AE0; } }
L_002A8A88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.budget -= 1;
L_002A8A8C:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);  if (t) { goto L_002A8AAC; } }
    fpu_compare(c, fp::key(c.f[24]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A8AE0; } }
L_002A8AAC:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[23]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A8AE0; } }
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);  if (t) { goto L_002A8AE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1028u), c.r[2].w[0]);  if (t) { goto L_002A8AE0; } }
L_002A8AD4:
    st32((c.r[16].w[0] + 1028u), 0u);
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 370u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002A8AE0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A8840u | kUnwind; return; } goto L_002A8840; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 9068u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8B04u); st32((c.r[1].w[0] + 31456u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003D(c, 179u, depth + 1u); else { c.pc = 0x001F68A0u; return; } if (c.pc != 0x002A8B04u) [[unlikely]] return; }
L_002A8B04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002A8B30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 48u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002A8B54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8B4Cu);  if (depth < kMaxDepth) unit_006A(c, 104u, depth + 1u); else { c.pc = 0x002A8D30u; return; } if (c.pc != 0x002A8B4Cu) [[unlikely]] return; }
L_002A8B4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_002A8B98; } }
L_002A8B54:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002A8B68; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_002A8B78; } }
L_002A8B68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8B70u);  if (depth < kMaxDepth) unit_006A(c, 153u, depth + 1u); else { c.pc = 0x002A9540u; return; } if (c.pc != 0x002A8B70u) [[unlikely]] return; }
L_002A8B70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A8B94; } }
L_002A8B78:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002A8B8C; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002A8B94; } }
L_002A8B8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8B94u);  if (depth < kMaxDepth) unit_006A(c, 203u, depth + 1u); else { c.pc = 0x002A9C90u; return; } if (c.pc != 0x002A8B94u) [[unlikely]] return; }
L_002A8B94:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002A8B98:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002A8BA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8BBCu); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0017(c, 125u, depth + 1u); else { c.pc = 0x0015D850u; return; } if (c.pc != 0x002A8BBCu) [[unlikely]] return; }
L_002A8BBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8BC4u);  if (depth < kMaxDepth) unit_003F(c, 299u, depth + 1u); else { c.pc = 0x001FF0D0u; return; } if (c.pc != 0x002A8BC4u) [[unlikely]] return; }
L_002A8BC4:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_002A8C0C; } }
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8BE0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x002A8BE0u) [[unlikely]] return; }
L_002A8BE0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_002A8BFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8BF4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 152u, depth + 1u); else { c.pc = 0x0015DC50u; return; } if (c.pc != 0x002A8BF4u) [[unlikely]] return; }
L_002A8BF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A8C00; } }
L_002A8BFC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A8C00:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 23800u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
L_002A8C0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8C14u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x002A8C14u) [[unlikely]] return; }
L_002A8C14:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_002A8C30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8C28u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 152u, depth + 1u); else { c.pc = 0x0015DC50u; return; } if (c.pc != 0x002A8C28u) [[unlikely]] return; }
L_002A8C28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A8C34; } }
L_002A8C30:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A8C34:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    st32((c.r[1].w[0] - 24384u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8C48u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x002A8C48u) [[unlikely]] return; }
L_002A8C48:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_002A8C64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8C5Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 152u, depth + 1u); else { c.pc = 0x0015DC50u; return; } if (c.pc != 0x002A8C5Cu) [[unlikely]] return; }
L_002A8C5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A8C68; } }
L_002A8C64:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A8C68:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    st32((c.r[1].w[0] - 24376u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8C7Cu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x002A8C7Cu) [[unlikely]] return; }
L_002A8C7C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_002A8C98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8C90u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 152u, depth + 1u); else { c.pc = 0x0015DC50u; return; } if (c.pc != 0x002A8C90u) [[unlikely]] return; }
L_002A8C90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A8C9C; } }
L_002A8C98:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A8C9C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    st32((c.r[1].w[0] - 24368u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8CB0u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x002A8CB0u) [[unlikely]] return; }
L_002A8CB0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_002A8CCC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8CC4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 152u, depth + 1u); else { c.pc = 0x0015DC50u; return; } if (c.pc != 0x002A8CC4u) [[unlikely]] return; }
L_002A8CC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A8CD0; } }
L_002A8CCC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A8CD0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    st32((c.r[1].w[0] - 24360u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8CE4u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x002A8CE4u) [[unlikely]] return; }
L_002A8CE4:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_002A8D00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8CF8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 152u, depth + 1u); else { c.pc = 0x0015DC50u; return; } if (c.pc != 0x002A8CF8u) [[unlikely]] return; }
L_002A8CF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A8D04; } }
L_002A8D00:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A8D04:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    st32((c.r[1].w[0] - 24352u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8D18u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x002A8D18u) [[unlikely]] return; }
L_002A8D18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A8D30:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 140u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A8D68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8D68u);  if (depth < kMaxDepth) unit_0068(c, 213u, depth + 1u); else { c.pc = 0x002A32D0u; return; } if (c.pc != 0x002A8D68u) [[unlikely]] return; }
L_002A8D68:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 26840u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A951C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8D80u);  if (depth < kMaxDepth) unit_0012(c, 2u, depth + 1u); else { c.pc = 0x00148010u; return; } if (c.pc != 0x002A8D80u) [[unlikely]] return; }
L_002A8D80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A951C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 20144u)));
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st64((c.r[1].w[0] + 416u), c.r[2].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8DC0u); st64((c.r[1].w[0] + 784u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_003E(c, 234u, depth + 1u); else { c.pc = 0x001FA9F0u; return; } if (c.pc != 0x002A8DC0u) [[unlikely]] return; }
L_002A8DC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8DC8u);  if (depth < kMaxDepth) unit_003F(c, 299u, depth + 1u); else { c.pc = 0x001FF0D0u; return; } if (c.pc != 0x002A8DC8u) [[unlikely]] return; }
L_002A8DC8:
    set32(c.r[3], ld32((c.r[19].w[0] + 60u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002A8DEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8DE0u); set32(c.r[4], 0u + 7u);  if (depth < kMaxDepth) unit_002B(c, 465u, depth + 1u); else { c.pc = 0x001AF560u; return; } if (c.pc != 0x002A8DE0u) [[unlikely]] return; }
L_002A8DE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 32u);  if (t) { goto L_002A8E40; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002A8DEC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_002A8E08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8DFCu); set32(c.r[4], 0u + 6u);  if (depth < kMaxDepth) unit_002B(c, 465u, depth + 1u); else { c.pc = 0x001AF560u; return; } if (c.pc != 0x002A8DFCu) [[unlikely]] return; }
L_002A8DFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A8E3C; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_002A8E08:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 5u);  if (t) { goto L_002A8E20; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 4u);  if (t) { goto L_002A8E34; } }
    set32(c.r[4], 0u + 5u);
    c.budget -= 1;
L_002A8E20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8E28u);  if (depth < kMaxDepth) unit_002B(c, 465u, depth + 1u); else { c.pc = 0x001AF560u; return; } if (c.pc != 0x002A8E28u) [[unlikely]] return; }
L_002A8E28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A8E3C; } }
    set32(c.r[4], 0u + 4u);
    c.budget -= 1;
L_002A8E34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8E3Cu);  if (depth < kMaxDepth) unit_002B(c, 465u, depth + 1u); else { c.pc = 0x001AF560u; return; } if (c.pc != 0x002A8E3Cu) [[unlikely]] return; }
L_002A8E3C:
    set32(c.r[4], 0u + 32u);
    c.budget -= 1;
L_002A8E40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8E48u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002A8E48u) [[unlikely]] return; }
L_002A8E48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A8E58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8E58u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 113u, depth + 1u); else { c.pc = 0x001F5B70u; return; } if (c.pc != 0x002A8E58u) [[unlikely]] return; }
L_002A8E58:
    st32((c.r[19].w[0] + 68u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24392u)));
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[18], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 6;
L_002A8E70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[20], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A8F00; } }
    set32(c.r[2], c.r[17].w[0] + 1u);
    set32(c.r[5], 0u + 1700u);
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8EA0u); c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x002A8EA0u) [[unlikely]] return; }
L_002A8EA0:
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A8EA4:
    set32(c.r[4], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8EB8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A8EB8u) [[unlikely]] return; }
L_002A8EB8:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].d[0] < static_cast<std::uint64_t>(50ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A8EA4u | kUnwind; return; } goto L_002A8EA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8ED0u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002A8ED0u) [[unlikely]] return; }
L_002A8ED0:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_002A8EE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8EE4u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 250u, depth + 1u); else { c.pc = 0x00227230u; return; } if (c.pc != 0x002A8EE4u) [[unlikely]] return; }
L_002A8EE4:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002A8EE8:
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8EF8u); set32(c.r[4], c.r[2].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x002A8EF8u) [[unlikely]] return; }
L_002A8EF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8F00u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 255u, depth + 1u); else { c.pc = 0x002272E0u; return; } if (c.pc != 0x002A8F00u) [[unlikely]] return; }
L_002A8F00:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A8E70u | kUnwind; return; } goto L_002A8E70; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 60u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002A8F2C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 27648u)));
    st16((c.r[2].w[0] + 84u), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.budget -= 3;
L_002A8F2C:
    set32(c.r[3], ld32((c.r[19].w[0] + 60u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002A912C; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[16].w[0] - 13040u);
    c.budget -= 3;
L_002A8F48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[20].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A8FE8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[20].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + 8384u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 266u));
    set32(c.r[2], 0u + 10u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_002A8F88; } }
    breakpoint(c, 0x002A8F84u);
    c.budget -= 1;
L_002A8F88:
    c.r[7].d[0] = c.lo.d[0];
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 10u);  if (t) { goto L_002A8FCC; } }
    set32(c.r[2], c.r[5].w[0] << 2);
    c.budget -= 1;
L_002A8FA0:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);  if (t) { goto L_002A8FB4; } }
    breakpoint(c, 0x002A8FB0u);
    c.budget -= 1;
L_002A8FB4:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[7].d[0];  if (t) { goto L_002A8FC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002A8FD8; } }
L_002A8FC8:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_002A8FCC:
    c.r[2].d[0] = c.r[5].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[5].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A8FA0u | kUnwind; return; } goto L_002A8FA0; } }
L_002A8FD8:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002A8FE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A8FE8u);  if (depth < kMaxDepth) unit_0037(c, 31u, depth + 1u); else { c.pc = 0x001DC580u; return; } if (c.pc != 0x002A8FE8u) [[unlikely]] return; }
L_002A8FE8:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A8F48u | kUnwind; return; } goto L_002A8F48; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], 0u + 84u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_002A9044; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A9024; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], ld32((c.r[1].w[0] + 28320u)));
    st32((c.r[2].w[0] + 1300u), c.r[3].w[0]);
    c.budget -= 4;
L_002A9024:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], ld32((c.r[1].w[0] + 28324u)));
    st32((c.r[2].w[0] + 1300u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 28324u)));
    st32((c.r[2].w[0] + 1304u), c.r[3].w[0]);
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 8;
L_002A9044:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[21].sd[0] < 4ll ? 1ull : 0ull;  if (t) { goto L_002A9124; } }
L_002A904C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[21].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[20], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_002A911C; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_002A9074; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_002A9074:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43500000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9080u); c.r[5].d[0] = c.r[2].d[0] | 21071ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x002A9080u) [[unlikely]] return; }
L_002A9080:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A9090; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_002A9094; } }
L_002A9090:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A9094:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A911C; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 308u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A911C; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_002A90E0; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 1284u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A90DC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A90DC; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A90DCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A90DCu) [[unlikely]] return; }
L_002A90DC:
    st32((c.r[20].w[0] + 1284u), 0u);
    c.budget -= 1;
L_002A90E0:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_002A912C; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 1288u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A9114; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A9114; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9114u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A9114u) [[unlikely]] return; }
L_002A9114:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 1288u), 0u);  if (t) { goto L_002A912C; } }
L_002A911C:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 2;
L_002A9124:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A904Cu | kUnwind; return; } goto L_002A904C; } }
L_002A912C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9134u);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x002A9134u) [[unlikely]] return; }
L_002A9134:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9148u); st32((c.r[29].w[0] + 124u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002A9148u) [[unlikely]] return; }
L_002A9148:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24392u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9158u); set32(c.r[16], ld32((c.r[2].w[0] + 92u)));  if (depth < kMaxDepth) unit_0049(c, 26u, depth + 1u); else { c.pc = 0x002245F0u; return; } if (c.pc != 0x002A9158u) [[unlikely]] return; }
L_002A9158:
    set32(c.r[5], ld32((c.r[19].w[0] + 100u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9168u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 37u, depth + 1u); else { c.pc = 0x00224950u; return; } if (c.pc != 0x002A9168u) [[unlikely]] return; }
L_002A9168:
    set32(c.r[2], ld32((c.r[19].w[0] + 100u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_002A918C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[2].w[0] + 20u)));  if (t) { goto L_002A918C; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A918C:
    set32(c.r[5], ld32((c.r[19].w[0] + 56u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9198u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 272u, depth + 1u); else { c.pc = 0x00166C30u; return; } if (c.pc != 0x002A9198u) [[unlikely]] return; }
L_002A9198:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A91A0u); set32(c.r[4], ld32((c.r[29].w[0] + 124u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002A91A0u) [[unlikely]] return; }
L_002A91A0:
    set32(c.r[3], ld32((c.r[19].w[0] + 60u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002A94E0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[18].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8896u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 27648u)));
    c.r[1].d[0] = c.r[18].sd[0] < 26ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; st32((c.r[2].w[0] + 236u), 0u);  if (t) { goto L_002A91F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A91D4u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x002A91D4u) [[unlikely]] return; }
L_002A91D4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25571u)));
    set32(c.r[2], 0u + 4u);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    if (c.r[3].d[0] == 0) c.r[18].d[0] = c.r[2].d[0];
    c.budget -= 7;
L_002A91F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 27648u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 200u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A9244; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24392u)));
    set32(c.r[5], 0u + 6u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st8((c.r[1].w[0] + 8982u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[2].w[0] + 92u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A922Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0019(c, 345u, depth + 1u); else { c.pc = 0x00167960u; return; } if (c.pc != 0x002A922Cu) [[unlikely]] return; }
L_002A922C:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A923Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A923Cu) [[unlikely]] return; }
L_002A923C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A93D8; } }
L_002A9244:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A924Cu);  if (depth < kMaxDepth) unit_0048(c, 328u, depth + 1u); else { c.pc = 0x00223900u; return; } if (c.pc != 0x002A924Cu) [[unlikely]] return; }
L_002A924C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A93D8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8896u)));
    c.r[1].d[0] = c.r[2].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002A93D8; } }
    c.r[16].d[0] = c.r[17].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[16].sd[0] <= 0;  if (t) { goto L_002A93D8; } }
    c.r[1].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002A93D8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], 0u + 999u);
    set32(c.r[3], ld32((c.r[1].w[0] - 27648u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 232u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002A93D8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24392u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 92u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A92B8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0019(c, 345u, depth + 1u); else { c.pc = 0x00167960u; return; } if (c.pc != 0x002A92B8u) [[unlikely]] return; }
L_002A92B8:
    st32((c.r[19].w[0] + 80u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], ld32((c.r[19].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[1].w[0] - 27648u)));
    st32((c.r[2].w[0] + 236u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 80u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A92D8u); set32(c.r[5], 0u + 11008u);  if (depth < kMaxDepth) unit_0077(c, 271u, depth + 1u); else { c.pc = 0x002DED80u; return; } if (c.pc != 0x002A92D8u) [[unlikely]] return; }
L_002A92D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 27648u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 232u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002A932C; } }
    c.r[2].d[0] = c.r[2].sd[0] < 1000ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A9314; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 80u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9304u); set32(c.r[5], 0u + 11776u);  if (depth < kMaxDepth) unit_0077(c, 271u, depth + 1u); else { c.pc = 0x002DED80u; return; } if (c.pc != 0x002A9304u) [[unlikely]] return; }
L_002A9304:
    set32(c.r[4], ld32((c.r[19].w[0] + 80u)));
    set32(c.r[5], 0u + 7u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9314u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0077(c, 273u, depth + 1u); else { c.pc = 0x002DEDE0u; return; } if (c.pc != 0x002A9314u) [[unlikely]] return; }
L_002A9314:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[19].w[0] + 80u)));
    set32(c.r[3], ld32((c.r[1].w[0] - 27648u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 232u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 56u), c.r[3].w[0]);  if (t) { goto L_002A93B4; } }
L_002A932C:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0;  if (t) { goto L_002A9344; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 28320u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A9390; } }
L_002A9344:
    set32(c.r[4], ld32((c.r[19].w[0] + 80u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9350u); set32(c.r[5], 0u + 11776u);  if (depth < kMaxDepth) unit_0077(c, 271u, depth + 1u); else { c.pc = 0x002DED80u; return; } if (c.pc != 0x002A9350u) [[unlikely]] return; }
L_002A9350:
    set32(c.r[4], ld32((c.r[19].w[0] + 80u)));
    set32(c.r[5], 0u + 7u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9360u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0077(c, 273u, depth + 1u); else { c.pc = 0x002DEDE0u; return; } if (c.pc != 0x002A9360u) [[unlikely]] return; }
L_002A9360:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 8982u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A9380; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 80u)));
    set32(c.r[3], c.r[18].w[0] + 1026u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 56u), c.r[3].w[0]);  if (t) { goto L_002A93B4; } }
L_002A9380:
    set32(c.r[2], ld32((c.r[19].w[0] + 80u)));
    set32(c.r[3], c.r[18].w[0] + 1000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 56u), c.r[3].w[0]);  if (t) { goto L_002A93B4; } }
L_002A9390:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A93A8; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 80u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 56u), c.r[3].w[0]);  if (t) { goto L_002A93B4; } }
L_002A93A8:
    set32(c.r[2], ld32((c.r[19].w[0] + 80u)));
    set32(c.r[3], 0u + 53u);
    st32((c.r[2].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 3;
L_002A93B4:
    set32(c.r[4], ld32((c.r[19].w[0] + 80u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A93C8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A93C8u) [[unlikely]] return; }
L_002A93C8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], ld32((c.r[1].w[0] - 27648u)));
    st32((c.r[2].w[0] + 232u), c.r[3].w[0]);
    c.budget -= 4;
L_002A93D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A93E0u);  if (depth < kMaxDepth) unit_0048(c, 328u, depth + 1u); else { c.pc = 0x00223900u; return; } if (c.pc != 0x002A93E0u) [[unlikely]] return; }
L_002A93E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A940C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8896u)));
    set32(c.r[2], c.r[3].w[0] - 44u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002A940C; } }
    set32(c.r[2], 0u + 46u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002A94E0; } }
L_002A940C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8896u)));
    c.r[1].d[0] = c.r[2].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002A94E0; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A94E0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], 0u + 999u);
    set32(c.r[3], ld32((c.r[1].w[0] - 27648u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 232u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002A94E0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24392u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 92u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9460u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0019(c, 345u, depth + 1u); else { c.pc = 0x00167960u; return; } if (c.pc != 0x002A9460u) [[unlikely]] return; }
L_002A9460:
    st32((c.r[19].w[0] + 80u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], ld32((c.r[19].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[1].w[0] - 27648u)));
    st32((c.r[2].w[0] + 236u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 80u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9480u); set32(c.r[5], 0u + 11776u);  if (depth < kMaxDepth) unit_0077(c, 271u, depth + 1u); else { c.pc = 0x002DED80u; return; } if (c.pc != 0x002A9480u) [[unlikely]] return; }
L_002A9480:
    set32(c.r[4], ld32((c.r[19].w[0] + 80u)));
    set32(c.r[5], 0u + 7u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9490u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0077(c, 273u, depth + 1u); else { c.pc = 0x002DEDE0u; return; } if (c.pc != 0x002A9490u) [[unlikely]] return; }
L_002A9490:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 8982u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A94B0; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 80u)));
    set32(c.r[3], c.r[18].w[0] + 1026u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 56u), c.r[3].w[0]);  if (t) { goto L_002A94BC; } }
L_002A94B0:
    set32(c.r[2], ld32((c.r[19].w[0] + 80u)));
    set32(c.r[3], c.r[18].w[0] + 1000u);
    st32((c.r[2].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 3;
L_002A94BC:
    set32(c.r[4], ld32((c.r[19].w[0] + 80u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A94D0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A94D0u) [[unlikely]] return; }
L_002A94D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], ld32((c.r[1].w[0] - 27648u)));
    st32((c.r[2].w[0] + 232u), c.r[3].w[0]);
    c.budget -= 4;
L_002A94E0:
    st8((c.r[19].w[0] + 52u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st8((c.r[19].w[0] + 53u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 212u);
    st32((c.r[19].w[0] + 136u), 0u);
    st32((c.r[19].w[0] + 132u), 0u);
    set32(c.r[4], ld32((c.r[19].w[0] + 120u)));
    set32(c.r[2], ld32((c.r[1].w[0] - 24392u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 344u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9514u); st32((c.r[19].w[0] + 124u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009D(c, 348u, depth + 1u); else { c.pc = 0x00377730u; return; } if (c.pc != 0x002A9514u) [[unlikely]] return; }
L_002A9514:
    set32(c.r[3], 0u + 1u);
    st32((c.r[19].w[0] + 48u), c.r[3].w[0]);
    c.budget -= 2;
L_002A951C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002A9540:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A955Cu); set32(c.r[4], ld32((c.r[4].w[0] + 140u)));  if (depth < kMaxDepth) unit_0068(c, 213u, depth + 1u); else { c.pc = 0x002A32D0u; return; } if (c.pc != 0x002A955Cu) [[unlikely]] return; }
L_002A955C:
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_002A96B8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002A95CC; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 124u)));
    set32(c.r[2], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002A95CC; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A959C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002A95CC; } }
L_002A959C:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 52u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A95C8; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 88u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A95C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A95BCu); set32(c.r[4], ld32((c.r[3].w[0] + 1472u)));  if (depth < kMaxDepth) unit_0029(c, 351u, depth + 1u); else { c.pc = 0x001A7FE0u; return; } if (c.pc != 0x002A95BCu) [[unlikely]] return; }
L_002A95BC:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A95CC; } }
L_002A95C8:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A95CC:
    set32(c.r[4], ld32((c.r[17].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A95F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A95E0u);  if (depth < kMaxDepth) unit_0073(c, 409u, depth + 1u); else { c.pc = 0x002CFCC0u; return; } if (c.pc != 0x002A95E0u) [[unlikely]] return; }
L_002A95E0:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A95F0; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A95F0:
    set32(c.r[2], ld32((c.r[17].w[0] + 128u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A9614; } }
    c.r[3].d[0] = ld8((c.r[2].w[0] + 72u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 128u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A9614; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A9614:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A961Cu);  if (depth < kMaxDepth) unit_002B(c, 379u, depth + 1u); else { c.pc = 0x001AEE20u; return; } if (c.pc != 0x002A961Cu) [[unlikely]] return; }
L_002A961C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002A9628; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A9628:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9630u);  if (depth < kMaxDepth) unit_00A7(c, 73u, depth + 1u); else { c.pc = 0x0039D700u; return; } if (c.pc != 0x002A9630u) [[unlikely]] return; }
L_002A9630:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002A963C; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A963C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9644u);  if (depth < kMaxDepth) unit_006A(c, 191u, depth + 1u); else { c.pc = 0x002A9A10u; return; } if (c.pc != 0x002A9644u) [[unlikely]] return; }
L_002A9644:
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] & 255ull;  if (t) { goto L_002A965C; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] & 255ull;
    c.budget -= 2;
L_002A965C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002A99F8; } }
    set32(c.r[2], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[17].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] - 24392u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9680u); set32(c.r[4], ld32((c.r[2].w[0] + 92u)));  if (depth < kMaxDepth) unit_0019(c, 287u, depth + 1u); else { c.pc = 0x00166E80u; return; } if (c.pc != 0x002A9680u) [[unlikely]] return; }
L_002A9680:
    st8((c.r[17].w[0] + 64u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9690u); st8((c.r[17].w[0] + 152u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_006A(c, 322u, depth + 1u); else { c.pc = 0x002AAC10u; return; } if (c.pc != 0x002A9690u) [[unlikely]] return; }
L_002A9690:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9698u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 331u, depth + 1u); else { c.pc = 0x002AADB0u; return; } if (c.pc != 0x002A9698u) [[unlikely]] return; }
L_002A9698:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A96A0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 339u, depth + 1u); else { c.pc = 0x002AAED0u; return; } if (c.pc != 0x002A96A0u) [[unlikely]] return; }
L_002A96A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A96A8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 346u, depth + 1u); else { c.pc = 0x002AAFF0u; return; } if (c.pc != 0x002A96A8u) [[unlikely]] return; }
L_002A96A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A96B0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 354u, depth + 1u); else { c.pc = 0x002AB130u; return; } if (c.pc != 0x002A96B0u) [[unlikely]] return; }
L_002A96B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002A99FC; } }
L_002A96B8:
    set32(c.r[3], ld32((c.r[17].w[0] + 140u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0]; set32(c.r[3], 0u + 5u);  if (t) { goto L_002A96F4; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002A99F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A96DCu);  if (depth < kMaxDepth) unit_006A(c, 33u, depth + 1u); else { c.pc = 0x002A8360u; return; } if (c.pc != 0x002A96DCu) [[unlikely]] return; }
L_002A96DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A96E4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 36u, depth + 1u); else { c.pc = 0x002A83B0u; return; } if (c.pc != 0x002A96E4u) [[unlikely]] return; }
L_002A96E4:
    set32(c.r[3], ld32((c.r[17].w[0] + 148u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 148u), c.r[3].w[0]);  if (t) { goto L_002A99F8; } }
L_002A96F4:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002A9984; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9704u);  if (depth < kMaxDepth) unit_003F(c, 268u, depth + 1u); else { c.pc = 0x001FE620u; return; } if (c.pc != 0x002A9704u) [[unlikely]] return; }
L_002A9704:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A970Cu);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x002A970Cu) [[unlikely]] return; }
L_002A970C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9720u); st32((c.r[29].w[0] + 108u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002A9720u) [[unlikely]] return; }
L_002A9720:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[3], ld32((c.r[1].w[0] - 24392u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], ld32((c.r[3].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_002A974C; } }
    set32(c.r[6], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_002A974C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9758u); set32(c.r[4], ld32((c.r[1].w[0] + 26176u)));  if (depth < kMaxDepth) unit_0024(c, 187u, depth + 1u); else { c.pc = 0x001916D0u; return; } if (c.pc != 0x002A9758u) [[unlikely]] return; }
L_002A9758:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24400u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 128u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 30u);  if (t) { goto L_002A9770; } }
    st32((c.r[3].w[0] + 92u), c.r[2].w[0]);
    c.budget -= 1;
L_002A9770:
    set32(c.r[3], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_002A9808; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], 0u + 212u);
    set32(c.r[5], ld32((c.r[1].w[0] - 24400u)));
    set32(c.r[4], 0u + 1768u);
    set32(c.r[5], ld32((c.r[5].w[0] + 120u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24392u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A97A8u); set32(c.r[16], c.r[2].w[0] + 136u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002A97A8u) [[unlikely]] return; }
L_002A97A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A97E4; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 208u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[6], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[1].w[0] - 23800u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A97E4u); set32(c.r[5], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0073(c, 350u, depth + 1u); else { c.pc = 0x002CF490u; return; } if (c.pc != 0x002A97E4u) [[unlikely]] return; }
L_002A97E4:
    st32((c.r[17].w[0] + 112u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A97F0u); set32(c.r[4], 0u + 544u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002A97F0u) [[unlikely]] return; }
L_002A97F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002A9800; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9800u);  if (depth < kMaxDepth) unit_0074(c, 236u, depth + 1u); else { c.pc = 0x002D2BB0u; return; } if (c.pc != 0x002A9800u) [[unlikely]] return; }
L_002A9800:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 116u), c.r[2].w[0]);  if (t) { goto L_002A9928; } }
L_002A9808:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 544u);  if (t) { goto L_002A9830; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9818u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002A9818u) [[unlikely]] return; }
L_002A9818:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002A9828; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9828u);  if (depth < kMaxDepth) unit_0074(c, 236u, depth + 1u); else { c.pc = 0x002D2BB0u; return; } if (c.pc != 0x002A9828u) [[unlikely]] return; }
L_002A9828:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 116u), c.r[2].w[0]);  if (t) { goto L_002A9928; } }
L_002A9830:
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { goto L_002A984C; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002A9928; } }
L_002A984C:
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[5].w[0] - 17696u);
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
L_002A9858:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A9858u | kUnwind; return; } goto L_002A9858; } }
    c.f[0] = ld32((c.r[5].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], 0u + 1999u);
    st32((c.r[4].w[0]), c.f[0]);
    set32(c.r[3], ld32((c.r[1].w[0] - 27648u)));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 86u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002A98B4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 104u));
    c.r[1].d[0] = c.r[2].sd[0] < 13ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], 0u + 1768u);  if (t) { goto L_002A98B8; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 3;
L_002A98B4:
    set32(c.r[4], 0u + 1768u);
    c.budget -= 1;
L_002A98B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A98C0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002A98C0u) [[unlikely]] return; }
L_002A98C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A98D8; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 56u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A98D8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 350u, depth + 1u); else { c.pc = 0x002CF490u; return; } if (c.pc != 0x002A98D8u) [[unlikely]] return; }
L_002A98D8:
    st32((c.r[17].w[0] + 112u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27648u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 210u)));
    c.budget -= 6;
    { const bool t = c.r[5].sd[0] < 0; set32(c.r[6], 0u + 128u);  if (t) { goto L_002A98F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A98F8u);  if (depth < kMaxDepth) unit_0054(c, 501u, depth + 1u); else { c.pc = 0x00253260u; return; } if (c.pc != 0x002A98F8u) [[unlikely]] return; }
L_002A98F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9900u);  if (depth < kMaxDepth) unit_0048(c, 328u, depth + 1u); else { c.pc = 0x00223900u; return; } if (c.pc != 0x002A9900u) [[unlikely]] return; }
L_002A9900:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_002A9928; } }
    set32(c.r[2], 0u + 39u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8896u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 42u);  if (t) { goto L_002A9928; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 301u);  if (t) { goto L_002A9928; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9928u);  if (depth < kMaxDepth) unit_00AB(c, 264u, depth + 1u); else { c.pc = 0x003ADF30u; return; } if (c.pc != 0x002A9928u) [[unlikely]] return; }
L_002A9928:
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_002A9970; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 48u);  if (t) { goto L_002A996C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A994Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002A994Cu) [[unlikely]] return; }
L_002A994C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002A995C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A995Cu);  if (depth < kMaxDepth) unit_006D(c, 190u, depth + 1u); else { c.pc = 0x002B5FA0u; return; } if (c.pc != 0x002A995Cu) [[unlikely]] return; }
L_002A995C:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A996Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A996Cu) [[unlikely]] return; }
L_002A996C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_002A9970:
    st32((c.r[17].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A997Cu); set32(c.r[4], ld32((c.r[29].w[0] + 108u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002A997Cu) [[unlikely]] return; }
L_002A997C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A99F8; } }
L_002A9984:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 144u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_002A99F8; } }
    set32(c.r[3], ld32((c.r[1].w[0] + 26176u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002A99EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A99A4u);  if (depth < kMaxDepth) unit_006A(c, 191u, depth + 1u); else { c.pc = 0x002A9A10u; return; } if (c.pc != 0x002A99A4u) [[unlikely]] return; }
L_002A99A4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26176u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A99B4u); c.r[16].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0024(c, 263u, depth + 1u); else { c.pc = 0x00191FE0u; return; } if (c.pc != 0x002A99B4u) [[unlikely]] return; }
L_002A99B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[16].d[0] & 255ull;  if (t) { goto L_002A99EC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A99EC; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 148u)));
    c.r[1].d[0] = c.r[3].sd[0] < 240ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002A99E0; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 108u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A99EC; } }
L_002A99E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A99E8u); set32(c.r[4], ld32((c.r[17].w[0] + 140u)));  if (depth < kMaxDepth) unit_0068(c, 226u, depth + 1u); else { c.pc = 0x002A3500u; return; } if (c.pc != 0x002A99E8u) [[unlikely]] return; }
L_002A99E8:
    st8((c.r[17].w[0] + 144u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002A99EC:
    set32(c.r[3], ld32((c.r[17].w[0] + 148u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 148u), c.r[3].w[0]);
    c.budget -= 3;
L_002A99F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002A99FC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002A9A10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 100u)));
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] <= 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002A9A48; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002A9A4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A9AD8; } }
L_002A9A48:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A9A4C:
    set32(c.r[2], ld32((c.r[1].w[0] - 24392u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[2].w[0] + 92u)));  if (t) { goto L_002A9AC8; } }
L_002A9A58:
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.r[3].d[0] = c.r[17].d[0] & 65535ull;
    set32(c.r[16], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A9AC4; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[2], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002A9AC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9A8Cu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x002A9A8Cu) [[unlikely]] return; }
L_002A9A8C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25559u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A9AC4; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 64u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002A9AC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_002A9ADC; } }
L_002A9AC4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002A9AC8:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 64u));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A9A58u | kUnwind; return; } goto L_002A9A58; } }
L_002A9AD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002A9ADC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002A9AF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[1].w[0] - 24392u)));
    set32(c.r[8], ld32((c.r[2].w[0] + 92u)));
    c.r[6].d[0] = ld16((c.r[8].w[0] + 64u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002A9B5C; } }
L_002A9B14:
    set32(c.r[2], ld32((c.r[8].w[0] + 60u)));
    c.r[5].d[0] = c.r[7].d[0] & 65535ull;
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A9B58; } }
    set32(c.r[5], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002A9B58; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 44u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9B50u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A9B50u) [[unlikely]] return; }
L_002A9B50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_002A9B98; } }
L_002A9B58:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_002A9B5C:
    c.r[2].d[0] = c.r[7].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A9B14u | kUnwind; return; } goto L_002A9B14; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A9B90; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 44u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9B88u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A9B88u) [[unlikely]] return; }
L_002A9B88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A9B94; } }
L_002A9B90:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A9B94:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002A9B98:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002A9BA0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[1].w[0] - 24392u)));
    set32(c.r[18], ld32((c.r[2].w[0] + 92u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002A9C58; } }
L_002A9BCC:
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.r[3].d[0] = c.r[17].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002A9C54; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002A9C54; } }
    set32(c.r[2], ld32((c.r[1].w[0] - 24392u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 92u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9C08u); c.r[19].d[0] = ld16((c.r[16].w[0] + 24u));  if (depth < kMaxDepth) unit_0019(c, 315u, depth + 1u); else { c.pc = 0x00167360u; return; } if (c.pc != 0x002A9C08u) [[unlikely]] return; }
L_002A9C08:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002A9C54; } }
    set32(c.r[2], ld32((c.r[1].w[0] - 24392u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 92u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9C24u); c.r[19].d[0] = ld16((c.r[16].w[0] + 26u));  if (depth < kMaxDepth) unit_0019(c, 316u, depth + 1u); else { c.pc = 0x00167380u; return; } if (c.pc != 0x002A9C24u) [[unlikely]] return; }
L_002A9C24:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002A9C4C; } }
    set32(c.r[2], ld32((c.r[1].w[0] - 24392u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9C3Cu); set32(c.r[4], ld32((c.r[2].w[0] + 92u)));  if (depth < kMaxDepth) unit_0019(c, 316u, depth + 1u); else { c.pc = 0x00167380u; return; } if (c.pc != 0x002A9C3Cu) [[unlikely]] return; }
L_002A9C3C:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = ld16((c.r[16].w[0] + 26u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002A9C54; } }
L_002A9C4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002A9C68; } }
L_002A9C54:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002A9C58:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 64u));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A9BCCu | kUnwind; return; } goto L_002A9BCC; } }
L_002A9C68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002A9C90:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 132u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[1].w[0] - 24392u)));
    set32(c.r[20], ld32((c.r[4].w[0] + 92u)));
    c.budget -= 14;
    { const bool t = c.r[3].sd[0] <= 0; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_002A9D08; } }
    set32(c.r[4], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 132u), c.r[4].w[0]);
    set32(c.r[3], 0u + 4u);
    set32(c.r[4], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002A9CF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9CE8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 148u, depth + 1u); else { c.pc = 0x0013D450u; return; } if (c.pc != 0x002A9CE8u) [[unlikely]] return; }
L_002A9CE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9CF0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 288u, depth + 1u); else { c.pc = 0x00166EB0u; return; } if (c.pc != 0x002A9CF0u) [[unlikely]] return; }
L_002A9CF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[19].d[0] & 255ull;  if (t) { goto L_002AA008; } }
L_002A9CF8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002AA004; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002AA004; } }
L_002A9D08:
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A9D20; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 132u), c.r[3].w[0]);  if (t) { goto L_002AA004; } }
L_002A9D20:
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002A9D3C; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_002A9FC0; } }
L_002A9D3C:
    set32(c.r[2], 0u + 3u);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[18], 0u + 90u);  if (t) { goto L_002A9D64; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002A9D64; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002A9D68; } }
L_002A9D64:
    set32(c.r[18], 0u + 10u);
    c.budget -= 1;
L_002A9D68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9D70u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 293u, depth + 1u); else { c.pc = 0x00166FD0u; return; } if (c.pc != 0x002A9D70u) [[unlikely]] return; }
L_002A9D70:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002A9D90; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9D88u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 315u, depth + 1u); else { c.pc = 0x002AAB00u; return; } if (c.pc != 0x002A9D88u) [[unlikely]] return; }
L_002A9D88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002A9D9C; } }
L_002A9D90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002A9DD0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002A9D9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9DA4u);  if (depth < kMaxDepth) unit_006A(c, 369u, depth + 1u); else { c.pc = 0x002AB390u; return; } if (c.pc != 0x002A9DA4u) [[unlikely]] return; }
L_002A9DA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A9DD0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A9DC4; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 52u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A9DCC; } }
L_002A9DC4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002A9DD0; } }
L_002A9DCC:
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002A9DD0:
    set32(c.r[3], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A9E7C; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002A9DF8; } }
    st8((c.r[20].w[0] + 66u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002A9E7C; } }
L_002A9DF8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x46410000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 31088u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9E0Cu); c.r[5].d[0] = c.r[2].d[0] | 17477ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x002A9E0Cu) [[unlikely]] return; }
L_002A9E0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002A9E20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_002A9E20; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A9E20:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[3], 0u + 34u);  if (t) { goto L_002A9E74; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9E40u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0040(c, 36u, depth + 1u); else { c.pc = 0x00200AB0u; return; } if (c.pc != 0x002A9E40u) [[unlikely]] return; }
L_002A9E40:
    set32(c.r[4], 0u + 1u);
    st8((c.r[17].w[0] + 60u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 60u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_002A9E70; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 40u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x7F000000u);
    set32(c.r[3], 0u + 30u);
    st32((c.r[17].w[0] + 48u), c.r[5].w[0]);
    st32((c.r[17].w[0] + 44u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 52u), 0u);
    st32((c.r[17].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 7;
L_002A9E70:
    set32(c.r[3], 0u + 34u);
    c.budget -= 1;
L_002A9E74:
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 132u), c.r[3].w[0]);
    c.budget -= 2;
L_002A9E7C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002A9F18; } }
    set32(c.r[3], c.r[18].w[0] + 4u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x46410000u);
    st32((c.r[16].w[0] + 132u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 31088u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9EA0u); c.r[5].d[0] = c.r[2].d[0] | 17477ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x002A9EA0u) [[unlikely]] return; }
L_002A9EA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002A9EB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_002A9EB4; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A9EB4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002A9F18; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A9F18; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9EE0u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0040(c, 36u, depth + 1u); else { c.pc = 0x00200AB0u; return; } if (c.pc != 0x002A9EE0u) [[unlikely]] return; }
L_002A9EE0:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 60u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 60u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002A9F10; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7F000000u);
    st32((c.r[17].w[0] + 48u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 44u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 52u), 0u);
    st32((c.r[17].w[0] + 56u), c.r[18].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
L_002A9F10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9F18u);  if (depth < kMaxDepth) unit_006A(c, 376u, depth + 1u); else { c.pc = 0x002AB660u; return; } if (c.pc != 0x002A9F18u) [[unlikely]] return; }
L_002A9F18:
    set32(c.r[3], ld32((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AA004; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 136u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 136u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 112u)));
    st8((c.r[3].w[0] + 1480u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 152u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A9F64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9F4Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 198u, depth + 1u); else { c.pc = 0x002A9BA0u; return; } if (c.pc != 0x002A9F4Cu) [[unlikely]] return; }
L_002A9F4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A9F64; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 112u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 1480u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 152u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
L_002A9F64:
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[3], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002AA004; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9F7Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 363u, depth + 1u); else { c.pc = 0x002AB280u; return; } if (c.pc != 0x002A9F7Cu) [[unlikely]] return; }
L_002A9F7C:
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002A9FA4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A9FA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002A9FA4; } }
L_002A9FA0:
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002A9FA4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 20144u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AA004; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 24u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_002AA004; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_002A9FC0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002A9FD4; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002AA004; } }
L_002A9FD4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9FE0u); set32(c.r[4], ld32((c.r[1].w[0] - 27648u)));  if (depth < kMaxDepth) unit_0054(c, 531u, depth + 1u); else { c.pc = 0x00253620u; return; } if (c.pc != 0x002A9FE0u) [[unlikely]] return; }
L_002A9FE0:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AA004; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9FF4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 288u, depth + 1u); else { c.pc = 0x00166EB0u; return; } if (c.pc != 0x002A9FF4u) [[unlikely]] return; }
L_002A9FF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A9FFCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 148u, depth + 1u); else { c.pc = 0x0013D450u; return; } if (c.pc != 0x002A9FFCu) [[unlikely]] return; }
L_002A9FFC:
    set32(c.r[3], 0u + 4u);
    st32((c.r[16].w[0] + 132u), c.r[3].w[0]);
    c.budget -= 2;
L_002AA004:
    c.r[17].d[0] = c.r[19].d[0] & 255ull;
    c.budget -= 1;
L_002AA008:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_002AA120; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002AA11C; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 64u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002AA11C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA030u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 194u, depth + 1u); else { c.pc = 0x002A9AF0u; return; } if (c.pc != 0x002AA030u) [[unlikely]] return; }
L_002AA030:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_002AA048; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002AA11C; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_002AA048:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA050u);  if (depth < kMaxDepth) unit_000F(c, 148u, depth + 1u); else { c.pc = 0x0013D450u; return; } if (c.pc != 0x002AA050u) [[unlikely]] return; }
L_002AA050:
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x46410000u);
    st8((c.r[16].w[0] + 64u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 31088u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA06Cu); c.r[5].d[0] = c.r[2].d[0] | 17477ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x002AA06Cu) [[unlikely]] return; }
L_002AA06C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002AA080; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_002AA080; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AA080:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002AA11C; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA0A0u); set32(c.r[8], 0u + 127u);  if (depth < kMaxDepth) unit_0040(c, 36u, depth + 1u); else { c.pc = 0x00200AB0u; return; } if (c.pc != 0x002AA0A0u) [[unlikely]] return; }
L_002AA0A0:
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], 0u + 3u);
    st8((c.r[18].w[0] + 60u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002AA0CC; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_002AA0CC; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002AA0F8; } }
L_002AA0CC:
    c.r[4].d[0] = ld8((c.r[18].w[0] + 60u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002AA11C; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[3], 0u + 10u);
    st32((c.r[18].w[0] + 48u), c.r[4].w[0]);
    st32((c.r[18].w[0] + 44u), 0u);
    st32((c.r[18].w[0] + 52u), 0u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 56u), c.r[3].w[0]);  if (t) { goto L_002AA11C; } }
L_002AA0F8:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 60u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_002AA11C; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[3], 0u + 30u);
    st32((c.r[18].w[0] + 48u), c.r[4].w[0]);
    st32((c.r[18].w[0] + 44u), 0u);
    st32((c.r[18].w[0] + 52u), 0u);
    st32((c.r[18].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 6;
L_002AA11C:
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_002AA120:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[5].d[0];  if (t) { goto L_002AAADC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AA14C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AA14C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA14Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AA14Cu) [[unlikely]] return; }
L_002AA14C:
    st32((c.r[16].w[0] + 112u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AA174; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AA174; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA174u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AA174u) [[unlikely]] return; }
L_002AA174:
    st32((c.r[16].w[0] + 116u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002AA340; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002AA1F0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24392u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 92u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[17], c.r[2].w[0] + 92u);  if (t) { goto L_002AA1D4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AA1D4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA1D4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AA1D4u) [[unlikely]] return; }
L_002AA1D4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA1E0u); st32((c.r[17].w[0]), 0u);  if (depth < kMaxDepth) unit_006A(c, 9u, depth + 1u); else { c.pc = 0x002A80D0u; return; } if (c.pc != 0x002AA1E0u) [[unlikely]] return; }
L_002AA1E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA1E8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 148u, depth + 1u); else { c.pc = 0x0013D450u; return; } if (c.pc != 0x002AA1E8u) [[unlikely]] return; }
L_002AA1E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AA338; } }
L_002AA1F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24392u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 92u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[17], c.r[2].w[0] + 92u);  if (t) { goto L_002AA21C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AA21C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA21Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AA21Cu) [[unlikely]] return; }
L_002AA21C:
    set32(c.r[4], 0u + 255u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA228u); st32((c.r[17].w[0]), 0u);  if (depth < kMaxDepth) unit_002C(c, 23u, depth + 1u); else { c.pc = 0x001B0420u; return; } if (c.pc != 0x002AA228u) [[unlikely]] return; }
L_002AA228:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA230u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003D(c, 165u, depth + 1u); else { c.pc = 0x001F6740u; return; } if (c.pc != 0x002AA230u) [[unlikely]] return; }
L_002AA230:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA238u);  if (depth < kMaxDepth) unit_0040(c, 244u, depth + 1u); else { c.pc = 0x00202D00u; return; } if (c.pc != 0x002AA238u) [[unlikely]] return; }
L_002AA238:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA240u);  if (depth < kMaxDepth) unit_003F(c, 307u, depth + 1u); else { c.pc = 0x001FF160u; return; } if (c.pc != 0x002AA240u) [[unlikely]] return; }
L_002AA240:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA248u);  if (depth < kMaxDepth) unit_003F(c, 299u, depth + 1u); else { c.pc = 0x001FF0D0u; return; } if (c.pc != 0x002AA248u) [[unlikely]] return; }
L_002AA248:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA250u);  if (depth < kMaxDepth) unit_003F(c, 268u, depth + 1u); else { c.pc = 0x001FE620u; return; } if (c.pc != 0x002AA250u) [[unlikely]] return; }
L_002AA250:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA258u);  if (depth < kMaxDepth) unit_003F(c, 299u, depth + 1u); else { c.pc = 0x001FF0D0u; return; } if (c.pc != 0x002AA258u) [[unlikely]] return; }
L_002AA258:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA260u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_002B(c, 465u, depth + 1u); else { c.pc = 0x001AF560u; return; } if (c.pc != 0x002AA260u) [[unlikely]] return; }
L_002AA260:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA268u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 33u, depth + 1u); else { c.pc = 0x002A8360u; return; } if (c.pc != 0x002AA268u) [[unlikely]] return; }
L_002AA268:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24392u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 2412u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002AA328; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 140u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AA2A0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AA2A0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA2A0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AA2A0u) [[unlikely]] return; }
L_002AA2A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA2A8u); st32((c.r[16].w[0] + 140u), 0u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x002AA2A8u) [[unlikely]] return; }
L_002AA2A8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 25569u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002AA2F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA2C4u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x002AA2C4u) [[unlikely]] return; }
L_002AA2C4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25571u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_002AA2E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AA2EC; } }
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_002AA2E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 64u);  if (t) { goto L_002AA2F4; } }
L_002AA2EC:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AA2F0:
    set32(c.r[4], 0u + 64u);
    c.budget -= 1;
L_002AA2F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA2FCu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002AA2FCu) [[unlikely]] return; }
L_002AA2FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AA314; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA314u); set32(c.r[6], 0u + 512u);  if (depth < kMaxDepth) unit_0069(c, 35u, depth + 1u); else { c.pc = 0x002A44A0u; return; } if (c.pc != 0x002AA314u) [[unlikely]] return; }
L_002AA314:
    st32((c.r[16].w[0] + 140u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 144u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 148u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
L_002AA328:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA330u);  if (depth < kMaxDepth) unit_006A(c, 36u, depth + 1u); else { c.pc = 0x002A83B0u; return; } if (c.pc != 0x002AA330u) [[unlikely]] return; }
L_002AA330:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA338u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 148u, depth + 1u); else { c.pc = 0x0013D450u; return; } if (c.pc != 0x002AA338u) [[unlikely]] return; }
L_002AA338:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_002AAAE0; } }
L_002AA340:
    set32(c.r[18], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], 0u + 3u);
    set32(c.r[17], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 5;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; set32(c.r[19], 0u + 2u);  if (t) { goto L_002AA374; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AA374; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    c.r[1].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002AA374; } }
    set32(c.r[19], ld32((c.r[2].w[0] + 60u)));
    c.budget -= 1;
L_002AA374:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA37Cu);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x002AA37Cu) [[unlikely]] return; }
L_002AA37C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA390u); st32((c.r[29].w[0] + 108u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002AA390u) [[unlikely]] return; }
L_002AA390:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA398u);  if (depth < kMaxDepth) unit_0049(c, 24u, depth + 1u); else { c.pc = 0x002245B0u; return; } if (c.pc != 0x002AA398u) [[unlikely]] return; }
L_002AA398:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 24392u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AA3B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA3B0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_006B(c, 30u, depth + 1u); else { c.pc = 0x002AC840u; return; } if (c.pc != 0x002AA3B0u) [[unlikely]] return; }
L_002AA3B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 24392u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AA3DC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AA3DC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA3DCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AA3DCu) [[unlikely]] return; }
L_002AA3DC:
    st32((c.r[16].w[0] + 68u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AA404; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AA404; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA404u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AA404u) [[unlikely]] return; }
L_002AA404:
    st32((c.r[16].w[0] + 72u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AA42C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AA42C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA42Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AA42Cu) [[unlikely]] return; }
L_002AA42C:
    st32((c.r[16].w[0] + 76u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AA454; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AA454; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA454u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AA454u) [[unlikely]] return; }
L_002AA454:
    st32((c.r[16].w[0] + 80u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AA47C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AA47C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA47Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AA47Cu) [[unlikely]] return; }
L_002AA47C:
    st32((c.r[16].w[0] + 128u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002AA4C4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[1].w[0] + 28288u)));
    st32((c.r[2].w[0]), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 28288u)));
    st32((c.r[2].w[0] + 4u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 28296u)));
    st32((c.r[2].w[0]), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 28304u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA4C4u); st32((c.r[2].w[0]), 0u);  if (depth < kMaxDepth) unit_003D(c, 165u, depth + 1u); else { c.pc = 0x001F6740u; return; } if (c.pc != 0x002AA4C4u) [[unlikely]] return; }
L_002AA4C4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 28288u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AA4DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA4DCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_001A(c, 40u, depth + 1u); else { c.pc = 0x00168910u; return; } if (c.pc != 0x002AA4DCu) [[unlikely]] return; }
L_002AA4DC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 28288u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 28296u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AA4FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA4FCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_001A(c, 40u, depth + 1u); else { c.pc = 0x00168910u; return; } if (c.pc != 0x002AA4FCu) [[unlikely]] return; }
L_002AA4FC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 28296u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 28304u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AA51C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA51Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_001A(c, 40u, depth + 1u); else { c.pc = 0x00168910u; return; } if (c.pc != 0x002AA51Cu) [[unlikely]] return; }
L_002AA51C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA528u); st32((c.r[1].w[0] + 28304u), 0u);  if (depth < kMaxDepth) unit_0040(c, 244u, depth + 1u); else { c.pc = 0x00202D00u; return; } if (c.pc != 0x002AA528u) [[unlikely]] return; }
L_002AA528:
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002AA540; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA540u); set32(c.r[4], 0u + 255u);  if (depth < kMaxDepth) unit_002C(c, 23u, depth + 1u); else { c.pc = 0x001B0420u; return; } if (c.pc != 0x002AA540u) [[unlikely]] return; }
L_002AA540:
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AA564; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AA564; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA564u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AA564u) [[unlikely]] return; }
L_002AA564:
    st32((c.r[16].w[0] + 112u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AA58C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AA58C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA58Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AA58Cu) [[unlikely]] return; }
L_002AA58C:
    st32((c.r[16].w[0] + 116u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 140u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AA5B4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AA5B4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA5B4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AA5B4u) [[unlikely]] return; }
L_002AA5B4:
    st32((c.r[16].w[0] + 140u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 23800u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AA5D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA5D0u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002AA5D0u) [[unlikely]] return; }
L_002AA5D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 23800u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 24384u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AA5F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA5F0u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002AA5F0u) [[unlikely]] return; }
L_002AA5F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 24384u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 24376u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AA610; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA610u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002AA610u) [[unlikely]] return; }
L_002AA610:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 24376u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 24368u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AA630; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA630u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002AA630u) [[unlikely]] return; }
L_002AA630:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 24368u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 24360u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AA650; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA650u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002AA650u) [[unlikely]] return; }
L_002AA650:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 24360u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 24352u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AA670; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA670u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002AA670u) [[unlikely]] return; }
L_002AA670:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 24352u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; st8((c.r[1].w[0] + 8982u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002AA698; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA698u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AA698u) [[unlikely]] return; }
L_002AA698:
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AA6B0; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[2], 0u + 5u);  if (t) { goto L_002AA6E0; } }
L_002AA6B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA6B8u);  if (depth < kMaxDepth) unit_0011(c, 203u, depth + 1u); else { c.pc = 0x00146F00u; return; } if (c.pc != 0x002AA6B8u) [[unlikely]] return; }
L_002AA6B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA6C0u);  if (depth < kMaxDepth) unit_003F(c, 307u, depth + 1u); else { c.pc = 0x001FF160u; return; } if (c.pc != 0x002AA6C0u) [[unlikely]] return; }
L_002AA6C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA6C8u);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x002AA6C8u) [[unlikely]] return; }
L_002AA6C8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA6D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 61u, depth + 1u); else { c.pc = 0x00140C20u; return; } if (c.pc != 0x002AA6D4u) [[unlikely]] return; }
L_002AA6D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002AA7B4; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 1;
L_002AA6E0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002AA718; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA6F0u);  if (depth < kMaxDepth) unit_0011(c, 203u, depth + 1u); else { c.pc = 0x00146F00u; return; } if (c.pc != 0x002AA6F0u) [[unlikely]] return; }
L_002AA6F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA6F8u);  if (depth < kMaxDepth) unit_003F(c, 307u, depth + 1u); else { c.pc = 0x001FF160u; return; } if (c.pc != 0x002AA6F8u) [[unlikely]] return; }
L_002AA6F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA700u);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x002AA700u) [[unlikely]] return; }
L_002AA700:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA70Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 61u, depth + 1u); else { c.pc = 0x00140C20u; return; } if (c.pc != 0x002AA70Cu) [[unlikely]] return; }
L_002AA70C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AA7B0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002AA718:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002AA730; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA728u);  if (depth < kMaxDepth) unit_003F(c, 306u, depth + 1u); else { c.pc = 0x001FF150u; return; } if (c.pc != 0x002AA728u) [[unlikely]] return; }
L_002AA728:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AA7B0; } }
L_002AA730:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_002AA74C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA740u);  if (depth < kMaxDepth) unit_003F(c, 306u, depth + 1u); else { c.pc = 0x001FF150u; return; } if (c.pc != 0x002AA740u) [[unlikely]] return; }
L_002AA740:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AA7B0; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_002AA74C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 6u);  if (t) { goto L_002AA768; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA75Cu);  if (depth < kMaxDepth) unit_003F(c, 306u, depth + 1u); else { c.pc = 0x001FF150u; return; } if (c.pc != 0x002AA75Cu) [[unlikely]] return; }
L_002AA75C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AA7B0; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 1;
L_002AA768:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_002AA784; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA778u);  if (depth < kMaxDepth) unit_003F(c, 306u, depth + 1u); else { c.pc = 0x001FF150u; return; } if (c.pc != 0x002AA778u) [[unlikely]] return; }
L_002AA778:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AA7B0; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_002AA784:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002AA7B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA794u);  if (depth < kMaxDepth) unit_0011(c, 203u, depth + 1u); else { c.pc = 0x00146F00u; return; } if (c.pc != 0x002AA794u) [[unlikely]] return; }
L_002AA794:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA79Cu);  if (depth < kMaxDepth) unit_003F(c, 307u, depth + 1u); else { c.pc = 0x001FF160u; return; } if (c.pc != 0x002AA79Cu) [[unlikely]] return; }
L_002AA79C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA7A4u);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x002AA7A4u) [[unlikely]] return; }
L_002AA7A4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA7B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 61u, depth + 1u); else { c.pc = 0x00140C20u; return; } if (c.pc != 0x002AA7B0u) [[unlikely]] return; }
L_002AA7B0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AA7B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA7BCu);  if (depth < kMaxDepth) unit_0002(c, 580u, depth + 1u); else { c.pc = 0x0010BEA0u; return; } if (c.pc != 0x002AA7BCu) [[unlikely]] return; }
L_002AA7BC:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA7C8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 156u, depth + 1u); else { c.pc = 0x00101770u; return; } if (c.pc != 0x002AA7C8u) [[unlikely]] return; }
L_002AA7C8:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_002AA848; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_002AA800; } }
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA7F4u); st32((c.r[1].w[0] + 31520u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003F(c, 97u, depth + 1u); else { c.pc = 0x001FCFD0u; return; } if (c.pc != 0x002AA7F4u) [[unlikely]] return; }
L_002AA7F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AA844; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 1;
L_002AA800:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002AA844; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA81Cu); st32((c.r[29].w[0] + 104u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002AA81Cu) [[unlikely]] return; }
L_002AA81C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA824u); set32(c.r[4], 0u + 304u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002AA824u) [[unlikely]] return; }
L_002AA824:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AA83C; } }
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA83Cu); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 217u, depth + 1u); else { c.pc = 0x00341AE0u; return; } if (c.pc != 0x002AA83Cu) [[unlikely]] return; }
L_002AA83C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA844u); set32(c.r[4], ld32((c.r[29].w[0] + 104u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002AA844u) [[unlikely]] return; }
L_002AA844:
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_002AA848:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA850u);  if (depth < kMaxDepth) unit_000F(c, 148u, depth + 1u); else { c.pc = 0x0013D450u; return; } if (c.pc != 0x002AA850u) [[unlikely]] return; }
L_002AA850:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA858u); set32(c.r[4], ld32((c.r[29].w[0] + 108u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002AA858u) [[unlikely]] return; }
L_002AA858:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[3].d[0];  if (t) { goto L_002AA870; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[3].d[0];  if (t) { goto L_002AA8F4; } }
L_002AA870:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA878u);  if (depth < kMaxDepth) unit_0048(c, 328u, depth + 1u); else { c.pc = 0x00223900u; return; } if (c.pc != 0x002AA878u) [[unlikely]] return; }
L_002AA878:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AA8A8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], 0u + 39u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8896u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002AA8A8; } }
    set32(c.r[2], 0u + 42u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002AA8A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA8A8u);  if (depth < kMaxDepth) unit_00AB(c, 269u, depth + 1u); else { c.pc = 0x003ADFD0u; return; } if (c.pc != 0x002AA8A8u) [[unlikely]] return; }
L_002AA8A8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA8B4u); set32(c.r[4], ld32((c.r[1].w[0] - 27648u)));  if (depth < kMaxDepth) unit_0054(c, 476u, depth + 1u); else { c.pc = 0x00252F60u; return; } if (c.pc != 0x002AA8B4u) [[unlikely]] return; }
L_002AA8B4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[1].w[0] - 27648u)));
    st32((c.r[2].w[0] + 236u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA8D4u); st32((c.r[29].w[0] + 100u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002AA8D4u) [[unlikely]] return; }
L_002AA8D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA8DCu); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002AA8DCu) [[unlikely]] return; }
L_002AA8DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AA8EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA8ECu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 96u, depth + 1u); else { c.pc = 0x0025CA50u; return; } if (c.pc != 0x002AA8ECu) [[unlikely]] return; }
L_002AA8EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA8F4u); set32(c.r[4], ld32((c.r[29].w[0] + 100u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002AA8F4u) [[unlikely]] return; }
L_002AA8F4:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_002AA948; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_002AA944; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA918u); set32(c.r[20], 0u + 1u);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x002AA918u) [[unlikely]] return; }
L_002AA918:
    st8((c.r[2].w[0] + 689u), static_cast<std::uint8_t>(c.r[20].w[0]));
    c.r[20].d[0] = c.r[20].d[0] << 56;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA928u); c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 56);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x002AA928u) [[unlikely]] return; }
L_002AA928:
    st8((c.r[2].w[0] + 688u), static_cast<std::uint8_t>(c.r[20].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA934u); set32(c.r[20], 0u + 2u);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x002AA934u) [[unlikely]] return; }
L_002AA934:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA944u); st32((c.r[1].w[0] + 17268u), c.r[20].w[0]);  if (depth < kMaxDepth) unit_0057(c, 53u, depth + 1u); else { c.pc = 0x0025C620u; return; } if (c.pc != 0x002AA944u) [[unlikely]] return; }
L_002AA944:
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_002AA948:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[3].d[0];  if (t) { goto L_002AAADC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8898u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA964u); st8((c.r[1].w[0] + 8896u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x002AA964u) [[unlikely]] return; }
L_002AA964:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 25569u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AA9D4; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 6u);  if (t) { goto L_002AA9D8; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[4], c.r[4].w[0] + 8384u);
    c.budget -= 3;
L_002AA990:
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[6].w[0] << 5);
    set32(c.r[5], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[5].d[0] = ld16((c.r[5].w[0] + 84u));
    set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[6].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; st16((c.r[3].w[0] + 266u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AA990u | kUnwind; return; } goto L_002AA990; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA9BCu); set32(c.r[16], 0u + 2u);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x002AA9BCu) [[unlikely]] return; }
L_002AA9BC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA9CCu); st32((c.r[1].w[0] + 17268u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0057(c, 53u, depth + 1u); else { c.pc = 0x0025C620u; return; } if (c.pc != 0x002AA9CCu) [[unlikely]] return; }
L_002AA9CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AAADC; } }
L_002AA9D4:
    set32(c.r[2], 0u + 6u);
    c.budget -= 1;
L_002AA9D8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002AA9F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AA9E8u);  if (depth < kMaxDepth) unit_0090(c, 213u, depth + 1u); else { c.pc = 0x00341AA0u; return; } if (c.pc != 0x002AA9E8u) [[unlikely]] return; }
L_002AA9E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AAADC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002AA9F4:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_002AAAD4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 13000u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002AAAC0; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[6], c.r[6].w[0] + 8448u);
    set32(c.r[5], c.r[5].w[0] + 8384u);
    set32(c.r[4], 0u + 32u);
    c.budget -= 5;
L_002AAA20:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 2u);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AAA20u | kUnwind; return; } goto L_002AAA20; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[1].w[0] + 9260u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[1].w[0] + 9256u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[1].w[0] + 9264u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st8((c.r[1].w[0] + 9094u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st8((c.r[1].w[0] + 9095u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st8((c.r[1].w[0] + 9096u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st8((c.r[1].w[0] + 9097u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st8((c.r[1].w[0] + 9098u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st8((c.r[1].w[0] + 9099u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] + 8384u);
    c.budget -= 22;
L_002AAA98:
    set32(c.r[2], c.r[5].w[0] << 5);
    set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 270u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[5].sd[0] < 8ll ? 1ull : 0ull;
    st8((c.r[4].w[0] + 271u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[4].w[0] + 273u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AAA98u | kUnwind; return; } goto L_002AAA98; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002AAAC0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAACCu); st32((c.r[1].w[0] + 31520u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003F(c, 97u, depth + 1u); else { c.pc = 0x001FCFD0u; return; } if (c.pc != 0x002AAACCu) [[unlikely]] return; }
L_002AAACC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AAADC; } }
L_002AAAD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAADCu);  if (depth < kMaxDepth) unit_002A(c, 78u, depth + 1u); else { c.pc = 0x001A9020u; return; } if (c.pc != 0x002AAADCu) [[unlikely]] return; }
L_002AAADC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_002AAAE0:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002AAB00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[1].w[0] - 24392u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 92u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAB2Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 314u, depth + 1u); else { c.pc = 0x00167350u; return; } if (c.pc != 0x002AAB2Cu) [[unlikely]] return; }
L_002AAB2C:
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAB38u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 317u, depth + 1u); else { c.pc = 0x00167390u; return; } if (c.pc != 0x002AAB38u) [[unlikely]] return; }
L_002AAB38:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002AAB78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAB50u);  if (depth < kMaxDepth) unit_0019(c, 316u, depth + 1u); else { c.pc = 0x00167380u; return; } if (c.pc != 0x002AAB50u) [[unlikely]] return; }
L_002AAB50:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAB60u); set32(c.r[16], c.r[18].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0019(c, 318u, depth + 1u); else { c.pc = 0x001673A0u; return; } if (c.pc != 0x002AAB60u) [[unlikely]] return; }
L_002AAB60:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AAB78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002AAB7C; } }
L_002AAB78:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AAB7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002AABA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[1].w[0] - 24392u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 92u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_002AABC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002AABFC; } }
L_002AABC8:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 5u);  if (t) { goto L_002AABDC; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002AABF8; } }
L_002AABDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AABE4u);  if (depth < kMaxDepth) unit_0019(c, 293u, depth + 1u); else { c.pc = 0x00166FD0u; return; } if (c.pc != 0x002AABE4u) [[unlikely]] return; }
L_002AABE4:
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AABF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002AABFC; } }
L_002AABF8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002AABFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002AAC10:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[5], 0u + 212u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[3], 0u + 14u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[4].w[0] + 120u)));
    set32(c.r[4], ld32((c.r[1].w[0] - 24392u)));
    mmi::mult(c, 0, c.r[6].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 188u)));
    c.budget -= 16;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002AAD94; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002AAC58:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 28352u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AAD84; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 48u)));
    c.r[3].d[0] = c.r[5].sd[0] < 2019ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_002AAC98; } }
    c.r[1].d[0] = c.r[5].sd[0] < 2028ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 2102u);  if (t) { goto L_002AAC9C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_002AACA8; } }
L_002AAC98:
    set32(c.r[3], 0u + 2102u);
    c.budget -= 1;
L_002AAC9C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_002AACAC; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_002AACA8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_002AACAC:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_002AAD84; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x53330000u);  if (t) { goto L_002AACC0; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_002AACC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AACC8u); c.r[5].d[0] = c.r[2].d[0] | 19799ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x002AACC8u) [[unlikely]] return; }
L_002AACC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002AACD4; } }
    set32(c.r[16], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_002AACD4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002AAD84; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_002AAD04; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24392u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 92u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AACF8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0019(c, 320u, depth + 1u); else { c.pc = 0x001673D0u; return; } if (c.pc != 0x002AACF8u) [[unlikely]] return; }
L_002AACF8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[1].w[0] + 28320u)));  if (t) { goto L_002AAD20; } }
L_002AAD04:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[5].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002AAD20; } }
    set32(c.r[2], ld32((c.r[1].w[0] - 24392u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAD18u); set32(c.r[4], ld32((c.r[2].w[0] + 92u)));  if (depth < kMaxDepth) unit_0019(c, 320u, depth + 1u); else { c.pc = 0x001673D0u; return; } if (c.pc != 0x002AAD18u) [[unlikely]] return; }
L_002AAD18:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[17], ld32((c.r[1].w[0] + 28324u)));
    c.budget -= 2;
L_002AAD20:
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAD2Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 380u, depth + 1u); else { c.pc = 0x002AB710u; return; } if (c.pc != 0x002AAD2Cu) [[unlikely]] return; }
L_002AAD2C:
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    st32((c.r[2].w[0] + 32u), c.f[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAD44u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 380u, depth + 1u); else { c.pc = 0x002AB710u; return; } if (c.pc != 0x002AAD44u) [[unlikely]] return; }
L_002AAD44:
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    st32((c.r[2].w[0] + 40u), c.f[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAD5Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 380u, depth + 1u); else { c.pc = 0x002AB710u; return; } if (c.pc != 0x002AAD5Cu) [[unlikely]] return; }
L_002AAD5C:
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    st32((c.r[2].w[0] + 36u), c.f[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAD74u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 380u, depth + 1u); else { c.pc = 0x002AB710u; return; } if (c.pc != 0x002AAD74u) [[unlikely]] return; }
L_002AAD74:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    set32(c.r[19], c.r[19].w[0] + 1u);
    st32((c.r[3].w[0] + 44u), c.f[0]);
    c.budget -= 4;
L_002AAD84:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 72ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AAC58u | kUnwind; return; } goto L_002AAC58; } }
L_002AAD94:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002AADB0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 7;
L_002AADCC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 28352u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AAE9C; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[3], 0u + 2110u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002AAE9C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x53330000u);  if (t) { goto L_002AAE04; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_002AAE04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAE0Cu); c.r[5].d[0] = c.r[2].d[0] | 19799ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x002AAE0Cu) [[unlikely]] return; }
L_002AAE0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002AAE18; } }
    set32(c.r[18], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_002AAE18:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002AAE9C; } }
    set32(c.r[2], ld32((c.r[1].w[0] - 24392u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 92u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAE30u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0019(c, 320u, depth + 1u); else { c.pc = 0x001673D0u; return; } if (c.pc != 0x002AAE30u) [[unlikely]] return; }
L_002AAE30:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[19].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[17], ld32((c.r[1].w[0] + 28320u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAE48u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 382u, depth + 1u); else { c.pc = 0x002ABB50u; return; } if (c.pc != 0x002AAE48u) [[unlikely]] return; }
L_002AAE48:
    c.f[0] = ld32((c.r[2].w[0]));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAE60u); st32((c.r[2].w[0] + 32u), c.f[0]);  if (depth < kMaxDepth) unit_006A(c, 382u, depth + 1u); else { c.pc = 0x002ABB50u; return; } if (c.pc != 0x002AAE60u) [[unlikely]] return; }
L_002AAE60:
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAE78u); st32((c.r[2].w[0] + 40u), c.f[0]);  if (depth < kMaxDepth) unit_006A(c, 382u, depth + 1u); else { c.pc = 0x002ABB50u; return; } if (c.pc != 0x002AAE78u) [[unlikely]] return; }
L_002AAE78:
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAE90u); st32((c.r[2].w[0] + 36u), c.f[0]);  if (depth < kMaxDepth) unit_006A(c, 382u, depth + 1u); else { c.pc = 0x002ABB50u; return; } if (c.pc != 0x002AAE90u) [[unlikely]] return; }
L_002AAE90:
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[3].w[0] + 44u), c.f[0]);
    c.budget -= 3;
L_002AAE9C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 72ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AADCCu | kUnwind; return; } goto L_002AADCC; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002AAED0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 7;
L_002AAEEC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 28352u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AAFBC; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[3], 0u + 2033u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002AAFBC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x53330000u);  if (t) { goto L_002AAF24; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_002AAF24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAF2Cu); c.r[5].d[0] = c.r[2].d[0] | 19799ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x002AAF2Cu) [[unlikely]] return; }
L_002AAF2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002AAF38; } }
    set32(c.r[18], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_002AAF38:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002AAFBC; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AAFBC; } }
    set32(c.r[17], ld32((c.r[3].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002AAFBC; } }
    set32(c.r[19], ld32((c.r[17].w[0] + 48u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAF68u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 384u, depth + 1u); else { c.pc = 0x002ABD70u; return; } if (c.pc != 0x002AAF68u) [[unlikely]] return; }
L_002AAF68:
    c.f[0] = ld32((c.r[2].w[0]));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAF80u); st32((c.r[2].w[0] + 32u), c.f[0]);  if (depth < kMaxDepth) unit_006A(c, 384u, depth + 1u); else { c.pc = 0x002ABD70u; return; } if (c.pc != 0x002AAF80u) [[unlikely]] return; }
L_002AAF80:
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAF98u); st32((c.r[2].w[0] + 36u), c.f[0]);  if (depth < kMaxDepth) unit_006A(c, 384u, depth + 1u); else { c.pc = 0x002ABD70u; return; } if (c.pc != 0x002AAF98u) [[unlikely]] return; }
L_002AAF98:
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AAFB0u); st32((c.r[2].w[0] + 40u), c.f[0]);  if (depth < kMaxDepth) unit_006A(c, 384u, depth + 1u); else { c.pc = 0x002ABD70u; return; } if (c.pc != 0x002AAFB0u) [[unlikely]] return; }
L_002AAFB0:
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    st32((c.r[3].w[0] + 44u), c.f[0]);
    c.budget -= 3;
L_002AAFBC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 72ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AAEECu | kUnwind; return; } goto L_002AAEEC; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002AAFF0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
L_002AB014:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 28352u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AB0F8; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[3], 0u + 2051u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002AB0F8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x53330000u);  if (t) { goto L_002AB04C; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_002AB04C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB054u); c.r[5].d[0] = c.r[2].d[0] | 19799ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x002AB054u) [[unlikely]] return; }
L_002AB054:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002AB060; } }
    set32(c.r[16], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_002AB060:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002AB0F8; } }
    set32(c.r[2], ld32((c.r[1].w[0] - 24392u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 92u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB078u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 320u, depth + 1u); else { c.pc = 0x001673D0u; return; } if (c.pc != 0x002AB078u) [[unlikely]] return; }
L_002AB078:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24392u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 92u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB08Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 320u, depth + 1u); else { c.pc = 0x001673D0u; return; } if (c.pc != 0x002AB08Cu) [[unlikely]] return; }
L_002AB08C:
    c.r[17].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[19].d[0] & 65535ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[20], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB0B4u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 4u, depth + 1u); else { c.pc = 0x002AC030u; return; } if (c.pc != 0x002AB0B4u) [[unlikely]] return; }
L_002AB0B4:
    c.f[0] = ld32((c.r[2].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB0CCu); st32((c.r[2].w[0] + 32u), c.f[0]);  if (depth < kMaxDepth) unit_006B(c, 4u, depth + 1u); else { c.pc = 0x002AC030u; return; } if (c.pc != 0x002AB0CCu) [[unlikely]] return; }
L_002AB0CC:
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB0E4u); st32((c.r[2].w[0] + 36u), c.f[0]);  if (depth < kMaxDepth) unit_006B(c, 4u, depth + 1u); else { c.pc = 0x002AC030u; return; } if (c.pc != 0x002AB0E4u) [[unlikely]] return; }
L_002AB0E4:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    set32(c.r[3], c.r[19].w[0] + 1u);
    c.r[19].d[0] = c.r[3].d[0] & 65535ull;
    st32((c.r[4].w[0] + 40u), c.f[0]);
    c.budget -= 5;
L_002AB0F8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 72ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AB014u | kUnwind; return; } goto L_002AB014; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002AB130:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
L_002AB154:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 28352u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AB250; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[3], 0u + 2051u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002AB250; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x53330000u);  if (t) { goto L_002AB18C; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_002AB18C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB194u); c.r[5].d[0] = c.r[2].d[0] | 19799ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x002AB194u) [[unlikely]] return; }
L_002AB194:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002AB1A0; } }
    set32(c.r[16], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_002AB1A0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002AB250; } }
    set32(c.r[2], ld32((c.r[1].w[0] - 24392u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 92u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB1B8u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 320u, depth + 1u); else { c.pc = 0x001673D0u; return; } if (c.pc != 0x002AB1B8u) [[unlikely]] return; }
L_002AB1B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24392u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 92u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB1CCu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 320u, depth + 1u); else { c.pc = 0x001673D0u; return; } if (c.pc != 0x002AB1CCu) [[unlikely]] return; }
L_002AB1CC:
    c.r[17].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[19].d[0] & 65535ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[20], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB1F4u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 6u, depth + 1u); else { c.pc = 0x002AC230u; return; } if (c.pc != 0x002AB1F4u) [[unlikely]] return; }
L_002AB1F4:
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB20Cu); st32((c.r[2].w[0] + 32u), c.f[0]);  if (depth < kMaxDepth) unit_006B(c, 6u, depth + 1u); else { c.pc = 0x002AC230u; return; } if (c.pc != 0x002AB20Cu) [[unlikely]] return; }
L_002AB20C:
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB224u); st32((c.r[2].w[0] + 36u), c.f[0]);  if (depth < kMaxDepth) unit_006B(c, 6u, depth + 1u); else { c.pc = 0x002AC230u; return; } if (c.pc != 0x002AB224u) [[unlikely]] return; }
L_002AB224:
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB23Cu); st32((c.r[2].w[0] + 40u), c.f[0]);  if (depth < kMaxDepth) unit_006B(c, 6u, depth + 1u); else { c.pc = 0x002AC230u; return; } if (c.pc != 0x002AB23Cu) [[unlikely]] return; }
L_002AB23C:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[3], c.r[19].w[0] + 1u);
    c.r[19].d[0] = c.r[3].d[0] & 65535ull;
    st32((c.r[4].w[0] + 44u), c.f[0]);
    c.budget -= 5;
L_002AB250:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 72ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AB154u | kUnwind; return; } goto L_002AB154; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002AB280:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[1].w[0] - 24392u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AB2A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002AB378; } }
L_002AB2A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB2B0u); set32(c.r[4], ld32((c.r[2].w[0] + 92u)));  if (depth < kMaxDepth) unit_0019(c, 293u, depth + 1u); else { c.pc = 0x00166FD0u; return; } if (c.pc != 0x002AB2B0u) [[unlikely]] return; }
L_002AB2B0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002AB2C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002AB378; } }
L_002AB2C4:
    set32(c.r[2], ld32((c.r[1].w[0] - 24392u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB2D0u); set32(c.r[4], ld32((c.r[2].w[0] + 92u)));  if (depth < kMaxDepth) unit_0019(c, 315u, depth + 1u); else { c.pc = 0x00167360u; return; } if (c.pc != 0x002AB2D0u) [[unlikely]] return; }
L_002AB2D0:
    c.r[17].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24392u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB2E4u); set32(c.r[4], ld32((c.r[2].w[0] + 92u)));  if (depth < kMaxDepth) unit_0019(c, 316u, depth + 1u); else { c.pc = 0x00167380u; return; } if (c.pc != 0x002AB2E4u) [[unlikely]] return; }
L_002AB2E4:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24392u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 92u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB2FCu); set32(c.r[16], c.r[3].w[0] >> 1);  if (depth < kMaxDepth) unit_0019(c, 317u, depth + 1u); else { c.pc = 0x00167390u; return; } if (c.pc != 0x002AB2FCu) [[unlikely]] return; }
L_002AB2FC:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002AB314; } }
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002AB31C; } }
L_002AB314:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002AB378; } }
L_002AB31C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[3].w[0] - 18400u);
    c.budget -= 2;
L_002AB324:
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[1].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;  if (t) { goto L_002AB368; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 2u)));
    c.r[1].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002AB370; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002AB370; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002AB37C; } }
L_002AB368:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002AB378; } }
L_002AB370:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AB324u | kUnwind; return; } goto L_002AB324; } }
L_002AB378:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002AB37C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002AB390:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 120u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB3ACu); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 375u, depth + 1u); else { c.pc = 0x002AB5D0u; return; } if (c.pc != 0x002AB3ACu) [[unlikely]] return; }
L_002AB3AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002AB3D8; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 120u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB3C0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 374u, depth + 1u); else { c.pc = 0x002AB450u; return; } if (c.pc != 0x002AB3C0u) [[unlikely]] return; }
L_002AB3C0:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002AB430; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002AB438; } }
L_002AB3D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;  if (t) { goto L_002AB408; } }
L_002AB3E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB3E8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 374u, depth + 1u); else { c.pc = 0x002AB450u; return; } if (c.pc != 0x002AB3E8u) [[unlikely]] return; }
L_002AB3E8:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002AB400; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AB434; } }
L_002AB400:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 2;
L_002AB408:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AB3E0u | kUnwind; return; } goto L_002AB3E0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 1536u)));
    c.r[2].d[0] = ld16((c.r[2].w[0] + 4u));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002AB434; } }
L_002AB430:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002AB434:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002AB438:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002AB450:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], 0u + 212u);
    set32(c.r[3], ld32((c.r[1].w[0] - 24392u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] + 136u);
    set32(c.r[4], ld32((c.r[4].w[0] + 164u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002AB4AC; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 44u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 1536u)));
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 6);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = ld16((c.r[4].w[0] + 4u));
    c.r[4].d[0] = c.r[4].d[0] & 2048ull;
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AB4BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AB5C8; } }
L_002AB4AC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002AB4BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AB5C8; } }
L_002AB4BC:
    set32(c.r[4], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002AB500; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 46u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 1536u)));
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 6);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = ld16((c.r[4].w[0] + 4u));
    c.r[4].d[0] = c.r[4].d[0] & 2048ull;
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AB500; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AB5C8; } }
L_002AB500:
    set32(c.r[2], ld32((c.r[3].w[0] + 196u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002AB5C8; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 36u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002AB568; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 200u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002AB534; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002AB568; } }
L_002AB534:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 1536u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 4u));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002AB568; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AB5C8; } }
L_002AB568:
    set32(c.r[4], ld32((c.r[3].w[0] + 40u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002AB5C4; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 200u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002AB590; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002AB5C4; } }
L_002AB590:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 50u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 1536u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 4u));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002AB5C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AB5C8; } }
L_002AB5C4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AB5C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AB5D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], 0u + 212u);
    set32(c.r[3], ld32((c.r[1].w[0] - 24392u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] + 136u);
    set32(c.r[3], ld32((c.r[3].w[0] + 164u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002AB600; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AB650; } }
L_002AB600:
    set32(c.r[3], ld32((c.r[4].w[0] + 196u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AB634; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002AB620; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AB650; } }
L_002AB620:
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002AB634; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AB650; } }
L_002AB634:
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002AB64C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AB650; } }
L_002AB64C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AB650:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AB660:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[1].w[0] - 24392u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002AB684; } }
    set32(c.r[17], ld32((c.r[3].w[0] + 92u)));
    c.budget -= 1;
L_002AB684:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002AB6DC; } }
L_002AB68C:
    set32(c.r[3], ld32((c.r[17].w[0] + 60u)));
    c.r[4].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] + 1u);  if (t) { goto L_002AB6D8; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[3], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002AB6D4; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002AB6D4; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB6CCu); set32(c.r[5], 0u + 90u);  if (depth < kMaxDepth) unit_002C(c, 95u, depth + 1u); else { c.pc = 0x001B0EC0u; return; } if (c.pc != 0x002AB6CCu) [[unlikely]] return; }
L_002AB6CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AB6D4u);  if (depth < kMaxDepth) unit_002B(c, 338u, depth + 1u); else { c.pc = 0x001AE880u; return; } if (c.pc != 0x002AB6D4u) [[unlikely]] return; }
L_002AB6D4:
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002AB6D8:
    c.r[16].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 1;
L_002AB6DC:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 64u));
    c.r[4].d[0] = c.r[16].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AB68Cu | kUnwind; return; } goto L_002AB68C; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002AB710:
    c.r[2].d[0] = c.r[4].d[0] & 65535ull;
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], c.r[2].w[0] - 10000u);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] < 0; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_002AB740; } }
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_002AB734; } }
    breakpoint(c, 0x002AB730u);
    c.budget -= 1;
L_002AB734:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AB744; } }
L_002AB740:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_002AB744:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[3].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_002AB754; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 86u);  if (t) { goto L_002AB768; } }
L_002AB754:
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_002AB764; } }
    breakpoint(c, 0x002AB760u);
    c.budget -= 1;
L_002AB764:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 1;
L_002AB768:
    set32(c.r[3], 0u + 2703u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002AB798; } }
    set32(c.r[3], 0u + 2713u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002AB798; } }
    set32(c.r[3], 0u + 2723u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002AB798; } }
    set32(c.r[3], 0u + 2733u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 4203u);  if (t) { goto L_002AB7A8; } }
L_002AB798:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24384u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1740u);  if (t) { goto L_002ABB44; } }
L_002AB7A8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002AB7D4; } }
    set32(c.r[3], 0u + 4213u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002AB7D4; } }
    set32(c.r[3], 0u + 4223u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002AB7D4; } }
    set32(c.r[3], 0u + 4233u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 3803u);  if (t) { goto L_002AB7E4; } }
L_002AB7D4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24384u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1800u);  if (t) { goto L_002ABB44; } }
L_002AB7E4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002AB810; } }
    set32(c.r[3], 0u + 3813u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002AB810; } }
    set32(c.r[3], 0u + 3823u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002AB810; } }
    set32(c.r[3], 0u + 3833u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 3103u);  if (t) { goto L_002AB820; } }
L_002AB810:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24384u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1780u);  if (t) { goto L_002ABB44; } }
L_002AB820:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002AB84C; } }
    set32(c.r[3], 0u + 3113u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002AB84C; } }
    set32(c.r[3], 0u + 3123u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002AB84C; } }
    set32(c.r[3], 0u + 3133u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 4803u);  if (t) { goto L_002AB85C; } }
L_002AB84C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24384u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1760u);  if (t) { goto L_002ABB44; } }
L_002AB85C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002AB888; } }
    set32(c.r[3], 0u + 4813u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002AB888; } }
    set32(c.r[3], 0u + 4823u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002AB888; } }
    set32(c.r[3], 0u + 4833u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 3430u);  if (t) { goto L_002AB898; } }
L_002AB888:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24384u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1820u);  if (t) { goto L_002ABB44; } }
L_002AB898:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002AB8AC; } }
    set32(c.r[3], 0u + 3431u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 201u);  if (t) { goto L_002AB8B8; } }
L_002AB8AC:
    set32(c.r[2], ld32((c.r[1].w[0] - 24384u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1840u);  if (t) { goto L_002ABB44; } }
L_002AB8B8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002AB8CC; } }
    set32(c.r[2], ld32((c.r[1].w[0] - 24384u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1860u);  if (t) { goto L_002ABB44; } }
L_002AB8CC:
    set32(c.r[3], 0u + 401u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 30u);  if (t) { goto L_002AB8E8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24384u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1880u);  if (t) { goto L_002ABB44; } }
L_002AB8E8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002AB8FC; } }
    set32(c.r[3], 0u + 31u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 130u);  if (t) { goto L_002AB908; } }
L_002AB8FC:
    set32(c.r[2], ld32((c.r[1].w[0] - 24384u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1900u);  if (t) { goto L_002ABB44; } }
L_002AB908:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002AB91C; } }
    set32(c.r[2], ld32((c.r[1].w[0] - 24384u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1920u);  if (t) { goto L_002ABB44; } }
L_002AB91C:
    set32(c.r[3], 0u + 630u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002AB934; } }
    set32(c.r[3], 0u + 631u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 2030u);  if (t) { goto L_002AB940; } }
L_002AB934:
    set32(c.r[2], ld32((c.r[1].w[0] - 24384u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1940u);  if (t) { goto L_002ABB44; } }
L_002AB940:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002AB954; } }
    set32(c.r[3], 0u + 2031u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 2130u);  if (t) { goto L_002AB960; } }
L_002AB954:
    set32(c.r[2], ld32((c.r[1].w[0] - 24384u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1960u);  if (t) { goto L_002ABB44; } }
L_002AB960:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002AB974; } }
    set32(c.r[3], 0u + 2131u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 2230u);  if (t) { goto L_002AB980; } }
L_002AB974:
    set32(c.r[2], ld32((c.r[1].w[0] - 24384u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1980u);  if (t) { goto L_002ABB44; } }
L_002AB980:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002AB994; } }
    set32(c.r[3], 0u + 2231u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 3130u);  if (t) { goto L_002AB9A0; } }
L_002AB994:
    set32(c.r[2], ld32((c.r[1].w[0] - 24384u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 2000u);  if (t) { goto L_002ABB44; } }
L_002AB9A0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002AB9B4; } }
    set32(c.r[3], 0u + 3131u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 4430u);  if (t) { goto L_002AB9C0; } }
L_002AB9B4:
    set32(c.r[2], ld32((c.r[1].w[0] - 24384u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 2020u);  if (t) { goto L_002ABB44; } }
L_002AB9C0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002AB9D4; } }
    set32(c.r[3], 0u + 4431u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 5330u);  if (t) { goto L_002AB9E0; } }
L_002AB9D4:
    set32(c.r[2], ld32((c.r[1].w[0] - 24384u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 2040u);  if (t) { goto L_002ABB44; } }
L_002AB9E0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002AB9F4; } }
    set32(c.r[3], 0u + 5331u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 140u);  if (t) { goto L_002ABA00; } }
L_002AB9F4:
    set32(c.r[2], ld32((c.r[1].w[0] - 24384u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 2060u);  if (t) { goto L_002ABB44; } }
L_002ABA00:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002ABA14; } }
    set32(c.r[2], ld32((c.r[1].w[0] - 24384u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 2080u);  if (t) { goto L_002ABB44; } }
L_002ABA14:
    set32(c.r[3], c.r[4].w[0] - 210u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002ABA3C; } }
    set32(c.r[3], 0u + 220u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002ABA3C; } }
    set32(c.r[3], 0u + 221u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 230u);  if (t) { goto L_002ABA4C; } }
L_002ABA3C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24384u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 2100u);  if (t) { goto L_002ABB44; } }
L_002ABA4C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002ABA60; } }
    set32(c.r[3], 0u + 231u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 8403u);  if (t) { goto L_002ABA6C; } }
L_002ABA60:
    set32(c.r[2], ld32((c.r[1].w[0] - 24384u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 2120u);  if (t) { goto L_002ABB44; } }
L_002ABA6C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002ABA98; } }
    set32(c.r[3], 0u + 8413u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002ABA98; } }
    set32(c.r[3], 0u + 8423u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002ABA98; } }
    set32(c.r[3], 0u + 8433u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[1].d[0] = c.r[2].sd[0] < 86ll ? 1ull : 0ull;  if (t) { goto L_002ABAA8; } }
L_002ABA98:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24384u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 2140u);  if (t) { goto L_002ABB44; } }
L_002ABAA8:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002ABACC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[3], ld32((c.r[1].w[0] - 24384u)));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_002ABB44; } }
L_002ABACC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] - 17632u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; st128((c.r[4].w[0]) & ~15u, c.r[2]);  if (t) { goto L_002ABB38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABAECu);  if (depth < kMaxDepth) unit_0084(c, 125u, depth + 1u); else { c.pc = 0x00311220u; return; } if (c.pc != 0x002ABAECu) [[unlikely]] return; }
L_002ABAEC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24384u)));
    c.f[0] = ld32((c.r[29].w[0] + 16u));
    st32((c.r[2].w[0] + 1720u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24384u)));
    c.f[0] = ld32((c.r[29].w[0] + 24u));
    st32((c.r[2].w[0] + 1724u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24384u)));
    st32((c.r[2].w[0] + 1728u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24384u)));
    c.f[0] = ld32((c.r[29].w[0] + 20u));
    st32((c.r[2].w[0] + 1732u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.f[0] = ld32((c.r[29].w[0] + 28u));
    set32(c.r[2], ld32((c.r[1].w[0] - 24384u)));
    st32((c.r[2].w[0] + 1736u), c.f[0]);
    c.budget -= 19;
L_002ABB38:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24384u)));
    set32(c.r[2], c.r[2].w[0] + 1720u);
    c.budget -= 3;
L_002ABB44:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002ABB50:
    c.r[2].d[0] = c.r[4].d[0] & 65535ull;
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], c.r[2].w[0] - 10000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] < 0; c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002ABB84; } }
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_002ABB78; } }
    breakpoint(c, 0x002ABB74u);
    c.budget -= 1;
L_002ABB78:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ABB88; } }
L_002ABB84:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_002ABB88:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[3].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_002ABB98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[2].w[0] + 86u);  if (t) { goto L_002ABBAC; } }
L_002ABB98:
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_002ABBA8; } }
    breakpoint(c, 0x002ABBA4u);
    c.budget -= 1;
L_002ABBA8:
    c.r[5].d[0] = c.lo.d[0];
    c.budget -= 1;
L_002ABBAC:
    set32(c.r[2], 0u + 610u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002ABBC4; } }
    set32(c.r[2], 0u + 611u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 140u);  if (t) { goto L_002ABBD0; } }
L_002ABBC4:
    set32(c.r[2], ld32((c.r[1].w[0] - 24376u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1740u);  if (t) { goto L_002ABD60; } }
L_002ABBD0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002ABBE4; } }
    set32(c.r[2], 0u + 141u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 630u);  if (t) { goto L_002ABBF0; } }
L_002ABBE4:
    set32(c.r[2], ld32((c.r[1].w[0] - 24376u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1760u);  if (t) { goto L_002ABD60; } }
L_002ABBF0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002ABC04; } }
    set32(c.r[2], 0u + 631u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 4430u);  if (t) { goto L_002ABC10; } }
L_002ABC04:
    set32(c.r[2], ld32((c.r[1].w[0] - 24376u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1780u);  if (t) { goto L_002ABD60; } }
L_002ABC10:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002ABC24; } }
    set32(c.r[2], 0u + 4431u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 5330u);  if (t) { goto L_002ABC30; } }
L_002ABC24:
    set32(c.r[2], ld32((c.r[1].w[0] - 24376u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1800u);  if (t) { goto L_002ABD60; } }
L_002ABC30:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002ABC44; } }
    set32(c.r[2], 0u + 5331u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 710u);  if (t) { goto L_002ABC50; } }
L_002ABC44:
    set32(c.r[2], ld32((c.r[1].w[0] - 24376u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1820u);  if (t) { goto L_002ABD60; } }
L_002ABC50:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002ABC64; } }
    set32(c.r[2], 0u + 711u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 3430u);  if (t) { goto L_002ABC70; } }
L_002ABC64:
    set32(c.r[2], ld32((c.r[1].w[0] - 24376u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1840u);  if (t) { goto L_002ABD60; } }
L_002ABC70:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002ABC84; } }
    set32(c.r[2], 0u + 3431u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 330u);  if (t) { goto L_002ABC90; } }
L_002ABC84:
    set32(c.r[2], ld32((c.r[1].w[0] - 24376u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1840u);  if (t) { goto L_002ABD60; } }
L_002ABC90:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002ABCA4; } }
    set32(c.r[2], 0u + 331u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002ABCB0; } }
L_002ABCA4:
    set32(c.r[2], ld32((c.r[1].w[0] - 24376u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1880u);  if (t) { goto L_002ABD60; } }
L_002ABCB0:
    c.r[1].d[0] = c.r[5].sd[0] < 86ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { goto L_002ABCD8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], ld32((c.r[1].w[0] - 24376u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_002ABD60; } }
L_002ABCD8:
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] - 17616u);
    set32(c.r[5], c.r[29].w[0] + 16u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], c.r[2].w[0] - 17600u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.budget -= 10;
    { const bool t = c.r[6].d[0] == 0ull; st128((c.r[5].w[0]) & ~15u, c.r[2]);  if (t) { goto L_002ABD54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABD08u);  if (depth < kMaxDepth) unit_0084(c, 123u, depth + 1u); else { c.pc = 0x003110C0u; return; } if (c.pc != 0x002ABD08u) [[unlikely]] return; }
L_002ABD08:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24376u)));
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    st32((c.r[2].w[0] + 1720u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24376u)));
    c.f[0] = ld32((c.r[29].w[0] + 40u));
    st32((c.r[2].w[0] + 1724u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24376u)));
    c.f[0] = ld32((c.r[29].w[0] + 16u));
    st32((c.r[2].w[0] + 1728u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24376u)));
    st32((c.r[2].w[0] + 1732u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.f[0] = ld32((c.r[29].w[0] + 20u));
    set32(c.r[2], ld32((c.r[1].w[0] - 24376u)));
    st32((c.r[2].w[0] + 1736u), c.f[0]);
    c.budget -= 19;
L_002ABD54:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24376u)));
    set32(c.r[2], c.r[2].w[0] + 1720u);
    c.budget -= 3;
L_002ABD60:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002ABD70:
    c.r[2].d[0] = c.r[4].d[0] & 65535ull;
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], c.r[2].w[0] - 10000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] < 0; c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002ABDA4; } }
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_002ABD98; } }
    breakpoint(c, 0x002ABD94u);
    c.budget -= 1;
L_002ABD98:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ABDA8; } }
L_002ABDA4:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_002ABDA8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[3].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_002ABDB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 86u);  if (t) { goto L_002ABDCC; } }
L_002ABDB8:
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_002ABDC8; } }
    breakpoint(c, 0x002ABDC4u);
    c.budget -= 1;
L_002ABDC8:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 1;
L_002ABDCC:
    set32(c.r[3], 0u + 710u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002ABDE4; } }
    set32(c.r[3], 0u + 711u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 201u);  if (t) { goto L_002ABDF0; } }
L_002ABDE4:
    set32(c.r[2], ld32((c.r[1].w[0] - 24368u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1740u);  if (t) { [[clang::musttail]] return unit_006B(c, 3u, depth); } }
L_002ABDF0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002ABE04; } }
    set32(c.r[2], ld32((c.r[1].w[0] - 24368u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1760u);  if (t) { [[clang::musttail]] return unit_006B(c, 3u, depth); } }
L_002ABE04:
    set32(c.r[3], 0u + 801u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 2703u);  if (t) { goto L_002ABE20; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24368u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1780u);  if (t) { [[clang::musttail]] return unit_006B(c, 3u, depth); } }
L_002ABE20:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[5], 0u + 3103u);  if (t) { goto L_002ABE38; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24368u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1800u);  if (t) { [[clang::musttail]] return unit_006B(c, 3u, depth); } }
L_002ABE38:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[5].d[0]; set32(c.r[3], 0u + 4203u);  if (t) { goto L_002ABE50; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24368u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1820u);  if (t) { [[clang::musttail]] return unit_006B(c, 3u, depth); } }
L_002ABE50:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002ABE64; } }
    set32(c.r[2], ld32((c.r[1].w[0] - 24368u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1860u);  if (t) { [[clang::musttail]] return unit_006B(c, 3u, depth); } }
L_002ABE64:
    set32(c.r[3], 0u + 3803u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002ABE7C; } }
    set32(c.r[2], ld32((c.r[1].w[0] - 24368u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1840u);  if (t) { [[clang::musttail]] return unit_006B(c, 3u, depth); } }
L_002ABE7C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[5].d[0]; set32(c.r[3], 0u + 8403u);  if (t) { goto L_002ABE94; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24368u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1820u);  if (t) { [[clang::musttail]] return unit_006B(c, 3u, depth); } }
L_002ABE94:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002ABEA8; } }
    set32(c.r[2], ld32((c.r[1].w[0] - 24368u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1880u);  if (t) { [[clang::musttail]] return unit_006B(c, 3u, depth); } }
L_002ABEA8:
    set32(c.r[3], 0u + 2030u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002ABEC0; } }
    set32(c.r[3], 0u + 2031u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 2130u);  if (t) { goto L_002ABECC; } }
L_002ABEC0:
    set32(c.r[2], ld32((c.r[1].w[0] - 24368u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1900u);  if (t) { [[clang::musttail]] return unit_006B(c, 3u, depth); } }
L_002ABECC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002ABEE0; } }
    set32(c.r[3], 0u + 2131u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 5330u);  if (t) { goto L_002ABEEC; } }
L_002ABEE0:
    set32(c.r[2], ld32((c.r[1].w[0] - 24368u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1920u);  if (t) { [[clang::musttail]] return unit_006B(c, 3u, depth); } }
L_002ABEEC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002ABF00; } }
    set32(c.r[3], 0u + 5331u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 211u);  if (t) { goto L_002ABF0C; } }
L_002ABF00:
    set32(c.r[2], ld32((c.r[1].w[0] - 24368u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1940u);  if (t) { [[clang::musttail]] return unit_006B(c, 3u, depth); } }
L_002ABF0C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002ABF2C; } }
    set32(c.r[3], 0u + 221u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002ABF2C; } }
    set32(c.r[3], 0u + 231u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 210u);  if (t) { goto L_002ABF3C; } }
L_002ABF2C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24368u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1960u);  if (t) { [[clang::musttail]] return unit_006B(c, 3u, depth); } }
L_002ABF3C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002ABF5C; } }
    set32(c.r[3], 0u + 220u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002ABF5C; } }
    set32(c.r[3], 0u + 230u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[1].d[0] = c.r[2].sd[0] < 86ll ? 1ull : 0ull;  if (t) { goto L_002ABF6C; } }
L_002ABF5C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24368u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1980u);  if (t) { [[clang::musttail]] return unit_006B(c, 3u, depth); } }
L_002ABF6C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002ABF90; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[3], ld32((c.r[1].w[0] - 24368u)));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);  if (t) { [[clang::musttail]] return unit_006B(c, 3u, depth); } }
L_002ABF90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] - 17584u);
    set32(c.r[5], c.r[29].w[0] + 16u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], c.r[2].w[0] - 17568u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.budget -= 11;
    { const bool t = c.r[6].d[0] == 0ull; st128((c.r[5].w[0]) & ~15u, c.r[2]);  if (t) { [[clang::musttail]] return unit_006B(c, 2u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ABFC4u);  if (depth < kMaxDepth) unit_0084(c, 121u, depth + 1u); else { c.pc = 0x00310FC0u; return; } if (c.pc != 0x002ABFC4u) [[unlikely]] return; }
L_002ABFC4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24368u)));
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    st32((c.r[2].w[0] + 1720u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24368u)));
    c.f[0] = ld32((c.r[29].w[0] + 36u));
    st32((c.r[2].w[0] + 1724u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24368u)));
    c.f[0] = ld32((c.r[29].w[0] + 16u));
    st32((c.r[2].w[0] + 1728u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24368u)));
    c.budget -= 15;
    [[clang::musttail]] return unit_006B(c, 1u, depth);
}

}
