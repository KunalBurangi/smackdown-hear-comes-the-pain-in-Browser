#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0084[4096] = {
    1, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 0, 0, 8, 0,
    0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0,
    0, 0, 0, 16, 0, 17, 0, 0, 18, 0, 0, 0, 0, 19, 0, 20, 0, 0, 21, 0, 0, 0, 0, 22, 0, 23, 0, 0, 24, 0, 0, 0,
    0, 25, 0, 26, 0, 0, 27, 0, 0, 0, 0, 28, 0, 29, 0, 0, 30, 0, 0, 0, 0, 31, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 35, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 45, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47,
    0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 52, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 58, 0, 59, 0, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 64,
    0, 0, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 70,
    0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0,
    0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    78, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0,
    83, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 86, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 91,
    0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0,
    0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 99,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0,
    0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0,
    0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0,
    0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0,
    0, 0, 151, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 156, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    161, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    169, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 181, 0, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 185, 0, 186, 0, 187, 0, 0, 0,
    0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 190, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0,
    0, 193, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0,
    202, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0,
    0, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 210, 0,
    0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 216, 0, 0, 0, 0, 0,
    0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0,
    0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0,
    0, 0, 0, 0, 227, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0, 231, 0, 232, 0, 0, 0, 233,
    0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 237, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 241, 0, 0, 0,
    0, 0, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 255, 0, 0, 0, 0,
    0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 262, 0, 0, 263, 0, 0, 264, 0, 0, 0, 0, 0,
    265, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 268, 0, 0,
    0, 0, 269, 0, 0, 0, 0, 0, 270, 0, 0, 271, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 0, 0, 274, 0, 0, 275, 0, 0, 276, 0,
    0, 0, 277, 0, 0, 0, 0, 0, 278, 0, 0, 279, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 0, 0, 282, 0, 0, 283, 0, 0, 284, 0,
    0, 0, 0, 285, 0, 0, 286, 0, 0, 0, 0, 0, 287, 0, 0, 288, 0, 0, 0, 0, 0, 289, 0, 290, 0, 291, 0, 0, 0, 0, 0, 0,
    0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 294, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299,
    0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 304,
    0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 308, 0, 0, 0, 309, 0, 310, 0, 0, 0, 311, 0, 312, 0, 0, 0, 313,
    0, 0, 0, 0, 314, 0, 315, 0, 0, 0, 316, 0, 0, 0, 0, 317, 0, 318, 0, 0, 0, 319, 0, 320, 0, 0, 0, 321, 0, 322, 0, 0,
    0, 323, 0, 324, 0, 0, 0, 325, 0, 326, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0,
    332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 337, 0, 0, 0, 338,
    0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0,
    0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 345, 0, 0, 0, 0, 0, 0, 346, 0, 0,
    347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 351, 0, 0, 352, 0, 353, 0, 0, 354, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 356,
    0, 0, 357, 0, 358, 0, 0, 359, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 361, 0, 0, 362, 0, 0, 0, 0, 0, 363, 0, 0, 0,
    0, 0, 364, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 370,
    0, 0, 371, 0, 0, 0, 0, 0, 372, 0, 0, 0, 373, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 375, 0, 376, 0, 0, 0, 377, 0, 0,
    378, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    381, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 383, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 386, 0, 0, 0, 387, 0,
    0, 388, 0, 0, 0, 0, 0, 389, 0, 0, 390, 0, 0, 391, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0,
    0, 0, 0, 394, 0, 0, 395, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 399,
    0, 0, 400, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0,
    0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0,
    0, 408, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0,
    416, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0,
    0, 420, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0,
    424, 0, 425, 0, 0, 0, 0, 426, 0, 427, 0, 0, 0, 0, 428, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 434,
    0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 438, 0, 0, 439, 0, 0, 440,
    0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 445, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 449, 0, 0, 0, 0, 0, 450, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 454, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 456, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    458, 0, 0, 0, 459, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 464, 0, 0, 0,
    0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 470, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0,
};

void unit_0084(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00310000;
    case 2u: goto L_00310014;
    case 3u: goto L_0031001C;
    case 4u: goto L_0031002C;
    case 5u: goto L_00310044;
    case 6u: goto L_00310058;
    case 7u: goto L_00310064;
    case 8u: goto L_00310078;
    case 9u: goto L_00310088;
    case 10u: goto L_0031009C;
    case 11u: goto L_003100A8;
    case 12u: goto L_003100BC;
    case 13u: goto L_003100D4;
    case 14u: goto L_003100E8;
    case 15u: goto L_003100F8;
    case 16u: goto L_0031010C;
    case 17u: goto L_00310114;
    case 18u: goto L_00310120;
    case 19u: goto L_00310134;
    case 20u: goto L_0031013C;
    case 21u: goto L_00310148;
    case 22u: goto L_0031015C;
    case 23u: goto L_00310164;
    case 24u: goto L_00310170;
    case 25u: goto L_00310184;
    case 26u: goto L_0031018C;
    case 27u: goto L_00310198;
    case 28u: goto L_003101AC;
    case 29u: goto L_003101B4;
    case 30u: goto L_003101C0;
    case 31u: goto L_003101D4;
    case 32u: goto L_003101D8;
    case 33u: goto L_003101F0;
    case 34u: goto L_00310228;
    case 35u: goto L_00310230;
    case 36u: goto L_00310244;
    case 37u: goto L_0031032C;
    case 38u: goto L_00310344;
    case 39u: goto L_0031035C;
    case 40u: goto L_00310374;
    case 41u: goto L_003103AC;
    case 42u: goto L_003103C0;
    case 43u: goto L_0031041C;
    case 44u: goto L_00310430;
    case 45u: goto L_0031048C;
    case 46u: goto L_003104A0;
    case 47u: goto L_003104FC;
    case 48u: goto L_00310510;
    case 49u: goto L_00310560;
    case 50u: goto L_003105AC;
    case 51u: goto L_003105C0;
    case 52u: goto L_00310604;
    case 53u: goto L_0031060C;
    case 54u: goto L_00310638;
    case 55u: goto L_0031068C;
    case 56u: goto L_003106B0;
    case 57u: goto L_003106C0;
    case 58u: goto L_00310704;
    case 59u: goto L_0031070C;
    case 60u: goto L_00310720;
    case 61u: goto L_00310734;
    case 62u: goto L_00310748;
    case 63u: goto L_00310768;
    case 64u: goto L_0031077C;
    case 65u: goto L_00310790;
    case 66u: goto L_003107A4;
    case 67u: goto L_003107C0;
    case 68u: goto L_003107D4;
    case 69u: goto L_003107E8;
    case 70u: goto L_003107FC;
    case 71u: goto L_00310810;
    case 72u: goto L_0031082C;
    case 73u: goto L_00310848;
    case 74u: goto L_00310868;
    case 75u: goto L_00310884;
    case 76u: goto L_003108C8;
    case 77u: goto L_003108D0;
    case 78u: goto L_00310900;
    case 79u: goto L_00310910;
    case 80u: goto L_0031092C;
    case 81u: goto L_00310948;
    case 82u: goto L_00310964;
    case 83u: goto L_00310980;
    case 84u: goto L_0031099C;
    case 85u: goto L_003109AC;
    case 86u: goto L_003109B4;
    case 87u: goto L_003109BC;
    case 88u: goto L_00310A20;
    case 89u: goto L_00310A50;
    case 90u: goto L_00310A60;
    case 91u: goto L_00310A7C;
    case 92u: goto L_00310AA0;
    case 93u: goto L_00310ACC;
    case 94u: goto L_00310AF0;
    case 95u: goto L_00310B0C;
    case 96u: goto L_00310B28;
    case 97u: goto L_00310B4C;
    case 98u: goto L_00310B70;
    case 99u: goto L_00310B7C;
    case 100u: goto L_00310BD8;
    case 101u: goto L_00310C4C;
    case 102u: goto L_00310C70;
    case 103u: goto L_00310C8C;
    case 104u: goto L_00310CB0;
    case 105u: goto L_00310D04;
    case 106u: goto L_00310D28;
    case 107u: goto L_00310D4C;
    case 108u: goto L_00310D64;
    case 109u: goto L_00310DF0;
    case 110u: goto L_00310E0C;
    case 111u: goto L_00310E30;
    case 112u: goto L_00310E50;
    case 113u: goto L_00310E9C;
    case 114u: goto L_00310EAC;
    case 115u: goto L_00310EC4;
    case 116u: goto L_00310EE0;
    case 117u: goto L_00310F10;
    case 118u: goto L_00310F20;
    case 119u: goto L_00310F30;
    case 120u: goto L_00310F50;
    case 121u: goto L_00310FC0;
    case 122u: goto L_00310FF8;
    case 123u: goto L_003110C0;
    case 124u: goto L_00311100;
    case 125u: goto L_00311220;
    case 126u: goto L_00311248;
    case 127u: goto L_00311630;
    case 128u: goto L_00311664;
    case 129u: goto L_003116A0;
    case 130u: goto L_003116E4;
    case 131u: goto L_00311720;
    case 132u: goto L_00311738;
    case 133u: goto L_00311758;
    case 134u: goto L_00311790;
    case 135u: goto L_003117AC;
    case 136u: goto L_003117C0;
    case 137u: goto L_003117D0;
    case 138u: goto L_003117E8;
    case 139u: goto L_003117F8;
    case 140u: goto L_0031180C;
    case 141u: goto L_0031182C;
    case 142u: goto L_00311850;
    case 143u: goto L_0031189C;
    case 144u: goto L_003118BC;
    case 145u: goto L_003118F0;
    case 146u: goto L_00311924;
    case 147u: goto L_003119C4;
    case 148u: goto L_00311A50;
    case 149u: goto L_00311A64;
    case 150u: goto L_00311A74;
    case 151u: goto L_00311A88;
    case 152u: goto L_00311AA4;
    case 153u: goto L_00311AB8;
    case 154u: goto L_00311AC8;
    case 155u: goto L_00311ADC;
    case 156u: goto L_00311B14;
    case 157u: goto L_00311B20;
    case 158u: goto L_00311B34;
    case 159u: goto L_00311B44;
    case 160u: goto L_00311B58;
    case 161u: goto L_00311B80;
    case 162u: goto L_00311B8C;
    case 163u: goto L_00311BA0;
    case 164u: goto L_00311BB0;
    case 165u: goto L_00311BC4;
    case 166u: goto L_00311C00;
    case 167u: goto L_00311C2C;
    case 168u: goto L_00311C54;
    case 169u: goto L_00311C80;
    case 170u: goto L_00311CA0;
    case 171u: goto L_00311CC0;
    case 172u: goto L_00311CD8;
    case 173u: goto L_00311CEC;
    case 174u: goto L_00311D30;
    case 175u: goto L_00311D48;
    case 176u: goto L_00311D70;
    case 177u: goto L_00311DA0;
    case 178u: goto L_00311DB8;
    case 179u: goto L_00311DD0;
    case 180u: goto L_00311DE0;
    case 181u: goto L_00311E0C;
    case 182u: goto L_00311E20;
    case 183u: goto L_00311E34;
    case 184u: goto L_00311E44;
    case 185u: goto L_00311E60;
    case 186u: goto L_00311E68;
    case 187u: goto L_00311E70;
    case 188u: goto L_00311E94;
    case 189u: goto L_00311EAC;
    case 190u: goto L_00311EB8;
    case 191u: goto L_00311EC0;
    case 192u: goto L_00311EE4;
    case 193u: goto L_00311F04;
    case 194u: goto L_00311F18;
    case 195u: goto L_00311F28;
    case 196u: goto L_00311F34;
    case 197u: goto L_00311F60;
    case 198u: goto L_00311FAC;
    case 199u: goto L_00311FBC;
    case 200u: goto L_00311FD4;
    case 201u: goto L_00311FF0;
    case 202u: goto L_00312000;
    case 203u: goto L_0031201C;
    case 204u: goto L_0031203C;
    case 205u: goto L_00312050;
    case 206u: goto L_00312074;
    case 207u: goto L_00312094;
    case 208u: goto L_003120A4;
    case 209u: goto L_003120E4;
    case 210u: goto L_003120F8;
    case 211u: goto L_00312108;
    case 212u: goto L_00312120;
    case 213u: goto L_00312134;
    case 214u: goto L_00312140;
    case 215u: goto L_00312160;
    case 216u: goto L_00312168;
    case 217u: goto L_00312184;
    case 218u: goto L_00312194;
    case 219u: goto L_003121AC;
    case 220u: goto L_003121C0;
    case 221u: goto L_003121DC;
    case 222u: goto L_003121F4;
    case 223u: goto L_00312210;
    case 224u: goto L_00312238;
    case 225u: goto L_0031224C;
    case 226u: goto L_0031226C;
    case 227u: goto L_00312290;
    case 228u: goto L_003122A4;
    case 229u: goto L_003122C8;
    case 230u: goto L_003122DC;
    case 231u: goto L_003122E4;
    case 232u: goto L_003122EC;
    case 233u: goto L_003122FC;
    case 234u: goto L_00312304;
    case 235u: goto L_00312320;
    case 236u: goto L_00312340;
    case 237u: goto L_00312388;
    case 238u: goto L_0031239C;
    case 239u: goto L_003123C4;
    case 240u: goto L_003123EC;
    case 241u: goto L_003123F0;
    case 242u: goto L_00312414;
    case 243u: goto L_00312424;
    case 244u: goto L_00312434;
    case 245u: goto L_00312450;
    case 246u: goto L_003124A4;
    case 247u: goto L_003124CC;
    case 248u: goto L_003124F4;
    case 249u: goto L_0031251C;
    case 250u: goto L_00312544;
    case 251u: goto L_0031256C;
    case 252u: goto L_00312594;
    case 253u: goto L_003125BC;
    case 254u: goto L_003125E4;
    case 255u: goto L_003125EC;
    case 256u: goto L_00312608;
    case 257u: goto L_0031263C;
    case 258u: goto L_00312664;
    case 259u: goto L_0031268C;
    case 260u: goto L_003126B4;
    case 261u: goto L_003126C4;
    case 262u: goto L_003126D0;
    case 263u: goto L_003126DC;
    case 264u: goto L_003126E8;
    case 265u: goto L_00312700;
    case 266u: goto L_00312720;
    case 267u: goto L_00312758;
    case 268u: goto L_00312774;
    case 269u: goto L_00312788;
    case 270u: goto L_003127A0;
    case 271u: goto L_003127AC;
    case 272u: goto L_003127B8;
    case 273u: goto L_003127C8;
    case 274u: goto L_003127E0;
    case 275u: goto L_003127EC;
    case 276u: goto L_003127F8;
    case 277u: goto L_00312808;
    case 278u: goto L_00312820;
    case 279u: goto L_0031282C;
    case 280u: goto L_00312838;
    case 281u: goto L_00312848;
    case 282u: goto L_00312860;
    case 283u: goto L_0031286C;
    case 284u: goto L_00312878;
    case 285u: goto L_0031288C;
    case 286u: goto L_00312898;
    case 287u: goto L_003128B0;
    case 288u: goto L_003128BC;
    case 289u: goto L_003128D4;
    case 290u: goto L_003128DC;
    case 291u: goto L_003128E4;
    case 292u: goto L_00312908;
    case 293u: goto L_00312938;
    case 294u: goto L_00312950;
    case 295u: goto L_0031295C;
    case 296u: goto L_003129A4;
    case 297u: goto L_003129EC;
    case 298u: goto L_00312A38;
    case 299u: goto L_00312A7C;
    case 300u: goto L_00312A84;
    case 301u: goto L_00312B1C;
    case 302u: goto L_00312B30;
    case 303u: goto L_00312B60;
    case 304u: goto L_00312B7C;
    case 305u: goto L_00312B9C;
    case 306u: goto L_00312BF8;
    case 307u: goto L_00312C34;
    case 308u: goto L_00312C3C;
    case 309u: goto L_00312C4C;
    case 310u: goto L_00312C54;
    case 311u: goto L_00312C64;
    case 312u: goto L_00312C6C;
    case 313u: goto L_00312C7C;
    case 314u: goto L_00312C90;
    case 315u: goto L_00312C98;
    case 316u: goto L_00312CA8;
    case 317u: goto L_00312CBC;
    case 318u: goto L_00312CC4;
    case 319u: goto L_00312CD4;
    case 320u: goto L_00312CDC;
    case 321u: goto L_00312CEC;
    case 322u: goto L_00312CF4;
    case 323u: goto L_00312D04;
    case 324u: goto L_00312D0C;
    case 325u: goto L_00312D1C;
    case 326u: goto L_00312D24;
    case 327u: goto L_00312D3C;
    case 328u: goto L_00312DA4;
    case 329u: goto L_00312DF0;
    case 330u: goto L_00312E24;
    case 331u: goto L_00312E74;
    case 332u: goto L_00312E80;
    case 333u: goto L_00312EB4;
    case 334u: goto L_00312ED8;
    case 335u: goto L_00312F38;
    case 336u: goto L_00312F54;
    case 337u: goto L_00312F6C;
    case 338u: goto L_00312F7C;
    case 339u: goto L_00312FA0;
    case 340u: goto L_00312FB8;
    case 341u: goto L_00312FF4;
    case 342u: goto L_00313010;
    case 343u: goto L_00313028;
    case 344u: goto L_00313050;
    case 345u: goto L_00313058;
    case 346u: goto L_00313074;
    case 347u: goto L_00313080;
    case 348u: goto L_003130C0;
    case 349u: goto L_003130DC;
    case 350u: goto L_00313110;
    case 351u: goto L_0031312C;
    case 352u: goto L_00313138;
    case 353u: goto L_00313140;
    case 354u: goto L_0031314C;
    case 355u: goto L_00313160;
    case 356u: goto L_0031317C;
    case 357u: goto L_00313188;
    case 358u: goto L_00313190;
    case 359u: goto L_0031319C;
    case 360u: goto L_003131B0;
    case 361u: goto L_003131CC;
    case 362u: goto L_003131D8;
    case 363u: goto L_003131F0;
    case 364u: goto L_00313208;
    case 365u: goto L_00313220;
    case 366u: goto L_0031323C;
    case 367u: goto L_0031327C;
    case 368u: goto L_003132AC;
    case 369u: goto L_003132D8;
    case 370u: goto L_003132FC;
    case 371u: goto L_00313308;
    case 372u: goto L_00313320;
    case 373u: goto L_00313330;
    case 374u: goto L_00313344;
    case 375u: goto L_0031335C;
    case 376u: goto L_00313364;
    case 377u: goto L_00313374;
    case 378u: goto L_00313380;
    case 379u: goto L_00313398;
    case 380u: goto L_003133D0;
    case 381u: goto L_00313400;
    case 382u: goto L_00313418;
    case 383u: goto L_00313430;
    case 384u: goto L_0031343C;
    case 385u: goto L_00313460;
    case 386u: goto L_00313468;
    case 387u: goto L_00313478;
    case 388u: goto L_00313484;
    case 389u: goto L_0031349C;
    case 390u: goto L_003134A8;
    case 391u: goto L_003134B4;
    case 392u: goto L_003134C4;
    case 393u: goto L_003134F0;
    case 394u: goto L_0031350C;
    case 395u: goto L_00313518;
    case 396u: goto L_00313530;
    case 397u: goto L_00313548;
    case 398u: goto L_00313560;
    case 399u: goto L_0031357C;
    case 400u: goto L_00313588;
    case 401u: goto L_003135A0;
    case 402u: goto L_003135B8;
    case 403u: goto L_003135D0;
    case 404u: goto L_003135F4;
    case 405u: goto L_00313608;
    case 406u: goto L_00313638;
    case 407u: goto L_00313664;
    case 408u: goto L_00313684;
    case 409u: goto L_00313690;
    case 410u: goto L_003136B0;
    case 411u: goto L_003136D4;
    case 412u: goto L_003136E8;
    case 413u: goto L_00313718;
    case 414u: goto L_00313744;
    case 415u: goto L_00313764;
    case 416u: goto L_00313780;
    case 417u: goto L_003137A0;
    case 418u: goto L_003137B0;
    case 419u: goto L_003137E4;
    case 420u: goto L_00313804;
    case 421u: goto L_00313824;
    case 422u: goto L_00313850;
    case 423u: goto L_0031386C;
    case 424u: goto L_00313880;
    case 425u: goto L_00313888;
    case 426u: goto L_0031389C;
    case 427u: goto L_003138A4;
    case 428u: goto L_003138B8;
    case 429u: goto L_003138CC;
    case 430u: goto L_00313900;
    case 431u: goto L_0031392C;
    case 432u: goto L_00313948;
    case 433u: goto L_00313964;
    case 434u: goto L_0031397C;
    case 435u: goto L_00313990;
    case 436u: goto L_003139B4;
    case 437u: goto L_003139CC;
    case 438u: goto L_003139E4;
    case 439u: goto L_003139F0;
    case 440u: goto L_003139FC;
    case 441u: goto L_00313A0C;
    case 442u: goto L_00313A28;
    case 443u: goto L_00313A5C;
    case 444u: goto L_00313A98;
    case 445u: goto L_00313AA8;
    case 446u: goto L_00313AB8;
    case 447u: goto L_00313B04;
    case 448u: goto L_00313B54;
    case 449u: goto L_00313B58;
    case 450u: goto L_00313B70;
    case 451u: goto L_00313C04;
    case 452u: goto L_00313C40;
    case 453u: goto L_00313C58;
    case 454u: goto L_00313C74;
    case 455u: goto L_00313CA4;
    case 456u: goto L_00313CB4;
    case 457u: goto L_00313CC4;
    case 458u: goto L_00313D00;
    case 459u: goto L_00313D10;
    case 460u: goto L_00313D28;
    case 461u: goto L_00313D54;
    case 462u: goto L_00313D5C;
    case 463u: goto L_00313DE0;
    case 464u: goto L_00313DF0;
    case 465u: goto L_00313E14;
    case 466u: goto L_00313E78;
    case 467u: goto L_00313EC0;
    case 468u: goto L_00313EE4;
    case 469u: goto L_00313F48;
    case 470u: goto L_00313F84;
    case 471u: goto L_00313FA0;
    case 472u: goto L_00313FEC;
    default: bad_entry(c, 0x00310000u); return;
    }
L_00310000:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[6], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310014u); set32(c.r[5], 0u + 874u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x00310014u) [[unlikely]] return; }
L_00310014:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003101D4; } }
L_0031001C:
    set32(c.r[17], ld32((c.r[17].w[0] + 4096u)));
    set32(c.r[4], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031002Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x0031002Cu) [[unlikely]] return; }
L_0031002C:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 3u);  if (t) { goto L_00310080; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310044u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x00310044u) [[unlikely]] return; }
L_00310044:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310058u); set32(c.r[5], 0u + 877u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x00310058u) [[unlikely]] return; }
L_00310058:
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310064u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x00310064u) [[unlikely]] return; }
L_00310064:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310078u); set32(c.r[5], 0u + 878u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x00310078u) [[unlikely]] return; }
L_00310078:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[16].d[0] & 255ull;  if (t) { goto L_003100C0; } }
L_00310080:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310088u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x00310088u) [[unlikely]] return; }
L_00310088:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031009Cu); set32(c.r[5], 0u + 877u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0031009Cu) [[unlikely]] return; }
L_0031009C:
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003100A8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x003100A8u) [[unlikely]] return; }
L_003100A8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003100BCu); set32(c.r[5], 0u + 878u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x003100BCu) [[unlikely]] return; }
L_003100BC:
    c.r[3].d[0] = c.r[16].d[0] & 255ull;
    c.budget -= 1;
L_003100C0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_003101D4; } }
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003100D4u); set32(c.r[5], 0u + 877u);  if (depth < kMaxDepth) unit_0058(c, 46u, depth + 1u); else { c.pc = 0x00260440u; return; } if (c.pc != 0x003100D4u) [[unlikely]] return; }
L_003100D4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[6], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003100E8u); set32(c.r[5], 0u + 873u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x003100E8u) [[unlikely]] return; }
L_003100E8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003100F8u); set32(c.r[5], 0u + 878u);  if (depth < kMaxDepth) unit_0058(c, 46u, depth + 1u); else { c.pc = 0x00260440u; return; } if (c.pc != 0x003100F8u) [[unlikely]] return; }
L_003100F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[6], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031010Cu); set32(c.r[5], 0u + 874u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0031010Cu) [[unlikely]] return; }
L_0031010C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003101D4; } }
L_00310114:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310120u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x00310120u) [[unlikely]] return; }
L_00310120:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310134u); set32(c.r[5], 0u + 879u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x00310134u) [[unlikely]] return; }
L_00310134:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003101D4; } }
L_0031013C:
    set32(c.r[4], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310148u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x00310148u) [[unlikely]] return; }
L_00310148:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031015Cu); set32(c.r[5], 0u + 880u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0031015Cu) [[unlikely]] return; }
L_0031015C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003101D4; } }
L_00310164:
    set32(c.r[4], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310170u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x00310170u) [[unlikely]] return; }
L_00310170:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310184u); set32(c.r[5], 0u + 881u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x00310184u) [[unlikely]] return; }
L_00310184:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003101D4; } }
L_0031018C:
    set32(c.r[4], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310198u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x00310198u) [[unlikely]] return; }
L_00310198:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003101ACu); set32(c.r[5], 0u + 882u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x003101ACu) [[unlikely]] return; }
L_003101AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003101D4; } }
L_003101B4:
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003101C0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x003101C0u) [[unlikely]] return; }
L_003101C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003101D4u); set32(c.r[5], 0u + 883u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x003101D4u) [[unlikely]] return; }
L_003101D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003101D8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003101F0:
    set32(c.r[29], c.r[29].w[0] - 2032u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 14;
L_00310228:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310230u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 108u, depth + 1u); else { c.pc = 0x0012D050u; return; } if (c.pc != 0x00310230u) [[unlikely]] return; }
L_00310230:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00310304; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310244u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00310244u) [[unlikely]] return; }
L_00310244:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 355u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00310258; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00310304; } }
L_00310258:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 353u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00310284; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 354u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00310284; } }
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 1552u), c.r[20].w[0]);  if (t) { goto L_00310304; } }
L_00310284:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_003102B4; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 354u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003102B0; } }
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 1072u), c.r[20].w[0]);  if (t) { goto L_00310304; } }
L_003102B0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_003102B4:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003102E0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 354u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003102DC; } }
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 592u), c.r[20].w[0]);  if (t) { goto L_00310304; } }
L_003102DC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_003102E0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00310304; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 354u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00310304; } }
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    st32((c.r[2].w[0] + 112u), c.r[20].w[0]);
    c.budget -= 4;
L_00310304:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < 118ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00310228u | kUnwind; return; } goto L_00310228; } }
    set32(c.r[6], 0u - 1u);
    set32(c.r[4], c.r[29].w[0] + 1552u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[8], 0u + 100u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031032Cu); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 87u, depth + 1u); else { c.pc = 0x00338EC0u; return; } if (c.pc != 0x0031032Cu) [[unlikely]] return; }
L_0031032C:
    set32(c.r[6], 0u - 1u);
    set32(c.r[4], c.r[29].w[0] + 1072u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[8], 0u + 100u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310344u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 87u, depth + 1u); else { c.pc = 0x00338EC0u; return; } if (c.pc != 0x00310344u) [[unlikely]] return; }
L_00310344:
    set32(c.r[6], 0u - 1u);
    set32(c.r[4], c.r[29].w[0] + 592u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[8], 0u + 100u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031035Cu); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 87u, depth + 1u); else { c.pc = 0x00338EC0u; return; } if (c.pc != 0x0031035Cu) [[unlikely]] return; }
L_0031035C:
    set32(c.r[6], 0u - 1u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], 0u + 100u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310374u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 87u, depth + 1u); else { c.pc = 0x00338EC0u; return; } if (c.pc != 0x00310374u) [[unlikely]] return; }
L_00310374:
    set32(c.r[3], c.r[19].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    c.f[1] = c.r[3].w[0];
    c.f[0] = ld32((c.r[1].w[0] - 14312u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[21], c.f[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_003103DC; } }
L_003103AC:
    set32(c.r[2], c.r[20].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 1552u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003103C0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x003103C0u) [[unlikely]] return; }
L_003103C0:
    c.r[1].d[0] = c.r[20].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_003103D0; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003103D0:
    st8((c.r[2].w[0] + 355u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 359u), static_cast<std::uint8_t>(c.r[20].w[0]));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 3;
L_003103DC:
    c.r[3].d[0] = c.r[20].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[18].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003103ACu | kUnwind; return; } goto L_003103AC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    c.f[1] = c.r[3].w[0];
    c.f[0] = ld32((c.r[1].w[0] - 14312u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[19], c.f[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0031044C; } }
L_0031041C:
    set32(c.r[2], c.r[20].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 1072u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310430u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00310430u) [[unlikely]] return; }
L_00310430:
    c.r[1].d[0] = c.r[20].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00310440; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00310440:
    st8((c.r[2].w[0] + 355u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 359u), static_cast<std::uint8_t>(c.r[20].w[0]));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 3;
L_0031044C:
    c.r[3].d[0] = c.r[20].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[17].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031041Cu | kUnwind; return; } goto L_0031041C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    c.f[1] = c.r[3].w[0];
    c.f[0] = ld32((c.r[1].w[0] - 14312u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[18], c.f[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_003104BC; } }
L_0031048C:
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 592u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003104A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x003104A0u) [[unlikely]] return; }
L_003104A0:
    c.r[1].d[0] = c.r[19].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_003104B0; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003104B0:
    st8((c.r[2].w[0] + 355u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 359u), static_cast<std::uint8_t>(c.r[19].w[0]));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 3;
L_003104BC:
    c.r[3].d[0] = c.r[19].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031048Cu | kUnwind; return; } goto L_0031048C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    c.f[1] = c.r[3].w[0];
    c.f[0] = ld32((c.r[1].w[0] - 14312u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[17], c.f[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0031052C; } }
L_003104FC:
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 112u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310510u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00310510u) [[unlikely]] return; }
L_00310510:
    c.r[1].d[0] = c.r[18].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00310520; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00310520:
    st8((c.r[2].w[0] + 355u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 359u), static_cast<std::uint8_t>(c.r[18].w[0]));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 3;
L_0031052C:
    c.r[3].d[0] = c.r[18].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003104FCu | kUnwind; return; } goto L_003104FC; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 2032u);  c.pc = t; return; }
L_00310560:
    set32(c.r[29], c.r[29].w[0] - 976u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    set32(c.r[30], 0u - 1u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[22], 0u + 118u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[4], c.r[29].w[0] + 160u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[5], 0u + 64u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003105ACu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x003105ACu) [[unlikely]] return; }
L_003105AC:
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[4], 0u + 5u);
    set32(c.r[3], 0u + 255u);
    c.budget -= 5;
L_003105C0:
    set32(c.r[2], c.r[8].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[7], c.r[2].w[0] + 160u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[7].w[0] + 4u), 0u);
    st8((c.r[7].w[0] + 8u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[7].w[0] + 9u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[7].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[7].w[0] + 16u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[2].d[0] = c.r[8].sd[0] < 2ll ? 1ull : 0ull;
    st8((c.r[7].w[0] + 17u), static_cast<std::uint8_t>(0u));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[7].w[0] + 22u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003105C0u | kUnwind; return; } goto L_003105C0; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_00310604:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031060Cu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0031060Cu) [[unlikely]] return; }
L_0031060C:
    set32(c.r[4], c.r[16].w[0] << 1);
    c.r[1].d[0] = 0ull | 40092ull;
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[6], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[4], 0u + 118u);
    set32(c.r[2], c.r[3].w[0] << 5);
    c.budget -= 11;
L_00310638:
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_00310664; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00310664; } }
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    st32((c.r[2].w[0] + 896u), c.r[5].w[0]);
    c.budget -= 4;
L_00310664:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] << 5);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00310638u | kUnwind; return; } goto L_00310638; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00310604u | kUnwind; return; } goto L_00310604; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031068Cu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0031068Cu) [[unlikely]] return; }
L_0031068C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[3].d[0] = ld16((c.r[1].w[0] - 25464u));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003106B0u); set32(c.r[16], c.r[2].w[0] << 4);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x003106B0u) [[unlikely]] return; }
L_003106B0:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[1].d[0] = 0ull | 40092ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
L_003106C0:
    set32(c.r[2], c.r[5].w[0] << 5);
    set32(c.r[3], c.r[6].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 8u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003106D8; } }
    c.r[23].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003106D8:
    set32(c.r[4], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    c.r[2].d[0] = c.r[5].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 288u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003106C0u | kUnwind; return; } goto L_003106C0; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
L_00310704:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031070Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 108u, depth + 1u); else { c.pc = 0x0012D050u; return; } if (c.pc != 0x0031070Cu) [[unlikely]] return; }
L_0031070C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003108A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310720u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x00310720u) [[unlikely]] return; }
L_00310720:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_003108A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310734u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x00310734u) [[unlikely]] return; }
L_00310734:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_003108A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310748u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00310748u) [[unlikely]] return; }
L_00310748:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25571u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_003107B8; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310768u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x00310768u) [[unlikely]] return; }
L_00310768:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 3u);  if (t) { goto L_003108A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031077Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x0031077Cu) [[unlikely]] return; }
L_0031077C:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 4u);  if (t) { goto L_003108A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310790u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x00310790u) [[unlikely]] return; }
L_00310790:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 7u);  if (t) { goto L_003108A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003107A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x003107A4u) [[unlikely]] return; }
L_003107A4:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_00310808; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_003108A4; } }
L_003107B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003107C0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x003107C0u) [[unlikely]] return; }
L_003107C0:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 2u);  if (t) { goto L_003108A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003107D4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x003107D4u) [[unlikely]] return; }
L_003107D4:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 5u);  if (t) { goto L_003108A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003107E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x003107E8u) [[unlikely]] return; }
L_003107E8:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 6u);  if (t) { goto L_003108A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003107FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x003107FCu) [[unlikely]] return; }
L_003107FC:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_003108A0; } }
L_00310808:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310810u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00310810u) [[unlikely]] return; }
L_00310810:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] - 25584u)));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003108A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031082Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0031082Cu) [[unlikely]] return; }
L_0031082C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 346u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_003108A0; } }
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310848u); set32(c.r[5], 0u + 355u);  if (depth < kMaxDepth) unit_0058(c, 46u, depth + 1u); else { c.pc = 0x00260440u; return; } if (c.pc != 0x00310848u) [[unlikely]] return; }
L_00310848:
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00310878; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310868u); set32(c.r[5], 0u + 355u);  if (depth < kMaxDepth) unit_0058(c, 46u, depth + 1u); else { c.pc = 0x00260440u; return; } if (c.pc != 0x00310868u) [[unlikely]] return; }
L_00310868:
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_003108A0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00310878:
    set32(c.r[5], c.r[29].w[0] + 896u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310884u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 61u, depth + 1u); else { c.pc = 0x00338A00u; return; } if (c.pc != 0x00310884u) [[unlikely]] return; }
L_00310884:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003108A0; } }
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    st32((c.r[2].w[0] + 416u), c.r[16].w[0]);
    c.budget -= 4;
L_003108A0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_003108A4:
    c.r[2].d[0] = c.r[16].sd[0] < 118ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00310704u | kUnwind; return; } goto L_00310704; } }
    set32(c.r[6], 0u - 1u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 416u);
    set32(c.r[8], 0u + 100u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003108C8u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 87u, depth + 1u); else { c.pc = 0x00338EC0u; return; } if (c.pc != 0x003108C8u) [[unlikely]] return; }
L_003108C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003108EC; } }
L_003108D0:
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 416u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[2].w[0] + 288u), c.r[3].w[0]);
    c.budget -= 7;
L_003108EC:
    c.r[2].d[0] = c.r[17].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003108D0u | kUnwind; return; } goto L_003108D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310900u); set32(c.r[4], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_008D(c, 306u, depth + 1u); else { c.pc = 0x00337780u; return; } if (c.pc != 0x00310900u) [[unlikely]] return; }
L_00310900:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310910u); set32(c.r[5], 0u + 510u);  if (depth < kMaxDepth) unit_0058(c, 46u, depth + 1u); else { c.pc = 0x00260440u; return; } if (c.pc != 0x00310910u) [[unlikely]] return; }
L_00310910:
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    set32(c.r[5], 0u + 511u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031092Cu); st32((c.r[29].w[0] + 256u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0058(c, 46u, depth + 1u); else { c.pc = 0x00260440u; return; } if (c.pc != 0x0031092Cu) [[unlikely]] return; }
L_0031092C:
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    set32(c.r[5], 0u + 512u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310948u); st32((c.r[29].w[0] + 260u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0058(c, 46u, depth + 1u); else { c.pc = 0x00260440u; return; } if (c.pc != 0x00310948u) [[unlikely]] return; }
L_00310948:
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    set32(c.r[5], 0u + 513u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310964u); st32((c.r[29].w[0] + 264u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0058(c, 46u, depth + 1u); else { c.pc = 0x00260440u; return; } if (c.pc != 0x00310964u) [[unlikely]] return; }
L_00310964:
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    set32(c.r[5], 0u + 514u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310980u); st32((c.r[29].w[0] + 268u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0058(c, 46u, depth + 1u); else { c.pc = 0x00260440u; return; } if (c.pc != 0x00310980u) [[unlikely]] return; }
L_00310980:
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    set32(c.r[5], 0u + 515u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031099Cu); st32((c.r[29].w[0] + 272u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0058(c, 46u, depth + 1u); else { c.pc = 0x00260440u; return; } if (c.pc != 0x0031099Cu) [[unlikely]] return; }
L_0031099C:
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003109ACu); st32((c.r[29].w[0] + 276u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x003109ACu) [[unlikely]] return; }
L_003109AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003109B4u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x003109B4u) [[unlikely]] return; }
L_003109B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00310A24; } }
L_003109BC:
    set32(c.r[5], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[23].d[0] & 255ull;  if (t) { goto L_00310A34; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[29].w[0]);
    set32(c.r[6], c.r[3].w[0] + 224u);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] + c.r[29].w[0]);  if (t) { goto L_003109F4; } }
    set32(c.r[22], ld32((c.r[6].w[0])));
    set32(c.r[30], ld32((c.r[3].w[0] + 256u)));
    c.budget -= 2;
L_003109F4:
    set32(c.r[3], ld32((c.r[2].w[0] + 256u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00310A0C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00310A20; } }
L_00310A0C:
    set32(c.r[2], c.r[3].w[0] << 5);
    set32(c.r[6], 0u + 32u);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310A20u); set32(c.r[4], c.r[2].w[0] + 160u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x00310A20u) [[unlikely]] return; }
L_00310A20:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00310A24:
    c.r[2].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 5);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003109BCu | kUnwind; return; } goto L_003109BC; } }
    c.r[18].d[0] = c.r[23].d[0] & 255ull;
    c.budget -= 1;
L_00310A34:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00310A44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0] + 7u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00310A48; } }
L_00310A44:
    st8((c.r[21].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00310A48:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 2;
L_00310A50:
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[17], c.r[2].w[0] + 288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310A60u); set32(c.r[19], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00310A60u) [[unlikely]] return; }
L_00310A60:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] - 25584u)));
    c.budget -= 5;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_00310AB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310A7Cu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00310A7Cu) [[unlikely]] return; }
L_00310A7C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25572u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310AA0u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 99u, depth + 1u); else { c.pc = 0x0012CCE0u; return; } if (c.pc != 0x00310AA0u) [[unlikely]] return; }
L_00310AA0:
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00310AD8; } }
L_00310AB0:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310ACCu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 99u, depth + 1u); else { c.pc = 0x0012CCE0u; return; } if (c.pc != 0x00310ACCu) [[unlikely]] return; }
L_00310ACC:
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00310AD8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00310A50u | kUnwind; return; } goto L_00310A50; } }
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[19], c.r[16].w[0] << 2);
    c.budget -= 2;
L_00310AF0:
    set32(c.r[2], 0u - 1u);
    set32(c.r[4], c.r[19].w[0] + c.r[29].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 256u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[17], c.r[4].w[0] + 224u);  if (t) { goto L_00310BBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310B0Cu); set32(c.r[23], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00310B0Cu) [[unlikely]] return; }
L_00310B0C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] - 25584u)));
    c.budget -= 5;
    { const bool t = c.r[23].d[0] != c.r[2].d[0];  if (t) { goto L_00310B54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310B28u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00310B28u) [[unlikely]] return; }
L_00310B28:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25572u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310B4Cu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 99u, depth + 1u); else { c.pc = 0x0012CCE0u; return; } if (c.pc != 0x00310B4Cu) [[unlikely]] return; }
L_00310B4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_00310B74; } }
L_00310B54:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310B70u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 99u, depth + 1u); else { c.pc = 0x0012CCE0u; return; } if (c.pc != 0x00310B70u) [[unlikely]] return; }
L_00310B70:
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_00310B74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00310BB0; } }
L_00310B7C:
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[2].w[0] + 8u);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 8u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[2], c.r[19].w[0] + c.r[29].w[0]);  if (t) { goto L_00310BAC; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 256u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[3], c.r[21].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[3].w[0] + 8u));
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { goto L_00310BBC; } }
L_00310BAC:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_00310BB0:
    c.r[2].d[0] = c.r[3].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00310B7Cu | kUnwind; return; } goto L_00310B7C; } }
L_00310BBC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00310AF0u | kUnwind; return; } goto L_00310AF0; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 100u);
    set32(c.r[2], c.r[5].w[0] << 1);
    c.budget -= 3;
L_00310BD8:
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld16((c.r[2].w[0] + 8u));
    set32(c.r[2], c.r[3].w[0] - 10000u);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00310C04; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; mmi::div(c, 0, c.r[2].w[0], c.r[4].w[0]);  if (t) { goto L_00310BF8; } }
    breakpoint(c, 0x00310BF4u);
    c.budget -= 1;
L_00310BF8:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00310C08; } }
L_00310C04:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_00310C08:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00310C18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[2].w[0] + 86u);  if (t) { goto L_00310C2C; } }
L_00310C18:
    c.r[2].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; mmi::div(c, 0, c.r[2].w[0], c.r[4].w[0]);  if (t) { goto L_00310C28; } }
    breakpoint(c, 0x00310C24u);
    c.budget -= 1;
L_00310C28:
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 1;
L_00310C2C:
    set32(c.r[2], c.r[5].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[2].w[0] + 172u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[5].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00310BD8u | kUnwind; return; } goto L_00310BD8; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00310C4C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 1);  if (t) { goto L_00310CE8; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 1);  if (t) { goto L_00310CD8; } }
    set32(c.r[2], 0u + 118u);
    c.budget -= 3;
    { const bool t = c.r[22].d[0] == c.r[2].d[0];  if (t) { goto L_00310CD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310C70u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00310C70u) [[unlikely]] return; }
L_00310C70:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] - 25584u)));
    c.budget -= 5;
    { const bool t = c.r[22].d[0] != c.r[2].d[0]; set32(c.r[3], c.r[16].w[0] << 1);  if (t) { goto L_00310CC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310C8Cu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00310C8Cu) [[unlikely]] return; }
L_00310C8C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25572u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310CB0u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 99u, depth + 1u); else { c.pc = 0x0012CCE0u; return; } if (c.pc != 0x00310CB0u) [[unlikely]] return; }
L_00310CB0:
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 68u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00310CF4; } }
L_00310CC0:
    set32(c.r[2], 0u + 25500u);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    st16((c.r[3].w[0] + 68u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 68u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00310CF4; } }
L_00310CD4:
    set32(c.r[2], c.r[16].w[0] << 1);
    c.budget -= 1;
L_00310CD8:
    set32(c.r[3], 0u + 25500u);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0] + 68u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00310CF4; } }
L_00310CE8:
    set32(c.r[3], 0u + 25500u);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0] + 68u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00310CF4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00310C4Cu | kUnwind; return; } goto L_00310C4C; } }
L_00310D04:
    set32(c.r[2], c.r[21].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0] + 80u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00310D04u | kUnwind; return; } goto L_00310D04; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.r[1].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 2;
L_00310D28:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] << 5);  if (t) { goto L_00310D54; } }
    set32(c.r[2], c.r[16].w[0] << 5);
    set32(c.r[6], 0u + 32u);
    set32(c.r[17], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310D4Cu); set32(c.r[5], c.r[2].w[0] + 160u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x00310D4Cu) [[unlikely]] return; }
L_00310D4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[16].w[0]));  if (t) { goto L_00310D94; } }
L_00310D54:
    set32(c.r[5], 0u + 32u);
    set32(c.r[17], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310D64u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x00310D64u) [[unlikely]] return; }
L_00310D64:
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[3], 0u + 1u);
    st32((c.r[17].w[0] + 4u), 0u);
    set32(c.r[5], 0u + 118u);
    st8((c.r[17].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], 0u + 5u);
    st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[3], 0u + 255u);
    st32((c.r[17].w[0] + 12u), c.r[5].w[0]);
    st8((c.r[17].w[0] + 16u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[17].w[0] + 17u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 22u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 12;
L_00310D94:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00310D28u | kUnwind; return; } goto L_00310D28; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[30].d[0] != c.r[3].d[0];  if (t) { goto L_00310DB8; } }
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[20].w[0] + 32u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00310DB8:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 976u);  c.pc = t; return; }
L_00310DF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x474F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[7].d[0] = c.r[2].d[0] | 16970ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310E0Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 200u, depth + 1u); else { c.pc = 0x001B1A30u; return; } if (c.pc != 0x00310E0Cu) [[unlikely]] return; }
L_00310E0C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 18256u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 96u), 0u);
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00310E30u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00310E30u) [[unlikely]] return; }
L_00310E30:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00310E50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00310EC4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 18256u);
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00310E9C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00310E9C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00310E9Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00310E9Cu) [[unlikely]] return; }
L_00310E9C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310EACu); st32((c.r[17].w[0] + 96u), 0u);  if (depth < kMaxDepth) unit_002C(c, 203u, depth + 1u); else { c.pc = 0x001B1AC0u; return; } if (c.pc != 0x00310EACu) [[unlikely]] return; }
L_00310EAC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00310EC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310EC4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00310EC4u) [[unlikely]] return; }
L_00310EC4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00310EC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00310EE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[1].w[0] + 26176u)));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310F10u); set32(c.r[5], c.r[2].w[0] - 2000u);  if (depth < kMaxDepth) unit_0024(c, 249u, depth + 1u); else { c.pc = 0x00191DE0u; return; } if (c.pc != 0x00310F10u) [[unlikely]] return; }
L_00310F10:
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310F20u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 92u, depth + 1u); else { c.pc = 0x00225420u; return; } if (c.pc != 0x00310F20u) [[unlikely]] return; }
L_00310F20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00310F30:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[1].w[0] + 31072u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 7;
    { set32(c.r[4], ld32((c.r[1].w[0] + 4492u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021E250u | kUnwind; return; } [[clang::musttail]] return unit_0047(c, 171u, depth); }
L_00310F50:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 48u));
    set32(c.r[3], c.r[2].w[0] - 10000u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[2], 0u + 100u);  if (t) { goto L_00310F78; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_00310F6C; } }
    breakpoint(c, 0x00310F68u);
    c.budget -= 1;
L_00310F6C:
    c.r[4].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(32ll) ? 1ull : 0ull;  if (t) { goto L_00310F80; } }
L_00310F78:
    set32(c.r[4], 0u - 1u);
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(32ll) ? 1ull : 0ull;
    c.budget -= 2;
L_00310F80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] << 3);  if (t) { goto L_00310F90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00310FB0; } }
L_00310F90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + 25680u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 944u);
    c.budget -= 8;
L_00310FB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00310FC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[5].w[0] + 8u), 0u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[5].w[0] + 4u), 0u);
    st32((c.r[5].w[0]), 0u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310FF8u); st32((c.r[5].w[0] + 12u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0084(c, 120u, depth + 1u); else { c.pc = 0x00310F50u; return; } if (c.pc != 0x00310FF8u) [[unlikely]] return; }
L_00310FF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { goto L_00311008; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003110A8; } }
L_00311008:
    set32(c.r[5], c.r[29].w[0] + 16u);
    set32(c.r[3], c.r[3].w[0] - 7184u);
    set32(c.r[7], c.r[29].w[0] + 24u);
    ld128((c.r[3].w[0]) & ~15u, c.r[4]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42FE0000u);
    st128((c.r[5].w[0]) & ~15u, c.r[4]);
    c.f[3] = c.r[3].w[0];
    c.f[0] = ld32((c.r[29].w[0] + 16u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 123u)));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 1u, c.f[1], c.f[3]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 16u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 139u)));
    c.f[0] = ld32((c.r[7].w[0]));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[2], 0u + 1u);
    fpu_div(c, 1u, c.f[1], c.f[3]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[7].w[0]), c.f[0]);
    c.f[2] = ld32((c.r[6].w[0] + 356u));
    c.f[1] = ld32((c.r[29].w[0] + 16u));
    c.f[0] = ld32((c.r[29].w[0] + 20u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[29].w[0] + 16u), c.f[1]);
    st32((c.r[29].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0]));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[7].w[0]), c.f[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[3]);
    st128((c.r[8].w[0]) & ~15u, c.r[3]);
    c.budget -= 40;
L_003110A8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003110C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    c.r[11].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[5].w[0] + 8u), 0u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[5].w[0]), 0u);
    c.f[0] = ld32((c.r[1].w[0] - 14272u));
    st32((c.r[5].w[0] + 4u), c.f[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311100u); st32((c.r[5].w[0] + 12u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0084(c, 120u, depth + 1u); else { c.pc = 0x00310F50u; return; } if (c.pc != 0x00311100u) [[unlikely]] return; }
L_00311100:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { goto L_00311110; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0031120C; } }
L_00311110:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[3].w[0] - 7168u);
    set32(c.r[9], c.r[29].w[0] + 32u);
    ld128((c.r[3].w[0]) & ~15u, c.r[8]);
    set32(c.r[7], c.r[7].w[0] - 7152u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[10], c.r[29].w[0] + 40u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42FE0000u);
    st128((c.r[9].w[0]) & ~15u, c.r[8]);
    c.f[5] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[3].w[0];
    ld128((c.r[7].w[0]) & ~15u, c.r[3]);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 140u)));
    c.f[2] = ld32((c.r[1].w[0] - 14280u));
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 124u)));
    c.f[4] = c.r[3].w[0];
    c.f[4] = fp::cvt_s_w(c.f[4]);
    c.f[1] = c.r[2].w[0];
    fpu_div(c, 4u, c.f[4], c.f[5]);
    set32(c.r[2], 0u + 1u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 1u, c.f[1], c.f[5]);
    c.f[1] = fp::add(c.f[3], c.f[1]);
    c.f[1] = fp::sub(c.f[1], c.f[3]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.f[3], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[4] = fp::add(c.f[3], c.f[4]);
    c.f[1] = fp::sub(c.f[4], c.f[3]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    st32((c.r[29].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[10].w[0]));
    c.f[1] = fp::add(c.f[3], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[10].w[0]), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 16u));
    c.f[1] = ld32((c.r[29].w[0] + 32u));
    c.f[0] = ld32((c.r[29].w[0] + 36u));
    c.f[2] = fp::mul(c.f[2], c.f[4]);
    st32((c.r[29].w[0] + 16u), c.f[2]);
    c.f[2] = ld32((c.r[6].w[0] + 356u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[29].w[0] + 32u), c.f[1]);
    st32((c.r[29].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[10].w[0]));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[10].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[3]);
    c.f[0] = ld32((c.r[29].w[0] + 20u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[29].w[0] + 16u), c.f[1]);
    st32((c.r[29].w[0] + 20u), c.f[0]);
    st128((c.r[11].w[0]) & ~15u, c.r[3]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[3]);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.budget -= 63;
L_0031120C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00311220:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311248u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 120u, depth + 1u); else { c.pc = 0x00310F50u; return; } if (c.pc != 0x00311248u) [[unlikely]] return; }
L_00311248:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0031125C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00311624; } }
L_0031125C:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 159u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003114A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] - 7136u);
    set32(c.r[10], c.r[29].w[0] + 112u);
    ld128((c.r[2].w[0]) & ~15u, c.r[9]);
    set32(c.r[7], c.r[7].w[0] - 7120u);
    set32(c.r[8], c.r[29].w[0] + 96u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    st128((c.r[10].w[0]) & ~15u, c.r[9]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    ld128((c.r[7].w[0]) & ~15u, c.r[7]);
    set32(c.r[2], c.r[2].w[0] - 7104u);
    st128((c.r[8].w[0]) & ~15u, c.r[7]);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 155u));
    c.budget -= 18;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[4], c.r[2].w[0] >> 1);  if (t) { goto L_003112C0; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003112D8; } }
    set32(c.r[4], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_003112C0:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_003112D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 156u));
    c.f[0] = c.r[4].w[0];
    fpu_div(c, 3u, c.f[1], c.f[0]);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00311308; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00311324; } }
L_00311308:
    set32(c.r[4], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_00311324:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[2], c.r[29].w[0] + 96u);
    c.f[0] = c.r[4].w[0];
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[7], c.r[29].w[0] + 64u);
    fpu_div(c, 2u, c.f[1], c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 112u);
    st128((c.r[7].w[0]) & ~15u, c.r[2]);
    ld128((c.r[7].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[7].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[1] = ld32((c.r[29].w[0] + 76u));
    c.f[0] = ld32((c.r[29].w[0] + 124u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 76u), c.f[0]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.f[3]);
    c.vu0.vf[5] = c.r[2];
    vu::mulbc(c.vu0, 14u, 4u, 4u, c.vu0.vf[5].w[0]);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.r[29].w[0] + 80u);
    set32(c.r[8], c.r[29].w[0] + 48u);
    set32(c.r[7], c.r[29].w[0] + 112u);
    c.f[0] = ld32((c.r[29].w[0] + 76u));
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    st32((c.r[29].w[0] + 76u), c.f[0]);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    ld128((c.r[8].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[7].w[0]) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[8].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[1] = ld32((c.r[29].w[0] + 60u));
    c.f[0] = ld32((c.r[29].w[0] + 124u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 60u), c.f[0]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.f[3]);
    c.vu0.vf[5] = c.r[2];
    vu::mulbc(c.vu0, 14u, 4u, 4u, c.vu0.vf[5].w[0]);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.r[29].w[0] + 48u);
    set32(c.r[8], c.r[29].w[0] + 32u);
    set32(c.r[7], c.r[29].w[0] + 64u);
    c.f[0] = ld32((c.r[29].w[0] + 60u));
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    st32((c.r[29].w[0] + 60u), c.f[0]);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    ld128((c.r[8].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[7].w[0]) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[8].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.f[1] = ld32((c.r[29].w[0] + 44u));
    c.f[0] = ld32((c.r[29].w[0] + 76u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 44u), c.f[0]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.f[2]);
    c.vu0.vf[5] = c.r[2];
    vu::mulbc(c.vu0, 14u, 4u, 4u, c.vu0.vf[5].w[0]);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.r[29].w[0] + 64u);
    c.f[0] = ld32((c.r[29].w[0] + 44u));
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[29].w[0] + 44u), c.f[0]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.r[29].w[0] + 112u);
    c.f[1] = ld32((c.r[29].w[0] + 44u));
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.f[0] = ld32((c.r[29].w[0] + 76u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 44u), c.f[0]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    c.f[1] = ld32((c.r[29].w[0] + 44u));
    c.f[0] = ld32((c.r[29].w[0] + 124u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 44u), c.f[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[2]);
    c.budget -= 97;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 128u) & ~15u, c.r[2]);  if (t) { goto L_003114C4; } }
L_003114A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] - 7088u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[2]);
    c.budget -= 7;
L_003114C4:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 127u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42FE0000u);
    c.f[3] = c.r[2].w[0];
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 143u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 126u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = c.r[8].w[0];
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 142u)));
    c.f[1] = c.r[7].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    c.f[4] = fp::add(c.f[2], c.f[0]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = c.r[4].w[0];
    fpu_div(c, 1u, c.f[1], c.f[3]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    c.f[5] = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.f[2], c.f[0]);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[4]));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    c.budget -= 31;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[0] = fp::add(c.f[2], c.f[0]);  if (t) { goto L_00311544; } }
    c.f[4] = c.f[1];
    c.budget -= 1;
L_00311544:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[5]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_00311558; } }
    c.f[5] = c.f[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 2;
L_00311558:
    c.f[2] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[5]) < fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00311580; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 14288u));
    c.f[1] = fp::sub(c.f[5], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[5] = fp::add(c.f[2], c.f[0]);
    c.budget -= 5;
L_00311580:
    c.f[1] = ld32((c.r[29].w[0] + 128u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[29].w[0] + 136u));
    c.f[2] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[5]) <= fp::key(c.f[2]));
    c.f[1] = fp::mul(c.f[1], c.f[4]);
    c.f[0] = fp::mul(c.f[0], c.f[5]);
    st32((c.r[29].w[0] + 128u), c.f[1]);
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 136u), c.f[0]);  if (t) { goto L_003115C0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 14296u));
    c.f[1] = fp::sub(c.f[5], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[5] = fp::add(c.f[2], c.f[0]);
    c.budget -= 5;
L_003115C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], 0u + 1u);
    c.f[4] = ld32((c.r[1].w[0] - 14304u));
    c.f[0] = ld32((c.r[29].w[0] + 140u));
    c.f[3] = ld32((c.r[29].w[0] + 128u));
    c.f[2] = ld32((c.r[29].w[0] + 136u));
    c.f[1] = ld32((c.r[29].w[0] + 132u));
    c.f[0] = fp::add(c.f[4], c.f[0]);
    c.f[0] = fp::mul(c.f[5], c.f[0]);
    c.f[0] = fp::sub(c.f[0], c.f[4]);
    st32((c.r[29].w[0] + 140u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 140u));
    c.f[5] = ld32((c.r[5].w[0] + 356u));
    c.f[0] = fp::add(c.f[4], c.f[0]);
    c.f[0] = fp::mul(c.f[5], c.f[0]);
    c.f[3] = fp::mul(c.f[3], c.f[5]);
    c.f[2] = fp::mul(c.f[2], c.f[5]);
    c.f[1] = fp::mul(c.f[1], c.f[5]);
    c.f[0] = fp::sub(c.f[0], c.f[4]);
    st32((c.r[29].w[0] + 128u), c.f[3]);
    st32((c.r[29].w[0] + 136u), c.f[2]);
    st32((c.r[29].w[0] + 132u), c.f[1]);
    st32((c.r[29].w[0] + 140u), c.f[0]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[3]);
    st128((c.r[6].w[0]) & ~15u, c.r[3]);
    c.budget -= 25;
L_00311624:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00311630:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0]), 0u);
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_00311654; } }
    set32(c.r[5], c.r[5].w[0] + 436u);
    c.budget -= 1;
L_00311654:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45440000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311664u); c.r[5].d[0] = c.r[2].d[0] | 19531ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x00311664u) [[unlikely]] return; }
L_00311664:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00311674; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_00311678; } }
L_00311674:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00311678:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00311688; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0031168C; } }
L_00311688:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0031168C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003116A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[5].w[0] + 8u), 0u);
    st32((c.r[5].w[0] + 4u), 0u);
    st32((c.r[5].w[0]), 0u);
    c.budget -= 12;
    { const bool t = c.r[6].d[0] == 0ull; st32((c.r[5].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_003116D4; } }
    set32(c.r[6], c.r[6].w[0] + 436u);
    c.budget -= 1;
L_003116D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45440000u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003116E4u); c.r[5].d[0] = c.r[2].d[0] | 19531ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x003116E4u) [[unlikely]] return; }
L_003116E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003116F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_003116F8; } }
L_003116F4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003116F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00311708; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0031170C; } }
L_00311708:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0031170C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00311720:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00311760; } }
L_00311738:
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 1728u);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_00311758; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311758u);  if (depth < kMaxDepth) unit_0084(c, 166u, depth + 1u); else { c.pc = 0x00311C00u; return; } if (c.pc != 0x00311758u) [[unlikely]] return; }
L_00311758:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_00311760:
    c.r[3].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00311738u | kUnwind; return; } goto L_00311738; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st8((c.r[1].w[0] - 1696u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00311790:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003117ACu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x003117ACu) [[unlikely]] return; }
L_003117AC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003117C0u); st32((c.r[29].w[0] + 76u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x003117C0u) [[unlikely]] return; }
L_003117C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - 1728u);  if (t) { goto L_00311818; } }
L_003117D0:
    set32(c.r[18], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 296u);  if (t) { goto L_00311814; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003117E8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003117E8u) [[unlikely]] return; }
L_003117E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003117F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003117F8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 145u, depth + 1u); else { c.pc = 0x003118F0u; return; } if (c.pc != 0x003117F8u) [[unlikely]] return; }
L_003117F8:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031180Cu); st8((c.r[1].w[0] - 1696u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0031180Cu) [[unlikely]] return; }
L_0031180C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00311830; } }
L_00311814:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00311818:
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003117D0u | kUnwind; return; } goto L_003117D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031182Cu); set32(c.r[4], ld32((c.r[29].w[0] + 76u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0031182Cu) [[unlikely]] return; }
L_0031182C:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_00311830:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00311850:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00311870; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003118D0; } }
L_00311870:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 1728u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00311894; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003118D4; } }
L_00311894:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031189Cu);  if (depth < kMaxDepth) unit_0084(c, 170u, depth + 1u); else { c.pc = 0x00311CA0u; return; } if (c.pc != 0x0031189Cu) [[unlikely]] return; }
L_0031189C:
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003118CC; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_003118BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003118BCu);  if (depth < kMaxDepth) unit_0084(c, 166u, depth + 1u); else { c.pc = 0x00311C00u; return; } if (c.pc != 0x003118BCu) [[unlikely]] return; }
L_003118BC:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st8((c.r[1].w[0] - 1696u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_003118CC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003118D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003118D4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003118F0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[3].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00311934; } }
L_00311924:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 4;
L_00311934:
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(74ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00311924u | kUnwind; return; } goto L_00311924; } }
    c.r[2].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[3], c.r[2].w[0] - 10000u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[4], 0u - 1u);  if (t) { goto L_00311964; } }
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_00311960; } }
    breakpoint(c, 0x0031195Cu);
    c.budget -= 1;
L_00311960:
    c.r[4].d[0] = c.lo.d[0];
    c.budget -= 1;
L_00311964:
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[2], 0u + 100u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[2], 0u + 30u);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_0031198C; } }
    set32(c.r[22], 0u + 1u);
    c.budget -= 1;
L_0031198C:
    c.r[3].d[0] = c.r[3].d[0] ^ 90ull;
    set32(c.r[2], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[2].w[0] - c.r[4].w[0]);
    c.r[23].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    set32(c.r[3], c.r[4].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 25680u);
    set32(c.r[3], c.r[3].w[0] << 5);
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[20], c.r[2].w[0] + 16u);
    set32(c.r[2], c.r[18].w[0] << 4);
    c.budget -= 14;
L_003119C4:
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = ld8((c.r[2].w[0] + 374u));
    set32(c.r[17], c.r[2].w[0] + 368u);
    c.r[5].d[0] = c.r[4].d[0] ^ 0ull;
    c.budget -= 6;
    { const bool t = c.r[23].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_003119FC; } }
    set32(c.r[2], c.r[4].w[0] - 18u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003119F0; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003119F0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003119FC; } }
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003119FC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[22].d[0] != c.r[3].d[0];  if (t) { goto L_00311A24; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 13u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00311A3C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_00311A3C; } }
L_00311A24:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 13u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00311A3C; } }
    c.r[5].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_00311A3C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00311AEC; } }
    c.r[5].d[0] = ld16((c.r[17].w[0] + 4u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311A50u); c.r[4].d[0] = c.r[4].d[0] & 255ull;  if (depth < kMaxDepth) unit_0028(c, 221u, depth + 1u); else { c.pc = 0x001A2130u; return; } if (c.pc != 0x00311A50u) [[unlikely]] return; }
L_00311A50:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00311A98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311A64u);  if (depth < kMaxDepth) unit_0011(c, 255u, depth + 1u); else { c.pc = 0x001475B0u; return; } if (c.pc != 0x00311A64u) [[unlikely]] return; }
L_00311A64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 32u);  if (t) { goto L_00311A98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311A74u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00311A74u) [[unlikely]] return; }
L_00311A74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[19].w[0] << 2);  if (t) { goto L_00311A8C; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311A88u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 174u, depth + 1u); else { c.pc = 0x00311D30u; return; } if (c.pc != 0x00311A88u) [[unlikely]] return; }
L_00311A88:
    set32(c.r[3], c.r[19].w[0] << 2);
    c.budget -= 1;
L_00311A8C:
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_00311A98:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 7u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311AA4u); c.r[4].d[0] = ld8((c.r[17].w[0] + 6u));  if (depth < kMaxDepth) unit_0028(c, 223u, depth + 1u); else { c.pc = 0x001A2170u; return; } if (c.pc != 0x00311AA4u) [[unlikely]] return; }
L_00311AA4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00311AEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311AB8u);  if (depth < kMaxDepth) unit_0011(c, 255u, depth + 1u); else { c.pc = 0x001475B0u; return; } if (c.pc != 0x00311AB8u) [[unlikely]] return; }
L_00311AB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 32u);  if (t) { goto L_00311AEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311AC8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00311AC8u) [[unlikely]] return; }
L_00311AC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[19].w[0] << 2);  if (t) { goto L_00311AE0; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311ADCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 174u, depth + 1u); else { c.pc = 0x00311D30u; return; } if (c.pc != 0x00311ADCu) [[unlikely]] return; }
L_00311ADC:
    set32(c.r[3], c.r[19].w[0] << 2);
    c.budget -= 1;
L_00311AE0:
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_00311AEC:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[18].w[0] << 4);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003119C4u | kUnwind; return; } goto L_003119C4; } }
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_00311B68; } }
    c.r[6].d[0] = ld8((c.r[20].w[0] + 1087u));
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311B14u); set32(c.r[5], 0u + 35u);  if (depth < kMaxDepth) unit_0087(c, 74u, depth + 1u); else { c.pc = 0x0031C7D0u; return; } if (c.pc != 0x00311B14u) [[unlikely]] return; }
L_00311B14:
    c.r[5].d[0] = ld16((c.r[29].w[0] + 164u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311B20u); c.r[4].d[0] = ld8((c.r[29].w[0] + 166u));  if (depth < kMaxDepth) unit_0028(c, 221u, depth + 1u); else { c.pc = 0x001A2130u; return; } if (c.pc != 0x00311B20u) [[unlikely]] return; }
L_00311B20:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00311B68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311B34u);  if (depth < kMaxDepth) unit_0011(c, 255u, depth + 1u); else { c.pc = 0x001475B0u; return; } if (c.pc != 0x00311B34u) [[unlikely]] return; }
L_00311B34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 32u);  if (t) { goto L_00311B68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311B44u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00311B44u) [[unlikely]] return; }
L_00311B44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[19].w[0] << 2);  if (t) { goto L_00311B5C; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311B58u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 174u, depth + 1u); else { c.pc = 0x00311D30u; return; } if (c.pc != 0x00311B58u) [[unlikely]] return; }
L_00311B58:
    set32(c.r[3], c.r[19].w[0] << 2);
    c.budget -= 1;
L_00311B5C:
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_00311B68:
    c.r[6].d[0] = ld8((c.r[20].w[0] + 1087u));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull; c.r[2].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_00311BD4; } }
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311B80u); set32(c.r[5], 0u + 36u);  if (depth < kMaxDepth) unit_0087(c, 74u, depth + 1u); else { c.pc = 0x0031C7D0u; return; } if (c.pc != 0x00311B80u) [[unlikely]] return; }
L_00311B80:
    c.r[5].d[0] = ld16((c.r[29].w[0] + 148u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311B8Cu); c.r[4].d[0] = ld8((c.r[29].w[0] + 150u));  if (depth < kMaxDepth) unit_0028(c, 221u, depth + 1u); else { c.pc = 0x001A2130u; return; } if (c.pc != 0x00311B8Cu) [[unlikely]] return; }
L_00311B8C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00311BD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311BA0u);  if (depth < kMaxDepth) unit_0011(c, 255u, depth + 1u); else { c.pc = 0x001475B0u; return; } if (c.pc != 0x00311BA0u) [[unlikely]] return; }
L_00311BA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 32u);  if (t) { goto L_00311BD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311BB0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00311BB0u) [[unlikely]] return; }
L_00311BB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[19].w[0] << 2);  if (t) { goto L_00311BC8; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311BC4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 174u, depth + 1u); else { c.pc = 0x00311D30u; return; } if (c.pc != 0x00311BC4u) [[unlikely]] return; }
L_00311BC4:
    set32(c.r[3], c.r[19].w[0] << 2);
    c.budget -= 1;
L_00311BC8:
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_00311BD0:
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_00311BD4:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00311C00:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[19].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00311C80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00311C5C; } }
L_00311C2C:
    set32(c.r[16], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00311C54; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00311C54; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00311C54u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00311C54u) [[unlikely]] return; }
L_00311C54:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_00311C5C:
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(74ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00311C2Cu | kUnwind; return; } goto L_00311C2C; } }
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00311C84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311C80u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00311C80u) [[unlikely]] return; }
L_00311C80:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00311C84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00311CA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00311D04; } }
L_00311CC0:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00311D14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311CD8u); set32(c.r[4], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_0011(c, 177u, depth + 1u); else { c.pc = 0x00146C10u; return; } if (c.pc != 0x00311CD8u) [[unlikely]] return; }
L_00311CD8:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 8u);  if (t) { goto L_00311CF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311CECu);  if (depth < kMaxDepth) unit_0011(c, 182u, depth + 1u); else { c.pc = 0x00146C90u; return; } if (c.pc != 0x00311CECu) [[unlikely]] return; }
L_00311CEC:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00311CF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00311D00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00311D14; } }
L_00311D00:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00311D04:
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(74ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00311CC0u | kUnwind; return; } goto L_00311CC0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00311D14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00311D30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311D48u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 40u, depth + 1u); else { c.pc = 0x00148710u; return; } if (c.pc != 0x00311D48u) [[unlikely]] return; }
L_00311D48:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 18320u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00311D70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00311DB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 18320u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311DA0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 42u, depth + 1u); else { c.pc = 0x00148750u; return; } if (c.pc != 0x00311DA0u) [[unlikely]] return; }
L_00311DA0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00311DBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311DB8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00311DB8u) [[unlikely]] return; }
L_00311DB8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00311DBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00311DD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00311DE0:
    set32(c.r[29], c.r[29].w[0] - 368u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311E0Cu); set32(c.r[5], 0u + 30u);  if (depth < kMaxDepth) unit_0010(c, 29u, depth + 1u); else { c.pc = 0x00140690u; return; } if (c.pc != 0x00311E0Cu) [[unlikely]] return; }
L_00311E0C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 18832u);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311E20u); st32((c.r[18].w[0] + 16u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x00311E20u) [[unlikely]] return; }
L_00311E20:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311E34u); st32((c.r[29].w[0] + 364u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00311E34u) [[unlikely]] return; }
L_00311E34:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311E44u); set32(c.r[5], 0u + 894u);  if (depth < kMaxDepth) unit_0058(c, 46u, depth + 1u); else { c.pc = 0x00260440u; return; } if (c.pc != 0x00311E44u) [[unlikely]] return; }
L_00311E44:
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00311E58; } }
    set32(c.r[16], 0u + 3u);
    c.budget -= 1;
L_00311E58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311E60u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00311E60u) [[unlikely]] return; }
L_00311E60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00311EDC; } }
L_00311E68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311E70u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00311E70u) [[unlikely]] return; }
L_00311E70:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[3].d[0] = ld16((c.r[1].w[0] - 25464u));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311E94u); set32(c.r[19], c.r[2].w[0] << 4);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00311E94u) [[unlikely]] return; }
L_00311E94:
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.r[1].d[0] = 0ull | 40076ull;
    set32(c.r[19], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311EACu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 434u, depth + 1u); else { c.pc = 0x0033BFD0u; return; } if (c.pc != 0x00311EACu) [[unlikely]] return; }
L_00311EAC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311EB8u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0083(c, 89u, depth + 1u); else { c.pc = 0x0030CE00u; return; } if (c.pc != 0x00311EB8u) [[unlikely]] return; }
L_00311EB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311EC0u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00311EC0u) [[unlikely]] return; }
L_00311EC0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[3].d[0] = ld16((c.r[1].w[0] - 25464u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st16((c.r[1].w[0] - 25464u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 7;
L_00311EDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311EE4u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00311EE4u) [[unlikely]] return; }
L_00311EE4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 25464u));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00311E68u | kUnwind; return; } goto L_00311E68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311F04u); c.r[16].d[0] = c.r[16].d[0] & 65535ull;  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00311F04u) [[unlikely]] return; }
L_00311F04:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[4], 0u + 784u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311F18u); st16((c.r[1].w[0] - 25464u), static_cast<std::uint16_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00311F18u) [[unlikely]] return; }
L_00311F18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00311F28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311F28u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 235u, depth + 1u); else { c.pc = 0x00312320u; return; } if (c.pc != 0x00311F28u) [[unlikely]] return; }
L_00311F28:
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311F34u); set32(c.r[4], ld32((c.r[29].w[0] + 364u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00311F34u) [[unlikely]] return; }
L_00311F34:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 368u);  c.pc = t; return; }
L_00311F60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00311FD4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 18832u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00311FAC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00311FAC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00311FACu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00311FACu) [[unlikely]] return; }
L_00311FAC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311FBCu); st32((c.r[17].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_0010(c, 31u, depth + 1u); else { c.pc = 0x00140700u; return; } if (c.pc != 0x00311FBCu) [[unlikely]] return; }
L_00311FBC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00311FD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311FD4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00311FD4u) [[unlikely]] return; }
L_00311FD4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00311FD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00311FF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00312000:
    set32(c.r[29], c.r[29].w[0] - 352u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031201Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0031201Cu) [[unlikely]] return; }
L_0031201C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 25464u));
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00312048; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031203Cu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0031203Cu) [[unlikely]] return; }
L_0031203C:
    c.r[1].d[0] = 0ull | 40492ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[2].w[0] + c.r[1].w[0]);  if (t) { goto L_00312080; } }
L_00312048:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312050u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00312050u) [[unlikely]] return; }
L_00312050:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[3].d[0] = ld16((c.r[1].w[0] - 25464u));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312074u); set32(c.r[16], c.r[2].w[0] << 4);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00312074u) [[unlikely]] return; }
L_00312074:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[1].d[0] = 0ull | 40076ull;
    set32(c.r[17], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 3;
L_00312080:
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00312094u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00312094u) [[unlikely]] return; }
L_00312094:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00312304; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003120A4u); set32(c.r[4], ld32((c.r[18].w[0] + 12u)));  if (depth < kMaxDepth) unit_0084(c, 463u, depth + 1u); else { c.pc = 0x00313DE0u; return; } if (c.pc != 0x003120A4u) [[unlikely]] return; }
L_003120A4:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0031218C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00312100; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003120C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[18].w[0] + 16u)));  if (t) { goto L_0031223C; } }
L_003120C8:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 768u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003120E4; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003120E4u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_008E(c, 434u, depth + 1u); else { c.pc = 0x0033BFD0u; return; } if (c.pc != 0x003120E4u) [[unlikely]] return; }
L_003120E4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], 0u + 902u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003120F8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x003120F8u) [[unlikely]] return; }
L_003120F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00312238; } }
L_00312100:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312108u); set32(c.r[4], ld32((c.r[18].w[0] + 12u)));  if (depth < kMaxDepth) unit_0084(c, 464u, depth + 1u); else { c.pc = 0x00313DF0u; return; } if (c.pc != 0x00312108u) [[unlikely]] return; }
L_00312108:
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st8((c.r[2].w[0] + 24u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312120u); set32(c.r[16], 0u + 255u);  if (depth < kMaxDepth) unit_0084(c, 464u, depth + 1u); else { c.pc = 0x00313DF0u; return; } if (c.pc != 0x00312120u) [[unlikely]] return; }
L_00312120:
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st8((c.r[2].w[0] + 16u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312134u); set32(c.r[4], ld32((c.r[18].w[0] + 12u)));  if (depth < kMaxDepth) unit_0084(c, 467u, depth + 1u); else { c.pc = 0x00313EC0u; return; } if (c.pc != 0x00312134u) [[unlikely]] return; }
L_00312134:
    c.r[16].d[0] = c.r[2].d[0] << 56;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312140u); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00312140u) [[unlikely]] return; }
L_00312140:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[5], 0u + 902u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] - 25572u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312160u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x00312160u) [[unlikely]] return; }
L_00312160:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312168u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00312168u) [[unlikely]] return; }
L_00312168:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25572u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312184u); set32(c.r[5], 0u + 722u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x00312184u) [[unlikely]] return; }
L_00312184:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00312238; } }
L_0031218C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312194u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00312194u) [[unlikely]] return; }
L_00312194:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[6], ld32((c.r[1].w[0] - 25584u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003121ACu); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_008E(c, 383u, depth + 1u); else { c.pc = 0x0033B890u; return; } if (c.pc != 0x003121ACu) [[unlikely]] return; }
L_003121AC:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00312224; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003121C0u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_008D(c, 238u, depth + 1u); else { c.pc = 0x00336B70u; return; } if (c.pc != 0x003121C0u) [[unlikely]] return; }
L_003121C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 22u)));
    set32(c.r[16], c.r[3].w[0] << 5);
    set32(c.r[2], 0u + 255u);
    set32(c.r[3], c.r[16].w[0] + c.r[17].w[0]);
    st8((c.r[3].w[0] + 24u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003121DCu); st8((c.r[3].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x003121DCu) [[unlikely]] return; }
L_003121DC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[5].d[0] = ld16((c.r[17].w[0] + 28u));
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[4].d[0] = ld16((c.r[1].w[0] - 25584u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003121F4u); set32(c.r[6], 0u + 25500u);  if (depth < kMaxDepth) unit_001C(c, 285u, depth + 1u); else { c.pc = 0x00173260u; return; } if (c.pc != 0x003121F4u) [[unlikely]] return; }
L_003121F4:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[16].w[0] + c.r[17].w[0]);
    c.r[4].d[0] = c.r[2].d[0] ^ 1ull;
    set32(c.r[2], 0u + 3u);
    st8((c.r[3].w[0] + 25u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312210u); st32((c.r[3].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00312210u) [[unlikely]] return; }
L_00312210:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[16].w[0] + c.r[17].w[0]);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] - 25584u)));
    st32((c.r[3].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 5;
L_00312224:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], 0u + 902u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312238u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x00312238u) [[unlikely]] return; }
L_00312238:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 1;
L_0031223C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003122A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031224Cu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0031224Cu) [[unlikely]] return; }
L_0031224C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 25464u));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003122A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031226Cu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0031226Cu) [[unlikely]] return; }
L_0031226C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[3].d[0] = ld16((c.r[1].w[0] - 25464u));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312290u); set32(c.r[16], c.r[2].w[0] << 4);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00312290u) [[unlikely]] return; }
L_00312290:
    set32(c.r[4], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[1].d[0] = 0ull | 40076ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003122A4u); set32(c.r[5], c.r[2].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0083(c, 66u, depth + 1u); else { c.pc = 0x0030C910u; return; } if (c.pc != 0x003122A4u) [[unlikely]] return; }
L_003122A4:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003122C8; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003122C8; } }
    set32(c.r[25], ld32((c.r[18].w[0] + 8u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003122C8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003122C8u) [[unlikely]] return; }
L_003122C8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003122DCu); st32((c.r[29].w[0] + 348u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x003122DCu) [[unlikely]] return; }
L_003122DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003122E4u);  if (depth < kMaxDepth) unit_002A(c, 133u, depth + 1u); else { c.pc = 0x001A9520u; return; } if (c.pc != 0x003122E4u) [[unlikely]] return; }
L_003122E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003122ECu); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003122ECu) [[unlikely]] return; }
L_003122EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003122FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003122FCu);  if (depth < kMaxDepth) unit_0057(c, 96u, depth + 1u); else { c.pc = 0x0025CA50u; return; } if (c.pc != 0x003122FCu) [[unlikely]] return; }
L_003122FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312304u); set32(c.r[4], ld32((c.r[29].w[0] + 348u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00312304u) [[unlikely]] return; }
L_00312304:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 352u);  c.pc = t; return; }
L_00312320:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312340u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 298u, depth + 1u); else { c.pc = 0x0012E440u; return; } if (c.pc != 0x00312340u) [[unlikely]] return; }
L_00312340:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] + 18736u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 20u), 0u);
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0] + 28u), 0u);
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 40u), 0u);
    st32((c.r[16].w[0] + 64u), 0u);
    st32((c.r[16].w[0] + 72u), 0u);
    st32((c.r[16].w[0] + 76u), 0u);
    st32((c.r[16].w[0] + 80u), 0u);
    st32((c.r[16].w[0] + 760u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 764u), 0u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312388u); st32((c.r[16].w[0] + 768u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x00312388u) [[unlikely]] return; }
L_00312388:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031239Cu); st32((c.r[29].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0031239Cu) [[unlikely]] return; }
L_0031239C:
    set32(c.r[2], 0u + 16067u);
    set32(c.r[3], 0u + 15812u);
    st16((c.r[29].w[0] + 58u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x634D0000u);
    st16((c.r[29].w[0] + 56u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] - 14256u);
    set32(c.r[5], c.r[29].w[0] + 56u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003123C4u); c.r[6].d[0] = c.r[2].d[0] | 17488ull;  if (depth < kMaxDepth) unit_0087(c, 54u, depth + 1u); else { c.pc = 0x0031C5D0u; return; } if (c.pc != 0x003123C4u) [[unlikely]] return; }
L_003123C4:
    set32(c.r[2], 0u + 15811u);
    set32(c.r[3], 0u + 13312u);
    st16((c.r[29].w[0] + 54u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x63500000u);
    st16((c.r[29].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] - 14240u);
    set32(c.r[5], c.r[29].w[0] + 52u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003123ECu); c.r[6].d[0] = c.r[2].d[0] | 20566ull;  if (depth < kMaxDepth) unit_0087(c, 54u, depth + 1u); else { c.pc = 0x0031C5D0u; return; } if (c.pc != 0x003123ECu) [[unlikely]] return; }
L_003123EC:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003123F0:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 52u), 0u);
    c.r[2].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003123F0u | kUnwind; return; } goto L_003123F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312414u); set32(c.r[4], 0u + 56u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00312414u) [[unlikely]] return; }
L_00312414:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00312424; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312424u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 405u, depth + 1u); else { c.pc = 0x0026FBA0u; return; } if (c.pc != 0x00312424u) [[unlikely]] return; }
L_00312424:
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312434u); set32(c.r[4], ld32((c.r[29].w[0] + 60u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00312434u) [[unlikely]] return; }
L_00312434:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00312450:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00312700; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 18736u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003124A4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003124A4; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003124A4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003124A4u) [[unlikely]] return; }
L_003124A4:
    st32((c.r[17].w[0] + 20u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003124CC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003124CC; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003124CCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003124CCu) [[unlikely]] return; }
L_003124CC:
    st32((c.r[17].w[0] + 24u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003124F4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003124F4; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003124F4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003124F4u) [[unlikely]] return; }
L_003124F4:
    st32((c.r[17].w[0] + 28u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0031251C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0031251C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031251Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031251Cu) [[unlikely]] return; }
L_0031251C:
    st32((c.r[17].w[0] + 32u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00312544; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00312544; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00312544u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00312544u) [[unlikely]] return; }
L_00312544:
    st32((c.r[17].w[0] + 36u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0031256C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0031256C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031256Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031256Cu) [[unlikely]] return; }
L_0031256C:
    st32((c.r[17].w[0] + 40u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00312594; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00312594; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00312594u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00312594u) [[unlikely]] return; }
L_00312594:
    st32((c.r[17].w[0] + 44u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003125BC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003125BC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003125BCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003125BCu) [[unlikely]] return; }
L_003125BC:
    st32((c.r[17].w[0] + 48u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003125E4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003125E4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003125E4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003125E4u) [[unlikely]] return; }
L_003125E4:
    st32((c.r[17].w[0] + 64u), 0u);
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003125EC:
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[18], c.r[2].w[0] + 52u);  if (t) { goto L_00312608; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312608u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_007C(c, 298u, depth + 1u); else { c.pc = 0x002F2E30u; return; } if (c.pc != 0x00312608u) [[unlikely]] return; }
L_00312608:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[18].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003125ECu | kUnwind; return; } goto L_003125EC; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0031263C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0031263C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031263Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031263Cu) [[unlikely]] return; }
L_0031263C:
    st32((c.r[17].w[0] + 68u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00312664; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00312664; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00312664u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00312664u) [[unlikely]] return; }
L_00312664:
    st32((c.r[17].w[0] + 72u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0031268C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0031268C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031268Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031268Cu) [[unlikely]] return; }
L_0031268C:
    st32((c.r[17].w[0] + 76u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x634D0000u);  if (t) { goto L_003126B8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003126B4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003126B4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003126B4u) [[unlikely]] return; }
L_003126B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x634D0000u);
    c.budget -= 1;
L_003126B8:
    st32((c.r[17].w[0] + 80u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003126C4u); c.r[4].d[0] = c.r[2].d[0] | 17488ull;  if (depth < kMaxDepth) unit_0087(c, 60u, depth + 1u); else { c.pc = 0x0031C670u; return; } if (c.pc != 0x003126C4u) [[unlikely]] return; }
L_003126C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x63500000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003126D0u); c.r[4].d[0] = c.r[2].d[0] | 20566ull;  if (depth < kMaxDepth) unit_0087(c, 60u, depth + 1u); else { c.pc = 0x0031C670u; return; } if (c.pc != 0x003126D0u) [[unlikely]] return; }
L_003126D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003126DCu); set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));  if (depth < kMaxDepth) unit_002A(c, 144u, depth + 1u); else { c.pc = 0x001A9670u; return; } if (c.pc != 0x003126DCu) [[unlikely]] return; }
L_003126DC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003126E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 300u, depth + 1u); else { c.pc = 0x0012E490u; return; } if (c.pc != 0x003126E8u) [[unlikely]] return; }
L_003126E8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00312704; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312700u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00312700u) [[unlikely]] return; }
L_00312700:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00312704:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00312720:
    set32(c.r[29], c.r[29].w[0] - 304u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    set32(c.r[23], 0u - 1u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312758u); st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0084(c, 422u, depth + 1u); else { c.pc = 0x00313850u; return; } if (c.pc != 0x00312758u) [[unlikely]] return; }
L_00312758:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_003130DC; } }
    set32(c.r[5], 0u + 3u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312774u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002A(c, 139u, depth + 1u); else { c.pc = 0x001A95F0u; return; } if (c.pc != 0x00312774u) [[unlikely]] return; }
L_00312774:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], 0u + 272u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312788u); set32(c.r[16], c.r[2].w[0] + 624u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00312788u) [[unlikely]] return; }
L_00312788:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[4], 0u + 272u);  if (t) { goto L_003127C0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x634D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003127A0u); c.r[4].d[0] = c.r[2].d[0] | 17488ull;  if (depth < kMaxDepth) unit_0087(c, 63u, depth + 1u); else { c.pc = 0x0031C6B0u; return; } if (c.pc != 0x003127A0u) [[unlikely]] return; }
L_003127A0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003127ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 68u, depth + 1u); else { c.pc = 0x0031C750u; return; } if (c.pc != 0x003127ACu) [[unlikely]] return; }
L_003127AC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003127B8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x003127B8u) [[unlikely]] return; }
L_003127B8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 272u);
    c.budget -= 2;
L_003127C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003127C8u); st32((c.r[20].w[0] + 20u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003127C8u) [[unlikely]] return; }
L_003127C8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[4], 0u + 272u);  if (t) { goto L_00312800; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x634D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003127E0u); c.r[4].d[0] = c.r[2].d[0] | 17488ull;  if (depth < kMaxDepth) unit_0087(c, 63u, depth + 1u); else { c.pc = 0x0031C6B0u; return; } if (c.pc != 0x003127E0u) [[unlikely]] return; }
L_003127E0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003127ECu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0087(c, 68u, depth + 1u); else { c.pc = 0x0031C750u; return; } if (c.pc != 0x003127ECu) [[unlikely]] return; }
L_003127EC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003127F8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x003127F8u) [[unlikely]] return; }
L_003127F8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 272u);
    c.budget -= 2;
L_00312800:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312808u); st32((c.r[20].w[0] + 24u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00312808u) [[unlikely]] return; }
L_00312808:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[4], 0u + 272u);  if (t) { goto L_00312840; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x634D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312820u); c.r[4].d[0] = c.r[2].d[0] | 17488ull;  if (depth < kMaxDepth) unit_0087(c, 63u, depth + 1u); else { c.pc = 0x0031C6B0u; return; } if (c.pc != 0x00312820u) [[unlikely]] return; }
L_00312820:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031282Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0087(c, 68u, depth + 1u); else { c.pc = 0x0031C750u; return; } if (c.pc != 0x0031282Cu) [[unlikely]] return; }
L_0031282C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312838u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x00312838u) [[unlikely]] return; }
L_00312838:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 272u);
    c.budget -= 2;
L_00312840:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312848u); st32((c.r[20].w[0] + 28u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00312848u) [[unlikely]] return; }
L_00312848:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00312880; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x634D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312860u); c.r[4].d[0] = c.r[2].d[0] | 17488ull;  if (depth < kMaxDepth) unit_0087(c, 63u, depth + 1u); else { c.pc = 0x0031C6B0u; return; } if (c.pc != 0x00312860u) [[unlikely]] return; }
L_00312860:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031286Cu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0087(c, 68u, depth + 1u); else { c.pc = 0x0031C750u; return; } if (c.pc != 0x0031286Cu) [[unlikely]] return; }
L_0031286C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312878u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x00312878u) [[unlikely]] return; }
L_00312878:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_00312880:
    set32(c.r[5], 0u + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031288Cu); st32((c.r[20].w[0] + 44u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x0031288Cu) [[unlikely]] return; }
L_0031288C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312898u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00312898u) [[unlikely]] return; }
L_00312898:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003128B0; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[5].d[0] = ld64((c.r[3].w[0] + 16u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003128B0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x003128B0u) [[unlikely]] return; }
L_003128B0:
    st32((c.r[20].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003128BCu); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003128BCu) [[unlikely]] return; }
L_003128BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003128D4; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[5].d[0] = ld64((c.r[3].w[0] + 48u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003128D4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x003128D4u) [[unlikely]] return; }
L_003128D4:
    st32((c.r[20].w[0] + 40u), c.r[2].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003128DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003128E4u); set32(c.r[4], 0u + 1168u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003128E4u) [[unlikely]] return; }
L_003128E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] << 2);  if (t) { goto L_0031290C; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 24u)));
    set32(c.r[6], ld32((c.r[20].w[0] + 28u)));
    set32(c.r[7], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[8], ld32((c.r[20].w[0] + 32u)));
    set32(c.r[9], ld32((c.r[20].w[0] + 44u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312908u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007C(c, 257u, depth + 1u); else { c.pc = 0x002F2870u; return; } if (c.pc != 0x00312908u) [[unlikely]] return; }
L_00312908:
    set32(c.r[4], c.r[16].w[0] << 2);
    c.budget -= 1;
L_0031290C:
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[4], c.r[20].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[16].w[0]);
    st32((c.r[4].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[5], 0u + 320u);
    set32(c.r[4], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312938u); set32(c.r[6], c.r[2].w[0] + 102u);  if (depth < kMaxDepth) unit_007D(c, 52u, depth + 1u); else { c.pc = 0x002F47E0u; return; } if (c.pc != 0x00312938u) [[unlikely]] return; }
L_00312938:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003128DCu | kUnwind; return; } goto L_003128DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312950u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00312950u) [[unlikely]] return; }
L_00312950:
    c.r[1].d[0] = 0ull | 40072ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031295Cu); set32(c.r[21], c.r[2].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0031295Cu) [[unlikely]] return; }
L_0031295C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] - 25584u)));
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    c.r[3].d[0] = ld16((c.r[21].w[0]));
    set32(c.r[2], 0u + 3u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00312990; } }
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[20].w[0] + 476u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 768u), c.r[2].w[0]);  if (t) { goto L_00312994; } }
L_00312990:
    st32((c.r[20].w[0] + 476u), c.r[3].w[0]);
    c.budget -= 1;
L_00312994:
    st8((c.r[29].w[0] + 224u), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 240u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00312A14; } }
L_003129A4:
    set32(c.r[4], ld32((c.r[20].w[0] + 476u)));
    set32(c.r[2], c.r[16].w[0] << 5);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[5], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00312A00; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st8((c.r[29].w[0] + 224u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003129ECu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 52u, depth + 1u); else { c.pc = 0x00130530u; return; } if (c.pc != 0x003129ECu) [[unlikely]] return; }
L_003129EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00312A10; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 240u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00312A10; } }
L_00312A00:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 28u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00312A10; } }
    c.r[23].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00312A10:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00312A14:
    set32(c.r[3], ld32((c.r[20].w[0] + 476u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312A38u); set32(c.r[4], ld32((c.r[2].w[0] + 4u)));  if (depth < kMaxDepth) unit_008D(c, 238u, depth + 1u); else { c.pc = 0x00336B70u; return; } if (c.pc != 0x00312A38u) [[unlikely]] return; }
L_00312A38:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 22u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003129A4u | kUnwind; return; } goto L_003129A4; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 768u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00312AD0; } }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 224u));
    c.r[2].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00312AB0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], 0u + 721u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312A7Cu); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x00312A7Cu) [[unlikely]] return; }
L_00312A7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312A84u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00312A84u) [[unlikely]] return; }
L_00312A84:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25568u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00312AA4; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 472u), c.r[2].w[0]);  if (t) { goto L_00312AD4; } }
L_00312AA4:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 472u), c.r[2].w[0]);  if (t) { goto L_00312AD4; } }
L_00312AB0:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == c.r[2].d[0];  if (t) { goto L_00312AC4; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 472u), c.r[2].w[0]);  if (t) { goto L_00312AD4; } }
L_00312AC4:
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 472u), c.r[2].w[0]);  if (t) { goto L_00312AD4; } }
L_00312AD0:
    st32((c.r[20].w[0] + 472u), 0u);
    c.budget -= 1;
L_00312AD4:
    set32(c.r[2], ld32((c.r[20].w[0] + 768u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_00312B14; } }
    c.r[4].d[0] = ld16((c.r[21].w[0]));
    set32(c.r[2], 0u + 255u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[21].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 16u));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00312B14; } }
    st32((c.r[20].w[0] + 472u), c.r[5].w[0]);
    c.budget -= 1;
L_00312B14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312B1Cu); c.r[4].d[0] = ld16((c.r[21].w[0] + 2u));  if (depth < kMaxDepth) unit_008D(c, 246u, depth + 1u); else { c.pc = 0x00336C50u; return; } if (c.pc != 0x00312B1Cu) [[unlikely]] return; }
L_00312B1C:
    st32((c.r[20].w[0] + 480u), c.r[2].w[0]);
    set32(c.r[18], c.r[21].w[0] + 4u);
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    c.r[19].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 468u), c.r[2].w[0]);
    c.budget -= 5;
L_00312B30:
    set32(c.r[2], c.r[19].w[0] << 1);
    set32(c.r[4], c.r[29].w[0] + 300u);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[5], c.r[29].w[0] + 296u);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[6], c.r[18].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] - c.r[19].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[16], c.r[20].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 484u), 0u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312B60u); st32((c.r[16].w[0] + 488u), c.r[19].w[0]);  if (depth < kMaxDepth) unit_008E(c, 392u, depth + 1u); else { c.pc = 0x0033BA00u; return; } if (c.pc != 0x00312B60u) [[unlikely]] return; }
L_00312B60:
    set32(c.r[2], ld32((c.r[29].w[0] + 300u)));
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 496u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 296u)));
    st32((c.r[16].w[0] + 500u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0])));
    st32((c.r[16].w[0] + 504u), c.r[2].w[0]);
    c.budget -= 7;
L_00312B7C:
    set32(c.r[2], c.r[17].w[0] << 5);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[22], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    st32((c.r[22].w[0] + 508u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312B9Cu); set32(c.r[4], ld32((c.r[18].w[0])));  if (depth < kMaxDepth) unit_008D(c, 238u, depth + 1u); else { c.pc = 0x00336B70u; return; } if (c.pc != 0x00312B9Cu) [[unlikely]] return; }
L_00312B9C:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 16u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[22].w[0] + 532u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312B7Cu | kUnwind; return; } goto L_00312B7C; } }
    c.r[2].d[0] = ld16((c.r[21].w[0]));
    c.r[1].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00312BD8; } }
    c.r[2].d[0] = ld16((c.r[18].w[0] + 12u));
    st32((c.r[16].w[0] + 556u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[18].w[0] + 14u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 560u), c.r[2].w[0]);  if (t) { goto L_00312BE0; } }
L_00312BD8:
    st32((c.r[16].w[0] + 556u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 560u), c.r[2].w[0]);
    c.budget -= 2;
L_00312BE0:
    set32(c.r[17], 0u - 1u);
    st32((c.r[29].w[0] + 176u), 0u);
    st32((c.r[16].w[0] + 564u), c.r[17].w[0]);
    c.r[30].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 192u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 568u), c.r[17].w[0]);
    c.budget -= 6;
L_00312BF8:
    c.budget -= 2;
    { const bool t = c.r[30].d[0] != 0ull;  if (t) { goto L_00312C08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 300u)));  if (t) { goto L_00312C0C; } }
L_00312C08:
    set32(c.r[2], ld32((c.r[29].w[0] + 296u)));
    c.budget -= 1;
L_00312C0C:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_00312D34; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 14224u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00310000u < 16384u) { entry = entries_0084[(t - 0x00310000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00312C34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312C3Cu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00312C3Cu) [[unlikely]] return; }
L_00312C3C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = ld16((c.r[1].w[0] - 24836u));  if (t) { goto L_00312D30; } }
L_00312C4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312C54u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00312C54u) [[unlikely]] return; }
L_00312C54:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = ld16((c.r[1].w[0] - 24834u));  if (t) { goto L_00312D30; } }
L_00312C64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312C6Cu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00312C6Cu) [[unlikely]] return; }
L_00312C6C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312C7Cu); c.r[17].d[0] = ld16((c.r[1].w[0] - 24832u));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00312C7Cu) [[unlikely]] return; }
L_00312C7C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24830u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 192u), c.r[2].w[0]);  if (t) { goto L_00312D30; } }
L_00312C90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312C98u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00312C98u) [[unlikely]] return; }
L_00312C98:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312CA8u); c.r[17].d[0] = ld16((c.r[1].w[0] - 24828u));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00312CA8u) [[unlikely]] return; }
L_00312CA8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24826u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 192u), c.r[2].w[0]);  if (t) { goto L_00312D30; } }
L_00312CBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312CC4u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00312CC4u) [[unlikely]] return; }
L_00312CC4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = ld16((c.r[1].w[0] - 24824u));  if (t) { goto L_00312D30; } }
L_00312CD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312CDCu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00312CDCu) [[unlikely]] return; }
L_00312CDC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = ld16((c.r[1].w[0] - 24822u));  if (t) { goto L_00312D30; } }
L_00312CEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312CF4u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00312CF4u) [[unlikely]] return; }
L_00312CF4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = ld16((c.r[1].w[0] - 24820u));  if (t) { goto L_00312D30; } }
L_00312D04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312D0Cu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00312D0Cu) [[unlikely]] return; }
L_00312D0C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = ld16((c.r[1].w[0] - 24818u));  if (t) { goto L_00312D30; } }
L_00312D1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312D24u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00312D24u) [[unlikely]] return; }
L_00312D24:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[17].d[0] = ld16((c.r[1].w[0] - 24816u));
    c.budget -= 3;
L_00312D30:
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00312D34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[18].w[0])));  if (t) { goto L_00312D9C; } }
L_00312D3C:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[22].w[0] << 5);  if (t) { goto L_00312DB4; } }
    set32(c.r[4], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[17].d[0];  if (t) { goto L_00312D68; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00312D94; } }
L_00312D68:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 38u));
    set32(c.r[2], 0u + 255u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00312D94; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 564u), c.r[22].w[0]);
    c.budget -= 7;
L_00312D94:
    set32(c.r[22], c.r[22].w[0] + 1u);
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 2;
L_00312D9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312DA4u);  if (depth < kMaxDepth) unit_008D(c, 238u, depth + 1u); else { c.pc = 0x00336B70u; return; } if (c.pc != 0x00312DA4u) [[unlikely]] return; }
L_00312DA4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 22u)));
    c.r[2].d[0] = c.r[22].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312D3Cu | kUnwind; return; } goto L_00312D3C; } }
L_00312DB4:
    set32(c.r[3], ld32((c.r[16].w[0] + 564u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 568u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u - 1u);  if (t) { goto L_00312DC8; } }
    st32((c.r[16].w[0] + 568u), c.r[2].w[0]);
    c.budget -= 1;
L_00312DC8:
    set32(c.r[30], c.r[30].w[0] + 1u);
    c.r[2].d[0] = c.r[30].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312BF8u | kUnwind; return; } goto L_00312BF8; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 208u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312B30u | kUnwind; return; } goto L_00312B30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312DF0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 430u, depth + 1u); else { c.pc = 0x00313900u; return; } if (c.pc != 0x00312DF0u) [[unlikely]] return; }
L_00312DF0:
    set32(c.r[3], ld32((c.r[20].w[0] + 472u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00312E0C; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00312E14; } }
L_00312E0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 608u);  if (t) { goto L_00312E1C; } }
L_00312E14:
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[4], 0u + 608u);
    c.budget -= 2;
L_00312E1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312E24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00312E24u) [[unlikely]] return; }
L_00312E24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00312E74; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 48u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[3].d[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 476u)));
    set32(c.r[6], ld32((c.r[20].w[0] + 24u)));
    set32(c.r[7], ld32((c.r[20].w[0] + 28u)));
    set32(c.r[8], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[9], ld32((c.r[20].w[0] + 32u)));
    set32(c.r[10], ld32((c.r[20].w[0] + 40u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[11], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312E74u); set32(c.r[5], c.r[2].w[0] + 484u);  if (depth < kMaxDepth) unit_0085(c, 73u, depth + 1u); else { c.pc = 0x00314BD0u; return; } if (c.pc != 0x00312E74u) [[unlikely]] return; }
L_00312E74:
    st32((c.r[20].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312E80u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00312E80u) [[unlikely]] return; }
L_00312E80:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00312EDC; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 476u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0] + 504u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312EB4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 100u, depth + 1u); else { c.pc = 0x002B8770u; return; } if (c.pc != 0x00312EB4u) [[unlikely]] return; }
L_00312EB4:
    set32(c.r[10], ld32((c.r[20].w[0] + 64u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    c.r[11].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[20].w[0] + 84u);
    set32(c.r[6], 0u + 3u);
    set32(c.r[7], c.r[20].w[0] + 108u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312ED8u); c.r[8].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 471u, depth + 1u); else { c.pc = 0x00313FA0u; return; } if (c.pc != 0x00312ED8u) [[unlikely]] return; }
L_00312ED8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00312EDC:
    st32((c.r[20].w[0] + 80u), c.r[16].w[0]);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 224u));
    c.r[2].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00312F20; } }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 240u));
    set32(c.r[3], ld32((c.r[20].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st8((c.r[3].w[0] + 16u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00312F14; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 80u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 28u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00312F94; } }
L_00312F14:
    set32(c.r[2], ld32((c.r[20].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 28u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00312F94; } }
L_00312F20:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == c.r[2].d[0];  if (t) { goto L_00312F88; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 80u)));
    set32(c.r[4], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312F38u); st8((c.r[2].w[0] + 16u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00312F38u) [[unlikely]] return; }
L_00312F38:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[6], c.r[29].w[0] + 272u);
    set32(c.r[3], ld32((c.r[20].w[0] + 64u)));
    st128((c.r[6].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312F54u); c.r[5].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 17u, depth + 1u); else { c.pc = 0x002F4250u; return; } if (c.pc != 0x00312F54u) [[unlikely]] return; }
L_00312F54:
    set32(c.r[2], ld32((c.r[20].w[0] + 80u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00312F6Cu); c.r[5].d[0] = c.r[23].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00312F6Cu) [[unlikely]] return; }
L_00312F6C:
    set32(c.r[2], ld32((c.r[20].w[0] + 80u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312F7Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0085(c, 67u, depth + 1u); else { c.pc = 0x00314930u; return; } if (c.pc != 0x00312F7Cu) [[unlikely]] return; }
L_00312F7C:
    set32(c.r[2], ld32((c.r[20].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 28u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00312F94; } }
L_00312F88:
    set32(c.r[2], ld32((c.r[20].w[0] + 80u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00312F94:
    set32(c.r[4], ld32((c.r[20].w[0] + 48u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312FA0u); set32(c.r[5], ld32((c.r[29].w[0] + 208u)));  if (depth < kMaxDepth) unit_005B(c, 431u, depth + 1u); else { c.pc = 0x0026FF20u; return; } if (c.pc != 0x00312FA0u) [[unlikely]] return; }
L_00312FA0:
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 48u), c.r[3].w[0]);  if (t) { goto L_00313034; } }
L_00312FB8:
    set32(c.r[5], ld32((c.r[20].w[0] + 476u)));
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], ld32((c.r[20].w[0] + 468u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[20].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 508u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 3u);  if (t) { goto L_00313030; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312FF4u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00312FF4u) [[unlikely]] return; }
L_00312FF4:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[6], c.r[29].w[0] + 256u);
    set32(c.r[3], ld32((c.r[20].w[0] + 64u)));
    st128((c.r[6].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313010u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 17u, depth + 1u); else { c.pc = 0x002F4250u; return; } if (c.pc != 0x00313010u) [[unlikely]] return; }
L_00313010:
    set32(c.r[2], ld32((c.r[20].w[0] + 80u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00313028u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00313028u) [[unlikely]] return; }
L_00313028:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[20].w[0] + 468u)));  if (t) { goto L_0031306C; } }
L_00313030:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00313034:
    set32(c.r[3], ld32((c.r[20].w[0] + 476u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 7;
L_00313050:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313058u); set32(c.r[4], ld32((c.r[2].w[0] + 504u)));  if (depth < kMaxDepth) unit_008D(c, 238u, depth + 1u); else { c.pc = 0x00336B70u; return; } if (c.pc != 0x00313058u) [[unlikely]] return; }
L_00313058:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 22u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312FB8u | kUnwind; return; } goto L_00312FB8; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 468u)));
    c.budget -= 1;
L_0031306C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313074u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00313074u) [[unlikely]] return; }
L_00313074:
    c.r[4].d[0] = ld8((c.r[2].w[0] + 356u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313080u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_009C(c, 203u, depth + 1u); else { c.pc = 0x00371450u; return; } if (c.pc != 0x00313080u) [[unlikely]] return; }
L_00313080:
    set32(c.r[3], ld32((c.r[20].w[0] + 476u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00313098; } }
    set32(c.r[16], c.r[16].w[0] + 500u);
    c.budget -= 1;
L_00313098:
    set32(c.r[3], ld32((c.r[20].w[0] + 480u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_003130B4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003130B4; } }
    set32(c.r[16], c.r[16].w[0] + 500u);
    c.budget -= 1;
L_003130B4:
    set32(c.r[4], ld32((c.r[20].w[0] + 468u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003130C0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 204u, depth + 1u); else { c.pc = 0x003714C0u; return; } if (c.pc != 0x003130C0u) [[unlikely]] return; }
L_003130C0:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 64u)));
    st32((c.r[2].w[0] + 604u), c.r[16].w[0]);
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003130DCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003130DCu) [[unlikely]] return; }
L_003130DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 304u);  c.pc = t; return; }
L_00313110:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 80u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031312Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0085(c, 16u, depth + 1u); else { c.pc = 0x003142B0u; return; } if (c.pc != 0x0031312Cu) [[unlikely]] return; }
L_0031312C:
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313138u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_006E(c, 483u, depth + 1u); else { c.pc = 0x002BBC10u; return; } if (c.pc != 0x00313138u) [[unlikely]] return; }
L_00313138:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313140u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 318u, depth + 1u); else { c.pc = 0x0012E5E0u; return; } if (c.pc != 0x00313140u) [[unlikely]] return; }
L_00313140:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031314Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0084(c, 403u, depth + 1u); else { c.pc = 0x003135D0u; return; } if (c.pc != 0x0031314Cu) [[unlikely]] return; }
L_0031314C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00313160:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 80u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031317Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0085(c, 16u, depth + 1u); else { c.pc = 0x003142B0u; return; } if (c.pc != 0x0031317Cu) [[unlikely]] return; }
L_0031317C:
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313188u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 483u, depth + 1u); else { c.pc = 0x002BBC10u; return; } if (c.pc != 0x00313188u) [[unlikely]] return; }
L_00313188:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313190u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 321u, depth + 1u); else { c.pc = 0x0012E630u; return; } if (c.pc != 0x00313190u) [[unlikely]] return; }
L_00313190:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031319Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0084(c, 410u, depth + 1u); else { c.pc = 0x003136B0u; return; } if (c.pc != 0x0031319Cu) [[unlikely]] return; }
L_0031319C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003131B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 7;
L_003131CC:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003131D8u); set32(c.r[4], ld32((c.r[2].w[0] + 52u)));  if (depth < kMaxDepth) unit_007C(c, 310u, depth + 1u); else { c.pc = 0x002F3020u; return; } if (c.pc != 0x003131D8u) [[unlikely]] return; }
L_003131D8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003131CCu | kUnwind; return; } goto L_003131CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003131F0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 416u, depth + 1u); else { c.pc = 0x00313780u; return; } if (c.pc != 0x003131F0u) [[unlikely]] return; }
L_003131F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00313208; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00313208u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00313208u) [[unlikely]] return; }
L_00313208:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00313220:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031323Cu); set32(c.r[4], ld32((c.r[4].w[0] + 80u)));  if (depth < kMaxDepth) unit_0085(c, 49u, depth + 1u); else { c.pc = 0x003146C0u; return; } if (c.pc != 0x0031323Cu) [[unlikely]] return; }
L_0031323C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 760u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { goto L_003132B0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00313284; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 768u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003132AC; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031327Cu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_006E(c, 481u, depth + 1u); else { c.pc = 0x002BBBD0u; return; } if (c.pc != 0x0031327Cu) [[unlikely]] return; }
L_0031327C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 760u), c.r[16].w[0]);  if (t) { goto L_003132B0; } }
L_00313284:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00313298; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[2].w[0] + 28u)));  if (t) { goto L_003132A0; } }
L_00313298:
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 2;
L_003132A0:
    set32(c.r[4], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003132ACu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0085(c, 164u, depth + 1u); else { c.pc = 0x00315600u; return; } if (c.pc != 0x003132ACu) [[unlikely]] return; }
L_003132AC:
    st32((c.r[17].w[0] + 760u), c.r[16].w[0]);
    c.budget -= 1;
L_003132B0:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_00313444; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00313328; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003132D8u);  if (depth < kMaxDepth) unit_0085(c, 17u, depth + 1u); else { c.pc = 0x00314320u; return; } if (c.pc != 0x003132D8u) [[unlikely]] return; }
L_003132D8:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00313310; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 768u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00313310; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003132FCu); set32(c.r[4], ld32((c.r[17].w[0] + 64u)));  if (depth < kMaxDepth) unit_0085(c, 117u, depth + 1u); else { c.pc = 0x003150C0u; return; } if (c.pc != 0x003132FCu) [[unlikely]] return; }
L_003132FC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313308u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0084(c, 410u, depth + 1u); else { c.pc = 0x003136B0u; return; } if (c.pc != 0x00313308u) [[unlikely]] return; }
L_00313308:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 400u);  if (t) { goto L_00313434; } }
L_00313310:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00313320u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00313320u) [[unlikely]] return; }
L_00313320:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00313430; } }
L_00313328:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313330u);  if (depth < kMaxDepth) unit_0085(c, 50u, depth + 1u); else { c.pc = 0x00314710u; return; } if (c.pc != 0x00313330u) [[unlikely]] return; }
L_00313330:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_003133A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313344u); set32(c.r[4], ld32((c.r[17].w[0] + 80u)));  if (depth < kMaxDepth) unit_0085(c, 49u, depth + 1u); else { c.pc = 0x003146C0u; return; } if (c.pc != 0x00313344u) [[unlikely]] return; }
L_00313344:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00313388; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031335Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0085(c, 17u, depth + 1u); else { c.pc = 0x00314320u; return; } if (c.pc != 0x0031335Cu) [[unlikely]] return; }
L_0031335C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313364u); set32(c.r[4], ld32((c.r[17].w[0] + 64u)));  if (depth < kMaxDepth) unit_0085(c, 124u, depth + 1u); else { c.pc = 0x00315180u; return; } if (c.pc != 0x00313364u) [[unlikely]] return; }
L_00313364:
    set32(c.r[4], ld32((c.r[17].w[0] + 64u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313374u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0085(c, 137u, depth + 1u); else { c.pc = 0x00315310u; return; } if (c.pc != 0x00313374u) [[unlikely]] return; }
L_00313374:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313380u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0084(c, 403u, depth + 1u); else { c.pc = 0x003135D0u; return; } if (c.pc != 0x00313380u) [[unlikely]] return; }
L_00313380:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00313430; } }
L_00313388:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00313398u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00313398u) [[unlikely]] return; }
L_00313398:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00313430; } }
L_003133A0:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00313420; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 16u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00313420; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 468u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003133D0u); set32(c.r[4], ld32((c.r[17].w[0] + 48u)));  if (depth < kMaxDepth) unit_005B(c, 431u, depth + 1u); else { c.pc = 0x0026FF20u; return; } if (c.pc != 0x003133D0u) [[unlikely]] return; }
L_003133D0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00313420; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 28u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00313420; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_00313408; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313400u);  if (depth < kMaxDepth) unit_0085(c, 17u, depth + 1u); else { c.pc = 0x00314320u; return; } if (c.pc != 0x00313400u) [[unlikely]] return; }
L_00313400:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00313430; } }
L_00313408:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00313418u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00313418u) [[unlikely]] return; }
L_00313418:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00313430; } }
L_00313420:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00313430u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00313430u) [[unlikely]] return; }
L_00313430:
    set32(c.r[4], 0u + 400u);
    c.budget -= 1;
L_00313434:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031343Cu);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x0031343Cu) [[unlikely]] return; }
L_0031343C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 80u)));  if (t) { goto L_003134AC; } }
L_00313444:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003134A8; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_0031348C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313460u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0085(c, 17u, depth + 1u); else { c.pc = 0x00314320u; return; } if (c.pc != 0x00313460u) [[unlikely]] return; }
L_00313460:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313468u); set32(c.r[4], ld32((c.r[17].w[0] + 64u)));  if (depth < kMaxDepth) unit_0085(c, 124u, depth + 1u); else { c.pc = 0x00315180u; return; } if (c.pc != 0x00313468u) [[unlikely]] return; }
L_00313468:
    set32(c.r[4], ld32((c.r[17].w[0] + 64u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313478u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0085(c, 137u, depth + 1u); else { c.pc = 0x00315310u; return; } if (c.pc != 0x00313478u) [[unlikely]] return; }
L_00313478:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313484u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0084(c, 403u, depth + 1u); else { c.pc = 0x003135D0u; return; } if (c.pc != 0x00313484u) [[unlikely]] return; }
L_00313484:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 401u);  if (t) { goto L_003134A0; } }
L_0031348C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0031349C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031349Cu);  if (depth < kMaxDepth) unit_0085(c, 17u, depth + 1u); else { c.pc = 0x00314320u; return; } if (c.pc != 0x0031349Cu) [[unlikely]] return; }
L_0031349C:
    set32(c.r[4], 0u + 401u);
    c.budget -= 1;
L_003134A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003134A8u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x003134A8u) [[unlikely]] return; }
L_003134A8:
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 1;
L_003134AC:
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 20u), 0u);
    c.budget -= 2;
L_003134B4:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003134C4u); set32(c.r[4], ld32((c.r[2].w[0] + 52u)));  if (depth < kMaxDepth) unit_007C(c, 310u, depth + 1u); else { c.pc = 0x002F3020u; return; } if (c.pc != 0x003134C4u) [[unlikely]] return; }
L_003134C4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003134B4u | kUnwind; return; } goto L_003134B4; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003134F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 7;
L_0031350C:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313518u); set32(c.r[4], ld32((c.r[2].w[0] + 52u)));  if (depth < kMaxDepth) unit_007C(c, 310u, depth + 1u); else { c.pc = 0x002F3020u; return; } if (c.pc != 0x00313518u) [[unlikely]] return; }
L_00313518:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031350Cu | kUnwind; return; } goto L_0031350C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313530u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 416u, depth + 1u); else { c.pc = 0x00313780u; return; } if (c.pc != 0x00313530u) [[unlikely]] return; }
L_00313530:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00313548; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00313548u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00313548u) [[unlikely]] return; }
L_00313548:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00313560:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 7;
L_0031357C:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313588u); set32(c.r[4], ld32((c.r[2].w[0] + 52u)));  if (depth < kMaxDepth) unit_007C(c, 310u, depth + 1u); else { c.pc = 0x002F3020u; return; } if (c.pc != 0x00313588u) [[unlikely]] return; }
L_00313588:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031357Cu | kUnwind; return; } goto L_0031357C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003135A0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 416u, depth + 1u); else { c.pc = 0x00313780u; return; } if (c.pc != 0x003135A0u) [[unlikely]] return; }
L_003135A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003135B8; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003135B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003135B8u) [[unlikely]] return; }
L_003135B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003135D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 9;
L_003135F4:
    set32(c.r[5], 0u + 10u);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313608u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_007D(c, 18u, depth + 1u); else { c.pc = 0x002F4290u; return; } if (c.pc != 0x00313608u) [[unlikely]] return; }
L_00313608:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003135F4u | kUnwind; return; } goto L_003135F4; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 72u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 5u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00313638u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00313638u) [[unlikely]] return; }
L_00313638:
    c.r[2].d[0] = c.r[17].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 3u);  if (t) { goto L_00313688; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 68u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 5u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00313664u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00313664u) [[unlikely]] return; }
L_00313664:
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 5u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00313684u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00313684u) [[unlikely]] return; }
L_00313684:
    set32(c.r[4], 0u + 3u);
    c.budget -= 1;
L_00313688:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313690u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x00313690u) [[unlikely]] return; }
L_00313690:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003136B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 9;
L_003136D4:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003136E8u); set32(c.r[6], 0u + 10u);  if (depth < kMaxDepth) unit_007D(c, 29u, depth + 1u); else { c.pc = 0x002F4410u; return; } if (c.pc != 0x003136E8u) [[unlikely]] return; }
L_003136E8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003136D4u | kUnwind; return; } goto L_003136D4; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 72u)));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 10u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00313718u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00313718u) [[unlikely]] return; }
L_00313718:
    c.r[3].d[0] = c.r[17].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00313764; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 68u)));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 10u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00313744u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00313744u) [[unlikely]] return; }
L_00313744:
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 10u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00313764u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00313764u) [[unlikely]] return; }
L_00313764:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00313780:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 8;
L_003137A0:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003137B0u); set32(c.r[4], ld32((c.r[2].w[0] + 52u)));  if (depth < kMaxDepth) unit_007D(c, 40u, depth + 1u); else { c.pc = 0x002F4590u; return; } if (c.pc != 0x003137B0u) [[unlikely]] return; }
L_003137B0:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[18].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003137A0u | kUnwind; return; } goto L_003137A0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 68u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003137E4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003137E4u) [[unlikely]] return; }
L_003137E4:
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    c.r[3].d[0] = c.r[18].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00313804u); c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00313804u) [[unlikely]] return; }
L_00313804:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.r[3].d[0] = c.r[16].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00313824u); c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00313824u) [[unlikely]] return; }
L_00313824:
    c.r[3].d[0] = c.r[16].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00313850:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031386Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 135u, depth + 1u); else { c.pc = 0x001A9560u; return; } if (c.pc != 0x0031386Cu) [[unlikely]] return; }
L_0031386C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003138E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x634D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313880u); c.r[4].d[0] = c.r[2].d[0] | 17488ull;  if (depth < kMaxDepth) unit_0087(c, 63u, depth + 1u); else { c.pc = 0x0031C6B0u; return; } if (c.pc != 0x00313880u) [[unlikely]] return; }
L_00313880:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313888u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 65u, depth + 1u); else { c.pc = 0x0031C700u; return; } if (c.pc != 0x00313888u) [[unlikely]] return; }
L_00313888:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003138E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x63500000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031389Cu); c.r[4].d[0] = c.r[2].d[0] | 20566ull;  if (depth < kMaxDepth) unit_0087(c, 63u, depth + 1u); else { c.pc = 0x0031C6B0u; return; } if (c.pc != 0x0031389Cu) [[unlikely]] return; }
L_0031389C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003138A4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 65u, depth + 1u); else { c.pc = 0x0031C700u; return; } if (c.pc != 0x003138A4u) [[unlikely]] return; }
L_003138A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003138E0; } }
    set32(c.r[16], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003138B8u); set32(c.r[4], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_0011(c, 177u, depth + 1u); else { c.pc = 0x00146C10u; return; } if (c.pc != 0x003138B8u) [[unlikely]] return; }
L_003138B8:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 8u);  if (t) { goto L_003138D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003138CCu);  if (depth < kMaxDepth) unit_0011(c, 182u, depth + 1u); else { c.pc = 0x00146C90u; return; } if (c.pc != 0x003138CCu) [[unlikely]] return; }
L_003138CC:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003138D0:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003138E0; } }
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003138E0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00313900:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[17].w[0] << 1);
    c.budget -= 11;
L_0031392C:
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[19].w[0] + c.r[2].w[0]);  if (t) { goto L_00313988; } }
L_00313948:
    set32(c.r[2], ld32((c.r[19].w[0] + 468u)));
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 508u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 3u);  if (t) { goto L_00313984; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313964u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00313964u) [[unlikely]] return; }
L_00313964:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031397Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 17u, depth + 1u); else { c.pc = 0x002F4250u; return; } if (c.pc != 0x0031397Cu) [[unlikely]] return; }
L_0031397C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[17].w[0] << 2);  if (t) { goto L_003139A4; } }
L_00313984:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_00313988:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313990u); set32(c.r[4], ld32((c.r[16].w[0] + 504u)));  if (depth < kMaxDepth) unit_008D(c, 238u, depth + 1u); else { c.pc = 0x00336B70u; return; } if (c.pc != 0x00313990u) [[unlikely]] return; }
L_00313990:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 22u)));
    c.r[2].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[20].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00313948u | kUnwind; return; } goto L_00313948; } }
    set32(c.r[2], c.r[17].w[0] << 2);
    c.budget -= 1;
L_003139A4:
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003139B4u); set32(c.r[5], c.r[16].w[0] + 484u);  if (depth < kMaxDepth) unit_007C(c, 311u, depth + 1u); else { c.pc = 0x002F3120u; return; } if (c.pc != 0x003139B4u) [[unlikely]] return; }
L_003139B4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031392Cu | kUnwind; return; } goto L_0031392C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003139CCu); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003139CCu) [[unlikely]] return; }
L_003139CC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[4], 0u + 160u);  if (t) { goto L_00313A04; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x63500000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003139E4u); c.r[4].d[0] = c.r[2].d[0] | 20566ull;  if (depth < kMaxDepth) unit_0087(c, 63u, depth + 1u); else { c.pc = 0x0031C6B0u; return; } if (c.pc != 0x003139E4u) [[unlikely]] return; }
L_003139E4:
    set32(c.r[5], ld32((c.r[19].w[0] + 480u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003139F0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 68u, depth + 1u); else { c.pc = 0x0031C750u; return; } if (c.pc != 0x003139F0u) [[unlikely]] return; }
L_003139F0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003139FCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x003139FCu) [[unlikely]] return; }
L_003139FC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 160u);
    c.budget -= 2;
L_00313A04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313A0Cu); st32((c.r[19].w[0] + 36u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00313A0Cu) [[unlikely]] return; }
L_00313A0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00313A28; } }
    set32(c.r[7], ld32((c.r[19].w[0] + 36u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313A28u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_006F(c, 5u, depth + 1u); else { c.pc = 0x002BC070u; return; } if (c.pc != 0x00313A28u) [[unlikely]] return; }
L_00313A28:
    st32((c.r[19].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 68u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[13] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 72u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00313A5Cu); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00313A5Cu) [[unlikely]] return; }
L_00313A5C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[6], ld32((c.r[19].w[0] + 68u)));
    c.f[1] = ld32((c.r[1].w[0] - 14260u));
    set32(c.r[5], 0u + 3u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[19].w[0] + 256u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 14264u));
    st32((c.r[6].w[0] + 52u), c.f[0]);
    st32((c.r[6].w[0] + 56u), c.f[1]);
    st32((c.r[19].w[0] + 160u), c.r[5].w[0]);
    st32((c.r[19].w[0] + 164u), c.r[3].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313A98u); st32((c.r[19].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00313A98u) [[unlikely]] return; }
L_00313A98:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313AA8u); st128((c.r[19].w[0] + 176u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00313AA8u) [[unlikely]] return; }
L_00313AA8:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313AB8u); st128((c.r[19].w[0] + 192u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00313AB8u) [[unlikely]] return; }
L_00313AB8:
    ld128((c.r[2].w[0]) & ~15u, c.r[4]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[16].d[0] = 0ull + 0ull;
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 385u);
    st128((c.r[19].w[0] + 208u) & ~15u, c.r[4]);
    c.f[0] = c.r[2].w[0];
    st32((c.r[19].w[0] + 224u), c.r[3].w[0]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[19].w[0] + 228u), c.f[0]);
    c.f[0] = ld32((c.r[1].w[0] - 13504u));
    st32((c.r[19].w[0] + 232u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 13504u));
    st32((c.r[19].w[0] + 236u), c.f[0]);
    st32((c.r[19].w[0] + 240u), 0u);
    set32(c.r[17], ld32((c.r[19].w[0] + 472u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> (c.r[20].w[0] & 31u)));
    c.budget -= 19;
L_00313B04:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[20].w[0] << 3);  if (t) { goto L_00313B9C; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00313B44; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_00313B3C; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00313B34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00313B4C; } }
L_00313B34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 414u);  if (t) { goto L_00313B48; } }
L_00313B3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 415u);  if (t) { goto L_00313B48; } }
L_00313B44:
    set32(c.r[18], 0u + 417u);
    c.budget -= 1;
L_00313B48:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00313B4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313B54u); set32(c.r[21], c.r[20].w[0] << 2);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00313B54u) [[unlikely]] return; }
L_00313B54:
    set32(c.r[4], c.r[19].w[0] + c.r[21].w[0]);
    c.budget -= 1;
L_00313B58:
    set32(c.r[3], c.r[21].w[0] + c.r[29].w[0]);
    st32((c.r[4].w[0] + 256u), c.r[2].w[0]);
    set32(c.r[21], c.r[3].w[0] + 112u);
    set32(c.r[4], c.r[19].w[0] + 160u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313B70u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 486u, depth + 1u); else { c.pc = 0x002BBCA0u; return; } if (c.pc != 0x00313B70u) [[unlikely]] return; }
L_00313B70:
    st32((c.r[21].w[0]), c.r[2].w[0]);
    set32(c.r[2], c.r[20].w[0] << 3);
    set32(c.r[4], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[2], c.r[2].w[0] + 18u);
    st32((c.r[21].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0])));
    st8((c.r[4].w[0] + 84u), static_cast<std::uint8_t>(0u));
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 85u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00313BC0; } }
L_00313B9C:
    set32(c.r[3], c.r[20].w[0] << 2);
    set32(c.r[4], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[19].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 256u), 0u);
    set32(c.r[2], c.r[3].w[0] + c.r[29].w[0]);
    st32((c.r[2].w[0] + 112u), 0u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] + 84u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 85u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
L_00313BC0:
    st8((c.r[4].w[0] + 86u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 87u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 88u), c.r[20].w[0]);
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> (c.r[20].w[0] & 31u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00313B04u | kUnwind; return; } goto L_00313B04; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 472u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] - 18u);  if (t) { goto L_00313BF0; } }
    st8((c.r[19].w[0] + 84u), static_cast<std::uint8_t>(0u));
    st8((c.r[19].w[0] + 85u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00313BF0:
    set32(c.r[3], 0u + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    st32((c.r[19].w[0] + 172u), c.r[3].w[0]);
    set32(c.r[6], 0u - c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
L_00313C04:
    c.f[0] = c.r[6].w[0];
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[19].w[0] + c.r[3].w[0]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < 3ll ? 1ull : 0ull;
    st32((c.r[4].w[0] + 268u), c.f[0]);
    st32((c.r[4].w[0] + 272u), 0u);
    set32(c.r[3], ld32((c.r[3].w[0] + 112u)));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00313C04u | kUnwind; return; } goto L_00313C04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313C40u); set32(c.r[4], 0u + 208u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00313C40u) [[unlikely]] return; }
L_00313C40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00313C58; } }
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313C58u); set32(c.r[7], c.r[19].w[0] + 160u);  if (depth < kMaxDepth) unit_006E(c, 452u, depth + 1u); else { c.pc = 0x002BB370u; return; } if (c.pc != 0x00313C58u) [[unlikely]] return; }
L_00313C58:
    st32((c.r[19].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[5], c.r[19].w[0] + 268u);
    set32(c.r[4], ld32((c.r[19].w[0] + 72u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00313C74u); set32(c.r[6], 0u + 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00313C74u) [[unlikely]] return; }
L_00313C74:
    set32(c.r[6], ld32((c.r[19].w[0] + 72u)));
    set32(c.r[7], 0u + 3u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[3], c.r[19].w[0] + 400u);
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[6].w[0] + 192u), c.r[7].w[0]);
    st32((c.r[19].w[0] + 304u), c.r[7].w[0]);
    st32((c.r[19].w[0] + 308u), c.r[5].w[0]);
    st32((c.r[19].w[0] + 312u), c.r[3].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313CA4u); st32((c.r[19].w[0] + 316u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00313CA4u) [[unlikely]] return; }
L_00313CA4:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313CB4u); st128((c.r[19].w[0] + 320u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00313CB4u) [[unlikely]] return; }
L_00313CB4:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313CC4u); st128((c.r[19].w[0] + 336u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00313CC4u) [[unlikely]] return; }
L_00313CC4:
    ld128((c.r[2].w[0]) & ~15u, c.r[5]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41980000u);
    set32(c.r[4], c.r[19].w[0] + 404u);
    set32(c.r[2], 0u + 610u);
    st128((c.r[19].w[0] + 352u) & ~15u, c.r[5]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    st32((c.r[19].w[0] + 368u), c.f[0]);
    st32((c.r[19].w[0] + 372u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 376u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 380u), c.r[2].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313D00u); st32((c.r[19].w[0] + 384u), 0u);  if (depth < kMaxDepth) unit_006E(c, 107u, depth + 1u); else { c.pc = 0x002B88A0u; return; } if (c.pc != 0x00313D00u) [[unlikely]] return; }
L_00313D00:
    set32(c.r[2], c.r[19].w[0] + 404u);
    set32(c.r[4], 0u + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313D10u); st32((c.r[19].w[0] + 400u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00313D10u) [[unlikely]] return; }
L_00313D10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00313D28; } }
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313D28u); set32(c.r[7], c.r[19].w[0] + 304u);  if (depth < kMaxDepth) unit_006E(c, 452u, depth + 1u); else { c.pc = 0x002BB370u; return; } if (c.pc != 0x00313D28u) [[unlikely]] return; }
L_00313D28:
    st32((c.r[19].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 476u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 504u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313D54u); set32(c.r[16], c.r[19].w[0] + 108u);  if (depth < kMaxDepth) unit_006E(c, 100u, depth + 1u); else { c.pc = 0x002B8770u; return; } if (c.pc != 0x00313D54u) [[unlikely]] return; }
L_00313D54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00313DA4; } }
L_00313D5C:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[6].w[0] << 2);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[19].w[0] + 476u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 508u)));
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[16], c.r[16].w[0] + 8u);
    c.budget -= 18;
L_00313DA4:
    c.r[3].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00313D5Cu | kUnwind; return; } goto L_00313D5C; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00313DE0:
    set32(c.r[2], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0] + 24u)));  c.pc = t; return; }
L_00313DF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u - 1u);  if (t) { goto L_00313E54; } }
L_00313E14:
    set32(c.r[5], ld32((c.r[18].w[0] + 476u)));
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], ld32((c.r[18].w[0] + 468u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 508u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00313E50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00313E88; } }
L_00313E50:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00313E54:
    set32(c.r[3], ld32((c.r[18].w[0] + 476u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313E78u); set32(c.r[4], ld32((c.r[2].w[0] + 504u)));  if (depth < kMaxDepth) unit_008D(c, 238u, depth + 1u); else { c.pc = 0x00336B70u; return; } if (c.pc != 0x00313E78u) [[unlikely]] return; }
L_00313E78:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 22u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00313E14u | kUnwind; return; } goto L_00313E14; } }
L_00313E88:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00313EA0; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 3;
L_00313EA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00313EC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u - 1u);  if (t) { goto L_00313F24; } }
L_00313EE4:
    set32(c.r[5], ld32((c.r[18].w[0] + 476u)));
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], ld32((c.r[18].w[0] + 468u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 508u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00313F20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00313F58; } }
L_00313F20:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00313F24:
    set32(c.r[3], ld32((c.r[18].w[0] + 476u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313F48u); set32(c.r[4], ld32((c.r[2].w[0] + 504u)));  if (depth < kMaxDepth) unit_008D(c, 238u, depth + 1u); else { c.pc = 0x00336B70u; return; } if (c.pc != 0x00313F48u) [[unlikely]] return; }
L_00313F48:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 22u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00313EE4u | kUnwind; return; } goto L_00313EE4; } }
L_00313F58:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00313F6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00313F88; } }
L_00313F6C:
    set32(c.r[2], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 468u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313F84u); set32(c.r[4], ld32((c.r[18].w[0] + 48u)));  if (depth < kMaxDepth) unit_005C(c, 6u, depth + 1u); else { c.pc = 0x002700F0u; return; } if (c.pc != 0x00313F84u) [[unlikely]] return; }
L_00313F84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00313F88:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00313FA0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[11].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313FECu); c.r[16].d[0] = c.r[10].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 335u, depth + 1u); else { c.pc = 0x0012E720u; return; } if (c.pc != 0x00313FECu) [[unlikely]] return; }
L_00313FEC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 18688u);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[22].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    [[clang::musttail]] return unit_0085(c, 1u, depth);
}

}
