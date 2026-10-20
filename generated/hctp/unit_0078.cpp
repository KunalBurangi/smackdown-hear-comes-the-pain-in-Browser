#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0078[4096] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0,
    0, 0, 0, 0, 0, 0, 15, 0, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0,
    0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0,
    34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 37, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0,
    0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 51, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55,
    0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0,
    65, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    72, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0,
    79, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 86, 0,
    0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90,
    0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 95, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 107,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 109, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 116, 0, 117, 0, 118, 0, 119, 0, 0, 120,
    0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 125, 0, 126, 0, 0, 0, 0,
    0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 0,
    136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 141, 0, 142, 0, 0, 0, 143, 0,
    144, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 158, 0, 159, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 162, 0, 163, 0, 164, 0, 165, 0, 166,
    0, 167, 0, 168, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 173, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 176, 177,
    0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0,
    0, 0, 180, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 183, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0,
    0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 191,
    0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 194, 0, 0, 195, 0, 0, 196, 0, 197, 0, 198, 0,
    199, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0,
    204, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0,
    210, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 214, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 217, 0, 0, 0,
    218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 223, 224, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0,
    0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 232, 0, 233, 0,
    0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 236, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 240, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0,
    0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 248, 0, 249, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 253, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0,
    0, 256, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0,
    261, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 263, 0, 0, 0, 0, 0, 264, 0, 265, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269,
    0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 272, 0, 0, 273, 0, 0, 274, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 278, 0, 279, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 281, 0, 0, 282, 0, 0, 0, 0, 283, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0, 290, 0, 0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 295, 0, 0, 0, 0, 296, 0, 0, 297, 0, 298, 0, 0, 0, 0, 299, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 302, 0, 0, 0, 303, 0,
    0, 304, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0,
    0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309,
    0, 0, 0, 0, 0, 0, 310, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 314, 0, 0,
    0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 317, 0, 0, 0, 0,
    0, 0, 0, 318, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 322, 0,
    323, 0, 324, 0, 0, 0, 0, 0, 0, 0, 325, 0, 326, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 328, 0, 329, 0, 330, 0, 331, 0, 332,
    0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 334, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 336, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 342, 0, 0, 0, 343, 0, 0, 0,
    0, 344, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 348,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0,
    0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 356, 0, 0,
    0, 357, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 360, 0,
    0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 363, 0, 0, 0, 364, 0, 0, 0, 0, 0, 365, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0,
    0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0,
    372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 376, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 379, 0, 0,
    380, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 382, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    384, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0,
    388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 392,
    0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0,
    398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 402, 0, 0, 403, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 409, 0, 0, 0, 410, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0,
    0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0,
};

void unit_0078(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002E0000;
    case 2u: goto L_002E0018;
    case 3u: goto L_002E0044;
    case 4u: goto L_002E005C;
    case 5u: goto L_002E0098;
    case 6u: goto L_002E00AC;
    case 7u: goto L_002E00D8;
    case 8u: goto L_002E0150;
    case 9u: goto L_002E0180;
    case 10u: goto L_002E01D8;
    case 11u: goto L_002E02A0;
    case 12u: goto L_002E02C0;
    case 13u: goto L_002E02CC;
    case 14u: goto L_002E02F8;
    case 15u: goto L_002E0318;
    case 16u: goto L_002E0324;
    case 17u: goto L_002E0340;
    case 18u: goto L_002E0350;
    case 19u: goto L_002E0358;
    case 20u: goto L_002E0390;
    case 21u: goto L_002E03A0;
    case 22u: goto L_002E03B0;
    case 23u: goto L_002E03C0;
    case 24u: goto L_002E03D0;
    case 25u: goto L_002E03E0;
    case 26u: goto L_002E0404;
    case 27u: goto L_002E0430;
    case 28u: goto L_002E0478;
    case 29u: goto L_002E04C0;
    case 30u: goto L_002E050C;
    case 31u: goto L_002E0534;
    case 32u: goto L_002E0544;
    case 33u: goto L_002E055C;
    case 34u: goto L_002E0580;
    case 35u: goto L_002E05A8;
    case 36u: goto L_002E05C0;
    case 37u: goto L_002E0604;
    case 38u: goto L_002E0618;
    case 39u: goto L_002E0654;
    case 40u: goto L_002E06E4;
    case 41u: goto L_002E0734;
    case 42u: goto L_002E0750;
    case 43u: goto L_002E078C;
    case 44u: goto L_002E07D4;
    case 45u: goto L_002E07F8;
    case 46u: goto L_002E0810;
    case 47u: goto L_002E0834;
    case 48u: goto L_002E089C;
    case 49u: goto L_002E08A8;
    case 50u: goto L_002E08CC;
    case 51u: goto L_002E08D4;
    case 52u: goto L_002E08F0;
    case 53u: goto L_002E0930;
    case 54u: goto L_002E096C;
    case 55u: goto L_002E097C;
    case 56u: goto L_002E0994;
    case 57u: goto L_002E09B0;
    case 58u: goto L_002E09C8;
    case 59u: goto L_002E0A40;
    case 60u: goto L_002E0A50;
    case 61u: goto L_002E0AC0;
    case 62u: goto L_002E0AD0;
    case 63u: goto L_002E0AE0;
    case 64u: goto L_002E0AF0;
    case 65u: goto L_002E0B00;
    case 66u: goto L_002E0B10;
    case 67u: goto L_002E0B24;
    case 68u: goto L_002E0B60;
    case 69u: goto L_002E0B9C;
    case 70u: goto L_002E0BB4;
    case 71u: goto L_002E0BD0;
    case 72u: goto L_002E0C00;
    case 73u: goto L_002E0C10;
    case 74u: goto L_002E0C20;
    case 75u: goto L_002E0C30;
    case 76u: goto L_002E0C44;
    case 77u: goto L_002E0C58;
    case 78u: goto L_002E0C70;
    case 79u: goto L_002E0C80;
    case 80u: goto L_002E0C90;
    case 81u: goto L_002E0CA0;
    case 82u: goto L_002E0CB0;
    case 83u: goto L_002E0CC0;
    case 84u: goto L_002E0CD0;
    case 85u: goto L_002E0CE8;
    case 86u: goto L_002E0CF8;
    case 87u: goto L_002E0D0C;
    case 88u: goto L_002E0D28;
    case 89u: goto L_002E0D40;
    case 90u: goto L_002E0D7C;
    case 91u: goto L_002E0D88;
    case 92u: goto L_002E0DA0;
    case 93u: goto L_002E0DC0;
    case 94u: goto L_002E0DF0;
    case 95u: goto L_002E0DF8;
    case 96u: goto L_002E0E34;
    case 97u: goto L_002E0E48;
    case 98u: goto L_002E0E70;
    case 99u: goto L_002E0EB0;
    case 100u: goto L_002E0EC0;
    case 101u: goto L_002E0F30;
    case 102u: goto L_002E0F5C;
    case 103u: goto L_002E1158;
    case 104u: goto L_002E11A0;
    case 105u: goto L_002E13B8;
    case 106u: goto L_002E13E0;
    case 107u: goto L_002E13FC;
    case 108u: goto L_002E1458;
    case 109u: goto L_002E1460;
    case 110u: goto L_002E1488;
    case 111u: goto L_002E149C;
    case 112u: goto L_002E14B0;
    case 113u: goto L_002E1510;
    case 114u: goto L_002E1524;
    case 115u: goto L_002E153C;
    case 116u: goto L_002E1558;
    case 117u: goto L_002E1560;
    case 118u: goto L_002E1568;
    case 119u: goto L_002E1570;
    case 120u: goto L_002E157C;
    case 121u: goto L_002E158C;
    case 122u: goto L_002E15C8;
    case 123u: goto L_002E1644;
    case 124u: goto L_002E1658;
    case 125u: goto L_002E1664;
    case 126u: goto L_002E166C;
    case 127u: goto L_002E1690;
    case 128u: goto L_002E16A8;
    case 129u: goto L_002E16D0;
    case 130u: goto L_002E1708;
    case 131u: goto L_002E171C;
    case 132u: goto L_002E1730;
    case 133u: goto L_002E1744;
    case 134u: goto L_002E1758;
    case 135u: goto L_002E176C;
    case 136u: goto L_002E1780;
    case 137u: goto L_002E1794;
    case 138u: goto L_002E17A8;
    case 139u: goto L_002E17C8;
    case 140u: goto L_002E17D8;
    case 141u: goto L_002E17E0;
    case 142u: goto L_002E17E8;
    case 143u: goto L_002E17F8;
    case 144u: goto L_002E1800;
    case 145u: goto L_002E1820;
    case 146u: goto L_002E1840;
    case 147u: goto L_002E185C;
    case 148u: goto L_002E1890;
    case 149u: goto L_002E18B8;
    case 150u: goto L_002E18C4;
    case 151u: goto L_002E18E0;
    case 152u: goto L_002E1910;
    case 153u: goto L_002E1930;
    case 154u: goto L_002E19A4;
    case 155u: goto L_002E19AC;
    case 156u: goto L_002E19C0;
    case 157u: goto L_002E1A00;
    case 158u: goto L_002E1A88;
    case 159u: goto L_002E1A90;
    case 160u: goto L_002E1AB0;
    case 161u: goto L_002E1AC0;
    case 162u: goto L_002E1ADC;
    case 163u: goto L_002E1AE4;
    case 164u: goto L_002E1AEC;
    case 165u: goto L_002E1AF4;
    case 166u: goto L_002E1AFC;
    case 167u: goto L_002E1B04;
    case 168u: goto L_002E1B0C;
    case 169u: goto L_002E1B2C;
    case 170u: goto L_002E1B40;
    case 171u: goto L_002E1B50;
    case 172u: goto L_002E1BA0;
    case 173u: goto L_002E1BC0;
    case 174u: goto L_002E1BC8;
    case 175u: goto L_002E1BE0;
    case 176u: goto L_002E1BF8;
    case 177u: goto L_002E1BFC;
    case 178u: goto L_002E1C18;
    case 179u: goto L_002E1C64;
    case 180u: goto L_002E1C88;
    case 181u: goto L_002E1C9C;
    case 182u: goto L_002E1CB4;
    case 183u: goto L_002E1CBC;
    case 184u: goto L_002E1CD0;
    case 185u: goto L_002E1CE8;
    case 186u: goto L_002E1CF8;
    case 187u: goto L_002E1D1C;
    case 188u: goto L_002E1D34;
    case 189u: goto L_002E1D50;
    case 190u: goto L_002E1D68;
    case 191u: goto L_002E1D7C;
    case 192u: goto L_002E1D98;
    case 193u: goto L_002E1DB4;
    case 194u: goto L_002E1DD0;
    case 195u: goto L_002E1DDC;
    case 196u: goto L_002E1DE8;
    case 197u: goto L_002E1DF0;
    case 198u: goto L_002E1DF8;
    case 199u: goto L_002E1E00;
    case 200u: goto L_002E1E08;
    case 201u: goto L_002E1E38;
    case 202u: goto L_002E1E48;
    case 203u: goto L_002E1E60;
    case 204u: goto L_002E1E80;
    case 205u: goto L_002E1E90;
    case 206u: goto L_002E1EA0;
    case 207u: goto L_002E1EB4;
    case 208u: goto L_002E1F40;
    case 209u: goto L_002E1F68;
    case 210u: goto L_002E1F80;
    case 211u: goto L_002E1FA0;
    case 212u: goto L_002E1FD8;
    case 213u: goto L_002E1FF0;
    case 214u: goto L_002E2018;
    case 215u: goto L_002E2024;
    case 216u: goto L_002E206C;
    case 217u: goto L_002E2070;
    case 218u: goto L_002E2080;
    case 219u: goto L_002E20AC;
    case 220u: goto L_002E20C0;
    case 221u: goto L_002E210C;
    case 222u: goto L_002E2124;
    case 223u: goto L_002E213C;
    case 224u: goto L_002E2140;
    case 225u: goto L_002E2150;
    case 226u: goto L_002E2160;
    case 227u: goto L_002E2178;
    case 228u: goto L_002E2190;
    case 229u: goto L_002E21C0;
    case 230u: goto L_002E21D0;
    case 231u: goto L_002E21E0;
    case 232u: goto L_002E21F0;
    case 233u: goto L_002E21F8;
    case 234u: goto L_002E2204;
    case 235u: goto L_002E222C;
    case 236u: goto L_002E2234;
    case 237u: goto L_002E2240;
    case 238u: goto L_002E2260;
    case 239u: goto L_002E22B0;
    case 240u: goto L_002E22B8;
    case 241u: goto L_002E22D0;
    case 242u: goto L_002E22F4;
    case 243u: goto L_002E231C;
    case 244u: goto L_002E2330;
    case 245u: goto L_002E2340;
    case 246u: goto L_002E2370;
    case 247u: goto L_002E2390;
    case 248u: goto L_002E241C;
    case 249u: goto L_002E2424;
    case 250u: goto L_002E2430;
    case 251u: goto L_002E2440;
    case 252u: goto L_002E2460;
    case 253u: goto L_002E246C;
    case 254u: goto L_002E24B0;
    case 255u: goto L_002E24F8;
    case 256u: goto L_002E2504;
    case 257u: goto L_002E251C;
    case 258u: goto L_002E2540;
    case 259u: goto L_002E2550;
    case 260u: goto L_002E256C;
    case 261u: goto L_002E2580;
    case 262u: goto L_002E25A4;
    case 263u: goto L_002E25AC;
    case 264u: goto L_002E25C4;
    case 265u: goto L_002E25CC;
    case 266u: goto L_002E25E0;
    case 267u: goto L_002E261C;
    case 268u: goto L_002E2628;
    case 269u: goto L_002E267C;
    case 270u: goto L_002E268C;
    case 271u: goto L_002E26B0;
    case 272u: goto L_002E2718;
    case 273u: goto L_002E2724;
    case 274u: goto L_002E2730;
    case 275u: goto L_002E2748;
    case 276u: goto L_002E2760;
    case 277u: goto L_002E2770;
    case 278u: goto L_002E2798;
    case 279u: goto L_002E27A0;
    case 280u: goto L_002E27B4;
    case 281u: goto L_002E27D0;
    case 282u: goto L_002E27DC;
    case 283u: goto L_002E27F0;
    case 284u: goto L_002E2818;
    case 285u: goto L_002E282C;
    case 286u: goto L_002E2854;
    case 287u: goto L_002E2868;
    case 288u: goto L_002E2890;
    case 289u: goto L_002E28A0;
    case 290u: goto L_002E28B0;
    case 291u: goto L_002E28BC;
    case 292u: goto L_002E28D4;
    case 293u: goto L_002E28E8;
    case 294u: goto L_002E2924;
    case 295u: goto L_002E2938;
    case 296u: goto L_002E294C;
    case 297u: goto L_002E2958;
    case 298u: goto L_002E2960;
    case 299u: goto L_002E2974;
    case 300u: goto L_002E29AC;
    case 301u: goto L_002E29DC;
    case 302u: goto L_002E29E8;
    case 303u: goto L_002E29F8;
    case 304u: goto L_002E2A04;
    case 305u: goto L_002E2A20;
    case 306u: goto L_002E2A6C;
    case 307u: goto L_002E2A84;
    case 308u: goto L_002E2AC8;
    case 309u: goto L_002E2AFC;
    case 310u: goto L_002E2B18;
    case 311u: goto L_002E2B24;
    case 312u: goto L_002E2B48;
    case 313u: goto L_002E2B68;
    case 314u: goto L_002E2B74;
    case 315u: goto L_002E2B90;
    case 316u: goto L_002E2BE4;
    case 317u: goto L_002E2BEC;
    case 318u: goto L_002E2C0C;
    case 319u: goto L_002E2C14;
    case 320u: goto L_002E2C40;
    case 321u: goto L_002E2C74;
    case 322u: goto L_002E2C78;
    case 323u: goto L_002E2C80;
    case 324u: goto L_002E2C88;
    case 325u: goto L_002E2CA8;
    case 326u: goto L_002E2CB0;
    case 327u: goto L_002E2CC0;
    case 328u: goto L_002E2CDC;
    case 329u: goto L_002E2CE4;
    case 330u: goto L_002E2CEC;
    case 331u: goto L_002E2CF4;
    case 332u: goto L_002E2CFC;
    case 333u: goto L_002E2D18;
    case 334u: goto L_002E2D28;
    case 335u: goto L_002E2D40;
    case 336u: goto L_002E2D84;
    case 337u: goto L_002E2DA0;
    case 338u: goto L_002E2DB0;
    case 339u: goto L_002E2DE4;
    case 340u: goto L_002E2E30;
    case 341u: goto L_002E2E48;
    case 342u: goto L_002E2E60;
    case 343u: goto L_002E2E70;
    case 344u: goto L_002E2E84;
    case 345u: goto L_002E2E98;
    case 346u: goto L_002E2EB0;
    case 347u: goto L_002E2EEC;
    case 348u: goto L_002E2EFC;
    case 349u: goto L_002E2F30;
    case 350u: goto L_002E2F74;
    case 351u: goto L_002E2F84;
    case 352u: goto L_002E2FB8;
    case 353u: goto L_002E2FD4;
    case 354u: goto L_002E3010;
    case 355u: goto L_002E3064;
    case 356u: goto L_002E3074;
    case 357u: goto L_002E3084;
    case 358u: goto L_002E30A0;
    case 359u: goto L_002E30E8;
    case 360u: goto L_002E30F8;
    case 361u: goto L_002E3108;
    case 362u: goto L_002E3130;
    case 363u: goto L_002E3148;
    case 364u: goto L_002E3158;
    case 365u: goto L_002E3170;
    case 366u: goto L_002E31B0;
    case 367u: goto L_002E31D4;
    case 368u: goto L_002E31F4;
    case 369u: goto L_002E3214;
    case 370u: goto L_002E3230;
    case 371u: goto L_002E3264;
    case 372u: goto L_002E3280;
    case 373u: goto L_002E32C0;
    case 374u: goto L_002E3320;
    case 375u: goto L_002E3358;
    case 376u: goto L_002E3360;
    case 377u: goto L_002E33C0;
    case 378u: goto L_002E33DC;
    case 379u: goto L_002E33F4;
    case 380u: goto L_002E3400;
    case 381u: goto L_002E3420;
    case 382u: goto L_002E3430;
    case 383u: goto L_002E3440;
    case 384u: goto L_002E3480;
    case 385u: goto L_002E34A0;
    case 386u: goto L_002E34C4;
    case 387u: goto L_002E3570;
    case 388u: goto L_002E3580;
    case 389u: goto L_002E35F0;
    case 390u: goto L_002E361C;
    case 391u: goto L_002E3668;
    case 392u: goto L_002E367C;
    case 393u: goto L_002E36A0;
    case 394u: goto L_002E36D4;
    case 395u: goto L_002E3710;
    case 396u: goto L_002E3740;
    case 397u: goto L_002E3774;
    case 398u: goto L_002E3780;
    case 399u: goto L_002E37AC;
    case 400u: goto L_002E37C0;
    case 401u: goto L_002E37E0;
    case 402u: goto L_002E380C;
    case 403u: goto L_002E3818;
    case 404u: goto L_002E3820;
    case 405u: goto L_002E3854;
    case 406u: goto L_002E388C;
    case 407u: goto L_002E38D0;
    case 408u: goto L_002E39A8;
    case 409u: goto L_002E39BC;
    case 410u: goto L_002E39CC;
    case 411u: goto L_002E39D8;
    case 412u: goto L_002E3A00;
    case 413u: goto L_002E3A30;
    case 414u: goto L_002E3A40;
    case 415u: goto L_002E3A64;
    case 416u: goto L_002E3A98;
    case 417u: goto L_002E3AB0;
    case 418u: goto L_002E3AD8;
    case 419u: goto L_002E3B1C;
    case 420u: goto L_002E3B44;
    case 421u: goto L_002E3B9C;
    case 422u: goto L_002E3BD0;
    case 423u: goto L_002E3BE8;
    case 424u: goto L_002E3C14;
    case 425u: goto L_002E3C60;
    case 426u: goto L_002E3C88;
    case 427u: goto L_002E3CCC;
    case 428u: goto L_002E3CF0;
    case 429u: goto L_002E3D04;
    case 430u: goto L_002E3D80;
    case 431u: goto L_002E3DA8;
    case 432u: goto L_002E3E18;
    case 433u: goto L_002E3E80;
    case 434u: goto L_002E3EB4;
    case 435u: goto L_002E3EC4;
    case 436u: goto L_002E3F04;
    case 437u: goto L_002E3F44;
    case 438u: goto L_002E3F60;
    case 439u: goto L_002E3FAC;
    case 440u: goto L_002E3FE8;
    default: bad_entry(c, 0x002E0000u); return;
    }
L_002E0000:
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 6;
L_002E0018:
    set32(c.r[17], ld32((c.r[5].w[0])));
    set32(c.r[3], 0u + 5u);
    set32(c.r[5], ld32((c.r[17].w[0] + 176u)));
    mmi::div(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002E00D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0044u);  if (depth < kMaxDepth) unit_0078(c, 18u, depth + 1u); else { c.pc = 0x002E0350u; return; } if (c.pc != 0x002E0044u) [[unlikely]] return; }
L_002E0044:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_002E005C; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[12] = ld32((c.r[1].w[0] - 23512u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E005Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0077(c, 332u, depth + 1u); else { c.pc = 0x002DF7B0u; return; } if (c.pc != 0x002E005Cu) [[unlikely]] return; }
L_002E005C:
    set32(c.r[2], c.r[16].w[0] + c.r[18].w[0]);
    set32(c.r[7], 0u - 1u);
    st32((c.r[2].w[0] + 2992u), c.r[7].w[0]);
    set32(c.r[19], c.r[2].w[0] + 3024u);
    set32(c.r[2], ld32((c.r[2].w[0] + 3024u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[7].d[0];  if (t) { goto L_002E00B4; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 68u)));
    set32(c.r[4], 0u + 41u);
    set32(c.r[6], c.r[18].w[0] + 16u);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0098u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0066(c, 208u, depth + 1u); else { c.pc = 0x0029A200u; return; } if (c.pc != 0x002E0098u) [[unlikely]] return; }
L_002E0098:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 157u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E00ACu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 236u, depth + 1u); else { c.pc = 0x003ADA80u; return; } if (c.pc != 0x002E00ACu) [[unlikely]] return; }
L_002E00AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 644u)));  if (t) { goto L_002E00DC; } }
L_002E00B4:
    set32(c.r[7], c.r[2].w[0] - 41u);
    set32(c.r[4], 0u + 41u);
    set32(c.r[2], ld32((c.r[18].w[0] + 68u)));
    set32(c.r[6], c.r[18].w[0] + 16u);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E00D8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0066(c, 208u, depth + 1u); else { c.pc = 0x0029A200u; return; } if (c.pc != 0x002E00D8u) [[unlikely]] return; }
L_002E00D8:
    set32(c.r[4], ld32((c.r[17].w[0] + 644u)));
    c.budget -= 1;
L_002E00DC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] + 28352u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[6].w[0] + 464u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 2704u)));
    set32(c.r[3], c.r[3].w[0] - 2u);
    st32((c.r[4].w[0] + 2704u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 464u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 2704u)));
    c.budget -= 17;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_002E015C; } }
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], 0u + 300u);
    st32((c.r[17].w[0] + 944u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = ld32((c.r[17].w[0] + 1020u));
    set32(c.r[5], 0u + 15090u);
    st32((c.r[17].w[0] + 212u), c.f[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 464u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0150u); st32((c.r[2].w[0] + 2704u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x002E0150u) [[unlikely]] return; }
L_002E0150:
    set32(c.r[3], c.r[16].w[0] + c.r[18].w[0]);
    set32(c.r[4], 0u - 1u);
    st32((c.r[3].w[0] + 3024u), c.r[4].w[0]);
    c.budget -= 3;
L_002E015C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002E0180:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[3], c.r[5].w[0] << 2);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[2], c.r[2].w[0] - 11536u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    ld128((c.r[16].w[0] + 224u) & ~15u, c.r[3]);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E01D8u); c.f[12] = ld32((c.r[16].w[0] + 212u));  if (depth < kMaxDepth) unit_0011(c, 21u, depth + 1u); else { c.pc = 0x001444F0u; return; } if (c.pc != 0x002E01D8u) [[unlikely]] return; }
L_002E01D8:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[3], c.r[29].w[0] + 80u);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[3].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[16].w[0] + 208u);
    c.f[1] = ld32((c.r[29].w[0] + 100u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 100u), c.f[0]);
    ld128((c.r[3].w[0]) & ~15u, c.r[3]);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    c.f[2] = ld32((c.r[1].w[0] - 23464u));
    c.f[1] = ld32((c.r[29].w[0] + 68u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 23464u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 24;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_002E0248; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 23472u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[1] = fp::sub(c.f[1], c.f[0]);  if (t) { goto L_002E0264; } }
L_002E0248:
    c.f[0] = ld32((c.r[1].w[0] - 23480u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002E0264; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 23472u));
    c.f[1] = fp::add(c.f[1], c.f[0]);
    c.budget -= 3;
L_002E0264:
    st32((c.r[29].w[0] + 68u), c.f[1]);
    set32(c.r[3], 0u + 15250u);
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[17].w[0] << 2);  if (t) { goto L_002E02D4; } }
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 2992u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[6], c.r[4].w[0] - 40u);  if (t) { goto L_002E0324; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26328u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E02A0u); set32(c.r[5], 0u + 40u);  if (depth < kMaxDepth) unit_0025(c, 414u, depth + 1u); else { c.pc = 0x00197E00u; return; } if (c.pc != 0x002E02A0u) [[unlikely]] return; }
L_002E02A0:
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x47500000u);
    c.r[3].d[0] = c.r[3].d[0] | 21076ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002E0324; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E02C0u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0024(c, 356u, depth + 1u); else { c.pc = 0x001934E0u; return; } if (c.pc != 0x002E02C0u) [[unlikely]] return; }
L_002E02C0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E02CCu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0024(c, 357u, depth + 1u); else { c.pc = 0x00193500u; return; } if (c.pc != 0x002E02CCu) [[unlikely]] return; }
L_002E02CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_002E0328; } }
L_002E02D4:
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 3024u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[6], c.r[4].w[0] - 41u);  if (t) { goto L_002E0324; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26328u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E02F8u); set32(c.r[5], 0u + 41u);  if (depth < kMaxDepth) unit_0025(c, 414u, depth + 1u); else { c.pc = 0x00197E00u; return; } if (c.pc != 0x002E02F8u) [[unlikely]] return; }
L_002E02F8:
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x47500000u);
    c.r[3].d[0] = c.r[3].d[0] | 21076ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002E0324; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0318u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0024(c, 356u, depth + 1u); else { c.pc = 0x001934E0u; return; } if (c.pc != 0x002E0318u) [[unlikely]] return; }
L_002E0318:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0324u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0024(c, 357u, depth + 1u); else { c.pc = 0x00193500u; return; } if (c.pc != 0x002E0324u) [[unlikely]] return; }
L_002E0324:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002E0328:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002E0340:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E0350:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002E0374; } }
L_002E0358:
    set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 176u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[2], c.r[3].w[0] + 112u);  if (t) { goto L_002E0370; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E0384; } }
L_002E0370:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_002E0374:
    c.r[2].d[0] = c.r[5].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[5].w[0] << 7);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E0358u | kUnwind; return; } goto L_002E0358; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002E0384:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E0390:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DFBE0u | kUnwind; return; } [[clang::musttail]] return unit_0077(c, 353u, depth); }
L_002E03A0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 80u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DFA70u | kUnwind; return; } [[clang::musttail]] return unit_0077(c, 341u, depth); }
L_002E03B0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 80u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DF730u | kUnwind; return; } [[clang::musttail]] return unit_0077(c, 328u, depth); }
L_002E03C0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 96u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E0340u | kUnwind; return; } goto L_002E0340; }
L_002E03D0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 96u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DFB40u | kUnwind; return; } [[clang::musttail]] return unit_0077(c, 348u, depth); }
L_002E03E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x474F0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0404u); c.r[7].d[0] = c.r[2].d[0] | 16970ull;  if (depth < kMaxDepth) unit_002C(c, 200u, depth + 1u); else { c.pc = 0x001B1A30u; return; } if (c.pc != 0x002E0404u) [[unlikely]] return; }
L_002E0404:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 13552u);
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    set32(c.r[4], ld32((c.r[1].w[0] + 26176u)));
    c.f[0] = ld32((c.r[2].w[0] + 28u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0430u); set32(c.r[5], c.r[2].w[0] - 2000u);  if (depth < kMaxDepth) unit_0024(c, 249u, depth + 1u); else { c.pc = 0x00191DE0u; return; } if (c.pc != 0x002E0430u) [[unlikely]] return; }
L_002E0430:
    st32((c.r[17].w[0] + 112u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 108u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_002E047C; } }
    set32(c.r[2], c.r[2].w[0] - 1000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 26176u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 2072u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0478u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 303u, depth + 1u); else { c.pc = 0x0026E9C0u; return; } if (c.pc != 0x002E0478u) [[unlikely]] return; }
L_002E0478:
    st32((c.r[17].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 1;
L_002E047C:
    set32(c.r[4], ld32((c.r[17].w[0] + 68u)));
    set32(c.r[3], 0u + 30u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    st32((c.r[17].w[0] + 96u), c.r[4].w[0]);
    st8((c.r[17].w[0] + 100u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 116u), c.r[16].w[0]);
    st32((c.r[17].w[0] + 104u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E04C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002E055C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 13552u);
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 112u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E050C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E050C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E050Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E050Cu) [[unlikely]] return; }
L_002E050C:
    st32((c.r[17].w[0] + 112u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 108u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E0534; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E0534; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0534u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E0534u) [[unlikely]] return; }
L_002E0534:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0544u); st32((c.r[17].w[0] + 108u), 0u);  if (depth < kMaxDepth) unit_002C(c, 203u, depth + 1u); else { c.pc = 0x001B1AC0u; return; } if (c.pc != 0x002E0544u) [[unlikely]] return; }
L_002E0544:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002E0560; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E055Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002E055Cu) [[unlikely]] return; }
L_002E055C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002E0560:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E0580:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 108u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E05A8; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E05A8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E05A8u) [[unlikely]] return; }
L_002E05A8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002E05C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], c.r[29].w[0] + 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_002E0618; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_002E0618; } }
    set32(c.r[2], ld32((c.r[1].w[0] + 31072u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0604u); set32(c.r[4], ld32((c.r[1].w[0] + 4492u)));  if (depth < kMaxDepth) unit_0047(c, 171u, depth + 1u); else { c.pc = 0x0021E250u; return; } if (c.pc != 0x002E0604u) [[unlikely]] return; }
L_002E0604:
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0618u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 89u, depth + 1u); else { c.pc = 0x002253B0u; return; } if (c.pc != 0x002E0618u) [[unlikely]] return; }
L_002E0618:
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_002E0630; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 104u), c.r[3].w[0]);  if (t) { goto L_002E0734; } }
L_002E0630:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 100u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E0734; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_002E0734; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0654u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_0026(c, 139u, depth + 1u); else { c.pc = 0x001991D0u; return; } if (c.pc != 0x002E0654u) [[unlikely]] return; }
L_002E0654:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E06B8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 587u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002E0690; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_002E06B0; } }
L_002E0690:
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    c.f[0] = ld32((c.r[4].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[16].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 8;
L_002E06B0:
    set32(c.r[3], 0u + 30u);
    st32((c.r[16].w[0] + 104u), c.r[3].w[0]);
    c.budget -= 2;
L_002E06B8:
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.f[0] = ld32((c.r[3].w[0] + 16u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E0714; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1200000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E06E4u); set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  if (depth < kMaxDepth) unit_0029(c, 227u, depth + 1u); else { c.pc = 0x001A6BB0u; return; } if (c.pc != 0x002E06E4u) [[unlikely]] return; }
L_002E06E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 30u);  if (t) { goto L_002E0710; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[16].w[0] + 96u), c.r[3].w[0]);
    set32(c.r[3], 0u + 30u);
    c.budget -= 9;
L_002E0710:
    st32((c.r[16].w[0] + 104u), c.r[3].w[0]);
    c.budget -= 1;
L_002E0714:
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_002E0734; } }
    st32((c.r[16].w[0] + 96u), 0u);
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0734u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E0734u) [[unlikely]] return; }
L_002E0734:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E0750:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 108u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E0790; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E078C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E078C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E078Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E078Cu) [[unlikely]] return; }
L_002E078C:
    st32((c.r[16].w[0] + 108u), 0u);
    c.budget -= 1;
L_002E0790:
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E07D8; } }
    set32(c.r[2], c.r[3].w[0] - 1000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 26176u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 2072u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E07D4u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 303u, depth + 1u); else { c.pc = 0x0026E9C0u; return; } if (c.pc != 0x002E07D4u) [[unlikely]] return; }
L_002E07D4:
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 1;
L_002E07D8:
    st8((c.r[16].w[0] + 100u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E07F8; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E07F8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E07F8u) [[unlikely]] return; }
L_002E07F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E0810:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x474F0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[7].d[0] = c.r[2].d[0] | 16970ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0834u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_002C(c, 200u, depth + 1u); else { c.pc = 0x001B1A30u; return; } if (c.pc != 0x002E0834u) [[unlikely]] return; }
L_002E0834:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 13488u);
    st32((c.r[18].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 104u), 0u);
    st32((c.r[18].w[0] + 100u), 0u);
    st32((c.r[18].w[0] + 96u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 68u)));
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[1] = fp::cvt_w_s(c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[1]);
    set32(c.r[2], c.f[0]);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 100u)));
    c.budget -= 20;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[2].w[0] << 2);  if (t) { goto L_002E088C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002E0914; } }
L_002E088C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26176u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E089Cu); set32(c.r[17], c.r[2].w[0] + 2020u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x002E089Cu) [[unlikely]] return; }
L_002E089C:
    st32((c.r[18].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002E0904; } }
L_002E08A8:
    set32(c.r[2], ld32((c.r[18].w[0] + 68u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 76u);
    set32(c.r[7], c.r[29].w[0] + 72u);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E08CCu); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_002C(c, 187u, depth + 1u); else { c.pc = 0x001B1880u; return; } if (c.pc != 0x002E08CCu) [[unlikely]] return; }
L_002E08CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E08D4u); set32(c.r[4], 0u + 128u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002E08D4u) [[unlikely]] return; }
L_002E08D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E08F0; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 76u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E08F0u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 25u, depth + 1u); else { c.pc = 0x002E03E0u; return; } if (c.pc != 0x002E08F0u) [[unlikely]] return; }
L_002E08F0:
    set32(c.r[3], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 5;
L_002E0904:
    set32(c.r[2], ld32((c.r[18].w[0] + 100u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E08A8u | kUnwind; return; } goto L_002E08A8; } }
L_002E0914:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002E0930:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002E0994; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 13488u);
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E096C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E096Cu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x002E096Cu) [[unlikely]] return; }
L_002E096C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E097Cu); st32((c.r[17].w[0] + 104u), 0u);  if (depth < kMaxDepth) unit_002C(c, 203u, depth + 1u); else { c.pc = 0x001B1AC0u; return; } if (c.pc != 0x002E097Cu) [[unlikely]] return; }
L_002E097C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002E0998; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0994u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002E0994u) [[unlikely]] return; }
L_002E0994:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002E0998:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E09B0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[2] = c.r[5].w[0];
    c.f[1] = c.r[3].w[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_002E0A10; } }
L_002E09C8:
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[4].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 24u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 24u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 104u)));
    ld128((c.r[4].w[0] + 16u) & ~15u, c.r[5]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st128((c.r[3].w[0] + 16u) & ~15u, c.r[5]);
    set32(c.r[3], ld32((c.r[4].w[0] + 104u)));
    ld128((c.r[4].w[0] + 32u) & ~15u, c.r[5]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st128((c.r[3].w[0] + 32u) & ~15u, c.r[5]);
    c.budget -= 18;
L_002E0A10:
    set32(c.r[3], ld32((c.r[4].w[0] + 100u)));
    c.r[3].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E09C8u | kUnwind; return; } goto L_002E09C8; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 100u), static_cast<std::uint8_t>(c.r[6].w[0]));  c.pc = t; return; }
L_002E0A40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E0A50:
    set32(c.r[7], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[3], c.r[7].w[0] + 1u);  if (t) { goto L_002E0AB8; } }
    st32((c.r[4].w[0] + 96u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 100u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002E0AB8; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[7], 0u + 1u);
    set32(c.r[6], 0u + 30u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st8((c.r[3].w[0] + 100u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[5], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[3].w[0] + 104u), c.r[6].w[0]);
    c.budget -= 13;
L_002E0AB8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E0AC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E0AD0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E0A40u | kUnwind; return; } goto L_002E0A40; }
L_002E0AE0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E0AC0u | kUnwind; return; } goto L_002E0AC0; }
L_002E0AF0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E05C0u | kUnwind; return; } goto L_002E05C0; }
L_002E0B00:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E0580u | kUnwind; return; } goto L_002E0580; }
L_002E0B10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0B24u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 218u, depth + 1u); else { c.pc = 0x001667A0u; return; } if (c.pc != 0x002E0B24u) [[unlikely]] return; }
L_002E0B24:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 13616u);
    set32(c.r[2], c.r[2].w[0] + 13632u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E0B60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002E0BB4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 13616u);
    set32(c.r[2], c.r[2].w[0] + 13632u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0B9Cu); st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0019(c, 221u, depth + 1u); else { c.pc = 0x00166810u; return; } if (c.pc != 0x002E0B9Cu) [[unlikely]] return; }
L_002E0B9C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002E0BB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0BB4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002E0BB4u) [[unlikely]] return; }
L_002E0BB4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002E0BB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E0BD0:
    c.r[2].d[0] = c.r[6].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002E0BEC; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    st32((c.r[4].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
L_002E0BEC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E0C00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_002E0C10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E0C20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E0C30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0C44u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 227u, depth + 1u); else { c.pc = 0x00196270u; return; } if (c.pc != 0x002E0C44u) [[unlikely]] return; }
L_002E0C44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E0C58; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0C58u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 232u, depth + 1u); else { c.pc = 0x001962E0u; return; } if (c.pc != 0x002E0C58u) [[unlikely]] return; }
L_002E0C58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E0C70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0C80u);  if (depth < kMaxDepth) unit_0025(c, 227u, depth + 1u); else { c.pc = 0x00196270u; return; } if (c.pc != 0x002E0C80u) [[unlikely]] return; }
L_002E0C80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002E0C90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0C90u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 232u, depth + 1u); else { c.pc = 0x001962E0u; return; } if (c.pc != 0x002E0C90u) [[unlikely]] return; }
L_002E0C90:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002E0CA0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E0C20u | kUnwind; return; } goto L_002E0C20; }
L_002E0CB0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E0B60u | kUnwind; return; } goto L_002E0B60; }
L_002E0CC0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld8((c.r[1].w[0] - 23784u));  c.pc = t; return; }
L_002E0CD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 20u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0CE8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 29u, depth + 1u); else { c.pc = 0x00140690u; return; } if (c.pc != 0x002E0CE8u) [[unlikely]] return; }
L_002E0CE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 13680u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0CF8u); st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x002E0CF8u) [[unlikely]] return; }
L_002E0CF8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0D0Cu); st32((c.r[29].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002E0D0Cu) [[unlikely]] return; }
L_002E0D0C:
    st32((c.r[16].w[0] + 12u), 0u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 16u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 44u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0D28u); st8((c.r[1].w[0] - 23784u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002E0D28u) [[unlikely]] return; }
L_002E0D28:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E0D40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002E0DA0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + 13680u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    st8((c.r[1].w[0] - 23784u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0D7Cu); set32(c.r[4], ld32((c.r[1].w[0] + 26472u)));  if (depth < kMaxDepth) unit_002B(c, 312u, depth + 1u); else { c.pc = 0x001AE5C0u; return; } if (c.pc != 0x002E0D7Cu) [[unlikely]] return; }
L_002E0D7C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0D88u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 31u, depth + 1u); else { c.pc = 0x00140700u; return; } if (c.pc != 0x002E0D88u) [[unlikely]] return; }
L_002E0D88:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002E0DA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0DA0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002E0DA0u) [[unlikely]] return; }
L_002E0DA0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002E0DA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E0DC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002E0DF8; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 26472u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0DF0u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_002B(c, 297u, depth + 1u); else { c.pc = 0x001AE4B0u; return; } if (c.pc != 0x002E0DF0u) [[unlikely]] return; }
L_002E0DF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0DF8u);  if (depth < kMaxDepth) unit_003D(c, 308u, depth + 1u); else { c.pc = 0x001F7B30u; return; } if (c.pc != 0x002E0DF8u) [[unlikely]] return; }
L_002E0DF8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 12288u)));
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E0DF8u | kUnwind; return; } goto L_002E0DF8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E0E2C; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_002E0E58; } }
L_002E0E2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0E34u);  if (depth < kMaxDepth) unit_003D(c, 179u, depth + 1u); else { c.pc = 0x001F68A0u; return; } if (c.pc != 0x002E0E34u) [[unlikely]] return; }
L_002E0E34:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[16].w[0] + 12u);  if (t) { goto L_002E0E58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0E48u);  if (depth < kMaxDepth) unit_00A7(c, 88u, depth + 1u); else { c.pc = 0x0039D9E0u; return; } if (c.pc != 0x002E0E48u) [[unlikely]] return; }
L_002E0E48:
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 31472u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 4;
L_002E0E58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E0E70:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], ld32((c.r[1].w[0] - 23768u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_002E0E90; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 23768u), c.r[3].w[0]);  if (t) { goto L_002E0EA0; } }
L_002E0E90:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] - 1u);  if (t) { goto L_002E0EA0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 23768u), c.r[3].w[0]);
    c.budget -= 2;
L_002E0EA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E0EB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[6].d[0] + 0ull;  c.pc = t; return; }
L_002E0EC0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31496u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_002E0EE4; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002E0EE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002E0F1C; } }
L_002E0EE4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002E0EE8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 31728u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_002E0F04; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002E0F04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002E0F1C; } }
L_002E0F04:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[1].w[0] - 23768u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_002E0F1C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002E0F1C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E0F30:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 31792u));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002E0F5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0F5Cu);  if (depth < kMaxDepth) unit_0010(c, 104u, depth + 1u); else { c.pc = 0x00141520u; return; } if (c.pc != 0x002E0F5Cu) [[unlikely]] return; }
L_002E0F5C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 27904u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002E0FA0; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 19552u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002E0FA0; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 19564u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[6], c.r[5].w[0] + 19564u);  if (t) { goto L_002E0FA0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[4], 0u + 240u);
    st32((c.r[1].w[0] + 9256u), 0u);
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    st32((c.r[17].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 6;
L_002E0FA0:
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.r[1].d[0] = c.r[3].sd[0] < 211ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002E1158; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[3].w[0] - 210u);
    set32(c.r[11], ld32((c.r[1].w[0] + 20144u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], c.r[2].w[0] + 8u);  if (t) { goto L_002E1070; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x50000000u);
    set32(c.r[10], ld32((c.r[1].w[0] + 1380u)));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[8].d[0] = c.r[3].d[0] | 3ull;
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = 0ull | 32769ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x11000000u);
    c.r[5].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[6].d[0] = c.r[6].d[0] | 2ull;
    set32(c.r[4], 0u + 14u);
    set32(c.r[3], 0u + 71u);
    c.r[9].d[0] = c.r[10].d[0] | c.r[9].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[9].w[0]), c.r[8].d[0]);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    st64((c.r[9].w[0] + 8u), 0ull);
    st64((c.r[9].w[0] + 16u), 0ull);
    st32((c.r[9].w[0] + 24u), c.r[7].w[0]);
    st32((c.r[9].w[0] + 28u), c.r[6].w[0]);
    st64((c.r[9].w[0] + 32u), c.r[5].d[0]);
    st64((c.r[9].w[0] + 40u), c.r[4].d[0]);
    st64((c.r[9].w[0] + 48u), 0ull);
    st64((c.r[9].w[0] + 56u), c.r[3].d[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1380u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] + 64u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1380u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] - 4u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1364u), c.r[3].w[0]);
    c.budget -= 38;
L_002E1070:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], 0u - 256u);
    set32(c.r[12], ld32((c.r[1].w[0] + 20144u)));
    set32(c.r[3], 0u + 256u);
    st32((c.r[29].w[0] + 160u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 164u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 168u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 172u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[5], c.r[2].w[0] << 24);  if (t) { goto L_002E1148; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x50000000u);
    set32(c.r[11], ld32((c.r[1].w[0] + 1380u)));
    c.r[10].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[7].d[0] = c.r[5].d[0] | 2ull;
    c.r[9].d[0] = c.r[3].d[0] | 3ull;
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x11000000u);
    c.r[3].d[0] = 0ull | 32769ull;
    set32(c.r[5], 0u + 14u);
    c.r[6].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[4], 0u + 68u);
    set32(c.r[3], 0u + 66u);
    c.r[10].d[0] = c.r[11].d[0] | c.r[10].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[10].w[0]), c.r[9].d[0]);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    st64((c.r[10].w[0] + 8u), 0ull);
    st64((c.r[10].w[0] + 16u), 0ull);
    st32((c.r[10].w[0] + 24u), c.r[8].w[0]);
    st32((c.r[10].w[0] + 28u), c.r[7].w[0]);
    st64((c.r[10].w[0] + 32u), c.r[6].d[0]);
    st64((c.r[10].w[0] + 40u), c.r[5].d[0]);
    st64((c.r[10].w[0] + 48u), c.r[4].d[0]);
    st64((c.r[10].w[0] + 56u), c.r[3].d[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1380u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] + 64u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1380u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] - 4u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1364u), c.r[3].w[0]);
    set32(c.r[5], c.r[2].w[0] << 24);
    c.budget -= 40;
L_002E1148:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1158u); c.r[6].d[0] = c.r[2].d[0] | 65535ull;  if (depth < kMaxDepth) unit_0049(c, 8u, depth + 1u); else { c.pc = 0x002242E0u; return; } if (c.pc != 0x002E1158u) [[unlikely]] return; }
L_002E1158:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 27904u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002E166C; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 19552u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002E1184; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 19564u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 80u);  if (t) { goto L_002E1198; } }
L_002E1184:
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.r[1].d[0] = c.r[3].sd[0] < 241ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002E166C; } }
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 1;
L_002E1198:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E11A0u);  if (depth < kMaxDepth) unit_00A7(c, 104u, depth + 1u); else { c.pc = 0x0039DC00u; return; } if (c.pc != 0x002E11A0u) [[unlikely]] return; }
L_002E11A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 9256u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { goto L_002E152C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], 0u + 8u);
    set32(c.r[3], ld32((c.r[1].w[0] + 8984u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_002E11D8; } }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E11D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_002E1214; } }
L_002E11D8:
    set32(c.r[4], ld32((c.r[1].w[0] + 9260u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], ld32((c.r[1].w[0] + 9264u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 23776u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[1].w[0] + 9260u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[1].w[0] + 9264u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] - 23776u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002E12AC; } }
L_002E1214:
    set32(c.r[4], ld32((c.r[1].w[0] + 9260u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 9264u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 23776u));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_002E1288; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 9094u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 9072u)));
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 9097u);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 9100u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 9073u)));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 8984u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 18;
L_002E1288:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 9072u)));
    set32(c.r[2], c.r[2].w[0] + 9260u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 9;
L_002E12AC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], ld32((c.r[1].w[0] + 9260u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002E12D0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 9264u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002E1344; } }
L_002E12D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], 0u + 2u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 23776u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E1344; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[1].w[0] + 9256u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st8((c.r[1].w[0] - 23776u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 9264u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 9260u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;  if (t) { goto L_002E1328; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[1].w[0] + 9072u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 8984u), c.r[2].w[0]);  if (t) { goto L_002E152C; } }
L_002E1328:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002E152C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st8((c.r[1].w[0] + 9072u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 8984u), c.r[2].w[0]);  if (t) { goto L_002E152C; } }
L_002E1344:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], ld32((c.r[1].w[0] + 9256u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_002E13B4; } }
    set32(c.r[2], ld32((c.r[1].w[0] + 9264u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002E1380; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[1].w[0] + 9072u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 8984u), c.r[2].w[0]);  if (t) { goto L_002E13A0; } }
L_002E1380:
    c.r[1].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002E13A0; } }
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st8((c.r[1].w[0] + 9072u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[1].w[0] + 8984u), c.r[2].w[0]);
    c.budget -= 5;
L_002E13A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[1].w[0] + 9256u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] - 23776u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002E152C; } }
L_002E13B4:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002E13B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);  if (t) { goto L_002E13D8; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_002E13D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E13E0u); c.r[5].d[0] = c.r[2].d[0] | 18512ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x002E13E0u) [[unlikely]] return; }
L_002E13E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_002E13EC; } }
    set32(c.r[8], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_002E13EC:
    set32(c.r[2], c.r[16].w[0] << 3);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[6], c.r[2].w[0] + 64u);
    c.budget -= 4;
L_002E13FC:
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 32u)));
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 40u)));
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[2].d[0] = c.r[7].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E13FCu | kUnwind; return; } goto L_002E13FC; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E13B8u | kUnwind; return; } goto L_002E13B8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[1].w[0] + 8984u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 9256u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1458u); st32((c.r[1].w[0] + 9256u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003D(c, 165u, depth + 1u); else { c.pc = 0x001F6740u; return; } if (c.pc != 0x002E1458u) [[unlikely]] return; }
L_002E1458:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1460u);  if (depth < kMaxDepth) unit_003F(c, 307u, depth + 1u); else { c.pc = 0x001FF160u; return; } if (c.pc != 0x002E1460u) [[unlikely]] return; }
L_002E1460:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 9256u)));
    set32(c.r[4], c.r[4].w[0] + 8384u);
    set32(c.r[6], 0u + 64u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1488u); set32(c.r[5], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x002E1488u) [[unlikely]] return; }
L_002E1488:
    c.r[10].d[0] = 0ull + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[5], 0u - 120u);
    set32(c.r[6], c.r[6].w[0] + 8384u);
    set32(c.r[2], c.r[10].w[0] << 3);
    c.budget -= 5;
L_002E149C:
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], c.r[10].w[0] << 5);
    set32(c.r[8], c.r[3].w[0] + 64u);
    set32(c.r[7], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 5;
L_002E14B0:
    set32(c.r[2], c.r[9].w[0] << 1);
    set32(c.r[3], c.r[8].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.r[1].d[0] = c.r[2].sd[0] < -120ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002E14CC; } }
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 1;
L_002E14CC:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    set32(c.r[3], c.r[7].w[0] + c.r[9].w[0]);
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[2].d[0] = c.r[9].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[3].w[0] + 270u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E14B0u | kUnwind; return; } goto L_002E14B0; } }
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.r[2].d[0] = c.r[10].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[10].w[0] << 3);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E149Cu | kUnwind; return; } goto L_002E149C; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002E1510; } }
    set32(c.r[25], ld32((c.r[17].w[0] + 8u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1510u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E1510u) [[unlikely]] return; }
L_002E1510:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8897u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1524u); st8((c.r[1].w[0] + 8896u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003F(c, 97u, depth + 1u); else { c.pc = 0x001FCFD0u; return; } if (c.pc != 0x002E1524u) [[unlikely]] return; }
L_002E1524:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_002E1670; } }
L_002E152C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[18], ld32((c.r[1].w[0] + 31480u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E153Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003D(c, 165u, depth + 1u); else { c.pc = 0x001F6740u; return; } if (c.pc != 0x002E153Cu) [[unlikely]] return; }
L_002E153C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002E1558; } }
    set32(c.r[25], ld32((c.r[17].w[0] + 8u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1558u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E1558u) [[unlikely]] return; }
L_002E1558:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1560u);  if (depth < kMaxDepth) unit_003F(c, 307u, depth + 1u); else { c.pc = 0x001FF160u; return; } if (c.pc != 0x002E1560u) [[unlikely]] return; }
L_002E1560:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1568u);  if (depth < kMaxDepth) unit_0011(c, 203u, depth + 1u); else { c.pc = 0x00146F00u; return; } if (c.pc != 0x002E1568u) [[unlikely]] return; }
L_002E1568:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1570u);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x002E1570u) [[unlikely]] return; }
L_002E1570:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E157Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 61u, depth + 1u); else { c.pc = 0x00140C20u; return; } if (c.pc != 0x002E157Cu) [[unlikely]] return; }
L_002E157C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x004B0000u);  if (t) { goto L_002E1594; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E158Cu);  if (depth < kMaxDepth) unit_000D(c, 525u, depth + 1u); else { c.pc = 0x00137FF0u; return; } if (c.pc != 0x002E158Cu) [[unlikely]] return; }
L_002E158C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E166C; } }
L_002E1594:
    c.r[2].d[0] = ld8((c.r[1].w[0] + 25664u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002E1650; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8898u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; st8((c.r[1].w[0] + 8896u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002E1634; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[6], c.r[6].w[0] + 8448u);
    set32(c.r[5], c.r[5].w[0] + 8384u);
    set32(c.r[4], 0u + 32u);
    c.budget -= 5;
L_002E15C8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 2u);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E15C8u | kUnwind; return; } goto L_002E15C8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[1].w[0] + 9260u), 0u);
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
    c.budget -= 19;
L_002E1634:
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1644u); st32((c.r[1].w[0] + 31520u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003F(c, 97u, depth + 1u); else { c.pc = 0x001FCFD0u; return; } if (c.pc != 0x002E1644u) [[unlikely]] return; }
L_002E1644:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 25664u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002E166C; } }
L_002E1650:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1658u);  if (depth < kMaxDepth) unit_0002(c, 580u, depth + 1u); else { c.pc = 0x0010BEA0u; return; } if (c.pc != 0x002E1658u) [[unlikely]] return; }
L_002E1658:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1664u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 156u, depth + 1u); else { c.pc = 0x00101770u; return; } if (c.pc != 0x002E1664u) [[unlikely]] return; }
L_002E1664:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E166Cu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_00A7(c, 76u, depth + 1u); else { c.pc = 0x0039D770u; return; } if (c.pc != 0x002E166Cu) [[unlikely]] return; }
L_002E166C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002E1670:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_002E1690:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 6;
L_002E16A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[16].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + 8384u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = ld16((c.r[3].w[0] + 266u));
    set32(c.r[2], 0u + 25500u);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002E16E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E16D0u);  if (depth < kMaxDepth) unit_002E(c, 103u, depth + 1u); else { c.pc = 0x001B9A10u; return; } if (c.pc != 0x002E16D0u) [[unlikely]] return; }
L_002E16D0:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E16E4; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002E16E4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E16A8u | kUnwind; return; } goto L_002E16A8; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002E17D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1708u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002E1708u) [[unlikely]] return; }
L_002E1708:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 6u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E17B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E171Cu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002E171Cu) [[unlikely]] return; }
L_002E171C:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 20u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E17B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1730u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002E1730u) [[unlikely]] return; }
L_002E1730:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 9u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E17B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1744u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002E1744u) [[unlikely]] return; }
L_002E1744:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 13u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E17B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1758u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002E1758u) [[unlikely]] return; }
L_002E1758:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 39u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E17B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E176Cu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002E176Cu) [[unlikely]] return; }
L_002E176C:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 24u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E17B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1780u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002E1780u) [[unlikely]] return; }
L_002E1780:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 19u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E17B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1794u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002E1794u) [[unlikely]] return; }
L_002E1794:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 18u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E17B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E17A8u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002E17A8u) [[unlikely]] return; }
L_002E17A8:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 17u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E17B8; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_002E17B8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002E17D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E17C8u);  if (depth < kMaxDepth) unit_0048(c, 328u, depth + 1u); else { c.pc = 0x00223900u; return; } if (c.pc != 0x002E17C8u) [[unlikely]] return; }
L_002E17C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E17D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E17D8u);  if (depth < kMaxDepth) unit_003D(c, 236u, depth + 1u); else { c.pc = 0x001F72F0u; return; } if (c.pc != 0x002E17D8u) [[unlikely]] return; }
L_002E17D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E17E0u);  if (depth < kMaxDepth) unit_003F(c, 302u, depth + 1u); else { c.pc = 0x001FF100u; return; } if (c.pc != 0x002E17E0u) [[unlikely]] return; }
L_002E17E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E17E8u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002E17E8u) [[unlikely]] return; }
L_002E17E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002E17F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E17F8u);  if (depth < kMaxDepth) unit_0078(c, 84u, depth + 1u); else { c.pc = 0x002E0CD0u; return; } if (c.pc != 0x002E17F8u) [[unlikely]] return; }
L_002E17F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1800u);  if (depth < kMaxDepth) unit_003F(c, 299u, depth + 1u); else { c.pc = 0x001FF0D0u; return; } if (c.pc != 0x002E1800u) [[unlikely]] return; }
L_002E1800:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E1820:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[5], 0u + 2048u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1840u); set32(c.r[4], c.r[4].w[0] - 23680u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x002E1840u) [[unlikely]] return; }
L_002E1840:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] - 23744u);
    set32(c.r[5], 0u + 770u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E185Cu); st8((c.r[1].w[0] - 21632u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_0078(c, 213u, depth + 1u); else { c.pc = 0x002E1FF0u; return; } if (c.pc != 0x002E185Cu) [[unlikely]] return; }
L_002E185C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 21632u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002E1898; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], c.r[5].w[0] - 23744u);
    set32(c.r[6], 0u + 20u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1890u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0078(c, 171u, depth + 1u); else { c.pc = 0x002E1B50u; return; } if (c.pc != 0x002E1890u) [[unlikely]] return; }
L_002E1890:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_002E18BC; } }
L_002E1898:
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], c.r[5].w[0] - 23744u);
    set32(c.r[6], 0u + 26u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E18B8u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0078(c, 171u, depth + 1u); else { c.pc = 0x002E1B50u; return; } if (c.pc != 0x002E18B8u) [[unlikely]] return; }
L_002E18B8:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 1;
L_002E18BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E18C4u);  if (depth < kMaxDepth) unit_0078(c, 206u, depth + 1u); else { c.pc = 0x002E1EA0u; return; } if (c.pc != 0x002E18C4u) [[unlikely]] return; }
L_002E18C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002E18E0:
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], c.r[5].w[0] << 7);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[6], 0u + 128u);
    set32(c.r[2], c.r[2].w[0] - 23680u);
    c.budget -= 9;
    { set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00124D20u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 40u, depth); }
L_002E1910:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[4].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] - 23664u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[2].d[0] ^ 3ull;
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_002E1930:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[6], c.r[4].w[0] << 7);
    set32(c.r[5], c.r[5].w[0] - 23680u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[7].d[0] = c.r[5].d[0] | c.r[3].d[0];
    set32(c.r[3], ld32((c.r[7].w[0] + 52u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002E19AC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    st32((c.r[7].w[0] + 12u), c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[7].w[0] + 16u), 0u);
    set32(c.r[2], c.r[2].w[0] + 6368u);
    st32((c.r[7].w[0] + 28u), c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] - 23744u);
    st32((c.r[7].w[0]), 0u);
    set32(c.r[6], 0u + 22u);
    st32((c.r[7].w[0] + 4u), 0u);
    set32(c.r[8], 0u + 128u);
    st32((c.r[7].w[0] + 12u), c.r[3].w[0]);
    c.r[9].d[0] = 0ull + 0ull;
    st32((c.r[7].w[0] + 20u), c.r[2].w[0]);
    c.r[10].d[0] = 0ull + 0ull;
    st32((c.r[7].w[0] + 24u), c.r[4].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E19A4u); set32(c.r[4], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0078(c, 171u, depth + 1u); else { c.pc = 0x002E1B50u; return; } if (c.pc != 0x002E19A4u) [[unlikely]] return; }
L_002E19A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E19ACu); set32(c.r[4], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0078(c, 206u, depth + 1u); else { c.pc = 0x002E1EA0u; return; } if (c.pc != 0x002E19ACu) [[unlikely]] return; }
L_002E19AC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002E19C0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] - 23680u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[4].w[0] << 7);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[16].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[5], 0u + 128u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1A00u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x002E1A00u) [[unlikely]] return; }
L_002E1A00:
    set32(c.r[8], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    set32(c.r[3], 0u + 2u);
    st32((c.r[16].w[0] + 12u), c.r[8].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[16].w[0] + 28u), c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + 6368u);
    st32((c.r[16].w[0]), 0u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] - 23744u);
    st32((c.r[16].w[0] + 12u), c.r[8].w[0]);
    set32(c.r[6], 0u + 21u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 24u), c.r[18].w[0]);
    set32(c.r[8], 0u + 128u);
    st32((c.r[16].w[0] + 36u), c.r[18].w[0]);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.r[10].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1A88u); st32((c.r[16].w[0] + 68u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0078(c, 171u, depth + 1u); else { c.pc = 0x002E1B50u; return; } if (c.pc != 0x002E1A88u) [[unlikely]] return; }
L_002E1A88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1A90u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0078(c, 206u, depth + 1u); else { c.pc = 0x002E1EA0u; return; } if (c.pc != 0x002E1A90u) [[unlikely]] return; }
L_002E1A90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002E1AB0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 21632u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E1AC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1ADCu); st32((c.r[29].w[0] + 28u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002E1ADCu) [[unlikely]] return; }
L_002E1ADC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1AE4u);  if (depth < kMaxDepth) unit_0078(c, 172u, depth + 1u); else { c.pc = 0x002E1BA0u; return; } if (c.pc != 0x002E1AE4u) [[unlikely]] return; }
L_002E1AE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1AECu);  if (depth < kMaxDepth) unit_0078(c, 237u, depth + 1u); else { c.pc = 0x002E2240u; return; } if (c.pc != 0x002E1AECu) [[unlikely]] return; }
L_002E1AEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1AF4u);  if (depth < kMaxDepth) unit_0078(c, 224u, depth + 1u); else { c.pc = 0x002E2140u; return; } if (c.pc != 0x002E1AF4u) [[unlikely]] return; }
L_002E1AF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1AFCu);  if (depth < kMaxDepth) unit_0078(c, 241u, depth + 1u); else { c.pc = 0x002E22D0u; return; } if (c.pc != 0x002E1AFCu) [[unlikely]] return; }
L_002E1AFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1B04u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0078(c, 145u, depth + 1u); else { c.pc = 0x002E1820u; return; } if (c.pc != 0x002E1B04u) [[unlikely]] return; }
L_002E1B04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1B0Cu);  if (depth < kMaxDepth) unit_0078(c, 250u, depth + 1u); else { c.pc = 0x002E2430u; return; } if (c.pc != 0x002E1B0Cu) [[unlikely]] return; }
L_002E1B0C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E1B04u | kUnwind; return; } goto L_002E1B04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1B2Cu); set32(c.r[4], ld32((c.r[29].w[0] + 28u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002E1B2Cu) [[unlikely]] return; }
L_002E1B2C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E1B40:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E1AB0u | kUnwind; return; } goto L_002E1AB0; }
L_002E1B50:
    st32((c.r[4].w[0]), c.r[5].w[0]);
    set32(c.r[3], 0u + 2u);
    st32((c.r[4].w[0] + 4u), c.r[6].w[0]);
    c.budget -= 5;
    { const bool t = c.r[7].d[0] == 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002E1B7C; } }
    st32((c.r[4].w[0] + 12u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 24u), c.r[8].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 28u), 0u);  if (t) { goto L_002E1B90; } }
L_002E1B7C:
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    c.budget -= 5;
L_002E1B90:
    st32((c.r[4].w[0] + 36u), c.r[9].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 40u), c.r[10].w[0]);  c.pc = t; return; }
L_002E1BA0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1BC0u); st32((c.r[29].w[0] + 124u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002E1BC0u) [[unlikely]] return; }
L_002E1BC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1BC8u); set32(c.r[4], 0u + 28u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002E1BC8u) [[unlikely]] return; }
L_002E1BC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E1BE0; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1BE0u); set32(c.r[6], 0u + 100u);  if (depth < kMaxDepth) unit_0013(c, 15u, depth + 1u); else { c.pc = 0x0014C300u; return; } if (c.pc != 0x002E1BE0u) [[unlikely]] return; }
L_002E1BE0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 15168u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 21568u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1BF8u); set32(c.r[5], 0u + 6400u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x002E1BF8u) [[unlikely]] return; }
L_002E1BF8:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002E1BFC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 15168u)));
    set32(c.r[3], c.r[16].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] - 21568u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1C18u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x002E1C18u) [[unlikely]] return; }
L_002E1C18:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 100ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E1BFCu | kUnwind; return; } goto L_002E1BFC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + 7632u);
    set32(c.r[3], c.r[3].w[0] - 15152u);
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[2], 0u + 4096u);
    st32((c.r[29].w[0] + 72u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[3], 0u + 20u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[29].w[0] + 84u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 6256u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1C64u); st32((c.r[29].w[0] + 80u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0002(c, 436u, depth + 1u); else { c.pc = 0x0010BA20u; return; } if (c.pc != 0x002E1C64u) [[unlikely]] return; }
L_002E1C64:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[16], c.r[29].w[0] + 40u);
    st32((c.r[1].w[0] - 11520u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[29].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1C88u); st32((c.r[29].w[0] + 52u), 0u);  if (depth < kMaxDepth) unit_0002(c, 500u, depth + 1u); else { c.pc = 0x0010BC20u; return; } if (c.pc != 0x002E1C88u) [[unlikely]] return; }
L_002E1C88:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    st32((c.r[1].w[0] - 11504u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1C9Cu); st32((c.r[16].w[0]), 0u);  if (depth < kMaxDepth) unit_0002(c, 500u, depth + 1u); else { c.pc = 0x0010BC20u; return; } if (c.pc != 0x002E1C9Cu) [[unlikely]] return; }
L_002E1C9C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st32((c.r[1].w[0] - 11512u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 11520u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1CB4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 440u, depth + 1u); else { c.pc = 0x0010BA40u; return; } if (c.pc != 0x002E1CB4u) [[unlikely]] return; }
L_002E1CB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1CBCu); set32(c.r[4], ld32((c.r[29].w[0] + 124u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002E1CBCu) [[unlikely]] return; }
L_002E1CBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002E1CD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1CE8u); set32(c.r[4], ld32((c.r[1].w[0] - 11504u)));  if (depth < kMaxDepth) unit_0002(c, 508u, depth + 1u); else { c.pc = 0x0010BC60u; return; } if (c.pc != 0x002E1CE8u) [[unlikely]] return; }
L_002E1CE8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 15168u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[2].w[0])));  if (t) { goto L_002E1D24; } }
L_002E1CF8:
    set32(c.r[16], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], ld32((c.r[3].w[0])));  if (t) { goto L_002E1D24; } }
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1D1Cu); set32(c.r[4], ld32((c.r[1].w[0] - 11504u)));  if (depth < kMaxDepth) unit_0002(c, 504u, depth + 1u); else { c.pc = 0x0010BC40u; return; } if (c.pc != 0x002E1D1Cu) [[unlikely]] return; }
L_002E1D1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002E1D38; } }
L_002E1D24:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E1CF8u | kUnwind; return; } goto L_002E1CF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1D34u); set32(c.r[4], ld32((c.r[1].w[0] - 11504u)));  if (depth < kMaxDepth) unit_0002(c, 504u, depth + 1u); else { c.pc = 0x0010BC40u; return; } if (c.pc != 0x002E1D34u) [[unlikely]] return; }
L_002E1D34:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002E1D38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E1D50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1D68u); set32(c.r[4], ld32((c.r[1].w[0] - 11504u)));  if (depth < kMaxDepth) unit_0002(c, 508u, depth + 1u); else { c.pc = 0x0010BC60u; return; } if (c.pc != 0x002E1D68u) [[unlikely]] return; }
L_002E1D68:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 15168u)));
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_002E1DA4; } }
L_002E1D7C:
    set32(c.r[16], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], ld32((c.r[4].w[0])));  if (t) { goto L_002E1DA4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1D98u); set32(c.r[4], ld32((c.r[1].w[0] - 11504u)));  if (depth < kMaxDepth) unit_0002(c, 504u, depth + 1u); else { c.pc = 0x0010BC40u; return; } if (c.pc != 0x002E1D98u) [[unlikely]] return; }
L_002E1D98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] | c.r[2].d[0];  if (t) { goto L_002E1DB8; } }
L_002E1DA4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E1D7Cu | kUnwind; return; } goto L_002E1D7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1DB4u); set32(c.r[4], ld32((c.r[1].w[0] - 11504u)));  if (depth < kMaxDepth) unit_0002(c, 504u, depth + 1u); else { c.pc = 0x0010BC40u; return; } if (c.pc != 0x002E1DB4u) [[unlikely]] return; }
L_002E1DB4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002E1DB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E1DD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 3;
L_002E1DDC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1DE8u); set32(c.r[4], ld32((c.r[1].w[0] - 11512u)));  if (depth < kMaxDepth) unit_0002(c, 508u, depth + 1u); else { c.pc = 0x0010BC60u; return; } if (c.pc != 0x002E1DE8u) [[unlikely]] return; }
L_002E1DE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1DF0u);  if (depth < kMaxDepth) unit_0078(c, 189u, depth + 1u); else { c.pc = 0x002E1D50u; return; } if (c.pc != 0x002E1DF0u) [[unlikely]] return; }
L_002E1DF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002E1E4C; } }
L_002E1DF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1E00u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 580u, depth + 1u); else { c.pc = 0x0010BEA0u; return; } if (c.pc != 0x002E1E00u) [[unlikely]] return; }
L_002E1E00:
    set32(c.r[2], 0u + 3u);
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 2;
L_002E1E08:
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.r[11].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    st64((c.r[29].w[0]), c.r[2].d[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[8], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[9], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[10], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1E38u); set32(c.r[11], c.r[11].w[0] + 7776u);  if (depth < kMaxDepth) unit_0003(c, 354u, depth + 1u); else { c.pc = 0x0010ED78u; return; } if (c.pc != 0x002E1E38u) [[unlikely]] return; }
L_002E1E38:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E1E08u | kUnwind; return; } goto L_002E1E08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1E48u);  if (depth < kMaxDepth) unit_0078(c, 189u, depth + 1u); else { c.pc = 0x002E1D50u; return; } if (c.pc != 0x002E1E48u) [[unlikely]] return; }
L_002E1E48:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002E1E4C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E1DF8u | kUnwind; return; } goto L_002E1DF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E1DDCu | kUnwind; return; } goto L_002E1DDC; } }
    c.budget -= 1;
L_002E1E60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002E1E80; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1E80u); set32(c.r[5], ld32((c.r[16].w[0] + 40u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E1E80u) [[unlikely]] return; }
L_002E1E80:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1E90u); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x002E1E90u) [[unlikely]] return; }
L_002E1E90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E1EA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1EB4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 184u, depth + 1u); else { c.pc = 0x002E1CD0u; return; } if (c.pc != 0x002E1EB4u) [[unlikely]] return; }
L_002E1EB4:
    set32(c.r[3], 0u + 2u);
    st32((c.r[16].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    st32((c.r[2].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    st32((c.r[2].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    st32((c.r[2].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    st32((c.r[2].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    st32((c.r[2].w[0] + 40u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    st32((c.r[2].w[0] + 44u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 32u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 32;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E1F40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[1].w[0] - 11520u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { goto L_002E1F60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002E1F6C; } }
L_002E1F60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1F68u); set32(c.r[4], ld32((c.r[1].w[0] - 11512u)));  if (depth < kMaxDepth) unit_0002(c, 506u, depth + 1u); else { c.pc = 0x0010BC50u; return; } if (c.pc != 0x002E1F68u) [[unlikely]] return; }
L_002E1F68:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002E1F6C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002E1F80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 13720u);
    st32((c.r[4].w[0] + 40u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 36u), 0u);  c.pc = t; return; }
L_002E1FA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002E1FDC; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 13720u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0] + 40u), c.r[3].w[0]);  if (t) { goto L_002E1FD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1FD8u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002E1FD8u) [[unlikely]] return; }
L_002E1FD8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002E1FDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E1FF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[4].w[0] + 36u), 0u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 10;
L_002E2018:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2024u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 342u, depth + 1u); else { c.pc = 0x0010EBA8u; return; } if (c.pc != 0x002E2024u) [[unlikely]] return; }
L_002E2024:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_002E2034; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002E2058; } }
L_002E2034:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002E2058; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002E204C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_002E204C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E2018u | kUnwind; return; } goto L_002E2018; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002E2058:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002E206C:
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 1;
L_002E2070:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_002E2080:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002E20B0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E20AC; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E20ACu); set32(c.r[5], ld32((c.r[16].w[0] + 24u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E20ACu) [[unlikely]] return; }
L_002E20AC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002E20B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E20C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 8672u);
    st32((c.r[29].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 11040u);
    set32(c.r[2], 0u + 4096u);
    st32((c.r[29].w[0] + 40u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], 0u + 20u);
    set32(c.r[2], c.r[2].w[0] + 6256u);
    st32((c.r[29].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E210Cu); st32((c.r[29].w[0] + 48u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0002(c, 436u, depth + 1u); else { c.pc = 0x0010BA20u; return; } if (c.pc != 0x002E210Cu) [[unlikely]] return; }
L_002E210C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002E2124; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2124u);  if (depth < kMaxDepth) unit_0002(c, 440u, depth + 1u); else { c.pc = 0x0010BA40u; return; } if (c.pc != 0x002E2124u) [[unlikely]] return; }
L_002E2124:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002E213C:
    c.budget -= 1;
L_002E2140:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2150u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002E2150u) [[unlikely]] return; }
L_002E2150:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E2160; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2160u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 220u, depth + 1u); else { c.pc = 0x002E20C0u; return; } if (c.pc != 0x002E2160u) [[unlikely]] return; }
L_002E2160:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], 0u + 3u);
    st32((c.r[1].w[0] - 11056u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2178u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0078(c, 238u, depth + 1u); else { c.pc = 0x002E2260u; return; } if (c.pc != 0x002E2178u) [[unlikely]] return; }
L_002E2178:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002E2190:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[2], c.r[2].w[0] - 5888u);  if (t) { goto L_002E21C8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E21B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_002E21D4; } }
L_002E21B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E21C0u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 217u, depth + 1u); else { c.pc = 0x002E2070u; return; } if (c.pc != 0x002E21C0u) [[unlikely]] return; }
L_002E21C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E21D0; } }
L_002E21C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E21D0u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 218u, depth + 1u); else { c.pc = 0x002E2080u; return; } if (c.pc != 0x002E21D0u) [[unlikely]] return; }
L_002E21D0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002E21D4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002E21E0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E21F0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 290u, depth + 1u); else { c.pc = 0x0010E468u; return; } if (c.pc != 0x002E21F0u) [[unlikely]] return; }
L_002E21F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E21F8u);  if (depth < kMaxDepth) unit_0002(c, 466u, depth + 1u); else { c.pc = 0x0010BB10u; return; } if (c.pc != 0x002E21F8u) [[unlikely]] return; }
L_002E21F8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2204u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0003(c, 368u, depth + 1u); else { c.pc = 0x0010EFA8u; return; } if (c.pc != 0x002E2204u) [[unlikely]] return; }
L_002E2204:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    set32(c.r[5], 0u + 512u);
    set32(c.r[6], c.r[6].w[0] + 8592u);
    set32(c.r[7], c.r[7].w[0] - 6912u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E222Cu); set32(c.r[10], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0003(c, 371u, depth + 1u); else { c.pc = 0x0010F040u; return; } if (c.pc != 0x002E222Cu) [[unlikely]] return; }
L_002E222C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2234u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0003(c, 398u, depth + 1u); else { c.pc = 0x0010F458u; return; } if (c.pc != 0x002E2234u) [[unlikely]] return; }
L_002E2234:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002E2240:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], 0u + 768u);
    set32(c.r[4], c.r[4].w[0] - 5824u);
    c.budget -= 5;
    { c.r[6].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E1FF0u | kUnwind; return; } goto L_002E1FF0; }
L_002E2260:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], c.r[3].w[0] - 5824u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_002E228C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 5788u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  if (t) { goto L_002E2290; } }
L_002E228C:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002E2290:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002E22B8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] - 5824u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E22B0u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0078(c, 171u, depth + 1u); else { c.pc = 0x002E1B50u; return; } if (c.pc != 0x002E22B0u) [[unlikely]] return; }
L_002E22B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E22B8u); set32(c.r[4], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0078(c, 206u, depth + 1u); else { c.pc = 0x002E1EA0u; return; } if (c.pc != 0x002E22B8u) [[unlikely]] return; }
L_002E22B8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002E22D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] - 3584u);
    set32(c.r[5], 0u + 769u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E22F4u); st8((c.r[1].w[0] - 3520u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0078(c, 213u, depth + 1u); else { c.pc = 0x002E1FF0u; return; } if (c.pc != 0x002E22F4u) [[unlikely]] return; }
L_002E22F4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] - 3584u);
    set32(c.r[6], 0u + 10u);
    set32(c.r[7], c.r[7].w[0] - 3712u);
    set32(c.r[8], 0u + 64u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E231Cu); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0078(c, 171u, depth + 1u); else { c.pc = 0x002E1B50u; return; } if (c.pc != 0x002E231Cu) [[unlikely]] return; }
L_002E231C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] + 9024u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2330u); st32((c.r[29].w[0] + 52u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0078(c, 206u, depth + 1u); else { c.pc = 0x002E1EA0u; return; } if (c.pc != 0x002E2330u) [[unlikely]] return; }
L_002E2330:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002E2340:
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_002E2358; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E2360; } }
L_002E2358:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st8((c.r[1].w[0] - 3520u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002E2360:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E2370:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[5].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] - 5760u);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { set32(c.r[6], 0u + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00124D20u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 40u, depth); }
L_002E2390:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[8], c.r[4].w[0] << 6);
    set32(c.r[3], c.r[3].w[0] - 5760u);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[11].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[9], 0u + 1u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    st32((c.r[11].w[0] + 12u), c.r[9].w[0]);
    set32(c.r[8], 0u + 2u);
    st32((c.r[11].w[0] + 28u), c.r[11].w[0]);
    set32(c.r[10], c.r[10].w[0] + 9072u);
    st32((c.r[11].w[0]), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00020000u);
    st32((c.r[11].w[0] + 4u), c.r[8].w[0]);
    c.r[2].d[0] = 0ull | 32768ull;
    st32((c.r[11].w[0] + 12u), c.r[9].w[0]);
    set32(c.r[8], 0u + 64u);
    st32((c.r[11].w[0] + 20u), c.r[10].w[0]);
    c.r[9].d[0] = 0ull + 0ull;
    st32((c.r[11].w[0] + 24u), c.r[4].w[0]);
    c.r[10].d[0] = 0ull + 0ull;
    st32((c.r[11].w[0] + 32u), c.r[5].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[11].w[0] + 40u), c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[11].w[0] + 44u), c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] - 3584u);
    st32((c.r[11].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[6], 0u + 11u);
    c.r[7].d[0] = c.r[11].d[0] + 0ull;
    c.budget -= 35;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E241Cu); st32((c.r[11].w[0] + 48u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0078(c, 171u, depth + 1u); else { c.pc = 0x002E1B50u; return; } if (c.pc != 0x002E241Cu) [[unlikely]] return; }
L_002E241C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2424u); set32(c.r[4], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0078(c, 206u, depth + 1u); else { c.pc = 0x002E1EA0u; return; } if (c.pc != 0x002E2424u) [[unlikely]] return; }
L_002E2424:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002E2430:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld8((c.r[1].w[0] - 3520u));  c.pc = t; return; }
L_002E2440:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2460u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 40u, depth + 1u); else { c.pc = 0x00148710u; return; } if (c.pc != 0x002E2460u) [[unlikely]] return; }
L_002E2460:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E246Cu); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 256u, depth + 1u); else { c.pc = 0x0013E440u; return; } if (c.pc != 0x002E246Cu) [[unlikely]] return; }
L_002E246C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 13792u);
    set32(c.r[3], c.r[3].w[0] + 13808u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[17].w[0] + 32u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[1].w[0] - 3512u), c.r[17].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E24B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002E251C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 13792u);
    set32(c.r[2], c.r[2].w[0] + 13808u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 32u);
    st32((c.r[17].w[0] + 32u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E24F8u); st32((c.r[1].w[0] - 3512u), 0u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E490u; return; } if (c.pc != 0x002E24F8u) [[unlikely]] return; }
L_002E24F8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2504u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 42u, depth + 1u); else { c.pc = 0x00148750u; return; } if (c.pc != 0x002E2504u) [[unlikely]] return; }
L_002E2504:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002E2520; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E251Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002E251Cu) [[unlikely]] return; }
L_002E251C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002E2520:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E2540:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E2550:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_002E256C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E256Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E256Cu) [[unlikely]] return; }
L_002E256C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002E2580:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E25A4u); st32((c.r[29].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002E25A4u) [[unlikely]] return; }
L_002E25A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E25ACu); set32(c.r[4], 0u + 40u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002E25ACu) [[unlikely]] return; }
L_002E25AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_002E25C4; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E25C4u); set32(c.r[5], c.r[5].w[0] - 23440u);  if (depth < kMaxDepth) unit_0078(c, 251u, depth + 1u); else { c.pc = 0x002E2440u; return; } if (c.pc != 0x002E25C4u) [[unlikely]] return; }
L_002E25C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E25CCu); set32(c.r[4], ld32((c.r[29].w[0] + 44u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002E25CCu) [[unlikely]] return; }
L_002E25CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E25E0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E261Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 40u, depth + 1u); else { c.pc = 0x00148710u; return; } if (c.pc != 0x002E261Cu) [[unlikely]] return; }
L_002E261C:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2628u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 256u, depth + 1u); else { c.pc = 0x0013E440u; return; } if (c.pc != 0x002E2628u) [[unlikely]] return; }
L_002E2628:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 13744u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 13760u);
    st32((c.r[17].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[2], 0u - 1u);
    st32((c.r[17].w[0] + 40u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[17].w[0] + 48u), c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] - 23424u);
    st32((c.r[17].w[0] + 92u), c.r[19].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0] + 76u), c.r[18].w[0]);
    st32((c.r[17].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] - 3504u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E267Cu); st32((c.r[1].w[0] - 3504u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x002E267Cu) [[unlikely]] return; }
L_002E267C:
    set32(c.r[4], c.r[17].w[0] + 100u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E268Cu); set32(c.r[6], 0u + 28u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x002E268Cu) [[unlikely]] return; }
L_002E268C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002E26B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002E2748; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 13744u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 13760u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 32u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st8((c.r[1].w[0] + 20016u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 3504u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 3504u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2718u); set32(c.r[4], c.r[4].w[0] - 23392u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x002E2718u) [[unlikely]] return; }
L_002E2718:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2724u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E490u; return; } if (c.pc != 0x002E2724u) [[unlikely]] return; }
L_002E2724:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2730u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 42u, depth + 1u); else { c.pc = 0x00148750u; return; } if (c.pc != 0x002E2730u) [[unlikely]] return; }
L_002E2730:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002E274C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2748u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002E2748u) [[unlikely]] return; }
L_002E2748:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002E274C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E2760:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[1].w[0] - 3504u)));  c.pc = t; return; }
L_002E2770:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[29].w[0] + 104u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2798u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0017(c, 125u, depth + 1u); else { c.pc = 0x0015D850u; return; } if (c.pc != 0x002E2798u) [[unlikely]] return; }
L_002E2798:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E27A0u);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x002E27A0u) [[unlikely]] return; }
L_002E27A0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E27B4u); st32((c.r[29].w[0] + 124u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002E27B4u) [[unlikely]] return; }
L_002E27B4:
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[19].w[0] + 100u);
    st8((c.r[1].w[0] + 20016u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E27D0u); set32(c.r[6], 0u + 28u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x002E27D0u) [[unlikely]] return; }
L_002E27D0:
    set32(c.r[4], c.r[29].w[0] + 104u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E27DCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x002E27DCu) [[unlikely]] return; }
L_002E27DC:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 104u);  if (t) { goto L_002E27F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E27F0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 143u, depth + 1u); else { c.pc = 0x0015DAE0u; return; } if (c.pc != 0x002E27F0u) [[unlikely]] return; }
L_002E27F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[2].w[0] + 63u);  if (t) { goto L_002E2800; } }
L_002E27F8:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] + 63u);
    c.budget -= 2;
L_002E2800:
    set32(c.r[4], c.r[29].w[0] + 104u);
    set32(c.r[2], 0u - 64u);
    set32(c.r[5], 0u + 1u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2818u); st32((c.r[19].w[0] + 116u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x002E2818u) [[unlikely]] return; }
L_002E2818:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 104u);  if (t) { goto L_002E2834; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E282Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 143u, depth + 1u); else { c.pc = 0x0015DAE0u; return; } if (c.pc != 0x002E282Cu) [[unlikely]] return; }
L_002E282C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[2].w[0] + 63u);  if (t) { goto L_002E283C; } }
L_002E2834:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] + 63u);
    c.budget -= 2;
L_002E283C:
    set32(c.r[4], c.r[29].w[0] + 104u);
    set32(c.r[2], 0u - 64u);
    set32(c.r[5], 0u + 2u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2854u); st32((c.r[19].w[0] + 104u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x002E2854u) [[unlikely]] return; }
L_002E2854:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 104u);  if (t) { goto L_002E2870; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2868u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 143u, depth + 1u); else { c.pc = 0x0015DAE0u; return; } if (c.pc != 0x002E2868u) [[unlikely]] return; }
L_002E2868:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[2].w[0] + 63u);  if (t) { goto L_002E2878; } }
L_002E2870:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] + 63u);
    c.budget -= 2;
L_002E2878:
    set32(c.r[4], c.r[29].w[0] + 104u);
    set32(c.r[2], 0u - 64u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2890u); st32((c.r[19].w[0] + 124u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x002E2890u) [[unlikely]] return; }
L_002E2890:
    st32((c.r[19].w[0] + 112u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 104u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E28A0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x002E28A0u) [[unlikely]] return; }
L_002E28A0:
    st32((c.r[19].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 104u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E28B0u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x002E28B0u) [[unlikely]] return; }
L_002E28B0:
    st32((c.r[19].w[0] + 120u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E28BCu); set32(c.r[4], ld32((c.r[19].w[0] + 104u)));  if (depth < kMaxDepth) unit_0069(c, 82u, depth + 1u); else { c.pc = 0x002A5360u; return; } if (c.pc != 0x002E28BCu) [[unlikely]] return; }
L_002E28BC:
    st32((c.r[19].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[19].w[0] + 100u)));
    set32(c.r[6], ld32((c.r[19].w[0] + 108u)));
    set32(c.r[7], ld32((c.r[19].w[0] + 104u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E28D4u); set32(c.r[4], ld32((c.r[19].w[0] + 48u)));  if (depth < kMaxDepth) unit_0078(c, 247u, depth + 1u); else { c.pc = 0x002E2390u; return; } if (c.pc != 0x002E28D4u) [[unlikely]] return; }
L_002E28D4:
    set32(c.r[5], ld32((c.r[19].w[0] + 120u)));
    set32(c.r[4], c.r[29].w[0] + 88u);
    set32(c.r[6], ld32((c.r[19].w[0] + 124u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E28E8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 125u, depth + 1u); else { c.pc = 0x0015D850u; return; } if (c.pc != 0x002E28E8u) [[unlikely]] return; }
L_002E28E8:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20430000u);
    c.r[2].d[0] = c.r[2].d[0] | 16720ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002E2904; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 1;
L_002E2904:
    st32((c.r[19].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 84u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_002E29B4; } }
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2924u); st32((c.r[29].w[0] + 120u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002E2924u) [[unlikely]] return; }
L_002E2924:
    set32(c.r[3], ld32((c.r[19].w[0] + 84u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2938u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x002E2938u) [[unlikely]] return; }
L_002E2938:
    st32((c.r[19].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 88u);
    set32(c.r[18], ld32((c.r[19].w[0] + 80u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E294Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x002E294Cu) [[unlikely]] return; }
L_002E294C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002E2994; } }
L_002E2958:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2960u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x002E2960u) [[unlikely]] return; }
L_002E2960:
    set32(c.r[2], c.r[2].w[0] - c.r[17].w[0]);
    set32(c.r[4], c.r[29].w[0] + 88u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2974u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 143u, depth + 1u); else { c.pc = 0x0015DAE0u; return; } if (c.pc != 0x002E2974u) [[unlikely]] return; }
L_002E2974:
    set32(c.r[3], c.r[2].w[0] + 15u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], 0u - 16u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[2], 0u - 1u);
    st32((c.r[18].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[18], c.r[18].w[0] + 12u);
    c.budget -= 8;
L_002E2994:
    set32(c.r[2], ld32((c.r[19].w[0] + 84u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 88u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E2958u | kUnwind; return; } goto L_002E2958; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E29ACu); set32(c.r[4], ld32((c.r[29].w[0] + 120u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002E29ACu) [[unlikely]] return; }
L_002E29AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[19].w[0] + 124u)));  if (t) { goto L_002E29BC; } }
L_002E29B4:
    st32((c.r[19].w[0] + 80u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 124u)));
    c.budget -= 2;
L_002E29BC:
    set32(c.r[4], c.r[29].w[0] + 88u);
    set32(c.r[5], 0u - 1u);
    st32((c.r[19].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 116u)));
    st32((c.r[19].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 104u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E29DCu); st32((c.r[19].w[0] + 72u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x002E29DCu) [[unlikely]] return; }
L_002E29DC:
    set32(c.r[4], ld32((c.r[19].w[0] + 48u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E29E8u); set32(c.r[5], c.r[19].w[0] + 100u);  if (depth < kMaxDepth) unit_0078(c, 156u, depth + 1u); else { c.pc = 0x002E19C0u; return; } if (c.pc != 0x002E29E8u) [[unlikely]] return; }
L_002E29E8:
    set32(c.r[2], 0u + 1u);
    st32((c.r[19].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E29F8u); set32(c.r[4], ld32((c.r[29].w[0] + 124u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002E29F8u) [[unlikely]] return; }
L_002E29F8:
    set32(c.r[4], c.r[29].w[0] + 104u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2A04u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x002E2A04u) [[unlikely]] return; }
L_002E2A04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002E2A20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002E2B7C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_002E2A7C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E2A6C; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002E2A6C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2A6Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E2A6Cu) [[unlikely]] return; }
L_002E2A6C:
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 44u), c.r[3].w[0]);  if (t) { goto L_002E2B7C; } }
L_002E2A7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2A84u); set32(c.r[4], ld32((c.r[17].w[0] + 48u)));  if (depth < kMaxDepth) unit_0078(c, 152u, depth + 1u); else { c.pc = 0x002E1910u; return; } if (c.pc != 0x002E2A84u) [[unlikely]] return; }
L_002E2A84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E2B7C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] - 23680u);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 80u)));
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 15;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002E2ADC; } }
L_002E2AC8:
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 12u);
    c.budget -= 5;
L_002E2ADC:
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E2AC8u | kUnwind; return; } goto L_002E2AC8; } }
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2AFCu); st32((c.r[29].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002E2AFCu) [[unlikely]] return; }
L_002E2AFC:
    set32(c.r[3], ld32((c.r[17].w[0] + 92u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2B18u); set32(c.r[4], c.r[2].w[0] << 3);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x002E2B18u) [[unlikely]] return; }
L_002E2B18:
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002E2B4C; } }
L_002E2B24:
    set32(c.r[2], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[5], 0u + 1544u);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2B48u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x002E2B48u) [[unlikely]] return; }
L_002E2B48:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002E2B4C:
    set32(c.r[2], ld32((c.r[17].w[0] + 92u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E2B24u | kUnwind; return; } goto L_002E2B24; } }
    st8((c.r[17].w[0] + 96u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2B68u); set32(c.r[4], ld32((c.r[29].w[0] + 60u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002E2B68u) [[unlikely]] return; }
L_002E2B68:
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2B74u); set32(c.r[5], c.r[17].w[0] + 52u);  if (depth < kMaxDepth) unit_0078(c, 374u, depth + 1u); else { c.pc = 0x002E3320u; return; } if (c.pc != 0x002E2B74u) [[unlikely]] return; }
L_002E2B74:
    set32(c.r[3], 0u + 15u);
    st32((c.r[17].w[0] + 44u), c.r[3].w[0]);
    c.budget -= 2;
L_002E2B7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002E2B90:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[1].w[0] - 11496u)));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_002E2C14; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2BE4u); st32((c.r[29].w[0] + 108u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002E2BE4u) [[unlikely]] return; }
L_002E2BE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2BECu); set32(c.r[4], 0u + 128u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002E2BECu) [[unlikely]] return; }
L_002E2BEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002E2C0C; } }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2C0Cu); c.r[9].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 266u, depth + 1u); else { c.pc = 0x002E25E0u; return; } if (c.pc != 0x002E2C0Cu) [[unlikely]] return; }
L_002E2C0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2C14u); set32(c.r[4], ld32((c.r[29].w[0] + 108u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002E2C14u) [[unlikely]] return; }
L_002E2C14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002E2C40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[1].w[0] - 11496u)));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002E2CB0; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_002E2CA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2C74u);  if (depth < kMaxDepth) unit_0069(c, 83u, depth + 1u); else { c.pc = 0x002A53A0u; return; } if (c.pc != 0x002E2C74u) [[unlikely]] return; }
L_002E2C74:
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_002E2C78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2C80u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 153u, depth + 1u); else { c.pc = 0x002E1930u; return; } if (c.pc != 0x002E2C80u) [[unlikely]] return; }
L_002E2C80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2C88u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 346u, depth + 1u); else { c.pc = 0x002E2EB0u; return; } if (c.pc != 0x002E2C88u) [[unlikely]] return; }
L_002E2C88:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E2C78u | kUnwind; return; } goto L_002E2C78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002E2CB4; } }
L_002E2CA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2CA8u);  if (depth < kMaxDepth) unit_0078(c, 153u, depth + 1u); else { c.pc = 0x002E1930u; return; } if (c.pc != 0x002E2CA8u) [[unlikely]] return; }
L_002E2CA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2CB0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 346u, depth + 1u); else { c.pc = 0x002E2EB0u; return; } if (c.pc != 0x002E2CB0u) [[unlikely]] return; }
L_002E2CB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002E2CB4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E2CC0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 2560u);
    set32(c.r[5], 0u + 768u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2CDCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x002E2CDCu) [[unlikely]] return; }
L_002E2CDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2CE4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0079(c, 54u, depth + 1u); else { c.pc = 0x002E4858u; return; } if (c.pc != 0x002E2CE4u) [[unlikely]] return; }
L_002E2CE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2CECu); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0079(c, 55u, depth + 1u); else { c.pc = 0x002E4860u; return; } if (c.pc != 0x002E2CECu) [[unlikely]] return; }
L_002E2CEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2CF4u);  if (depth < kMaxDepth) unit_0078(c, 340u, depth + 1u); else { c.pc = 0x002E2E30u; return; } if (c.pc != 0x002E2CF4u) [[unlikely]] return; }
L_002E2CF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2CFCu);  if (depth < kMaxDepth) unit_0069(c, 81u, depth + 1u); else { c.pc = 0x002A5320u; return; } if (c.pc != 0x002E2CFCu) [[unlikely]] return; }
L_002E2CFC:
    set32(c.r[16], c.r[29].w[0] + 88u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0]), 0u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2D18u); st32((c.r[29].w[0] + 100u), 0u);  if (depth < kMaxDepth) unit_0002(c, 500u, depth + 1u); else { c.pc = 0x0010BC20u; return; } if (c.pc != 0x002E2D18u) [[unlikely]] return; }
L_002E2D18:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2D28u); st32((c.r[1].w[0] - 3488u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0002(c, 500u, depth + 1u); else { c.pc = 0x0010BC20u; return; } if (c.pc != 0x002E2D28u) [[unlikely]] return; }
L_002E2D28:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    st32((c.r[1].w[0] - 3472u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2D40u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0002(c, 500u, depth + 1u); else { c.pc = 0x0010BC20u; return; } if (c.pc != 0x002E2D40u) [[unlikely]] return; }
L_002E2D40:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    st32((c.r[1].w[0] - 3480u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 6256u);
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    set32(c.r[2], c.r[2].w[0] + 14304u);
    st32((c.r[29].w[0] + 36u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] - 3488u);
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[2], 0u + 20u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2D84u); st32((c.r[29].w[0] + 52u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0002(c, 436u, depth + 1u); else { c.pc = 0x0010BA20u; return; } if (c.pc != 0x002E2D84u) [[unlikely]] return; }
L_002E2D84:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[1].w[0] - 11496u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 11496u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2DA0u); set32(c.r[5], c.r[5].w[0] - 3488u);  if (depth < kMaxDepth) unit_0002(c, 440u, depth + 1u); else { c.pc = 0x0010BA40u; return; } if (c.pc != 0x002E2DA0u) [[unlikely]] return; }
L_002E2DA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002E2DB0:
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
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2DE4u); c.r[16].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 384u, depth + 1u); else { c.pc = 0x002E3480u; return; } if (c.pc != 0x002E2DE4u) [[unlikely]] return; }
L_002E2DE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 13u);  if (t) { goto L_002E2DF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002E2E10; } }
L_002E2DF4:
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[20].w[0]);
    st32((c.r[2].w[0] + 24u), c.r[18].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[19].w[0]);
    st32((c.r[2].w[0] + 16u), c.r[17].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[16].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 7;
L_002E2E10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002E2E30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], 0u + 143u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2E48u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0079(c, 58u, depth + 1u); else { c.pc = 0x002E4890u; return; } if (c.pc != 0x002E2E48u) [[unlikely]] return; }
L_002E2E48:
    set32(c.r[4], 0u + 3u);
    set32(c.r[5], 0u + 131u);
    set32(c.r[6], 0u + 260u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2E60u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0079(c, 58u, depth + 1u); else { c.pc = 0x002E4890u; return; } if (c.pc != 0x002E2E60u) [[unlikely]] return; }
L_002E2E60:
    set32(c.r[4], 0u + 3u);
    set32(c.r[5], 0u + 130u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2E70u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0079(c, 58u, depth + 1u); else { c.pc = 0x002E4890u; return; } if (c.pc != 0x002E2E70u) [[unlikely]] return; }
L_002E2E70:
    set32(c.r[6], 0u + 8u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[5], 0u + 132u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2E84u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0079(c, 58u, depth + 1u); else { c.pc = 0x002E4890u; return; } if (c.pc != 0x002E2E84u) [[unlikely]] return; }
L_002E2E84:
    set32(c.r[6], 0u + 127u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[5], 0u + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2E98u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0079(c, 58u, depth + 1u); else { c.pc = 0x002E4890u; return; } if (c.pc != 0x002E2E98u) [[unlikely]] return; }
L_002E2E98:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002E2EB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], c.r[4].w[0] << 1);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 2560u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 44u));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 48u);  if (t) { goto L_002E2EF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2EECu);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x002E2EECu) [[unlikely]] return; }
L_002E2EEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002E2F18; } }
L_002E2EF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2EFCu);  if (depth < kMaxDepth) unit_0078(c, 384u, depth + 1u); else { c.pc = 0x002E3480u; return; } if (c.pc != 0x002E2EFCu) [[unlikely]] return; }
L_002E2EFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 5u);  if (t) { goto L_002E2F0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002E2F18; } }
L_002E2F0C:
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_002E2F18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E2F30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] - 2560u);
    set32(c.r[3], c.r[3].w[0] << 4);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[18].w[0] + 44u));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E2F7C; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2F74u); set32(c.r[5], 0u + 48u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x002E2F74u) [[unlikely]] return; }
L_002E2F74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_002E315C; } }
L_002E2F7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002E2FBC; } }
L_002E2F84:
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 10;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002E2FB8; } }
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2FB8u); set32(c.r[5], 0u + 31u);  if (depth < kMaxDepth) unit_0079(c, 67u, depth + 1u); else { c.pc = 0x002E4AD0u; return; } if (c.pc != 0x002E2FB8u) [[unlikely]] return; }
L_002E2FB8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002E2FBC:
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E2F84u | kUnwind; return; } goto L_002E2F84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[18].w[0] + 40u)));  if (t) { goto L_002E3110; } }
L_002E2FD4:
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[3], c.r[17].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[16], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 10;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002E3010; } }
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] < 0; set32(c.r[4], 0u + 5u);  if (t) { goto L_002E3010; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3010u);  if (depth < kMaxDepth) unit_0079(c, 64u, depth + 1u); else { c.pc = 0x002E4A28u; return; } if (c.pc != 0x002E3010u) [[unlikely]] return; }
L_002E3010:
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002E3084; } }
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_002E3084; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 5u);  if (t) { goto L_002E307C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 5u);  if (t) { goto L_002E306C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], 0u + 5u);  if (t) { goto L_002E305C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[18].w[0] + 36u)));  if (t) { goto L_002E3088; } }
L_002E305C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3064u);  if (depth < kMaxDepth) unit_0079(c, 73u, depth + 1u); else { c.pc = 0x002E4C40u; return; } if (c.pc != 0x002E3064u) [[unlikely]] return; }
L_002E3064:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E3084; } }
L_002E306C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3074u);  if (depth < kMaxDepth) unit_0079(c, 88u, depth + 1u); else { c.pc = 0x002E4F90u; return; } if (c.pc != 0x002E3074u) [[unlikely]] return; }
L_002E3074:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E3084; } }
L_002E307C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3084u);  if (depth < kMaxDepth) unit_0079(c, 82u, depth + 1u); else { c.pc = 0x002E4E38u; return; } if (c.pc != 0x002E3084u) [[unlikely]] return; }
L_002E3084:
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 1;
L_002E3088:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] < 0; set32(c.r[4], 0u + 3u);  if (t) { goto L_002E30A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E30A0u);  if (depth < kMaxDepth) unit_0079(c, 64u, depth + 1u); else { c.pc = 0x002E4A28u; return; } if (c.pc != 0x002E30A0u) [[unlikely]] return; }
L_002E30A0:
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_002E3108; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002E3100; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002E30F0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002E30E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_002E310C; } }
L_002E30E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E30E8u);  if (depth < kMaxDepth) unit_0079(c, 73u, depth + 1u); else { c.pc = 0x002E4C40u; return; } if (c.pc != 0x002E30E8u) [[unlikely]] return; }
L_002E30E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E3108; } }
L_002E30F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E30F8u);  if (depth < kMaxDepth) unit_0079(c, 88u, depth + 1u); else { c.pc = 0x002E4F90u; return; } if (c.pc != 0x002E30F8u) [[unlikely]] return; }
L_002E30F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E3108; } }
L_002E3100:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3108u);  if (depth < kMaxDepth) unit_0079(c, 82u, depth + 1u); else { c.pc = 0x002E4E38u; return; } if (c.pc != 0x002E3108u) [[unlikely]] return; }
L_002E3108:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002E310C:
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    c.budget -= 1;
L_002E3110:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E2FD4u | kUnwind; return; } goto L_002E2FD4; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E3130; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3130u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x002E3130u) [[unlikely]] return; }
L_002E3130:
    st32((c.r[18].w[0] + 28u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E3148; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3148u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x002E3148u) [[unlikely]] return; }
L_002E3148:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3158u); st32((c.r[18].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x002E3158u) [[unlikely]] return; }
L_002E3158:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002E315C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002E3170:
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 2560u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], 0u + 3u);
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[8], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[9], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E31B0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0079(c, 61u, depth + 1u); else { c.pc = 0x002E4950u; return; } if (c.pc != 0x002E31B0u) [[unlikely]] return; }
L_002E31B0:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002E3220; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[4], 0u + 5u);
    set32(c.r[5], 0u - 1u);
    set32(c.r[6], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E31D4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0079(c, 61u, depth + 1u); else { c.pc = 0x002E4950u; return; } if (c.pc != 0x002E31D4u) [[unlikely]] return; }
L_002E31D4:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_002E3220; } }
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u - 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E31F4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0079(c, 85u, depth + 1u); else { c.pc = 0x002E4EE0u; return; } if (c.pc != 0x002E31F4u) [[unlikely]] return; }
L_002E31F4:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; st32((c.r[3].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_002E3220; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[6], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3214u); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_0079(c, 85u, depth + 1u); else { c.pc = 0x002E4EE0u; return; } if (c.pc != 0x002E3214u) [[unlikely]] return; }
L_002E3214:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002E3220; } }
    st8((c.r[16].w[0] + 44u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002E3220:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E3230:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[3].w[0] - 2560u);
    set32(c.r[4], c.r[4].w[0] << 4);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_002E32E8; } }
L_002E3264:
    set32(c.r[6], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[4], 0u + 3u);
    set32(c.r[7], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[8], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[9], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3280u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0079(c, 61u, depth + 1u); else { c.pc = 0x002E4950u; return; } if (c.pc != 0x002E3280u) [[unlikely]] return; }
L_002E3280:
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[4], c.r[17].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[4].w[0] << 6);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[16], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0; st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002E32E4; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[4], 0u + 5u);
    set32(c.r[5], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E32C0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0079(c, 61u, depth + 1u); else { c.pc = 0x002E4950u; return; } if (c.pc != 0x002E32C0u) [[unlikely]] return; }
L_002E32C0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002E32E4; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0] + 12u), c.r[4].w[0]);
    c.budget -= 7;
L_002E32E4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002E32E8:
    set32(c.r[3], ld32((c.r[18].w[0] + 40u)));
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E3264u | kUnwind; return; } goto L_002E3264; } }
    st8((c.r[18].w[0] + 44u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002E3320:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], c.r[4].w[0] << 1);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 2560u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[6], 0u + 48u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3358u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x002E3358u) [[unlikely]] return; }
L_002E3358:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3360u);  if (depth < kMaxDepth) unit_0078(c, 384u, depth + 1u); else { c.pc = 0x002E3480u; return; } if (c.pc != 0x002E3360u) [[unlikely]] return; }
L_002E3360:
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_002E339C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 4u);  if (t) { goto L_002E3394; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002E338C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 4u), c.r[16].w[0]);  if (t) { goto L_002E33A4; } }
L_002E338C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[4].w[0]);  if (t) { goto L_002E33A0; } }
L_002E3394:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_002E33A0; } }
L_002E339C:
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_002E33A0:
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 1;
L_002E33A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E33C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[6].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_002E33E4; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E33DCu); set32(c.r[5], 0u + 113u);  if (depth < kMaxDepth) unit_0079(c, 67u, depth + 1u); else { c.pc = 0x002E4AD0u; return; } if (c.pc != 0x002E33DCu) [[unlikely]] return; }
L_002E33DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_002E33F8; } }
L_002E33E4:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 113u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E33F4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0079(c, 67u, depth + 1u); else { c.pc = 0x002E4AD0u; return; } if (c.pc != 0x002E33F4u) [[unlikely]] return; }
L_002E33F4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002E33F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002E3400:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[1].w[0] - 3488u)));
    c.budget -= 6;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_002E3420; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3420u);  if (depth < kMaxDepth) unit_0002(c, 506u, depth + 1u); else { c.pc = 0x0010BC50u; return; } if (c.pc != 0x002E3420u) [[unlikely]] return; }
L_002E3420:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002E3430:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] - 3456u);  if (t) { goto L_002E3464; } }
L_002E3440:
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E3460; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E3474; } }
L_002E3460:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_002E3464:
    c.r[2].d[0] = c.r[5].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[5].w[0] << 3);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E3440u | kUnwind; return; } goto L_002E3440; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002E3474:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E3480:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[4].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[3].w[0] - 3456u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002E3544; } }
L_002E34A0:
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[16], c.r[2].w[0] << 2);
    set32(c.r[17], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E3540; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E34C4u); set32(c.r[5], 0u + 28u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x002E34C4u) [[unlikely]] return; }
L_002E34C4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] - 3442u);
    set32(c.r[4], c.r[4].w[0] - 3448u);
    set32(c.r[8], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[5], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], c.r[3].w[0] - 3445u);
    set32(c.r[4], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[7], 0u + 8192u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st16((c.r[8].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[6], 0u + 64u);
    set32(c.r[3], c.r[3].w[0] - 3444u);
    set32(c.r[5], 0u + 127u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] - 3443u);
    set32(c.r[4], c.r[3].w[0] + c.r[16].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], c.r[3].w[0] - 3440u);
    st16((c.r[8].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 31;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), 0u);  if (t) { goto L_002E3554; } }
L_002E3540:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_002E3544:
    c.r[2].d[0] = c.r[4].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] << 3);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E34A0u | kUnwind; return; } goto L_002E34A0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002E3554:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E3570:
    set32(c.r[9], ld32((c.r[4].w[0] + 40u)));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 3u);  if (t) { goto L_002E35D0; } }
L_002E3580:
    set32(c.r[8], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[7], c.r[3].w[0] << 3);
    set32(c.r[6], c.r[8].w[0] + c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.budget -= 10;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_002E35CC; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E35BC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_002E35CC; } }
L_002E35BC:
    set32(c.r[3], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 4u), c.r[4].w[0]);  if (t) { goto L_002E35E0; } }
L_002E35CC:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_002E35D0:
    c.r[3].d[0] = c.r[2].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E3580u | kUnwind; return; } goto L_002E3580; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_002E35E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E35F0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E361Cu); c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 387u, depth + 1u); else { c.pc = 0x002E3570u; return; } if (c.pc != 0x002E361Cu) [[unlikely]] return; }
L_002E361C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_002E3634; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_002E36E8; } }
L_002E3634:
    set32(c.r[3], ld32((c.r[20].w[0] + 36u)));
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[16], c.r[2].w[0] << 3);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 10;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[2], c.r[19].w[0] << 1);  if (t) { goto L_002E3680; } }
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3668u); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_0079(c, 73u, depth + 1u); else { c.pc = 0x002E4C40u; return; } if (c.pc != 0x002E3668u) [[unlikely]] return; }
L_002E3668:
    set32(c.r[2], ld32((c.r[20].w[0] + 36u)));
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E367Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0079(c, 73u, depth + 1u); else { c.pc = 0x002E4C40u; return; } if (c.pc != 0x002E367Cu) [[unlikely]] return; }
L_002E367C:
    set32(c.r[2], c.r[19].w[0] << 1);
    c.budget -= 1;
L_002E3680:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    set32(c.r[7], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E36A0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0079(c, 70u, depth + 1u); else { c.pc = 0x002E4B90u; return; } if (c.pc != 0x002E36A0u) [[unlikely]] return; }
L_002E36A0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_002E36B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_002E36E4; } }
L_002E36B0:
    set32(c.r[3], ld32((c.r[20].w[0] + 36u)));
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[6], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E36D4u); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_0079(c, 70u, depth + 1u); else { c.pc = 0x002E4B90u; return; } if (c.pc != 0x002E36D4u) [[unlikely]] return; }
L_002E36D4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_002E36E0; } }
    set32(c.r[17], 0u - 1u);
    c.budget -= 1;
L_002E36E0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002E36E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_002E36E8:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002E3710:
    c.r[9].d[0] = c.r[7].d[0] + 0ull;
    c.r[1].d[0] = c.r[9].d[0] < static_cast<std::uint64_t>(16384ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_002E3724; } }
    set32(c.r[9], 0u + 16383u);
    c.budget -= 1;
L_002E3724:
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { set32(c.r[5], 0u + 65u);  [[clang::musttail]] return unit_0079(c, 91u, depth); }
L_002E3740:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    c.r[10].d[0] = c.r[7].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[11].d[0] = c.r[9].d[0] + 0ull;
    c.r[2].d[0] = c.r[8].d[0] & 127ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], 0u + 17u);
    st64((c.r[29].w[0]), c.r[2].d[0]);
    c.r[8].d[0] = c.r[3].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3774u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0079(c, 91u, depth + 1u); else { c.pc = 0x002E5038u; return; } if (c.pc != 0x002E3774u) [[unlikely]] return; }
L_002E3774:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E3780:
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[10].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], 0u + 19u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E37ACu); st64((c.r[29].w[0]), 0ull);  if (depth < kMaxDepth) unit_0079(c, 91u, depth + 1u); else { c.pc = 0x002E5038u; return; } if (c.pc != 0x002E37ACu) [[unlikely]] return; }
L_002E37AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E37C0:
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    c.r[9].d[0] = c.r[7].d[0] & 127ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { set32(c.r[5], 0u + 66u);  [[clang::musttail]] return unit_0079(c, 91u, depth); }
L_002E37E0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
L_002E380C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3818u); set32(c.r[4], ld32((c.r[1].w[0] - 3488u)));  if (depth < kMaxDepth) unit_0002(c, 508u, depth + 1u); else { c.pc = 0x0010BC60u; return; } if (c.pc != 0x002E3818u) [[unlikely]] return; }
L_002E3818:
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[19].w[0] << 1);
    c.budget -= 2;
L_002E3820:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[2], c.r[2].w[0] - 2560u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[18].w[0] + 44u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E38B8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002E38B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[18].w[0] + 40u)));  if (t) { goto L_002E38AC; } }
L_002E3854:
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[4].w[0] << 6);
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[16], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E38A4; } }
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E388Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0079(c, 79u, depth + 1u); else { c.pc = 0x002E4D98u; return; } if (c.pc != 0x002E388Cu) [[unlikely]] return; }
L_002E388C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E38A4; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[3], 0u + 3u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
L_002E38A4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    c.budget -= 2;
L_002E38AC:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E3854u | kUnwind; return; } goto L_002E3854; } }
L_002E38B8:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[19].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E3820u | kUnwind; return; } goto L_002E3820; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0079(c, 26u, depth); } }
L_002E38D0:
    set32(c.r[3], ld32((c.r[21].w[0])));
    set32(c.r[2], 0u + 12u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 10u);  if (t) { [[clang::musttail]] return unit_0079(c, 22u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_0079(c, 19u, depth); } }
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 9u);  if (t) { [[clang::musttail]] return unit_0079(c, 16u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_0079(c, 13u, depth); } }
    set32(c.r[2], 0u + 23u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 24u);  if (t) { [[clang::musttail]] return unit_0079(c, 7u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_0079(c, 3u, depth); } }
    set32(c.r[2], 0u + 19u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 20u);  if (t) { goto L_002E3F74; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_0079(c, 25u, depth); } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 29u);  if (t) { goto L_002E3ECC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_0079(c, 25u, depth); } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[20], 0u + 2u);  if (t) { goto L_002E3EBC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[20].d[0]; set32(c.r[2], 0u + 26u);  if (t) { goto L_002E3EAC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002E3D7C; } }
    set32(c.r[2], 0u + 25u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_002E3C5C; } }
    set32(c.r[2], 0u + 18u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 17u);  if (t) { goto L_002E3B14; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E39D4; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 13u);  if (t) { goto L_002E39C4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E3990; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0]), 0u);  if (t) { [[clang::musttail]] return unit_0079(c, 26u, depth); } }
L_002E3990:
    set32(c.r[6], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[4], 0u + 3u);
    set32(c.r[7], ld32((c.r[21].w[0] + 16u)));
    set32(c.r[8], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E39A8u); set32(c.r[5], 0u + 131u);  if (depth < kMaxDepth) unit_0079(c, 58u, depth + 1u); else { c.pc = 0x002E4890u; return; } if (c.pc != 0x002E39A8u) [[unlikely]] return; }
L_002E39A8:
    set32(c.r[6], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[4], 0u + 3u);
    set32(c.r[7], ld32((c.r[21].w[0] + 24u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E39BCu); set32(c.r[5], 0u + 132u);  if (depth < kMaxDepth) unit_0079(c, 58u, depth + 1u); else { c.pc = 0x002E4890u; return; } if (c.pc != 0x002E39BCu) [[unlikely]] return; }
L_002E39BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0079(c, 25u, depth); } }
L_002E39C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E39CCu); set32(c.r[4], ld32((c.r[21].w[0] + 4u)));  if (depth < kMaxDepth) unit_0078(c, 349u, depth + 1u); else { c.pc = 0x002E2F30u; return; } if (c.pc != 0x002E39CCu) [[unlikely]] return; }
L_002E39CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0079(c, 25u, depth); } }
L_002E39D4:
    set32(c.r[3], c.r[20].w[0] << 1);
    c.budget -= 1;
L_002E39D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    set32(c.r[2], c.r[2].w[0] - 2560u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[19].w[0] + 44u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002E3AFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[19].w[0] + 40u)));  if (t) { goto L_002E3AF0; } }
L_002E3A00:
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[3], c.r[18].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[16], c.r[3].w[0] << 3);
    set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 10;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002E3AE8; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002E3A78; } }
    goto L_002E3A34;
L_002E3A30:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002E3A34:
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3A40u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0079(c, 79u, depth + 1u); else { c.pc = 0x002E4D98u; return; } if (c.pc != 0x002E3A40u) [[unlikely]] return; }
L_002E3A40:
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002E3AE8; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[5], 0u + 3u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3A64u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0079(c, 76u, depth + 1u); else { c.pc = 0x002E4CE0u; return; } if (c.pc != 0x002E3A64u) [[unlikely]] return; }
L_002E3A64:
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_002E3AE8; } }
L_002E3A78:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E3AE8; } }
    set32(c.r[2], 0u + 2u);
    c.r[23].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[17], c.r[2].w[0] + 20u);
    c.budget -= 6;
L_002E3A98:
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3AB0u); set32(c.r[5], 0u + 17u);  if (depth < kMaxDepth) unit_0079(c, 94u, depth + 1u); else { c.pc = 0x002E5138u; return; } if (c.pc != 0x002E3AB0u) [[unlikely]] return; }
L_002E3AB0:
    set32(c.r[3], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002E3AD8; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[6].d[0] = ld8((c.r[17].w[0] + 2u));
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3AD8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0078(c, 400u, depth + 1u); else { c.pc = 0x002E37C0u; return; } if (c.pc != 0x002E3AD8u) [[unlikely]] return; }
L_002E3AD8:
    set32(c.r[23], c.r[23].w[0] + 1u);
    c.r[2].d[0] = c.r[23].sd[0] < 127ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E3A98u | kUnwind; return; } goto L_002E3A98; } }
L_002E3AE8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[2], ld32((c.r[19].w[0] + 40u)));
    c.budget -= 2;
L_002E3AF0:
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E3A00u | kUnwind; return; } goto L_002E3A00; } }
L_002E3AFC:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[20].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E39D8u | kUnwind; return; } goto L_002E39D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0079(c, 25u, depth); } }
L_002E3B14:
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[20].w[0] << 1);
    c.budget -= 2;
L_002E3B1C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    set32(c.r[2], c.r[2].w[0] - 2560u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[19].w[0] + 44u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002E3C44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[19].w[0] + 40u)));  if (t) { goto L_002E3C38; } }
L_002E3B44:
    set32(c.r[3], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[2], c.r[18].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[16], c.r[2].w[0] << 3);
    set32(c.r[6], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 10;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002E3C30; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002E3BB4; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E3BB0; } }
    set32(c.r[4], ld32((c.r[6].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[7], ld32((c.r[6].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3B9Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0079(c, 76u, depth + 1u); else { c.pc = 0x002E4CE0u; return; } if (c.pc != 0x002E3B9Cu) [[unlikely]] return; }
L_002E3B9C:
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_002E3C24; } }
L_002E3BB0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002E3BB4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_002E3C24; } }
    c.r[23].d[0] = 0ull + 0ull;
    st32((c.r[6].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[17], c.r[2].w[0] + 20u);
    c.budget -= 5;
L_002E3BD0:
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3BE8u); set32(c.r[5], 0u + 17u);  if (depth < kMaxDepth) unit_0079(c, 94u, depth + 1u); else { c.pc = 0x002E5138u; return; } if (c.pc != 0x002E3BE8u) [[unlikely]] return; }
L_002E3BE8:
    set32(c.r[3], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 32u);  if (t) { goto L_002E3BFC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002E3C14; } }
L_002E3BFC:
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    c.r[6].d[0] = ld8((c.r[17].w[0] + 2u));
    c.r[7].d[0] = ld8((c.r[17].w[0] + 4u));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3C14u); c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0078(c, 400u, depth + 1u); else { c.pc = 0x002E37C0u; return; } if (c.pc != 0x002E3C14u) [[unlikely]] return; }
L_002E3C14:
    set32(c.r[23], c.r[23].w[0] + 1u);
    c.r[2].d[0] = c.r[23].sd[0] < 127ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E3BD0u | kUnwind; return; } goto L_002E3BD0; } }
L_002E3C24:
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0] + 4u), 0u);
    c.budget -= 3;
L_002E3C30:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[2], ld32((c.r[19].w[0] + 40u)));
    c.budget -= 2;
L_002E3C38:
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E3B44u | kUnwind; return; } goto L_002E3B44; } }
L_002E3C44:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[20].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E3B1Cu | kUnwind; return; } goto L_002E3B1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0079(c, 25u, depth); } }
L_002E3C5C:
    set32(c.r[3], c.r[19].w[0] << 1);
    c.budget -= 1;
L_002E3C60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[2], c.r[2].w[0] - 2560u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[18].w[0] + 44u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002E3D64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[18].w[0] + 40u)));  if (t) { goto L_002E3D58; } }
L_002E3C88:
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[3], c.r[17].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[16], c.r[3].w[0] << 3);
    set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 10;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002E3D50; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002E3CDC; } }
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3CCCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0079(c, 76u, depth + 1u); else { c.pc = 0x002E4CE0u; return; } if (c.pc != 0x002E3CCCu) [[unlikely]] return; }
L_002E3CCC:
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 4u), 0u);  if (t) { goto L_002E3D44; } }
L_002E3CDC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E3D44; } }
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3CF0u); set32(c.r[5], 0u + 30u);  if (depth < kMaxDepth) unit_0079(c, 67u, depth + 1u); else { c.pc = 0x002E4AD0u; return; } if (c.pc != 0x002E3CF0u) [[unlikely]] return; }
L_002E3CF0:
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u - 1u);
    set32(c.r[5], 0u + 8192u);
    set32(c.r[4], 0u + 64u);
    set32(c.r[3], 0u + 127u);
    c.budget -= 5;
L_002E3D04:
    set32(c.r[8], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[2], c.r[9].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[9].w[0]);
    set32(c.r[7], c.r[2].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[2].d[0] = c.r[9].sd[0] < 127ll ? 1ull : 0ull;
    set32(c.r[8], c.r[8].w[0] + c.r[16].w[0]);
    set32(c.r[7], c.r[8].w[0] + c.r[7].w[0]);
    st8((c.r[7].w[0] + 20u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st16((c.r[7].w[0] + 26u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st8((c.r[7].w[0] + 23u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[7].w[0] + 24u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[7].w[0] + 25u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[7].w[0] + 26u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[7].w[0] + 28u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E3D04u | kUnwind; return; } goto L_002E3D04; } }
L_002E3D44:
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0] + 4u), 0u);
    c.budget -= 3;
L_002E3D50:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    c.budget -= 2;
L_002E3D58:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E3C88u | kUnwind; return; } goto L_002E3C88; } }
L_002E3D64:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[19].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E3C60u | kUnwind; return; } goto L_002E3C60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0079(c, 25u, depth); } }
L_002E3D7C:
    set32(c.r[3], c.r[18].w[0] << 1);
    c.budget -= 1;
L_002E3D80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] - 2560u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 44u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002E3E94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 40u)));  if (t) { goto L_002E3E88; } }
L_002E3DA8:
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002E3DE8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[4], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] << 6);
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_002E3E58; } }
L_002E3DE8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E3E58; } }
    set32(c.r[2], c.r[16].w[0] << 1);
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[9], c.r[2].w[0] << 3);
    set32(c.r[6], 0u - 1u);
    set32(c.r[5], 0u + 8192u);
    set32(c.r[4], 0u + 64u);
    set32(c.r[3], 0u + 127u);
    c.budget -= 10;
L_002E3E18:
    set32(c.r[8], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[2], c.r[10].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[10].w[0]);
    set32(c.r[7], c.r[2].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.r[2].d[0] = c.r[10].sd[0] < 127ll ? 1ull : 0ull;
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[7], c.r[8].w[0] + c.r[7].w[0]);
    st8((c.r[7].w[0] + 20u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st16((c.r[7].w[0] + 26u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st8((c.r[7].w[0] + 23u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[7].w[0] + 24u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[7].w[0] + 25u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[7].w[0] + 26u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[7].w[0] + 28u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E3E18u | kUnwind; return; } goto L_002E3E18; } }
L_002E3E58:
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3E80u); set32(c.r[5], 0u + 31u);  if (depth < kMaxDepth) unit_0079(c, 67u, depth + 1u); else { c.pc = 0x002E4AD0u; return; } if (c.pc != 0x002E3E80u) [[unlikely]] return; }
L_002E3E80:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 2;
L_002E3E88:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E3DA8u | kUnwind; return; } goto L_002E3DA8; } }
L_002E3E94:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[18].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E3D80u | kUnwind; return; } goto L_002E3D80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0079(c, 25u, depth); } }
L_002E3EAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3EB4u); set32(c.r[4], ld32((c.r[21].w[0] + 4u)));  if (depth < kMaxDepth) unit_0078(c, 370u, depth + 1u); else { c.pc = 0x002E3230u; return; } if (c.pc != 0x002E3EB4u) [[unlikely]] return; }
L_002E3EB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0079(c, 25u, depth); } }
L_002E3EBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3EC4u); set32(c.r[4], ld32((c.r[21].w[0] + 4u)));  if (depth < kMaxDepth) unit_0078(c, 365u, depth + 1u); else { c.pc = 0x002E3170u; return; } if (c.pc != 0x002E3EC4u) [[unlikely]] return; }
L_002E3EC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0079(c, 25u, depth); } }
L_002E3ECC:
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] - 2560u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[18].w[0] + 44u));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0079(c, 25u, depth); } }
    c.r[5].d[0] = ld8((c.r[21].w[0] + 9u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3F04u); set32(c.r[17], c.r[21].w[0] + 8u);  if (depth < kMaxDepth) unit_0078(c, 389u, depth + 1u); else { c.pc = 0x002E35F0u; return; } if (c.pc != 0x002E3F04u) [[unlikely]] return; }
L_002E3F04:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { [[clang::musttail]] return unit_0079(c, 25u, depth); } }
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] << 6);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { [[clang::musttail]] return unit_0079(c, 25u, depth); } }
    set32(c.r[7], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[5], 0u + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3F44u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0079(c, 76u, depth + 1u); else { c.pc = 0x002E4CE0u; return; } if (c.pc != 0x002E3F44u) [[unlikely]] return; }
L_002E3F44:
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[7].d[0] = ld8((c.r[17].w[0] + 1u));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3F60u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0079(c, 76u, depth + 1u); else { c.pc = 0x002E4CE0u; return; } if (c.pc != 0x002E3F60u) [[unlikely]] return; }
L_002E3F60:
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1u));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 16u), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_0079(c, 25u, depth); } }
L_002E3F74:
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] - 2560u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[19].w[0] + 44u));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0079(c, 25u, depth); } }
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[18], c.r[21].w[0] + 8u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[2].w[0] + 20u);
    c.budget -= 4;
L_002E3FAC:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 1u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_0079(c, 2u, depth); } }
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_0079(c, 2u, depth); } }
    c.r[2].d[0] = ld16((c.r[18].w[0] + 6u));
    st16((c.r[17].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3FE8u); set32(c.r[5], 0u + 17u);  if (depth < kMaxDepth) unit_0079(c, 94u, depth + 1u); else { c.pc = 0x002E5138u; return; } if (c.pc != 0x002E3FE8u) [[unlikely]] return; }
L_002E3FE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 48u);  if (t) { [[clang::musttail]] return unit_0079(c, 2u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_0079(c, 2u, depth); } }
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    c.r[6].d[0] = ld8((c.r[17].w[0] + 2u));
    c.budget -= 2;
    [[clang::musttail]] return unit_0079(c, 1u, depth);
}

}
