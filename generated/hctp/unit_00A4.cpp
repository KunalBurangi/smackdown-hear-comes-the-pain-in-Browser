#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00A4[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 5,
    0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0,
    0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0,
    13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0,
    0, 0, 0, 0, 0, 0, 17, 0, 18, 0, 19, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 21, 0, 0, 22, 0, 23, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25,
    0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 33, 0, 0, 0, 0, 0, 0,
    34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 36, 0, 0, 0, 37, 0, 0, 38, 0, 0,
    0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 41, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0,
    0, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0,
    0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0,
    0, 57, 0, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 0, 63,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0,
    72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 77, 0,
    78, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 81, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 84, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 89, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 95, 0, 0, 96,
    0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 99, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 105, 0, 0, 106,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 108, 0, 0, 0, 0, 0,
    0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 113, 0, 0, 114, 0, 0, 115, 0, 0, 116, 0, 0, 117, 0, 0,
    118, 0, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0,
    0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 132, 0, 0, 133, 0, 134, 0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 0, 137,
    0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 141,
    0, 0, 0, 0, 0, 142, 0, 143, 0, 144, 0, 145, 0, 146, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0,
    0, 0, 0, 151, 0, 0, 152, 0, 0, 153, 0, 154, 0, 0, 0, 155, 0, 0, 0, 156, 0, 157, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 160, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 163, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 175, 0, 0, 176, 0, 0, 0, 177, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 182, 0, 0, 183, 0, 0, 0, 184, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 189, 0, 0, 190, 0, 0, 0, 191, 0, 192, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 195, 0,
    0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 199, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0,
    204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 211, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 219, 0, 220, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 235, 0,
    0, 236, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 241, 0, 0, 0,
    0, 242, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 247, 0, 0,
    0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 252, 0, 253, 0, 0, 0, 254, 0, 0, 255, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 257, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 0, 261, 0, 0,
    0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 264, 0, 265, 0, 266, 0, 0, 0, 267, 0, 0, 0,
    0, 268, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 271, 0, 272, 0, 0, 273, 0, 0,
    0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 275, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 278, 0, 0, 0, 0, 0,
    0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 281, 282, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 288, 0, 0, 289, 0,
    0, 290, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0,
    0, 295, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 297, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 300, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 302, 0, 303, 0, 0, 304, 0, 305, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 0, 308,
    0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 312, 0,
    0, 0, 0, 0, 313, 0, 314, 0, 315, 0, 316, 0, 0, 0, 317, 0, 0, 0, 318, 0, 319, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 322, 0, 323, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 325, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 328, 0, 0, 329, 0, 0, 0, 330, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 332, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0,
    0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    341, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 343, 0, 344, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 347,
    0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 351, 0, 0, 0, 352, 0, 0, 0, 353, 0,
    0, 0, 354, 0, 0, 0, 0, 355, 0, 356, 0, 0, 0, 357, 0, 0, 358, 0, 0, 359, 0, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 362,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 364, 0, 365, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 367, 0, 0, 0,
    0, 368, 0, 0, 0, 0, 0, 0, 369, 0, 370, 0, 0, 371, 0, 0, 0, 0, 372, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0,
    0, 375, 0, 376, 0, 377, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 380, 0, 381, 0, 0, 382, 0, 0,
    0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 385, 0, 386, 0, 0, 387, 0, 0, 0, 0, 0, 388, 0, 0, 0,
    389, 0, 0, 0, 390, 0, 0, 0, 391, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 394, 0, 0, 395,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 398, 0, 399, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 401, 0, 0, 0, 402, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 408, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 411, 0, 0, 412, 0,
    0, 413, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    419, 0, 0, 0, 420, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0,
    0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 426, 0, 427, 0,
    428, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 431, 0, 0,
    0, 432, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0,
    0, 0, 0, 435, 0, 436, 0, 0, 437, 0, 438, 0, 0, 0, 0, 0, 439, 0, 440, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 442, 0, 443,
    0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0,
    0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 451, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 455, 0, 0, 0, 456, 0,
    0, 0, 457, 0, 0, 0, 458, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 461, 0,
    0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0,
    466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 470, 0, 0,
    0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 478, 0, 0, 0, 479, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 482, 0, 0, 0, 0,
    483, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0,
    0, 0, 491, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 496, 0,
    0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 499,
};

void unit_00A4(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00390000;
    case 2u: goto L_0039004C;
    case 3u: goto L_00390064;
    case 4u: goto L_00390070;
    case 5u: goto L_0039007C;
    case 6u: goto L_00390088;
    case 7u: goto L_003900A0;
    case 8u: goto L_003900C0;
    case 9u: goto L_003900D0;
    case 10u: goto L_003900F4;
    case 11u: goto L_00390118;
    case 12u: goto L_00390178;
    case 13u: goto L_00390180;
    case 14u: goto L_003901AC;
    case 15u: goto L_003901CC;
    case 16u: goto L_003901F8;
    case 17u: goto L_00390218;
    case 18u: goto L_00390220;
    case 19u: goto L_00390228;
    case 20u: goto L_00390248;
    case 21u: goto L_00390254;
    case 22u: goto L_00390260;
    case 23u: goto L_00390268;
    case 24u: goto L_003902EC;
    case 25u: goto L_0039047C;
    case 26u: goto L_003904A0;
    case 27u: goto L_003904E0;
    case 28u: goto L_00390520;
    case 29u: goto L_00390560;
    case 30u: goto L_003905A0;
    case 31u: goto L_00390640;
    case 32u: goto L_003906DC;
    case 33u: goto L_003906E4;
    case 34u: goto L_00390700;
    case 35u: goto L_00390750;
    case 36u: goto L_00390758;
    case 37u: goto L_00390768;
    case 38u: goto L_00390774;
    case 39u: goto L_00390788;
    case 40u: goto L_003907AC;
    case 41u: goto L_003907B8;
    case 42u: goto L_003907D4;
    case 43u: goto L_003907EC;
    case 44u: goto L_00390810;
    case 45u: goto L_00390820;
    case 46u: goto L_0039082C;
    case 47u: goto L_00390850;
    case 48u: goto L_003908A0;
    case 49u: goto L_003908B4;
    case 50u: goto L_003908C8;
    case 51u: goto L_003908DC;
    case 52u: goto L_003908EC;
    case 53u: goto L_00390910;
    case 54u: goto L_00390938;
    case 55u: goto L_00390944;
    case 56u: goto L_00390974;
    case 57u: goto L_00390984;
    case 58u: goto L_00390998;
    case 59u: goto L_003909AC;
    case 60u: goto L_00390A44;
    case 61u: goto L_00390A54;
    case 62u: goto L_00390A68;
    case 63u: goto L_00390A7C;
    case 64u: goto L_00390ACC;
    case 65u: goto L_00390B10;
    case 66u: goto L_00390BCC;
    case 67u: goto L_00390BE0;
    case 68u: goto L_00390BF4;
    case 69u: goto L_00390CA0;
    case 70u: goto L_00390CD0;
    case 71u: goto L_00390CE8;
    case 72u: goto L_00390D00;
    case 73u: goto L_00390D28;
    case 74u: goto L_00390D34;
    case 75u: goto L_00390D58;
    case 76u: goto L_00390D68;
    case 77u: goto L_00390D78;
    case 78u: goto L_00390D80;
    case 79u: goto L_00390D8C;
    case 80u: goto L_00390D9C;
    case 81u: goto L_00390DAC;
    case 82u: goto L_00390DB4;
    case 83u: goto L_00390DC4;
    case 84u: goto L_00390E04;
    case 85u: goto L_00390E14;
    case 86u: goto L_00390E24;
    case 87u: goto L_00390E34;
    case 88u: goto L_00390E48;
    case 89u: goto L_00390E54;
    case 90u: goto L_00390E5C;
    case 91u: goto L_00390ECC;
    case 92u: goto L_00390ED4;
    case 93u: goto L_00390F44;
    case 94u: goto L_00390F64;
    case 95u: goto L_00390F70;
    case 96u: goto L_00390F7C;
    case 97u: goto L_00390F88;
    case 98u: goto L_00390F9C;
    case 99u: goto L_00390FBC;
    case 100u: goto L_00390FC4;
    case 101u: goto L_00391034;
    case 102u: goto L_0039103C;
    case 103u: goto L_003910AC;
    case 104u: goto L_003910E8;
    case 105u: goto L_003910F0;
    case 106u: goto L_003910FC;
    case 107u: goto L_00391160;
    case 108u: goto L_00391168;
    case 109u: goto L_0039118C;
    case 110u: goto L_003911C0;
    case 111u: goto L_00391218;
    case 112u: goto L_00391238;
    case 113u: goto L_00391244;
    case 114u: goto L_00391250;
    case 115u: goto L_0039125C;
    case 116u: goto L_00391268;
    case 117u: goto L_00391274;
    case 118u: goto L_00391280;
    case 119u: goto L_0039128C;
    case 120u: goto L_003912A4;
    case 121u: goto L_003912C0;
    case 122u: goto L_003912D0;
    case 123u: goto L_003912F0;
    case 124u: goto L_00391304;
    case 125u: goto L_0039131C;
    case 126u: goto L_00391330;
    case 127u: goto L_00391344;
    case 128u: goto L_0039135C;
    case 129u: goto L_00391370;
    case 130u: goto L_003913A0;
    case 131u: goto L_003913B0;
    case 132u: goto L_003913B8;
    case 133u: goto L_003913C4;
    case 134u: goto L_003913CC;
    case 135u: goto L_003913D4;
    case 136u: goto L_003913EC;
    case 137u: goto L_003913FC;
    case 138u: goto L_00391410;
    case 139u: goto L_00391440;
    case 140u: goto L_0039146C;
    case 141u: goto L_0039147C;
    case 142u: goto L_00391494;
    case 143u: goto L_0039149C;
    case 144u: goto L_003914A4;
    case 145u: goto L_003914AC;
    case 146u: goto L_003914B4;
    case 147u: goto L_003914BC;
    case 148u: goto L_003914D0;
    case 149u: goto L_003914E4;
    case 150u: goto L_003914F8;
    case 151u: goto L_0039150C;
    case 152u: goto L_00391518;
    case 153u: goto L_00391524;
    case 154u: goto L_0039152C;
    case 155u: goto L_0039153C;
    case 156u: goto L_0039154C;
    case 157u: goto L_00391554;
    case 158u: goto L_00391560;
    case 159u: goto L_003915AC;
    case 160u: goto L_003915B4;
    case 161u: goto L_003915BC;
    case 162u: goto L_003915D4;
    case 163u: goto L_00391610;
    case 164u: goto L_00391618;
    case 165u: goto L_00391650;
    case 166u: goto L_00391658;
    case 167u: goto L_00391680;
    case 168u: goto L_00391748;
    case 169u: goto L_003917C4;
    case 170u: goto L_003917DC;
    case 171u: goto L_003917F4;
    case 172u: goto L_00391830;
    case 173u: goto L_00391864;
    case 174u: goto L_0039189C;
    case 175u: goto L_003918A8;
    case 176u: goto L_003918B4;
    case 177u: goto L_003918C4;
    case 178u: goto L_003918D0;
    case 179u: goto L_00391930;
    case 180u: goto L_0039199C;
    case 181u: goto L_003919AC;
    case 182u: goto L_003919B8;
    case 183u: goto L_003919C4;
    case 184u: goto L_003919D4;
    case 185u: goto L_003919E0;
    case 186u: goto L_00391A40;
    case 187u: goto L_00391AAC;
    case 188u: goto L_00391AC0;
    case 189u: goto L_00391ACC;
    case 190u: goto L_00391AD8;
    case 191u: goto L_00391AE8;
    case 192u: goto L_00391AF0;
    case 193u: goto L_00391B5C;
    case 194u: goto L_00391B6C;
    case 195u: goto L_00391B78;
    case 196u: goto L_00391B84;
    case 197u: goto L_00391B9C;
    case 198u: goto L_00391BB4;
    case 199u: goto L_00391C18;
    case 200u: goto L_00391C20;
    case 201u: goto L_00391C34;
    case 202u: goto L_00391C48;
    case 203u: goto L_00391C64;
    case 204u: goto L_00391C80;
    case 205u: goto L_00391CB0;
    case 206u: goto L_00391CC0;
    case 207u: goto L_00391D40;
    case 208u: goto L_00391D50;
    case 209u: goto L_00391E50;
    case 210u: goto L_00391EAC;
    case 211u: goto L_00391EB4;
    case 212u: goto L_00391EBC;
    case 213u: goto L_00391EE0;
    case 214u: goto L_00391F10;
    case 215u: goto L_00391F20;
    case 216u: goto L_00391FA0;
    case 217u: goto L_00391FB0;
    case 218u: goto L_003920B0;
    case 219u: goto L_0039210C;
    case 220u: goto L_00392114;
    case 221u: goto L_0039211C;
    case 222u: goto L_00392140;
    case 223u: goto L_00392160;
    case 224u: goto L_003921A4;
    case 225u: goto L_0039220C;
    case 226u: goto L_00392220;
    case 227u: goto L_00392238;
    case 228u: goto L_00392244;
    case 229u: goto L_003922A8;
    case 230u: goto L_003922C0;
    case 231u: goto L_003922D0;
    case 232u: goto L_003922D8;
    case 233u: goto L_00392340;
    case 234u: goto L_0039236C;
    case 235u: goto L_00392378;
    case 236u: goto L_00392384;
    case 237u: goto L_00392390;
    case 238u: goto L_003923B0;
    case 239u: goto L_003923C4;
    case 240u: goto L_003923DC;
    case 241u: goto L_003923F0;
    case 242u: goto L_00392404;
    case 243u: goto L_00392414;
    case 244u: goto L_00392424;
    case 245u: goto L_00392440;
    case 246u: goto L_00392458;
    case 247u: goto L_00392474;
    case 248u: goto L_00392488;
    case 249u: goto L_00392498;
    case 250u: goto L_003924A8;
    case 251u: goto L_003924B8;
    case 252u: goto L_003924CC;
    case 253u: goto L_003924D4;
    case 254u: goto L_003924E4;
    case 255u: goto L_003924F0;
    case 256u: goto L_0039251C;
    case 257u: goto L_00392530;
    case 258u: goto L_00392538;
    case 259u: goto L_00392550;
    case 260u: goto L_00392560;
    case 261u: goto L_00392574;
    case 262u: goto L_00392590;
    case 263u: goto L_003925BC;
    case 264u: goto L_003925D0;
    case 265u: goto L_003925D8;
    case 266u: goto L_003925E0;
    case 267u: goto L_003925F0;
    case 268u: goto L_00392604;
    case 269u: goto L_00392620;
    case 270u: goto L_0039264C;
    case 271u: goto L_00392660;
    case 272u: goto L_00392668;
    case 273u: goto L_00392674;
    case 274u: goto L_00392690;
    case 275u: goto L_003926AC;
    case 276u: goto L_003926B8;
    case 277u: goto L_003926DC;
    case 278u: goto L_003926E8;
    case 279u: goto L_00392704;
    case 280u: goto L_00392734;
    case 281u: goto L_00392788;
    case 282u: goto L_0039278C;
    case 283u: goto L_00392794;
    case 284u: goto L_003927D0;
    case 285u: goto L_00392828;
    case 286u: goto L_00392850;
    case 287u: goto L_00392860;
    case 288u: goto L_0039286C;
    case 289u: goto L_00392878;
    case 290u: goto L_00392884;
    case 291u: goto L_0039289C;
    case 292u: goto L_003928C0;
    case 293u: goto L_003928D0;
    case 294u: goto L_003928F0;
    case 295u: goto L_00392904;
    case 296u: goto L_0039291C;
    case 297u: goto L_00392930;
    case 298u: goto L_00392944;
    case 299u: goto L_0039295C;
    case 300u: goto L_00392970;
    case 301u: goto L_003929A0;
    case 302u: goto L_003929B0;
    case 303u: goto L_003929B8;
    case 304u: goto L_003929C4;
    case 305u: goto L_003929CC;
    case 306u: goto L_003929D4;
    case 307u: goto L_003929EC;
    case 308u: goto L_003929FC;
    case 309u: goto L_00392A10;
    case 310u: goto L_00392A3C;
    case 311u: goto L_00392A68;
    case 312u: goto L_00392A78;
    case 313u: goto L_00392A90;
    case 314u: goto L_00392A98;
    case 315u: goto L_00392AA0;
    case 316u: goto L_00392AA8;
    case 317u: goto L_00392AB8;
    case 318u: goto L_00392AC8;
    case 319u: goto L_00392AD0;
    case 320u: goto L_00392ADC;
    case 321u: goto L_00392B28;
    case 322u: goto L_00392B30;
    case 323u: goto L_00392B38;
    case 324u: goto L_00392B50;
    case 325u: goto L_00392B88;
    case 326u: goto L_00392B90;
    case 327u: goto L_00392BC4;
    case 328u: goto L_00392BCC;
    case 329u: goto L_00392BD8;
    case 330u: goto L_00392BE8;
    case 331u: goto L_00392C24;
    case 332u: goto L_00392C44;
    case 333u: goto L_00392C4C;
    case 334u: goto L_00392C70;
    case 335u: goto L_00392C90;
    case 336u: goto L_00392CB4;
    case 337u: goto L_00392D2C;
    case 338u: goto L_00392D70;
    case 339u: goto L_00392DC0;
    case 340u: goto L_00392DD8;
    case 341u: goto L_00392E00;
    case 342u: goto L_00392E14;
    case 343u: goto L_00392E2C;
    case 344u: goto L_00392E34;
    case 345u: goto L_00392E50;
    case 346u: goto L_00392E64;
    case 347u: goto L_00392E7C;
    case 348u: goto L_00392E90;
    case 349u: goto L_00392EA8;
    case 350u: goto L_00392EC4;
    case 351u: goto L_00392ED8;
    case 352u: goto L_00392EE8;
    case 353u: goto L_00392EF8;
    case 354u: goto L_00392F08;
    case 355u: goto L_00392F1C;
    case 356u: goto L_00392F24;
    case 357u: goto L_00392F34;
    case 358u: goto L_00392F40;
    case 359u: goto L_00392F4C;
    case 360u: goto L_00392F60;
    case 361u: goto L_00392F70;
    case 362u: goto L_00392F7C;
    case 363u: goto L_00392FA8;
    case 364u: goto L_00392FB8;
    case 365u: goto L_00392FC0;
    case 366u: goto L_00392FE0;
    case 367u: goto L_00392FF0;
    case 368u: goto L_00393004;
    case 369u: goto L_00393020;
    case 370u: goto L_00393028;
    case 371u: goto L_00393034;
    case 372u: goto L_00393048;
    case 373u: goto L_00393050;
    case 374u: goto L_00393074;
    case 375u: goto L_00393084;
    case 376u: goto L_0039308C;
    case 377u: goto L_00393094;
    case 378u: goto L_003930B0;
    case 379u: goto L_003930C4;
    case 380u: goto L_003930E0;
    case 381u: goto L_003930E8;
    case 382u: goto L_003930F4;
    case 383u: goto L_00393108;
    case 384u: goto L_00393134;
    case 385u: goto L_00393144;
    case 386u: goto L_0039314C;
    case 387u: goto L_00393158;
    case 388u: goto L_00393170;
    case 389u: goto L_00393180;
    case 390u: goto L_00393190;
    case 391u: goto L_003931A0;
    case 392u: goto L_003931B0;
    case 393u: goto L_003931E8;
    case 394u: goto L_003931F0;
    case 395u: goto L_003931FC;
    case 396u: goto L_00393228;
    case 397u: goto L_00393234;
    case 398u: goto L_00393284;
    case 399u: goto L_0039328C;
    case 400u: goto L_003932A4;
    case 401u: goto L_003932BC;
    case 402u: goto L_003932CC;
    case 403u: goto L_003932E0;
    case 404u: goto L_00393338;
    case 405u: goto L_00393370;
    case 406u: goto L_003933CC;
    case 407u: goto L_003933F4;
    case 408u: goto L_0039341C;
    case 409u: goto L_00393424;
    case 410u: goto L_00393450;
    case 411u: goto L_0039346C;
    case 412u: goto L_00393478;
    case 413u: goto L_00393484;
    case 414u: goto L_0039349C;
    case 415u: goto L_003934C0;
    case 416u: goto L_00393504;
    case 417u: goto L_0039352C;
    case 418u: goto L_00393534;
    case 419u: goto L_00393580;
    case 420u: goto L_00393590;
    case 421u: goto L_00393598;
    case 422u: goto L_003935D4;
    case 423u: goto L_003935F4;
    case 424u: goto L_00393604;
    case 425u: goto L_00393660;
    case 426u: goto L_00393670;
    case 427u: goto L_00393678;
    case 428u: goto L_00393680;
    case 429u: goto L_00393690;
    case 430u: goto L_003936E4;
    case 431u: goto L_003936F4;
    case 432u: goto L_00393704;
    case 433u: goto L_0039370C;
    case 434u: goto L_00393770;
    case 435u: goto L_0039378C;
    case 436u: goto L_00393794;
    case 437u: goto L_003937A0;
    case 438u: goto L_003937A8;
    case 439u: goto L_003937C0;
    case 440u: goto L_003937C8;
    case 441u: goto L_003937D4;
    case 442u: goto L_003937F4;
    case 443u: goto L_003937FC;
    case 444u: goto L_00393808;
    case 445u: goto L_00393834;
    case 446u: goto L_0039384C;
    case 447u: goto L_00393860;
    case 448u: goto L_00393884;
    case 449u: goto L_003938C0;
    case 450u: goto L_003938D8;
    case 451u: goto L_00393908;
    case 452u: goto L_00393920;
    case 453u: goto L_00393938;
    case 454u: goto L_00393954;
    case 455u: goto L_00393968;
    case 456u: goto L_00393978;
    case 457u: goto L_00393988;
    case 458u: goto L_00393998;
    case 459u: goto L_003939AC;
    case 460u: goto L_003939E0;
    case 461u: goto L_003939F8;
    case 462u: goto L_00393A1C;
    case 463u: goto L_00393A70;
    case 464u: goto L_00393AD0;
    case 465u: goto L_00393AE4;
    case 466u: goto L_00393B00;
    case 467u: goto L_00393B30;
    case 468u: goto L_00393B44;
    case 469u: goto L_00393B60;
    case 470u: goto L_00393B74;
    case 471u: goto L_00393B90;
    case 472u: goto L_00393BC0;
    case 473u: goto L_00393BD4;
    case 474u: goto L_00393BF0;
    case 475u: goto L_00393C28;
    case 476u: goto L_00393C4C;
    case 477u: goto L_00393C60;
    case 478u: goto L_00393C8C;
    case 479u: goto L_00393C9C;
    case 480u: goto L_00393CB0;
    case 481u: goto L_00393CDC;
    case 482u: goto L_00393CEC;
    case 483u: goto L_00393D00;
    case 484u: goto L_00393D30;
    case 485u: goto L_00393D48;
    case 486u: goto L_00393D60;
    case 487u: goto L_00393D90;
    case 488u: goto L_00393DA8;
    case 489u: goto L_00393DC0;
    case 490u: goto L_00393DF0;
    case 491u: goto L_00393E08;
    case 492u: goto L_00393E20;
    case 493u: goto L_00393E50;
    case 494u: goto L_00393EE8;
    case 495u: goto L_00393F54;
    case 496u: goto L_00393F78;
    case 497u: goto L_00393F88;
    case 498u: goto L_00393FD8;
    case 499u: goto L_00393FFC;
    default: bad_entry(c, 0x00390000u); return;
    }
L_00390000:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003900A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 29856u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 1036u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0039004C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0039004C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 72u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039004Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039004Cu) [[unlikely]] return; }
L_0039004C:
    st32((c.r[17].w[0] + 1036u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1032u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00390064; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390064u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00390064u) [[unlikely]] return; }
L_00390064:
    set32(c.r[4], c.r[17].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390070u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00A3(c, 275u, depth + 1u); else { c.pc = 0x0038E9F0u; return; } if (c.pc != 0x00390070u) [[unlikely]] return; }
L_00390070:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039007Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0013(c, 250u, depth + 1u); else { c.pc = 0x0014FAD0u; return; } if (c.pc != 0x0039007Cu) [[unlikely]] return; }
L_0039007C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390088u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 42u, depth + 1u); else { c.pc = 0x00148750u; return; } if (c.pc != 0x00390088u) [[unlikely]] return; }
L_00390088:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003900A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003900A0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x003900A0u) [[unlikely]] return; }
L_003900A0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003900A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003900C0:
    st32((c.r[4].w[0] + 1040u), c.r[5].w[0]);
    c.budget -= 3;
    { set32(c.r[4], c.r[4].w[0] + 304u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0038EAD0u | kUnwind; return; } [[clang::musttail]] return unit_00A3(c, 281u, depth); }
L_003900D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 304u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003900F4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00A3(c, 319u, depth + 1u); else { c.pc = 0x0038F000u; return; } if (c.pc != 0x003900F4u) [[unlikely]] return; }
L_003900F4:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 1088u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0039047C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 1064u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[5].w[0] + 1072u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390118u); set32(c.r[6], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x00390118u) [[unlikely]] return; }
L_00390118:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[18].w[0] + 1008u);
    set32(c.r[16], ld32((c.r[4].w[0] + 440u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[16].w[0] + 304u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 308u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 312u), 0u);
    st32((c.r[16].w[0] + 316u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 356u), 0u);
    c.f[0] = ld32((c.r[1].w[0] + 1144u));
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] + 1144u));
    st32((c.r[16].w[0] + 20u), c.f[0]);
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 24;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00390178u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00390178u) [[unlikely]] return; }
L_00390178:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390180u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00390180u) [[unlikely]] return; }
L_00390180:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    st128((c.r[16].w[0] + 48u) & ~15u, c.r[2]);
    st32((c.r[16].w[0] + 60u), c.r[17].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003901ACu); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003901ACu) [[unlikely]] return; }
L_003901AC:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003901CCu); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003901CCu) [[unlikely]] return; }
L_003901CC:
    set32(c.r[3], ld32((c.r[18].w[0] + 1072u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00390268; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 1088u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00390000u < 16384u) { entry = entries_00A4[(t - 0x00390000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003901F8:
    set32(c.r[3], ld32((c.r[18].w[0] + 1084u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_0039047C; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; st32((c.r[18].w[0] + 1084u), c.r[3].w[0]);  if (t) { goto L_0039047C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390218u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 47u, depth + 1u); else { c.pc = 0x00390850u; return; } if (c.pc != 0x00390218u) [[unlikely]] return; }
L_00390218:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00390480; } }
L_00390220:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039047C; } }
L_00390228:
    set32(c.r[4], ld32((c.r[18].w[0] + 980u)));
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0039047C; } }
    set32(c.r[3], 0u + 3u);
    st32((c.r[18].w[0] + 1072u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039047C; } }
L_00390248:
    set32(c.r[5], ld32((c.r[18].w[0] + 1076u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390254u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 34u, depth + 1u); else { c.pc = 0x00390700u; return; } if (c.pc != 0x00390254u) [[unlikely]] return; }
L_00390254:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 1072u), c.r[3].w[0]);  if (t) { goto L_0039047C; } }
L_00390260:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039047C; } }
L_00390268:
    set32(c.r[3], ld32((c.r[18].w[0] + 1032u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0039047C; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 1090u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003902EC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] + 1136u));
    c.f[1] = ld32((c.r[18].w[0] + 1044u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 1044u), c.f[1]);
    c.f[0] = ld32((c.r[1].w[0] + 1128u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003902B8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] + 1120u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 1044u), c.f[0]);
    c.budget -= 4;
L_003902B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = ld32((c.r[18].w[0] + 1044u));
    c.f[0] = ld32((c.r[1].w[0] + 1112u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003902E4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] + 1120u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 1044u), c.f[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
L_003902E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003902ECu);  if (depth < kMaxDepth) unit_00A4(c, 30u, depth + 1u); else { c.pc = 0x003905A0u; return; } if (c.pc != 0x003902ECu) [[unlikely]] return; }
L_003902EC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_003903B0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
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
    set32(c.r[3], 0u + 128u);
    c.r[10].d[0] = c.r[11].d[0] | c.r[10].d[0];
    c.r[4].d[0] = c.r[3].d[0] << 32;
    st64((c.r[10].w[0]), c.r[9].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[10].w[0] + 8u), 0ull);
    set32(c.r[3], 0u + 59u);
    st64((c.r[10].w[0] + 16u), 0ull);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st32((c.r[10].w[0] + 24u), c.r[8].w[0]);
    st32((c.r[10].w[0] + 28u), c.r[7].w[0]);
    st64((c.r[10].w[0] + 32u), c.r[6].d[0]);
    st64((c.r[10].w[0] + 40u), c.r[5].d[0]);
    st64((c.r[10].w[0] + 48u), c.r[4].d[0]);
    st64((c.r[10].w[0] + 56u), c.r[3].d[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1380u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] + 64u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1380u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] - 4u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1364u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 41;
L_003903B0:
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0039046C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
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
    set32(c.r[3], 0u + 128u);
    c.r[10].d[0] = c.r[11].d[0] | c.r[10].d[0];
    c.r[4].d[0] = c.r[3].d[0] << 32;
    st64((c.r[10].w[0]), c.r[9].d[0]);
    set32(c.r[3], 0u + 100u);
    st64((c.r[10].w[0] + 8u), 0ull);
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st64((c.r[10].w[0] + 16u), 0ull);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st32((c.r[10].w[0] + 24u), c.r[8].w[0]);
    set32(c.r[3], 0u + 66u);
    st32((c.r[10].w[0] + 28u), c.r[7].w[0]);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st64((c.r[10].w[0] + 32u), c.r[6].d[0]);
    st64((c.r[10].w[0] + 40u), c.r[5].d[0]);
    st64((c.r[10].w[0] + 48u), c.r[4].d[0]);
    st64((c.r[10].w[0] + 56u), c.r[3].d[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1380u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] + 64u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1380u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] - 4u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1364u), c.r[3].w[0]);
    c.budget -= 42;
L_0039046C:
    set32(c.r[25], ld32((c.r[18].w[0] + 184u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039047Cu); set32(c.r[4], c.r[18].w[0] + 32u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039047Cu) [[unlikely]] return; }
L_0039047C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00390480:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003904A0:
    st32((c.r[4].w[0] + 1064u), c.r[6].w[0]);
    set32(c.r[3], 0u + 3u);
    st32((c.r[4].w[0] + 1052u), c.r[5].w[0]);
    set32(c.r[5], 0u - 1u);
    st32((c.r[4].w[0] + 1056u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 1060u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 1068u), 0u);
    st32((c.r[4].w[0] + 976u), 0u);
    st32((c.r[4].w[0] + 980u), 0u);
    st8((c.r[4].w[0] + 1089u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 1084u), c.r[3].w[0]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 1072u), 0u);  c.pc = t; return; }
L_003904E0:
    st32((c.r[4].w[0] + 1064u), c.r[6].w[0]);
    set32(c.r[3], c.r[5].w[0] + 1u);
    set32(c.r[6], 0u - 1u);
    set32(c.r[5], 0u + 1u);
    st32((c.r[4].w[0] + 1052u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 1056u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 1060u), c.r[6].w[0]);
    set32(c.r[3], 0u + 3u);
    st32((c.r[4].w[0] + 1068u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 976u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 980u), 0u);
    st8((c.r[4].w[0] + 1089u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 1084u), c.r[3].w[0]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 1072u), 0u);  c.pc = t; return; }
L_00390520:
    st32((c.r[4].w[0] + 1064u), c.r[6].w[0]);
    set32(c.r[3], 0u - 1u);
    st32((c.r[4].w[0] + 1052u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 1056u), c.r[3].w[0]);
    set32(c.r[5], 0u + 2u);
    st32((c.r[4].w[0] + 1060u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 1068u), c.r[5].w[0]);
    set32(c.r[3], 0u + 3u);
    st32((c.r[4].w[0] + 976u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 980u), 0u);
    st8((c.r[4].w[0] + 1089u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 1084u), c.r[3].w[0]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 1072u), 0u);  c.pc = t; return; }
L_00390560:
    st32((c.r[4].w[0] + 1064u), c.r[7].w[0]);
    set32(c.r[3], 0u + 3u);
    set32(c.r[7], 0u - 1u);
    st32((c.r[4].w[0] + 1052u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 1056u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 1060u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 1068u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 976u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 980u), 0u);
    st8((c.r[4].w[0] + 1089u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 1084u), c.r[3].w[0]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 1072u), 0u);  c.pc = t; return; }
L_003905A0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 1032u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003906F0; } }
    ld128((c.r[16].w[0] + 992u) & ~15u, c.r[3]);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    c.f[1] = ld32((c.r[16].w[0] + 1024u));
    c.f[0] = ld32((c.r[29].w[0] + 164u));
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 164u), c.f[0]);
    st128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[0]);
    vu::mr32(c.vu0, 15u, 1u, 0u);
    st128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    vu::mr32(c.vu0, 15u, 2u, 1u);
    st128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    vu::mr32(c.vu0, 15u, 3u, 2u);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[3]);
    set32(c.r[2], c.r[29].w[0] + 32u);
    c.f[0] = ld32((c.r[16].w[0] + 1028u));
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1028u));
    st32((c.r[29].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1028u));
    st32((c.r[29].w[0] + 136u), c.f[0]);
    st128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[0]);
    vu::mr32(c.vu0, 15u, 1u, 0u);
    st128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    vu::mr32(c.vu0, 15u, 2u, 1u);
    st128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    vu::mr32(c.vu0, 15u, 3u, 2u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[3]);
    c.f[12] = ld32((c.r[16].w[0] + 1044u));
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390640u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0011(c, 29u, depth + 1u); else { c.pc = 0x00144640u; return; } if (c.pc != 0x00390640u) [[unlikely]] return; }
L_00390640:
    set32(c.r[3], c.r[29].w[0] + 96u);
    set32(c.r[2], c.r[29].w[0] + 32u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[10]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[11]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[12]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[13]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[10].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[10].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[10].w[2]);
    vu::maddbc(c.vu0, 15u, 10u, 7u, c.vu0.vf[10].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[11].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[11].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[11].w[2]);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[10]);
    vu::maddbc(c.vu0, 15u, 11u, 7u, c.vu0.vf[11].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[12].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[12].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[12].w[2]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[11]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[12].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[13].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[13].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[13].w[2]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[12]);
    vu::maddbc(c.vu0, 15u, 13u, 7u, c.vu0.vf[13].w[3]);
    st128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[13]);
    set32(c.r[5], c.r[29].w[0] + 32u);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[16].w[0] + 32u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[2]);
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 39;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003906DCu); set32(c.r[6], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003906DCu) [[unlikely]] return; }
L_003906DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003906E4u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0014(c, 69u, depth + 1u); else { c.pc = 0x00151160u; return; } if (c.pc != 0x003906E4u) [[unlikely]] return; }
L_003906E4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00050000u);
    c.r[3].d[0] = c.r[3].d[0] | 525ull;
    st64((c.r[16].w[0] + 224u), c.r[3].d[0]);
    c.budget -= 3;
L_003906F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00390700:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 1044u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 1080u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0039082C; } }
    st32((c.r[16].w[0] + 1080u), c.r[5].w[0]);
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[4], ld32((c.r[16].w[0] + 1032u)));
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 368u);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_00390750; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390750u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00390750u) [[unlikely]] return; }
L_00390750:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390758u);  if (depth < kMaxDepth) unit_0050(c, 211u, depth + 1u); else { c.pc = 0x00243030u; return; } if (c.pc != 0x00390758u) [[unlikely]] return; }
L_00390758:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390768u); set32(c.r[6], 0u + 40u);  if (depth < kMaxDepth) unit_0017(c, 127u, depth + 1u); else { c.pc = 0x0015D890u; return; } if (c.pc != 0x00390768u) [[unlikely]] return; }
L_00390768:
    c.r[5].d[0] = ld16((c.r[18].w[0] + 8u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390774u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x00390774u) [[unlikely]] return; }
L_00390774:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 64u);  if (t) { goto L_00390790; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390788u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 152u, depth + 1u); else { c.pc = 0x0015DC50u; return; } if (c.pc != 0x00390788u) [[unlikely]] return; }
L_00390788:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00390798; } }
L_00390790:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_00390798:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003907ACu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 166u, depth + 1u); else { c.pc = 0x0015DEF0u; return; } if (c.pc != 0x003907ACu) [[unlikely]] return; }
L_003907AC:
    st32((c.r[16].w[0] + 1032u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003907B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 83u, depth + 1u); else { c.pc = 0x00141160u; return; } if (c.pc != 0x003907B8u) [[unlikely]] return; }
L_003907B8:
    set32(c.r[25], ld32((c.r[16].w[0] + 184u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 1032u)));
    c.f[12] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003907D4u); set32(c.r[4], c.r[16].w[0] + 32u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003907D4u) [[unlikely]] return; }
L_003907D4:
    c.f[0] = ld32((c.r[18].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 1024u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003907ECu); st32((c.r[16].w[0] + 1028u), c.f[0]);  if (depth < kMaxDepth) unit_00A4(c, 30u, depth + 1u); else { c.pc = 0x003905A0u; return; } if (c.pc != 0x003907ECu) [[unlikely]] return; }
L_003907EC:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1089u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 304u);  if (t) { goto L_00390818; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1036u)));
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = ld64((c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390810u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 33u, depth + 1u); else { c.pc = 0x001504F0u; return; } if (c.pc != 0x00390810u) [[unlikely]] return; }
L_00390810:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 64u);  if (t) { goto L_00390824; } }
L_00390818:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390820u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_00A3(c, 282u, depth + 1u); else { c.pc = 0x0038EB10u; return; } if (c.pc != 0x00390820u) [[unlikely]] return; }
L_00390820:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 1;
L_00390824:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039082Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x0039082Cu) [[unlikely]] return; }
L_0039082C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00390850:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 1068u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003908D0; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003908BC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003908A8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00390894; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003908E0; } }
L_00390894:
    set32(c.r[5], ld32((c.r[16].w[0] + 1052u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003908A0u); set32(c.r[4], ld32((c.r[16].w[0] + 1048u)));  if (depth < kMaxDepth) unit_0028(c, 221u, depth + 1u); else { c.pc = 0x001A2130u; return; } if (c.pc != 0x003908A0u) [[unlikely]] return; }
L_003908A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003908DC; } }
L_003908A8:
    set32(c.r[5], ld32((c.r[16].w[0] + 1056u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003908B4u); set32(c.r[4], ld32((c.r[16].w[0] + 1048u)));  if (depth < kMaxDepth) unit_0028(c, 223u, depth + 1u); else { c.pc = 0x001A2170u; return; } if (c.pc != 0x003908B4u) [[unlikely]] return; }
L_003908B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003908DC; } }
L_003908BC:
    set32(c.r[5], ld32((c.r[16].w[0] + 1052u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003908C8u); set32(c.r[4], ld32((c.r[16].w[0] + 1048u)));  if (depth < kMaxDepth) unit_0028(c, 221u, depth + 1u); else { c.pc = 0x001A2130u; return; } if (c.pc != 0x003908C8u) [[unlikely]] return; }
L_003908C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003908DC; } }
L_003908D0:
    set32(c.r[5], ld32((c.r[16].w[0] + 1056u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003908DCu); set32(c.r[4], ld32((c.r[16].w[0] + 1048u)));  if (depth < kMaxDepth) unit_0028(c, 223u, depth + 1u); else { c.pc = 0x001A2170u; return; } if (c.pc != 0x003908DCu) [[unlikely]] return; }
L_003908DC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003908E0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003908ECu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 45u, depth + 1u); else { c.pc = 0x001487B0u; return; } if (c.pc != 0x003908ECu) [[unlikely]] return; }
L_003908EC:
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 1072u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00390910:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 1072u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00390BCC; } }
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390938u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 125u, depth + 1u); else { c.pc = 0x0015D850u; return; } if (c.pc != 0x00390938u) [[unlikely]] return; }
L_00390938:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390944u); set32(c.r[5], 0u + 19900u);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x00390944u) [[unlikely]] return; }
L_00390944:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003909EC; } }
    set32(c.r[2], 0u + 3u);
    st8((c.r[17].w[0] + 1089u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 1072u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 1076u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 1036u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 80u);  if (t) { goto L_00390988; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390974u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00390974u) [[unlikely]] return; }
L_00390974:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00390984; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390984u);  if (depth < kMaxDepth) unit_0012(c, 130u, depth + 1u); else { c.pc = 0x00149000u; return; } if (c.pc != 0x00390984u) [[unlikely]] return; }
L_00390984:
    st32((c.r[17].w[0] + 1036u), c.r[2].w[0]);
    c.budget -= 1;
L_00390988:
    set32(c.r[4], ld32((c.r[17].w[0] + 1036u)));
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390998u); set32(c.r[6], 0u + 19900u);  if (depth < kMaxDepth) unit_0012(c, 145u, depth + 1u); else { c.pc = 0x001491D0u; return; } if (c.pc != 0x00390998u) [[unlikely]] return; }
L_00390998:
    set32(c.r[5], ld32((c.r[17].w[0] + 1040u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 1036u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003909ACu); set32(c.r[6], c.r[5].w[0] + 16u);  if (depth < kMaxDepth) unit_0012(c, 153u, depth + 1u); else { c.pc = 0x001492C0u; return; } if (c.pc != 0x003909ACu) [[unlikely]] return; }
L_003909AC:
    set32(c.r[7], ld32((c.r[17].w[0] + 1036u)));
    c.r[2].d[0] = 0ull & 3ull;
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[4], 0u - 5u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    set32(c.r[2], 0u - 25u);
    c.r[6].d[0] = ld8((c.r[7].w[0] + 4u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[7].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[5], ld32((c.r[17].w[0] + 1036u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 4u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00390B94; } }
L_003909EC:
    set32(c.r[3], ld32((c.r[17].w[0] + 1048u)));
    c.r[2].d[0] = c.r[3].d[0] ^ 56ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00390A08; } }
    set32(c.r[2], c.r[3].w[0] - 46u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 2;
L_00390A08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00390A18; } }
    set32(c.r[2], c.r[3].w[0] - 51u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 2;
L_00390A18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00390ABC; } }
    set32(c.r[2], 0u + 3u);
    st8((c.r[17].w[0] + 1089u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 1072u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 1076u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 1036u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 80u);  if (t) { goto L_00390A58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390A44u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00390A44u) [[unlikely]] return; }
L_00390A44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00390A54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390A54u);  if (depth < kMaxDepth) unit_0012(c, 130u, depth + 1u); else { c.pc = 0x00149000u; return; } if (c.pc != 0x00390A54u) [[unlikely]] return; }
L_00390A54:
    st32((c.r[17].w[0] + 1036u), c.r[2].w[0]);
    c.budget -= 1;
L_00390A58:
    set32(c.r[4], ld32((c.r[17].w[0] + 1036u)));
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390A68u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 145u, depth + 1u); else { c.pc = 0x001491D0u; return; } if (c.pc != 0x00390A68u) [[unlikely]] return; }
L_00390A68:
    set32(c.r[5], ld32((c.r[17].w[0] + 1040u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 1036u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390A7Cu); set32(c.r[6], c.r[5].w[0] + 16u);  if (depth < kMaxDepth) unit_0012(c, 153u, depth + 1u); else { c.pc = 0x001492C0u; return; } if (c.pc != 0x00390A7Cu) [[unlikely]] return; }
L_00390A7C:
    set32(c.r[7], ld32((c.r[17].w[0] + 1036u)));
    c.r[2].d[0] = 0ull & 3ull;
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[4], 0u - 5u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    set32(c.r[2], 0u - 25u);
    c.r[6].d[0] = ld8((c.r[7].w[0] + 4u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[7].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[5], ld32((c.r[17].w[0] + 1036u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 4u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00390B94; } }
L_00390ABC:
    set32(c.r[6], ld32((c.r[17].w[0] + 1060u)));
    set32(c.r[4], c.r[17].w[0] + 304u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390ACCu); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_00A3(c, 285u, depth + 1u); else { c.pc = 0x0038EB70u; return; } if (c.pc != 0x00390ACCu) [[unlikely]] return; }
L_00390ACC:
    st8((c.r[17].w[0] + 1089u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 2u);
    st32((c.r[17].w[0] + 1072u), c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 968u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] - 357u);
    st32((c.r[17].w[0] + 1076u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 1076u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00390B68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390B10u);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x00390B10u) [[unlikely]] return; }
L_00390B10:
    set32(c.r[3], ld32((c.r[2].w[0] + 384u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00390B5C; } }
    c.r[3].d[0] = ld8((c.r[2].w[0] + 14u));
    c.r[3].d[0] = c.r[3].d[0] << 58;
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] >> 62;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00390B4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00390B5C; } }
L_00390B4C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00390B5C; } }
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00390B5C:
    set32(c.r[2], ld32((c.r[17].w[0] + 1076u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[17].w[0] + 1076u), c.r[2].w[0]);
    c.budget -= 3;
L_00390B68:
    set32(c.r[4], ld32((c.r[17].w[0] + 1076u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] - 358u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    st8((c.r[17].w[0] + 984u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 11;
L_00390B94:
    set32(c.r[6], ld32((c.r[17].w[0] + 1076u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] - 358u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], 0u - 1u);
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390BCCu); st8((c.r[17].w[0] + 1090u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x00390BCCu) [[unlikely]] return; }
L_00390BCC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00390BE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390BF4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 158u, depth + 1u); else { c.pc = 0x0037D580u; return; } if (c.pc != 0x00390BF4u) [[unlikely]] return; }
L_00390BF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[16].w[0] + 640u);
    set32(c.r[2], c.r[2].w[0] - 29872u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[16].w[0] + 656u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[16].w[0] + 672u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[3].w[0] + 5520u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[2].w[0];
    st32((c.r[16].w[0] + 688u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    st32((c.r[16].w[0] + 692u), c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[16].w[0] + 696u), c.f[1]);
    st32((c.r[16].w[0] + 700u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3020000u);
    ld128((c.r[3].w[0]) & ~15u, c.r[4]);
    c.f[1] = c.r[2].w[0];
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    st128((c.r[5].w[0]) & ~15u, c.r[4]);
    c.f[0] = c.r[3].w[0];
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[3]);
    st128((c.r[16].w[0] + 512u) & ~15u, c.r[3]);
    st32((c.r[16].w[0] + 576u), c.f[1]);
    st32((c.r[16].w[0] + 584u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 40;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00390CA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00390CE8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 29872u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390CD0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009F(c, 165u, depth + 1u); else { c.pc = 0x0037D840u; return; } if (c.pc != 0x00390CD0u) [[unlikely]] return; }
L_00390CD0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00390CEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390CE8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00390CE8u) [[unlikely]] return; }
L_00390CE8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00390CEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00390D00:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390D28u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000B(c, 298u, depth + 1u); else { c.pc = 0x0012E440u; return; } if (c.pc != 0x00390D28u) [[unlikely]] return; }
L_00390D28:
    set32(c.r[4], c.r[20].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390D34u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x00390D34u) [[unlikely]] return; }
L_00390D34:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 29728u);
    set32(c.r[2], c.r[2].w[0] - 29640u);
    st32((c.r[20].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[20].w[0] + 32u);
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390D58u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 271u, depth + 1u); else { c.pc = 0x002275A0u; return; } if (c.pc != 0x00390D58u) [[unlikely]] return; }
L_00390D58:
    set32(c.r[4], c.r[20].w[0] + 96u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390D68u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 86u, depth + 1u); else { c.pc = 0x00388B90u; return; } if (c.pc != 0x00390D68u) [[unlikely]] return; }
L_00390D68:
    set32(c.r[4], c.r[20].w[0] + 752u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390D78u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 86u, depth + 1u); else { c.pc = 0x00388B90u; return; } if (c.pc != 0x00390D78u) [[unlikely]] return; }
L_00390D78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390D80u); set32(c.r[4], 0u + 27u);  if (depth < kMaxDepth) unit_009F(c, 119u, depth + 1u); else { c.pc = 0x0037D1D0u; return; } if (c.pc != 0x00390D80u) [[unlikely]] return; }
L_00390D80:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390D8Cu); set32(c.r[4], 0u + 18u);  if (depth < kMaxDepth) unit_009F(c, 119u, depth + 1u); else { c.pc = 0x0037D1D0u; return; } if (c.pc != 0x00390D8Cu) [[unlikely]] return; }
L_00390D8C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390D9Cu); set32(c.r[4], c.r[20].w[0] + 1408u);  if (depth < kMaxDepth) unit_00A2(c, 39u, depth + 1u); else { c.pc = 0x00388420u; return; } if (c.pc != 0x00390D9Cu) [[unlikely]] return; }
L_00390D9C:
    st32((c.r[20].w[0] + 2064u), 0u);
    set32(c.r[4], c.r[20].w[0] + 2100u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390DACu); st32((c.r[20].w[0] + 2068u), 0u);  if (depth < kMaxDepth) unit_00A1(c, 21u, depth + 1u); else { c.pc = 0x00384420u; return; } if (c.pc != 0x00390DACu) [[unlikely]] return; }
L_00390DAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390DB4u); set32(c.r[4], c.r[20].w[0] + 2140u);  if (depth < kMaxDepth) unit_00A1(c, 15u, depth + 1u); else { c.pc = 0x00384260u; return; } if (c.pc != 0x00390DB4u) [[unlikely]] return; }
L_00390DB4:
    set32(c.r[4], c.r[20].w[0] + 2160u);
    set32(c.r[5], c.r[20].w[0] + 2288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390DC4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 139u, depth + 1u); else { c.pc = 0x003857D0u; return; } if (c.pc != 0x00390DC4u) [[unlikely]] return; }
L_00390DC4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st32((c.r[20].w[0] + 2368u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 5536u);
    ld128((c.r[2].w[0]) & ~15u, c.r[5]);
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43150000u);
    set32(c.r[16], c.r[29].w[0] + 100u);
    c.r[4].d[0] = 0ull + 0ull;
    st128((c.r[6].w[0]) & ~15u, c.r[5]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42B60000u);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[5]);
    st128((c.r[20].w[0] + 2240u) & ~15u, c.r[5]);
    st32((c.r[29].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390E04u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009F(c, 119u, depth + 1u); else { c.pc = 0x0037D1D0u; return; } if (c.pc != 0x00390E04u) [[unlikely]] return; }
L_00390E04:
    st64((c.r[29].w[0] + 112u), c.r[2].d[0]);
    set32(c.r[4], 0u + 7u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390E14u); set32(c.r[19], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_009F(c, 119u, depth + 1u); else { c.pc = 0x0037D1D0u; return; } if (c.pc != 0x00390E14u) [[unlikely]] return; }
L_00390E14:
    st64((c.r[19].w[0]), c.r[2].d[0]);
    set32(c.r[4], 0u + 50u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390E24u); set32(c.r[18], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_009F(c, 119u, depth + 1u); else { c.pc = 0x0037D1D0u; return; } if (c.pc != 0x00390E24u) [[unlikely]] return; }
L_00390E24:
    st64((c.r[18].w[0]), c.r[2].d[0]);
    set32(c.r[4], 0u + 14u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390E34u); set32(c.r[17], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_009F(c, 119u, depth + 1u); else { c.pc = 0x0037D1D0u; return; } if (c.pc != 0x00390E34u) [[unlikely]] return; }
L_00390E34:
    st64((c.r[17].w[0]), c.r[2].d[0]);
    set32(c.r[4], c.r[20].w[0] + 96u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390E48u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 114u, depth + 1u); else { c.pc = 0x00388ED0u; return; } if (c.pc != 0x00390E48u) [[unlikely]] return; }
L_00390E48:
    set32(c.r[4], c.r[20].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390E54u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_00A2(c, 122u, depth + 1u); else { c.pc = 0x003890E0u; return; } if (c.pc != 0x00390E54u) [[unlikely]] return; }
L_00390E54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390E5Cu);  if (depth < kMaxDepth) unit_0087(c, 101u, depth + 1u); else { c.pc = 0x0031CBF0u; return; } if (c.pc != 0x00390E5Cu) [[unlikely]] return; }
L_00390E5C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1031u)));
    c.f[1] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2FE0000u);
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00390E84; } }
    c.f[2] = c.f[0];
    c.budget -= 1;
L_00390E84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42FE0000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0xC2FE0000u);  if (t) { goto L_00390EA0; } }
    c.f[2] = c.f[0];
    c.budget -= 1;
L_00390EA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437E0000u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[4], c.r[20].w[0] + 96u);
    c.f[0] = c.r[2].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390ECCu);  if (depth < kMaxDepth) unit_00A2(c, 155u, depth + 1u); else { c.pc = 0x003896B0u; return; } if (c.pc != 0x00390ECCu) [[unlikely]] return; }
L_00390ECC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390ED4u);  if (depth < kMaxDepth) unit_0087(c, 101u, depth + 1u); else { c.pc = 0x0031CBF0u; return; } if (c.pc != 0x00390ED4u) [[unlikely]] return; }
L_00390ED4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1032u)));
    c.f[1] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2FE0000u);
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00390EFC; } }
    c.f[2] = c.f[0];
    c.budget -= 1;
L_00390EFC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42FE0000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0xC2FE0000u);  if (t) { goto L_00390F18; } }
    c.f[2] = c.f[0];
    c.budget -= 1;
L_00390F18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437E0000u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[4], c.r[20].w[0] + 96u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[5], 0u + 1u);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390F44u);  if (depth < kMaxDepth) unit_00A2(c, 155u, depth + 1u); else { c.pc = 0x003896B0u; return; } if (c.pc != 0x00390F44u) [[unlikely]] return; }
L_00390F44:
    set32(c.r[3], 0u + 614u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43020000u);
    st32((c.r[20].w[0] + 2288u), c.r[3].w[0]);
    set32(c.r[4], 0u + 24u);
    st32((c.r[20].w[0] + 2292u), c.r[2].w[0]);
    st8((c.r[20].w[0] + 2296u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390F64u); st32((c.r[20].w[0] + 2348u), 0u);  if (depth < kMaxDepth) unit_009F(c, 119u, depth + 1u); else { c.pc = 0x0037D1D0u; return; } if (c.pc != 0x00390F64u) [[unlikely]] return; }
L_00390F64:
    st64((c.r[29].w[0] + 112u), c.r[2].d[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390F70u); set32(c.r[4], 0u + 9u);  if (depth < kMaxDepth) unit_009F(c, 119u, depth + 1u); else { c.pc = 0x0037D1D0u; return; } if (c.pc != 0x00390F70u) [[unlikely]] return; }
L_00390F70:
    st64((c.r[19].w[0]), c.r[2].d[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390F7Cu); set32(c.r[4], 0u + 10u);  if (depth < kMaxDepth) unit_009F(c, 119u, depth + 1u); else { c.pc = 0x0037D1D0u; return; } if (c.pc != 0x00390F7Cu) [[unlikely]] return; }
L_00390F7C:
    st64((c.r[18].w[0]), c.r[2].d[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390F88u); set32(c.r[4], 0u + 11u);  if (depth < kMaxDepth) unit_009F(c, 119u, depth + 1u); else { c.pc = 0x0037D1D0u; return; } if (c.pc != 0x00390F88u) [[unlikely]] return; }
L_00390F88:
    st64((c.r[17].w[0]), c.r[2].d[0]);
    set32(c.r[4], c.r[20].w[0] + 752u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390F9Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 114u, depth + 1u); else { c.pc = 0x00388ED0u; return; } if (c.pc != 0x00390F9Cu) [[unlikely]] return; }
L_00390F9C:
    c.f[1] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43020000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[20].w[0] + 752u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390FBCu); st32((c.r[16].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_00A2(c, 122u, depth + 1u); else { c.pc = 0x003890E0u; return; } if (c.pc != 0x00390FBCu) [[unlikely]] return; }
L_00390FBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390FC4u);  if (depth < kMaxDepth) unit_0087(c, 101u, depth + 1u); else { c.pc = 0x0031CBF0u; return; } if (c.pc != 0x00390FC4u) [[unlikely]] return; }
L_00390FC4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1033u)));
    c.f[1] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2FE0000u);
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00390FEC; } }
    c.f[2] = c.f[0];
    c.budget -= 1;
L_00390FEC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42FE0000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0xC2FE0000u);  if (t) { goto L_00391008; } }
    c.f[2] = c.f[0];
    c.budget -= 1;
L_00391008:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437E0000u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[4], c.r[20].w[0] + 752u);
    c.f[0] = c.r[2].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391034u);  if (depth < kMaxDepth) unit_00A2(c, 155u, depth + 1u); else { c.pc = 0x003896B0u; return; } if (c.pc != 0x00391034u) [[unlikely]] return; }
L_00391034:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039103Cu);  if (depth < kMaxDepth) unit_0087(c, 101u, depth + 1u); else { c.pc = 0x0031CBF0u; return; } if (c.pc != 0x0039103Cu) [[unlikely]] return; }
L_0039103C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1034u)));
    c.f[1] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2FE0000u);
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00391064; } }
    c.f[2] = c.f[0];
    c.budget -= 1;
L_00391064:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42FE0000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0xC2FE0000u);  if (t) { goto L_00391080; } }
    c.f[2] = c.f[0];
    c.budget -= 1;
L_00391080:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437E0000u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[4], c.r[20].w[0] + 752u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[5], 0u + 1u);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003910ACu);  if (depth < kMaxDepth) unit_00A2(c, 155u, depth + 1u); else { c.pc = 0x003896B0u; return; } if (c.pc != 0x003910ACu) [[unlikely]] return; }
L_003910AC:
    set32(c.r[3], 0u + 735u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43030000u);
    st32((c.r[20].w[0] + 2300u), c.r[3].w[0]);
    set32(c.r[4], c.r[20].w[0] + 1408u);
    st32((c.r[20].w[0] + 2304u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[20].w[0] + 2308u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42B80000u);
    st32((c.r[20].w[0] + 2352u), c.r[3].w[0]);
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[16].w[0]));
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003910E8u); st32((c.r[16].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_00A2(c, 62u, depth + 1u); else { c.pc = 0x003886F0u; return; } if (c.pc != 0x003910E8u) [[unlikely]] return; }
L_003910E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003910F0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 230u, depth + 1u); else { c.pc = 0x003922C0u; return; } if (c.pc != 0x003910F0u) [[unlikely]] return; }
L_003910F0:
    c.f[12] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003910FCu); set32(c.r[4], c.r[20].w[0] + 1408u);  if (depth < kMaxDepth) unit_00A2(c, 81u, depth + 1u); else { c.pc = 0x00388A80u; return; } if (c.pc != 0x003910FCu) [[unlikely]] return; }
L_003910FC:
    set32(c.r[2], 0u + 736u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42580000u);
    st32((c.r[20].w[0] + 2312u), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    st32((c.r[20].w[0] + 2316u), c.r[3].w[0]);
    set32(c.r[2], 0u + 2u);
    st8((c.r[20].w[0] + 2320u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 561u);
    st32((c.r[20].w[0] + 2356u), c.r[2].w[0]);
    set32(c.r[5], 0u + 91u);
    st32((c.r[20].w[0] + 2324u), c.r[3].w[0]);
    set32(c.r[2], 0u + 3u);
    st32((c.r[20].w[0] + 2328u), c.r[6].w[0]);
    set32(c.r[4], 0u + 4u);
    st8((c.r[20].w[0] + 2332u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[20].w[0] + 2288u);
    st32((c.r[20].w[0] + 2360u), c.r[2].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 2336u), c.r[5].w[0]);
    set32(c.r[2], 0u + 5u);
    st32((c.r[20].w[0] + 2340u), c.r[6].w[0]);
    st8((c.r[20].w[0] + 2344u), static_cast<std::uint8_t>(0u));
    st32((c.r[20].w[0] + 2364u), c.r[4].w[0]);
    st32((c.r[20].w[0] + 2272u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 2276u), c.r[2].w[0]);
    c.budget -= 25;
L_00391160:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391168u);  if (depth < kMaxDepth) unit_0087(c, 101u, depth + 1u); else { c.pc = 0x0031CBF0u; return; } if (c.pc != 0x00391168u) [[unlikely]] return; }
L_00391168:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[20].w[0] + c.r[16].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1012u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 23ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[3].w[0] + 2072u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00391160u | kUnwind; return; } goto L_00391160; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039118Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 230u, depth + 1u); else { c.pc = 0x003922C0u; return; } if (c.pc != 0x0039118Cu) [[unlikely]] return; }
L_0039118C:
    st32((c.r[20].w[0] + 2096u), c.f[0]);
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003911C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003912A4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 29728u);
    set32(c.r[2], c.r[2].w[0] - 29640u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 2064u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00391218; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00391218; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00391218u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00391218u) [[unlikely]] return; }
L_00391218:
    set32(c.r[4], c.r[17].w[0] + 2140u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0] + 2064u), 0u);  if (t) { goto L_00391238; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 30800u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391238u); st32((c.r[17].w[0] + 2140u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E490u; return; } if (c.pc != 0x00391238u) [[unlikely]] return; }
L_00391238:
    set32(c.r[4], c.r[17].w[0] + 2100u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391244u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00A1(c, 23u, depth + 1u); else { c.pc = 0x00384460u; return; } if (c.pc != 0x00391244u) [[unlikely]] return; }
L_00391244:
    set32(c.r[4], c.r[17].w[0] + 1408u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391250u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00A2(c, 53u, depth + 1u); else { c.pc = 0x003885A0u; return; } if (c.pc != 0x00391250u) [[unlikely]] return; }
L_00391250:
    set32(c.r[4], c.r[17].w[0] + 752u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039125Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00A2(c, 103u, depth + 1u); else { c.pc = 0x00388D30u; return; } if (c.pc != 0x0039125Cu) [[unlikely]] return; }
L_0039125C:
    set32(c.r[4], c.r[17].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391268u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00A2(c, 103u, depth + 1u); else { c.pc = 0x00388D30u; return; } if (c.pc != 0x00391268u) [[unlikely]] return; }
L_00391268:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391274u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0049(c, 274u, depth + 1u); else { c.pc = 0x002275F0u; return; } if (c.pc != 0x00391274u) [[unlikely]] return; }
L_00391274:
    set32(c.r[4], c.r[17].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391280u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x00391280u) [[unlikely]] return; }
L_00391280:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039128Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 300u, depth + 1u); else { c.pc = 0x0012E490u; return; } if (c.pc != 0x0039128Cu) [[unlikely]] return; }
L_0039128C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003912A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003912A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x003912A4u) [[unlikely]] return; }
L_003912A4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003912A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003912C0:
    c.budget -= 2;
    { set32(c.r[5], ld32((c.r[4].w[0] + 2068u)));  goto L_00391830; }
L_003912D0:
    set32(c.r[3], ld32((c.r[4].w[0] + 2064u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003912E0; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 137u));
    c.budget -= 1;
L_003912E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003912F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391304u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 80u, depth + 1u); else { c.pc = 0x0037CE90u; return; } if (c.pc != 0x00391304u) [[unlikely]] return; }
L_00391304:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0039131C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039131Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039131Cu) [[unlikely]] return; }
L_0039131C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00391330:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391344u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 122u, depth + 1u); else { c.pc = 0x003912D0u; return; } if (c.pc != 0x00391344u) [[unlikely]] return; }
L_00391344:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0039135C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039135Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039135Cu) [[unlikely]] return; }
L_0039135C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00391370:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[1].w[0] + 25376u)));
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003913F4; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003913A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003913A0u) [[unlikely]] return; }
L_003913A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003913FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003913B0u);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x003913B0u) [[unlikely]] return; }
L_003913B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003913B8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 231u, depth + 1u); else { c.pc = 0x0016A360u; return; } if (c.pc != 0x003913B8u) [[unlikely]] return; }
L_003913B8:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003913C4u); c.r[16].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_001A(c, 271u, depth + 1u); else { c.pc = 0x0016A9E0u; return; } if (c.pc != 0x003913C4u) [[unlikely]] return; }
L_003913C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003913CCu);  if (depth < kMaxDepth) unit_009F(c, 127u, depth + 1u); else { c.pc = 0x0037D270u; return; } if (c.pc != 0x003913CCu) [[unlikely]] return; }
L_003913CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003913D4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 157u, depth + 1u); else { c.pc = 0x0037D560u; return; } if (c.pc != 0x003913D4u) [[unlikely]] return; }
L_003913D4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003913FC; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003913ECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003913ECu) [[unlikely]] return; }
L_003913EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00391400; } }
L_003913F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003913FCu);  if (depth < kMaxDepth) unit_00A4(c, 138u, depth + 1u); else { c.pc = 0x00391410u; return; } if (c.pc != 0x003913FCu) [[unlikely]] return; }
L_003913FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00391400:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00391410:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[16], ld32((c.r[1].w[0] - 1536u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391440u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 314u, depth + 1u); else { c.pc = 0x0013F0C0u; return; } if (c.pc != 0x00391440u) [[unlikely]] return; }
L_00391440:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00391534; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 2068u)));
    set32(c.r[3], 0u + 4u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 2348u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_00391484; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039146Cu); set32(c.r[4], 0u + 400u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x0039146Cu) [[unlikely]] return; }
L_0039146C:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039147Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039147Cu) [[unlikely]] return; }
L_0039147C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00391808; } }
L_00391484:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00391804; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391494u);  if (depth < kMaxDepth) unit_0087(c, 101u, depth + 1u); else { c.pc = 0x0031CBF0u; return; } if (c.pc != 0x00391494u) [[unlikely]] return; }
L_00391494:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039149Cu); st8((c.r[2].w[0] + 1034u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0087(c, 101u, depth + 1u); else { c.pc = 0x0031CBF0u; return; } if (c.pc != 0x0039149Cu) [[unlikely]] return; }
L_0039149C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003914A4u); st8((c.r[2].w[0] + 1033u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0087(c, 101u, depth + 1u); else { c.pc = 0x0031CBF0u; return; } if (c.pc != 0x003914A4u) [[unlikely]] return; }
L_003914A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003914ACu); st8((c.r[2].w[0] + 1031u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0087(c, 101u, depth + 1u); else { c.pc = 0x0031CBF0u; return; } if (c.pc != 0x003914ACu) [[unlikely]] return; }
L_003914AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003914B4u); st8((c.r[2].w[0] + 1032u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0096(c, 432u, depth + 1u); else { c.pc = 0x0035BD30u; return; } if (c.pc != 0x003914B4u) [[unlikely]] return; }
L_003914B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003914BCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0097(c, 9u, depth + 1u); else { c.pc = 0x0035C0B0u; return; } if (c.pc != 0x003914BCu) [[unlikely]] return; }
L_003914BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[4], c.r[17].w[0] + 96u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003914D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 155u, depth + 1u); else { c.pc = 0x003896B0u; return; } if (c.pc != 0x003914D0u) [[unlikely]] return; }
L_003914D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[4], c.r[17].w[0] + 96u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003914E4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A2(c, 155u, depth + 1u); else { c.pc = 0x003896B0u; return; } if (c.pc != 0x003914E4u) [[unlikely]] return; }
L_003914E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[4], c.r[17].w[0] + 752u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003914F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 155u, depth + 1u); else { c.pc = 0x003896B0u; return; } if (c.pc != 0x003914F8u) [[unlikely]] return; }
L_003914F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[4], c.r[17].w[0] + 752u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039150Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A2(c, 155u, depth + 1u); else { c.pc = 0x003896B0u; return; } if (c.pc != 0x0039150Cu) [[unlikely]] return; }
L_0039150C:
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391518u); set32(c.r[4], c.r[17].w[0] + 1408u);  if (depth < kMaxDepth) unit_00A2(c, 81u, depth + 1u); else { c.pc = 0x00388A80u; return; } if (c.pc != 0x00391518u) [[unlikely]] return; }
L_00391518:
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391524u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 226u, depth + 1u); else { c.pc = 0x00392220u; return; } if (c.pc != 0x00391524u) [[unlikely]] return; }
L_00391524:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039152Cu); set32(c.r[4], 0u + 400u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x0039152Cu) [[unlikely]] return; }
L_0039152C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00391804; } }
L_00391534:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039153Cu);  if (depth < kMaxDepth) unit_000F(c, 315u, depth + 1u); else { c.pc = 0x0013F0D0u; return; } if (c.pc != 0x0039153Cu) [[unlikely]] return; }
L_0039153C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 401u);  if (t) { goto L_003915DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039154Cu);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x0039154Cu) [[unlikely]] return; }
L_0039154C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391554u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 101u, depth + 1u); else { c.pc = 0x0031CBF0u; return; } if (c.pc != 0x00391554u) [[unlikely]] return; }
L_00391554:
    set32(c.r[5], c.r[2].w[0] + 928u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00391580; } }
L_00391560:
    set32(c.r[2], c.r[5].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2072u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 84u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0039157C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0039158C; } }
L_0039157C:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_00391580:
    c.r[2].d[0] = c.r[4].sd[0] < 23ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[17].w[0] + c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00391560u | kUnwind; return; } goto L_00391560; } }
L_0039158C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003915C4; } }
    set32(c.r[5], 0u + 5u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 14u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003915ACu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 267u, depth + 1u); else { c.pc = 0x0016A910u; return; } if (c.pc != 0x003915ACu) [[unlikely]] return; }
L_003915AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003915B4u);  if (depth < kMaxDepth) unit_009F(c, 127u, depth + 1u); else { c.pc = 0x0037D270u; return; } if (c.pc != 0x003915B4u) [[unlikely]] return; }
L_003915B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003915BCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 156u, depth + 1u); else { c.pc = 0x0037D530u; return; } if (c.pc != 0x003915BCu) [[unlikely]] return; }
L_003915BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00391804; } }
L_003915C4:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003915D4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003915D4u) [[unlikely]] return; }
L_003915D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00391804; } }
L_003915DC:
    c.r[4].d[0] = ld16((c.r[16].w[0] + 168u));
    c.r[3].d[0] = c.r[4].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] & 16384ull;  if (t) { goto L_00391620; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 2068u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[17].w[0] + 2068u), c.r[2].w[0]);  if (t) { goto L_00391604; } }
    set32(c.r[2], 0u + 4u);
    st32((c.r[17].w[0] + 2068u), c.r[2].w[0]);
    c.budget -= 2;
L_00391604:
    set32(c.r[5], ld32((c.r[17].w[0] + 2068u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391610u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 172u, depth + 1u); else { c.pc = 0x00391830u; return; } if (c.pc != 0x00391610u) [[unlikely]] return; }
L_00391610:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391618u); set32(c.r[4], 0u + 402u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x00391618u) [[unlikely]] return; }
L_00391618:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00391804; } }
L_00391620:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00391660; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 2068u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 2068u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00391644; } }
    st32((c.r[17].w[0] + 2068u), 0u);
    c.budget -= 1;
L_00391644:
    set32(c.r[5], ld32((c.r[17].w[0] + 2068u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391650u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 172u, depth + 1u); else { c.pc = 0x00391830u; return; } if (c.pc != 0x00391650u) [[unlikely]] return; }
L_00391650:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391658u); set32(c.r[4], 0u + 402u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x00391658u) [[unlikely]] return; }
L_00391658:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00391804; } }
L_00391660:
    set32(c.r[4], ld32((c.r[17].w[0] + 2068u)));
    c.r[1].d[0] = c.r[4].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_00391804; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00391690; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391680u);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x00391680u) [[unlikely]] return; }
L_00391680:
    set32(c.r[3], ld32((c.r[2].w[0] + 276u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00391690; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00391690:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_00391804; } }
    c.f[2] = ld32((c.r[16].w[0] + 48u));
    c.f[0] = ld32((c.r[1].w[0] + 1512u));
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    c.f[21] = 0u;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003916C4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[21] = ld32((c.r[1].w[0] + 1504u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003916E4; } }
L_003916C4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] + 1496u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003916E4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[21] = ld32((c.r[1].w[0] + 1488u));
    c.budget -= 3;
L_003916E4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] + 1512u));
    c.f[20] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_0039170C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[20] = ld32((c.r[1].w[0] + 1504u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00391728; } }
L_0039170C:
    c.f[0] = ld32((c.r[1].w[0] + 1496u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00391728; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[20] = ld32((c.r[1].w[0] + 1488u));
    c.budget -= 3;
L_00391728:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003917FC; } }
    c.f[14] = 0u;
    set32(c.r[4], c.r[17].w[0] + 2140u);
    c.f[12] = c.f[21];
    c.f[13] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391748u); c.f[15] = c.f[14];  if (depth < kMaxDepth) unit_00A1(c, 18u, depth + 1u); else { c.pc = 0x003842D0u; return; } if (c.pc != 0x00391748u) [[unlikely]] return; }
L_00391748:
    set32(c.r[4], ld32((c.r[17].w[0] + 2068u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0039178C; } }
    c.f[2] = ld32((c.r[17].w[0] + 2368u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    c.f[21] = fp::mul(c.f[21], c.f[2]);
    c.f[20] = fp::mul(c.f[20], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[17].w[0] + 2368u), c.f[1]);  if (t) { goto L_0039178C; } }
    st32((c.r[17].w[0] + 2368u), c.f[0]);
    c.budget -= 1;
L_0039178C:
    set32(c.r[4], ld32((c.r[17].w[0] + 2068u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003917E4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003917CC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003917B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00391804; } }
L_003917B4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.f[21];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003917C4u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_00A4(c, 204u, depth + 1u); else { c.pc = 0x00391C80u; return; } if (c.pc != 0x003917C4u) [[unlikely]] return; }
L_003917C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00391804; } }
L_003917CC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.f[21];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003917DCu); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_00A4(c, 213u, depth + 1u); else { c.pc = 0x00391EE0u; return; } if (c.pc != 0x003917DCu) [[unlikely]] return; }
L_003917DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00391804; } }
L_003917E4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.f[21];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003917F4u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_00A4(c, 222u, depth + 1u); else { c.pc = 0x00392140u; return; } if (c.pc != 0x003917F4u) [[unlikely]] return; }
L_003917F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00391804; } }
L_003917FC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 2368u), c.r[3].w[0]);
    c.budget -= 2;
L_00391804:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00391808:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00391830:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[4].w[0] + 2068u), c.r[17].w[0]);
    st32((c.r[4].w[0] + 2280u), c.r[17].w[0]);
    st32((c.r[4].w[0] + 2236u), 0u);
    st8((c.r[4].w[0] + 2232u), static_cast<std::uint8_t>(0u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391864u); set32(c.r[4], c.r[18].w[0] + 2176u);  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x00391864u) [[unlikely]] return; }
L_00391864:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], 0u + 1u);
    st32((c.r[18].w[0] + 2368u), c.r[2].w[0]);
    set32(c.r[2], 0u + 2u);
    c.budget -= 6;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00391AB4; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[5].d[0]; set32(c.r[4], c.r[18].w[0] + 96u);  if (t) { goto L_003919A4; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[4], c.r[18].w[0] + 96u);  if (t) { goto L_00391894; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[18].w[0] + 96u);  if (t) { goto L_00391B64; } }
L_00391894:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039189Cu);  if (depth < kMaxDepth) unit_00A2(c, 157u, depth + 1u); else { c.pc = 0x003896D0u; return; } if (c.pc != 0x0039189Cu) [[unlikely]] return; }
L_0039189C:
    set32(c.r[4], c.r[18].w[0] + 752u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003918A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 157u, depth + 1u); else { c.pc = 0x003896D0u; return; } if (c.pc != 0x003918A8u) [[unlikely]] return; }
L_003918A8:
    set32(c.r[4], c.r[18].w[0] + 1408u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003918B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 84u, depth + 1u); else { c.pc = 0x00388B10u; return; } if (c.pc != 0x003918B4u) [[unlikely]] return; }
L_003918B4:
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[18].w[0] + 2100u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003918C4u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 29u, depth + 1u); else { c.pc = 0x00384520u; return; } if (c.pc != 0x003918C4u) [[unlikely]] return; }
L_003918C4:
    set32(c.r[4], c.r[18].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003918D0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A2(c, 156u, depth + 1u); else { c.pc = 0x003896C0u; return; } if (c.pc != 0x003918D0u) [[unlikely]] return; }
L_003918D0:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_003918E8; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_003918E8:
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00391900; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_00391900:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2C80000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], c.r[18].w[0] + 96u);
    c.f[2] = c.r[3].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391930u); st32((c.r[18].w[0] + 2132u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A2(c, 156u, depth + 1u); else { c.pc = 0x003896C0u; return; } if (c.pc != 0x00391930u) [[unlikely]] return; }
L_00391930:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_00391948; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_00391948:
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00391960; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_00391960:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2C80000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[5], 0u + 1u);
    c.f[2] = c.r[3].w[0];
    set32(c.r[4], c.r[18].w[0] + 2140u);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.f[0] = fp::add(c.f[2], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039199Cu); st32((c.r[18].w[0] + 2136u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A1(c, 20u, depth + 1u); else { c.pc = 0x00384400u; return; } if (c.pc != 0x0039199Cu) [[unlikely]] return; }
L_0039199C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00391BA0; } }
L_003919A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003919ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 157u, depth + 1u); else { c.pc = 0x003896D0u; return; } if (c.pc != 0x003919ACu) [[unlikely]] return; }
L_003919AC:
    set32(c.r[4], c.r[18].w[0] + 752u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003919B8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A2(c, 157u, depth + 1u); else { c.pc = 0x003896D0u; return; } if (c.pc != 0x003919B8u) [[unlikely]] return; }
L_003919B8:
    set32(c.r[4], c.r[18].w[0] + 1408u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003919C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 84u, depth + 1u); else { c.pc = 0x00388B10u; return; } if (c.pc != 0x003919C4u) [[unlikely]] return; }
L_003919C4:
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[18].w[0] + 2100u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003919D4u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 29u, depth + 1u); else { c.pc = 0x00384520u; return; } if (c.pc != 0x003919D4u) [[unlikely]] return; }
L_003919D4:
    set32(c.r[4], c.r[18].w[0] + 752u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003919E0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A2(c, 156u, depth + 1u); else { c.pc = 0x003896C0u; return; } if (c.pc != 0x003919E0u) [[unlikely]] return; }
L_003919E0:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_003919F8; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_003919F8:
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00391A10; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_00391A10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2C80000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], c.r[18].w[0] + 752u);
    c.f[2] = c.r[3].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391A40u); st32((c.r[18].w[0] + 2132u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A2(c, 156u, depth + 1u); else { c.pc = 0x003896C0u; return; } if (c.pc != 0x00391A40u) [[unlikely]] return; }
L_00391A40:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_00391A58; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_00391A58:
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00391A70; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_00391A70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2C80000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[5], 0u + 1u);
    c.f[2] = c.r[3].w[0];
    set32(c.r[4], c.r[18].w[0] + 2140u);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.f[0] = fp::add(c.f[2], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391AACu); st32((c.r[18].w[0] + 2136u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A1(c, 20u, depth + 1u); else { c.pc = 0x00384400u; return; } if (c.pc != 0x00391AACu) [[unlikely]] return; }
L_00391AAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00391BA0; } }
L_00391AB4:
    set32(c.r[4], c.r[18].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391AC0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 157u, depth + 1u); else { c.pc = 0x003896D0u; return; } if (c.pc != 0x00391AC0u) [[unlikely]] return; }
L_00391AC0:
    set32(c.r[4], c.r[18].w[0] + 752u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391ACCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 157u, depth + 1u); else { c.pc = 0x003896D0u; return; } if (c.pc != 0x00391ACCu) [[unlikely]] return; }
L_00391ACC:
    set32(c.r[4], c.r[18].w[0] + 1408u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391AD8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A2(c, 84u, depth + 1u); else { c.pc = 0x00388B10u; return; } if (c.pc != 0x00391AD8u) [[unlikely]] return; }
L_00391AD8:
    set32(c.r[4], c.r[18].w[0] + 2100u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391AE8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 29u, depth + 1u); else { c.pc = 0x00384520u; return; } if (c.pc != 0x00391AE8u) [[unlikely]] return; }
L_00391AE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391AF0u); set32(c.r[4], c.r[18].w[0] + 1408u);  if (depth < kMaxDepth) unit_00A2(c, 83u, depth + 1u); else { c.pc = 0x00388B00u; return; } if (c.pc != 0x00391AF0u) [[unlikely]] return; }
L_00391AF0:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_00391B08; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_00391B08:
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00391B20; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_00391B20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2C80000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], c.r[18].w[0] + 2140u);
    c.f[2] = c.r[3].w[0];
    set32(c.r[5], 0u + 1u);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.f[0] = fp::add(c.f[2], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391B5Cu); st32((c.r[18].w[0] + 2132u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A1(c, 20u, depth + 1u); else { c.pc = 0x00384400u; return; } if (c.pc != 0x00391B5Cu) [[unlikely]] return; }
L_00391B5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00391BA0; } }
L_00391B64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391B6Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 157u, depth + 1u); else { c.pc = 0x003896D0u; return; } if (c.pc != 0x00391B6Cu) [[unlikely]] return; }
L_00391B6C:
    set32(c.r[4], c.r[18].w[0] + 752u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391B78u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 157u, depth + 1u); else { c.pc = 0x003896D0u; return; } if (c.pc != 0x00391B78u) [[unlikely]] return; }
L_00391B78:
    set32(c.r[4], c.r[18].w[0] + 1408u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391B84u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 84u, depth + 1u); else { c.pc = 0x00388B10u; return; } if (c.pc != 0x00391B84u) [[unlikely]] return; }
L_00391B84:
    set32(c.r[4], c.r[18].w[0] + 2140u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391B9Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 20u, depth + 1u); else { c.pc = 0x00384400u; return; } if (c.pc != 0x00391B9Cu) [[unlikely]] return; }
L_00391B9C:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00391BA0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[6].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { goto L_00391C50; } }
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[6], c.r[6].w[0] + 5552u);
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
L_00391BB4:
    ld128((c.r[6].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00391BB4u | kUnwind; return; } goto L_00391BB4; } }
    c.r[4].d[0] = ld64((c.r[6].w[0]));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    set32(c.r[2], c.r[17].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43950000u);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    st64((c.r[5].w[0]), c.r[4].d[0]);
    st32((c.r[5].w[0] + 8u), c.f[0]);
    st32((c.r[18].w[0] + 2100u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 64u));
    st32((c.r[18].w[0] + 2104u), c.f[0]);
    st32((c.r[18].w[0] + 2108u), 0u);
    st32((c.r[18].w[0] + 2112u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 2128u)));
    c.f[12] = ld32((c.r[18].w[0] + 2100u));
    c.budget -= 16;
    { const bool t = c.r[4].d[0] == 0ull; c.f[13] = ld32((c.r[18].w[0] + 2104u));  if (t) { goto L_00391C18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391C18u);  if (depth < kMaxDepth) unit_0098(c, 160u, depth + 1u); else { c.pc = 0x00361C70u; return; } if (c.pc != 0x00391C18u) [[unlikely]] return; }
L_00391C18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391C20u); set32(c.r[4], c.r[18].w[0] + 2100u);  if (depth < kMaxDepth) unit_00A1(c, 26u, depth + 1u); else { c.pc = 0x003844D0u; return; } if (c.pc != 0x00391C20u) [[unlikely]] return; }
L_00391C20:
    set32(c.r[4], ld32((c.r[18].w[0] + 2128u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], c.r[18].w[0] + 2100u);  if (t) { goto L_00391C34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391C34u);  if (depth < kMaxDepth) unit_0098(c, 141u, depth + 1u); else { c.pc = 0x00361940u; return; } if (c.pc != 0x00391C34u) [[unlikely]] return; }
L_00391C34:
    set32(c.r[4], ld32((c.r[18].w[0] + 2128u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_00391C64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391C48u);  if (depth < kMaxDepth) unit_0098(c, 269u, depth + 1u); else { c.pc = 0x00362E60u; return; } if (c.pc != 0x00391C48u) [[unlikely]] return; }
L_00391C48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00391C68; } }
L_00391C50:
    set32(c.r[4], ld32((c.r[18].w[0] + 2128u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00391C64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391C64u);  if (depth < kMaxDepth) unit_0098(c, 269u, depth + 1u); else { c.pc = 0x00362E60u; return; } if (c.pc != 0x00391C64u) [[unlikely]] return; }
L_00391C64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00391C68:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00391C80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[4], c.r[16].w[0] + 96u);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[22] = c.f[12];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391CB0u); c.f[20] = c.f[13];  if (depth < kMaxDepth) unit_00A2(c, 156u, depth + 1u); else { c.pc = 0x003896C0u; return; } if (c.pc != 0x00391CB0u) [[unlikely]] return; }
L_00391CB0:
    c.f[21] = c.f[0];
    set32(c.r[4], c.r[16].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391CC0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 156u, depth + 1u); else { c.pc = 0x003896C0u; return; } if (c.pc != 0x00391CC0u) [[unlikely]] return; }
L_00391CC0:
    c.f[20] = fp::add(c.f[0], c.f[20]);
    c.f[21] = fp::add(c.f[21], c.f[22]);
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_00391CE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[21] = c.f[0];  if (t) { goto L_00391CFC; } }
L_00391CE4:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00391CFC; } }
    c.f[21] = c.f[0];
    c.budget -= 1;
L_00391CFC:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_00391D18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[0];  if (t) { goto L_00391D30; } }
L_00391D18:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[16].w[0] + 96u);  if (t) { goto L_00391D34; } }
    c.f[20] = c.f[0];
    c.budget -= 1;
L_00391D30:
    set32(c.r[4], c.r[16].w[0] + 96u);
    c.budget -= 1;
L_00391D34:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391D40u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_00A2(c, 155u, depth + 1u); else { c.pc = 0x003896B0u; return; } if (c.pc != 0x00391D40u) [[unlikely]] return; }
L_00391D40:
    set32(c.r[4], c.r[16].w[0] + 96u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391D50u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00A2(c, 155u, depth + 1u); else { c.pc = 0x003896B0u; return; } if (c.pc != 0x00391D50u) [[unlikely]] return; }
L_00391D50:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[4] = c.f[21];  if (t) { goto L_00391D68; } }
    c.f[4] = c.f[0];
    c.budget -= 1;
L_00391D68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);  if (t) { goto L_00391D84; } }
    c.f[4] = c.f[0];
    c.budget -= 1;
L_00391D84:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2C80000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[4], c.f[1]);
    c.f[2] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[1]);
    c.f[3] = c.f[20];
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 2132u), c.r[2].w[0]);  if (t) { goto L_00391DBC; } }
    c.f[3] = c.f[0];
    c.budget -= 1;
L_00391DBC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);  if (t) { goto L_00391DD8; } }
    c.f[3] = c.f[0];
    c.budget -= 1;
L_00391DD8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2C80000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    c.f[2] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[1]);
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 2136u), c.r[2].w[0]);  if (t) { goto L_00391E0C; } }
    c.f[21] = c.f[0];
    c.budget -= 1;
L_00391E0C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x437E0000u);  if (t) { goto L_00391E28; } }
    c.f[21] = c.f[0];
    c.budget -= 1;
L_00391E28:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2FE0000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391E50u);  if (depth < kMaxDepth) unit_0087(c, 101u, depth + 1u); else { c.pc = 0x0031CBF0u; return; } if (c.pc != 0x00391E50u) [[unlikely]] return; }
L_00391E50:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); st8((c.r[2].w[0] + 1032u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (t) { goto L_00391E68; } }
    c.f[20] = c.f[0];
    c.budget -= 1;
L_00391E68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x437E0000u);  if (t) { goto L_00391E84; } }
    c.f[20] = c.f[0];
    c.budget -= 1;
L_00391E84:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2FE0000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391EACu);  if (depth < kMaxDepth) unit_0087(c, 101u, depth + 1u); else { c.pc = 0x0031CBF0u; return; } if (c.pc != 0x00391EACu) [[unlikely]] return; }
L_00391EAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391EB4u); st8((c.r[2].w[0] + 1031u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_0096(c, 432u, depth + 1u); else { c.pc = 0x0035BD30u; return; } if (c.pc != 0x00391EB4u) [[unlikely]] return; }
L_00391EB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391EBCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0097(c, 9u, depth + 1u); else { c.pc = 0x0035C0B0u; return; } if (c.pc != 0x00391EBCu) [[unlikely]] return; }
L_00391EBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00391EE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[4], c.r[16].w[0] + 752u);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[22] = c.f[12];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391F10u); c.f[20] = c.f[13];  if (depth < kMaxDepth) unit_00A2(c, 156u, depth + 1u); else { c.pc = 0x003896C0u; return; } if (c.pc != 0x00391F10u) [[unlikely]] return; }
L_00391F10:
    c.f[21] = c.f[0];
    set32(c.r[4], c.r[16].w[0] + 752u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391F20u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 156u, depth + 1u); else { c.pc = 0x003896C0u; return; } if (c.pc != 0x00391F20u) [[unlikely]] return; }
L_00391F20:
    c.f[20] = fp::add(c.f[0], c.f[20]);
    c.f[21] = fp::add(c.f[21], c.f[22]);
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_00391F44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[21] = c.f[0];  if (t) { goto L_00391F5C; } }
L_00391F44:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00391F5C; } }
    c.f[21] = c.f[0];
    c.budget -= 1;
L_00391F5C:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_00391F78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[0];  if (t) { goto L_00391F90; } }
L_00391F78:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[16].w[0] + 752u);  if (t) { goto L_00391F94; } }
    c.f[20] = c.f[0];
    c.budget -= 1;
L_00391F90:
    set32(c.r[4], c.r[16].w[0] + 752u);
    c.budget -= 1;
L_00391F94:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391FA0u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_00A2(c, 155u, depth + 1u); else { c.pc = 0x003896B0u; return; } if (c.pc != 0x00391FA0u) [[unlikely]] return; }
L_00391FA0:
    set32(c.r[4], c.r[16].w[0] + 752u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391FB0u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00A2(c, 155u, depth + 1u); else { c.pc = 0x003896B0u; return; } if (c.pc != 0x00391FB0u) [[unlikely]] return; }
L_00391FB0:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[4] = c.f[21];  if (t) { goto L_00391FC8; } }
    c.f[4] = c.f[0];
    c.budget -= 1;
L_00391FC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);  if (t) { goto L_00391FE4; } }
    c.f[4] = c.f[0];
    c.budget -= 1;
L_00391FE4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2C80000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[4], c.f[1]);
    c.f[2] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[1]);
    c.f[3] = c.f[20];
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 2132u), c.r[2].w[0]);  if (t) { goto L_0039201C; } }
    c.f[3] = c.f[0];
    c.budget -= 1;
L_0039201C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);  if (t) { goto L_00392038; } }
    c.f[3] = c.f[0];
    c.budget -= 1;
L_00392038:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2C80000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    c.f[2] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[1]);
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 2136u), c.r[2].w[0]);  if (t) { goto L_0039206C; } }
    c.f[21] = c.f[0];
    c.budget -= 1;
L_0039206C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x437E0000u);  if (t) { goto L_00392088; } }
    c.f[21] = c.f[0];
    c.budget -= 1;
L_00392088:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2FE0000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003920B0u);  if (depth < kMaxDepth) unit_0087(c, 101u, depth + 1u); else { c.pc = 0x0031CBF0u; return; } if (c.pc != 0x003920B0u) [[unlikely]] return; }
L_003920B0:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); st8((c.r[2].w[0] + 1034u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (t) { goto L_003920C8; } }
    c.f[20] = c.f[0];
    c.budget -= 1;
L_003920C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x437E0000u);  if (t) { goto L_003920E4; } }
    c.f[20] = c.f[0];
    c.budget -= 1;
L_003920E4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2FE0000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039210Cu);  if (depth < kMaxDepth) unit_0087(c, 101u, depth + 1u); else { c.pc = 0x0031CBF0u; return; } if (c.pc != 0x0039210Cu) [[unlikely]] return; }
L_0039210C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392114u); st8((c.r[2].w[0] + 1033u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_0096(c, 432u, depth + 1u); else { c.pc = 0x0035BD30u; return; } if (c.pc != 0x00392114u) [[unlikely]] return; }
L_00392114:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039211Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0097(c, 9u, depth + 1u); else { c.pc = 0x0035C0B0u; return; } if (c.pc != 0x0039211Cu) [[unlikely]] return; }
L_0039211C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00392140:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[20] = c.f[12];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392160u); set32(c.r[4], c.r[16].w[0] + 1408u);  if (depth < kMaxDepth) unit_00A2(c, 83u, depth + 1u); else { c.pc = 0x00388B00u; return; } if (c.pc != 0x00392160u) [[unlikely]] return; }
L_00392160:
    c.f[20] = fp::add(c.f[0], c.f[20]);
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_00392180; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[0];  if (t) { goto L_00392198; } }
L_00392180:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[16].w[0] + 1408u);  if (t) { goto L_0039219C; } }
    c.f[20] = c.f[0];
    c.budget -= 1;
L_00392198:
    set32(c.r[4], c.r[16].w[0] + 1408u);
    c.budget -= 1;
L_0039219C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003921A4u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00A2(c, 81u, depth + 1u); else { c.pc = 0x00388A80u; return; } if (c.pc != 0x003921A4u) [[unlikely]] return; }
L_003921A4:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[2] = c.f[20];  if (t) { goto L_003921BC; } }
    c.f[2] = c.f[0];
    c.budget -= 1;
L_003921BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0xC2C80000u);  if (t) { goto L_003921DC; } }
    c.f[2] = c.f[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2C80000u);
    c.budget -= 2;
L_003921DC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = c.r[2].w[0];
    c.f[12] = c.f[20];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039220Cu); st32((c.r[16].w[0] + 2132u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A4(c, 226u, depth + 1u); else { c.pc = 0x00392220u; return; } if (c.pc != 0x0039220Cu) [[unlikely]] return; }
L_0039220C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00392220:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392238u); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x00392238u) [[unlikely]] return; }
L_00392238:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392244u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 284u, depth + 1u); else { c.pc = 0x0031E6B0u; return; } if (c.pc != 0x00392244u) [[unlikely]] return; }
L_00392244:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.f[0] = 0u;
    set32(c.r[3], c.r[29].w[0] + 48u);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (t) { goto L_00392260; } }
    c.f[20] = c.f[0];
    c.budget -= 1;
L_00392260:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);  if (t) { goto L_0039227C; } }
    c.f[20] = c.f[0];
    c.budget -= 1;
L_0039227C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.f[1] = 0u;
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003922A8u); st32((c.r[29].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0087(c, 268u, depth + 1u); else { c.pc = 0x0031E2C0u; return; } if (c.pc != 0x003922A8u) [[unlikely]] return; }
L_003922A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003922C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003922D0u);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x003922D0u) [[unlikely]] return; }
L_003922D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003922D8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 284u, depth + 1u); else { c.pc = 0x0031E6B0u; return; } if (c.pc != 0x003922D8u) [[unlikely]] return; }
L_003922D8:
    c.f[1] = ld32((c.r[2].w[0] + 12u));
    c.f[0] = 0u;
    c.f[2] = fp::cvt_s_w(c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003922F8; } }
    c.f[2] = c.f[0];
    c.budget -= 1;
L_003922F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00392314; } }
    c.f[2] = c.f[0];
    c.budget -= 1;
L_00392314:
    c.f[1] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00392340:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.r[17].w[0] + 2160u);
    set32(c.r[16], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039236Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 142u, depth + 1u); else { c.pc = 0x00385880u; return; } if (c.pc != 0x0039236Cu) [[unlikely]] return; }
L_0039236C:
    set32(c.r[4], c.r[17].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392378u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 123u, depth + 1u); else { c.pc = 0x003890F0u; return; } if (c.pc != 0x00392378u) [[unlikely]] return; }
L_00392378:
    set32(c.r[4], c.r[17].w[0] + 752u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392384u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 123u, depth + 1u); else { c.pc = 0x003890F0u; return; } if (c.pc != 0x00392384u) [[unlikely]] return; }
L_00392384:
    set32(c.r[4], c.r[17].w[0] + 1408u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392390u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 67u, depth + 1u); else { c.pc = 0x00388820u; return; } if (c.pc != 0x00392390u) [[unlikely]] return; }
L_00392390:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003923B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003923C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 122u, depth + 1u); else { c.pc = 0x003912D0u; return; } if (c.pc != 0x003923C4u) [[unlikely]] return; }
L_003923C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003923DC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003923DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003923DCu) [[unlikely]] return; }
L_003923DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003923F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392404u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 122u, depth + 1u); else { c.pc = 0x003912D0u; return; } if (c.pc != 0x00392404u) [[unlikely]] return; }
L_00392404:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 21u);  if (t) { goto L_00392424; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392414u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x00392414u) [[unlikely]] return; }
L_00392414:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00392424u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00392424u) [[unlikely]] return; }
L_00392424:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00392440:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392458u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 318u, depth + 1u); else { c.pc = 0x0012E5E0u; return; } if (c.pc != 0x00392458u) [[unlikely]] return; }
L_00392458:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 2064u)));
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[3].w[0] + 624u);  if (t) { goto L_003924B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392474u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00392474u) [[unlikely]] return; }
L_00392474:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00392488; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392488u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_002A(c, 287u, depth + 1u); else { c.pc = 0x001AB200u; return; } if (c.pc != 0x00392488u) [[unlikely]] return; }
L_00392488:
    st32((c.r[16].w[0] + 2064u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392498u); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x00392498u) [[unlikely]] return; }
L_00392498:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003924A8u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x003924A8u) [[unlikely]] return; }
L_003924A8:
    set32(c.r[4], ld32((c.r[16].w[0] + 2064u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003924B8u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x003924B8u) [[unlikely]] return; }
L_003924B8:
    set32(c.r[4], ld32((c.r[16].w[0] + 2064u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003924CCu); set32(c.r[5], 0u + 171u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003924CCu) [[unlikely]] return; }
L_003924CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003924D4u);  if (depth < kMaxDepth) unit_009F(c, 200u, depth + 1u); else { c.pc = 0x0037DCF0u; return; } if (c.pc != 0x003924D4u) [[unlikely]] return; }
L_003924D4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003924E4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 211u, depth + 1u); else { c.pc = 0x0037DE40u; return; } if (c.pc != 0x003924E4u) [[unlikely]] return; }
L_003924E4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003924F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009F(c, 186u, depth + 1u); else { c.pc = 0x0037DB10u; return; } if (c.pc != 0x003924F0u) [[unlikely]] return; }
L_003924F0:
    st32((c.r[16].w[0] + 68u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    st32((c.r[16].w[0] + 72u), 0u);
    set32(c.r[2], 0u + 15u);
    st32((c.r[16].w[0] + 76u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 32u);
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[5], c.r[16].w[0] + 68u);
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039251Cu); st32((c.r[16].w[0] + 88u), 0u);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x0039251Cu) [[unlikely]] return; }
L_0039251C:
    set32(c.r[4], ld32((c.r[16].w[0] + 2128u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00392530; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392530u);  if (depth < kMaxDepth) unit_0098(c, 259u, depth + 1u); else { c.pc = 0x00362CF0u; return; } if (c.pc != 0x00392530u) [[unlikely]] return; }
L_00392530:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392538u); set32(c.r[4], 0u + 26u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x00392538u) [[unlikely]] return; }
L_00392538:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00392550:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E600u | kUnwind; return; } [[clang::musttail]] return unit_000B(c, 319u, depth); }
L_00392560:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392574u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 320u, depth + 1u); else { c.pc = 0x0012E610u; return; } if (c.pc != 0x00392574u) [[unlikely]] return; }
L_00392574:
    set32(c.r[4], ld32((c.r[16].w[0] + 2064u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);  if (t) { goto L_00392594; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00392590u); set32(c.r[5], 0u + 172u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00392590u) [[unlikely]] return; }
L_00392590:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.budget -= 1;
L_00392594:
    set32(c.r[2], 0u + 15u);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 32u);
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[5], c.r[16].w[0] + 68u);
    st32((c.r[16].w[0] + 76u), 0u);
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 84u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003925BCu); st32((c.r[16].w[0] + 88u), 0u);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x003925BCu) [[unlikely]] return; }
L_003925BC:
    set32(c.r[4], ld32((c.r[16].w[0] + 2128u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003925D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003925D0u);  if (depth < kMaxDepth) unit_0098(c, 262u, depth + 1u); else { c.pc = 0x00362D60u; return; } if (c.pc != 0x003925D0u) [[unlikely]] return; }
L_003925D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003925D8u);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x003925D8u) [[unlikely]] return; }
L_003925D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003925E0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 173u, depth + 1u); else { c.pc = 0x0031D440u; return; } if (c.pc != 0x003925E0u) [[unlikely]] return; }
L_003925E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003925F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392604u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 321u, depth + 1u); else { c.pc = 0x0012E630u; return; } if (c.pc != 0x00392604u) [[unlikely]] return; }
L_00392604:
    set32(c.r[4], ld32((c.r[16].w[0] + 2064u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);  if (t) { goto L_00392624; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00392620u); set32(c.r[5], 0u + 172u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00392620u) [[unlikely]] return; }
L_00392620:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.budget -= 1;
L_00392624:
    set32(c.r[2], 0u + 15u);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 32u);
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[5], c.r[16].w[0] + 68u);
    st32((c.r[16].w[0] + 76u), 0u);
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 84u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039264Cu); st32((c.r[16].w[0] + 88u), 0u);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x0039264Cu) [[unlikely]] return; }
L_0039264C:
    set32(c.r[4], ld32((c.r[16].w[0] + 2128u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00392660; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392660u);  if (depth < kMaxDepth) unit_0098(c, 262u, depth + 1u); else { c.pc = 0x00362D60u; return; } if (c.pc != 0x00392660u) [[unlikely]] return; }
L_00392660:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392668u);  if (depth < kMaxDepth) unit_0087(c, 98u, depth + 1u); else { c.pc = 0x0031CBB0u; return; } if (c.pc != 0x00392668u) [[unlikely]] return; }
L_00392668:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392674u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0087(c, 122u, depth + 1u); else { c.pc = 0x0031CF50u; return; } if (c.pc != 0x00392674u) [[unlikely]] return; }
L_00392674:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00392690:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003926ACu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 298u, depth + 1u); else { c.pc = 0x0012E440u; return; } if (c.pc != 0x003926ACu) [[unlikely]] return; }
L_003926AC:
    set32(c.r[4], c.r[16].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003926B8u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x003926B8u) [[unlikely]] return; }
L_003926B8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 29840u);
    set32(c.r[2], c.r[2].w[0] - 29752u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 32u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003926DCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A1(c, 33u, depth + 1u); else { c.pc = 0x003845C0u; return; } if (c.pc != 0x003926DCu) [[unlikely]] return; }
L_003926DC:
    set32(c.r[4], c.r[16].w[0] + 4976u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003926E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 271u, depth + 1u); else { c.pc = 0x002275A0u; return; } if (c.pc != 0x003926E8u) [[unlikely]] return; }
L_003926E8:
    st32((c.r[16].w[0] + 5036u), 0u);
    set32(c.r[4], c.r[16].w[0] + 5072u);
    st32((c.r[16].w[0] + 5040u), 0u);
    set32(c.r[5], c.r[16].w[0] + 5200u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392704u); st32((c.r[16].w[0] + 5044u), 0u);  if (depth < kMaxDepth) unit_00A1(c, 139u, depth + 1u); else { c.pc = 0x003857D0u; return; } if (c.pc != 0x00392704u) [[unlikely]] return; }
L_00392704:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[29].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] + 5648u);
    c.r[8].d[0] = 0ull + 0ull;
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[2]);
    st128((c.r[16].w[0] + 5152u) & ~15u, c.r[2]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41D00000u);
    set32(c.r[5], c.r[5].w[0] + 1152u);
    set32(c.r[2], c.r[8].w[0] << 1);
    c.budget -= 12;
L_00392734:
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[4], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[6], c.r[16].w[0] + c.r[6].w[0]);
    st32((c.r[6].w[0] + 5200u), c.r[4].w[0]);
    set32(c.r[2], c.r[16].w[0] + c.r[7].w[0]);
    st32((c.r[6].w[0] + 5204u), c.r[3].w[0]);
    st8((c.r[6].w[0] + 5208u), static_cast<std::uint8_t>(0u));
    st32((c.r[2].w[0] + 5308u), c.r[8].w[0]);
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[2].d[0] = c.r[8].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[8].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00392734u | kUnwind; return; } goto L_00392734; } }
    set32(c.r[3], c.r[16].w[0] + 5200u);
    set32(c.r[2], 0u + 9u);
    st32((c.r[16].w[0] + 5184u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392788u); st32((c.r[16].w[0] + 5188u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A4(c, 335u, depth + 1u); else { c.pc = 0x00392C90u; return; } if (c.pc != 0x00392788u) [[unlikely]] return; }
L_00392788:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0039278C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392794u);  if (depth < kMaxDepth) unit_0087(c, 101u, depth + 1u); else { c.pc = 0x0031CBF0u; return; } if (c.pc != 0x00392794u) [[unlikely]] return; }
L_00392794:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[16].w[0] + c.r[17].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1012u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 23ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[3].w[0] + 5048u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039278Cu | kUnwind; return; } goto L_0039278C; } }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003927D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0039289C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 29840u);
    set32(c.r[2], c.r[2].w[0] - 29752u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 5036u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00392828; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00392828; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00392828u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00392828u) [[unlikely]] return; }
L_00392828:
    st32((c.r[17].w[0] + 5036u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 5040u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00392850; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00392850; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00392850u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00392850u) [[unlikely]] return; }
L_00392850:
    set32(c.r[4], c.r[17].w[0] + 4976u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392860u); st32((c.r[17].w[0] + 5040u), 0u);  if (depth < kMaxDepth) unit_0049(c, 274u, depth + 1u); else { c.pc = 0x002275F0u; return; } if (c.pc != 0x00392860u) [[unlikely]] return; }
L_00392860:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039286Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00A1(c, 49u, depth + 1u); else { c.pc = 0x00384740u; return; } if (c.pc != 0x0039286Cu) [[unlikely]] return; }
L_0039286C:
    set32(c.r[4], c.r[17].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392878u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x00392878u) [[unlikely]] return; }
L_00392878:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392884u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 300u, depth + 1u); else { c.pc = 0x0012E490u; return; } if (c.pc != 0x00392884u) [[unlikely]] return; }
L_00392884:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003928A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039289Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0039289Cu) [[unlikely]] return; }
L_0039289C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003928A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003928C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003928D0:
    set32(c.r[3], ld32((c.r[4].w[0] + 5040u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003928E0; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 137u));
    c.budget -= 1;
L_003928E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003928F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392904u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 80u, depth + 1u); else { c.pc = 0x0037CE90u; return; } if (c.pc != 0x00392904u) [[unlikely]] return; }
L_00392904:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0039291C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039291Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039291Cu) [[unlikely]] return; }
L_0039291C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00392930:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392944u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 293u, depth + 1u); else { c.pc = 0x003928D0u; return; } if (c.pc != 0x00392944u) [[unlikely]] return; }
L_00392944:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0039295C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039295Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039295Cu) [[unlikely]] return; }
L_0039295C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00392970:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[1].w[0] + 25376u)));
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003929F4; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003929A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003929A0u) [[unlikely]] return; }
L_003929A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003929FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003929B0u);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x003929B0u) [[unlikely]] return; }
L_003929B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003929B8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 231u, depth + 1u); else { c.pc = 0x0016A360u; return; } if (c.pc != 0x003929B8u) [[unlikely]] return; }
L_003929B8:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003929C4u); c.r[16].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_001A(c, 271u, depth + 1u); else { c.pc = 0x0016A9E0u; return; } if (c.pc != 0x003929C4u) [[unlikely]] return; }
L_003929C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003929CCu);  if (depth < kMaxDepth) unit_009F(c, 127u, depth + 1u); else { c.pc = 0x0037D270u; return; } if (c.pc != 0x003929CCu) [[unlikely]] return; }
L_003929CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003929D4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 157u, depth + 1u); else { c.pc = 0x0037D560u; return; } if (c.pc != 0x003929D4u) [[unlikely]] return; }
L_003929D4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003929FC; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003929ECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003929ECu) [[unlikely]] return; }
L_003929EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00392A00; } }
L_003929F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003929FCu);  if (depth < kMaxDepth) unit_00A4(c, 309u, depth + 1u); else { c.pc = 0x00392A10u; return; } if (c.pc != 0x003929FCu) [[unlikely]] return; }
L_003929FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00392A00:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00392A10:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[1].w[0] - 1536u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392A3Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 314u, depth + 1u); else { c.pc = 0x0013F0C0u; return; } if (c.pc != 0x00392A3Cu) [[unlikely]] return; }
L_00392A3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00392AB0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 5044u)));
    set32(c.r[2], 0u + 8u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 5308u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 7u);  if (t) { goto L_00392A80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392A68u); set32(c.r[4], 0u + 400u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x00392A68u) [[unlikely]] return; }
L_00392A68:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00392A78u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00392A78u) [[unlikely]] return; }
L_00392A78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 32u);  if (t) { goto L_00392BD0; } }
L_00392A80:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00392BCC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392A90u);  if (depth < kMaxDepth) unit_0096(c, 432u, depth + 1u); else { c.pc = 0x0035BD30u; return; } if (c.pc != 0x00392A90u) [[unlikely]] return; }
L_00392A90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392A98u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0097(c, 9u, depth + 1u); else { c.pc = 0x0035C0B0u; return; } if (c.pc != 0x00392A98u) [[unlikely]] return; }
L_00392A98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392AA0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 335u, depth + 1u); else { c.pc = 0x00392C90u; return; } if (c.pc != 0x00392AA0u) [[unlikely]] return; }
L_00392AA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392AA8u); set32(c.r[4], 0u + 400u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x00392AA8u) [[unlikely]] return; }
L_00392AA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00392BCC; } }
L_00392AB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392AB8u);  if (depth < kMaxDepth) unit_000F(c, 315u, depth + 1u); else { c.pc = 0x0013F0D0u; return; } if (c.pc != 0x00392AB8u) [[unlikely]] return; }
L_00392AB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 401u);  if (t) { goto L_00392B58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392AC8u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x00392AC8u) [[unlikely]] return; }
L_00392AC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392AD0u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 101u, depth + 1u); else { c.pc = 0x0031CBF0u; return; } if (c.pc != 0x00392AD0u) [[unlikely]] return; }
L_00392AD0:
    set32(c.r[5], c.r[2].w[0] + 928u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00392AFC; } }
L_00392ADC:
    set32(c.r[2], c.r[5].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5048u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 84u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00392AF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00392B08; } }
L_00392AF8:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_00392AFC:
    c.r[2].d[0] = c.r[4].sd[0] < 23ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[17].w[0] + c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00392ADCu | kUnwind; return; } goto L_00392ADC; } }
L_00392B08:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00392B40; } }
    set32(c.r[5], 0u + 5u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 14u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392B28u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 267u, depth + 1u); else { c.pc = 0x0016A910u; return; } if (c.pc != 0x00392B28u) [[unlikely]] return; }
L_00392B28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392B30u);  if (depth < kMaxDepth) unit_009F(c, 127u, depth + 1u); else { c.pc = 0x0037D270u; return; } if (c.pc != 0x00392B30u) [[unlikely]] return; }
L_00392B30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392B38u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 156u, depth + 1u); else { c.pc = 0x0037D530u; return; } if (c.pc != 0x00392B38u) [[unlikely]] return; }
L_00392B38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00392BCC; } }
L_00392B40:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00392B50u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00392B50u) [[unlikely]] return; }
L_00392B50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00392BCC; } }
L_00392B58:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 168u));
    c.r[2].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 16384ull;  if (t) { goto L_00392B98; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 5044u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[17].w[0] + 5044u), c.r[2].w[0]);  if (t) { goto L_00392B80; } }
    set32(c.r[2], 0u + 8u);
    st32((c.r[17].w[0] + 5044u), c.r[2].w[0]);
    c.budget -= 2;
L_00392B80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392B88u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 335u, depth + 1u); else { c.pc = 0x00392C90u; return; } if (c.pc != 0x00392B88u) [[unlikely]] return; }
L_00392B88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392B90u); set32(c.r[4], 0u + 402u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x00392B90u) [[unlikely]] return; }
L_00392B90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00392BCC; } }
L_00392B98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00392BCC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 5044u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 5044u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00392BBC; } }
    st32((c.r[17].w[0] + 5044u), 0u);
    c.budget -= 1;
L_00392BBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392BC4u);  if (depth < kMaxDepth) unit_00A4(c, 335u, depth + 1u); else { c.pc = 0x00392C90u; return; } if (c.pc != 0x00392BC4u) [[unlikely]] return; }
L_00392BC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392BCCu); set32(c.r[4], 0u + 402u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x00392BCCu) [[unlikely]] return; }
L_00392BCC:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 1;
L_00392BD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392BD8u);  if (depth < kMaxDepth) unit_00A1(c, 103u, depth + 1u); else { c.pc = 0x00385050u; return; } if (c.pc != 0x00392BD8u) [[unlikely]] return; }
L_00392BD8:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00392C4C; } }
    set32(c.r[3], c.r[16].w[0] << 2);
    c.budget -= 1;
L_00392BE8:
    set32(c.r[2], 0u + 23u);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[19], ld32((c.r[3].w[0] + 4960u)));
    c.budget -= 5;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[16].w[0] << 4);  if (t) { goto L_00392C2C; } }
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.f[2] = ld32((c.r[2].w[0] + 4816u));
    c.f[1] = ld32((c.r[2].w[0] + 4812u));
    c.f[0] = ld32((c.r[2].w[0] + 4804u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[18], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392C24u);  if (depth < kMaxDepth) unit_0087(c, 101u, depth + 1u); else { c.pc = 0x0031CBF0u; return; } if (c.pc != 0x00392C24u) [[unlikely]] return; }
L_00392C24:
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0] + 1012u), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.budget -= 2;
L_00392C2C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00392BE8u | kUnwind; return; } goto L_00392BE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392C44u);  if (depth < kMaxDepth) unit_0096(c, 432u, depth + 1u); else { c.pc = 0x0035BD30u; return; } if (c.pc != 0x00392C44u) [[unlikely]] return; }
L_00392C44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392C4Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0097(c, 4u, depth + 1u); else { c.pc = 0x0035C030u; return; } if (c.pc != 0x00392C4Cu) [[unlikely]] return; }
L_00392C4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00392C70:
    c.f[0] = ld32((c.r[4].w[0] + 4988u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 6;
    { set32(c.r[4], c.r[4].w[0] + 5072u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00385880u | kUnwind; return; } [[clang::musttail]] return unit_00A1(c, 142u, depth); }
L_00392C90:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
L_00392CB4:
    set32(c.r[5], ld32((c.r[20].w[0] + 5044u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[16], c.r[19].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[6], c.r[20].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1344u);
    set32(c.r[3], c.r[3].w[0] + 1200u);
    set32(c.r[2], 0u + 52u);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    st32((c.r[6].w[0] + 4960u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 5044u)));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 20;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[17], c.r[6].w[0] + 4960u);  if (t) { goto L_00392D78; } }
    set32(c.r[2], c.r[19].w[0] << 1);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42FE0000u);
    set32(c.r[4], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2FE0000u);
    set32(c.r[4], c.r[4].w[0] + c.r[29].w[0]);
    set32(c.r[18], c.r[4].w[0] + 96u);
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392D2Cu); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0087(c, 101u, depth + 1u); else { c.pc = 0x0031CBF0u; return; } if (c.pc != 0x00392D2Cu) [[unlikely]] return; }
L_00392D2C:
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1200u);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1012u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[18].w[0] + 8u), c.f[0]);
    st8((c.r[18].w[0] + 12u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[20].w[0] + 5044u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392D70u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_009F(c, 119u, depth + 1u); else { c.pc = 0x0037D1D0u; return; } if (c.pc != 0x00392D70u) [[unlikely]] return; }
L_00392D70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st64((c.r[18].w[0] + 16u), c.r[2].d[0]);  if (t) { goto L_00392DA8; } }
L_00392D78:
    set32(c.r[2], c.r[19].w[0] << 1);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[4], c.r[4].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[4].w[0] + 96u);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0] + 8u), 0u);
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(0u));
    st64((c.r[4].w[0] + 16u), 0ull);
    c.budget -= 12;
L_00392DA8:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[20].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00392CB4u | kUnwind; return; } goto L_00392CB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392DC0u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_00A1(c, 75u, depth + 1u); else { c.pc = 0x00384A30u; return; } if (c.pc != 0x00392DC0u) [[unlikely]] return; }
L_00392DC0:
    set32(c.r[2], ld32((c.r[20].w[0] + 5044u)));
    set32(c.r[4], c.r[20].w[0] + 5088u);
    st32((c.r[20].w[0] + 5192u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 5148u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392DD8u); st8((c.r[20].w[0] + 5144u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x00392DD8u) [[unlikely]] return; }
L_00392DD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_00392E00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392E14u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 293u, depth + 1u); else { c.pc = 0x003928D0u; return; } if (c.pc != 0x00392E14u) [[unlikely]] return; }
L_00392E14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00392E34; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00392E2Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00392E2Cu) [[unlikely]] return; }
L_00392E2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392E34u); set32(c.r[4], 0u + 21u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x00392E34u) [[unlikely]] return; }
L_00392E34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00392E50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392E64u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 293u, depth + 1u); else { c.pc = 0x003928D0u; return; } if (c.pc != 0x00392E64u) [[unlikely]] return; }
L_00392E64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00392E7C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00392E7Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00392E7Cu) [[unlikely]] return; }
L_00392E7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00392E90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392EA8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 318u, depth + 1u); else { c.pc = 0x0012E5E0u; return; } if (c.pc != 0x00392EA8u) [[unlikely]] return; }
L_00392EA8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 5040u)));
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[3].w[0] + 624u);  if (t) { goto L_00392F08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392EC4u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00392EC4u) [[unlikely]] return; }
L_00392EC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00392ED8; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392ED8u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_002A(c, 287u, depth + 1u); else { c.pc = 0x001AB200u; return; } if (c.pc != 0x00392ED8u) [[unlikely]] return; }
L_00392ED8:
    st32((c.r[16].w[0] + 5040u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392EE8u); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x00392EE8u) [[unlikely]] return; }
L_00392EE8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392EF8u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x00392EF8u) [[unlikely]] return; }
L_00392EF8:
    set32(c.r[4], ld32((c.r[16].w[0] + 5040u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392F08u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x00392F08u) [[unlikely]] return; }
L_00392F08:
    set32(c.r[4], ld32((c.r[16].w[0] + 5040u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00392F1Cu); set32(c.r[5], 0u + 169u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00392F1Cu) [[unlikely]] return; }
L_00392F1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392F24u);  if (depth < kMaxDepth) unit_009F(c, 200u, depth + 1u); else { c.pc = 0x0037DCF0u; return; } if (c.pc != 0x00392F24u) [[unlikely]] return; }
L_00392F24:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 13u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392F34u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 211u, depth + 1u); else { c.pc = 0x0037DE40u; return; } if (c.pc != 0x00392F34u) [[unlikely]] return; }
L_00392F34:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392F40u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_009F(c, 186u, depth + 1u); else { c.pc = 0x0037DB10u; return; } if (c.pc != 0x00392F40u) [[unlikely]] return; }
L_00392F40:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392F4Cu); set32(c.r[5], 0u + 13u);  if (depth < kMaxDepth) unit_009F(c, 179u, depth + 1u); else { c.pc = 0x0037D9B0u; return; } if (c.pc != 0x00392F4Cu) [[unlikely]] return; }
L_00392F4C:
    set32(c.r[2], ld32((c.r[16].w[0] + 5036u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 1200u);  if (t) { goto L_00392F74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392F60u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00392F60u) [[unlikely]] return; }
L_00392F60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00392F70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392F70u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A1(c, 158u, depth + 1u); else { c.pc = 0x00385BA0u; return; } if (c.pc != 0x00392F70u) [[unlikely]] return; }
L_00392F70:
    st32((c.r[16].w[0] + 5036u), c.r[2].w[0]);
    c.budget -= 1;
L_00392F74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392F7Cu); set32(c.r[4], ld32((c.r[16].w[0] + 5036u)));  if (depth < kMaxDepth) unit_00A1(c, 183u, depth + 1u); else { c.pc = 0x00385E00u; return; } if (c.pc != 0x00392F7Cu) [[unlikely]] return; }
L_00392F7C:
    st32((c.r[16].w[0] + 5012u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    st32((c.r[16].w[0] + 5016u), 0u);
    set32(c.r[2], 0u + 15u);
    st32((c.r[16].w[0] + 5020u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 4976u);
    st32((c.r[16].w[0] + 5024u), c.r[2].w[0]);
    set32(c.r[5], c.r[16].w[0] + 5012u);
    st32((c.r[16].w[0] + 5028u), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392FA8u); st32((c.r[16].w[0] + 5032u), 0u);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x00392FA8u) [[unlikely]] return; }
L_00392FA8:
    set32(c.r[5], 0u + 15u);
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392FB8u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 131u, depth + 1u); else { c.pc = 0x003856F0u; return; } if (c.pc != 0x00392FB8u) [[unlikely]] return; }
L_00392FB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392FC0u); set32(c.r[4], 0u + 26u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x00392FC0u) [[unlikely]] return; }
L_00392FC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00392FE0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E600u | kUnwind; return; } [[clang::musttail]] return unit_000B(c, 319u, depth); }
L_00392FF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393004u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 320u, depth + 1u); else { c.pc = 0x0012E610u; return; } if (c.pc != 0x00393004u) [[unlikely]] return; }
L_00393004:
    set32(c.r[4], ld32((c.r[16].w[0] + 5040u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00393020; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00393020u); set32(c.r[5], 0u + 170u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00393020u) [[unlikely]] return; }
L_00393020:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393028u);  if (depth < kMaxDepth) unit_009F(c, 200u, depth + 1u); else { c.pc = 0x0037DCF0u; return; } if (c.pc != 0x00393028u) [[unlikely]] return; }
L_00393028:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393034u); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_009F(c, 211u, depth + 1u); else { c.pc = 0x0037DE40u; return; } if (c.pc != 0x00393034u) [[unlikely]] return; }
L_00393034:
    set32(c.r[4], ld32((c.r[16].w[0] + 5036u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);  if (t) { goto L_0039304C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393048u);  if (depth < kMaxDepth) unit_00A1(c, 184u, depth + 1u); else { c.pc = 0x00385E30u; return; } if (c.pc != 0x00393048u) [[unlikely]] return; }
L_00393048:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.budget -= 1;
L_0039304C:
    set32(c.r[2], 0u + 15u);
    c.budget -= 1;
L_00393050:
    st32((c.r[16].w[0] + 5012u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 4976u);
    st32((c.r[16].w[0] + 5016u), c.r[3].w[0]);
    set32(c.r[5], c.r[16].w[0] + 5012u);
    st32((c.r[16].w[0] + 5020u), 0u);
    st32((c.r[16].w[0] + 5024u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 5028u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393074u); st32((c.r[16].w[0] + 5032u), 0u);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x00393074u) [[unlikely]] return; }
L_00393074:
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[5], 0u + 15u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393084u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 135u, depth + 1u); else { c.pc = 0x00385760u; return; } if (c.pc != 0x00393084u) [[unlikely]] return; }
L_00393084:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039308Cu);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x0039308Cu) [[unlikely]] return; }
L_0039308C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393094u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 173u, depth + 1u); else { c.pc = 0x0031D440u; return; } if (c.pc != 0x00393094u) [[unlikely]] return; }
L_00393094:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003930B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003930C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 321u, depth + 1u); else { c.pc = 0x0012E630u; return; } if (c.pc != 0x003930C4u) [[unlikely]] return; }
L_003930C4:
    set32(c.r[4], ld32((c.r[16].w[0] + 5040u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003930E0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003930E0u); set32(c.r[5], 0u + 170u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003930E0u) [[unlikely]] return; }
L_003930E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003930E8u);  if (depth < kMaxDepth) unit_009F(c, 200u, depth + 1u); else { c.pc = 0x0037DCF0u; return; } if (c.pc != 0x003930E8u) [[unlikely]] return; }
L_003930E8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003930F4u); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_009F(c, 211u, depth + 1u); else { c.pc = 0x0037DE40u; return; } if (c.pc != 0x003930F4u) [[unlikely]] return; }
L_003930F4:
    set32(c.r[4], ld32((c.r[16].w[0] + 5036u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);  if (t) { goto L_0039310C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393108u);  if (depth < kMaxDepth) unit_00A1(c, 184u, depth + 1u); else { c.pc = 0x00385E30u; return; } if (c.pc != 0x00393108u) [[unlikely]] return; }
L_00393108:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.budget -= 1;
L_0039310C:
    set32(c.r[2], 0u + 15u);
    st32((c.r[16].w[0] + 5012u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 4976u);
    st32((c.r[16].w[0] + 5016u), c.r[3].w[0]);
    set32(c.r[5], c.r[16].w[0] + 5012u);
    st32((c.r[16].w[0] + 5020u), 0u);
    st32((c.r[16].w[0] + 5024u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 5028u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393134u); st32((c.r[16].w[0] + 5032u), 0u);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x00393134u) [[unlikely]] return; }
L_00393134:
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[5], 0u + 15u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393144u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 135u, depth + 1u); else { c.pc = 0x00385760u; return; } if (c.pc != 0x00393144u) [[unlikely]] return; }
L_00393144:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039314Cu);  if (depth < kMaxDepth) unit_0087(c, 98u, depth + 1u); else { c.pc = 0x0031CBB0u; return; } if (c.pc != 0x0039314Cu) [[unlikely]] return; }
L_0039314C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393158u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0087(c, 122u, depth + 1u); else { c.pc = 0x0031CF50u; return; } if (c.pc != 0x00393158u) [[unlikely]] return; }
L_00393158:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00393170:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00392340u | kUnwind; return; } goto L_00392340; }
L_00393180:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003911C0u | kUnwind; return; } goto L_003911C0; }
L_00393190:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00392C70u | kUnwind; return; } goto L_00392C70; }
L_003931A0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003927D0u | kUnwind; return; } goto L_003927D0; }
L_003931B0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003931E8u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 298u, depth + 1u); else { c.pc = 0x0012E440u; return; } if (c.pc != 0x003931E8u) [[unlikely]] return; }
L_003931E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003931F0u); set32(c.r[4], c.r[18].w[0] + 20u);  if (depth < kMaxDepth) unit_000B(c, 335u, depth + 1u); else { c.pc = 0x0012E720u; return; } if (c.pc != 0x003931F0u) [[unlikely]] return; }
L_003931F0:
    set32(c.r[4], c.r[18].w[0] + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003931FCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x003931FCu) [[unlikely]] return; }
L_003931FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 29440u);
    set32(c.r[3], c.r[3].w[0] - 29352u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[4], 0u + 9u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[18].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 29312u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393228u); st32((c.r[18].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00393228u) [[unlikely]] return; }
L_00393228:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393234u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00393234u) [[unlikely]] return; }
L_00393234:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[21].d[0] = 0ull + 0ull;
    st128((c.r[18].w[0] + 48u) & ~15u, c.r[3]);
    set32(c.r[2], 0u + 30u);
    ld128((c.r[19].w[0]) & ~15u, c.r[3]);
    st128((c.r[18].w[0] + 64u) & ~15u, c.r[3]);
    st32((c.r[18].w[0] + 100u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 96u), 0u);
    st32((c.r[18].w[0] + 108u), 0u);
    st8((c.r[18].w[0] + 104u), static_cast<std::uint8_t>(0u));
    ld128((c.r[18].w[0] + 48u) & ~15u, c.r[2]);
    st128((c.r[18].w[0] + 80u) & ~15u, c.r[2]);
    st32((c.r[18].w[0] + 36u), c.r[20].w[0]);
    st32((c.r[18].w[0] + 148u), 0u);
    st32((c.r[18].w[0] + 152u), 0u);
    st32((c.r[18].w[0] + 144u), 0u);
    st32((c.r[18].w[0] + 112u), 0u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[22], c.r[2].w[0] + 624u);
    c.budget -= 20;
L_00393284:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039328Cu); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0039328Cu) [[unlikely]] return; }
L_0039328C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[20], c.r[21].w[0] << 2);  if (t) { goto L_003932A8; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003932A4u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 304u, depth + 1u); else { c.pc = 0x00196C90u; return; } if (c.pc != 0x003932A4u) [[unlikely]] return; }
L_003932A4:
    set32(c.r[20], c.r[21].w[0] << 2);
    c.budget -= 1;
L_003932A8:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[3], c.r[18].w[0] + c.r[20].w[0]);
    set32(c.r[5], 0u + 10011u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003932BCu); st32((c.r[3].w[0] + 116u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x003932BCu) [[unlikely]] return; }
L_003932BC:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003932CCu); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x003932CCu) [[unlikely]] return; }
L_003932CC:
    set32(c.r[3], c.r[18].w[0] + c.r[20].w[0]);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[3].w[0] + 116u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003932E0u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x003932E0u) [[unlikely]] return; }
L_003932E0:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x438E0000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00393284u | kUnwind; return; } goto L_00393284; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42480000u);
    st32((c.r[18].w[0] + 128u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    st32((c.r[18].w[0] + 132u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[18].w[0] + 136u), c.f[0]);
    st32((c.r[18].w[0] + 140u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 156u), 0u);
    st32((c.r[18].w[0] + 156u), 0u);
    st8((c.r[18].w[0] + 13u), static_cast<std::uint8_t>(0u));
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 18;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00393338u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00393338u) [[unlikely]] return; }
L_00393338:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00393370:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0039349C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 29440u);
    set32(c.r[3], c.r[3].w[0] - 29352u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 29312u);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003933CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003933CCu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x003933CCu) [[unlikely]] return; }
L_003933CC:
    st32((c.r[17].w[0] + 148u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 144u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003933F4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003933F4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003933F4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003933F4u) [[unlikely]] return; }
L_003933F4:
    st32((c.r[17].w[0] + 144u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 112u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0039341C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0039341C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039341Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039341Cu) [[unlikely]] return; }
L_0039341C:
    st32((c.r[17].w[0] + 112u), 0u);
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00393424:
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 116u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[18], c.r[2].w[0] + 116u);  if (t) { goto L_00393450; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00393450; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00393450u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00393450u) [[unlikely]] return; }
L_00393450:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[18].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00393424u | kUnwind; return; } goto L_00393424; } }
    set32(c.r[4], c.r[17].w[0] + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039346Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x0039346Cu) [[unlikely]] return; }
L_0039346C:
    set32(c.r[4], c.r[17].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393478u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 336u, depth + 1u); else { c.pc = 0x0012E740u; return; } if (c.pc != 0x00393478u) [[unlikely]] return; }
L_00393478:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393484u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 300u, depth + 1u); else { c.pc = 0x0012E490u; return; } if (c.pc != 0x00393484u) [[unlikely]] return; }
L_00393484:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003934A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039349Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0039349Cu) [[unlikely]] return; }
L_0039349C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003934A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003934C0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 36u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 148u)));
    c.budget -= 15;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00393504; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393504u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00393504u) [[unlikely]] return; }
L_00393504:
    st32((c.r[21].w[0] + 148u), 0u);
    set32(c.r[4], ld32((c.r[21].w[0] + 144u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0039352C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0039352C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039352Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039352Cu) [[unlikely]] return; }
L_0039352C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393534u); st32((c.r[21].w[0] + 144u), 0u);  if (depth < kMaxDepth) unit_003F(c, 299u, depth + 1u); else { c.pc = 0x001FF0D0u; return; } if (c.pc != 0x00393534u) [[unlikely]] return; }
L_00393534:
    set32(c.r[3], ld32((c.r[21].w[0] + 36u)));
    set32(c.r[2], 0u + 3u);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[20].d[0] = 0ull + 0ull;
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003936DC; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 688u);  if (t) { goto L_00393658; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 1296u);  if (t) { goto L_00393578; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00393578; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00393760; } }
L_00393578:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393580u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x00393580u) [[unlikely]] return; }
L_00393580:
    st32((c.r[21].w[0] + 148u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 148u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393590u); set32(c.r[5], 0u + 1296u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x00393590u) [[unlikely]] return; }
L_00393590:
    c.r[16].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[16].sd[0] < 86ll ? 1ull : 0ull;
    c.budget -= 2;
L_00393598:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003935C8; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 36u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].d[0] = c.r[16].sd[0] < 91ll ? 1ull : 0ull;  if (t) { goto L_003935C0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003935E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_003935E4; } }
L_003935C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_003935E4; } }
L_003935C8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003935D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 107u, depth + 1u); else { c.pc = 0x0012CFD0u; return; } if (c.pc != 0x003935D4u) [[unlikely]] return; }
L_003935D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003935E4; } }
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 2;
L_003935E4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00393634; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003935F4u);  if (depth < kMaxDepth) unit_000B(c, 110u, depth + 1u); else { c.pc = 0x0012D160u; return; } if (c.pc != 0x003935F4u) [[unlikely]] return; }
L_003935F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0039360C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393604u);  if (depth < kMaxDepth) unit_0081(c, 190u, depth + 1u); else { c.pc = 0x003062B0u; return; } if (c.pc != 0x00393604u) [[unlikely]] return; }
L_00393604:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00393620; } }
L_0039360C:
    set32(c.r[2], ld32((c.r[21].w[0] + 148u)));
    set32(c.r[3], c.r[19].w[0] << 3);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 5;
L_00393620:
    set32(c.r[2], ld32((c.r[21].w[0] + 148u)));
    set32(c.r[3], c.r[19].w[0] << 3);
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 5;
L_00393634:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 162ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[16].sd[0] < 86ll ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00393598u | kUnwind; return; } goto L_00393598; } }
    st32((c.r[21].w[0] + 152u), c.r[19].w[0]);
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[19].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00393760; } }
L_00393658:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393660u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x00393660u) [[unlikely]] return; }
L_00393660:
    st32((c.r[21].w[0] + 148u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 148u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393670u); set32(c.r[5], 0u + 688u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x00393670u) [[unlikely]] return; }
L_00393670:
    c.r[16].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_00393678:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393680u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 107u, depth + 1u); else { c.pc = 0x0012CFD0u; return; } if (c.pc != 0x00393680u) [[unlikely]] return; }
L_00393680:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003936C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393690u);  if (depth < kMaxDepth) unit_000B(c, 110u, depth + 1u); else { c.pc = 0x0012D160u; return; } if (c.pc != 0x00393690u) [[unlikely]] return; }
L_00393690:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003936AC; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 148u)));
    set32(c.r[3], c.r[19].w[0] << 3);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 5;
L_003936AC:
    set32(c.r[2], ld32((c.r[21].w[0] + 148u)));
    set32(c.r[3], c.r[19].w[0] << 3);
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 5;
L_003936C0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 86ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00393678u | kUnwind; return; } goto L_00393678; } }
    st32((c.r[21].w[0] + 152u), c.r[19].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00393760; } }
L_003936DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003936E4u); set32(c.r[4], 0u + 256u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x003936E4u) [[unlikely]] return; }
L_003936E4:
    st32((c.r[21].w[0] + 148u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 148u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003936F4u); set32(c.r[5], 0u + 256u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x003936F4u) [[unlikely]] return; }
L_003936F4:
    set32(c.r[2], 0u + 32u);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[21].w[0] + 152u), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 86u);
    c.budget -= 4;
L_00393704:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039370Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 107u, depth + 1u); else { c.pc = 0x0012CFD0u; return; } if (c.pc != 0x0039370Cu) [[unlikely]] return; }
L_0039370C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0039372C; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 148u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[4], c.r[16].w[0] + 86u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 4u), c.r[4].w[0]);  if (t) { goto L_00393750; } }
L_0039372C:
    set32(c.r[2], ld32((c.r[21].w[0] + 148u)));
    set32(c.r[5], c.r[16].w[0] << 3);
    set32(c.r[4], 0u + 25500u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 148u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
L_00393750:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 86u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00393704u | kUnwind; return; } goto L_00393704; } }
L_00393760:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00393874; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00393864; } }
L_00393770:
    set32(c.r[2], ld32((c.r[21].w[0] + 148u)));
    set32(c.r[22], c.r[17].w[0] << 3);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039378Cu); set32(c.r[18], 0u - 1u);  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012CDE0u; return; } if (c.pc != 0x0039378Cu) [[unlikely]] return; }
L_0039378C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393794u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 158u, depth + 1u); else { c.pc = 0x00370B80u; return; } if (c.pc != 0x00393794u) [[unlikely]] return; }
L_00393794:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003937A0u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x003937A0u) [[unlikely]] return; }
L_003937A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[17].w[0] + 1u);  if (t) { goto L_0039380C; } }
L_003937A8:
    set32(c.r[2], ld32((c.r[21].w[0] + 148u)));
    set32(c.r[23], c.r[16].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[23].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003937C0u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012CDE0u; return; } if (c.pc != 0x003937C0u) [[unlikely]] return; }
L_003937C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003937C8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 158u, depth + 1u); else { c.pc = 0x00370B80u; return; } if (c.pc != 0x003937C8u) [[unlikely]] return; }
L_003937C8:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003937D4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00127AA0u; return; } if (c.pc != 0x003937D4u) [[unlikely]] return; }
L_003937D4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00393808; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 148u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[23].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003937F4u); c.r[18].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012CDE0u; return; } if (c.pc != 0x003937F4u) [[unlikely]] return; }
L_003937F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003937FCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 158u, depth + 1u); else { c.pc = 0x00370B80u; return; } if (c.pc != 0x003937FCu) [[unlikely]] return; }
L_003937FC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393808u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x00393808u) [[unlikely]] return; }
L_00393808:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0039380C:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003937A8u | kUnwind; return; } goto L_003937A8; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_00393860; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 148u)));
    set32(c.r[4], c.r[29].w[0] + 168u);
    set32(c.r[6], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393834u); set32(c.r[5], c.r[2].w[0] + c.r[22].w[0]);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x00393834u) [[unlikely]] return; }
L_00393834:
    set32(c.r[2], ld32((c.r[21].w[0] + 148u)));
    set32(c.r[16], c.r[18].w[0] << 3);
    set32(c.r[6], 0u + 8u);
    set32(c.r[4], c.r[2].w[0] + c.r[22].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039384Cu); set32(c.r[5], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0039384Cu) [[unlikely]] return; }
L_0039384C:
    set32(c.r[2], ld32((c.r[21].w[0] + 148u)));
    set32(c.r[5], c.r[29].w[0] + 168u);
    set32(c.r[6], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393860u); set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x00393860u) [[unlikely]] return; }
L_00393860:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00393864:
    set32(c.r[2], c.r[19].w[0] - 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00393770u | kUnwind; return; } goto L_00393770; } }
L_00393874:
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 156u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00393884u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00393884u) [[unlikely]] return; }
L_00393884:
    st32((c.r[21].w[0] + 144u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 144u)));
    st32((c.r[3].w[0] + 36u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_003938C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003938D8u); set32(c.r[4], 0u + 52u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003938D8u) [[unlikely]] return; }
L_003938D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00393908; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003938EC; } }
    set32(c.r[7], c.r[7].w[0] + 20u);
    c.budget -= 1;
L_003938EC:
    set32(c.r[8], ld32((c.r[16].w[0] + 148u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[9], ld32((c.r[16].w[0] + 152u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393908u); set32(c.r[10], 0u + 18u);  if (depth < kMaxDepth) unit_000B(c, 395u, depth + 1u); else { c.pc = 0x0012F020u; return; } if (c.pc != 0x00393908u) [[unlikely]] return; }
L_00393908:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00393920:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393938u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000B(c, 318u, depth + 1u); else { c.pc = 0x0012E5E0u; return; } if (c.pc != 0x00393938u) [[unlikely]] return; }
L_00393938:
    set32(c.r[2], ld32((c.r[17].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_00393998; } }
    set32(c.r[4], 0u + 160u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393954u); set32(c.r[16], c.r[2].w[0] + 624u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00393954u) [[unlikely]] return; }
L_00393954:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00393968; } }
    set32(c.r[5], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393968u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0025(c, 304u, depth + 1u); else { c.pc = 0x00196C90u; return; } if (c.pc != 0x00393968u) [[unlikely]] return; }
L_00393968:
    st32((c.r[17].w[0] + 112u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393978u); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x00393978u) [[unlikely]] return; }
L_00393978:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393988u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x00393988u) [[unlikely]] return; }
L_00393988:
    set32(c.r[4], ld32((c.r[17].w[0] + 112u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393998u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x00393998u) [[unlikely]] return; }
L_00393998:
    set32(c.r[4], ld32((c.r[17].w[0] + 112u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003939ACu); set32(c.r[5], 0u + 145u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003939ACu) [[unlikely]] return; }
L_003939AC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 112u)));
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[3].w[0] + 104u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003939E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003939F8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 319u, depth + 1u); else { c.pc = 0x0012E600u; return; } if (c.pc != 0x003939F8u) [[unlikely]] return; }
L_003939F8:
    set32(c.r[2], ld32((c.r[16].w[0] + 144u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], 0u + 4u);
    st32((c.r[2].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00393A1Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00393A1Cu) [[unlikely]] return; }
L_00393A1C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A90000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x421C0000u);
    st32((c.r[17].w[0] + 96u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    st32((c.r[17].w[0] + 100u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[5], 0u + 5u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    st32((c.r[17].w[0] + 108u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[1].w[0] + 1576u));
    st32((c.r[17].w[0] + 104u), c.f[0]);
    set32(c.r[16], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 21;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00393A70u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00393A70u) [[unlikely]] return; }
L_00393A70:
    set32(c.r[3], 0u + 441u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x421C0000u);
    c.f[0] = c.r[3].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[4].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 96u), c.f[0]);
    c.f[0] = c.r[4].w[0];
    st32((c.r[16].w[0] + 100u), c.r[5].w[0]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    st32((c.r[16].w[0] + 108u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[1].w[0] + 1576u));
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00393AD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393AE4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 320u, depth + 1u); else { c.pc = 0x0012E610u; return; } if (c.pc != 0x00393AE4u) [[unlikely]] return; }
L_00393AE4:
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00393B1C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00393B00u); set32(c.r[5], 0u + 146u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00393B00u) [[unlikely]] return; }
L_00393B00:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 112u)));
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[2].w[0] + 104u), c.f[0]);
    c.budget -= 7;
L_00393B1C:
    set32(c.r[4], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00393B30u); set32(c.r[5], 0u + 8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00393B30u) [[unlikely]] return; }
L_00393B30:
    set32(c.r[4], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00393B44u); set32(c.r[5], 0u + 9u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00393B44u) [[unlikely]] return; }
L_00393B44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00393B60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393B74u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 321u, depth + 1u); else { c.pc = 0x0012E630u; return; } if (c.pc != 0x00393B74u) [[unlikely]] return; }
L_00393B74:
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00393BAC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00393B90u); set32(c.r[5], 0u + 146u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00393B90u) [[unlikely]] return; }
L_00393B90:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 112u)));
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[2].w[0] + 104u), c.f[0]);
    c.budget -= 7;
L_00393BAC:
    set32(c.r[4], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00393BC0u); set32(c.r[5], 0u + 8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00393BC0u) [[unlikely]] return; }
L_00393BC0:
    set32(c.r[4], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00393BD4u); set32(c.r[5], 0u + 9u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00393BD4u) [[unlikely]] return; }
L_00393BD4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00393BF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 144u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_00393C4C; } }
    set32(c.r[5], ld32((c.r[5].w[0] + 28u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_00393C30; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 116u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00393C28u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00393C28u) [[unlikely]] return; }
L_00393C28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00393C50; } }
L_00393C30:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00393C4C; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 120u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00393C4Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00393C4Cu) [[unlikely]] return; }
L_00393C4C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00393C50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00393C60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 144u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00393C9C; } }
    st32((c.r[3].w[0] + 36u), 0u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00393C8Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00393C8Cu) [[unlikely]] return; }
L_00393C8C:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00393C9Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00393C9Cu) [[unlikely]] return; }
L_00393C9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00393CB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 144u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00393CEC; } }
    st32((c.r[3].w[0] + 36u), 0u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00393CDCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00393CDCu) [[unlikely]] return; }
L_00393CDC:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00393CECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00393CECu) [[unlikely]] return; }
L_00393CEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00393D00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 112u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00393D38; } }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 137u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00393D48; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00393D30u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00393D30u) [[unlikely]] return; }
L_00393D30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00393D4C; } }
L_00393D38:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00393D48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00393D48u) [[unlikely]] return; }
L_00393D48:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00393D4C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00393D60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 112u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00393D98; } }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 137u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00393DA8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00393D90u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00393D90u) [[unlikely]] return; }
L_00393D90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00393DAC; } }
L_00393D98:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00393DA8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00393DA8u) [[unlikely]] return; }
L_00393DA8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00393DAC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00393DC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 112u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00393DF8; } }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 137u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00393E08; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00393DF0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00393DF0u) [[unlikely]] return; }
L_00393DF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00393E0C; } }
L_00393DF8:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00393E08u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00393E08u) [[unlikely]] return; }
L_00393E08:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00393E0C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00393E20:
    set32(c.r[2], ld32((c.r[4].w[0] + 144u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00393E40; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_00393E44; } }
L_00393E40:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00393E44:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  c.pc = t; return; }
L_00393E50:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 104u));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; c.r[21].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00393EAC; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 108u)));
    set32(c.r[3], c.r[2].w[0] - 1u);
    st32((c.r[21].w[0] + 108u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 96u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[21].w[0] + 48u);  if (t) { goto L_00393EE0; } }
    st32((c.r[21].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0] + 104u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00393EDC; } }
L_00393EAC:
    set32(c.r[2], ld32((c.r[21].w[0] + 108u)));
    set32(c.r[4], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 108u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 100u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 96u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00393EDC; } }
    st32((c.r[21].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[21].w[0] + 104u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00393EDC:
    set32(c.r[4], c.r[21].w[0] + 48u);
    c.budget -= 1;
L_00393EE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393EE8u);  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x00393EE8u) [[unlikely]] return; }
L_00393EE8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[20], ld32((c.r[3].w[0] + 440u)));
    c.budget -= 5;
    { const bool t = c.r[20].d[0] == 0ull; set32(c.r[19], ld32((c.r[3].w[0] + 444u)));  if (t) { [[clang::musttail]] return unit_00A5(c, 15u, depth); } }
    set32(c.r[3], ld32((c.r[21].w[0] + 156u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[20].w[0] + 60u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[1].w[0] + 1568u));
    st32((c.r[20].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] + 1560u));
    st32((c.r[20].w[0] + 20u), c.f[0]);
    st32((c.r[20].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 144u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[18].d[0] = c.lo.d[0];
    c.budget -= 17;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[17], c.r[18].w[0] + c.r[4].w[0]);  if (t) { goto L_00393F4C; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 152u)));
    set32(c.r[2], c.r[2].w[0] - c.r[18].w[0]);
    set32(c.r[17], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 3;
L_00393F4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[18].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_00A5(c, 11u, depth); } }
L_00393F54:
    set32(c.r[3], ld32((c.r[21].w[0] + 148u)));
    set32(c.r[4], c.r[16].w[0] << 3);
    set32(c.r[2], 0u + 25500u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00393FA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393F78u); set32(c.r[4], 0u + 211u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00393F78u) [[unlikely]] return; }
L_00393F78:
    st32((c.r[20].w[0] + 352u), c.r[2].w[0]);
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393F88u); st32((c.r[20].w[0] + 356u), 0u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00393F88u) [[unlikely]] return; }
L_00393F88:
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[20].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[20].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 56u), c.r[2].w[0]);  if (t) { [[clang::musttail]] return unit_00A5(c, 3u, depth); } }
L_00393FA4:
    set32(c.r[2], ld32((c.r[21].w[0] + 36u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00393FB8; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00393FB8:
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_00393FF4; } }
    set32(c.r[4], 0u + 2u);
    set32(c.r[2], c.r[2].w[0] + 1520u);
    st32((c.r[20].w[0] + 352u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393FD8u); st32((c.r[20].w[0] + 356u), 0u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00393FD8u) [[unlikely]] return; }
L_00393FD8:
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[20].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[20].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 56u), c.r[2].w[0]);  if (t) { [[clang::musttail]] return unit_00A5(c, 3u, depth); } }
L_00393FF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00393FFCu);  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012CDE0u; return; } if (c.pc != 0x00393FFCu) [[unlikely]] return; }
L_00393FFC:
    st32((c.r[20].w[0] + 352u), c.r[2].w[0]);
    c.budget -= 1;
    [[clang::musttail]] return unit_00A5(c, 1u, depth);
}

}
