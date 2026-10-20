#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0053[4096] = {
    1, 2, 0, 0, 3, 4, 0, 5, 0, 0, 6, 0, 0, 7, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 14, 0, 15, 0, 16, 0,
    0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0,
    0, 21, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 28, 0, 0, 29,
    0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 35, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 0, 38, 0,
    0, 0, 39, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 43, 0, 44, 0, 45,
    0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0,
    0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0,
    67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 73, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    75, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0,
    88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 92, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0,
    96, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0,
    0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0,
    0, 0, 105, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0,
    0, 111, 0, 0, 0, 0, 0, 112, 0, 113, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0,
    117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0,
    121, 0, 122, 0, 0, 0, 123, 0, 124, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 128, 0, 129, 0, 130, 0, 0, 131, 0, 0, 132, 0, 0, 133, 0, 0, 134, 0, 0, 0, 0,
    135, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 145, 0, 146, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0,
    0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152,
    0, 0, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0,
    0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    158, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0,
    169, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 174,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0,
    0, 0, 179, 0, 0, 0, 0, 180, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 188, 0,
    0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190,
    0, 0, 0, 191, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 196, 197, 198, 0, 0, 0, 199,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 201, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0,
    0, 203, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 0,
    208, 0, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 213, 0, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0,
    0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227,
    0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 237, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244,
    0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0,
    0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0,
    0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0,
    0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 262, 0, 263, 0, 0, 0, 0, 264, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0,
    0, 0, 0, 267, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0,
    271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 282,
    0, 0, 0, 283, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 294, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296,
    0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    301, 0, 0, 302, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 305, 0, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 315, 0, 316, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 323, 0, 324, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0,
    0, 0, 0, 326, 0, 0, 327, 0, 0, 328, 0, 0, 0, 329, 0, 0, 330, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 333, 0,
    0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    338, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 345, 0,
    346, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 349, 0, 0, 0, 0, 350, 0,
    0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 354,
    0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0,
    359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 367, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0,
    0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 375, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 378, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 380,
    0, 0, 0, 0, 381, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 384, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 389, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0,
    0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 411, 0, 0, 0, 412, 413, 0, 0, 414, 0, 0, 0, 0, 0, 415, 0, 0, 416, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 418, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 420, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0,
    0, 0, 0, 424, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 432, 0, 0, 0, 433, 0, 0, 0, 434, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 438, 0, 0, 0, 439, 0, 0, 0, 440, 0, 0, 0, 441, 0, 0, 0,
    0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 447, 0, 0, 448, 0, 0, 449, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0,
    0, 453, 0, 0, 454, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 458, 0, 0, 459, 0, 0, 460, 0, 0,
    461, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 463, 0, 0, 0, 464, 0, 0, 0, 465, 0, 0, 0, 466, 0, 0, 0, 0, 467, 0, 0,
    0, 0, 0, 0, 468, 0, 0, 469, 0, 0, 470, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 472, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0,
    0, 474, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 477, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 481, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0053(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0024C000;
    case 2u: goto L_0024C004;
    case 3u: goto L_0024C010;
    case 4u: goto L_0024C014;
    case 5u: goto L_0024C01C;
    case 6u: goto L_0024C028;
    case 7u: goto L_0024C034;
    case 8u: goto L_0024C04C;
    case 9u: goto L_0024C070;
    case 10u: goto L_0024C0A0;
    case 11u: goto L_0024C0B4;
    case 12u: goto L_0024C0C8;
    case 13u: goto L_0024C0D8;
    case 14u: goto L_0024C0E8;
    case 15u: goto L_0024C0F0;
    case 16u: goto L_0024C0F8;
    case 17u: goto L_0024C10C;
    case 18u: goto L_0024C14C;
    case 19u: goto L_0024C164;
    case 20u: goto L_0024C178;
    case 21u: goto L_0024C184;
    case 22u: goto L_0024C18C;
    case 23u: goto L_0024C19C;
    case 24u: goto L_0024C1B0;
    case 25u: goto L_0024C1C4;
    case 26u: goto L_0024C1D4;
    case 27u: goto L_0024C1E4;
    case 28u: goto L_0024C1F0;
    case 29u: goto L_0024C1FC;
    case 30u: goto L_0024C204;
    case 31u: goto L_0024C220;
    case 32u: goto L_0024C250;
    case 33u: goto L_0024C2A4;
    case 34u: goto L_0024C2B4;
    case 35u: goto L_0024C2C0;
    case 36u: goto L_0024C2D4;
    case 37u: goto L_0024C2E4;
    case 38u: goto L_0024C2F8;
    case 39u: goto L_0024C308;
    case 40u: goto L_0024C31C;
    case 41u: goto L_0024C340;
    case 42u: goto L_0024C360;
    case 43u: goto L_0024C36C;
    case 44u: goto L_0024C374;
    case 45u: goto L_0024C37C;
    case 46u: goto L_0024C390;
    case 47u: goto L_0024C3A0;
    case 48u: goto L_0024C3C0;
    case 49u: goto L_0024C408;
    case 50u: goto L_0024C428;
    case 51u: goto L_0024C444;
    case 52u: goto L_0024C458;
    case 53u: goto L_0024C474;
    case 54u: goto L_0024C4A0;
    case 55u: goto L_0024C4EC;
    case 56u: goto L_0024C514;
    case 57u: goto L_0024C524;
    case 58u: goto L_0024C53C;
    case 59u: goto L_0024C560;
    case 60u: goto L_0024C594;
    case 61u: goto L_0024C5D0;
    case 62u: goto L_0024C5F0;
    case 63u: goto L_0024C60C;
    case 64u: goto L_0024C62C;
    case 65u: goto L_0024C648;
    case 66u: goto L_0024C664;
    case 67u: goto L_0024C680;
    case 68u: goto L_0024C69C;
    case 69u: goto L_0024C6B8;
    case 70u: goto L_0024C6D0;
    case 71u: goto L_0024C708;
    case 72u: goto L_0024C72C;
    case 73u: goto L_0024C738;
    case 74u: goto L_0024C740;
    case 75u: goto L_0024C780;
    case 76u: goto L_0024C790;
    case 77u: goto L_0024C7B4;
    case 78u: goto L_0024C7C0;
    case 79u: goto L_0024C7E8;
    case 80u: goto L_0024C810;
    case 81u: goto L_0024C820;
    case 82u: goto L_0024C840;
    case 83u: goto L_0024C864;
    case 84u: goto L_0024C878;
    case 85u: goto L_0024C8A4;
    case 86u: goto L_0024C8B8;
    case 87u: goto L_0024C8E0;
    case 88u: goto L_0024C900;
    case 89u: goto L_0024C928;
    case 90u: goto L_0024C940;
    case 91u: goto L_0024C960;
    case 92u: goto L_0024C988;
    case 93u: goto L_0024C9A0;
    case 94u: goto L_0024C9C0;
    case 95u: goto L_0024C9E8;
    case 96u: goto L_0024CA00;
    case 97u: goto L_0024CA1C;
    case 98u: goto L_0024CA30;
    case 99u: goto L_0024CA98;
    case 100u: goto L_0024CAAC;
    case 101u: goto L_0024CAC8;
    case 102u: goto L_0024CAF8;
    case 103u: goto L_0024CB10;
    case 104u: goto L_0024CB70;
    case 105u: goto L_0024CB88;
    case 106u: goto L_0024CB94;
    case 107u: goto L_0024CBAC;
    case 108u: goto L_0024CBD0;
    case 109u: goto L_0024CBE4;
    case 110u: goto L_0024CBF4;
    case 111u: goto L_0024CC04;
    case 112u: goto L_0024CC1C;
    case 113u: goto L_0024CC24;
    case 114u: goto L_0024CC40;
    case 115u: goto L_0024CC50;
    case 116u: goto L_0024CC74;
    case 117u: goto L_0024CC80;
    case 118u: goto L_0024CCA8;
    case 119u: goto L_0024CCD0;
    case 120u: goto L_0024CCF0;
    case 121u: goto L_0024CD00;
    case 122u: goto L_0024CD08;
    case 123u: goto L_0024CD18;
    case 124u: goto L_0024CD20;
    case 125u: goto L_0024CD2C;
    case 126u: goto L_0024CD40;
    case 127u: goto L_0024CDA0;
    case 128u: goto L_0024CDAC;
    case 129u: goto L_0024CDB4;
    case 130u: goto L_0024CDBC;
    case 131u: goto L_0024CDC8;
    case 132u: goto L_0024CDD4;
    case 133u: goto L_0024CDE0;
    case 134u: goto L_0024CDEC;
    case 135u: goto L_0024CE00;
    case 136u: goto L_0024CE24;
    case 137u: goto L_0024CE60;
    case 138u: goto L_0024CE70;
    case 139u: goto L_0024CE9C;
    case 140u: goto L_0024CEBC;
    case 141u: goto L_0024CEE0;
    case 142u: goto L_0024CF10;
    case 143u: goto L_0024CF30;
    case 144u: goto L_0024CF5C;
    case 145u: goto L_0024CF8C;
    case 146u: goto L_0024CF94;
    case 147u: goto L_0024CFB4;
    case 148u: goto L_0024CFC4;
    case 149u: goto L_0024CFE8;
    case 150u: goto L_0024D004;
    case 151u: goto L_0024D030;
    case 152u: goto L_0024D07C;
    case 153u: goto L_0024D08C;
    case 154u: goto L_0024D0A4;
    case 155u: goto L_0024D0C0;
    case 156u: goto L_0024D0F8;
    case 157u: goto L_0024D108;
    case 158u: goto L_0024D180;
    case 159u: goto L_0024D190;
    case 160u: goto L_0024D240;
    case 161u: goto L_0024D25C;
    case 162u: goto L_0024D2B0;
    case 163u: goto L_0024D2D4;
    case 164u: goto L_0024D30C;
    case 165u: goto L_0024D31C;
    case 166u: goto L_0024D330;
    case 167u: goto L_0024D344;
    case 168u: goto L_0024D370;
    case 169u: goto L_0024D380;
    case 170u: goto L_0024D388;
    case 171u: goto L_0024D3AC;
    case 172u: goto L_0024D3CC;
    case 173u: goto L_0024D3E0;
    case 174u: goto L_0024D3FC;
    case 175u: goto L_0024D428;
    case 176u: goto L_0024D43C;
    case 177u: goto L_0024D444;
    case 178u: goto L_0024D468;
    case 179u: goto L_0024D488;
    case 180u: goto L_0024D49C;
    case 181u: goto L_0024D4B0;
    case 182u: goto L_0024D4F0;
    case 183u: goto L_0024D520;
    case 184u: goto L_0024D530;
    case 185u: goto L_0024D548;
    case 186u: goto L_0024D558;
    case 187u: goto L_0024D570;
    case 188u: goto L_0024D578;
    case 189u: goto L_0024D59C;
    case 190u: goto L_0024D5FC;
    case 191u: goto L_0024D60C;
    case 192u: goto L_0024D618;
    case 193u: goto L_0024D628;
    case 194u: goto L_0024D658;
    case 195u: goto L_0024D6DC;
    case 196u: goto L_0024D6E4;
    case 197u: goto L_0024D6E8;
    case 198u: goto L_0024D6EC;
    case 199u: goto L_0024D6FC;
    case 200u: goto L_0024D748;
    case 201u: goto L_0024D754;
    case 202u: goto L_0024D768;
    case 203u: goto L_0024D784;
    case 204u: goto L_0024D794;
    case 205u: goto L_0024D7A4;
    case 206u: goto L_0024D7D8;
    case 207u: goto L_0024D7EC;
    case 208u: goto L_0024D800;
    case 209u: goto L_0024D814;
    case 210u: goto L_0024D824;
    case 211u: goto L_0024D8B8;
    case 212u: goto L_0024D8D8;
    case 213u: goto L_0024D904;
    case 214u: goto L_0024D918;
    case 215u: goto L_0024D928;
    case 216u: goto L_0024D938;
    case 217u: goto L_0024D948;
    case 218u: goto L_0024D974;
    case 219u: goto L_0024D988;
    case 220u: goto L_0024D998;
    case 221u: goto L_0024D9A8;
    case 222u: goto L_0024D9B8;
    case 223u: goto L_0024D9D4;
    case 224u: goto L_0024D9E4;
    case 225u: goto L_0024DA10;
    case 226u: goto L_0024DA50;
    case 227u: goto L_0024DA7C;
    case 228u: goto L_0024DAA0;
    case 229u: goto L_0024DAC8;
    case 230u: goto L_0024DAF0;
    case 231u: goto L_0024DB18;
    case 232u: goto L_0024DB40;
    case 233u: goto L_0024DB68;
    case 234u: goto L_0024DB90;
    case 235u: goto L_0024DBB8;
    case 236u: goto L_0024DBE0;
    case 237u: goto L_0024DC08;
    case 238u: goto L_0024DC18;
    case 239u: goto L_0024DC38;
    case 240u: goto L_0024DC50;
    case 241u: goto L_0024DC70;
    case 242u: goto L_0024DCBC;
    case 243u: goto L_0024DCD0;
    case 244u: goto L_0024DCFC;
    case 245u: goto L_0024DD04;
    case 246u: goto L_0024DD40;
    case 247u: goto L_0024DD64;
    case 248u: goto L_0024DDA8;
    case 249u: goto L_0024DDE4;
    case 250u: goto L_0024DE04;
    case 251u: goto L_0024DE28;
    case 252u: goto L_0024DE48;
    case 253u: goto L_0024DE68;
    case 254u: goto L_0024DE8C;
    case 255u: goto L_0024DEAC;
    case 256u: goto L_0024DED0;
    case 257u: goto L_0024DEF0;
    case 258u: goto L_0024DF10;
    case 259u: goto L_0024DF30;
    case 260u: goto L_0024DF44;
    case 261u: goto L_0024DF64;
    case 262u: goto L_0024DF90;
    case 263u: goto L_0024DF98;
    case 264u: goto L_0024DFAC;
    case 265u: goto L_0024DFB4;
    case 266u: goto L_0024DFEC;
    case 267u: goto L_0024E00C;
    case 268u: goto L_0024E018;
    case 269u: goto L_0024E040;
    case 270u: goto L_0024E05C;
    case 271u: goto L_0024E080;
    case 272u: goto L_0024E0D0;
    case 273u: goto L_0024E0DC;
    case 274u: goto L_0024E1E0;
    case 275u: goto L_0024E21C;
    case 276u: goto L_0024E278;
    case 277u: goto L_0024E2C4;
    case 278u: goto L_0024E320;
    case 279u: goto L_0024E330;
    case 280u: goto L_0024E350;
    case 281u: goto L_0024E368;
    case 282u: goto L_0024E37C;
    case 283u: goto L_0024E38C;
    case 284u: goto L_0024E398;
    case 285u: goto L_0024E3B8;
    case 286u: goto L_0024E3C8;
    case 287u: goto L_0024E3E8;
    case 288u: goto L_0024E410;
    case 289u: goto L_0024E430;
    case 290u: goto L_0024E444;
    case 291u: goto L_0024E460;
    case 292u: goto L_0024E48C;
    case 293u: goto L_0024E4B0;
    case 294u: goto L_0024E4C8;
    case 295u: goto L_0024E4D0;
    case 296u: goto L_0024E4FC;
    case 297u: goto L_0024E520;
    case 298u: goto L_0024E54C;
    case 299u: goto L_0024E584;
    case 300u: goto L_0024E5AC;
    case 301u: goto L_0024E600;
    case 302u: goto L_0024E60C;
    case 303u: goto L_0024E624;
    case 304u: goto L_0024E6A0;
    case 305u: goto L_0024E6A8;
    case 306u: goto L_0024E6BC;
    case 307u: goto L_0024E6CC;
    case 308u: goto L_0024E6E0;
    case 309u: goto L_0024E71C;
    case 310u: goto L_0024E73C;
    case 311u: goto L_0024E758;
    case 312u: goto L_0024E794;
    case 313u: goto L_0024E7E4;
    case 314u: goto L_0024E810;
    case 315u: goto L_0024E828;
    case 316u: goto L_0024E830;
    case 317u: goto L_0024E850;
    case 318u: goto L_0024E880;
    case 319u: goto L_0024E8A8;
    case 320u: goto L_0024E8D4;
    case 321u: goto L_0024E90C;
    case 322u: goto L_0024E934;
    case 323u: goto L_0024E948;
    case 324u: goto L_0024E950;
    case 325u: goto L_0024E970;
    case 326u: goto L_0024E98C;
    case 327u: goto L_0024E998;
    case 328u: goto L_0024E9A4;
    case 329u: goto L_0024E9B4;
    case 330u: goto L_0024E9C0;
    case 331u: goto L_0024E9CC;
    case 332u: goto L_0024E9EC;
    case 333u: goto L_0024E9F8;
    case 334u: goto L_0024EA14;
    case 335u: goto L_0024EA38;
    case 336u: goto L_0024EA44;
    case 337u: goto L_0024EA54;
    case 338u: goto L_0024EA80;
    case 339u: goto L_0024EA94;
    case 340u: goto L_0024EAC0;
    case 341u: goto L_0024EAD8;
    case 342u: goto L_0024EB04;
    case 343u: goto L_0024EB3C;
    case 344u: goto L_0024EB64;
    case 345u: goto L_0024EB78;
    case 346u: goto L_0024EB80;
    case 347u: goto L_0024EBA0;
    case 348u: goto L_0024EBD0;
    case 349u: goto L_0024EBE4;
    case 350u: goto L_0024EBF8;
    case 351u: goto L_0024EC14;
    case 352u: goto L_0024EC30;
    case 353u: goto L_0024EC60;
    case 354u: goto L_0024EC7C;
    case 355u: goto L_0024EC90;
    case 356u: goto L_0024ECB0;
    case 357u: goto L_0024ECC4;
    case 358u: goto L_0024ECEC;
    case 359u: goto L_0024ED00;
    case 360u: goto L_0024ED2C;
    case 361u: goto L_0024ED74;
    case 362u: goto L_0024EDB0;
    case 363u: goto L_0024EDD8;
    case 364u: goto L_0024EE30;
    case 365u: goto L_0024EE44;
    case 366u: goto L_0024EE5C;
    case 367u: goto L_0024EE70;
    case 368u: goto L_0024EE98;
    case 369u: goto L_0024EEC0;
    case 370u: goto L_0024EEF4;
    case 371u: goto L_0024EF0C;
    case 372u: goto L_0024EF34;
    case 373u: goto L_0024EF3C;
    case 374u: goto L_0024EF60;
    case 375u: goto L_0024EF90;
    case 376u: goto L_0024EFA4;
    case 377u: goto L_0024EFBC;
    case 378u: goto L_0024EFD0;
    case 379u: goto L_0024EFE4;
    case 380u: goto L_0024EFFC;
    case 381u: goto L_0024F010;
    case 382u: goto L_0024F020;
    case 383u: goto L_0024F060;
    case 384u: goto L_0024F078;
    case 385u: goto L_0024F0B0;
    case 386u: goto L_0024F11C;
    case 387u: goto L_0024F12C;
    case 388u: goto L_0024F1E0;
    case 389u: goto L_0024F208;
    case 390u: goto L_0024F218;
    case 391u: goto L_0024F2E4;
    case 392u: goto L_0024F310;
    case 393u: goto L_0024F338;
    case 394u: goto L_0024F3F0;
    case 395u: goto L_0024F404;
    case 396u: goto L_0024F450;
    case 397u: goto L_0024F4C0;
    case 398u: goto L_0024F4CC;
    case 399u: goto L_0024F520;
    case 400u: goto L_0024F530;
    case 401u: goto L_0024F5A0;
    case 402u: goto L_0024F5B0;
    case 403u: goto L_0024F5F0;
    case 404u: goto L_0024F64C;
    case 405u: goto L_0024F66C;
    case 406u: goto L_0024F6A0;
    case 407u: goto L_0024F6C0;
    case 408u: goto L_0024F710;
    case 409u: goto L_0024F778;
    case 410u: goto L_0024F7A0;
    case 411u: goto L_0024F7B0;
    case 412u: goto L_0024F7C0;
    case 413u: goto L_0024F7C4;
    case 414u: goto L_0024F7D0;
    case 415u: goto L_0024F7E8;
    case 416u: goto L_0024F7F4;
    case 417u: goto L_0024F868;
    case 418u: goto L_0024F878;
    case 419u: goto L_0024F8D0;
    case 420u: goto L_0024F904;
    case 421u: goto L_0024F924;
    case 422u: goto L_0024F940;
    case 423u: goto L_0024F970;
    case 424u: goto L_0024F98C;
    case 425u: goto L_0024F994;
    case 426u: goto L_0024F9B8;
    case 427u: goto L_0024F9E0;
    case 428u: goto L_0024FA0C;
    case 429u: goto L_0024FA2C;
    case 430u: goto L_0024FA40;
    case 431u: goto L_0024FA5C;
    case 432u: goto L_0024FA90;
    case 433u: goto L_0024FAA0;
    case 434u: goto L_0024FAB0;
    case 435u: goto L_0024FAC0;
    case 436u: goto L_0024FADC;
    case 437u: goto L_0024FB30;
    case 438u: goto L_0024FB40;
    case 439u: goto L_0024FB50;
    case 440u: goto L_0024FB60;
    case 441u: goto L_0024FB70;
    case 442u: goto L_0024FB90;
    case 443u: goto L_0024FBC4;
    case 444u: goto L_0024FBD4;
    case 445u: goto L_0024FBF0;
    case 446u: goto L_0024FC38;
    case 447u: goto L_0024FC54;
    case 448u: goto L_0024FC60;
    case 449u: goto L_0024FC6C;
    case 450u: goto L_0024FCB0;
    case 451u: goto L_0024FCD4;
    case 452u: goto L_0024FCF0;
    case 453u: goto L_0024FD04;
    case 454u: goto L_0024FD10;
    case 455u: goto L_0024FD1C;
    case 456u: goto L_0024FD80;
    case 457u: goto L_0024FDCC;
    case 458u: goto L_0024FDDC;
    case 459u: goto L_0024FDE8;
    case 460u: goto L_0024FDF4;
    case 461u: goto L_0024FE00;
    case 462u: goto L_0024FE18;
    case 463u: goto L_0024FE30;
    case 464u: goto L_0024FE40;
    case 465u: goto L_0024FE50;
    case 466u: goto L_0024FE60;
    case 467u: goto L_0024FE74;
    case 468u: goto L_0024FE90;
    case 469u: goto L_0024FE9C;
    case 470u: goto L_0024FEA8;
    case 471u: goto L_0024FEC0;
    case 472u: goto L_0024FED4;
    case 473u: goto L_0024FEE8;
    case 474u: goto L_0024FF04;
    case 475u: goto L_0024FF10;
    case 476u: goto L_0024FF30;
    case 477u: goto L_0024FF40;
    case 478u: goto L_0024FF50;
    case 479u: goto L_0024FF74;
    case 480u: goto L_0024FFB4;
    case 481u: goto L_0024FFCC;
    case 482u: goto L_0024FFD8;
    default: bad_entry(c, 0x0024C000u); return;
    }
L_0024C000:
    c.budget -= 1;
L_0024C004:
    st32((c.r[17].w[0] + 60u), 0u);
    st32((c.r[17].w[0] + 56u), 0u);
    st32((c.r[17].w[0] + 52u), 0u);
    c.budget -= 3;
L_0024C010:
    set32(c.r[4], c.r[17].w[0] + 44u);
    c.budget -= 1;
L_0024C014:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C01Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_001F(c, 476u, depth + 1u); else { c.pc = 0x0017FD40u; return; } if (c.pc != 0x0024C01Cu) [[unlikely]] return; }
L_0024C01C:
    set32(c.r[4], c.r[17].w[0] + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C028u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_001F(c, 476u, depth + 1u); else { c.pc = 0x0017FD40u; return; } if (c.pc != 0x0024C028u) [[unlikely]] return; }
L_0024C028:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C034u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 42u, depth + 1u); else { c.pc = 0x00148750u; return; } if (c.pc != 0x0024C034u) [[unlikely]] return; }
L_0024C034:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0024C050; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C04Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0024C04Cu) [[unlikely]] return; }
L_0024C04C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0024C050:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024C070:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0024C194; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C0A0u);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x0024C0A0u) [[unlikely]] return; }
L_0024C0A0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C0B4u); st32((c.r[29].w[0] + 140u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0024C0B4u) [[unlikely]] return; }
L_0024C0B4:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 120u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C0C8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 125u, depth + 1u); else { c.pc = 0x0015D850u; return; } if (c.pc != 0x0024C0C8u) [[unlikely]] return; }
L_0024C0C8:
    set32(c.r[4], c.r[29].w[0] + 104u);
    set32(c.r[5], c.r[29].w[0] + 120u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C0D8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 127u, depth + 1u); else { c.pc = 0x0015D890u; return; } if (c.pc != 0x0024C0D8u) [[unlikely]] return; }
L_0024C0D8:
    set32(c.r[4], c.r[16].w[0] + 36u);
    set32(c.r[5], c.r[29].w[0] + 104u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C0E8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001F(c, 494u, depth + 1u); else { c.pc = 0x0017FF40u; return; } if (c.pc != 0x0024C0E8u) [[unlikely]] return; }
L_0024C0E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0024C110; } }
L_0024C0F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C0F8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0020(c, 8u, depth + 1u); else { c.pc = 0x00180090u; return; } if (c.pc != 0x0024C0F8u) [[unlikely]] return; }
L_0024C0F8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[17].w[0] << 5);
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C10Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0020(c, 10u, depth + 1u); else { c.pc = 0x001800D0u; return; } if (c.pc != 0x0024C10Cu) [[unlikely]] return; }
L_0024C10C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0024C110:
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 36u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024C0F0u | kUnwind; return; } goto L_0024C0F0; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 73u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 104u);  if (t) { goto L_0024C170; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_0024C154; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 29392u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C14Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 45u, depth + 1u); else { c.pc = 0x001487B0u; return; } if (c.pc != 0x0024C14Cu) [[unlikely]] return; }
L_0024C14C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0024C168; } }
L_0024C154:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 29408u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C164u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 45u, depth + 1u); else { c.pc = 0x001487B0u; return; } if (c.pc != 0x0024C164u) [[unlikely]] return; }
L_0024C164:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0024C168:
    st32((c.r[16].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 104u);
    c.budget -= 2;
L_0024C170:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C178u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x0024C178u) [[unlikely]] return; }
L_0024C178:
    set32(c.r[4], c.r[29].w[0] + 120u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C184u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x0024C184u) [[unlikely]] return; }
L_0024C184:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C18Cu); set32(c.r[4], ld32((c.r[29].w[0] + 140u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0024C18Cu) [[unlikely]] return; }
L_0024C18C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0024C208; } }
L_0024C194:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C19Cu);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x0024C19Cu) [[unlikely]] return; }
L_0024C19C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C1B0u); st32((c.r[29].w[0] + 136u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0024C1B0u) [[unlikely]] return; }
L_0024C1B0:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 88u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C1C4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 125u, depth + 1u); else { c.pc = 0x0015D850u; return; } if (c.pc != 0x0024C1C4u) [[unlikely]] return; }
L_0024C1C4:
    set32(c.r[4], c.r[29].w[0] + 72u);
    set32(c.r[5], c.r[29].w[0] + 88u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C1D4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 127u, depth + 1u); else { c.pc = 0x0015D890u; return; } if (c.pc != 0x0024C1D4u) [[unlikely]] return; }
L_0024C1D4:
    set32(c.r[4], c.r[16].w[0] + 44u);
    set32(c.r[5], c.r[29].w[0] + 72u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C1E4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001F(c, 494u, depth + 1u); else { c.pc = 0x0017FF40u; return; } if (c.pc != 0x0024C1E4u) [[unlikely]] return; }
L_0024C1E4:
    set32(c.r[4], c.r[29].w[0] + 72u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C1F0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x0024C1F0u) [[unlikely]] return; }
L_0024C1F0:
    set32(c.r[4], c.r[29].w[0] + 88u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C1FCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x0024C1FCu) [[unlikely]] return; }
L_0024C1FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C204u); set32(c.r[4], ld32((c.r[29].w[0] + 136u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0024C204u) [[unlikely]] return; }
L_0024C204:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0024C208:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0024C220:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[18].sd[0] < 86ll ? 1ull : 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0024C290; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C250u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0024C250u) [[unlikely]] return; }
L_0024C250:
    set32(c.r[4], c.r[18].w[0] - 86u);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 362u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024C280; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 86u);  if (t) { goto L_0024C290; } }
L_0024C280:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[18], 0u + 88u);  if (t) { goto L_0024C290; } }
    set32(c.r[18], 0u + 87u);
    c.budget -= 1;
L_0024C290:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 73u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0024C300; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C2A4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 110u, depth + 1u); else { c.pc = 0x0012D160u; return; } if (c.pc != 0x0024C2A4u) [[unlikely]] return; }
L_0024C2A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0024C2DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C2B4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0052(c, 299u, depth + 1u); else { c.pc = 0x0024BD40u; return; } if (c.pc != 0x0024C2B4u) [[unlikely]] return; }
L_0024C2B4:
    set32(c.r[4], c.r[17].w[0] + 44u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C2C0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0020(c, 8u, depth + 1u); else { c.pc = 0x00180090u; return; } if (c.pc != 0x0024C2C0u) [[unlikely]] return; }
L_0024C2C0:
    set32(c.r[3], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[4], c.r[16].w[0] << 5);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C2D4u); set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);  if (depth < kMaxDepth) unit_0020(c, 10u, depth + 1u); else { c.pc = 0x001800D0u; return; } if (c.pc != 0x0024C2D4u) [[unlikely]] return; }
L_0024C2D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0024C320; } }
L_0024C2DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C2E4u); set32(c.r[4], c.r[17].w[0] + 36u);  if (depth < kMaxDepth) unit_0020(c, 8u, depth + 1u); else { c.pc = 0x00180090u; return; } if (c.pc != 0x0024C2E4u) [[unlikely]] return; }
L_0024C2E4:
    set32(c.r[3], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[4], c.r[16].w[0] << 5);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C2F8u); set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);  if (depth < kMaxDepth) unit_0020(c, 10u, depth + 1u); else { c.pc = 0x001800D0u; return; } if (c.pc != 0x0024C2F8u) [[unlikely]] return; }
L_0024C2F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024C31C; } }
L_0024C300:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C308u); set32(c.r[4], c.r[17].w[0] + 36u);  if (depth < kMaxDepth) unit_0020(c, 8u, depth + 1u); else { c.pc = 0x00180090u; return; } if (c.pc != 0x0024C308u) [[unlikely]] return; }
L_0024C308:
    set32(c.r[3], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[4], c.r[16].w[0] << 5);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C31Cu); set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);  if (depth < kMaxDepth) unit_0020(c, 10u, depth + 1u); else { c.pc = 0x001800D0u; return; } if (c.pc != 0x0024C31Cu) [[unlikely]] return; }
L_0024C31C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0024C320:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0024C340:
    set32(c.r[29], c.r[29].w[0] - 2256u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C360u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0020(c, 15u, depth + 1u); else { c.pc = 0x001801C0u; return; } if (c.pc != 0x0024C360u) [[unlikely]] return; }
L_0024C360:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C36Cu); set32(c.r[5], c.r[16].w[0] + 52u);  if (depth < kMaxDepth) unit_0020(c, 43u, depth + 1u); else { c.pc = 0x00180690u; return; } if (c.pc != 0x0024C36Cu) [[unlikely]] return; }
L_0024C36C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C374u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0020(c, 46u, depth + 1u); else { c.pc = 0x00180720u; return; } if (c.pc != 0x0024C374u) [[unlikely]] return; }
L_0024C374:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C37Cu); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0020(c, 48u, depth + 1u); else { c.pc = 0x00180760u; return; } if (c.pc != 0x0024C37Cu) [[unlikely]] return; }
L_0024C37C:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    st8((c.r[16].w[0] + 72u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C390u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0020(c, 26u, depth + 1u); else { c.pc = 0x00180340u; return; } if (c.pc != 0x0024C390u) [[unlikely]] return; }
L_0024C390:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 2256u);  c.pc = t; return; }
L_0024C3A0:
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[3], c.r[5].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));  c.pc = t; return; }
L_0024C3C0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x6D6E0000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    c.r[16].d[0] = c.r[9].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] | 21335ull;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C408u); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013C370u; return; } if (c.pc != 0x0024C408u) [[unlikely]] return; }
L_0024C408:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 2512u);
    st32((c.r[21].w[0] + 24u), c.r[2].w[0]);
    st32((c.r[21].w[0] + 28u), 0u);
    c.budget -= 6;
    { const bool t = c.r[19].sd[0] <= 0; st32((c.r[21].w[0] + 32u), 0u);  if (t) { goto L_0024C448; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C428u); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0024C428u) [[unlikely]] return; }
L_0024C428:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0024C444; } }
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C444u); c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0052(c, 300u, depth + 1u); else { c.pc = 0x0024BDE0u; return; } if (c.pc != 0x0024C444u) [[unlikely]] return; }
L_0024C444:
    st32((c.r[21].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 1;
L_0024C448:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] <= 0; c.r[2].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0024C47C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C458u); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0024C458u) [[unlikely]] return; }
L_0024C458:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0024C474; } }
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C474u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0052(c, 300u, depth + 1u); else { c.pc = 0x0024BDE0u; return; } if (c.pc != 0x0024C474u) [[unlikely]] return; }
L_0024C474:
    st32((c.r[21].w[0] + 32u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 2;
L_0024C47C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0024C4A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0024C53C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 2512u);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024C4EC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024C4EC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C4ECu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024C4ECu) [[unlikely]] return; }
L_0024C4EC:
    st32((c.r[17].w[0] + 28u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024C514; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024C514; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C514u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024C514u) [[unlikely]] return; }
L_0024C514:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C524u); st32((c.r[17].w[0] + 32u), 0u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x0024C524u) [[unlikely]] return; }
L_0024C524:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0024C540; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C53Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0024C53Cu) [[unlikely]] return; }
L_0024C53C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0024C540:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024C560:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C594u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0053(c, 78u, depth + 1u); else { c.pc = 0x0024C7C0u; return; } if (c.pc != 0x0024C594u) [[unlikely]] return; }
L_0024C594:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_0024C744; } }
    set32(c.r[30], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 3;
    { const bool t = c.r[30].d[0] == 0ull;  if (t) { goto L_0024C738; } }
    c.r[1].d[0] = c.r[22].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[23].d[0] = 0ull + 0ull;  if (t) { goto L_0024C6D0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[22].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 29424u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0024C000u < 16384u) { entry = entries_0053[(t - 0x0024C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0024C5D0:
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(12ll);
    c.r[21].d[0] = 0ull + static_cast<std::uint64_t>(10752ll);
    c.r[19].d[0] = 0ull + static_cast<std::uint64_t>(896ll);
    c.r[20].d[0] = 0ull + static_cast<std::uint64_t>(11648ll);
    c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(1664ll);
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[23].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0024C6D0; } }
L_0024C5F0:
    c.r[21].d[0] = 0ull + static_cast<std::uint64_t>(10752ll);
    c.r[19].d[0] = 0ull + static_cast<std::uint64_t>(2560ll);
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(28ll);
    c.r[20].d[0] = 0ull + static_cast<std::uint64_t>(11648ll);
    c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(1664ll);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0024C6D0; } }
L_0024C60C:
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(12ll);
    c.r[21].d[0] = 0ull + static_cast<std::uint64_t>(10752ll);
    c.r[19].d[0] = 0ull + static_cast<std::uint64_t>(896ll);
    c.r[20].d[0] = 0ull + static_cast<std::uint64_t>(11648ll);
    c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(1664ll);
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[23].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0024C6D0; } }
L_0024C62C:
    c.r[21].d[0] = 0ull + static_cast<std::uint64_t>(10752ll);
    c.r[19].d[0] = 0ull + static_cast<std::uint64_t>(2560ll);
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(28ll);
    c.r[20].d[0] = 0ull + static_cast<std::uint64_t>(11648ll);
    c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(1664ll);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0024C6D0; } }
L_0024C648:
    c.r[21].d[0] = 0ull + static_cast<std::uint64_t>(10752ll);
    c.r[19].d[0] = 0ull + static_cast<std::uint64_t>(2560ll);
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(28ll);
    c.r[20].d[0] = 0ull + static_cast<std::uint64_t>(11648ll);
    c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(1664ll);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0024C6D0; } }
L_0024C664:
    c.r[20].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    c.r[21].d[0] = 0ull + static_cast<std::uint64_t>(10752ll);
    c.r[19].d[0] = 0ull + static_cast<std::uint64_t>(1536ll);
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    c.r[18].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0024C6D0; } }
L_0024C680:
    c.r[20].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    c.r[21].d[0] = 0ull + static_cast<std::uint64_t>(10752ll);
    c.r[19].d[0] = 0ull + static_cast<std::uint64_t>(96ll);
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[18].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0024C6D0; } }
L_0024C69C:
    c.r[20].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    c.r[21].d[0] = 0ull + static_cast<std::uint64_t>(10752ll);
    c.r[19].d[0] = 0ull + static_cast<std::uint64_t>(96ll);
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[18].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0024C6D0; } }
L_0024C6B8:
    c.r[21].d[0] = 0ull + static_cast<std::uint64_t>(10752ll);
    c.r[19].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[20].d[0] = c.r[21].d[0] + 0ull;
    c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(512ll);
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
L_0024C6D0:
    c.r[3].d[0] = c.r[19].d[0] & 65535ull;
    c.r[4].d[0] = c.r[21].d[0] & 65535ull;
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[18].d[0] & 65535ull;
    set32(c.r[4], c.r[3].w[0] - 1u);
    st16((c.r[29].w[0] + 172u), static_cast<std::uint16_t>(c.r[21].w[0]));
    c.r[3].d[0] = c.r[20].d[0] & 65535ull;
    st16((c.r[29].w[0] + 174u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], 0u + 40u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[29].w[0] + 168u), static_cast<std::uint16_t>(c.r[20].w[0]));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C708u); st16((c.r[29].w[0] + 170u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0024C708u) [[unlikely]] return; }
L_0024C708:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[30].d[0] + 0ull;  if (t) { goto L_0024C730; } }
    c.r[6].d[0] = c.r[17].d[0] & 65535ull;
    c.r[8].d[0] = c.r[16].d[0] & 65535ull;
    c.r[9].d[0] = c.r[23].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 172u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C72Cu); set32(c.r[7], c.r[29].w[0] + 168u);  if (depth < kMaxDepth) unit_0053(c, 48u, depth + 1u); else { c.pc = 0x0024C3C0u; return; } if (c.pc != 0x0024C72Cu) [[unlikely]] return; }
L_0024C72C:
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 1;
L_0024C730:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C738u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x0024C738u) [[unlikely]] return; }
L_0024C738:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C740u);  if (depth < kMaxDepth) unit_0053(c, 78u, depth + 1u); else { c.pc = 0x0024C7C0u; return; } if (c.pc != 0x0024C740u) [[unlikely]] return; }
L_0024C740:
    st32((c.r[2].w[0] + 36u), c.r[22].w[0]);
    c.budget -= 1;
L_0024C744:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0024C780:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C790u);  if (depth < kMaxDepth) unit_0053(c, 78u, depth + 1u); else { c.pc = 0x0024C7C0u; return; } if (c.pc != 0x0024C790u) [[unlikely]] return; }
L_0024C790:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024C7B4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024C7B4; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C7B4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024C7B4u) [[unlikely]] return; }
L_0024C7B4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0024C7C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x6D6E0000u);  if (t) { goto L_0024C7E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0024C7FC; } }
L_0024C7E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C7E8u); c.r[5].d[0] = c.r[2].d[0] | 21335ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x0024C7E8u) [[unlikely]] return; }
L_0024C7E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024C7F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_0024C7FC; } }
L_0024C7F8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024C7FC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0024C810:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C820u);  if (depth < kMaxDepth) unit_0053(c, 78u, depth + 1u); else { c.pc = 0x0024C7C0u; return; } if (c.pc != 0x0024C820u) [[unlikely]] return; }
L_0024C820:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024C830; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 36u)));  if (t) { goto L_0024C834; } }
L_0024C830:
    set32(c.r[2], 0u + 10u);
    c.budget -= 1;
L_0024C834:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0024C840:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0024C884; } }
    set32(c.r[16], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0024C8C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C864u); set32(c.r[4], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_0011(c, 177u, depth + 1u); else { c.pc = 0x00146C10u; return; } if (c.pc != 0x0024C864u) [[unlikely]] return; }
L_0024C864:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 8u);  if (t) { goto L_0024C87C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C878u);  if (depth < kMaxDepth) unit_0011(c, 182u, depth + 1u); else { c.pc = 0x00146C90u; return; } if (c.pc != 0x0024C878u) [[unlikely]] return; }
L_0024C878:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0024C87C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  if (t) { goto L_0024C8C8; } }
L_0024C884:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0024C8C4; } }
    set32(c.r[16], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0024C8C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C8A4u); set32(c.r[4], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_0011(c, 177u, depth + 1u); else { c.pc = 0x00146C10u; return; } if (c.pc != 0x0024C8A4u) [[unlikely]] return; }
L_0024C8A4:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 8u);  if (t) { goto L_0024C8BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C8B8u);  if (depth < kMaxDepth) unit_0011(c, 182u, depth + 1u); else { c.pc = 0x00146C90u; return; } if (c.pc != 0x0024C8B8u) [[unlikely]] return; }
L_0024C8B8:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0024C8BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  if (t) { goto L_0024C8C8; } }
L_0024C8C4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024C8C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0024C8E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0024C908; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0024C928; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C900u); c.r[6].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 31u, depth + 1u); else { c.pc = 0x0024C220u; return; } if (c.pc != 0x0024C900u) [[unlikely]] return; }
L_0024C900:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0024C92C; } }
L_0024C908:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0024C928; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0024C928; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C928u); c.r[6].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 31u, depth + 1u); else { c.pc = 0x0024C220u; return; } if (c.pc != 0x0024C928u) [[unlikely]] return; }
L_0024C928:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0024C92C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0024C940:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0024C968; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024C988; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C960u);  if (depth < kMaxDepth) unit_0053(c, 41u, depth + 1u); else { c.pc = 0x0024C340u; return; } if (c.pc != 0x0024C960u) [[unlikely]] return; }
L_0024C960:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0024C98C; } }
L_0024C968:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0024C988; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024C988; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C988u);  if (depth < kMaxDepth) unit_0053(c, 41u, depth + 1u); else { c.pc = 0x0024C340u; return; } if (c.pc != 0x0024C988u) [[unlikely]] return; }
L_0024C988:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0024C98C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0024C9A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0024C9C8; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0024C9F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C9C0u); c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 47u, depth + 1u); else { c.pc = 0x0024C3A0u; return; } if (c.pc != 0x0024C9C0u) [[unlikely]] return; }
L_0024C9C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0024C9F8; } }
L_0024C9C8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0024C9F0; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0024C9F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C9E8u);  if (depth < kMaxDepth) unit_0053(c, 47u, depth + 1u); else { c.pc = 0x0024C3A0u; return; } if (c.pc != 0x0024C9E8u) [[unlikely]] return; }
L_0024C9E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024C9F4; } }
L_0024C9F0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024C9F4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0024C9F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0024CA00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CA1Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 39u, depth + 1u); else { c.pc = 0x001486F0u; return; } if (c.pc != 0x0024CA1Cu) [[unlikely]] return; }
L_0024CA1C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53460000u);
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.r[5].d[0] = c.r[2].d[0] | 13876ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CA30u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013C370u; return; } if (c.pc != 0x0024CA30u) [[unlikely]] return; }
L_0024CA30:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 2544u);
    set32(c.r[2], c.r[2].w[0] - 2528u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 60u), 0u);
    st32((c.r[16].w[0] + 64u), 0u);
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 72u), c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[3], c.r[2].w[0] - c.r[4].w[0]);
    c.budget -= 15;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));  if (t) { goto L_0024CA74; } }
    set32(c.r[2], c.r[3].w[0] + 31u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 2;
L_0024CA74:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(90ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0024CAD8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024CAA4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024CA98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CA98u); set32(c.r[4], c.r[4].w[0] - 16u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0024CA98u) [[unlikely]] return; }
L_0024CA98:
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 64u), 0u);
    st32((c.r[16].w[0] + 60u), 0u);
    c.budget -= 3;
L_0024CAA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CAACu); set32(c.r[4], 0u + 2896u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0024CAACu) [[unlikely]] return; }
L_0024CAAC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00180000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 176u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 32u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CAC8u); set32(c.r[8], 0u + 90u);  if (depth < kMaxDepth) unit_0000(c, 94u, depth + 1u); else { c.pc = 0x001008C0u; return; } if (c.pc != 0x0024CAC8u) [[unlikely]] return; }
L_0024CAC8:
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[2], c.r[2].w[0] + 2880u);
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 4;
L_0024CAD8:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 29464u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 2880u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CAF8u); st32((c.r[16].w[0] + 68u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 45u, depth + 1u); else { c.pc = 0x001487B0u; return; } if (c.pc != 0x0024CAF8u) [[unlikely]] return; }
L_0024CAF8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024CB10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0024CBAC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 2544u);
    set32(c.r[3], c.r[3].w[0] - 2528u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[2], c.r[17].w[0] + 60u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 56u), c.r[3].w[0]);  if (t) { goto L_0024CB7C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 32u);  if (t) { goto L_0024CB80; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024CB7C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[2].w[0] - 16u);  if (t) { goto L_0024CB70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CB70u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0024CB70u) [[unlikely]] return; }
L_0024CB70:
    st32((c.r[17].w[0] + 68u), 0u);
    st32((c.r[17].w[0] + 64u), 0u);
    st32((c.r[17].w[0] + 60u), 0u);
    c.budget -= 3;
L_0024CB7C:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 1;
L_0024CB80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CB88u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x0024CB88u) [[unlikely]] return; }
L_0024CB88:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CB94u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 42u, depth + 1u); else { c.pc = 0x00148750u; return; } if (c.pc != 0x0024CB94u) [[unlikely]] return; }
L_0024CB94:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0024CBB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CBACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0024CBACu) [[unlikely]] return; }
L_0024CBAC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0024CBB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024CBD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CBE4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 117u, depth + 1u); else { c.pc = 0x0024CC80u; return; } if (c.pc != 0x0024CBE4u) [[unlikely]] return; }
L_0024CBE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 80u);  if (t) { goto L_0024CC1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CBF4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0024CBF4u) [[unlikely]] return; }
L_0024CBF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0024CC04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CC04u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 96u, depth + 1u); else { c.pc = 0x0024CA00u; return; } if (c.pc != 0x0024CC04u) [[unlikely]] return; }
L_0024CC04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_0024CC10; } }
    set32(c.r[2], c.r[2].w[0] + 32u);
    c.budget -= 1;
L_0024CC10:
    set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CC1Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x0024CC1Cu) [[unlikely]] return; }
L_0024CC1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CC24u);  if (depth < kMaxDepth) unit_0053(c, 117u, depth + 1u); else { c.pc = 0x0024CC80u; return; } if (c.pc != 0x0024CC24u) [[unlikely]] return; }
L_0024CC24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0024CC40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CC50u);  if (depth < kMaxDepth) unit_0053(c, 117u, depth + 1u); else { c.pc = 0x0024CC80u; return; } if (c.pc != 0x0024CC50u) [[unlikely]] return; }
L_0024CC50:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024CC74; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024CC74; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CC74u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024CC74u) [[unlikely]] return; }
L_0024CC74:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0024CC80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x53460000u);  if (t) { goto L_0024CCA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0024CCBC; } }
L_0024CCA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CCA8u); c.r[5].d[0] = c.r[2].d[0] | 13876ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x0024CCA8u) [[unlikely]] return; }
L_0024CCA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024CCB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_0024CCBC; } }
L_0024CCB8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024CCBC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0024CCD0:
    set32(c.r[29], c.r[29].w[0] - 2304u);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CCF0u); set32(c.r[4], c.r[29].w[0] + 2288u);  if (depth < kMaxDepth) unit_0017(c, 125u, depth + 1u); else { c.pc = 0x0015D850u; return; } if (c.pc != 0x0024CCF0u) [[unlikely]] return; }
L_0024CCF0:
    set32(c.r[4], c.r[29].w[0] + 2272u);
    set32(c.r[5], c.r[29].w[0] + 2288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CD00u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 127u, depth + 1u); else { c.pc = 0x0015D890u; return; } if (c.pc != 0x0024CD00u) [[unlikely]] return; }
L_0024CD00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CD08u); set32(c.r[4], c.r[29].w[0] + 2264u);  if (depth < kMaxDepth) unit_001F(c, 475u, depth + 1u); else { c.pc = 0x0017FD30u; return; } if (c.pc != 0x0024CD08u) [[unlikely]] return; }
L_0024CD08:
    set32(c.r[4], c.r[29].w[0] + 2264u);
    set32(c.r[5], c.r[29].w[0] + 2272u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CD18u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001F(c, 494u, depth + 1u); else { c.pc = 0x0017FF40u; return; } if (c.pc != 0x0024CD18u) [[unlikely]] return; }
L_0024CD18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0024CD44; } }
L_0024CD20:
    set32(c.r[4], c.r[29].w[0] + 2264u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CD2Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0020(c, 8u, depth + 1u); else { c.pc = 0x00180090u; return; } if (c.pc != 0x0024CD2Cu) [[unlikely]] return; }
L_0024CD2C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[16].w[0] << 5);
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CD40u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0020(c, 10u, depth + 1u); else { c.pc = 0x001800D0u; return; } if (c.pc != 0x0024CD40u) [[unlikely]] return; }
L_0024CD40:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0024CD44:
    set32(c.r[4], ld32((c.r[29].w[0] + 2272u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20430000u);
    c.r[2].d[0] = c.r[2].d[0] | 16720ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0024CD60; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 1;
L_0024CD60:
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024CD20u | kUnwind; return; } goto L_0024CD20; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20430000u);
    c.r[2].d[0] = c.r[2].d[0] | 16720ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[6], 0u + 1u);  if (t) { goto L_0024CD80; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 1;
L_0024CD80:
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[29].w[0] + 2300u);
    st16((c.r[29].w[0] + 2300u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] + 2751u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CDA0u); st16((c.r[29].w[0] + 2302u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0020(c, 15u, depth + 1u); else { c.pc = 0x001801C0u; return; } if (c.pc != 0x0024CDA0u) [[unlikely]] return; }
L_0024CDA0:
    set32(c.r[5], c.r[17].w[0] + 60u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CDACu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0020(c, 43u, depth + 1u); else { c.pc = 0x00180690u; return; } if (c.pc != 0x0024CDACu) [[unlikely]] return; }
L_0024CDAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CDB4u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0020(c, 46u, depth + 1u); else { c.pc = 0x00180720u; return; } if (c.pc != 0x0024CDB4u) [[unlikely]] return; }
L_0024CDB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CDBCu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0020(c, 48u, depth + 1u); else { c.pc = 0x00180760u; return; } if (c.pc != 0x0024CDBCu) [[unlikely]] return; }
L_0024CDBC:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CDC8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0020(c, 26u, depth + 1u); else { c.pc = 0x00180340u; return; } if (c.pc != 0x0024CDC8u) [[unlikely]] return; }
L_0024CDC8:
    set32(c.r[4], c.r[29].w[0] + 2264u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CDD4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_001F(c, 476u, depth + 1u); else { c.pc = 0x0017FD40u; return; } if (c.pc != 0x0024CDD4u) [[unlikely]] return; }
L_0024CDD4:
    set32(c.r[4], c.r[29].w[0] + 2272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CDE0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x0024CDE0u) [[unlikely]] return; }
L_0024CDE0:
    set32(c.r[4], c.r[29].w[0] + 2288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CDECu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x0024CDECu) [[unlikely]] return; }
L_0024CDEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 2304u);  c.pc = t; return; }
L_0024CE00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = c.r[5].sd[0] < 86ll ? 1ull : 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0024CE40; } }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CE24u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0024CE24u) [[unlikely]] return; }
L_0024CE24:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 346u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[2], c.r[2].w[0] + 86u);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));  if (t) { goto L_0024CE50; } }
L_0024CE40:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[3], c.r[5].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    c.budget -= 4;
L_0024CE50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0024CE60:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0024CB10u | kUnwind; return; } goto L_0024CB10; }
L_0024CE70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[16].sd[0] < 86ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0024CE94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0024CEC8; } }
L_0024CE94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CE9Cu);  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0024CE9Cu) [[unlikely]] return; }
L_0024CE9C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 346u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0024CEB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0024CEC8; } }
L_0024CEB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CEBCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0024CEBCu) [[unlikely]] return; }
L_0024CEBC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 355u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 3ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_0024CEC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0024CEE0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CF10u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 298u, depth + 1u); else { c.pc = 0x0012E440u; return; } if (c.pc != 0x0024CF10u) [[unlikely]] return; }
L_0024CF10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[18].w[0] + 352u);
    set32(c.r[2], c.r[2].w[0] - 2224u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    st32((c.r[18].w[0] + 20u), c.r[19].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CF30u); set32(c.r[6], 0u + 328u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0024CF30u) [[unlikely]] return; }
L_0024CF30:
    set32(c.r[2], ld32((c.r[19].w[0] + 296u)));
    set32(c.r[2], c.r[2].w[0] - 41u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_0024CF68; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 29856u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0024C000u < 16384u) { entry = entries_0053[(t - 0x0024C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0024CF5C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 716u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0024CF6C; } }
L_0024CF68:
    st8((c.r[18].w[0] + 716u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0024CF6C:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 716u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 8836u);  if (t) { goto L_0024CFBC; } }
    st32((c.r[18].w[0] + 720u), 0u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 680u), c.r[17].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CF8Cu); st32((c.r[18].w[0] + 684u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0053(c, 155u, depth + 1u); else { c.pc = 0x0024D0C0u; return; } if (c.pc != 0x0024CF8Cu) [[unlikely]] return; }
L_0024CF8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CF94u); set32(c.r[4], 0u + 8836u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0024CF94u) [[unlikely]] return; }
L_0024CF94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0024CFB4; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 24u);
    set32(c.r[6], 0u + 360u);
    set32(c.r[8], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CFB4u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0053(c, 181u, depth + 1u); else { c.pc = 0x0024D4B0u; return; } if (c.pc != 0x0024CFB4u) [[unlikely]] return; }
L_0024CFB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 712u), c.r[2].w[0]);  if (t) { goto L_0024CFF4; } }
L_0024CFBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CFC4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0024CFC4u) [[unlikely]] return; }
L_0024CFC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024CFE8; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 20u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CFE8u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0053(c, 181u, depth + 1u); else { c.pc = 0x0024D4B0u; return; } if (c.pc != 0x0024CFE8u) [[unlikely]] return; }
L_0024CFE8:
    st32((c.r[18].w[0] + 712u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 720u), c.r[2].w[0]);
    c.budget -= 3;
L_0024CFF4:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D004u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024D004u) [[unlikely]] return; }
L_0024D004:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0024D030:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0024D0A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 2224u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 712u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024D07C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024D07C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D07Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024D07Cu) [[unlikely]] return; }
L_0024D07C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D08Cu); st32((c.r[17].w[0] + 712u), 0u);  if (depth < kMaxDepth) unit_000B(c, 300u, depth + 1u); else { c.pc = 0x0012E490u; return; } if (c.pc != 0x0024D08Cu) [[unlikely]] return; }
L_0024D08C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0024D0A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D0A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0024D0A4u) [[unlikely]] return; }
L_0024D0A4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0024D0A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024D0C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 720u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0024D170; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[4], c.r[18].w[0] + 24u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D0F8u); set32(c.r[6], 0u + 328u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0024D0F8u) [[unlikely]] return; }
L_0024D0F8:
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 6u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[3], c.r[7].w[0] << 1);
    c.budget -= 4;
L_0024D108:
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[6], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 44u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_0024D138; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0024D130; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0024D130:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_0024D13C; } }
L_0024D138:
    st32((c.r[6].w[0] + 28u), 0u);
    c.budget -= 1;
L_0024D13C:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[7].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024D108u | kUnwind; return; } goto L_0024D108; } }
    st32((c.r[18].w[0] + 312u), c.r[17].w[0]);
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != c.r[3].d[0]; st32((c.r[18].w[0] + 316u), c.r[16].w[0]);  if (t) { goto L_0024D164; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 21u);  if (t) { goto L_0024D168; } }
L_0024D164:
    set32(c.r[3], 0u + 22u);
    c.budget -= 1;
L_0024D168:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 324u), c.r[3].w[0]);  if (t) { goto L_0024D220; } }
L_0024D170:
    set32(c.r[5], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[4], c.r[18].w[0] + 352u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D180u); set32(c.r[6], 0u + 328u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0024D180u) [[unlikely]] return; }
L_0024D180:
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 6u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], c.r[10].w[0] << 1);
    c.budget -= 4;
L_0024D190:
    set32(c.r[3], c.r[10].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[10].w[0]);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[8], c.r[6].w[0] << 4);
    set32(c.r[7], c.r[18].w[0] + c.r[8].w[0]);
    set32(c.r[6], ld32((c.r[7].w[0] + 360u)));
    st32((c.r[3].w[0] + 688u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 372u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; set32(c.r[9], c.r[7].w[0] + 360u);  if (t) { goto L_0024D1DC; } }
    set32(c.r[3], ld32((c.r[7].w[0] + 52u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[7].w[0] + 380u), c.r[3].w[0]);
    st32((c.r[7].w[0] + 356u), 0u);
    set32(c.r[3], ld32((c.r[7].w[0] + 64u)));
    st32((c.r[7].w[0] + 392u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 68u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 396u), c.r[3].w[0]);  if (t) { goto L_0024D200; } }
L_0024D1DC:
    set32(c.r[3], ld32((c.r[9].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0024D1F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_0024D200; } }
L_0024D1F0:
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    st32((c.r[9].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_0024D200:
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.r[3].d[0] = c.r[10].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[10].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024D190u | kUnwind; return; } goto L_0024D190; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 640u)));
    set32(c.r[3], c.r[3].w[0] - c.r[17].w[0]);
    st32((c.r[18].w[0] + 640u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 644u), c.r[16].w[0]);
    c.budget -= 4;
L_0024D220:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0024D240:
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 288u)));
    st32((c.r[5].w[0] + 288u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 292u)));
    st32((c.r[5].w[0] + 292u), c.r[2].w[0]);
    c.budget -= 7;
L_0024D25C:
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], c.r[8].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[2].w[0] << 4);
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[6], c.r[5].w[0] + c.r[7].w[0]);
    c.r[2].d[0] = c.r[8].sd[0] < 6ll ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[6].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[6].w[0] + 8u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024D25Cu | kUnwind; return; } goto L_0024D25C; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    { set32(c.r[6], 0u + 328u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001415A0u | kUnwind; return; } [[clang::musttail]] return unit_0010(c, 107u, depth); }
L_0024D2B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 712u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D2D4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024D2D4u) [[unlikely]] return; }
L_0024D2D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024D49C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 720u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0024D3E8; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 716u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024D3B8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 712u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D30Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024D30Cu) [[unlikely]] return; }
L_0024D30C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0024D34C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D31Cu); set32(c.r[5], c.r[16].w[0] + 352u);  if (depth < kMaxDepth) unit_0053(c, 160u, depth + 1u); else { c.pc = 0x0024D240u; return; } if (c.pc != 0x0024D31Cu) [[unlikely]] return; }
L_0024D31C:
    set32(c.r[4], ld32((c.r[16].w[0] + 712u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D330u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024D330u) [[unlikely]] return; }
L_0024D330:
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D344u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024D344u) [[unlikely]] return; }
L_0024D344:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0024D4A0; } }
L_0024D34C:
    set32(c.r[4], ld32((c.r[16].w[0] + 712u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024D370; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024D370; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D370u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024D370u) [[unlikely]] return; }
L_0024D370:
    st32((c.r[16].w[0] + 712u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D380u); st32((c.r[16].w[0] + 720u), 0u);  if (depth < kMaxDepth) unit_0053(c, 155u, depth + 1u); else { c.pc = 0x0024D0C0u; return; } if (c.pc != 0x0024D380u) [[unlikely]] return; }
L_0024D380:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D388u); set32(c.r[4], 0u + 8836u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0024D388u) [[unlikely]] return; }
L_0024D388:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024D3B0; } }
    set32(c.r[7], ld32((c.r[16].w[0] + 684u)));
    set32(c.r[5], c.r[16].w[0] + 24u);
    set32(c.r[6], 0u + 360u);
    set32(c.r[8], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D3ACu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0053(c, 181u, depth + 1u); else { c.pc = 0x0024D4B0u; return; } if (c.pc != 0x0024D3ACu) [[unlikely]] return; }
L_0024D3AC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0024D3B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 712u), c.r[4].w[0]);  if (t) { goto L_0024D49C; } }
L_0024D3B8:
    set32(c.r[4], ld32((c.r[16].w[0] + 712u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D3CCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024D3CCu) [[unlikely]] return; }
L_0024D3CC:
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D3E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024D3E0u) [[unlikely]] return; }
L_0024D3E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024D49C; } }
L_0024D3E8:
    set32(c.r[4], ld32((c.r[16].w[0] + 712u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D3FCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024D3FCu) [[unlikely]] return; }
L_0024D3FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024D474; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 712u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024D428; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024D428; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D428u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024D428u) [[unlikely]] return; }
L_0024D428:
    st32((c.r[16].w[0] + 712u), 0u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 720u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D43Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 155u, depth + 1u); else { c.pc = 0x0024D0C0u; return; } if (c.pc != 0x0024D43Cu) [[unlikely]] return; }
L_0024D43C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D444u); set32(c.r[4], 0u + 8836u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0024D444u) [[unlikely]] return; }
L_0024D444:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024D46C; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 680u)));
    set32(c.r[5], c.r[16].w[0] + 352u);
    set32(c.r[7], ld32((c.r[16].w[0] + 684u)));
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D468u); set32(c.r[9], c.r[16].w[0] + 688u);  if (depth < kMaxDepth) unit_0053(c, 181u, depth + 1u); else { c.pc = 0x0024D4B0u; return; } if (c.pc != 0x0024D468u) [[unlikely]] return; }
L_0024D468:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0024D46C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 712u), c.r[4].w[0]);  if (t) { goto L_0024D49C; } }
L_0024D474:
    set32(c.r[4], ld32((c.r[16].w[0] + 712u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D488u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024D488u) [[unlikely]] return; }
L_0024D488:
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D49Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024D49Cu) [[unlikely]] return; }
L_0024D49C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0024D4A0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0024D4B0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
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
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D4F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 298u, depth + 1u); else { c.pc = 0x0012E440u; return; } if (c.pc != 0x0024D4F0u) [[unlikely]] return; }
L_0024D4F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 2248u);
    set32(c.r[3], c.r[3].w[0] - 2352u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 380u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 2264u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D520u); st32((c.r[16].w[0] + 24u), c.r[21].w[0]);  if (depth < kMaxDepth) unit_006F(c, 137u, depth + 1u); else { c.pc = 0x002BD810u; return; } if (c.pc != 0x0024D520u) [[unlikely]] return; }
L_0024D520:
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[4], c.r[16].w[0] + 28u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D530u); set32(c.r[6], 0u + 328u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0024D530u) [[unlikely]] return; }
L_0024D530:
    set32(c.r[3], ld32((c.r[16].w[0] + 324u)));
    set32(c.r[2], 0u + 13u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 124u);  if (t) { goto L_0024D560; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D548u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0024D548u) [[unlikely]] return; }
L_0024D548:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0024D558; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D558u);  if (depth < kMaxDepth) unit_006F(c, 209u, depth + 1u); else { c.pc = 0x002BE380u; return; } if (c.pc != 0x0024D558u) [[unlikely]] return; }
L_0024D558:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 388u), c.r[2].w[0]);  if (t) { goto L_0024D564; } }
L_0024D560:
    st32((c.r[16].w[0] + 388u), 0u);
    c.budget -= 1;
L_0024D564:
    set32(c.r[4], c.r[16].w[0] + 8732u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D570u); set32(c.r[5], 0u + 48u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x0024D570u) [[unlikely]] return; }
L_0024D570:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 25500u);
    c.budget -= 2;
L_0024D578:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0] + 8732u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[5].sd[0] < 3ll ? 1ull : 0ull;
    st32((c.r[4].w[0] + 8748u), c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8764u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024D578u | kUnwind; return; } goto L_0024D578; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024D59C:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 356u), 0u);
    c.r[2].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024D59Cu | kUnwind; return; } goto L_0024D59C; } }
    st32((c.r[16].w[0] + 392u), 0u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 396u), 0u);
    set32(c.r[4], 0u + 16u);
    st32((c.r[16].w[0] + 8784u), 0u);
    st32((c.r[16].w[0] + 8780u), 0u);
    st32((c.r[16].w[0] + 8720u), 0u);
    st32((c.r[16].w[0] + 8724u), 0u);
    st32((c.r[16].w[0] + 8728u), 0u);
    st8((c.r[16].w[0] + 8796u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 8800u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st8((c.r[16].w[0] + 8799u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 8804u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8808u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 8797u), static_cast<std::uint8_t>(0u));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D5FCu); st8((c.r[16].w[0] + 8798u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0024D5FCu) [[unlikely]] return; }
L_0024D5FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0024D60C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D60Cu); set32(c.r[5], c.r[16].w[0] + 20u);  if (depth < kMaxDepth) unit_0054(c, 264u, depth + 1u); else { c.pc = 0x00251A80u; return; } if (c.pc != 0x0024D60Cu) [[unlikely]] return; }
L_0024D60C:
    st32((c.r[16].w[0] + 8788u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D618u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0024D618u) [[unlikely]] return; }
L_0024D618:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0024D628; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D628u); set32(c.r[5], c.r[16].w[0] + 20u);  if (depth < kMaxDepth) unit_0054(c, 264u, depth + 1u); else { c.pc = 0x00251A80u; return; } if (c.pc != 0x0024D628u) [[unlikely]] return; }
L_0024D628:
    st32((c.r[16].w[0] + 8792u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 324u)));
    set32(c.r[2], 0u + 13u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0024D658; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 320u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] + 29820u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[16].w[0] + 328u), c.r[2].w[0]);
    c.budget -= 7;
L_0024D658:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] << 1);  if (t) { goto L_0024D678; } }
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 8812u), c.r[3].w[0]);  if (t) { goto L_0024D694; } }
L_0024D678:
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 36u)));
    st32((c.r[2].w[0] + 8812u), c.r[3].w[0]);
    c.budget -= 7;
L_0024D694:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024D658u | kUnwind; return; } goto L_0024D658; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 328u)));
    set32(c.r[4], 0u + 1u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[2], c.r[2].w[0] - 5u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0024D6EC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 29888u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0024C000u < 16384u) { entry = entries_0053[(t - 0x0024C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0024D6DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 8796u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0024D6EC; } }
L_0024D6E4:
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 1;
L_0024D6E8:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024D6EC:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[4], 0u + 124u);  if (t) { goto L_0024D954; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D6FCu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0024D6FCu) [[unlikely]] return; }
L_0024D6FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_0024D748; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[14] = ld32((c.r[1].w[0] + 30088u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42400000u);
    c.f[12] = c.r[4].w[0];
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.f[13] = c.r[3].w[0];
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 12u);
    set32(c.r[8], c.r[8].w[0] + 29488u);
    set32(c.r[9], c.r[9].w[0] + 29520u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[15] = ld32((c.r[1].w[0] + 30080u));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D748u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000D(c, 34u, depth + 1u); else { c.pc = 0x00134330u; return; } if (c.pc != 0x0024D748u) [[unlikely]] return; }
L_0024D748:
    st32((c.r[16].w[0] + 8724u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D754u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0024D754u) [[unlikely]] return; }
L_0024D754:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 3u);  if (t) { goto L_0024D768; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D768u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 304u, depth + 1u); else { c.pc = 0x00196C90u; return; } if (c.pc != 0x0024D768u) [[unlikely]] return; }
L_0024D768:
    st32((c.r[16].w[0] + 8780u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[5], 0u + 10000u);
    set32(c.r[17], c.r[2].w[0] + 624u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D784u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x0024D784u) [[unlikely]] return; }
L_0024D784:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D794u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x0024D794u) [[unlikely]] return; }
L_0024D794:
    set32(c.r[4], ld32((c.r[16].w[0] + 8780u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D7A4u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x0024D7A4u) [[unlikely]] return; }
L_0024D7A4:
    set32(c.r[2], ld32((c.r[16].w[0] + 316u)));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0024D8C4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 320u)));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0024D8C4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 8780u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D7D8u); set32(c.r[5], 0u + 204u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024D7D8u) [[unlikely]] return; }
L_0024D7D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[19], ld32((c.r[2].w[0] + 332u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D7ECu); set32(c.r[4], 0u + 288u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0024D7ECu) [[unlikely]] return; }
L_0024D7EC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[4], 0u + 3u);  if (t) { goto L_0024D81C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D800u); set32(c.r[4], 0u + 801u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x0024D800u) [[unlikely]] return; }
L_0024D800:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 5u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D814u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 121u, depth + 1u); else { c.pc = 0x001632D0u; return; } if (c.pc != 0x0024D814u) [[unlikely]] return; }
L_0024D814:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 3u);
    c.budget -= 2;
L_0024D81C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D824u); st32((c.r[16].w[0] + 8728u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0024D824u) [[unlikely]] return; }
L_0024D824:
    set32(c.r[8], ld32((c.r[16].w[0] + 8728u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[7], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.f[0] = c.r[3].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43600000u);
    set32(c.r[6], 0u + 255u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[8].w[0] + 48u), c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.f[13] = c.r[4].w[0];
    st32((c.r[8].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[8].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8728u)));
    st32((c.r[2].w[0] + 60u), c.r[6].w[0]);
    c.f[0] = ld32((c.r[1].w[0] + 30072u));
    set32(c.r[2], ld32((c.r[16].w[0] + 8728u)));
    st32((c.r[2].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 30072u));
    st32((c.r[2].w[0] + 20u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[2].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 20144u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 8728u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[2], ld32((c.r[1].w[0] + 1420u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.f[0] = c.r[2].w[0];
    c.budget -= 37;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D8B8u); c.f[12] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024D8B8u) [[unlikely]] return; }
L_0024D8B8:
    set32(c.r[2], ld32((c.r[16].w[0] + 8728u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 280u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0024D8D8; } }
L_0024D8C4:
    set32(c.r[4], ld32((c.r[16].w[0] + 8780u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D8D8u); set32(c.r[5], 0u + 46u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024D8D8u) [[unlikely]] return; }
L_0024D8D8:
    c.r[3].d[0] = 0ull | 65535ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 8780u)));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[2].w[0] + 104u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8796u));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 400u);  if (t) { goto L_0024D9CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D904u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0024D904u) [[unlikely]] return; }
L_0024D904:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0024D918; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D918u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0025(c, 304u, depth + 1u); else { c.pc = 0x00196C90u; return; } if (c.pc != 0x0024D918u) [[unlikely]] return; }
L_0024D918:
    st32((c.r[16].w[0] + 8784u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D928u); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x0024D928u) [[unlikely]] return; }
L_0024D928:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D938u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x0024D938u) [[unlikely]] return; }
L_0024D938:
    set32(c.r[4], ld32((c.r[16].w[0] + 8784u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D948u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x0024D948u) [[unlikely]] return; }
L_0024D948:
    set32(c.r[2], ld32((c.r[16].w[0] + 8784u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 104u), 0u);  if (t) { goto L_0024D9C8; } }
L_0024D954:
    st32((c.r[16].w[0] + 8724u), 0u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[16].w[0] + 8780u), 0u);  if (t) { goto L_0024D9C4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], 0u + 160u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D974u); set32(c.r[17], c.r[2].w[0] + 624u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0024D974u) [[unlikely]] return; }
L_0024D974:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0024D988; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D988u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0025(c, 304u, depth + 1u); else { c.pc = 0x00196C90u; return; } if (c.pc != 0x0024D988u) [[unlikely]] return; }
L_0024D988:
    st32((c.r[16].w[0] + 8784u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D998u); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x0024D998u) [[unlikely]] return; }
L_0024D998:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D9A8u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x0024D9A8u) [[unlikely]] return; }
L_0024D9A8:
    set32(c.r[4], ld32((c.r[16].w[0] + 8784u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D9B8u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x0024D9B8u) [[unlikely]] return; }
L_0024D9B8:
    set32(c.r[2], ld32((c.r[16].w[0] + 8784u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 104u), 0u);  if (t) { goto L_0024D9C8; } }
L_0024D9C4:
    st32((c.r[16].w[0] + 8784u), 0u);
    c.budget -= 1;
L_0024D9C8:
    set32(c.r[4], c.r[16].w[0] + 400u);
    c.budget -= 1;
L_0024D9CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D9D4u); set32(c.r[5], 0u + 128u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x0024D9D4u) [[unlikely]] return; }
L_0024D9D4:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D9E4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024D9E4u) [[unlikely]] return; }
L_0024D9E4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0024DA10:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0024DC50; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 2352u);
    set32(c.r[2], c.r[2].w[0] - 2264u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 7;
L_0024DA50:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 356u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[2].w[0] + 356u);  if (t) { goto L_0024DA7C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024DA7C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DA7Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024DA7Cu) [[unlikely]] return; }
L_0024DA7C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[19].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024DA50u | kUnwind; return; } goto L_0024DA50; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 388u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_0024DAA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DAA0u);  if (depth < kMaxDepth) unit_006F(c, 211u, depth + 1u); else { c.pc = 0x002BE3B0u; return; } if (c.pc != 0x0024DAA0u) [[unlikely]] return; }
L_0024DAA0:
    st32((c.r[18].w[0] + 388u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 8724u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024DAC8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024DAC8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DAC8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024DAC8u) [[unlikely]] return; }
L_0024DAC8:
    st32((c.r[18].w[0] + 8724u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 8728u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024DAF0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024DAF0; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DAF0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024DAF0u) [[unlikely]] return; }
L_0024DAF0:
    st32((c.r[18].w[0] + 8728u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 392u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024DB18; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024DB18; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DB18u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024DB18u) [[unlikely]] return; }
L_0024DB18:
    st32((c.r[18].w[0] + 392u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 396u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024DB40; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024DB40; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DB40u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024DB40u) [[unlikely]] return; }
L_0024DB40:
    st32((c.r[18].w[0] + 396u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 8780u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024DB68; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024DB68; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DB68u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024DB68u) [[unlikely]] return; }
L_0024DB68:
    st32((c.r[18].w[0] + 8780u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 8784u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024DB90; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024DB90; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DB90u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024DB90u) [[unlikely]] return; }
L_0024DB90:
    st32((c.r[18].w[0] + 8784u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 8720u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024DBB8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024DBB8; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DBB8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024DBB8u) [[unlikely]] return; }
L_0024DBB8:
    st32((c.r[18].w[0] + 8720u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 8788u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024DBE0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024DBE0; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DBE0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024DBE0u) [[unlikely]] return; }
L_0024DBE0:
    st32((c.r[18].w[0] + 8788u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 8792u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024DC08; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024DC08; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DC08u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024DC08u) [[unlikely]] return; }
L_0024DC08:
    set32(c.r[4], c.r[18].w[0] + 380u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DC18u); st32((c.r[18].w[0] + 8792u), 0u);  if (depth < kMaxDepth) unit_006F(c, 138u, depth + 1u); else { c.pc = 0x002BD820u; return; } if (c.pc != 0x0024DC18u) [[unlikely]] return; }
L_0024DC18:
    set32(c.r[2], c.r[18].w[0] + 20u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0024DC30; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 2248u);
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 3;
L_0024DC30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DC38u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 300u, depth + 1u); else { c.pc = 0x0012E490u; return; } if (c.pc != 0x0024DC38u) [[unlikely]] return; }
L_0024DC38:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0024DC54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DC50u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0024DC50u) [[unlikely]] return; }
L_0024DC50:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0024DC54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0024DC70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0024DCC0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 2480u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0024DCA4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 18416u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
L_0024DCA4:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0024DCBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DCBCu);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0024DCBCu) [[unlikely]] return; }
L_0024DCBC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0024DCC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0024DCD0:
    set32(c.r[29], c.r[29].w[0] - 320u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0024DD28; } }
L_0024DCFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DD04u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 397u, depth + 1u); else { c.pc = 0x0024F4C0u; return; } if (c.pc != 0x0024DD04u) [[unlikely]] return; }
L_0024DD04:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0024DD24; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 8799u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0024DD34; } }
L_0024DD24:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0024DD28:
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024DCFCu | kUnwind; return; } goto L_0024DCFC; } }
L_0024DD34:
    set32(c.r[3], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 24u);  if (t) { goto L_0024DD5C; } }
L_0024DD40:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024DD40u | kUnwind; return; } goto L_0024DD40; } }
L_0024DD5C:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] << 1);
    c.budget -= 2;
L_0024DD64:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024DF70; } }
    set32(c.r[19], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[17], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[29].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[18], c.r[2].w[0] + 256u);
    set32(c.r[2], c.r[19].w[0] << 2);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    st32((c.r[18].w[0]), c.r[19].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DDA8u); set32(c.r[21], c.r[2].w[0] + 224u);  if (depth < kMaxDepth) unit_0053(c, 397u, depth + 1u); else { c.pc = 0x0024F4C0u; return; } if (c.pc != 0x0024DDA8u) [[unlikely]] return; }
L_0024DDA8:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    set32(c.r[3], ld32((c.r[21].w[0])));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    mmi::mult(c, 0, c.r[19].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[20].w[0] + 328u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(23ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_0024DF64; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 29952u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0024C000u < 16384u) { entry = entries_0053[(t - 0x0024C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0024DDE4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 29776u);
    set32(c.r[2], c.r[17].w[0] + c.r[29].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 288u), c.r[3].w[0]);  if (t) { goto L_0024DF64; } }
L_0024DE04:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 29600u);
    st32((c.r[18].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[17].w[0] + c.r[29].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 288u), c.r[3].w[0]);  if (t) { goto L_0024DF64; } }
L_0024DE28:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 29584u);
    set32(c.r[2], c.r[17].w[0] + c.r[29].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 288u), c.r[3].w[0]);  if (t) { goto L_0024DF64; } }
L_0024DE48:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 29792u);
    set32(c.r[2], c.r[17].w[0] + c.r[29].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 288u), c.r[3].w[0]);  if (t) { goto L_0024DF64; } }
L_0024DE68:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 29648u);
    st32((c.r[18].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[17].w[0] + c.r[29].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 288u), c.r[3].w[0]);  if (t) { goto L_0024DF64; } }
L_0024DE8C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 29616u);
    set32(c.r[2], c.r[17].w[0] + c.r[29].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 288u), c.r[3].w[0]);  if (t) { goto L_0024DF64; } }
L_0024DEAC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 29712u);
    st32((c.r[18].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[17].w[0] + c.r[29].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 288u), c.r[3].w[0]);  if (t) { goto L_0024DF64; } }
L_0024DED0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 29680u);
    set32(c.r[2], c.r[17].w[0] + c.r[29].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 288u), c.r[3].w[0]);  if (t) { goto L_0024DF64; } }
L_0024DEF0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 29744u);
    set32(c.r[2], c.r[17].w[0] + c.r[29].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 288u), c.r[3].w[0]);  if (t) { goto L_0024DF64; } }
L_0024DF10:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 29552u);
    set32(c.r[2], c.r[17].w[0] + c.r[29].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 288u), c.r[3].w[0]);  if (t) { goto L_0024DF64; } }
L_0024DF30:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[17].w[0] + c.r[29].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 29544u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 288u), c.r[3].w[0]);  if (t) { goto L_0024DF64; } }
L_0024DF44:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 29560u);
    st32((c.r[18].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[17].w[0] + c.r[29].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[2].w[0] + 288u), c.r[3].w[0]);
    c.budget -= 8;
L_0024DF64:
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0024DF70:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024DD64u | kUnwind; return; } goto L_0024DD64; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DF90u); set32(c.r[6], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0053(c, 271u, depth + 1u); else { c.pc = 0x0024E080u; return; } if (c.pc != 0x0024DF90u) [[unlikely]] return; }
L_0024DF90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DF98u);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x0024DF98u) [[unlikely]] return; }
L_0024DF98:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DFACu); st32((c.r[29].w[0] + 316u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0024DFACu) [[unlikely]] return; }
L_0024DFAC:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[16].w[0] << 2);
    c.budget -= 2;
L_0024DFB4:
    set32(c.r[21], c.r[20].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 356u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[21].w[0] + 356u);  if (t) { goto L_0024E044; } }
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[18], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[4], c.r[29].w[0] + 112u);  if (t) { goto L_0024E044; } }
    set32(c.r[5], c.r[18].w[0] + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DFECu); set32(c.r[6], 0u + 48u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0024DFECu) [[unlikely]] return; }
L_0024DFEC:
    set32(c.r[3], c.r[17].w[0] + c.r[29].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 192u)));
    st32((c.r[29].w[0] + 120u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 160u)));
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 56u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E00Cu); set32(c.r[4], c.r[20].w[0] + 380u);  if (depth < kMaxDepth) unit_006F(c, 204u, depth + 1u); else { c.pc = 0x002BE2C0u; return; } if (c.pc != 0x0024E00Cu) [[unlikely]] return; }
L_0024E00C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E018u); set32(c.r[4], 0u + 208u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0024E018u) [[unlikely]] return; }
L_0024E018:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[17].w[0] + c.r[29].w[0]);  if (t) { goto L_0024E040; } }
    set32(c.r[9], ld32((c.r[21].w[0] + 8812u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 288u)));
    c.r[10].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[3].w[0] + 256u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E040u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0053(c, 445u, depth + 1u); else { c.pc = 0x0024FBF0u; return; } if (c.pc != 0x0024E040u) [[unlikely]] return; }
L_0024E040:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0024E044:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024DFB4u | kUnwind; return; } goto L_0024DFB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E05Cu); set32(c.r[4], ld32((c.r[29].w[0] + 316u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0024E05Cu) [[unlikely]] return; }
L_0024E05C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_0024E080:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 22720u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[19], 0u - 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 80u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], 0u + 24u);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[6].w[0]) & ~15u, c.r[3]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E0D0u); st64((c.r[6].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x0024E0D0u) [[unlikely]] return; }
L_0024E0D0:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], c.r[2].w[0] << 1);
    c.budget -= 3;
L_0024E0DC:
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[5], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 32u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024E1B4; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 8800u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[2].w[0] << 2);  if (t) { goto L_0024E150; } }
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 356u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024E1B4; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024E138; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 8808u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0024E140; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024E140; } }
L_0024E138:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 8808u), c.r[2].w[0]);  if (t) { goto L_0024E1B4; } }
L_0024E140:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[4].d[0];  if (t) { goto L_0024E1B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0024E1B4; } }
L_0024E150:
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 356u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024E1B4; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 8808u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0024E1B4; } }
    set32(c.r[5], ld32((c.r[5].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0024E180; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 8808u), c.r[2].w[0]);  if (t) { goto L_0024E1B4; } }
L_0024E180:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[4].d[0];  if (t) { goto L_0024E1B0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0024E1B4; } }
    set32(c.r[3], c.r[19].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 36u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0024E1B4; } }
L_0024E1B0:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0024E1B4:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[3].d[0] = c.r[2].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[2].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024E0DCu | kUnwind; return; } goto L_0024E0DC; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 8808u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0024E1D8; } }
    st32((c.r[18].w[0] + 8808u), c.r[19].w[0]);
    c.budget -= 1;
L_0024E1D8:
    set32(c.r[3], 0u + 6u);
    set32(c.r[2], c.r[4].w[0] << 1);
    c.budget -= 2;
L_0024E1E0:
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[6], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 32u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[4].w[0] << 2);  if (t) { goto L_0024E258; } }
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[5], c.r[2].w[0] + 112u);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0024E258; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 36u)));
    set32(c.r[7], c.r[4].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[2].w[0]);  if (t) { goto L_0024E24C; } }
L_0024E21C:
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0024E248; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[7].w[0] << 2);  if (t) { goto L_0024E248; } }
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    st32((c.r[2].w[0] + 112u), c.r[3].w[0]);
    c.budget -= 2;
L_0024E248:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_0024E24C:
    c.r[2].d[0] = c.r[7].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[7].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024E21Cu | kUnwind; return; } goto L_0024E21C; } }
L_0024E258:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024E1E0u | kUnwind; return; } goto L_0024E1E0; } }
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 6u);
    set32(c.r[7], 0u - 1u);
    set32(c.r[2], c.r[3].w[0] << 1);
    c.budget -= 4;
L_0024E278:
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] << 2);  if (t) { goto L_0024E300; } }
    set32(c.r[4], c.r[4].w[0] + c.r[29].w[0]);
    set32(c.r[5], c.r[4].w[0] + 80u);
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[7].d[0];  if (t) { goto L_0024E300; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 40u)));
    st32((c.r[5].w[0]), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[6].d[0];  if (t) { goto L_0024E300; } }
    st32((c.r[5].w[0]), c.r[4].w[0]);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[8].w[0] << 1);
    c.budget -= 3;
L_0024E2C4:
    set32(c.r[4], ld32((c.r[2].w[0] + 40u)));
    set32(c.r[5], c.r[5].w[0] + c.r[8].w[0]);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[5], c.r[18].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 40u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_0024E2F0; } }
    set32(c.r[5], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[4], c.r[8].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[29].w[0]);
    st32((c.r[4].w[0] + 80u), c.r[5].w[0]);
    c.budget -= 4;
L_0024E2F0:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[4].d[0] = c.r[8].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[5], c.r[8].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024E2C4u | kUnwind; return; } goto L_0024E2C4; } }
L_0024E300:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024E278u | kUnwind; return; } goto L_0024E278; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E320u); set32(c.r[6], 0u + 24u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0024E320u) [[unlikely]] return; }
L_0024E320:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E330u); set32(c.r[6], 0u + 24u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0024E330u) [[unlikely]] return; }
L_0024E330:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0024E350:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E368u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 317u, depth + 1u); else { c.pc = 0x0012E5D0u; return; } if (c.pc != 0x0024E368u) [[unlikely]] return; }
L_0024E368:
    set32(c.r[2], ld32((c.r[16].w[0] + 324u)));
    set32(c.r[4], 0u + 56u);
    c.r[2].d[0] = c.r[2].d[0] ^ 84ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E37Cu); c.r[17].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0024E37Cu) [[unlikely]] return; }
L_0024E37C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0024E38C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E38Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 405u, depth + 1u); else { c.pc = 0x0026FBA0u; return; } if (c.pc != 0x0024E38Cu) [[unlikely]] return; }
L_0024E38C:
    st32((c.r[16].w[0] + 392u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E398u); set32(c.r[4], 0u + 40u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0024E398u) [[unlikely]] return; }
L_0024E398:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 13312u);  if (t) { goto L_0024E3BC; } }
    set32(c.r[2], 0u + 15295u);
    st16((c.r[29].w[0] + 60u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[29].w[0] + 60u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E3B8u); st16((c.r[29].w[0] + 62u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0054(c, 235u, depth + 1u); else { c.pc = 0x00251760u; return; } if (c.pc != 0x0024E3B8u) [[unlikely]] return; }
L_0024E3B8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0024E3BC:
    st32((c.r[16].w[0] + 396u), c.r[4].w[0]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[17].w[0] << 2);
    c.budget -= 3;
L_0024E3C8:
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 356u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024E3E8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E3E8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024E3E8u) [[unlikely]] return; }
L_0024E3E8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[17].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024E3C8u | kUnwind; return; } goto L_0024E3C8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0024E410:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E430u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000B(c, 318u, depth + 1u); else { c.pc = 0x0012E5E0u; return; } if (c.pc != 0x0024E430u) [[unlikely]] return; }
L_0024E430:
    set32(c.r[4], ld32((c.r[18].w[0] + 392u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], c.r[18].w[0] + 400u);  if (t) { goto L_0024E444; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E444u);  if (depth < kMaxDepth) unit_005B(c, 425u, depth + 1u); else { c.pc = 0x0026FE60u; return; } if (c.pc != 0x0024E444u) [[unlikely]] return; }
L_0024E444:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 8800u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[18].w[0] + 380u);  if (t) { goto L_0024E468; } }
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], c.r[18].w[0] + 400u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E460u); set32(c.r[7], c.r[18].w[0] + 28u);  if (depth < kMaxDepth) unit_006F(c, 141u, depth + 1u); else { c.pc = 0x002BD880u; return; } if (c.pc != 0x0024E460u) [[unlikely]] return; }
L_0024E460:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[18].w[0] + 8724u)));  if (t) { goto L_0024E510; } }
L_0024E468:
    set32(c.r[3], ld32((c.r[18].w[0] + 324u)));
    set32(c.r[2], 0u + 84u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 83u);  if (t) { goto L_0024E494; } }
    set32(c.r[4], c.r[18].w[0] + 380u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], c.r[18].w[0] + 400u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E48Cu); set32(c.r[7], c.r[18].w[0] + 28u);  if (depth < kMaxDepth) unit_006F(c, 141u, depth + 1u); else { c.pc = 0x002BD880u; return; } if (c.pc != 0x0024E48Cu) [[unlikely]] return; }
L_0024E48C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024E50C; } }
L_0024E494:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[18].w[0] + 380u);  if (t) { goto L_0024E4B8; } }
    set32(c.r[4], c.r[18].w[0] + 380u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], c.r[18].w[0] + 400u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E4B0u); set32(c.r[7], c.r[18].w[0] + 28u);  if (depth < kMaxDepth) unit_006F(c, 141u, depth + 1u); else { c.pc = 0x002BD880u; return; } if (c.pc != 0x0024E4B0u) [[unlikely]] return; }
L_0024E4B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024E50C; } }
L_0024E4B8:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[18].w[0] + 400u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E4C8u); set32(c.r[7], c.r[18].w[0] + 28u);  if (depth < kMaxDepth) unit_006F(c, 141u, depth + 1u); else { c.pc = 0x002BD880u; return; } if (c.pc != 0x0024E4C8u) [[unlikely]] return; }
L_0024E4C8:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[16].w[0] << 1);
    c.budget -= 2;
L_0024E4D0:
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[4], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 48u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0024E4FC; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[6], 0u + 6u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E4FCu); set32(c.r[4], c.r[18].w[0] + 380u);  if (depth < kMaxDepth) unit_006F(c, 201u, depth + 1u); else { c.pc = 0x002BE260u; return; } if (c.pc != 0x0024E4FCu) [[unlikely]] return; }
L_0024E4FC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[16].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024E4D0u | kUnwind; return; } goto L_0024E4D0; } }
L_0024E50C:
    set32(c.r[4], ld32((c.r[18].w[0] + 8724u)));
    c.budget -= 1;
L_0024E510:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024E520; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E520u);  if (depth < kMaxDepth) unit_000D(c, 68u, depth + 1u); else { c.pc = 0x001348C0u; return; } if (c.pc != 0x0024E520u) [[unlikely]] return; }
L_0024E520:
    set32(c.r[4], ld32((c.r[18].w[0] + 8784u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024E5AC; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 328u)));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0024E554; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E54Cu); set32(c.r[5], 0u + 36u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024E54Cu) [[unlikely]] return; }
L_0024E54C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[18].w[0] + 324u)));  if (t) { goto L_0024E5B0; } }
L_0024E554:
    set32(c.r[3], ld32((c.r[18].w[0] + 316u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0024E58C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[3], 0u + 39u);
    c.r[5].d[0] = ld8((c.r[18].w[0] + 8800u));
    set32(c.r[2], 0u + 31u);
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    if (c.r[5].d[0] == 0) c.r[3].d[0] = c.r[2].d[0];
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E584u); c.r[5].d[0] = c.r[3].d[0] & 65535ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024E584u) [[unlikely]] return; }
L_0024E584:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024E5AC; } }
L_0024E58C:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[3], 0u + 42u);
    c.r[5].d[0] = ld8((c.r[18].w[0] + 8800u));
    set32(c.r[2], 0u + 28u);
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    if (c.r[5].d[0] == 0) c.r[3].d[0] = c.r[2].d[0];
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E5ACu); c.r[5].d[0] = c.r[3].d[0] & 65535ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024E5ACu) [[unlikely]] return; }
L_0024E5AC:
    set32(c.r[3], ld32((c.r[18].w[0] + 324u)));
    c.budget -= 1;
L_0024E5B0:
    set32(c.r[2], 0u + 13u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0024E5D4; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 320u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0024E5E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0024E5E8; } }
L_0024E5D4:
    set32(c.r[3], ld32((c.r[18].w[0] + 316u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0024E5E8; } }
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0024E5E8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_0024E6A0; } }
    set32(c.r[5], 0u + 12u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E600u); set32(c.r[4], c.r[2].w[0] + 624u);  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x0024E600u) [[unlikely]] return; }
L_0024E600:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E60Cu); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0024E60Cu) [[unlikely]] return; }
L_0024E60C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024E624; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[5].d[0] = ld64((c.r[3].w[0] + 16u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E624u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x0024E624u) [[unlikely]] return; }
L_0024E624:
    st32((c.r[18].w[0] + 8720u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 30064u));
    set32(c.r[3], ld32((c.r[18].w[0] + 8720u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[3].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 30088u));
    st32((c.r[3].w[0] + 20u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[3].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1420u)));
    c.budget -= 17;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_0024E670; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_0024E670:
    set32(c.r[4], ld32((c.r[18].w[0] + 8720u)));
    c.f[0] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x433C0000u);
    c.f[13] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E6A0u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024E6A0u) [[unlikely]] return; }
L_0024E6A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E6A8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 243u, depth + 1u); else { c.pc = 0x0024DCD0u; return; } if (c.pc != 0x0024E6A8u) [[unlikely]] return; }
L_0024E6A8:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 8799u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 6u);  if (t) { goto L_0024E6C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E6BCu); set32(c.r[4], 0u + 7u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x0024E6BCu) [[unlikely]] return; }
L_0024E6BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[18].w[0] + 8800u));  if (t) { goto L_0024E6D0; } }
L_0024E6C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E6CCu);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x0024E6CCu) [[unlikely]] return; }
L_0024E6CC:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 8800u));
    c.budget -= 1;
L_0024E6D0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0024E714; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0024E708; } }
L_0024E6E0:
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 356u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024E704; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024E704; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0024E714; } }
L_0024E704:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_0024E708:
    c.r[3].d[0] = c.r[4].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024E6E0u | kUnwind; return; } goto L_0024E6E0; } }
L_0024E714:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[16].w[0] << 2);
    c.budget -= 2;
L_0024E71C:
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 356u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[3].w[0] + 356u);  if (t) { goto L_0024E7E4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E73Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024E73Cu) [[unlikely]] return; }
L_0024E73C:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 8800u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024E7B0; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_0024E760; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E758u); set32(c.r[4], ld32((c.r[19].w[0])));  if (depth < kMaxDepth) unit_0054(c, 169u, depth + 1u); else { c.pc = 0x00251000u; return; } if (c.pc != 0x0024E758u) [[unlikely]] return; }
L_0024E758:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_0024E7E8; } }
L_0024E760:
    set32(c.r[4], ld32((c.r[19].w[0])));
    set32(c.r[3], 0u + 6u);
    set32(c.r[5], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0024E78C; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 320u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 6u);  if (t) { goto L_0024E7A0; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 8808u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_0024E79C; } }
L_0024E78C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E794u);  if (depth < kMaxDepth) unit_0054(c, 169u, depth + 1u); else { c.pc = 0x00251000u; return; } if (c.pc != 0x0024E794u) [[unlikely]] return; }
L_0024E794:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024E7E4; } }
L_0024E79C:
    set32(c.r[3], 0u + 6u);
    c.budget -= 1;
L_0024E7A0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0024E7E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 8804u), c.r[16].w[0]);  if (t) { goto L_0024E7E4; } }
L_0024E7B0:
    set32(c.r[4], ld32((c.r[19].w[0])));
    set32(c.r[3], 0u + 6u);
    set32(c.r[5], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0024E7DC; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 320u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024E7E4; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 8808u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_0024E7E4; } }
L_0024E7DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E7E4u);  if (depth < kMaxDepth) unit_0054(c, 169u, depth + 1u); else { c.pc = 0x00251000u; return; } if (c.pc != 0x0024E7E4u) [[unlikely]] return; }
L_0024E7E4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0024E7E8:
    c.r[3].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024E71Cu | kUnwind; return; } goto L_0024E71C; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0024E810:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E828u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000B(c, 319u, depth + 1u); else { c.pc = 0x0012E600u; return; } if (c.pc != 0x0024E828u) [[unlikely]] return; }
L_0024E828:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[16].w[0] << 2);
    c.budget -= 2;
L_0024E830:
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 356u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024E850; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E850u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024E850u) [[unlikely]] return; }
L_0024E850:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024E830u | kUnwind; return; } goto L_0024E830; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024E880:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E8A8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000B(c, 320u, depth + 1u); else { c.pc = 0x0012E610u; return; } if (c.pc != 0x0024E8A8u) [[unlikely]] return; }
L_0024E8A8:
    set32(c.r[4], ld32((c.r[20].w[0] + 8784u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024E934; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 328u)));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0024E8DC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E8D4u); set32(c.r[5], 0u + 38u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024E8D4u) [[unlikely]] return; }
L_0024E8D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[20].w[0] + 8724u)));  if (t) { goto L_0024E938; } }
L_0024E8DC:
    set32(c.r[3], ld32((c.r[20].w[0] + 316u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0024E914; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[3], 0u + 41u);
    c.r[5].d[0] = ld8((c.r[20].w[0] + 8800u));
    set32(c.r[2], 0u + 33u);
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    if (c.r[5].d[0] == 0) c.r[3].d[0] = c.r[2].d[0];
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E90Cu); c.r[5].d[0] = c.r[3].d[0] & 65535ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024E90Cu) [[unlikely]] return; }
L_0024E90C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024E934; } }
L_0024E914:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[3], 0u + 44u);
    c.r[5].d[0] = ld8((c.r[20].w[0] + 8800u));
    set32(c.r[2], 0u + 30u);
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    if (c.r[5].d[0] == 0) c.r[3].d[0] = c.r[2].d[0];
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E934u); c.r[5].d[0] = c.r[3].d[0] & 65535ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024E934u) [[unlikely]] return; }
L_0024E934:
    set32(c.r[4], ld32((c.r[20].w[0] + 8724u)));
    c.budget -= 1;
L_0024E938:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0024E94C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E948u);  if (depth < kMaxDepth) unit_000D(c, 69u, depth + 1u); else { c.pc = 0x001348D0u; return; } if (c.pc != 0x0024E948u) [[unlikely]] return; }
L_0024E948:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024E94C:
    set32(c.r[2], c.r[19].w[0] << 2);
    c.budget -= 1;
L_0024E950:
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0] + 356u)));
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0024EA60; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E970u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024E970u) [[unlikely]] return; }
L_0024E970:
    set32(c.r[2], c.r[19].w[0] << 1);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[21], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E98Cu); set32(c.r[17], c.r[21].w[0] + 56u);  if (depth < kMaxDepth) unit_0054(c, 200u, depth + 1u); else { c.pc = 0x002512F0u; return; } if (c.pc != 0x0024E98Cu) [[unlikely]] return; }
L_0024E98C:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E998u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 200u, depth + 1u); else { c.pc = 0x002512F0u; return; } if (c.pc != 0x0024E998u) [[unlikely]] return; }
L_0024E998:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E9A4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 203u, depth + 1u); else { c.pc = 0x00251340u; return; } if (c.pc != 0x0024E9A4u) [[unlikely]] return; }
L_0024E9A4:
    set32(c.r[4], ld32((c.r[20].w[0] + 392u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E9B4u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 6u, depth + 1u); else { c.pc = 0x002700F0u; return; } if (c.pc != 0x0024E9B4u) [[unlikely]] return; }
L_0024E9B4:
    st32((c.r[21].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E9C0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 204u, depth + 1u); else { c.pc = 0x00251360u; return; } if (c.pc != 0x0024E9C0u) [[unlikely]] return; }
L_0024E9C0:
    st32((c.r[21].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E9CCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 433u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x0024E9CCu) [[unlikely]] return; }
L_0024E9CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0024E9E4; } }
    set32(c.r[2], 0u + 5u);
    st32((c.r[21].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 72u), c.r[2].w[0]);  if (t) { goto L_0024E9FC; } }
L_0024E9E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E9ECu);  if (depth < kMaxDepth) unit_0054(c, 201u, depth + 1u); else { c.pc = 0x00251300u; return; } if (c.pc != 0x0024E9ECu) [[unlikely]] return; }
L_0024E9EC:
    st32((c.r[21].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E9F8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 202u, depth + 1u); else { c.pc = 0x00251320u; return; } if (c.pc != 0x0024E9F8u) [[unlikely]] return; }
L_0024E9F8:
    st32((c.r[21].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 1;
L_0024E9FC:
    set32(c.r[3], ld32((c.r[20].w[0] + 324u)));
    set32(c.r[2], 0u + 13u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0024EA60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EA14u); c.r[16].d[0] = ld16((c.r[17].w[0]));  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x0024EA14u) [[unlikely]] return; }
L_0024EA14:
    set32(c.r[4], c.r[19].w[0] << 1);
    set32(c.r[3], 0u + 30u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st16((c.r[2].w[0] + 580u), static_cast<std::uint16_t>(c.r[16].w[0]));
    set32(c.r[18], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 7;
    { const bool t = c.r[18].d[0] != c.r[3].d[0];  if (t) { goto L_0024EA4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EA38u);  if (depth < kMaxDepth) unit_0010(c, 15u, depth + 1u); else { c.pc = 0x00140210u; return; } if (c.pc != 0x0024EA38u) [[unlikely]] return; }
L_0024EA38:
    set32(c.r[5], 0u + 30u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EA44u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 228u, depth + 1u); else { c.pc = 0x0011B928u; return; } if (c.pc != 0x0024EA44u) [[unlikely]] return; }
L_0024EA44:
    c.r[18].d[0] = c.r[2].d[0] << 32;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 32);
    c.budget -= 2;
L_0024EA4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EA54u); c.r[16].d[0] = ld16((c.r[17].w[0]));  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x0024EA54u) [[unlikely]] return; }
L_0024EA54:
    set32(c.r[3], c.r[18].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st16((c.r[2].w[0] + 520u), static_cast<std::uint16_t>(c.r[16].w[0]));
    c.budget -= 3;
L_0024EA60:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[19].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024E950u | kUnwind; return; } goto L_0024E950; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 24u)));
    set32(c.r[5], c.r[20].w[0] + 28u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EA80u); set32(c.r[6], 0u + 328u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0024EA80u) [[unlikely]] return; }
L_0024EA80:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EA94u); set32(c.r[5], 0u + 405u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024EA94u) [[unlikely]] return; }
L_0024EA94:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0024EAC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EAD8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 321u, depth + 1u); else { c.pc = 0x0012E630u; return; } if (c.pc != 0x0024EAD8u) [[unlikely]] return; }
L_0024EAD8:
    set32(c.r[4], ld32((c.r[16].w[0] + 8784u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024EB64; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 328u)));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0024EB0C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EB04u); set32(c.r[5], 0u + 37u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024EB04u) [[unlikely]] return; }
L_0024EB04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 8724u)));  if (t) { goto L_0024EB68; } }
L_0024EB0C:
    set32(c.r[3], ld32((c.r[16].w[0] + 316u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0024EB44; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[3], 0u + 40u);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8800u));
    set32(c.r[2], 0u + 32u);
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    if (c.r[5].d[0] == 0) c.r[3].d[0] = c.r[2].d[0];
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EB3Cu); c.r[5].d[0] = c.r[3].d[0] & 65535ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024EB3Cu) [[unlikely]] return; }
L_0024EB3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024EB64; } }
L_0024EB44:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[3], 0u + 43u);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8800u));
    set32(c.r[2], 0u + 29u);
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    if (c.r[5].d[0] == 0) c.r[3].d[0] = c.r[2].d[0];
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EB64u); c.r[5].d[0] = c.r[3].d[0] & 65535ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024EB64u) [[unlikely]] return; }
L_0024EB64:
    set32(c.r[4], ld32((c.r[16].w[0] + 8724u)));
    c.budget -= 1;
L_0024EB68:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0024EB7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EB78u);  if (depth < kMaxDepth) unit_000D(c, 69u, depth + 1u); else { c.pc = 0x001348D0u; return; } if (c.pc != 0x0024EB78u) [[unlikely]] return; }
L_0024EB78:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024EB7C:
    set32(c.r[3], c.r[17].w[0] << 2);
    c.budget -= 1;
L_0024EB80:
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 356u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024EBA0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EBA0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024EBA0u) [[unlikely]] return; }
L_0024EBA0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[17].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024EB80u | kUnwind; return; } goto L_0024EB80; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024EBD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EBE4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 304u, depth + 1u); else { c.pc = 0x0012E500u; return; } if (c.pc != 0x0024EBE4u) [[unlikely]] return; }
L_0024EBE4:
    set32(c.r[3], ld32((c.r[16].w[0] + 8720u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024EC14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EBF8u); set32(c.r[4], ld32((c.r[16].w[0] + 8724u)));  if (depth < kMaxDepth) unit_000D(c, 70u, depth + 1u); else { c.pc = 0x001348E0u; return; } if (c.pc != 0x0024EBF8u) [[unlikely]] return; }
L_0024EBF8:
    set32(c.r[3], ld32((c.r[16].w[0] + 8720u)));
    st32((c.r[3].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 8720u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EC14u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024EC14u) [[unlikely]] return; }
L_0024EC14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0024EC30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x6D6E0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[5].d[0] = c.r[2].d[0] | 21335ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EC60u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x0024EC60u) [[unlikely]] return; }
L_0024EC60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0024EC6C; } }
    set32(c.r[18], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_0024EC6C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0024EC9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EC7Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0053(c, 82u, depth + 1u); else { c.pc = 0x0024C840u; return; } if (c.pc != 0x0024EC7Cu) [[unlikely]] return; }
L_0024EC7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0024EC88; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0024EC88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EC90u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0053(c, 82u, depth + 1u); else { c.pc = 0x0024C840u; return; } if (c.pc != 0x0024EC90u) [[unlikely]] return; }
L_0024EC90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024EC9C; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0024EC9C:
    set32(c.r[18], ld32((c.r[17].w[0] + 392u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[4], c.r[18].w[0] + 8u);  if (t) { goto L_0024ECD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024ECB0u);  if (depth < kMaxDepth) unit_0011(c, 177u, depth + 1u); else { c.pc = 0x00146C10u; return; } if (c.pc != 0x0024ECB0u) [[unlikely]] return; }
L_0024ECB0:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[18].w[0] + 8u);  if (t) { goto L_0024ECC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024ECC4u);  if (depth < kMaxDepth) unit_0011(c, 182u, depth + 1u); else { c.pc = 0x00146C90u; return; } if (c.pc != 0x0024ECC4u) [[unlikely]] return; }
L_0024ECC4:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0024ECC8:
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024ECD8; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0024ECD8:
    set32(c.r[18], ld32((c.r[17].w[0] + 396u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[4], c.r[18].w[0] + 8u);  if (t) { goto L_0024ED14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024ECECu);  if (depth < kMaxDepth) unit_0011(c, 177u, depth + 1u); else { c.pc = 0x00146C10u; return; } if (c.pc != 0x0024ECECu) [[unlikely]] return; }
L_0024ECEC:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[18].w[0] + 8u);  if (t) { goto L_0024ED04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024ED00u);  if (depth < kMaxDepth) unit_0011(c, 182u, depth + 1u); else { c.pc = 0x00146C90u; return; } if (c.pc != 0x0024ED00u) [[unlikely]] return; }
L_0024ED00:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0024ED04:
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024ED14; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0024ED14:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0024EDE0; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024ED2Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024ED2Cu) [[unlikely]] return; }
L_0024ED2C:
    set32(c.r[4], ld32((c.r[17].w[0] + 8780u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024EE0C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 316u)));
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0024EE0C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 320u)));
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0024EE0C; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 137u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024ED90; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024ED74u); set32(c.r[5], 0u + 205u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024ED74u) [[unlikely]] return; }
L_0024ED74:
    c.r[4].d[0] = 0ull | 65535ull;
    set32(c.r[3], ld32((c.r[17].w[0] + 8780u)));
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 104u), c.f[0]);  if (t) { goto L_0024EDB4; } }
L_0024ED90:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024EDB0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024EDB0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EDB0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024EDB0u) [[unlikely]] return; }
L_0024EDB0:
    st32((c.r[17].w[0] + 8780u), 0u);
    c.budget -= 1;
L_0024EDB4:
    set32(c.r[4], ld32((c.r[17].w[0] + 8728u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024EDD8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024EDD8; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EDD8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024EDD8u) [[unlikely]] return; }
L_0024EDD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8728u), 0u);  if (t) { goto L_0024EE0C; } }
L_0024EDE0:
    set32(c.r[4], ld32((c.r[17].w[0] + 8728u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024EE0C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 8780u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024EE0C; } }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 137u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024EE0C; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 280u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0024EE0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0024EE30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EE44u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 382u, depth + 1u); else { c.pc = 0x0024F020u; return; } if (c.pc != 0x0024EE44u) [[unlikely]] return; }
L_0024EE44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024EE5C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EE5Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024EE5Cu) [[unlikely]] return; }
L_0024EE5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0024EE70:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[17].w[0] << 2);
    c.budget -= 10;
L_0024EE98:
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 356u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[3].w[0] + 356u);  if (t) { goto L_0024EF0C; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[3], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0024EEC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EEC0u);  if (depth < kMaxDepth) unit_0054(c, 205u, depth + 1u); else { c.pc = 0x00251380u; return; } if (c.pc != 0x0024EEC0u) [[unlikely]] return; }
L_0024EEC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024EECC; } }
L_0024EEC8:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024EECC:
    set32(c.r[3], ld32((c.r[19].w[0] + 8808u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[17].d[0];  if (t) { goto L_0024EF0C; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 7u);
    set32(c.r[5], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0024EF0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EEF4u);  if (depth < kMaxDepth) unit_0054(c, 205u, depth + 1u); else { c.pc = 0x00251380u; return; } if (c.pc != 0x0024EEF4u) [[unlikely]] return; }
L_0024EEF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024EF0C; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EF0Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024EF0Cu) [[unlikely]] return; }
L_0024EF0C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[17].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024EE98u | kUnwind; return; } goto L_0024EE98; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0024EF38; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EF34u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024EF34u) [[unlikely]] return; }
L_0024EF34:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024EF38:
    set32(c.r[3], c.r[19].w[0] + c.r[16].w[0]);
    c.budget -= 1;
L_0024EF3C:
    set32(c.r[17], c.r[3].w[0] + 8797u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 8797u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024EF64; } }
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8788u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EF60u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 265u, depth + 1u); else { c.pc = 0x00251AB0u; return; } if (c.pc != 0x0024EF60u) [[unlikely]] return; }
L_0024EF60:
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0024EF64:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[19].w[0] + c.r[16].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024EF3Cu | kUnwind; return; } goto L_0024EF3C; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0024EF90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EFA4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 382u, depth + 1u); else { c.pc = 0x0024F020u; return; } if (c.pc != 0x0024EFA4u) [[unlikely]] return; }
L_0024EFA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024EFBC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EFBCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024EFBCu) [[unlikely]] return; }
L_0024EFBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0024EFD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EFE4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 382u, depth + 1u); else { c.pc = 0x0024F020u; return; } if (c.pc != 0x0024EFE4u) [[unlikely]] return; }
L_0024EFE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024EFFC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EFFCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024EFFCu) [[unlikely]] return; }
L_0024EFFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0024F010:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024F020:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 8784u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0024F058; } }
    c.r[2].d[0] = ld8((c.r[2].w[0] + 137u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0024F05C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0024F098; } }
L_0024F058:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024F05C:
    set32(c.r[2], c.r[18].w[0] << 2);
    c.budget -= 1;
L_0024F060:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 356u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024F084; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F078u);  if (depth < kMaxDepth) unit_0054(c, 205u, depth + 1u); else { c.pc = 0x00251380u; return; } if (c.pc != 0x0024F078u) [[unlikely]] return; }
L_0024F078:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024F084; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024F084:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[18].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024F060u | kUnwind; return; } goto L_0024F060; } }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0024F098:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0024F0B0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], c.r[5].w[0] << 1);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[3], c.r[3].w[0] << 4);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[20], c.r[5].w[0] << 2);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], c.r[20].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 356u)));
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 40u)));
    set32(c.r[3], 0u + 6u);
    c.budget -= 21;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[16], 0u - 1u);  if (t) { goto L_0024F1E8; } }
    c.r[3].d[0] = ld8((c.r[19].w[0] + 8799u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[19].w[0] + c.r[20].w[0]);  if (t) { goto L_0024F120; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F11Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024F5F0u; return; } if (c.pc != 0x0024F11Cu) [[unlikely]] return; }
L_0024F11C:
    set32(c.r[3], c.r[19].w[0] + c.r[20].w[0]);
    c.budget -= 1;
L_0024F120:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u - 1u);
    set32(c.r[8], 0u + 7u);
    c.budget -= 3;
L_0024F12C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[4].d[0]; set32(c.r[5], c.r[4].w[0] << 2);  if (t) { goto L_0024F1B4; } }
    set32(c.r[5], c.r[19].w[0] + c.r[5].w[0]);
    set32(c.r[7], ld32((c.r[5].w[0] + 356u)));
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0024F1B4; } }
    set32(c.r[5], ld32((c.r[7].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0024F158; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[8].d[0];  if (t) { goto L_0024F1B4; } }
L_0024F158:
    set32(c.r[5], ld32((c.r[7].w[0] + 36u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 356u)));
    set32(c.r[7], ld32((c.r[7].w[0] + 36u)));
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != c.r[5].d[0];  if (t) { goto L_0024F1B4; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[6].d[0]; set32(c.r[5], c.r[16].w[0] << 1);  if (t) { goto L_0024F17C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0024F1B4; } }
L_0024F17C:
    set32(c.r[5], c.r[5].w[0] + c.r[16].w[0]);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[5], c.r[19].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 44u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[17].d[0];  if (t) { goto L_0024F1B4; } }
    set32(c.r[5], c.r[4].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[5], c.r[19].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 44u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[17].d[0];  if (t) { goto L_0024F1B4; } }
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_0024F1B4:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[5].d[0] = c.r[4].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024F12Cu | kUnwind; return; } goto L_0024F12C; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_0024F2E4; } }
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F1E0u); set32(c.r[4], ld32((c.r[2].w[0] + 356u)));  if (depth < kMaxDepth) unit_0054(c, 169u, depth + 1u); else { c.pc = 0x00251000u; return; } if (c.pc != 0x0024F1E0u) [[unlikely]] return; }
L_0024F1E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_0024F2E8; } }
L_0024F1E8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0024F2E4; } }
    c.r[3].d[0] = ld8((c.r[19].w[0] + 8799u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], c.r[19].w[0] + c.r[20].w[0]);  if (t) { goto L_0024F20C; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F208u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024F5F0u; return; } if (c.pc != 0x0024F208u) [[unlikely]] return; }
L_0024F208:
    set32(c.r[5], c.r[19].w[0] + c.r[20].w[0]);
    c.budget -= 1;
L_0024F20C:
    set32(c.r[6], 0u + 5u);
    set32(c.r[8], 0u - 1u);
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
L_0024F218:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[6].d[0]; set32(c.r[4], c.r[6].w[0] << 2);  if (t) { goto L_0024F2BC; } }
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 356u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024F2BC; } }
    set32(c.r[7], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[3].d[0];  if (t) { goto L_0024F2BC; } }
    set32(c.r[9], ld32((c.r[5].w[0] + 356u)));
    set32(c.r[7], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[9], ld32((c.r[9].w[0] + 36u)));
    c.budget -= 5;
    { const bool t = c.r[9].d[0] != c.r[7].d[0];  if (t) { goto L_0024F2BC; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[8].d[0]; set32(c.r[7], c.r[16].w[0] << 1);  if (t) { goto L_0024F260; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0024F2BC; } }
L_0024F260:
    set32(c.r[7], c.r[7].w[0] + c.r[16].w[0]);
    set32(c.r[7], c.r[7].w[0] << 4);
    set32(c.r[7], c.r[19].w[0] + c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[7].w[0] + 44u)));
    c.budget -= 6;
    { const bool t = c.r[7].d[0] == c.r[17].d[0];  if (t) { goto L_0024F294; } }
    set32(c.r[7], c.r[6].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[7], c.r[7].w[0] << 4);
    set32(c.r[7], c.r[19].w[0] + c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[7].w[0] + 44u)));
    c.budget -= 7;
    { const bool t = c.r[7].d[0] == c.r[17].d[0];  if (t) { goto L_0024F2B8; } }
L_0024F294:
    set32(c.r[7], c.r[16].w[0] << 2);
    set32(c.r[7], c.r[19].w[0] + c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[7].w[0] + 356u)));
    set32(c.r[7], ld32((c.r[7].w[0] + 32u)));
    c.budget -= 6;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_0024F2BC; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0024F2BC; } }
L_0024F2B8:
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 1;
L_0024F2BC:
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024F218u | kUnwind; return; } goto L_0024F218; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_0024F2E4; } }
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F2E4u); set32(c.r[4], ld32((c.r[2].w[0] + 356u)));  if (depth < kMaxDepth) unit_0054(c, 182u, depth + 1u); else { c.pc = 0x00251100u; return; } if (c.pc != 0x0024F2E4u) [[unlikely]] return; }
L_0024F2E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0024F2E8:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0024F310:
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[2].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[2], 0u + 5u);
    set32(c.r[5], ld32((c.r[5].w[0] + 44u)));
    c.r[8].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[9], 0u + 6u);
    set32(c.r[7], c.r[2].w[0] << 2);
    c.budget -= 10;
L_0024F338:
    set32(c.r[7], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[10], ld32((c.r[7].w[0] + 356u)));
    c.budget -= 4;
    { const bool t = c.r[10].d[0] == 0ull;  if (t) { goto L_0024F3CC; } }
    set32(c.r[7], ld32((c.r[10].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[9].d[0];  if (t) { goto L_0024F3CC; } }
    set32(c.r[7], ld32((c.r[10].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[7].d[0];  if (t) { goto L_0024F3CC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[8].d[0]; set32(c.r[7], c.r[3].w[0] << 1);  if (t) { goto L_0024F370; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0024F3CC; } }
L_0024F370:
    set32(c.r[7], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[7], c.r[7].w[0] << 4);
    set32(c.r[7], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[7].w[0] + 44u)));
    c.budget -= 6;
    { const bool t = c.r[7].d[0] != c.r[5].d[0];  if (t) { goto L_0024F3A4; } }
    set32(c.r[7], c.r[2].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[7], c.r[7].w[0] << 4);
    set32(c.r[7], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[7].w[0] + 44u)));
    c.budget -= 7;
    { const bool t = c.r[7].d[0] != c.r[5].d[0];  if (t) { goto L_0024F3C8; } }
L_0024F3A4:
    set32(c.r[7], c.r[3].w[0] << 2);
    set32(c.r[7], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[7].w[0] + 356u)));
    set32(c.r[7], ld32((c.r[7].w[0] + 32u)));
    c.budget -= 6;
    { const bool t = c.r[7].d[0] == c.r[9].d[0];  if (t) { goto L_0024F3CC; } }
    set32(c.r[7], ld32((c.r[10].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[9].d[0];  if (t) { goto L_0024F3CC; } }
L_0024F3C8:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0024F3CC:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[7], c.r[2].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024F338u | kUnwind; return; } goto L_0024F338; } }
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 4;
    { set32(c.r[4], ld32((c.r[2].w[0] + 356u)));  [[clang::musttail]] return unit_0054(c, 182u, depth); }
L_0024F3F0:
    c.r[9].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 6u);
    set32(c.r[2], c.r[7].w[0] << 2);
    c.budget -= 5;
L_0024F404:
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 356u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0024F430; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0024F430; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[9], c.r[9].w[0] + 1u);  if (t) { goto L_0024F430; } }
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_0024F430:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[7].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[7].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024F404u | kUnwind; return; } goto L_0024F404; } }
    c.r[2].d[0] = c.r[9].d[0] ^ c.r[8].d[0];
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0024F450:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 8800u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024F470; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8804u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0024F4B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0024F4B4; } }
L_0024F470:
    set32(c.r[2], ld32((c.r[4].w[0] + 320u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[3], c.r[5].w[0] << 2);  if (t) { goto L_0024F49C; } }
    set32(c.r[2], 0u + 6u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 356u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0024F4B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024F4B4; } }
L_0024F49C:
    set32(c.r[2], ld32((c.r[4].w[0] + 8808u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0024F4B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024F4B4; } }
L_0024F4B0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024F4B4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024F4C0:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[7].w[0] << 1);
    c.budget -= 3;
L_0024F4CC:
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[6], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 32u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024F4FC; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_0024F4FC; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
L_0024F4FC:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[7].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024F4CCu | kUnwind; return; } goto L_0024F4CC; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024F520:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 6u);
    set32(c.r[3], c.r[8].w[0] << 1);
    c.budget -= 4;
L_0024F530:
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[7], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024F57C; } }
    set32(c.r[3], ld32((c.r[7].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; set32(c.r[3], c.r[8].w[0] << 2);  if (t) { goto L_0024F57C; } }
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 356u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024F57C; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_0024F57C; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
L_0024F57C:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = c.r[8].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[8].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024F530u | kUnwind; return; } goto L_0024F530; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024F5A0:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 6u);
    set32(c.r[3], c.r[6].w[0] << 2);
    c.budget -= 4;
L_0024F5B0:
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 356u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024F5D0; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_0024F5D0; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_0024F5D0:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[6].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024F5B0u | kUnwind; return; } goto L_0024F5B0; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024F5F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], c.r[6].w[0] << 1);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[3], c.r[3].w[0] << 4);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], ld32((c.r[3].w[0] + 44u)));
    c.r[1].d[0] = c.r[18].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0024F6EC; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[16], c.r[18].w[0] << 4);  if (t) { goto L_0024F674; } }
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[17], c.r[18].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[3], c.r[17].w[0] + c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 356u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F64Cu); set32(c.r[16], c.r[3].w[0] + 8744u);  if (depth < kMaxDepth) unit_0054(c, 200u, depth + 1u); else { c.pc = 0x002512F0u; return; } if (c.pc != 0x0024F64Cu) [[unlikely]] return; }
L_0024F64C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[6], c.r[17].w[0] + c.r[19].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F66Cu); st32((c.r[3].w[0] + 8732u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0053(c, 399u, depth + 1u); else { c.pc = 0x0024F520u; return; } if (c.pc != 0x0024F66Cu) [[unlikely]] return; }
L_0024F66C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0024F6EC; } }
L_0024F674:
    set32(c.r[5], c.r[16].w[0] + c.r[19].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8744u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[5].w[0] + 8744u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8744u)));
    c.budget -= 7;
    { const bool t = c.r[17].sd[0] >= 0; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0024F698; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0024F6D0; } }
L_0024F698:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F6A0u);  if (depth < kMaxDepth) unit_0053(c, 397u, depth + 1u); else { c.pc = 0x0024F4C0u; return; } if (c.pc != 0x0024F6A0u) [[unlikely]] return; }
L_0024F6A0:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0024F6D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F6C0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 397u, depth + 1u); else { c.pc = 0x0024F4C0u; return; } if (c.pc != 0x0024F6C0u) [[unlikely]] return; }
L_0024F6C0:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[3].w[0] - 1u);  if (t) { goto L_0024F6D0; } }
L_0024F6D0:
    set32(c.r[5], c.r[16].w[0] + c.r[19].w[0]);
    set32(c.r[4], 0u + 25500u);
    st8((c.r[5].w[0] + 8744u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8744u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0] + 8732u), c.r[4].w[0]);
    c.budget -= 7;
L_0024F6EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0024F710:
    set32(c.r[29], c.r[29].w[0] - 384u);
    set32(c.r[2], c.r[5].w[0] << 1);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    set32(c.r[2], c.r[2].w[0] << 4);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[2].w[0] + 44u)));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 19;
    { const bool t = c.r[1].d[0] == 0ull; c.r[21].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0024F890; } }
    set32(c.r[4], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[4].w[0] + c.r[21].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 8744u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0024F890; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 25500u);
    c.budget -= 2;
L_0024F778:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[2].w[0] + 160u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[5].sd[0] < 54ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024F778u | kUnwind; return; } goto L_0024F778; } }
    set32(c.r[23], c.r[21].w[0] + c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0024F848; } }
L_0024F7A0:
    set32(c.r[2], c.r[23].w[0] + c.r[2].w[0]);
    set32(c.r[22], ld32((c.r[2].w[0] + 8732u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F7B0u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 310u, depth + 1u); else { c.pc = 0x00173590u; return; } if (c.pc != 0x0024F7B0u) [[unlikely]] return; }
L_0024F7B0:
    c.r[30].d[0] = c.r[2].d[0] << 56;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[30].d[0] = static_cast<std::uint64_t>(c.r[30].sd[0] >> 56);  if (t) { goto L_0024F830; } }
L_0024F7C0:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 1;
L_0024F7C4:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F7D0u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 315u, depth + 1u); else { c.pc = 0x00173630u; return; } if (c.pc != 0x0024F7D0u) [[unlikely]] return; }
L_0024F7D0:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 25500u);
    c.budget -= 4;
    { const bool t = c.r[20].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[21].w[0] + 380u);  if (t) { goto L_0024F80C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F7E8u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 204u, depth + 1u); else { c.pc = 0x002BE2C0u; return; } if (c.pc != 0x0024F7E8u) [[unlikely]] return; }
L_0024F7E8:
    set32(c.r[4], c.r[21].w[0] + 380u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F7F4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 206u, depth + 1u); else { c.pc = 0x002BE310u; return; } if (c.pc != 0x0024F7F4u) [[unlikely]] return; }
L_0024F7F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024F80C; } }
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    st32((c.r[2].w[0] + 160u), c.r[20].w[0]);
    c.budget -= 4;
L_0024F80C:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[2].d[0] << 56;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024F7C4u | kUnwind; return; } goto L_0024F7C4; } }
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[2].d[0] << 56;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.budget -= 3;
L_0024F830:
    c.r[2].d[0] = c.r[17].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[30].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024F7C0u | kUnwind; return; } goto L_0024F7C0; } }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0024F848:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[23].w[0] + 8744u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[18].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024F7A0u | kUnwind; return; } goto L_0024F7A0; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[2], 0u + 25500u);  if (t) { goto L_0024F894; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F868u);  if (depth < kMaxDepth) unit_0010(c, 15u, depth + 1u); else { c.pc = 0x00140210u; return; } if (c.pc != 0x0024F868u) [[unlikely]] return; }
L_0024F868:
    c.r[5].d[0] = c.r[19].d[0] << 32;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F878u); c.r[5].d[0] = c.r[5].d[0] >> 32;  if (depth < kMaxDepth) unit_0006(c, 228u, depth + 1u); else { c.pc = 0x0011B928u; return; } if (c.pc != 0x0024F878u) [[unlikely]] return; }
L_0024F878:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 160u)));  if (t) { goto L_0024F894; } }
L_0024F890:
    set32(c.r[2], 0u + 25500u);
    c.budget -= 1;
L_0024F894:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 384u);  c.pc = t; return; }
L_0024F8D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x6D6E0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F904u); c.r[5].d[0] = c.r[2].d[0] | 21335ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x0024F904u) [[unlikely]] return; }
L_0024F904:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0024F910; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_0024F910:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0024F924; } }
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F924u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 87u, depth + 1u); else { c.pc = 0x0024C8E0u; return; } if (c.pc != 0x0024F924u) [[unlikely]] return; }
L_0024F924:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0024F940:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x6D6E0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F970u); c.r[5].d[0] = c.r[2].d[0] | 21335ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x0024F970u) [[unlikely]] return; }
L_0024F970:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0024F97C; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_0024F97C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0024F9C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F98Cu);  if (depth < kMaxDepth) unit_0053(c, 90u, depth + 1u); else { c.pc = 0x0024C940u; return; } if (c.pc != 0x0024F98Cu) [[unlikely]] return; }
L_0024F98C:
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[18].w[0] << 2);
    c.budget -= 2;
L_0024F994:
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 356u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024F9B8; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 200u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_0024F9B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F9B8u);  if (depth < kMaxDepth) unit_0054(c, 195u, depth + 1u); else { c.pc = 0x00251270u; return; } if (c.pc != 0x0024F9B8u) [[unlikely]] return; }
L_0024F9B8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[18].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024F994u | kUnwind; return; } goto L_0024F994; } }
L_0024F9C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0024F9E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x6D6E0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FA0Cu); c.r[5].d[0] = c.r[2].d[0] | 21335ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x0024FA0Cu) [[unlikely]] return; }
L_0024FA0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0024FA18; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_0024FA18:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0024FA2C; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FA2Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 93u, depth + 1u); else { c.pc = 0x0024C9A0u; return; } if (c.pc != 0x0024FA2Cu) [[unlikely]] return; }
L_0024FA2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024FA40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FA5Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 404u, depth + 1u); else { c.pc = 0x0026FB90u; return; } if (c.pc != 0x0024FA5Cu) [[unlikely]] return; }
L_0024FA5C:
    c.r[1].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0024FA78; } }
    set32(c.r[2], c.r[16].w[0] << 7);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 400u);  if (t) { goto L_0024FA7C; } }
L_0024FA78:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024FA7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024FA90:
    set32(c.r[3], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 8797u), static_cast<std::uint8_t>(c.r[4].w[0]));  c.pc = t; return; }
L_0024FAA0:
    set32(c.r[2], ld32((c.r[4].w[0] + 324u)));
    set32(c.r[2], c.r[2].w[0] - 58u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0024FAB0:
    set32(c.r[2], ld32((c.r[4].w[0] + 320u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;  c.pc = t; return; }
L_0024FAC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FADCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 434u, depth + 1u); else { c.pc = 0x0024FAB0u; return; } if (c.pc != 0x0024FADCu) [[unlikely]] return; }
L_0024FADC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 5u);  if (t) { goto L_0024FB70; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 4u);  if (t) { goto L_0024FB68; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_0024FB58; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0024FB48; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 29u);  if (t) { goto L_0024FB38; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_0024FB1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0024FB74; } }
L_0024FB1C:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 8799u));
    set32(c.r[4], 0u + 7u);
    set32(c.r[2], 0u + 6u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FB30u); if (c.r[3].d[0] == 0) c.r[4].d[0] = c.r[2].d[0];  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x0024FB30u) [[unlikely]] return; }
L_0024FB30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024FB70; } }
L_0024FB38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FB40u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x0024FB40u) [[unlikely]] return; }
L_0024FB40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024FB70; } }
L_0024FB48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FB50u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x0024FB50u) [[unlikely]] return; }
L_0024FB50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024FB70; } }
L_0024FB58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FB60u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x0024FB60u) [[unlikely]] return; }
L_0024FB60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024FB70; } }
L_0024FB68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FB70u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x0024FB70u) [[unlikely]] return; }
L_0024FB70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0024FB74:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024FB90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], c.r[5].w[0] << 1);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] << 4);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FBC4u); set32(c.r[4], c.r[17].w[0] + 380u);  if (depth < kMaxDepth) unit_006F(c, 204u, depth + 1u); else { c.pc = 0x002BE2C0u; return; } if (c.pc != 0x0024FBC4u) [[unlikely]] return; }
L_0024FBC4:
    set32(c.r[4], c.r[17].w[0] + 380u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FBD4u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 192u, depth + 1u); else { c.pc = 0x002BE060u; return; } if (c.pc != 0x0024FBD4u) [[unlikely]] return; }
L_0024FBD4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024FBF0:
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
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[9].d[0] + 0ull;
    c.r[16].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FC38u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_000B(c, 298u, depth + 1u); else { c.pc = 0x0012E440u; return; } if (c.pc != 0x0024FC38u) [[unlikely]] return; }
L_0024FC38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[22].w[0] + 84u);
    set32(c.r[2], c.r[2].w[0] - 2448u);
    set32(c.r[5], 0u + 4u);
    st32((c.r[22].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FC54u); st32((c.r[22].w[0] + 20u), c.r[21].w[0]);  if (depth < kMaxDepth) unit_0049(c, 271u, depth + 1u); else { c.pc = 0x002275A0u; return; } if (c.pc != 0x0024FC54u) [[unlikely]] return; }
L_0024FC54:
    set32(c.r[4], c.r[22].w[0] + 120u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FC60u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0049(c, 271u, depth + 1u); else { c.pc = 0x002275A0u; return; } if (c.pc != 0x0024FC60u) [[unlikely]] return; }
L_0024FC60:
    set32(c.r[4], c.r[22].w[0] + 156u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FC6Cu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0049(c, 271u, depth + 1u); else { c.pc = 0x002275A0u; return; } if (c.pc != 0x0024FC6Cu) [[unlikely]] return; }
L_0024FC6C:
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[4], c.r[22].w[0] + 48u);
    set32(c.r[5], 0u + 12u);
    st32((c.r[22].w[0] + 24u), c.r[2].w[0]);
    st32((c.r[22].w[0] + 28u), c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    st32((c.r[22].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    st32((c.r[22].w[0] + 36u), c.r[2].w[0]);
    st32((c.r[22].w[0] + 40u), 0u);
    st32((c.r[22].w[0] + 44u), 0u);
    st32((c.r[22].w[0] + 68u), c.r[16].w[0]);
    st32((c.r[22].w[0] + 72u), c.r[16].w[0]);
    st32((c.r[22].w[0] + 76u), 0u);
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FCB0u); st32((c.r[22].w[0] + 80u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x0024FCB0u) [[unlikely]] return; }
L_0024FCB0:
    st8((c.r[22].w[0] + 48u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], 0u + 992u);
    st8((c.r[22].w[0] + 60u), static_cast<std::uint8_t>(0u));
    st8((c.r[22].w[0] + 61u), static_cast<std::uint8_t>(0u));
    st8((c.r[22].w[0] + 62u), static_cast<std::uint8_t>(0u));
    st32((c.r[22].w[0] + 192u), 0u);
    st32((c.r[22].w[0] + 196u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FCD4u); st32((c.r[22].w[0] + 200u), 0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0024FCD4u) [[unlikely]] return; }
L_0024FCD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0024FCF0; } }
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FCF0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 387u, depth + 1u); else { c.pc = 0x00287180u; return; } if (c.pc != 0x0024FCF0u) [[unlikely]] return; }
L_0024FCF0:
    st32((c.r[22].w[0] + 204u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[22].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[22].w[0] + 68u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FD04u); set32(c.r[4], c.r[2].w[0] + 380u);  if (depth < kMaxDepth) unit_006F(c, 203u, depth + 1u); else { c.pc = 0x002BE2A0u; return; } if (c.pc != 0x0024FD04u) [[unlikely]] return; }
L_0024FD04:
    set32(c.r[4], ld32((c.r[22].w[0] + 204u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FD10u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 428u, depth + 1u); else { c.pc = 0x00287590u; return; } if (c.pc != 0x0024FD10u) [[unlikely]] return; }
L_0024FD10:
    set32(c.r[5], ld32((c.r[22].w[0] + 68u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FD1Cu); set32(c.r[4], ld32((c.r[22].w[0] + 20u)));  if (depth < kMaxDepth) unit_0053(c, 430u, depth + 1u); else { c.pc = 0x0024FA40u; return; } if (c.pc != 0x0024FD1Cu) [[unlikely]] return; }
L_0024FD1C:
    set32(c.r[3], ld32((c.r[22].w[0] + 204u)));
    st32((c.r[3].w[0] + 128u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[22].w[0] + 28u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0024FD40; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0024FD48; } }
L_0024FD40:
    set32(c.r[2], 0u + 1u);
    st32((c.r[22].w[0] + 200u), c.r[2].w[0]);
    c.budget -= 2;
L_0024FD48:
    st8((c.r[22].w[0] + 13u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[22].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0024FD80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0024FE18; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 2448u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 204u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024FDCC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024FDCC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FDCCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024FDCCu) [[unlikely]] return; }
L_0024FDCC:
    set32(c.r[4], c.r[17].w[0] + 156u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FDDCu); st32((c.r[17].w[0] + 204u), 0u);  if (depth < kMaxDepth) unit_0049(c, 274u, depth + 1u); else { c.pc = 0x002275F0u; return; } if (c.pc != 0x0024FDDCu) [[unlikely]] return; }
L_0024FDDC:
    set32(c.r[4], c.r[17].w[0] + 120u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FDE8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0049(c, 274u, depth + 1u); else { c.pc = 0x002275F0u; return; } if (c.pc != 0x0024FDE8u) [[unlikely]] return; }
L_0024FDE8:
    set32(c.r[4], c.r[17].w[0] + 84u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FDF4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0049(c, 274u, depth + 1u); else { c.pc = 0x002275F0u; return; } if (c.pc != 0x0024FDF4u) [[unlikely]] return; }
L_0024FDF4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FE00u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 300u, depth + 1u); else { c.pc = 0x0012E490u; return; } if (c.pc != 0x0024FE00u) [[unlikely]] return; }
L_0024FE00:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0024FE1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FE18u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0024FE18u) [[unlikely]] return; }
L_0024FE18:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0024FE1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024FE30:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E5D0u | kUnwind; return; } [[clang::musttail]] return unit_000B(c, 317u, depth); }
L_0024FE40:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E5E0u | kUnwind; return; } [[clang::musttail]] return unit_000B(c, 318u, depth); }
L_0024FE50:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E600u | kUnwind; return; } [[clang::musttail]] return unit_000B(c, 319u, depth); }
L_0024FE60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FE74u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 320u, depth + 1u); else { c.pc = 0x0012E610u; return; } if (c.pc != 0x0024FE74u) [[unlikely]] return; }
L_0024FE74:
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 7u);  if (t) { goto L_0024FE88; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0024FE9C; } }
L_0024FE88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FE90u); set32(c.r[4], ld32((c.r[16].w[0] + 204u)));  if (depth < kMaxDepth) unit_0062(c, 189u, depth + 1u); else { c.pc = 0x0028A8D0u; return; } if (c.pc != 0x0024FE90u) [[unlikely]] return; }
L_0024FE90:
    set32(c.r[4], ld32((c.r[16].w[0] + 204u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FE9Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0062(c, 251u, depth + 1u); else { c.pc = 0x0028B190u; return; } if (c.pc != 0x0024FE9Cu) [[unlikely]] return; }
L_0024FE9C:
    set32(c.r[4], ld32((c.r[16].w[0] + 204u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FEA8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0062(c, 209u, depth + 1u); else { c.pc = 0x0028AC20u; return; } if (c.pc != 0x0024FEA8u) [[unlikely]] return; }
L_0024FEA8:
    set32(c.r[3], 0u + 6u);
    st32((c.r[16].w[0] + 40u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0024FEC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FED4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 321u, depth + 1u); else { c.pc = 0x0012E630u; return; } if (c.pc != 0x0024FED4u) [[unlikely]] return; }
L_0024FED4:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024FEE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FEE8u); set32(c.r[4], ld32((c.r[16].w[0] + 204u)));  if (depth < kMaxDepth) unit_0062(c, 189u, depth + 1u); else { c.pc = 0x0028A8D0u; return; } if (c.pc != 0x0024FEE8u) [[unlikely]] return; }
L_0024FEE8:
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0024FF04; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 204u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FF04u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0062(c, 251u, depth + 1u); else { c.pc = 0x0028B190u; return; } if (c.pc != 0x0024FF04u) [[unlikely]] return; }
L_0024FF04:
    set32(c.r[4], ld32((c.r[16].w[0] + 204u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FF10u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0062(c, 209u, depth + 1u); else { c.pc = 0x0028AC20u; return; } if (c.pc != 0x0024FF10u) [[unlikely]] return; }
L_0024FF10:
    set32(c.r[3], 0u + 7u);
    st32((c.r[16].w[0] + 40u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0024FF30:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E640u | kUnwind; return; } [[clang::musttail]] return unit_000B(c, 322u, depth); }
L_0024FF40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024FF50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 6u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0024FF7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FF74u);  if (depth < kMaxDepth) unit_0054(c, 128u, depth + 1u); else { c.pc = 0x00250BD0u; return; } if (c.pc != 0x0024FF74u) [[unlikely]] return; }
L_0024FF74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_0054(c, 8u, depth); } }
L_0024FF7C:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 61u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024FFD0; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 62u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024FFA0; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 48u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024FFC0; } }
L_0024FFA0:
    set32(c.r[2], ld32((c.r[16].w[0] + 204u)));
    st8((c.r[2].w[0] + 240u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[16].w[0] + 204u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FFB4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 172u, depth + 1u); else { c.pc = 0x0028A5C0u; return; } if (c.pc != 0x0024FFB4u) [[unlikely]] return; }
L_0024FFB4:
    st8((c.r[16].w[0] + 48u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 62u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0024FFCC; } }
L_0024FFC0:
    set32(c.r[4], ld32((c.r[16].w[0] + 204u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FFCCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0062(c, 172u, depth + 1u); else { c.pc = 0x0028A5C0u; return; } if (c.pc != 0x0024FFCCu) [[unlikely]] return; }
L_0024FFCC:
    st8((c.r[16].w[0] + 61u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0024FFD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FFD8u); set32(c.r[4], ld32((c.r[16].w[0] + 204u)));  if (depth < kMaxDepth) unit_0062(c, 208u, depth + 1u); else { c.pc = 0x0028ABE0u; return; } if (c.pc != 0x0024FFD8u) [[unlikely]] return; }
L_0024FFD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0054(c, 7u, depth); } }
    set32(c.r[2], ld32((c.r[16].w[0] + 192u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0054(c, 7u, depth); } }
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_0054(c, 6u, depth); } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 1;
    [[clang::musttail]] return unit_0054(c, 1u, depth);
}

}
