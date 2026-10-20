#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_005B[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0,
    0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 10, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0,
    0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 26, 0, 0, 0, 0,
    27, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 32, 0, 0, 0, 0, 0, 0,
    0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    43, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0,
    0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0, 0,
    55, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    64, 0, 65, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 0,
    0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0,
    0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 78, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 90, 0, 91, 0,
    0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 102, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0,
    0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0,
    119, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0,
    0, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0,
    0, 0, 0, 0, 135, 0, 0, 136, 0, 137, 138, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 144, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147,
    0, 0, 148, 0, 0, 149, 0, 150, 0, 151, 0, 0, 0, 152, 0, 153, 0, 0, 0, 0, 0, 154, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0,
    0, 0, 0, 157, 0, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 0, 160, 0, 0, 0, 0, 0, 0, 161, 0, 0, 162, 0, 0, 0, 0, 0,
    0, 163, 0, 0, 164, 0, 0, 0, 0, 0, 0, 165, 0, 0, 166, 0, 0, 0, 0, 0, 0, 167, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169,
    0, 0, 170, 0, 0, 0, 0, 0, 0, 171, 0, 0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 176, 0,
    0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 179, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0,
    0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 0, 0,
    0, 190, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 193, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0,
    195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0,
    199, 0, 0, 0, 0, 0, 200, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0,
    206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0,
    0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0,
    0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0,
    0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0,
    0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0,
    0, 247, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0,
    0, 252, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 257,
    0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0,
    261, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0,
    265, 0, 0, 0, 266, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 269,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 272, 0,
    0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    280, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 290, 0,
    0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0,
    295, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    301, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0,
    0, 0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 0, 307, 0, 0, 308, 0, 309, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 311, 0, 312, 0,
    0, 0, 0, 0, 0, 313, 0, 0, 0, 314, 0, 315, 0, 0, 0, 0, 0, 0, 316, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 320, 0, 0, 0, 321, 0, 0,
    0, 0, 322, 0, 0, 323, 0, 324, 0, 0, 0, 0, 325, 0, 0, 326, 0, 327, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 329, 0, 330, 0,
    0, 0, 0, 0, 0, 0, 331, 0, 0, 332, 0, 333, 0, 0, 0, 0, 0, 0, 334, 0, 0, 335, 0, 336, 0, 0, 0, 0, 0, 0, 337, 0,
    0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 340, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 342, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 346, 0, 0, 347, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0,
    349, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0,
    0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 356, 0,
    0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0,
    0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 385, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 0, 0, 0, 389,
    0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0,
    394, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 401, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0,
    403, 0, 0, 0, 404, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 408,
    0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 411, 0, 0, 412,
    0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 416, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 418, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0,
    0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 426,
    0, 0, 0, 427, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_005B(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0026C000;
    case 2u: goto L_0026C0C8;
    case 3u: goto L_0026C0D0;
    case 4u: goto L_0026C100;
    case 5u: goto L_0026C130;
    case 6u: goto L_0026C140;
    case 7u: goto L_0026C170;
    case 8u: goto L_0026C190;
    case 9u: goto L_0026C1C4;
    case 10u: goto L_0026C204;
    case 11u: goto L_0026C220;
    case 12u: goto L_0026C230;
    case 13u: goto L_0026C270;
    case 14u: goto L_0026C28C;
    case 15u: goto L_0026C2CC;
    case 16u: goto L_0026C2E8;
    case 17u: goto L_0026C2F8;
    case 18u: goto L_0026C340;
    case 19u: goto L_0026C3C8;
    case 20u: goto L_0026C3E4;
    case 21u: goto L_0026C3F4;
    case 22u: goto L_0026C440;
    case 23u: goto L_0026C454;
    case 24u: goto L_0026C4A0;
    case 25u: goto L_0026C4E0;
    case 26u: goto L_0026C4EC;
    case 27u: goto L_0026C500;
    case 28u: goto L_0026C50C;
    case 29u: goto L_0026C52C;
    case 30u: goto L_0026C538;
    case 31u: goto L_0026C558;
    case 32u: goto L_0026C564;
    case 33u: goto L_0026C584;
    case 34u: goto L_0026C5B0;
    case 35u: goto L_0026C5E4;
    case 36u: goto L_0026C610;
    case 37u: goto L_0026C644;
    case 38u: goto L_0026C64C;
    case 39u: goto L_0026C678;
    case 40u: goto L_0026C6AC;
    case 41u: goto L_0026C6BC;
    case 42u: goto L_0026C6D4;
    case 43u: goto L_0026C700;
    case 44u: goto L_0026C720;
    case 45u: goto L_0026C730;
    case 46u: goto L_0026C74C;
    case 47u: goto L_0026C768;
    case 48u: goto L_0026C784;
    case 49u: goto L_0026C79C;
    case 50u: goto L_0026C7A8;
    case 51u: goto L_0026C7B8;
    case 52u: goto L_0026C7CC;
    case 53u: goto L_0026C7DC;
    case 54u: goto L_0026C7EC;
    case 55u: goto L_0026C800;
    case 56u: goto L_0026C810;
    case 57u: goto L_0026C820;
    case 58u: goto L_0026C834;
    case 59u: goto L_0026C844;
    case 60u: goto L_0026C858;
    case 61u: goto L_0026C870;
    case 62u: goto L_0026C8B0;
    case 63u: goto L_0026C8CC;
    case 64u: goto L_0026C900;
    case 65u: goto L_0026C908;
    case 66u: goto L_0026C910;
    case 67u: goto L_0026C928;
    case 68u: goto L_0026C940;
    case 69u: goto L_0026C958;
    case 70u: goto L_0026C970;
    case 71u: goto L_0026C990;
    case 72u: goto L_0026C9A8;
    case 73u: goto L_0026C9C0;
    case 74u: goto L_0026C9E0;
    case 75u: goto L_0026C9F8;
    case 76u: goto L_0026CA10;
    case 77u: goto L_0026CA3C;
    case 78u: goto L_0026CA44;
    case 79u: goto L_0026CA54;
    case 80u: goto L_0026CA64;
    case 81u: goto L_0026CA7C;
    case 82u: goto L_0026CAD0;
    case 83u: goto L_0026CAF4;
    case 84u: goto L_0026CB20;
    case 85u: goto L_0026CB40;
    case 86u: goto L_0026CB8C;
    case 87u: goto L_0026CC00;
    case 88u: goto L_0026CC3C;
    case 89u: goto L_0026CC50;
    case 90u: goto L_0026CC70;
    case 91u: goto L_0026CC78;
    case 92u: goto L_0026CC98;
    case 93u: goto L_0026CCAC;
    case 94u: goto L_0026CCBC;
    case 95u: goto L_0026CCD0;
    case 96u: goto L_0026CCE0;
    case 97u: goto L_0026CCF4;
    case 98u: goto L_0026CD24;
    case 99u: goto L_0026CD48;
    case 100u: goto L_0026CD88;
    case 101u: goto L_0026CDC8;
    case 102u: goto L_0026CE08;
    case 103u: goto L_0026CE14;
    case 104u: goto L_0026CE50;
    case 105u: goto L_0026CE5C;
    case 106u: goto L_0026CE98;
    case 107u: goto L_0026CEC0;
    case 108u: goto L_0026CEF8;
    case 109u: goto L_0026CF24;
    case 110u: goto L_0026CF4C;
    case 111u: goto L_0026CF80;
    case 112u: goto L_0026CFA8;
    case 113u: goto L_0026CFD0;
    case 114u: goto L_0026CFF8;
    case 115u: goto L_0026D008;
    case 116u: goto L_0026D020;
    case 117u: goto L_0026D050;
    case 118u: goto L_0026D070;
    case 119u: goto L_0026D080;
    case 120u: goto L_0026D09C;
    case 121u: goto L_0026D0B8;
    case 122u: goto L_0026D0D4;
    case 123u: goto L_0026D0F0;
    case 124u: goto L_0026D10C;
    case 125u: goto L_0026D124;
    case 126u: goto L_0026D130;
    case 127u: goto L_0026D13C;
    case 128u: goto L_0026D14C;
    case 129u: goto L_0026D188;
    case 130u: goto L_0026D19C;
    case 131u: goto L_0026D1B0;
    case 132u: goto L_0026D1D4;
    case 133u: goto L_0026D1DC;
    case 134u: goto L_0026D1F0;
    case 135u: goto L_0026D210;
    case 136u: goto L_0026D21C;
    case 137u: goto L_0026D224;
    case 138u: goto L_0026D228;
    case 139u: goto L_0026D244;
    case 140u: goto L_0026D254;
    case 141u: goto L_0026D28C;
    case 142u: goto L_0026D2B8;
    case 143u: goto L_0026D314;
    case 144u: goto L_0026D334;
    case 145u: goto L_0026D33C;
    case 146u: goto L_0026D364;
    case 147u: goto L_0026D37C;
    case 148u: goto L_0026D388;
    case 149u: goto L_0026D394;
    case 150u: goto L_0026D39C;
    case 151u: goto L_0026D3A4;
    case 152u: goto L_0026D3B4;
    case 153u: goto L_0026D3BC;
    case 154u: goto L_0026D3D4;
    case 155u: goto L_0026D3DC;
    case 156u: goto L_0026D3F0;
    case 157u: goto L_0026D40C;
    case 158u: goto L_0026D418;
    case 159u: goto L_0026D434;
    case 160u: goto L_0026D440;
    case 161u: goto L_0026D45C;
    case 162u: goto L_0026D468;
    case 163u: goto L_0026D484;
    case 164u: goto L_0026D490;
    case 165u: goto L_0026D4AC;
    case 166u: goto L_0026D4B8;
    case 167u: goto L_0026D4D4;
    case 168u: goto L_0026D4E0;
    case 169u: goto L_0026D4FC;
    case 170u: goto L_0026D508;
    case 171u: goto L_0026D524;
    case 172u: goto L_0026D530;
    case 173u: goto L_0026D54C;
    case 174u: goto L_0026D558;
    case 175u: goto L_0026D570;
    case 176u: goto L_0026D578;
    case 177u: goto L_0026D58C;
    case 178u: goto L_0026D5B8;
    case 179u: goto L_0026D5C4;
    case 180u: goto L_0026D5E0;
    case 181u: goto L_0026D5F0;
    case 182u: goto L_0026D604;
    case 183u: goto L_0026D630;
    case 184u: goto L_0026D63C;
    case 185u: goto L_0026D654;
    case 186u: goto L_0026D670;
    case 187u: goto L_0026D6B0;
    case 188u: goto L_0026D6D8;
    case 189u: goto L_0026D6E8;
    case 190u: goto L_0026D704;
    case 191u: goto L_0026D720;
    case 192u: goto L_0026D74C;
    case 193u: goto L_0026D754;
    case 194u: goto L_0026D770;
    case 195u: goto L_0026D780;
    case 196u: goto L_0026D7B8;
    case 197u: goto L_0026D7C8;
    case 198u: goto L_0026D7EC;
    case 199u: goto L_0026D800;
    case 200u: goto L_0026D818;
    case 201u: goto L_0026D820;
    case 202u: goto L_0026D860;
    case 203u: goto L_0026D8A0;
    case 204u: goto L_0026D8C8;
    case 205u: goto L_0026D8E0;
    case 206u: goto L_0026D900;
    case 207u: goto L_0026D92C;
    case 208u: goto L_0026D944;
    case 209u: goto L_0026D970;
    case 210u: goto L_0026D990;
    case 211u: goto L_0026D9B0;
    case 212u: goto L_0026D9C0;
    case 213u: goto L_0026D9DC;
    case 214u: goto L_0026DA40;
    case 215u: goto L_0026DA54;
    case 216u: goto L_0026DA90;
    case 217u: goto L_0026DAA0;
    case 218u: goto L_0026DAE0;
    case 219u: goto L_0026DAF0;
    case 220u: goto L_0026DB70;
    case 221u: goto L_0026DB8C;
    case 222u: goto L_0026DBBC;
    case 223u: goto L_0026DBF0;
    case 224u: goto L_0026DC1C;
    case 225u: goto L_0026DC28;
    case 226u: goto L_0026DC40;
    case 227u: goto L_0026DC60;
    case 228u: goto L_0026DC70;
    case 229u: goto L_0026DC84;
    case 230u: goto L_0026DCC0;
    case 231u: goto L_0026DCD0;
    case 232u: goto L_0026DCE0;
    case 233u: goto L_0026DCF0;
    case 234u: goto L_0026DD0C;
    case 235u: goto L_0026DD50;
    case 236u: goto L_0026DD90;
    case 237u: goto L_0026DDC0;
    case 238u: goto L_0026DDFC;
    case 239u: goto L_0026DE24;
    case 240u: goto L_0026DE34;
    case 241u: goto L_0026DE4C;
    case 242u: goto L_0026DE70;
    case 243u: goto L_0026DEA4;
    case 244u: goto L_0026DEB8;
    case 245u: goto L_0026DEC8;
    case 246u: goto L_0026DEF4;
    case 247u: goto L_0026DF04;
    case 248u: goto L_0026DF24;
    case 249u: goto L_0026DF40;
    case 250u: goto L_0026DF50;
    case 251u: goto L_0026DF60;
    case 252u: goto L_0026DF84;
    case 253u: goto L_0026DF98;
    case 254u: goto L_0026DFBC;
    case 255u: goto L_0026DFC8;
    case 256u: goto L_0026DFD8;
    case 257u: goto L_0026DFFC;
    case 258u: goto L_0026E004;
    case 259u: goto L_0026E020;
    case 260u: goto L_0026E060;
    case 261u: goto L_0026E080;
    case 262u: goto L_0026E0A0;
    case 263u: goto L_0026E0C0;
    case 264u: goto L_0026E0E0;
    case 265u: goto L_0026E100;
    case 266u: goto L_0026E110;
    case 267u: goto L_0026E124;
    case 268u: goto L_0026E160;
    case 269u: goto L_0026E17C;
    case 270u: goto L_0026E1B0;
    case 271u: goto L_0026E1E0;
    case 272u: goto L_0026E1F8;
    case 273u: goto L_0026E210;
    case 274u: goto L_0026E240;
    case 275u: goto L_0026E260;
    case 276u: goto L_0026E2D0;
    case 277u: goto L_0026E2E8;
    case 278u: goto L_0026E3B8;
    case 279u: goto L_0026E3E0;
    case 280u: goto L_0026E480;
    case 281u: goto L_0026E490;
    case 282u: goto L_0026E4A0;
    case 283u: goto L_0026E4C8;
    case 284u: goto L_0026E4D8;
    case 285u: goto L_0026E500;
    case 286u: goto L_0026E534;
    case 287u: goto L_0026E548;
    case 288u: goto L_0026E5A0;
    case 289u: goto L_0026E5E0;
    case 290u: goto L_0026E5F8;
    case 291u: goto L_0026E610;
    case 292u: goto L_0026E638;
    case 293u: goto L_0026E650;
    case 294u: goto L_0026E664;
    case 295u: goto L_0026E680;
    case 296u: goto L_0026E6A0;
    case 297u: goto L_0026E720;
    case 298u: goto L_0026E924;
    case 299u: goto L_0026E93C;
    case 300u: goto L_0026E950;
    case 301u: goto L_0026E980;
    case 302u: goto L_0026E9A0;
    case 303u: goto L_0026E9C0;
    case 304u: goto L_0026E9F4;
    case 305u: goto L_0026EA0C;
    case 306u: goto L_0026EA1C;
    case 307u: goto L_0026EA30;
    case 308u: goto L_0026EA3C;
    case 309u: goto L_0026EA44;
    case 310u: goto L_0026EA64;
    case 311u: goto L_0026EA70;
    case 312u: goto L_0026EA78;
    case 313u: goto L_0026EA94;
    case 314u: goto L_0026EAA4;
    case 315u: goto L_0026EAAC;
    case 316u: goto L_0026EAC8;
    case 317u: goto L_0026EAD4;
    case 318u: goto L_0026EB20;
    case 319u: goto L_0026EB4C;
    case 320u: goto L_0026EB64;
    case 321u: goto L_0026EB74;
    case 322u: goto L_0026EB88;
    case 323u: goto L_0026EB94;
    case 324u: goto L_0026EB9C;
    case 325u: goto L_0026EBB0;
    case 326u: goto L_0026EBBC;
    case 327u: goto L_0026EBC4;
    case 328u: goto L_0026EBE4;
    case 329u: goto L_0026EBF0;
    case 330u: goto L_0026EBF8;
    case 331u: goto L_0026EC18;
    case 332u: goto L_0026EC24;
    case 333u: goto L_0026EC2C;
    case 334u: goto L_0026EC48;
    case 335u: goto L_0026EC54;
    case 336u: goto L_0026EC5C;
    case 337u: goto L_0026EC78;
    case 338u: goto L_0026EC84;
    case 339u: goto L_0026ECB0;
    case 340u: goto L_0026ECCC;
    case 341u: goto L_0026ECD8;
    case 342u: goto L_0026ED0C;
    case 343u: goto L_0026ED1C;
    case 344u: goto L_0026EDD0;
    case 345u: goto L_0026EE28;
    case 346u: goto L_0026EE38;
    case 347u: goto L_0026EE44;
    case 348u: goto L_0026EE5C;
    case 349u: goto L_0026EE80;
    case 350u: goto L_0026EEA4;
    case 351u: goto L_0026EF48;
    case 352u: goto L_0026EF74;
    case 353u: goto L_0026EF90;
    case 354u: goto L_0026F0A8;
    case 355u: goto L_0026F1E0;
    case 356u: goto L_0026F1F8;
    case 357u: goto L_0026F210;
    case 358u: goto L_0026F230;
    case 359u: goto L_0026F250;
    case 360u: goto L_0026F2C0;
    case 361u: goto L_0026F2F0;
    case 362u: goto L_0026F30C;
    case 363u: goto L_0026F348;
    case 364u: goto L_0026F360;
    case 365u: goto L_0026F390;
    case 366u: goto L_0026F3E0;
    case 367u: goto L_0026F428;
    case 368u: goto L_0026F440;
    case 369u: goto L_0026F460;
    case 370u: goto L_0026F4A0;
    case 371u: goto L_0026F4B4;
    case 372u: goto L_0026F510;
    case 373u: goto L_0026F548;
    case 374u: goto L_0026F5A4;
    case 375u: goto L_0026F5D0;
    case 376u: goto L_0026F5FC;
    case 377u: goto L_0026F660;
    case 378u: goto L_0026F6A8;
    case 379u: goto L_0026F6C0;
    case 380u: goto L_0026F6E0;
    case 381u: goto L_0026F71C;
    case 382u: goto L_0026F780;
    case 383u: goto L_0026F7B8;
    case 384u: goto L_0026F7D8;
    case 385u: goto L_0026F7F0;
    case 386u: goto L_0026F834;
    case 387u: goto L_0026F854;
    case 388u: goto L_0026F864;
    case 389u: goto L_0026F87C;
    case 390u: goto L_0026F8A0;
    case 391u: goto L_0026F8C4;
    case 392u: goto L_0026F8D4;
    case 393u: goto L_0026F970;
    case 394u: goto L_0026F980;
    case 395u: goto L_0026F998;
    case 396u: goto L_0026F9AC;
    case 397u: goto L_0026F9C4;
    case 398u: goto L_0026FAC0;
    case 399u: goto L_0026FAF0;
    case 400u: goto L_0026FB34;
    case 401u: goto L_0026FB44;
    case 402u: goto L_0026FB5C;
    case 403u: goto L_0026FB80;
    case 404u: goto L_0026FB90;
    case 405u: goto L_0026FBA0;
    case 406u: goto L_0026FBBC;
    case 407u: goto L_0026FBDC;
    case 408u: goto L_0026FBFC;
    case 409u: goto L_0026FC20;
    case 410u: goto L_0026FC5C;
    case 411u: goto L_0026FC70;
    case 412u: goto L_0026FC7C;
    case 413u: goto L_0026FC94;
    case 414u: goto L_0026FCB0;
    case 415u: goto L_0026FCE8;
    case 416u: goto L_0026FD10;
    case 417u: goto L_0026FD24;
    case 418u: goto L_0026FD3C;
    case 419u: goto L_0026FD48;
    case 420u: goto L_0026FD68;
    case 421u: goto L_0026FD88;
    case 422u: goto L_0026FDD8;
    case 423u: goto L_0026FE24;
    case 424u: goto L_0026FE30;
    case 425u: goto L_0026FE60;
    case 426u: goto L_0026FE7C;
    case 427u: goto L_0026FE8C;
    case 428u: goto L_0026FEA0;
    case 429u: goto L_0026FEC8;
    case 430u: goto L_0026FEF4;
    case 431u: goto L_0026FF20;
    case 432u: goto L_0026FF50;
    case 433u: goto L_0026FF6C;
    case 434u: goto L_0026FF98;
    case 435u: goto L_0026FFD0;
    default: bad_entry(c, 0x0026C000u); return;
    }
L_0026C000:
    c.budget -= 2;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x43870000u);  if (t) { goto L_0026C050; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43870000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].sd[0] = static_cast<std::int32_t>(0x44070000u);  if (t) { goto L_0026C04C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[1] = c.r[4].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[5].w[0]), c.f[1]);  if (t) { goto L_0026C0C8; } }
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.f[0]);  if (t) { goto L_0026C0C8; } }
L_0026C04C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43870000u);
    c.budget -= 1;
L_0026C050:
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x42B40000u);  if (t) { goto L_0026C0A4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].sd[0] = static_cast<std::int32_t>(0x44070000u);  if (t) { goto L_0026C0A0; } }
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[5].w[0]), c.f[0]);  if (t) { goto L_0026C0C8; } }
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.f[0]);  if (t) { goto L_0026C0C8; } }
L_0026C0A0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42B40000u);
    c.budget -= 1;
L_0026C0A4:
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].sd[0] = static_cast<std::int32_t>(0x43340000u);  if (t) { goto L_0026C0C8; } }
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    st32((c.r[5].w[0]), c.f[0]);
    c.budget -= 4;
L_0026C0C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026C0D0:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026C0EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 8u), c.f[12]);  if (t) { goto L_0026C0F4; } }
L_0026C0EC:
    c.f[12] = c.f[0];
    st32((c.r[4].w[0] + 8u), c.f[12]);
    c.budget -= 2;
L_0026C0F4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026C100:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026C11C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 36u), c.f[12]);  if (t) { goto L_0026C124; } }
L_0026C11C:
    c.f[12] = c.f[0];
    st32((c.r[4].w[0] + 36u), c.f[12]);
    c.budget -= 2;
L_0026C124:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026C130:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_0026C140:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0026C174; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0026C170; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C170u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0026C170u) [[unlikely]] return; }
L_0026C170:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0026C174:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026C190:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 587u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.f[20] = c.f[12];  if (t) { goto L_0026C1BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0026C25C; } }
L_0026C1BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C1C4u);  if (depth < kMaxDepth) unit_0034(c, 93u, depth + 1u); else { c.pc = 0x001D0C90u; return; } if (c.pc != 0x0026C1C4u) [[unlikely]] return; }
L_0026C1C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026C1D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0026C25C; } }
L_0026C1D4:
    ld128((c.r[16].w[0] + 208u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[3], c.r[29].w[0] + 64u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    ld128((c.r[16].w[0] + 224u) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.f[0] = ld32((c.r[29].w[0] + 52u));
    set32(c.r[2], ld32((c.r[16].w[0] + 240u)));
    c.f[20] = fp::sub(c.f[0], c.f[20]);
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C204u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0010(c, 265u, depth + 1u); else { c.pc = 0x00143C10u; return; } if (c.pc != 0x0026C204u) [[unlikely]] return; }
L_0026C204:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[12] = c.f[20];  if (t) { goto L_0026C228; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C220u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0010(c, 265u, depth + 1u); else { c.pc = 0x00143C10u; return; } if (c.pc != 0x0026C220u) [[unlikely]] return; }
L_0026C220:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[0] ^ fp::kSign;  if (t) { goto L_0026C230; } }
L_0026C228:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C230u);  if (depth < kMaxDepth) unit_0010(c, 265u, depth + 1u); else { c.pc = 0x00143C10u; return; } if (c.pc != 0x0026C230u) [[unlikely]] return; }
L_0026C230:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 32552u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0026C25C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 32544u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026C25C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0026C25C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0026C270:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C28Cu); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_0034(c, 93u, depth + 1u); else { c.pc = 0x001D0C90u; return; } if (c.pc != 0x0026C28Cu) [[unlikely]] return; }
L_0026C28C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026C29C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0026C324; } }
L_0026C29C:
    ld128((c.r[16].w[0] + 208u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[3], c.r[29].w[0] + 64u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    ld128((c.r[16].w[0] + 224u) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.f[0] = ld32((c.r[29].w[0] + 52u));
    set32(c.r[2], ld32((c.r[16].w[0] + 240u)));
    c.f[20] = fp::sub(c.f[0], c.f[20]);
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C2CCu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0010(c, 265u, depth + 1u); else { c.pc = 0x00143C10u; return; } if (c.pc != 0x0026C2CCu) [[unlikely]] return; }
L_0026C2CC:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[12] = c.f[20];  if (t) { goto L_0026C2F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C2E8u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0010(c, 265u, depth + 1u); else { c.pc = 0x00143C10u; return; } if (c.pc != 0x0026C2E8u) [[unlikely]] return; }
L_0026C2E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[0] ^ fp::kSign;  if (t) { goto L_0026C2F8; } }
L_0026C2F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C2F8u);  if (depth < kMaxDepth) unit_0010(c, 265u, depth + 1u); else { c.pc = 0x00143C10u; return; } if (c.pc != 0x0026C2F8u) [[unlikely]] return; }
L_0026C2F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 32536u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0026C324; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 32528u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026C324; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0026C324:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0026C340:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0]), c.f[20]);  if (t) { goto L_0026C420; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    set32(c.r[2], 0u + 800u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0026C424; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 176u)));
    c.r[2].d[0] = c.r[3].sd[0] < 50ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0026C37C; } }
    c.r[1].d[0] = c.r[3].sd[0] < 57ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0026C384; } }
L_0026C37C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0026C428; } }
L_0026C384:
    set32(c.r[2], ld32((c.r[4].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0026C398; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026C424; } }
L_0026C398:
    ld128((c.r[4].w[0] + 208u) & ~15u, c.r[2]);
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[3], c.r[29].w[0] + 48u);
    st128((c.r[5].w[0]) & ~15u, c.r[2]);
    ld128((c.r[4].w[0] + 224u) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.f[0] = ld32((c.r[29].w[0] + 36u));
    set32(c.r[2], ld32((c.r[4].w[0] + 240u)));
    c.f[20] = fp::sub(c.f[0], c.f[12]);
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C3C8u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0010(c, 265u, depth + 1u); else { c.pc = 0x00143C10u; return; } if (c.pc != 0x0026C3C8u) [[unlikely]] return; }
L_0026C3C8:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[12] = c.f[20];  if (t) { goto L_0026C3EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C3E4u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0010(c, 265u, depth + 1u); else { c.pc = 0x00143C10u; return; } if (c.pc != 0x0026C3E4u) [[unlikely]] return; }
L_0026C3E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[0] ^ fp::kSign;  if (t) { goto L_0026C3F4; } }
L_0026C3EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C3F4u);  if (depth < kMaxDepth) unit_0010(c, 265u, depth + 1u); else { c.pc = 0x00143C10u; return; } if (c.pc != 0x0026C3F4u) [[unlikely]] return; }
L_0026C3F4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 32520u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_0026C420; } }
    c.f[1] = ld32((c.r[1].w[0] + 32512u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_0026C420; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026C424; } }
L_0026C420:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0026C424:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0026C428:
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0026C440:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C454u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 117u, depth + 1u); else { c.pc = 0x00198E50u; return; } if (c.pc != 0x0026C454u) [[unlikely]] return; }
L_0026C454:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] - 1168u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 128u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[2], ld32((c.r[1].w[0] + 26176u)));
    c.f[0] = ld32((c.r[3].w[0] + 28u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    set32(c.r[3], c.r[3].w[0] - 1000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 2072u)));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C4A0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 303u, depth + 1u); else { c.pc = 0x0026E9C0u; return; } if (c.pc != 0x0026C4A0u) [[unlikely]] return; }
L_0026C4A0:
    st32((c.r[16].w[0] + 132u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[1].w[0] + 26176u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[3].w[0] + 36u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    set32(c.r[3], c.r[3].w[0] - 1000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 2072u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C4E0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 303u, depth + 1u); else { c.pc = 0x0026E9C0u; return; } if (c.pc != 0x0026C4E0u) [[unlikely]] return; }
L_0026C4E0:
    st32((c.r[16].w[0] + 136u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C4ECu); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0026C4ECu) [[unlikely]] return; }
L_0026C4EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026C500; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C500u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 246u, depth + 1u); else { c.pc = 0x0014FA00u; return; } if (c.pc != 0x0026C500u) [[unlikely]] return; }
L_0026C500:
    st32((c.r[16].w[0] + 140u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C50Cu); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0026C50Cu) [[unlikely]] return; }
L_0026C50C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026C52C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C52Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 66u, depth + 1u); else { c.pc = 0x00224EF0u; return; } if (c.pc != 0x0026C52Cu) [[unlikely]] return; }
L_0026C52C:
    st32((c.r[16].w[0] + 144u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C538u); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0026C538u) [[unlikely]] return; }
L_0026C538:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026C558; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C558u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 66u, depth + 1u); else { c.pc = 0x00224EF0u; return; } if (c.pc != 0x0026C558u) [[unlikely]] return; }
L_0026C558:
    st32((c.r[16].w[0] + 148u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C564u); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0026C564u) [[unlikely]] return; }
L_0026C564:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026C584; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.f[0] = ld32((c.r[3].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C584u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 66u, depth + 1u); else { c.pc = 0x00224EF0u; return; } if (c.pc != 0x0026C584u) [[unlikely]] return; }
L_0026C584:
    st32((c.r[16].w[0] + 152u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 156u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 160u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 164u), 0u);
    st32((c.r[16].w[0] + 168u), 0u);
    st8((c.r[16].w[0] + 172u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026C5B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0026C6D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1168u);
    st32((c.r[18].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 4;
L_0026C5E4:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[2].w[0] + 132u);  if (t) { goto L_0026C610; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0026C610; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C610u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026C610u) [[unlikely]] return; }
L_0026C610:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[19].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026C5E4u | kUnwind; return; } goto L_0026C5E4; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 140u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0026C644; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0026C644; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C644u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026C644u) [[unlikely]] return; }
L_0026C644:
    st32((c.r[18].w[0] + 140u), 0u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0026C64C:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[2].w[0] + 144u);  if (t) { goto L_0026C678; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0026C678; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C678u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026C678u) [[unlikely]] return; }
L_0026C678:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[19].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026C64Cu | kUnwind; return; } goto L_0026C64C; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 128u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0026C6AC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0026C6AC; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C6ACu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026C6ACu) [[unlikely]] return; }
L_0026C6AC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C6BCu); st32((c.r[18].w[0] + 128u), 0u);  if (depth < kMaxDepth) unit_0026(c, 119u, depth + 1u); else { c.pc = 0x00198EB0u; return; } if (c.pc != 0x0026C6BCu) [[unlikely]] return; }
L_0026C6BC:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0026C6D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C6D4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0026C6D4u) [[unlikely]] return; }
L_0026C6D4:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0026C6D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0026C700:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C720u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026C720u) [[unlikely]] return; }
L_0026C720:
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C730u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026C730u) [[unlikely]] return; }
L_0026C730:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[16].w[0] + 132u)));
    st128((c.r[2].w[0] + 224u) & ~15u, c.r[3]);
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C74Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026C74Cu) [[unlikely]] return; }
L_0026C74C:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[16].w[0] + 132u)));
    st128((c.r[2].w[0] + 208u) & ~15u, c.r[3]);
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C768u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026C768u) [[unlikely]] return; }
L_0026C768:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[16].w[0] + 136u)));
    st128((c.r[2].w[0] + 224u) & ~15u, c.r[3]);
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C784u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026C784u) [[unlikely]] return; }
L_0026C784:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[16].w[0] + 136u)));
    st128((c.r[2].w[0] + 208u) & ~15u, c.r[3]);
    set32(c.r[4], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C79Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 359u, depth + 1u); else { c.pc = 0x0026F250u; return; } if (c.pc != 0x0026C79Cu) [[unlikely]] return; }
L_0026C79C:
    set32(c.r[4], ld32((c.r[16].w[0] + 136u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C7A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 359u, depth + 1u); else { c.pc = 0x0026F250u; return; } if (c.pc != 0x0026C7A8u) [[unlikely]] return; }
L_0026C7A8:
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C7B8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026C7B8u) [[unlikely]] return; }
L_0026C7B8:
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C7CCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026C7CCu) [[unlikely]] return; }
L_0026C7CC:
    set32(c.r[4], ld32((c.r[16].w[0] + 144u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C7DCu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 83u, depth + 1u); else { c.pc = 0x00225250u; return; } if (c.pc != 0x0026C7DCu) [[unlikely]] return; }
L_0026C7DC:
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C7ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026C7ECu) [[unlikely]] return; }
L_0026C7EC:
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C800u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026C800u) [[unlikely]] return; }
L_0026C800:
    set32(c.r[4], ld32((c.r[16].w[0] + 148u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C810u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 83u, depth + 1u); else { c.pc = 0x00225250u; return; } if (c.pc != 0x0026C810u) [[unlikely]] return; }
L_0026C810:
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C820u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026C820u) [[unlikely]] return; }
L_0026C820:
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C834u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026C834u) [[unlikely]] return; }
L_0026C834:
    set32(c.r[4], ld32((c.r[16].w[0] + 152u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C844u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 83u, depth + 1u); else { c.pc = 0x00225250u; return; } if (c.pc != 0x0026C844u) [[unlikely]] return; }
L_0026C844:
    set32(c.r[5], ld32((c.r[16].w[0] + 140u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0026C858; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C858u);  if (depth < kMaxDepth) unit_002C(c, 207u, depth + 1u); else { c.pc = 0x001B1B60u; return; } if (c.pc != 0x0026C858u) [[unlikely]] return; }
L_0026C858:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026C870:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 160u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0026C920; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 156u)));
    set32(c.r[2], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0026C900; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C8B0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026C8B0u) [[unlikely]] return; }
L_0026C8B0:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[29].w[0] + 80u);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C8CCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026C8CCu) [[unlikely]] return; }
L_0026C8CC:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[29].w[0] + 64u);
    set32(c.r[4], 0u - 1u);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.f[12] = ld32((c.r[29].w[0] + 80u));
    c.f[13] = ld32((c.r[29].w[0] + 84u));
    c.f[14] = ld32((c.r[29].w[0] + 88u));
    c.f[15] = ld32((c.r[29].w[0] + 64u));
    c.f[16] = ld32((c.r[29].w[0] + 68u));
    c.f[17] = ld32((c.r[29].w[0] + 72u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C900u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_003E(c, 165u, depth + 1u); else { c.pc = 0x001F9D70u; return; } if (c.pc != 0x0026C900u) [[unlikely]] return; }
L_0026C900:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C908u); set32(c.r[4], ld32((c.r[16].w[0] + 132u)));  if (depth < kMaxDepth) unit_005B(c, 349u, depth + 1u); else { c.pc = 0x0026EE80u; return; } if (c.pc != 0x0026C908u) [[unlikely]] return; }
L_0026C908:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C910u); set32(c.r[4], ld32((c.r[16].w[0] + 136u)));  if (depth < kMaxDepth) unit_005B(c, 349u, depth + 1u); else { c.pc = 0x0026EE80u; return; } if (c.pc != 0x0026C910u) [[unlikely]] return; }
L_0026C910:
    set32(c.r[3], ld32((c.r[16].w[0] + 156u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 156u), c.r[3].w[0]);  if (t) { goto L_0026CAFC; } }
L_0026C920:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C928u);  if (depth < kMaxDepth) unit_005B(c, 84u, depth + 1u); else { c.pc = 0x0026CB20u; return; } if (c.pc != 0x0026C928u) [[unlikely]] return; }
L_0026C928:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026CA84; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 144u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C940u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 75u, depth + 1u); else { c.pc = 0x002250F0u; return; } if (c.pc != 0x0026C940u) [[unlikely]] return; }
L_0026C940:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0026C984; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C958u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026C958u) [[unlikely]] return; }
L_0026C958:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[1].w[0] + 32504u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C970u); c.f[12] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_005B(c, 8u, depth + 1u); else { c.pc = 0x0026C190u; return; } if (c.pc != 0x0026C970u) [[unlikely]] return; }
L_0026C970:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026CA20; } }
    st32((c.r[16].w[0] + 164u), c.r[18].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 12006u);  if (t) { goto L_0026CA20; } }
L_0026C984:
    set32(c.r[4], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C990u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 75u, depth + 1u); else { c.pc = 0x002250F0u; return; } if (c.pc != 0x0026C990u) [[unlikely]] return; }
L_0026C990:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0026C9D4; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C9A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026C9A8u) [[unlikely]] return; }
L_0026C9A8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[1].w[0] + 32504u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C9C0u); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_005B(c, 8u, depth + 1u); else { c.pc = 0x0026C190u; return; } if (c.pc != 0x0026C9C0u) [[unlikely]] return; }
L_0026C9C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026CA20; } }
    st32((c.r[16].w[0] + 164u), c.r[18].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 12007u);  if (t) { goto L_0026CA20; } }
L_0026C9D4:
    set32(c.r[4], ld32((c.r[16].w[0] + 152u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C9E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 75u, depth + 1u); else { c.pc = 0x002250F0u; return; } if (c.pc != 0x0026C9E0u) [[unlikely]] return; }
L_0026C9E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0026CA20; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C9F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026C9F8u) [[unlikely]] return; }
L_0026C9F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[1].w[0] + 32496u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CA10u); c.f[12] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_005B(c, 8u, depth + 1u); else { c.pc = 0x0026C190u; return; } if (c.pc != 0x0026CA10u) [[unlikely]] return; }
L_0026CA10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026CA20; } }
    st32((c.r[16].w[0] + 164u), c.r[18].w[0]);
    set32(c.r[17], 0u + 12005u);
    c.budget -= 2;
L_0026CA20:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026CAFC; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CA3Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026CA3Cu) [[unlikely]] return; }
L_0026CA3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CA44u); c.f[12] = ld32((c.r[2].w[0] + 4u));  if (depth < kMaxDepth) unit_0010(c, 265u, depth + 1u); else { c.pc = 0x00143C10u; return; } if (c.pc != 0x0026CA44u) [[unlikely]] return; }
L_0026CA44:
    st32((c.r[18].w[0] + 212u), c.f[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CA54u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x0026CA54u) [[unlikely]] return; }
L_0026CA54:
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CA64u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026CA64u) [[unlikely]] return; }
L_0026CA64:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[18].w[0] + 224u) & ~15u, c.r[2]);
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CA7Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026CA7Cu) [[unlikely]] return; }
L_0026CA7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0026CB00; } }
L_0026CA84:
    set32(c.r[4], ld32((c.r[3].w[0] + 164u)));
    set32(c.r[3], 0u + 12008u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0026CAA8; } }
    set32(c.r[3], 0u + 12011u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 12012u);  if (t) { goto L_0026CAA8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0026CAFC; } }
L_0026CAA8:
    set32(c.r[3], ld32((c.r[16].w[0] + 168u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 168u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 472u));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], 0u + 3550u);  if (t) { goto L_0026CAD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CAD0u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x0026CAD0u) [[unlikely]] return; }
L_0026CAD0:
    st32((c.r[16].w[0] + 164u), 0u);
    st32((c.r[16].w[0] + 168u), 0u);
    c.budget -= 2;
L_0026CAD8:
    set32(c.r[3], ld32((c.r[16].w[0] + 168u)));
    c.r[1].d[0] = c.r[3].sd[0] < 601ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0026CAFC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CAF4u); set32(c.r[5], 0u + 3550u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x0026CAF4u) [[unlikely]] return; }
L_0026CAF4:
    st32((c.r[16].w[0] + 164u), 0u);
    st32((c.r[16].w[0] + 168u), 0u);
    c.budget -= 2;
L_0026CAFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0026CB00:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0026CB20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 172u), static_cast<std::uint8_t>(0u));
    set32(c.r[25], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CB40u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026CB40u) [[unlikely]] return; }
L_0026CB40:
    ld128((c.r[2].w[0]) & ~15u, c.r[5]);
    set32(c.r[6], c.r[29].w[0] + 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[3] = c.r[3].w[0];
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 28320u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[2] = c.r[3].w[0];
    st128((c.r[6].w[0]) & ~15u, c.r[5]);
    c.f[4] = ld32((c.r[29].w[0] + 40u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    c.f[1] = c.r[3].w[0];
    c.f[5] = fp::add(c.f[3], c.f[4]);
    c.f[3] = fp::add(c.f[2], c.f[4]);
    c.f[2] = fp::add(c.f[1], c.f[0]);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; c.f[0] = fp::sub(c.f[0], c.f[1]);  if (t) { goto L_0026CBE0; } }
L_0026CB8C:
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026CBDC; } }
    c.f[1] = ld32((c.r[3].w[0] + 232u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[5]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026CBDC; } }
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[3]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026CBDC; } }
    c.f[1] = ld32((c.r[3].w[0] + 224u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026CBDC; } }
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_0026CBDC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 172u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0026CBEC; } }
L_0026CBDC:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_0026CBE0:
    c.r[3].d[0] = c.r[7].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[7].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026CB8Cu | kUnwind; return; } goto L_0026CB8C; } }
L_0026CBEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026CC00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 160u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026CC3C; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 140u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0026CC3C; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 172u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026CC3C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CC3Cu); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 141u, depth + 1u); else { c.pc = 0x00153370u; return; } if (c.pc != 0x0026CC3Cu) [[unlikely]] return; }
L_0026CC3C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0026CC50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 160u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0026CC80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CC70u); set32(c.r[4], ld32((c.r[16].w[0] + 132u)));  if (depth < kMaxDepth) unit_005B(c, 353u, depth + 1u); else { c.pc = 0x0026EF90u; return; } if (c.pc != 0x0026CC70u) [[unlikely]] return; }
L_0026CC70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CC78u); set32(c.r[4], ld32((c.r[16].w[0] + 136u)));  if (depth < kMaxDepth) unit_005B(c, 353u, depth + 1u); else { c.pc = 0x0026EF90u; return; } if (c.pc != 0x0026CC78u) [[unlikely]] return; }
L_0026CC78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0026CCC0; } }
L_0026CC80:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 172u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_0026CCBC; } }
    c.f[12] = ld32((c.r[1].w[0] + 32488u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CC98u); set32(c.r[4], ld32((c.r[16].w[0] + 140u)));  if (depth < kMaxDepth) unit_0015(c, 85u, depth + 1u); else { c.pc = 0x00156E00u; return; } if (c.pc != 0x0026CC98u) [[unlikely]] return; }
L_0026CC98:
    set32(c.r[4], ld32((c.r[16].w[0] + 140u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CCACu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026CCACu) [[unlikely]] return; }
L_0026CCAC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CCBCu); set32(c.r[4], ld32((c.r[16].w[0] + 140u)));  if (depth < kMaxDepth) unit_0015(c, 85u, depth + 1u); else { c.pc = 0x00156E00u; return; } if (c.pc != 0x0026CCBCu) [[unlikely]] return; }
L_0026CCBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0026CCC0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026CCD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026CCE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CCF4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 117u, depth + 1u); else { c.pc = 0x00198E50u; return; } if (c.pc != 0x0026CCF4u) [[unlikely]] return; }
L_0026CCF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] - 1248u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 128u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[4], ld32((c.r[1].w[0] + 26176u)));
    c.f[0] = ld32((c.r[2].w[0] + 28u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CD24u); set32(c.r[5], c.r[2].w[0] - 2000u);  if (depth < kMaxDepth) unit_0024(c, 249u, depth + 1u); else { c.pc = 0x00191DE0u; return; } if (c.pc != 0x0026CD24u) [[unlikely]] return; }
L_0026CD24:
    st32((c.r[16].w[0] + 132u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[4], ld32((c.r[1].w[0] + 26176u)));
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CD48u); set32(c.r[5], c.r[2].w[0] - 2000u);  if (depth < kMaxDepth) unit_0024(c, 249u, depth + 1u); else { c.pc = 0x00191DE0u; return; } if (c.pc != 0x0026CD48u) [[unlikely]] return; }
L_0026CD48:
    st32((c.r[16].w[0] + 136u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[1].w[0] + 26176u)));
    set32(c.r[6], 0u + 1u);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    set32(c.r[3], c.r[3].w[0] - 1000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 2072u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CD88u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 303u, depth + 1u); else { c.pc = 0x0026E9C0u; return; } if (c.pc != 0x0026CD88u) [[unlikely]] return; }
L_0026CD88:
    st32((c.r[16].w[0] + 140u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[1].w[0] + 26176u)));
    set32(c.r[6], 0u + 1u);
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    set32(c.r[3], c.r[3].w[0] - 1000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 2072u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CDC8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 303u, depth + 1u); else { c.pc = 0x0026E9C0u; return; } if (c.pc != 0x0026CDC8u) [[unlikely]] return; }
L_0026CDC8:
    st32((c.r[16].w[0] + 144u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[1].w[0] + 26176u)));
    set32(c.r[6], 0u + 1u);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    set32(c.r[3], c.r[3].w[0] - 1000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 2072u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CE08u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 303u, depth + 1u); else { c.pc = 0x0026E9C0u; return; } if (c.pc != 0x0026CE08u) [[unlikely]] return; }
L_0026CE08:
    st32((c.r[16].w[0] + 148u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CE14u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0026CE14u) [[unlikely]] return; }
L_0026CE14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026CE50; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26176u)));
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    set32(c.r[3], c.r[3].w[0] - 1000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CE50u); set32(c.r[5], ld32((c.r[2].w[0] + 2072u)));  if (depth < kMaxDepth) unit_0013(c, 246u, depth + 1u); else { c.pc = 0x0014FA00u; return; } if (c.pc != 0x0026CE50u) [[unlikely]] return; }
L_0026CE50:
    st32((c.r[16].w[0] + 152u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CE5Cu); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0026CE5Cu) [[unlikely]] return; }
L_0026CE5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026CE98; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26176u)));
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    set32(c.r[3], c.r[3].w[0] - 1000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CE98u); set32(c.r[5], ld32((c.r[2].w[0] + 2072u)));  if (depth < kMaxDepth) unit_0013(c, 246u, depth + 1u); else { c.pc = 0x0014FA00u; return; } if (c.pc != 0x0026CE98u) [[unlikely]] return; }
L_0026CE98:
    st32((c.r[16].w[0] + 156u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 160u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 161u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 162u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 163u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026CEC0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0026D020; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1248u);
    st32((c.r[18].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 4;
L_0026CEF8:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[19], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 140u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[20], c.r[19].w[0] + 140u);  if (t) { goto L_0026CF24; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0026CF24; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CF24u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026CF24u) [[unlikely]] return; }
L_0026CF24:
    st32((c.r[20].w[0]), 0u);
    set32(c.r[4], ld32((c.r[19].w[0] + 152u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[20], c.r[19].w[0] + 152u);  if (t) { goto L_0026CF4C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0026CF4C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CF4Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026CF4Cu) [[unlikely]] return; }
L_0026CF4C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[20].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026CEF8u | kUnwind; return; } goto L_0026CEF8; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 148u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0026CF80; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0026CF80; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CF80u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026CF80u) [[unlikely]] return; }
L_0026CF80:
    st32((c.r[18].w[0] + 148u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 128u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0026CFA8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0026CFA8; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CFA8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026CFA8u) [[unlikely]] return; }
L_0026CFA8:
    st32((c.r[18].w[0] + 128u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 132u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0026CFD0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0026CFD0; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CFD0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026CFD0u) [[unlikely]] return; }
L_0026CFD0:
    st32((c.r[18].w[0] + 132u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 136u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0026CFF8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0026CFF8; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CFF8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026CFF8u) [[unlikely]] return; }
L_0026CFF8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D008u); st32((c.r[18].w[0] + 136u), 0u);  if (depth < kMaxDepth) unit_0026(c, 119u, depth + 1u); else { c.pc = 0x00198EB0u; return; } if (c.pc != 0x0026D008u) [[unlikely]] return; }
L_0026D008:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0026D024; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D020u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0026D020u) [[unlikely]] return; }
L_0026D020:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0026D024:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0026D050:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D070u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026D070u) [[unlikely]] return; }
L_0026D070:
    set32(c.r[25], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D080u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026D080u) [[unlikely]] return; }
L_0026D080:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[17].w[0] + 140u)));
    st128((c.r[2].w[0] + 224u) & ~15u, c.r[3]);
    set32(c.r[25], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D09Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026D09Cu) [[unlikely]] return; }
L_0026D09C:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[17].w[0] + 140u)));
    st128((c.r[2].w[0] + 208u) & ~15u, c.r[3]);
    set32(c.r[25], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D0B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026D0B8u) [[unlikely]] return; }
L_0026D0B8:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[17].w[0] + 144u)));
    st128((c.r[2].w[0] + 224u) & ~15u, c.r[3]);
    set32(c.r[25], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D0D4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026D0D4u) [[unlikely]] return; }
L_0026D0D4:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[17].w[0] + 144u)));
    st128((c.r[2].w[0] + 208u) & ~15u, c.r[3]);
    set32(c.r[25], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D0F0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026D0F0u) [[unlikely]] return; }
L_0026D0F0:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[17].w[0] + 148u)));
    st128((c.r[2].w[0] + 224u) & ~15u, c.r[3]);
    set32(c.r[25], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D10Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026D10Cu) [[unlikely]] return; }
L_0026D10C:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[17].w[0] + 148u)));
    st128((c.r[2].w[0] + 208u) & ~15u, c.r[3]);
    set32(c.r[4], ld32((c.r[17].w[0] + 140u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D124u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 359u, depth + 1u); else { c.pc = 0x0026F250u; return; } if (c.pc != 0x0026D124u) [[unlikely]] return; }
L_0026D124:
    set32(c.r[4], ld32((c.r[17].w[0] + 144u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D130u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 359u, depth + 1u); else { c.pc = 0x0026F250u; return; } if (c.pc != 0x0026D130u) [[unlikely]] return; }
L_0026D130:
    set32(c.r[4], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D13Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 359u, depth + 1u); else { c.pc = 0x0026F250u; return; } if (c.pc != 0x0026D13Cu) [[unlikely]] return; }
L_0026D13C:
    set32(c.r[25], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D14Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026D14Cu) [[unlikely]] return; }
L_0026D14C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[6], c.r[29].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] - 20688u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], c.r[2].w[0] - 20672u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[6].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], ld32((c.r[17].w[0] + 152u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D188u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 208u, depth + 1u); else { c.pc = 0x001B1B70u; return; } if (c.pc != 0x0026D188u) [[unlikely]] return; }
L_0026D188:
    set32(c.r[5], ld32((c.r[17].w[0] + 156u)));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D19Cu); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_002C(c, 208u, depth + 1u); else { c.pc = 0x001B1B70u; return; } if (c.pc != 0x0026D19Cu) [[unlikely]] return; }
L_0026D19C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0026D1B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 160u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0026D2F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D1D4u); set32(c.r[4], ld32((c.r[16].w[0] + 140u)));  if (depth < kMaxDepth) unit_005B(c, 349u, depth + 1u); else { c.pc = 0x0026EE80u; return; } if (c.pc != 0x0026D1D4u) [[unlikely]] return; }
L_0026D1D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D1DCu); set32(c.r[4], ld32((c.r[16].w[0] + 144u)));  if (depth < kMaxDepth) unit_005B(c, 349u, depth + 1u); else { c.pc = 0x0026EE80u; return; } if (c.pc != 0x0026D1DCu) [[unlikely]] return; }
L_0026D1DC:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 161u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026D26C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D1F0u); set32(c.r[4], ld32((c.r[16].w[0] + 140u)));  if (depth < kMaxDepth) unit_005B(c, 361u, depth + 1u); else { c.pc = 0x0026F2F0u; return; } if (c.pc != 0x0026D1F0u) [[unlikely]] return; }
L_0026D1F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026D28C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D210u); set32(c.r[4], ld32((c.r[16].w[0] + 148u)));  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x0026D210u) [[unlikely]] return; }
L_0026D210:
    set32(c.r[4], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D21Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_005B(c, 359u, depth + 1u); else { c.pc = 0x0026F250u; return; } if (c.pc != 0x0026D21Cu) [[unlikely]] return; }
L_0026D21C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D224u); set32(c.r[4], ld32((c.r[16].w[0] + 148u)));  if (depth < kMaxDepth) unit_005B(c, 349u, depth + 1u); else { c.pc = 0x0026EE80u; return; } if (c.pc != 0x0026D224u) [[unlikely]] return; }
L_0026D224:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0026D228:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D244u); set32(c.r[4], ld32((c.r[16].w[0] + 136u)));  if (depth < kMaxDepth) unit_0049(c, 99u, depth + 1u); else { c.pc = 0x00225550u; return; } if (c.pc != 0x0026D244u) [[unlikely]] return; }
L_0026D244:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0026D254; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D254u); set32(c.r[5], 0u + 678u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x0026D254u) [[unlikely]] return; }
L_0026D254:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026D228u | kUnwind; return; } goto L_0026D228; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 161u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0026D28C; } }
L_0026D26C:
    set32(c.r[5], ld32((c.r[16].w[0] + 136u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_0026D28C; } }
    set32(c.r[2], ld32((c.r[1].w[0] + 31072u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D28Cu); set32(c.r[4], ld32((c.r[1].w[0] + 4492u)));  if (depth < kMaxDepth) unit_0047(c, 171u, depth + 1u); else { c.pc = 0x0021E250u; return; } if (c.pc != 0x0026D28Cu) [[unlikely]] return; }
L_0026D28C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 162u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026D69C; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 163u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0026D69C; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[4], 0u - 2u);
    set32(c.r[6], c.r[6].w[0] + 28320u);
    set32(c.r[3], c.r[8].w[0] << 2);
    c.budget -= 5;
L_0026D2B8:
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0026D2DC; } }
    c.r[3].d[0] = ld8((c.r[7].w[0] + 392u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[7].w[0] + 392u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[7].w[0] + 1240u), 0u);
    c.budget -= 5;
L_0026D2DC:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = c.r[8].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[8].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026D2B8u | kUnwind; return; } goto L_0026D2B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 163u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0026D69C; } }
L_0026D2F4:
    set32(c.r[5], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_0026D314; } }
    set32(c.r[2], ld32((c.r[1].w[0] + 31072u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D314u); set32(c.r[4], ld32((c.r[1].w[0] + 4492u)));  if (depth < kMaxDepth) unit_0047(c, 171u, depth + 1u); else { c.pc = 0x0021E250u; return; } if (c.pc != 0x0026D314u) [[unlikely]] return; }
L_0026D314:
    set32(c.r[5], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_0026D334; } }
    set32(c.r[2], ld32((c.r[1].w[0] + 31072u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D334u); set32(c.r[4], ld32((c.r[1].w[0] + 4492u)));  if (depth < kMaxDepth) unit_0047(c, 171u, depth + 1u); else { c.pc = 0x0021E250u; return; } if (c.pc != 0x0026D334u) [[unlikely]] return; }
L_0026D334:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D33Cu);  if (depth < kMaxDepth) unit_005B(c, 211u, depth + 1u); else { c.pc = 0x0026D9B0u; return; } if (c.pc != 0x0026D33Cu) [[unlikely]] return; }
L_0026D33C:
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0026D69C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D364u); set32(c.r[4], ld32((c.r[16].w[0] + 140u)));  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x0026D364u) [[unlikely]] return; }
L_0026D364:
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.f[0] = ld32((c.r[2].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D37Cu); set32(c.r[4], ld32((c.r[16].w[0] + 144u)));  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x0026D37Cu) [[unlikely]] return; }
L_0026D37C:
    set32(c.r[4], ld32((c.r[16].w[0] + 140u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D388u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_005B(c, 359u, depth + 1u); else { c.pc = 0x0026F250u; return; } if (c.pc != 0x0026D388u) [[unlikely]] return; }
L_0026D388:
    set32(c.r[4], ld32((c.r[16].w[0] + 144u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D394u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_005B(c, 359u, depth + 1u); else { c.pc = 0x0026F250u; return; } if (c.pc != 0x0026D394u) [[unlikely]] return; }
L_0026D394:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D39Cu); set32(c.r[4], ld32((c.r[16].w[0] + 140u)));  if (depth < kMaxDepth) unit_005B(c, 349u, depth + 1u); else { c.pc = 0x0026EE80u; return; } if (c.pc != 0x0026D39Cu) [[unlikely]] return; }
L_0026D39C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D3A4u); set32(c.r[4], ld32((c.r[16].w[0] + 144u)));  if (depth < kMaxDepth) unit_005B(c, 349u, depth + 1u); else { c.pc = 0x0026EE80u; return; } if (c.pc != 0x0026D3A4u) [[unlikely]] return; }
L_0026D3A4:
    set32(c.r[4], ld32((c.r[16].w[0] + 144u)));
    set32(c.r[5], 0u + 30u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D3B4u); set32(c.r[6], 0u + 85u);  if (depth < kMaxDepth) unit_005B(c, 358u, depth + 1u); else { c.pc = 0x0026F230u; return; } if (c.pc != 0x0026D3B4u) [[unlikely]] return; }
L_0026D3B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D3BCu); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0026D3BCu) [[unlikely]] return; }
L_0026D3BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0026D3D4; } }
    set32(c.r[5], 0u + 165u);
    set32(c.r[6], 0u + 19u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D3D4u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0049(c, 163u, depth + 1u); else { c.pc = 0x00226320u; return; } if (c.pc != 0x0026D3D4u) [[unlikely]] return; }
L_0026D3D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D3DCu);  if (depth < kMaxDepth) unit_005B(c, 211u, depth + 1u); else { c.pc = 0x0026D9B0u; return; } if (c.pc != 0x0026D3DCu) [[unlikely]] return; }
L_0026D3DC:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 12u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 24u);  if (t) { goto L_0026D570; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D3F0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0026D3F0u) [[unlikely]] return; }
L_0026D3F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 24u);  if (t) { goto L_0026D410; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 200u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D40Cu); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_0049(c, 182u, depth + 1u); else { c.pc = 0x002265F0u; return; } if (c.pc != 0x0026D40Cu) [[unlikely]] return; }
L_0026D40C:
    set32(c.r[4], 0u + 24u);
    c.budget -= 1;
L_0026D410:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D418u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0026D418u) [[unlikely]] return; }
L_0026D418:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 24u);  if (t) { goto L_0026D438; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 200u);
    set32(c.r[6], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D434u); set32(c.r[7], 0u + 8u);  if (depth < kMaxDepth) unit_0049(c, 182u, depth + 1u); else { c.pc = 0x002265F0u; return; } if (c.pc != 0x0026D434u) [[unlikely]] return; }
L_0026D434:
    set32(c.r[4], 0u + 24u);
    c.budget -= 1;
L_0026D438:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D440u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0026D440u) [[unlikely]] return; }
L_0026D440:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 24u);  if (t) { goto L_0026D460; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 200u);
    set32(c.r[6], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D45Cu); set32(c.r[7], 0u + 27u);  if (depth < kMaxDepth) unit_0049(c, 182u, depth + 1u); else { c.pc = 0x002265F0u; return; } if (c.pc != 0x0026D45Cu) [[unlikely]] return; }
L_0026D45C:
    set32(c.r[4], 0u + 24u);
    c.budget -= 1;
L_0026D460:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D468u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0026D468u) [[unlikely]] return; }
L_0026D468:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 24u);  if (t) { goto L_0026D488; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D484u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 163u, depth + 1u); else { c.pc = 0x00226320u; return; } if (c.pc != 0x0026D484u) [[unlikely]] return; }
L_0026D484:
    set32(c.r[4], 0u + 24u);
    c.budget -= 1;
L_0026D488:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D490u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0026D490u) [[unlikely]] return; }
L_0026D490:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 24u);  if (t) { goto L_0026D4B0; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 6u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D4ACu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 163u, depth + 1u); else { c.pc = 0x00226320u; return; } if (c.pc != 0x0026D4ACu) [[unlikely]] return; }
L_0026D4AC:
    set32(c.r[4], 0u + 24u);
    c.budget -= 1;
L_0026D4B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D4B8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0026D4B8u) [[unlikely]] return; }
L_0026D4B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 24u);  if (t) { goto L_0026D4D8; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 7u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D4D4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 163u, depth + 1u); else { c.pc = 0x00226320u; return; } if (c.pc != 0x0026D4D4u) [[unlikely]] return; }
L_0026D4D4:
    set32(c.r[4], 0u + 24u);
    c.budget -= 1;
L_0026D4D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D4E0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0026D4E0u) [[unlikely]] return; }
L_0026D4E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 24u);  if (t) { goto L_0026D500; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 340u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D4FCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 163u, depth + 1u); else { c.pc = 0x00226320u; return; } if (c.pc != 0x0026D4FCu) [[unlikely]] return; }
L_0026D4FC:
    set32(c.r[4], 0u + 24u);
    c.budget -= 1;
L_0026D500:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D508u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0026D508u) [[unlikely]] return; }
L_0026D508:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 24u);  if (t) { goto L_0026D528; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 340u);
    set32(c.r[6], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D524u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 163u, depth + 1u); else { c.pc = 0x00226320u; return; } if (c.pc != 0x0026D524u) [[unlikely]] return; }
L_0026D524:
    set32(c.r[4], 0u + 24u);
    c.budget -= 1;
L_0026D528:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D530u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0026D530u) [[unlikely]] return; }
L_0026D530:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 24u);  if (t) { goto L_0026D550; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 340u);
    set32(c.r[6], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D54Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 163u, depth + 1u); else { c.pc = 0x00226320u; return; } if (c.pc != 0x0026D54Cu) [[unlikely]] return; }
L_0026D54C:
    set32(c.r[4], 0u + 24u);
    c.budget -= 1;
L_0026D550:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D558u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0026D558u) [[unlikely]] return; }
L_0026D558:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0026D570; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D570u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 163u, depth + 1u); else { c.pc = 0x00226320u; return; } if (c.pc != 0x0026D570u) [[unlikely]] return; }
L_0026D570:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D578u);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x0026D578u) [[unlikely]] return; }
L_0026D578:
    set32(c.r[3], 0u + 35u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[4], 0u + 432u);  if (t) { goto L_0026D5E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D58Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0026D58Cu) [[unlikely]] return; }
L_0026D58C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 28u);  if (t) { goto L_0026D5BC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[1].w[0] + 28288u)));
    set32(c.r[6], 0u + 12800u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D5B8u); set32(c.r[10], c.r[16].w[0] + 162u);  if (depth < kMaxDepth) unit_0040(c, 267u, depth + 1u); else { c.pc = 0x00203160u; return; } if (c.pc != 0x0026D5B8u) [[unlikely]] return; }
L_0026D5B8:
    set32(c.r[4], 0u + 28u);
    c.budget -= 1;
L_0026D5BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D5C4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0026D5C4u) [[unlikely]] return; }
L_0026D5C4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0026D658; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 396u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D5E0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_007D(c, 94u, depth + 1u); else { c.pc = 0x002F5D70u; return; } if (c.pc != 0x0026D5E0u) [[unlikely]] return; }
L_0026D5E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026D654; } }
L_0026D5E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D5F0u);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x0026D5F0u) [[unlikely]] return; }
L_0026D5F0:
    set32(c.r[3], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[4], 0u + 432u);  if (t) { goto L_0026D654; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D604u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0026D604u) [[unlikely]] return; }
L_0026D604:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 28u);  if (t) { goto L_0026D634; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[1].w[0] + 28288u)));
    set32(c.r[6], 0u + 12801u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D630u); set32(c.r[10], c.r[16].w[0] + 162u);  if (depth < kMaxDepth) unit_0040(c, 267u, depth + 1u); else { c.pc = 0x00203160u; return; } if (c.pc != 0x0026D630u) [[unlikely]] return; }
L_0026D630:
    set32(c.r[4], 0u + 28u);
    c.budget -= 1;
L_0026D634:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D63Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0026D63Cu) [[unlikely]] return; }
L_0026D63C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0026D654; } }
    set32(c.r[6], 0u + 188u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D654u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_007D(c, 94u, depth + 1u); else { c.pc = 0x002F5D70u; return; } if (c.pc != 0x0026D654u) [[unlikely]] return; }
L_0026D654:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0026D658:
    c.r[6].d[0] = 0ull + 0ull;
    st8((c.r[16].w[0] + 163u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], c.r[5].w[0] + 28320u);
    set32(c.r[3], c.r[6].w[0] << 2);
    c.budget -= 6;
L_0026D670:
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026D684; } }
    st32((c.r[3].w[0] + 1240u), c.r[4].w[0]);
    c.budget -= 1;
L_0026D684:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[6].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026D670u | kUnwind; return; } goto L_0026D670; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 160u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0026D69C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026D6B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 160u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0026D6F0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D6D8u); set32(c.r[4], ld32((c.r[16].w[0] + 152u)));  if (depth < kMaxDepth) unit_0014(c, 141u, depth + 1u); else { c.pc = 0x00153370u; return; } if (c.pc != 0x0026D6D8u) [[unlikely]] return; }
L_0026D6D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D6E8u); set32(c.r[4], ld32((c.r[16].w[0] + 156u)));  if (depth < kMaxDepth) unit_0014(c, 141u, depth + 1u); else { c.pc = 0x00153370u; return; } if (c.pc != 0x0026D6E8u) [[unlikely]] return; }
L_0026D6E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0026D708; } }
L_0026D6F0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 161u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026D704; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D704u); set32(c.r[4], ld32((c.r[16].w[0] + 148u)));  if (depth < kMaxDepth) unit_005B(c, 353u, depth + 1u); else { c.pc = 0x0026EF90u; return; } if (c.pc != 0x0026D704u) [[unlikely]] return; }
L_0026D704:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0026D708:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026D720:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 160u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0026D754; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 161u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026D754; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D74Cu); set32(c.r[4], ld32((c.r[16].w[0] + 140u)));  if (depth < kMaxDepth) unit_005B(c, 353u, depth + 1u); else { c.pc = 0x0026EF90u; return; } if (c.pc != 0x0026D74Cu) [[unlikely]] return; }
L_0026D74C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D754u); set32(c.r[4], ld32((c.r[16].w[0] + 144u)));  if (depth < kMaxDepth) unit_005B(c, 353u, depth + 1u); else { c.pc = 0x0026EF90u; return; } if (c.pc != 0x0026D754u) [[unlikely]] return; }
L_0026D754:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026D770:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026D780:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], c.r[29].w[0] + 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[29].w[0] + 64u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D7B8u); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0026D7B8u) [[unlikely]] return; }
L_0026D7B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0026D7C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D7C8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 66u, depth + 1u); else { c.pc = 0x00224EF0u; return; } if (c.pc != 0x0026D7C8u) [[unlikely]] return; }
L_0026D7C8:
    c.f[0] = c.r[17].w[0];
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 26176u)));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D7ECu); set32(c.r[5], c.r[2].w[0] - 2000u);  if (depth < kMaxDepth) unit_0024(c, 249u, depth + 1u); else { c.pc = 0x00191DE0u; return; } if (c.pc != 0x0026D7ECu) [[unlikely]] return; }
L_0026D7EC:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D800u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0049(c, 83u, depth + 1u); else { c.pc = 0x00225250u; return; } if (c.pc != 0x0026D800u) [[unlikely]] return; }
L_0026D800:
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[4], c.r[16].w[0] + 13u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D818u); st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0026D818u) [[unlikely]] return; }
L_0026D818:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0026D830; } }
L_0026D820:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 32u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
L_0026D830:
    c.r[2].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] << 4);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026D820u | kUnwind; return; } goto L_0026D820; } }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0026D860:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0026D8E0; } }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0026D8A0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0026D8A0; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D8A0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026D8A0u) [[unlikely]] return; }
L_0026D8A0:
    st32((c.r[17].w[0]), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] << 48;  if (t) { goto L_0026D8CC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0026D8C8; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D8C8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026D8C8u) [[unlikely]] return; }
L_0026D8C8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0026D8CC:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[17].w[0] + 4u), 0u);  if (t) { goto L_0026D8E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D8E0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0026D8E0u) [[unlikely]] return; }
L_0026D8E0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026D900:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[1].w[0] - 27000u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0026D950; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D92Cu); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0026D92Cu) [[unlikely]] return; }
L_0026D92C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0026D948; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D944u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 195u, depth + 1u); else { c.pc = 0x0026D780u; return; } if (c.pc != 0x0026D944u) [[unlikely]] return; }
L_0026D944:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0026D948:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 27000u), c.r[4].w[0]);
    c.budget -= 2;
L_0026D950:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026D970:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[1].w[0] - 27000u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_0026D998; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D990u);  if (depth < kMaxDepth) unit_005B(c, 202u, depth + 1u); else { c.pc = 0x0026D860u; return; } if (c.pc != 0x0026D990u) [[unlikely]] return; }
L_0026D990:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 27000u), 0u);
    c.budget -= 2;
L_0026D998:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0026D9B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[1].w[0] - 27000u)));  c.pc = t; return; }
L_0026D9C0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 7;
L_0026D9DC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[6], c.r[18].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 28320u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], c.r[6].w[0] + 13u);
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == 0ull; st8((c.r[6].w[0] + 13u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0026DA5C; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 12u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026DA4C; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 68u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40900000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    ld128((c.r[4].w[0] + 48u) & ~15u, c.r[4]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[4]);
    st32((c.r[29].w[0] + 76u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 68u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DA40u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0010(c, 247u, depth + 1u); else { c.pc = 0x001437D0u; return; } if (c.pc != 0x0026DA40u) [[unlikely]] return; }
L_0026DA40:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0026DA5C; } }
L_0026DA4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DA54u); set32(c.r[4], ld32((c.r[18].w[0])));  if (depth < kMaxDepth) unit_0049(c, 81u, depth + 1u); else { c.pc = 0x00225200u; return; } if (c.pc != 0x0026DA54u) [[unlikely]] return; }
L_0026DA54:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0026DA5C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026D9DCu | kUnwind; return; } goto L_0026D9DC; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0026DA90:
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[6], c.r[6].w[0] + 28320u);
    set32(c.r[3], c.r[7].w[0] << 2);
    c.budget -= 4;
L_0026DAA0:
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026DAC4; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 64u)));
    ld128((c.r[5].w[0] + 48u) & ~15u, c.r[5]);
    set32(c.r[3], c.r[7].w[0] << 4);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.r[5]);
    c.budget -= 5;
L_0026DAC4:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[7].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026DAA0u | kUnwind; return; } goto L_0026DAA0; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026DAE0:
    set32(c.r[2], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld8((c.r[2].w[0] + 13u));  c.pc = t; return; }
L_0026DAF0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[7], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 28320u);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[29], c.r[29].w[0] - 32u);  if (t) { goto L_0026DB24; } }
    set32(c.r[3], c.r[29].w[0] + 16u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[3], c.r[29].w[0] + 16u);
    ld128((c.r[3].w[0]) & ~15u, c.r[3]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st128((c.r[4].w[0]) & ~15u, c.r[3]);  if (t) { goto L_0026DB60; } }
L_0026DB24:
    set32(c.r[7], ld32((c.r[3].w[0] + 64u)));
    set32(c.r[3], c.r[6].w[0] << 4);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[29].w[0]);
    set32(c.r[5], c.r[3].w[0] + 32u);
    set32(c.r[3], c.r[7].w[0] + 48u);
    ld128((c.r[3].w[0]) & ~15u, c.r[3]);
    st128((c.r[29].w[0]) & ~15u, c.r[3]);
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[6].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[3], c.r[29].w[0]);
    ld128((c.r[3].w[0]) & ~15u, c.r[3]);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    c.budget -= 15;
L_0026DB60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026DB70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x474F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[7].d[0] = c.r[2].d[0] | 16970ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DB8Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 200u, depth + 1u); else { c.pc = 0x001B1A30u; return; } if (c.pc != 0x0026DB8Cu) [[unlikely]] return; }
L_0026DB8C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 1312u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = fp::cvt_w_s(c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[1]);
    set32(c.r[5], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DBBCu);  if (depth < kMaxDepth) unit_005B(c, 206u, depth + 1u); else { c.pc = 0x0026D900u; return; } if (c.pc != 0x0026DBBCu) [[unlikely]] return; }
L_0026DBBC:
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_0026DBD8; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0026DBD8:
    st8((c.r[16].w[0] + 96u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026DBF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0026DC40; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 1312u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DC1Cu); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005B(c, 209u, depth + 1u); else { c.pc = 0x0026D970u; return; } if (c.pc != 0x0026DC1Cu) [[unlikely]] return; }
L_0026DC1C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DC28u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 203u, depth + 1u); else { c.pc = 0x001B1AC0u; return; } if (c.pc != 0x0026DC28u) [[unlikely]] return; }
L_0026DC28:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0026DC44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DC40u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0026DC40u) [[unlikely]] return; }
L_0026DC40:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0026DC44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026DC60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026DC70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DC84u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 211u, depth + 1u); else { c.pc = 0x0026D9B0u; return; } if (c.pc != 0x0026DC84u) [[unlikely]] return; }
L_0026DC84:
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026DCA4; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 96u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0026DCA4; } }
    st8((c.r[2].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0026DCA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026DCC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026DCD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026DCE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026DCF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x474F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[7].d[0] = c.r[2].d[0] | 16970ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DD0Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 200u, depth + 1u); else { c.pc = 0x001B1A30u; return; } if (c.pc != 0x0026DD0Cu) [[unlikely]] return; }
L_0026DD0C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - 1376u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[2], ld32((c.r[1].w[0] + 26176u)));
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    set32(c.r[3], c.r[3].w[0] - 1000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 2072u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DD50u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 282u, depth + 1u); else { c.pc = 0x0026E4A0u; return; } if (c.pc != 0x0026DD50u) [[unlikely]] return; }
L_0026DD50:
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26176u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    set32(c.r[3], c.r[3].w[0] - 1000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 2072u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DD90u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 303u, depth + 1u); else { c.pc = 0x0026E9C0u; return; } if (c.pc != 0x0026DD90u) [[unlikely]] return; }
L_0026DD90:
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[3], 0u - 1u);
    st32((c.r[16].w[0] + 104u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 108u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 112u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026DDC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0026DE4C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 1376u);
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_0026DDFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DDFCu);  if (depth < kMaxDepth) unit_005B(c, 288u, depth + 1u); else { c.pc = 0x0026E5A0u; return; } if (c.pc != 0x0026DDFCu) [[unlikely]] return; }
L_0026DDFC:
    st32((c.r[17].w[0] + 96u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0026DE24; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0026DE24; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DE24u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026DE24u) [[unlikely]] return; }
L_0026DE24:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DE34u); st32((c.r[17].w[0] + 100u), 0u);  if (depth < kMaxDepth) unit_002C(c, 203u, depth + 1u); else { c.pc = 0x001B1AC0u; return; } if (c.pc != 0x0026DE34u) [[unlikely]] return; }
L_0026DE34:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0026DE50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DE4Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0026DE4Cu) [[unlikely]] return; }
L_0026DE4C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0026DE50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026DE70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[1].w[0] + 28340u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0026DE9C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 28344u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026DEA4; } }
L_0026DE9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DEA4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 259u, depth + 1u); else { c.pc = 0x0026E020u; return; } if (c.pc != 0x0026DEA4u) [[unlikely]] return; }
L_0026DEA4:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 108u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026DEC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DEB8u); set32(c.r[4], ld32((c.r[16].w[0] + 100u)));  if (depth < kMaxDepth) unit_005B(c, 349u, depth + 1u); else { c.pc = 0x0026EE80u; return; } if (c.pc != 0x0026DEB8u) [[unlikely]] return; }
L_0026DEB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 96u)));  if (t) { goto L_0026DF1C; } }
L_0026DEC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DEC8u);  if (depth < kMaxDepth) unit_005B(c, 211u, depth + 1u); else { c.pc = 0x0026D9B0u; return; } if (c.pc != 0x0026DEC8u) [[unlikely]] return; }
L_0026DEC8:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 12u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026DF18; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[2], 0u + 200u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0026DF0C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DEF4u); set32(c.r[6], 0u + 70u);  if (depth < kMaxDepth) unit_005B(c, 302u, depth + 1u); else { c.pc = 0x0026E9A0u; return; } if (c.pc != 0x0026DEF4u) [[unlikely]] return; }
L_0026DEF4:
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[5], 0u + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DF04u); set32(c.r[6], 0u + 70u);  if (depth < kMaxDepth) unit_005B(c, 358u, depth + 1u); else { c.pc = 0x0026F230u; return; } if (c.pc != 0x0026DF04u) [[unlikely]] return; }
L_0026DF04:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 108u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0026DF0C:
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 3;
L_0026DF18:
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 1;
L_0026DF1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DF24u);  if (depth < kMaxDepth) unit_005B(c, 295u, depth + 1u); else { c.pc = 0x0026E680u; return; } if (c.pc != 0x0026DF24u) [[unlikely]] return; }
L_0026DF24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026DF40:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 100u)));  goto L_0026EF90; }
L_0026DF50:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 96u)));  goto L_0026E720; }
L_0026DF60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DF84u); c.r[18].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026DF84u) [[unlikely]] return; }
L_0026DF84:
    set32(c.r[25], ld32((c.r[18].w[0] + 56u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DF98u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026DF98u) [[unlikely]] return; }
L_0026DF98:
    ld128((c.r[17].w[0]) & ~15u, c.r[4]);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[18].w[0] + 96u)));
    st128((c.r[3].w[0] + 16u) & ~15u, c.r[4]);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[18].w[0] + 96u)));
    st128((c.r[2].w[0] + 32u) & ~15u, c.r[3]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DFBCu); set32(c.r[4], ld32((c.r[18].w[0] + 96u)));  if (depth < kMaxDepth) unit_005B(c, 291u, depth + 1u); else { c.pc = 0x0026E610u; return; } if (c.pc != 0x0026DFBCu) [[unlikely]] return; }
L_0026DFBC:
    set32(c.r[4], ld32((c.r[18].w[0] + 96u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DFC8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_005B(c, 300u, depth + 1u); else { c.pc = 0x0026E950u; return; } if (c.pc != 0x0026DFC8u) [[unlikely]] return; }
L_0026DFC8:
    set32(c.r[4], ld32((c.r[18].w[0] + 96u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00050000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DFD8u); c.r[5].d[0] = c.r[2].d[0] | 4621ull;  if (depth < kMaxDepth) unit_005B(c, 301u, depth + 1u); else { c.pc = 0x0026E980u; return; } if (c.pc != 0x0026DFD8u) [[unlikely]] return; }
L_0026DFD8:
    ld128((c.r[17].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[18].w[0] + 100u)));
    st128((c.r[2].w[0] + 224u) & ~15u, c.r[3]);
    ld128((c.r[16].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[18].w[0] + 100u)));
    st128((c.r[2].w[0] + 208u) & ~15u, c.r[3]);
    set32(c.r[4], ld32((c.r[18].w[0] + 100u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DFFCu); set32(c.r[5], 0u + 12029u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x0026DFFCu) [[unlikely]] return; }
L_0026DFFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E004u); set32(c.r[4], ld32((c.r[18].w[0] + 100u)));  if (depth < kMaxDepth) unit_005B(c, 349u, depth + 1u); else { c.pc = 0x0026EE80u; return; } if (c.pc != 0x0026E004u) [[unlikely]] return; }
L_0026E004:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0026E020:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 112u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0026E144; } }
    st32((c.r[4].w[0] + 112u), 0u);
    set32(c.r[3], 0u + 705u);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_0026E144; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[1].w[0] + 26328u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E060u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 414u, depth + 1u); else { c.pc = 0x00197E00u; return; } if (c.pc != 0x0026E060u) [[unlikely]] return; }
L_0026E060:
    set32(c.r[2], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_0026E070; } }
    st8((c.r[2].w[0] + 108u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0026E070:
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26328u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E080u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 414u, depth + 1u); else { c.pc = 0x00197E00u; return; } if (c.pc != 0x0026E080u) [[unlikely]] return; }
L_0026E080:
    set32(c.r[2], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_0026E090; } }
    st8((c.r[2].w[0] + 108u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0026E090:
    set32(c.r[5], 0u + 3u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26328u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E0A0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 414u, depth + 1u); else { c.pc = 0x00197E00u; return; } if (c.pc != 0x0026E0A0u) [[unlikely]] return; }
L_0026E0A0:
    set32(c.r[2], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_0026E0B0; } }
    st8((c.r[2].w[0] + 108u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0026E0B0:
    set32(c.r[5], 0u + 4u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26328u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E0C0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 414u, depth + 1u); else { c.pc = 0x00197E00u; return; } if (c.pc != 0x0026E0C0u) [[unlikely]] return; }
L_0026E0C0:
    set32(c.r[2], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_0026E0D0; } }
    st8((c.r[2].w[0] + 108u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0026E0D0:
    set32(c.r[5], 0u + 6u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26328u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E0E0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 414u, depth + 1u); else { c.pc = 0x00197E00u; return; } if (c.pc != 0x0026E0E0u) [[unlikely]] return; }
L_0026E0E0:
    set32(c.r[2], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_0026E0F0; } }
    st8((c.r[2].w[0] + 108u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0026E0F0:
    set32(c.r[5], 0u + 7u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26328u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E100u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 414u, depth + 1u); else { c.pc = 0x00197E00u; return; } if (c.pc != 0x0026E100u) [[unlikely]] return; }
L_0026E100:
    set32(c.r[2], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0026E110; } }
    st8((c.r[2].w[0] + 108u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0026E110:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], 0u + 5u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26328u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E124u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 414u, depth + 1u); else { c.pc = 0x00197E00u; return; } if (c.pc != 0x0026E124u) [[unlikely]] return; }
L_0026E124:
    set32(c.r[3], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026E134; } }
    st8((c.r[3].w[0] + 108u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0026E134:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026E110u | kUnwind; return; } goto L_0026E110; } }
L_0026E144:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026E160:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x474F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[7].d[0] = c.r[2].d[0] | 16970ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E17Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 200u, depth + 1u); else { c.pc = 0x001B1A30u; return; } if (c.pc != 0x0026E17Cu) [[unlikely]] return; }
L_0026E17C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44160000u);
    set32(c.r[2], c.r[2].w[0] - 1440u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 96u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026E1B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0026E1F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1440u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E1E0u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002C(c, 203u, depth + 1u); else { c.pc = 0x001B1AC0u; return; } if (c.pc != 0x0026E1E0u) [[unlikely]] return; }
L_0026E1E0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0026E1FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E1F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0026E1F8u) [[unlikely]] return; }
L_0026E1F8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0026E1FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026E210:
    set32(c.r[5], ld32((c.r[4].w[0] + 68u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[4].w[0] + 16u), c.f[0]);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), c.f[1]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 28u), c.r[3].w[0]);  c.pc = t; return; }
L_0026E240:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0026E45C; } }
L_0026E260:
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 28320u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0026E458; } }
    c.f[1] = ld32((c.r[16].w[0] + 228u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC0000000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026E458; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[3], 0u + 800u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0026E458; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 176u)));
    c.r[3].d[0] = c.r[4].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[4].sd[0] < 51ll ? 1ull : 0ull;  if (t) { goto L_0026E458; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026E458; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 587u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[18].w[0] + 16u);  if (t) { goto L_0026E458; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E2D0u); set32(c.r[5], c.r[16].w[0] + 224u);  if (depth < kMaxDepth) unit_0011(c, 16u, depth + 1u); else { c.pc = 0x00144400u; return; } if (c.pc != 0x0026E2D0u) [[unlikely]] return; }
L_0026E2D0:
    c.f[1] = ld32((c.r[18].w[0] + 96u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[18].w[0] + 16u);  if (t) { goto L_0026E458; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E2E8u); set32(c.r[5], c.r[16].w[0] + 224u);  if (depth < kMaxDepth) unit_0011(c, 24u, depth + 1u); else { c.pc = 0x00144550u; return; } if (c.pc != 0x0026E2E8u) [[unlikely]] return; }
L_0026E2E8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 32496u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_0026E30C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 32480u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[0] = fp::sub(c.f[0], c.f[1]);  if (t) { goto L_0026E328; } }
L_0026E30C:
    c.f[1] = ld32((c.r[1].w[0] + 32472u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026E328; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 32480u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 3;
L_0026E328:
    c.f[2] = ld32((c.r[16].w[0] + 212u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 32496u));
    c.f[2] = fp::sub(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_0026E354; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 32480u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[2] = fp::sub(c.f[2], c.f[1]);  if (t) { goto L_0026E370; } }
L_0026E354:
    c.f[1] = ld32((c.r[1].w[0] + 32472u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026E370; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 32480u));
    c.f[2] = fp::add(c.f[2], c.f[1]);
    c.budget -= 3;
L_0026E370:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026E388; } }
    c.f[2] = c.f[2] ^ fp::kSign;
    c.budget -= 1;
L_0026E388:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 32464u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026E458; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[2], c.r[2].w[0] - 20656u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.f[12] = c.f[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E3B8u); st128((c.r[4].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0011(c, 21u, depth + 1u); else { c.pc = 0x001444F0u; return; } if (c.pc != 0x0026E3B8u) [[unlikely]] return; }
L_0026E3B8:
    set32(c.r[3], c.r[29].w[0] + 64u);
    set32(c.r[2], c.r[18].w[0] + 16u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E3E0u); set32(c.r[6], 0u + 12027u);  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x0026E3E0u) [[unlikely]] return; }
L_0026E3E0:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[3]);
    set32(c.r[7], 0u - 2u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[5], 0u - 9u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    st128((c.r[16].w[0] + 224u) & ~15u, c.r[3]);
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[3]);
    st128((c.r[4].w[0] + 224u) & ~15u, c.r[3]);
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.f[0] = ld32((c.r[3].w[0] + 212u));
    st32((c.r[16].w[0] + 212u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 395u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[7].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[8].d[0];
    st8((c.r[16].w[0] + 395u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 397u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 397u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 395u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[7].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[8].d[0];
    st8((c.r[4].w[0] + 395u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 397u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st8((c.r[4].w[0] + 397u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 30;
L_0026E458:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0026E45C:
    c.r[3].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026E260u | kUnwind; return; } goto L_0026E260; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0026E480:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 128u)));  c.pc = t; return; }
L_0026E490:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 128u)));  c.pc = t; return; }
L_0026E4A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E4C8u); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0026E4C8u) [[unlikely]] return; }
L_0026E4C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0026E4D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E4D8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 285u, depth + 1u); else { c.pc = 0x0026E500u; return; } if (c.pc != 0x0026E4D8u) [[unlikely]] return; }
L_0026E4D8:
    st8((c.r[2].w[0] + 67u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[2].w[0] + 66u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0026E500:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 48u), 0u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 56u), 0u);
    st32((c.r[4].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E534u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0026E534u) [[unlikely]] return; }
L_0026E534:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026E548; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E548u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 246u, depth + 1u); else { c.pc = 0x0014FA00u; return; } if (c.pc != 0x0026E548u) [[unlikely]] return; }
L_0026E548:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[3], c.r[17].w[0] + 16u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 65u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 67u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 64u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[17].w[0] + 32u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[17].w[0] + 48u), 0u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 52u), 0u);
    st32((c.r[17].w[0] + 60u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026E5A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0026E5F8; } }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] << 48;  if (t) { goto L_0026E5E4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0026E5E0; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E5E0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026E5E0u) [[unlikely]] return; }
L_0026E5E0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0026E5E4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[17].w[0]), 0u);  if (t) { goto L_0026E5F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E5F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0026E5F8u) [[unlikely]] return; }
L_0026E5F8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026E610:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0026E664; } }
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E638u); set32(c.r[6], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0011(c, 77u, depth + 1u); else { c.pc = 0x00145760u; return; } if (c.pc != 0x0026E638u) [[unlikely]] return; }
L_0026E638:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E650u); set32(c.r[6], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026E650u) [[unlikely]] return; }
L_0026E650:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E664u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026E664u) [[unlikely]] return; }
L_0026E664:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0026E680:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 65u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0026E708; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E6A0u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0014(c, 41u, depth + 1u); else { c.pc = 0x00150720u; return; } if (c.pc != 0x0026E6A0u) [[unlikely]] return; }
L_0026E6A0:
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0026E6BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 56u), c.r[3].w[0]);  if (t) { goto L_0026E6F8; } }
L_0026E6BC:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_0026E6CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 56u), 0u);  if (t) { goto L_0026E6F8; } }
L_0026E6CC:
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.f[1] = c.r[4].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 56u), c.f[0]);
    c.budget -= 11;
L_0026E6F8:
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    c.budget -= 4;
L_0026E708:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026E720:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 65u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026E93C; } }
    c.f[1] = ld32((c.r[4].w[0] + 56u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026E93C; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 66u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);  if (t) { goto L_0026E81C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 64u));
    set32(c.r[12], ld32((c.r[1].w[0] + 20144u)));
    c.r[3].d[0] = c.r[3].d[0] << 2;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[13].d[0] = c.r[3].d[0] | 64ull;
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_0026E900; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x50000000u);
    set32(c.r[11], ld32((c.r[1].w[0] + 1380u)));
    c.r[10].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[9].d[0] = c.r[3].d[0] | 3ull;
    c.r[5].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = 0ull | 32769ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x11000000u);
    c.r[6].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.r[7].d[0] = c.r[7].d[0] | 2ull;
    set32(c.r[5], 0u + 14u);
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
    st64((c.r[10].w[0] + 48u), c.r[13].d[0]);
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
    c.budget -= 38;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 1364u), c.r[3].w[0]);  if (t) { goto L_0026E900; } }
L_0026E81C:
    c.r[5].d[0] = ld8((c.r[4].w[0] + 64u));
    c.f[0] = c.r[3].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    set32(c.r[3], ld32((c.r[1].w[0] + 20144u)));
    c.r[5].d[0] = c.r[5].d[0] << 2;
    c.r[7].d[0] = c.r[5].d[0] | 96ull;
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    set32(c.r[5], ld32((c.r[1].w[0] + 1364u)));
    set32(c.r[6], c.f[0]);
    c.r[6].d[0] = c.r[6].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[1].d[0] = c.r[5].sd[0] < 5ll ? 1ull : 0ull;
    c.r[6].d[0] = c.r[6].d[0] << 32;
    c.budget -= 19;
    { const bool t = c.r[1].d[0] != 0ull; c.r[13].d[0] = c.r[7].d[0] | c.r[6].d[0];  if (t) { goto L_0026E900; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x50000000u);
    set32(c.r[12], ld32((c.r[1].w[0] + 1380u)));
    c.r[11].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[10].d[0] = c.r[5].d[0] | 3ull;
    c.r[6].d[0] = c.r[5].d[0] << 32;
    c.r[5].d[0] = 0ull | 32769ull;
    c.r[9].sd[0] = static_cast<std::int32_t>(0x11000000u);
    c.r[7].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.r[8].d[0] = c.r[8].d[0] | 2ull;
    set32(c.r[6], 0u + 14u);
    set32(c.r[5], 0u + 66u);
    c.r[11].d[0] = c.r[12].d[0] | c.r[11].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[11].w[0]), c.r[10].d[0]);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st64((c.r[11].w[0] + 8u), 0ull);
    st64((c.r[11].w[0] + 16u), 0ull);
    st32((c.r[11].w[0] + 24u), c.r[9].w[0]);
    st32((c.r[11].w[0] + 28u), c.r[8].w[0]);
    st64((c.r[11].w[0] + 32u), c.r[7].d[0]);
    st64((c.r[11].w[0] + 40u), c.r[6].d[0]);
    st64((c.r[11].w[0] + 48u), c.r[13].d[0]);
    st64((c.r[11].w[0] + 56u), c.r[5].d[0]);
    set32(c.r[5], ld32((c.r[1].w[0] + 1380u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[5], c.r[5].w[0] + 64u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1380u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    set32(c.r[5], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[5], c.r[5].w[0] - 4u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1364u), c.r[5].w[0]);
    c.budget -= 38;
L_0026E900:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026E93C; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 67u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0026E92C; } }
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E924u); c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 141u, depth + 1u); else { c.pc = 0x00153370u; return; } if (c.pc != 0x0026E924u) [[unlikely]] return; }
L_0026E924:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0026E940; } }
L_0026E92C:
    set32(c.r[25], ld32((c.r[3].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E93Cu); c.r[4].d[0] = c.r[3].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026E93Cu) [[unlikely]] return; }
L_0026E93C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0026E940:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0026E950:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0026E964; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 64u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0026E974; } }
L_0026E964:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0026E974; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 64u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0026E974:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026E980:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026E990; } }
    st64((c.r[3].w[0] + 192u), c.r[5].d[0]);
    c.budget -= 1;
L_0026E990:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026E9A0:
    st32((c.r[4].w[0] + 48u), c.r[6].w[0]);
    set32(c.r[3], 0u - 1u);
    st32((c.r[4].w[0] + 52u), c.r[5].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 60u), c.r[3].w[0]);  c.pc = t; return; }
L_0026E9C0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E9F4u); set32(c.r[4], 0u + 480u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0026E9F4u) [[unlikely]] return; }
L_0026E9F4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[4], 0u + 32u);  if (t) { goto L_0026EA14; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EA0Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 339u, depth + 1u); else { c.pc = 0x0026ECB0u; return; } if (c.pc != 0x0026EA0Cu) [[unlikely]] return; }
L_0026EA0C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 32u);
    c.budget -= 2;
L_0026EA14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EA1Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0026EA1Cu) [[unlikely]] return; }
L_0026EA1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0026EA34; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EA30u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 22u, depth + 1u); else { c.pc = 0x001C44B0u; return; } if (c.pc != 0x0026EA30u) [[unlikely]] return; }
L_0026EA30:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0026EA34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EA3Cu); set32(c.r[4], c.r[17].w[0] + 416u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x0026EA3Cu) [[unlikely]] return; }
L_0026EA3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EA44u); set32(c.r[4], 0u + 84u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0026EA44u) [[unlikely]] return; }
L_0026EA44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0026EA68; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0026EA58; } }
    set32(c.r[5], c.r[5].w[0] + 416u);
    c.budget -= 1;
L_0026EA58:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EA64u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 107u, depth + 1u); else { c.pc = 0x001B51F0u; return; } if (c.pc != 0x0026EA64u) [[unlikely]] return; }
L_0026EA64:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0026EA68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EA70u); set32(c.r[4], c.r[17].w[0] + 416u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x0026EA70u) [[unlikely]] return; }
L_0026EA70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EA78u); set32(c.r[4], 0u + 60u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0026EA78u) [[unlikely]] return; }
L_0026EA78:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 416u);  if (t) { goto L_0026EA9C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EA94u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0030(c, 98u, depth + 1u); else { c.pc = 0x001C2260u; return; } if (c.pc != 0x0026EA94u) [[unlikely]] return; }
L_0026EA94:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 416u);
    c.budget -= 2;
L_0026EA9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EAA4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x0026EAA4u) [[unlikely]] return; }
L_0026EAA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EAACu); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0026EAACu) [[unlikely]] return; }
L_0026EAAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0026EACC; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0026EAC0; } }
    set32(c.r[5], c.r[5].w[0] + 416u);
    c.budget -= 1;
L_0026EAC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EAC8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 471u, depth + 1u); else { c.pc = 0x001B3010u; return; } if (c.pc != 0x0026EAC8u) [[unlikely]] return; }
L_0026EAC8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0026EACC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EAD4u); set32(c.r[4], c.r[17].w[0] + 416u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x0026EAD4u) [[unlikely]] return; }
L_0026EAD4:
    st8((c.r[17].w[0] + 444u), static_cast<std::uint8_t>(c.r[20].w[0]));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull; st8((c.r[17].w[0] + 445u), static_cast<std::uint8_t>(c.r[18].w[0]));  if (t) { goto L_0026EAF0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26176u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 6136u)));
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 4;
L_0026EAF0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0026EB20:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[4], 0u + 480u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EB4Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0026EB4Cu) [[unlikely]] return; }
L_0026EB4C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[4], 0u + 32u);  if (t) { goto L_0026EB6C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EB64u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 339u, depth + 1u); else { c.pc = 0x0026ECB0u; return; } if (c.pc != 0x0026EB64u) [[unlikely]] return; }
L_0026EB64:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 32u);
    c.budget -= 2;
L_0026EB6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EB74u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0026EB74u) [[unlikely]] return; }
L_0026EB74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0026EB8C; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EB88u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 22u, depth + 1u); else { c.pc = 0x001C44B0u; return; } if (c.pc != 0x0026EB88u) [[unlikely]] return; }
L_0026EB88:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0026EB8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EB94u); set32(c.r[4], c.r[16].w[0] + 416u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x0026EB94u) [[unlikely]] return; }
L_0026EB94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EB9Cu); set32(c.r[4], 0u + 96u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0026EB9Cu) [[unlikely]] return; }
L_0026EB9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0026EBB4; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EBB0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 90u, depth + 1u); else { c.pc = 0x001B4F50u; return; } if (c.pc != 0x0026EBB0u) [[unlikely]] return; }
L_0026EBB0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0026EBB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EBBCu); set32(c.r[4], c.r[16].w[0] + 416u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x0026EBBCu) [[unlikely]] return; }
L_0026EBBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EBC4u); set32(c.r[4], 0u + 84u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0026EBC4u) [[unlikely]] return; }
L_0026EBC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0026EBE8; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0026EBD8; } }
    set32(c.r[5], c.r[5].w[0] + 416u);
    c.budget -= 1;
L_0026EBD8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EBE4u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 107u, depth + 1u); else { c.pc = 0x001B51F0u; return; } if (c.pc != 0x0026EBE4u) [[unlikely]] return; }
L_0026EBE4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0026EBE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EBF0u); set32(c.r[4], c.r[16].w[0] + 416u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x0026EBF0u) [[unlikely]] return; }
L_0026EBF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EBF8u); set32(c.r[4], 0u + 1664u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0026EBF8u) [[unlikely]] return; }
L_0026EBF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0026EC1C; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0026EC0C; } }
    set32(c.r[5], c.r[5].w[0] + 416u);
    c.budget -= 1;
L_0026EC0C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EC18u); set32(c.r[6], 0u + 21u);  if (depth < kMaxDepth) unit_002D(c, 119u, depth + 1u); else { c.pc = 0x001B54E0u; return; } if (c.pc != 0x0026EC18u) [[unlikely]] return; }
L_0026EC18:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0026EC1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EC24u); set32(c.r[4], c.r[16].w[0] + 416u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x0026EC24u) [[unlikely]] return; }
L_0026EC24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EC2Cu); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0026EC2Cu) [[unlikely]] return; }
L_0026EC2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0026EC4C; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0026EC40; } }
    set32(c.r[5], c.r[5].w[0] + 416u);
    c.budget -= 1;
L_0026EC40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EC48u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 471u, depth + 1u); else { c.pc = 0x001B3010u; return; } if (c.pc != 0x0026EC48u) [[unlikely]] return; }
L_0026EC48:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0026EC4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EC54u); set32(c.r[4], c.r[16].w[0] + 416u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x0026EC54u) [[unlikely]] return; }
L_0026EC54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EC5Cu); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0026EC5Cu) [[unlikely]] return; }
L_0026EC5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0026EC7C; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0026EC70; } }
    set32(c.r[5], c.r[5].w[0] + 416u);
    c.budget -= 1;
L_0026EC70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EC78u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 169u, depth + 1u); else { c.pc = 0x001B63B0u; return; } if (c.pc != 0x0026EC78u) [[unlikely]] return; }
L_0026EC78:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0026EC7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EC84u); set32(c.r[4], c.r[16].w[0] + 416u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x0026EC84u) [[unlikely]] return; }
L_0026EC84:
    st8((c.r[16].w[0] + 444u), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 445u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0026ECB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026ECCCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 6u, depth + 1u); else { c.pc = 0x001C0080u; return; } if (c.pc != 0x0026ECCCu) [[unlikely]] return; }
L_0026ECCC:
    set32(c.r[4], c.r[16].w[0] + 416u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026ECD8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 29u, depth + 1u); else { c.pc = 0x0013C330u; return; } if (c.pc != 0x0026ECD8u) [[unlikely]] return; }
L_0026ECD8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 1024u);
    set32(c.r[3], c.r[3].w[0] - 1004u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[4], 0u + 272u);
    st32((c.r[16].w[0] + 440u), c.r[3].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 456u), 0u);
    st32((c.r[16].w[0] + 460u), 0u);
    st32((c.r[16].w[0] + 464u), 0u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026ED0Cu); st32((c.r[16].w[0] + 468u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0026ED0Cu) [[unlikely]] return; }
L_0026ED0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0026ED1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026ED1Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 246u, depth + 1u); else { c.pc = 0x0014FA00u; return; } if (c.pc != 0x0026ED1Cu) [[unlikely]] return; }
L_0026ED1C:
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 444u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st8((c.r[16].w[0] + 445u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[8], 0u - 2u);
    st8((c.r[16].w[0] + 446u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[16].w[0] + 448u), c.r[2].w[0]);
    set32(c.r[7], 0u - 17u);
    st8((c.r[16].w[0] + 452u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 392u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[4].d[0] & c.r[8].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 392u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[6].d[0] = c.r[4].d[0] & 1ull;
    c.r[4].d[0] = ld8((c.r[16].w[0] + 400u));
    c.r[4].d[0] = c.r[4].d[0] & c.r[8].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 400u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 392u));
    c.r[4].d[0] = c.r[4].d[0] & c.r[7].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[16].w[0] + 392u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[6].d[0] = ld8((c.r[16].w[0] + 400u));
    c.r[4].d[0] = c.r[4].d[0] << 59;
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    set32(c.r[5], c.r[4].w[0] << 4);
    c.r[4].d[0] = c.r[6].d[0] & c.r[7].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[16].w[0] + 400u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 456u), 0u);
    st32((c.r[16].w[0] + 460u), 0u);
    st32((c.r[16].w[0] + 468u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 42;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026EDD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0026EE5C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 1024u);
    set32(c.r[2], c.r[2].w[0] - 1004u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 440u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0026EE28; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0026EE28; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EE28u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026EE28u) [[unlikely]] return; }
L_0026EE28:
    set32(c.r[4], c.r[17].w[0] + 416u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EE38u); st32((c.r[17].w[0] + 52u), 0u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x0026EE38u) [[unlikely]] return; }
L_0026EE38:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EE44u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 13u, depth + 1u); else { c.pc = 0x001C0200u; return; } if (c.pc != 0x0026EE44u) [[unlikely]] return; }
L_0026EE44:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0026EE60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EE5Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0026EE5Cu) [[unlikely]] return; }
L_0026EE5C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0026EE60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026EE80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 392u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0026EF74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EEA4u); set32(c.r[4], c.r[16].w[0] + 416u);  if (depth < kMaxDepth) unit_000F(c, 48u, depth + 1u); else { c.pc = 0x0013C5A0u; return; } if (c.pc != 0x0026EEA4u) [[unlikely]] return; }
L_0026EEA4:
    set32(c.r[3], ld32((c.r[16].w[0] + 456u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 460u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0026EEC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 464u), c.r[2].w[0]);  if (t) { goto L_0026EEFC; } }
L_0026EEC0:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_0026EED0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 464u), 0u);  if (t) { goto L_0026EEFC; } }
L_0026EED0:
    set32(c.r[3], ld32((c.r[16].w[0] + 456u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 460u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 464u), c.f[0]);
    c.budget -= 11;
L_0026EEFC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 456u)));
    c.f[2] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 468u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 456u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 448u));
    c.f[0] = ld32((c.r[16].w[0] + 464u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 15;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 364u), c.r[2].w[0]);  if (t) { goto L_0026EF3C; } }
    set32(c.r[4], c.r[4].w[0] + 416u);
    c.budget -= 1;
L_0026EF3C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53330000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EF48u); c.r[5].d[0] = c.r[2].d[0] | 19799ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x0026EF48u) [[unlikely]] return; }
L_0026EF48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0026EF54; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_0026EF54:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0026EF74; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 236u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 216u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EF74u); set32(c.r[6], c.r[2].w[0] << 6);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x0026EF74u) [[unlikely]] return; }
L_0026EF74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026EF90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = ld8((c.r[4].w[0] + 392u));
    c.r[3].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] << 59;  if (t) { goto L_0026F1F8; } }
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026F1F8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 364u)));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_0026F1F8; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 445u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_0026F0B0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 452u));
    set32(c.r[10], ld32((c.r[1].w[0] + 20144u)));
    c.r[2].d[0] = c.r[2].d[0] << 2;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[11].d[0] = c.r[2].d[0] | 64ull;
    set32(c.r[1], c.r[10].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_0026F094; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[1], c.r[10].w[0] + c.r[1].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x50000000u);
    set32(c.r[9], ld32((c.r[1].w[0] + 1380u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[7].d[0] = c.r[2].d[0] | 3ull;
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = 0ull | 32769ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x11000000u);
    c.r[4].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[5].d[0] = c.r[5].d[0] | 2ull;
    set32(c.r[3], 0u + 14u);
    set32(c.r[2], 0u + 66u);
    c.r[8].d[0] = c.r[9].d[0] | c.r[8].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[8].w[0]), c.r[7].d[0]);
    set32(c.r[1], c.r[10].w[0] + c.r[1].w[0]);
    st64((c.r[8].w[0] + 8u), 0ull);
    st64((c.r[8].w[0] + 16u), 0ull);
    st32((c.r[8].w[0] + 24u), c.r[6].w[0]);
    st32((c.r[8].w[0] + 28u), c.r[5].w[0]);
    st64((c.r[8].w[0] + 32u), c.r[4].d[0]);
    st64((c.r[8].w[0] + 40u), c.r[3].d[0]);
    st64((c.r[8].w[0] + 48u), c.r[11].d[0]);
    st64((c.r[8].w[0] + 56u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1380u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[2].w[0] + 64u);
    set32(c.r[1], c.r[10].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1380u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[10].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[2].w[0] - 4u);
    set32(c.r[1], c.r[10].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1364u), c.r[2].w[0]);
    c.budget -= 37;
L_0026F094:
    c.f[1] = ld32((c.r[16].w[0] + 464u));
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.f[0] = ld32((c.r[16].w[0] + 448u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F0A8u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0015(c, 85u, depth + 1u); else { c.pc = 0x00156E00u; return; } if (c.pc != 0x0026F0A8u) [[unlikely]] return; }
L_0026F0A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 364u)));  if (t) { goto L_0026F180; } }
L_0026F0B0:
    c.r[3].d[0] = c.r[4].d[0] << 32;
    set32(c.r[11], ld32((c.r[1].w[0] + 20144u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 452u));
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].d[0] = c.r[5].d[0] << 2;
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    c.r[5].d[0] = c.r[3].d[0] | 96ull;
    set32(c.r[3], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[1].d[0] != 0ull; c.r[12].d[0] = c.r[5].d[0] | c.r[4].d[0];  if (t) { goto L_0026F17C; } }
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
    set32(c.r[3], 0u + 66u);
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
    st64((c.r[9].w[0] + 48u), c.r[12].d[0]);
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
L_0026F17C:
    set32(c.r[3], ld32((c.r[16].w[0] + 364u)));
    c.budget -= 1;
L_0026F180:
    c.r[3].d[0] = c.r[3].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026F198; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 446u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026F1AC; } }
L_0026F198:
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00050000u);
    c.r[4].d[0] = c.r[4].d[0] | 12801ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st64((c.r[3].w[0] + 192u), c.r[4].d[0]);  if (t) { goto L_0026F1BC; } }
L_0026F1AC:
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00050000u);
    c.r[4].d[0] = c.r[4].d[0] | 4621ull;
    st64((c.r[3].w[0] + 192u), c.r[4].d[0]);
    c.budget -= 4;
L_0026F1BC:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0026F1F8; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 444u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0026F1E8; } }
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F1E0u);  if (depth < kMaxDepth) unit_0014(c, 141u, depth + 1u); else { c.pc = 0x00153370u; return; } if (c.pc != 0x0026F1E0u) [[unlikely]] return; }
L_0026F1E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0026F1FC; } }
L_0026F1E8:
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F1F8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026F1F8u) [[unlikely]] return; }
L_0026F1F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0026F1FC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026F210:
    st32((c.r[4].w[0] + 456u), c.r[6].w[0]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[4].w[0] + 460u), c.r[5].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 468u), c.r[3].w[0]);  c.pc = t; return; }
L_0026F230:
    st32((c.r[4].w[0] + 456u), c.r[6].w[0]);
    set32(c.r[3], 0u - 1u);
    st32((c.r[4].w[0] + 460u), c.r[5].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 468u), c.r[3].w[0]);  c.pc = t; return; }
L_0026F250:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 392u));
    set32(c.r[8], 0u - 2u);
    c.r[6].d[0] = c.r[5].d[0] & 1ull;
    set32(c.r[7], 0u - 17u);
    set32(c.r[5], c.r[6].w[0] << 4);
    c.r[3].d[0] = c.r[3].d[0] & c.r[8].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st8((c.r[4].w[0] + 392u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[6].d[0] = c.r[3].d[0] & 1ull;
    c.r[3].d[0] = ld8((c.r[4].w[0] + 400u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[8].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st8((c.r[4].w[0] + 400u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 392u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[7].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[4].w[0] + 392u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 400u));
    c.r[3].d[0] = c.r[3].d[0] << 59;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    set32(c.r[5], c.r[3].w[0] << 4);
    c.r[3].d[0] = c.r[6].d[0] & c.r[7].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 26;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 400u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0026F2C0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0026F2D4; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 452u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0026F2E4; } }
L_0026F2D4:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0026F2E4; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 452u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0026F2E4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026F2F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0026F300; } }
    set32(c.r[4], c.r[4].w[0] + 416u);
    c.budget -= 1;
L_0026F300:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53330000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F30Cu); c.r[5].d[0] = c.r[2].d[0] | 19799ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x0026F30Cu) [[unlikely]] return; }
L_0026F30C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026F31C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_0026F320; } }
L_0026F31C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0026F320:
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[9], c.r[29].w[0] + 28u);
    set32(c.r[4], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[10], c.r[29].w[0] + 24u);
    set32(c.r[5], ld32((c.r[3].w[0] + 164u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 176u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 168u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 172u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F348u); set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (depth < kMaxDepth) unit_001A(c, 45u, depth + 1u); else { c.pc = 0x00168AA0u; return; } if (c.pc != 0x0026F348u) [[unlikely]] return; }
L_0026F348:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = ~(c.r[2].d[0] | 0ull);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026F360:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x474D0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] | 19795ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F390u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013C370u; return; } if (c.pc != 0x0026F390u) [[unlikely]] return; }
L_0026F390:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 1040u);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 28u), c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    ld128((c.r[3].w[0] + 224u) & ~15u, c.r[3]);
    st128((c.r[17].w[0] + 32u) & ~15u, c.r[3]);
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    ld128((c.r[3].w[0] + 208u) & ~15u, c.r[3]);
    st128((c.r[17].w[0] + 48u) & ~15u, c.r[3]);
    st32((c.r[17].w[0] + 64u), 0u);
    st32((c.r[17].w[0] + 68u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0026F3E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0026F440; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1040u);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    ld128((c.r[16].w[0] + 32u) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    st128((c.r[2].w[0] + 224u) & ~15u, c.r[3]);
    ld128((c.r[16].w[0] + 48u) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F428u); st128((c.r[2].w[0] + 208u) & ~15u, c.r[3]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x0026F428u) [[unlikely]] return; }
L_0026F428:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0026F444; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F440u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0026F440u) [[unlikely]] return; }
L_0026F440:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0026F444:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026F460:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[3], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0] + 64u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 68u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0026F4A8; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0026F4F4; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F4A0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026F4A0u) [[unlikely]] return; }
L_0026F4A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0026F4F8; } }
L_0026F4A8:
    ld128((c.r[16].w[0] + 32u) & ~15u, c.r[2]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F4B4u); st128((c.r[29].w[0] + 32u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0010(c, 27u, depth + 1u); else { c.pc = 0x00140650u; return; } if (c.pc != 0x0026F4B4u) [[unlikely]] return; }
L_0026F4B4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[4] = c.r[3].w[0];
    c.f[3] = ld32((c.r[1].w[0] + 32576u));
    c.f[0] = fp::sub(c.f[0], c.f[4]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 36u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 36u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[4]);
    st128((c.r[3].w[0] + 224u) & ~15u, c.r[4]);
    c.budget -= 16;
L_0026F4F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0026F4F8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026F510:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x474D0000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] | 19782ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F548u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013C370u; return; } if (c.pc != 0x0026F548u) [[unlikely]] return; }
L_0026F548:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 1056u);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 28u), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    ld128((c.r[2].w[0] + 224u) & ~15u, c.r[2]);
    st128((c.r[17].w[0] + 32u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    ld128((c.r[2].w[0] + 208u) & ~15u, c.r[2]);
    st128((c.r[17].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    ld128((c.r[2].w[0] + 224u) & ~15u, c.r[2]);
    st128((c.r[17].w[0] + 64u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    ld128((c.r[2].w[0] + 208u) & ~15u, c.r[2]);
    st128((c.r[17].w[0] + 80u) & ~15u, c.r[2]);
    c.f[0] = ld32((c.r[1].w[0] + 32568u));
    st32((c.r[17].w[0] + 112u), c.f[0]);
    st32((c.r[17].w[0] + 116u), 0u);
    st32((c.r[17].w[0] + 120u), 0u);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F5A4u); st32((c.r[17].w[0] + 124u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0010(c, 27u, depth + 1u); else { c.pc = 0x00140650u; return; } if (c.pc != 0x0026F5A4u) [[unlikely]] return; }
L_0026F5A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[3] = c.r[2].w[0];
    c.f[2] = ld32((c.r[1].w[0] + 32560u));
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F5D0u); c.f[20] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0010(c, 27u, depth + 1u); else { c.pc = 0x00140650u; return; } if (c.pc != 0x0026F5D0u) [[unlikely]] return; }
L_0026F5D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[3] = c.r[2].w[0];
    c.f[2] = ld32((c.r[1].w[0] + 32560u));
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F5FCu); c.f[21] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0010(c, 27u, depth + 1u); else { c.pc = 0x00140650u; return; } if (c.pc != 0x0026F5FCu) [[unlikely]] return; }
L_0026F5FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[3] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[1].w[0] + 32560u));
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 96u), c.f[0]);
    st32((c.r[17].w[0] + 100u), c.f[21]);
    st32((c.r[17].w[0] + 104u), c.f[20]);
    st32((c.r[17].w[0] + 108u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 24;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0026F660:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0026F6C0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1056u);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    ld128((c.r[16].w[0] + 32u) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    st128((c.r[2].w[0] + 224u) & ~15u, c.r[3]);
    ld128((c.r[16].w[0] + 48u) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F6A8u); st128((c.r[2].w[0] + 208u) & ~15u, c.r[3]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x0026F6A8u) [[unlikely]] return; }
L_0026F6A8:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0026F6C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F6C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0026F6C0u) [[unlikely]] return; }
L_0026F6C0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0026F6C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026F6E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 120u)));
    set32(c.r[3], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0] + 120u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 124u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026F724; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0026F770; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F71Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026F71Cu) [[unlikely]] return; }
L_0026F71C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0026F774; } }
L_0026F724:
    c.f[1] = ld32((c.r[4].w[0] + 112u));
    set32(c.r[5], c.r[4].w[0] + 80u);
    c.f[0] = ld32((c.r[4].w[0] + 116u));
    set32(c.r[3], c.r[4].w[0] + 96u);
    c.f[1] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 116u), c.f[1]);
    c.f[0] = ld32((c.r[4].w[0] + 68u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 68u), c.f[0]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[5], ld32((c.r[4].w[0] + 28u)));
    ld128((c.r[4].w[0] + 64u) & ~15u, c.r[3]);
    st128((c.r[5].w[0] + 224u) & ~15u, c.r[3]);
    set32(c.r[5], ld32((c.r[4].w[0] + 28u)));
    ld128((c.r[4].w[0] + 80u) & ~15u, c.r[3]);
    st128((c.r[5].w[0] + 208u) & ~15u, c.r[3]);
    c.budget -= 19;
L_0026F770:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0026F774:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0026F780:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[6].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0026F7A4; } }
    set32(c.r[5], c.r[5].w[0] + 416u);
    c.budget -= 1;
L_0026F7A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x474D0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F7B8u); c.r[8].d[0] = c.r[2].d[0] | 19794ull;  if (depth < kMaxDepth) unit_0037(c, 132u, depth + 1u); else { c.pc = 0x001DEA70u; return; } if (c.pc != 0x0026F7B8u) [[unlikely]] return; }
L_0026F7B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[17].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] - 1072u);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 116u), c.r[16].w[0]);
    st32((c.r[17].w[0] + 36u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F7D8u); st32((c.r[17].w[0] + 112u), 0u);  if (depth < kMaxDepth) unit_0010(c, 152u, depth + 1u); else { c.pc = 0x00141D80u; return; } if (c.pc != 0x0026F7D8u) [[unlikely]] return; }
L_0026F7D8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026F7F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0026F87C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 1072u);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 112u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026F834; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[2].w[0] - 16u);  if (t) { goto L_0026F834; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F834u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0026F834u) [[unlikely]] return; }
L_0026F834:
    st32((c.r[17].w[0] + 112u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 112u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0026F858; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[2].w[0] - 16u);  if (t) { goto L_0026F854; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F854u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0026F854u) [[unlikely]] return; }
L_0026F854:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0026F858:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F864u); st32((c.r[17].w[0] + 112u), 0u);  if (depth < kMaxDepth) unit_0037(c, 141u, depth + 1u); else { c.pc = 0x001DEBE0u; return; } if (c.pc != 0x0026F864u) [[unlikely]] return; }
L_0026F864:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0026F880; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F87Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0026F87Cu) [[unlikely]] return; }
L_0026F87C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0026F880:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026F8A0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[2].w[0] + 224u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F8C4u); set32(c.r[6], c.r[2].w[0] + 208u);  if (depth < kMaxDepth) unit_0011(c, 77u, depth + 1u); else { c.pc = 0x00145760u; return; } if (c.pc != 0x0026F8C4u) [[unlikely]] return; }
L_0026F8C4:
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[29].w[0] + 48u);  if (t) { goto L_0026F954; } }
L_0026F8D4:
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[5], c.r[8].w[0] << 2);
    set32(c.r[2], ld32((c.r[16].w[0] + 112u)));
    set32(c.r[3], c.r[8].w[0] << 5);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[2]);
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[6].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[6].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[6].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[7].w[0]) & ~15u, c.vu0.vf[8]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[8].w[3]);
    st128((c.r[7].w[0]) & ~15u, c.vu0.vf[12]);
    set32(c.r[3], c.r[8].w[0] << 5);
    set32(c.r[2], c.r[8].w[0] << 5);
    set32(c.r[8], c.r[8].w[0] + 1u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[4]);
    st128((c.r[5].w[0]) & ~15u, c.r[4]);
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 16u));
    st32((c.r[5].w[0] + 16u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 112u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    st32((c.r[5].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 32;
L_0026F954:
    set32(c.r[3], ld32((c.r[16].w[0] + 116u)));
    c.r[2].d[0] = c.r[8].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026F8D4u | kUnwind; return; } goto L_0026F8D4; } }
    st32((c.r[16].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F970u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0010(c, 152u, depth + 1u); else { c.pc = 0x00141D80u; return; } if (c.pc != 0x0026F970u) [[unlikely]] return; }
L_0026F970:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0026F980:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 5u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F998u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 382u, depth + 1u); else { c.pc = 0x0026F780u; return; } if (c.pc != 0x0026F998u) [[unlikely]] return; }
L_0026F998:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], 0u + 176u);
    set32(c.r[2], c.r[2].w[0] - 1088u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F9ACu); st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0026F9ACu) [[unlikely]] return; }
L_0026F9AC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 32u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F9C4u); set32(c.r[8], 0u + 5u);  if (depth < kMaxDepth) unit_0000(c, 94u, depth + 1u); else { c.pc = 0x001008C0u; return; } if (c.pc != 0x0026F9C4u) [[unlikely]] return; }
L_0026F9C4:
    st32((c.r[16].w[0] + 112u), c.r[2].w[0]);
    c.r[14].sd[0] = static_cast<std::int32_t>(0xC1000000u);
    set32(c.r[15], ld32((c.r[16].w[0] + 112u)));
    c.r[12].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0xC1100000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0xC1600000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x41080000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x41380000u);
    set32(c.r[5], 0u + 48u);
    set32(c.r[4], 0u + 112u);
    st32((c.r[15].w[0]), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[15].w[0] + 4u), c.r[14].w[0]);
    st32((c.r[15].w[0] + 8u), c.r[12].w[0]);
    st32((c.r[15].w[0] + 12u), c.r[13].w[0]);
    set32(c.r[12], ld32((c.r[16].w[0] + 112u)));
    st32((c.r[12].w[0] + 32u), 0u);
    st32((c.r[12].w[0] + 36u), c.r[10].w[0]);
    st32((c.r[12].w[0] + 40u), c.r[11].w[0]);
    st32((c.r[12].w[0] + 44u), c.r[13].w[0]);
    set32(c.r[10], ld32((c.r[16].w[0] + 112u)));
    st32((c.r[10].w[0] + 64u), 0u);
    st32((c.r[10].w[0] + 68u), c.r[14].w[0]);
    st32((c.r[10].w[0] + 72u), c.r[9].w[0]);
    st32((c.r[10].w[0] + 76u), c.r[13].w[0]);
    set32(c.r[9], ld32((c.r[16].w[0] + 112u)));
    st32((c.r[9].w[0] + 96u), 0u);
    st32((c.r[9].w[0] + 100u), 0u);
    st32((c.r[9].w[0] + 104u), 0u);
    st32((c.r[9].w[0] + 108u), c.r[13].w[0]);
    set32(c.r[9], ld32((c.r[16].w[0] + 112u)));
    st32((c.r[9].w[0] + 128u), 0u);
    st32((c.r[9].w[0] + 132u), c.r[3].w[0]);
    st32((c.r[9].w[0] + 136u), c.r[11].w[0]);
    st32((c.r[9].w[0] + 140u), c.r[13].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 112u)));
    st32((c.r[3].w[0] + 16u), c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 112u)));
    st32((c.r[3].w[0] + 48u), c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 112u)));
    st32((c.r[3].w[0] + 80u), c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 112u)));
    st32((c.r[3].w[0] + 112u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 112u)));
    st32((c.r[3].w[0] + 144u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 112u)));
    st32((c.r[3].w[0] + 20u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 112u)));
    st32((c.r[3].w[0] + 52u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 112u)));
    st32((c.r[3].w[0] + 84u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 112u)));
    st32((c.r[3].w[0] + 116u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 112u)));
    st32((c.r[3].w[0] + 148u), c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 63;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026FAC0:
    set32(c.r[4], ld32((c.r[4].w[0] + 112u)));
    set32(c.r[6], c.r[6].w[0] << 5);
    ld128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    c.f[0] = ld32((c.r[5].w[0] + 16u));
    st32((c.r[4].w[0] + 16u), c.f[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 20u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 20u), c.r[3].w[0]);  c.pc = t; return; }
L_0026FAF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0026FB5C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 1088u);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 112u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0026FB38; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[2].w[0] - 16u);  if (t) { goto L_0026FB34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FB34u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0026FB34u) [[unlikely]] return; }
L_0026FB34:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0026FB38:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FB44u); st32((c.r[17].w[0] + 112u), 0u);  if (depth < kMaxDepth) unit_005B(c, 385u, depth + 1u); else { c.pc = 0x0026F7F0u; return; } if (c.pc != 0x0026FB44u) [[unlikely]] return; }
L_0026FB44:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0026FB60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FB5Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0026FB5Cu) [[unlikely]] return; }
L_0026FB5C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0026FB60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026FB80:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 416u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0026EDD0u | kUnwind; return; } goto L_0026EDD0; }
L_0026FB90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 65u);  c.pc = t; return; }
L_0026FBA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FBBCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 39u, depth + 1u); else { c.pc = 0x001486F0u; return; } if (c.pc != 0x0026FBBCu) [[unlikely]] return; }
L_0026FBBC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[17].w[0] + 36u);
    set32(c.r[2], c.r[2].w[0] - 976u);
    set32(c.r[5], 0u + 8u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st8((c.r[17].w[0] + 52u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FBDCu); st32((c.r[17].w[0] + 32u), 0u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x0026FBDCu) [[unlikely]] return; }
L_0026FBDC:
    st32((c.r[17].w[0] + 40u), 0u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st16((c.r[17].w[0] + 44u), static_cast<std::uint16_t>(0u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 32584u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FBFCu); st32((c.r[17].w[0] + 48u), 0u);  if (depth < kMaxDepth) unit_0012(c, 45u, depth + 1u); else { c.pc = 0x001487B0u; return; } if (c.pc != 0x0026FBFCu) [[unlikely]] return; }
L_0026FBFC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026FC20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0026FC94; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 976u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0026FC5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FC5Cu);  if (depth < kMaxDepth) unit_0010(c, 83u, depth + 1u); else { c.pc = 0x00141160u; return; } if (c.pc != 0x0026FC5Cu) [[unlikely]] return; }
L_0026FC5C:
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0026FC70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FC70u);  if (depth < kMaxDepth) unit_0010(c, 83u, depth + 1u); else { c.pc = 0x00141160u; return; } if (c.pc != 0x0026FC70u) [[unlikely]] return; }
L_0026FC70:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FC7Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 42u, depth + 1u); else { c.pc = 0x00148750u; return; } if (c.pc != 0x0026FC7Cu) [[unlikely]] return; }
L_0026FC7C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0026FC98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FC94u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0026FC94u) [[unlikely]] return; }
L_0026FC94:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0026FC98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026FCB0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[4], c.r[29].w[0] + 144u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FCE8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0017(c, 125u, depth + 1u); else { c.pc = 0x0015D850u; return; } if (c.pc != 0x0026FCE8u) [[unlikely]] return; }
L_0026FCE8:
    c.r[3].d[0] = ld16((c.r[21].w[0] + 44u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[29].w[0] + 144u);  if (t) { goto L_0026FDD0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 144u);  if (t) { goto L_0026FD08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld16((c.r[21].w[0] + 44u));  if (t) { goto L_0026FDF8; } }
L_0026FD08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FD10u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0026FD10u) [[unlikely]] return; }
L_0026FD10:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 144u);  if (t) { goto L_0026FD2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FD24u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 152u, depth + 1u); else { c.pc = 0x0015DC50u; return; } if (c.pc != 0x0026FD24u) [[unlikely]] return; }
L_0026FD24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 32u), c.r[2].w[0]);  if (t) { goto L_0026FD34; } }
L_0026FD2C:
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[21].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 2;
L_0026FD34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FD3Cu); set32(c.r[22], ld32((c.r[21].w[0] + 32u)));  if (depth < kMaxDepth) unit_0051(c, 163u, depth + 1u); else { c.pc = 0x00245520u; return; } if (c.pc != 0x0026FD3Cu) [[unlikely]] return; }
L_0026FD3C:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[19].w[0] << 7);
    c.budget -= 3;
L_0026FD48:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[18], c.r[22].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 2u)));
    set32(c.r[7], c.r[18].w[0] + 36u);
    set32(c.r[23], c.r[18].w[0] + 2u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FD68u); set32(c.r[17], c.r[18].w[0] + 68u);  if (depth < kMaxDepth) unit_0051(c, 156u, depth + 1u); else { c.pc = 0x00245420u; return; } if (c.pc != 0x0026FD68u) [[unlikely]] return; }
L_0026FD68:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[7], c.r[18].w[0] + 70u);
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[23].w[0])));
    set32(c.r[6], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FD88u); set32(c.r[16], c.r[18].w[0] + 102u);  if (depth < kMaxDepth) unit_0051(c, 156u, depth + 1u); else { c.pc = 0x00245420u; return; } if (c.pc != 0x0026FD88u) [[unlikely]] return; }
L_0026FD88:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], 0u + 255u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0026FDA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_0026FDB8; } }
L_0026FDA8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0026FDB8; } }
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_0026FDB8:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[19].w[0] << 7);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026FD48u | kUnwind; return; } goto L_0026FD48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026FDF4; } }
L_0026FDD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FDD8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 152u, depth + 1u); else { c.pc = 0x0015DC50u; return; } if (c.pc != 0x0026FDD8u) [[unlikely]] return; }
L_0026FDD8:
    st32((c.r[21].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 48u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    st16((c.r[21].w[0] + 36u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[21].w[0] + 48u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[21].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 7;
L_0026FDF4:
    c.r[3].d[0] = ld16((c.r[21].w[0] + 44u));
    c.budget -= 1;
L_0026FDF8:
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[21].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[29].w[0] + 144u);  if (t) { goto L_0026FE28; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 32600u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FE24u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 45u, depth + 1u); else { c.pc = 0x001487B0u; return; } if (c.pc != 0x0026FE24u) [[unlikely]] return; }
L_0026FE24:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 1;
L_0026FE28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FE30u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x0026FE30u) [[unlikely]] return; }
L_0026FE30:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0026FE60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FE7Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 404u, depth + 1u); else { c.pc = 0x0026FB90u; return; } if (c.pc != 0x0026FE7Cu) [[unlikely]] return; }
L_0026FE7C:
    set32(c.r[5], ld32((c.r[17].w[0] + 32u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FE8Cu); set32(c.r[6], c.r[2].w[0] << 7);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0026FE8Cu) [[unlikely]] return; }
L_0026FE8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026FEA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[5].d[0] << 48;
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (t) { goto L_0026FEEC; } }
L_0026FEC8:
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[3], c.r[17].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 2u)));
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0026FEE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0026FF08; } }
L_0026FEE8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0026FEEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FEF4u);  if (depth < kMaxDepth) unit_005B(c, 404u, depth + 1u); else { c.pc = 0x0026FB90u; return; } if (c.pc != 0x0026FEF4u) [[unlikely]] return; }
L_0026FEF4:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026FEC8u | kUnwind; return; } goto L_0026FEC8; } }
    set32(c.r[2], 0u - 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 2;
L_0026FF08:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0026FF20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[4].w[0] + 52u));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0026FF64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FF50u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 209u, depth + 1u); else { c.pc = 0x003064A0u; return; } if (c.pc != 0x0026FF50u) [[unlikely]] return; }
L_0026FF50:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[18].sd[0] < 86ll ? 1ull : 0ull;  if (t) { goto L_0026FF84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0026FFF8; } }
L_0026FF64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FF6Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 229u, depth + 1u); else { c.pc = 0x003066A0u; return; } if (c.pc != 0x0026FF6Cu) [[unlikely]] return; }
L_0026FF6C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026FF80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0026FFF8; } }
L_0026FF80:
    c.r[1].d[0] = c.r[18].sd[0] < 86ll ? 1ull : 0ull;
    c.budget -= 1;
L_0026FF84:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0026FFF8; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FF98u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 428u, depth + 1u); else { c.pc = 0x0026FEA0u; return; } if (c.pc != 0x0026FF98u) [[unlikely]] return; }
L_0026FF98:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 52u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[2].w[0] << 7);  if (t) { goto L_0026FFB8; } }
    set32(c.r[3], c.r[2].w[0] << 7);
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[2].w[0] + 106u);  if (t) { goto L_0026FFC4; } }
L_0026FFB8:
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[2].w[0] + 118u);
    c.budget -= 3;
L_0026FFC4:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], c.r[4].w[0] << 1);
    c.budget -= 3;
L_0026FFD0:
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0026FFE4; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0026FFE4:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026FFD0u | kUnwind; return; } goto L_0026FFD0; } }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0026FFF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.budget -= 2;
    [[clang::musttail]] return unit_005C(c, 1u, depth);
}

}
