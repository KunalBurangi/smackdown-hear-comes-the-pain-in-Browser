#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_000D[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0,
    0, 7, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0,
    12, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 17, 0, 0, 0,
    0, 18, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0,
    0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0,
    0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0,
    0, 43, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 58, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 65,
    0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0,
    71, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 76, 0, 0,
    77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 83, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0,
    87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0,
    0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 103,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0,
    0, 0, 0, 107, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 113, 0, 0, 114, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0,
    0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 0,
    0, 121, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 126, 0,
    0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 132, 0, 0, 133, 0, 134, 0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0,
    138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 140, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0,
    0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 146, 0, 147, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 149,
    0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 157, 0, 0, 0,
    0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0,
    0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0,
    180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0,
    0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 186, 0, 0, 187, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    195, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0,
    0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 212, 0, 213, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 216, 0,
    0, 0, 0, 0, 0, 217, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 222, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0,
    0, 0, 225, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 230, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0,
    0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0,
    0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0,
    0, 0, 0, 0, 239, 0, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0,
    0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 254, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256,
    0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0,
    263, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 270, 0, 0, 0,
    271, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0,
    279, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 0, 282, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284,
    0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 286, 0, 287, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 290, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0,
    0, 293, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0,
    297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0, 0, 303, 0,
    0, 0, 0, 0, 0, 304, 0, 305, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 308, 0, 0, 0, 0, 309, 0,
    310, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 317, 0, 0, 0, 0, 0, 318,
    0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0,
    322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 325, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 329, 0, 330, 0, 331, 0, 332, 0,
    333, 0, 334, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 337, 0, 0, 0, 338, 0, 0, 0, 0, 0,
    0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 343, 0, 0, 0,
    0, 344, 0, 0, 0, 345, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 349, 0, 0, 0, 0,
    350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 353, 0, 0, 354, 0, 0, 355, 0, 0, 0, 0, 0, 356, 0, 0,
    0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0,
    363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 365, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368,
    0, 0, 369, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    372, 0, 0, 373, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0,
    0, 378, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0,
    383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388,
    0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0,
    392, 0, 0, 0, 393, 0, 0, 0, 394, 0, 0, 0, 395, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0,
    402, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 407, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 409, 0, 410, 0, 0, 0,
    411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 414, 0, 0,
    0, 0, 415, 0, 416, 0, 0, 0, 0, 417, 0, 0, 0, 0, 418, 0, 419, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 421, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0,
    0, 425, 0, 0, 0, 0, 0, 426, 0, 427, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0,
    434, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 438,
    0, 0, 439, 0, 440, 0, 441, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0,
    445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 450, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 455, 0, 0, 0, 456, 0, 0, 0, 457,
    0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0,
    0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 463, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0,
    0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 477, 0, 0, 0, 0,
    0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    479, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0,
    0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0,
    492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 494, 0, 495, 0, 0, 0, 0, 496, 0, 0,
    0, 0, 497, 0, 0, 0, 0, 0, 0, 498, 0, 499, 0, 0, 0, 0, 500, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 502, 0, 503, 0,
    0, 0, 0, 504, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 507, 0, 508, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 509, 0, 510, 0, 0, 0, 0, 0, 0, 511, 0, 0, 0, 0, 512, 0, 0, 0, 0, 513, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0, 0, 0, 515, 0, 516, 0, 517, 0, 518, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 519, 0, 0, 0, 520, 0, 0, 0, 521, 0, 0, 0, 522, 0, 0, 0, 523, 0, 0, 524, 0, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0,
};

void unit_000D(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00134000;
    case 2u: goto L_0013402C;
    case 3u: goto L_00134034;
    case 4u: goto L_0013403C;
    case 5u: goto L_00134050;
    case 6u: goto L_0013406C;
    case 7u: goto L_00134084;
    case 8u: goto L_001340A0;
    case 9u: goto L_001340BC;
    case 10u: goto L_001340D0;
    case 11u: goto L_001340F0;
    case 12u: goto L_00134100;
    case 13u: goto L_00134104;
    case 14u: goto L_00134130;
    case 15u: goto L_00134144;
    case 16u: goto L_0013415C;
    case 17u: goto L_00134170;
    case 18u: goto L_00134184;
    case 19u: goto L_0013419C;
    case 20u: goto L_001341B0;
    case 21u: goto L_001341C4;
    case 22u: goto L_001341DC;
    case 23u: goto L_001341F0;
    case 24u: goto L_00134204;
    case 25u: goto L_0013421C;
    case 26u: goto L_00134230;
    case 27u: goto L_00134250;
    case 28u: goto L_00134264;
    case 29u: goto L_001342A0;
    case 30u: goto L_001342B4;
    case 31u: goto L_001342D0;
    case 32u: goto L_00134308;
    case 33u: goto L_0013431C;
    case 34u: goto L_00134330;
    case 35u: goto L_00134384;
    case 36u: goto L_001343AC;
    case 37u: goto L_001343D4;
    case 38u: goto L_001343EC;
    case 39u: goto L_00134408;
    case 40u: goto L_00134434;
    case 41u: goto L_0013443C;
    case 42u: goto L_00134470;
    case 43u: goto L_00134484;
    case 44u: goto L_00134490;
    case 45u: goto L_001344EC;
    case 46u: goto L_0013451C;
    case 47u: goto L_00134538;
    case 48u: goto L_0013454C;
    case 49u: goto L_00134558;
    case 50u: goto L_001345A8;
    case 51u: goto L_0013463C;
    case 52u: goto L_001346A4;
    case 53u: goto L_001346E0;
    case 54u: goto L_00134720;
    case 55u: goto L_0013476C;
    case 56u: goto L_00134794;
    case 57u: goto L_001347A4;
    case 58u: goto L_001347B0;
    case 59u: goto L_001347C8;
    case 60u: goto L_001347E0;
    case 61u: goto L_00134810;
    case 62u: goto L_00134828;
    case 63u: goto L_00134840;
    case 64u: goto L_00134860;
    case 65u: goto L_0013487C;
    case 66u: goto L_00134890;
    case 67u: goto L_001348AC;
    case 68u: goto L_001348C0;
    case 69u: goto L_001348D0;
    case 70u: goto L_001348E0;
    case 71u: goto L_00134900;
    case 72u: goto L_00134924;
    case 73u: goto L_00134930;
    case 74u: goto L_00134940;
    case 75u: goto L_00134968;
    case 76u: goto L_00134974;
    case 77u: goto L_00134980;
    case 78u: goto L_001349AC;
    case 79u: goto L_001349B8;
    case 80u: goto L_00134A24;
    case 81u: goto L_00134A50;
    case 82u: goto L_00134A9C;
    case 83u: goto L_00134AA8;
    case 84u: goto L_00134AB4;
    case 85u: goto L_00134ACC;
    case 86u: goto L_00134AF0;
    case 87u: goto L_00134B00;
    case 88u: goto L_00134B34;
    case 89u: goto L_00134B80;
    case 90u: goto L_00134BC0;
    case 91u: goto L_00134BE4;
    case 92u: goto L_00134BF4;
    case 93u: goto L_00134C20;
    case 94u: goto L_00134CC0;
    case 95u: goto L_00134CE0;
    case 96u: goto L_00134D04;
    case 97u: goto L_00134D2C;
    case 98u: goto L_00134D48;
    case 99u: goto L_00134D94;
    case 100u: goto L_00134DA4;
    case 101u: goto L_00134DB4;
    case 102u: goto L_00134DDC;
    case 103u: goto L_00134DFC;
    case 104u: goto L_00134E50;
    case 105u: goto L_00134EC0;
    case 106u: goto L_00134EE8;
    case 107u: goto L_00134F0C;
    case 108u: goto L_00134F18;
    case 109u: goto L_00134F28;
    case 110u: goto L_00134F50;
    case 111u: goto L_00134FA8;
    case 112u: goto L_00134FB8;
    case 113u: goto L_00134FC4;
    case 114u: goto L_00134FD0;
    case 115u: goto L_00134FDC;
    case 116u: goto L_00134FF4;
    case 117u: goto L_00135010;
    case 118u: goto L_00135028;
    case 119u: goto L_00135058;
    case 120u: goto L_00135070;
    case 121u: goto L_00135084;
    case 122u: goto L_00135094;
    case 123u: goto L_001350B0;
    case 124u: goto L_001350C8;
    case 125u: goto L_001350DC;
    case 126u: goto L_001350F8;
    case 127u: goto L_0013510C;
    case 128u: goto L_0013511C;
    case 129u: goto L_0013512C;
    case 130u: goto L_0013513C;
    case 131u: goto L_00135150;
    case 132u: goto L_00135198;
    case 133u: goto L_001351A4;
    case 134u: goto L_001351AC;
    case 135u: goto L_001351B4;
    case 136u: goto L_001351D0;
    case 137u: goto L_001351E4;
    case 138u: goto L_00135200;
    case 139u: goto L_0013522C;
    case 140u: goto L_00135238;
    case 141u: goto L_00135240;
    case 142u: goto L_00135250;
    case 143u: goto L_00135264;
    case 144u: goto L_00135284;
    case 145u: goto L_001352B0;
    case 146u: goto L_001352BC;
    case 147u: goto L_001352C4;
    case 148u: goto L_001352E0;
    case 149u: goto L_001352FC;
    case 150u: goto L_00135320;
    case 151u: goto L_0013533C;
    case 152u: goto L_00135360;
    case 153u: goto L_00135374;
    case 154u: goto L_001353B0;
    case 155u: goto L_001353C4;
    case 156u: goto L_001353DC;
    case 157u: goto L_001353F0;
    case 158u: goto L_00135404;
    case 159u: goto L_0013541C;
    case 160u: goto L_00135430;
    case 161u: goto L_00135444;
    case 162u: goto L_0013545C;
    case 163u: goto L_00135470;
    case 164u: goto L_001354A8;
    case 165u: goto L_001354BC;
    case 166u: goto L_001354D4;
    case 167u: goto L_001354F0;
    case 168u: goto L_00135510;
    case 169u: goto L_00135530;
    case 170u: goto L_00135554;
    case 171u: goto L_00135584;
    case 172u: goto L_001355C0;
    case 173u: goto L_00135620;
    case 174u: goto L_0013562C;
    case 175u: goto L_00135654;
    case 176u: goto L_0013568C;
    case 177u: goto L_001356B4;
    case 178u: goto L_001356C4;
    case 179u: goto L_001356DC;
    case 180u: goto L_00135700;
    case 181u: goto L_0013575C;
    case 182u: goto L_00135778;
    case 183u: goto L_00135784;
    case 184u: goto L_0013579C;
    case 185u: goto L_001357C0;
    case 186u: goto L_00135810;
    case 187u: goto L_0013581C;
    case 188u: goto L_00135828;
    case 189u: goto L_00135840;
    case 190u: goto L_00135860;
    case 191u: goto L_00135878;
    case 192u: goto L_001358AC;
    case 193u: goto L_001358C0;
    case 194u: goto L_001358D4;
    case 195u: goto L_00135900;
    case 196u: goto L_00135924;
    case 197u: goto L_00135938;
    case 198u: goto L_00135954;
    case 199u: goto L_00135968;
    case 200u: goto L_00135978;
    case 201u: goto L_00135988;
    case 202u: goto L_00135998;
    case 203u: goto L_001359AC;
    case 204u: goto L_001359C4;
    case 205u: goto L_001359E0;
    case 206u: goto L_00135A0C;
    case 207u: goto L_00135A9C;
    case 208u: goto L_00135AC0;
    case 209u: goto L_00135AD4;
    case 210u: goto L_00135AE8;
    case 211u: goto L_00135B14;
    case 212u: goto L_00135B28;
    case 213u: goto L_00135B30;
    case 214u: goto L_00135B40;
    case 215u: goto L_00135B60;
    case 216u: goto L_00135B78;
    case 217u: goto L_00135B94;
    case 218u: goto L_00135BA0;
    case 219u: goto L_00135BC0;
    case 220u: goto L_00135BF8;
    case 221u: goto L_00135C34;
    case 222u: goto L_00135C3C;
    case 223u: goto L_00135C50;
    case 224u: goto L_00135C68;
    case 225u: goto L_00135C88;
    case 226u: goto L_00135C94;
    case 227u: goto L_00135CB4;
    case 228u: goto L_00135CEC;
    case 229u: goto L_00135D28;
    case 230u: goto L_00135D30;
    case 231u: goto L_00135D50;
    case 232u: goto L_00135D70;
    case 233u: goto L_00135D94;
    case 234u: goto L_00135DCC;
    case 235u: goto L_00135DF0;
    case 236u: goto L_00135E10;
    case 237u: goto L_00135E34;
    case 238u: goto L_00135E6C;
    case 239u: goto L_00135E90;
    case 240u: goto L_00135EA4;
    case 241u: goto L_00135EB4;
    case 242u: goto L_00135ECC;
    case 243u: goto L_00135EE0;
    case 244u: goto L_00135EF4;
    case 245u: goto L_00135F0C;
    case 246u: goto L_00135F20;
    case 247u: goto L_00135F34;
    case 248u: goto L_00135F4C;
    case 249u: goto L_00135F60;
    case 250u: goto L_00135F98;
    case 251u: goto L_00135FAC;
    case 252u: goto L_00135FC4;
    case 253u: goto L_00135FE0;
    case 254u: goto L_00135FF8;
    case 255u: goto L_00136040;
    case 256u: goto L_0013607C;
    case 257u: goto L_00136094;
    case 258u: goto L_001360B0;
    case 259u: goto L_001360C0;
    case 260u: goto L_001360D0;
    case 261u: goto L_001360E0;
    case 262u: goto L_001360F0;
    case 263u: goto L_00136100;
    case 264u: goto L_00136110;
    case 265u: goto L_00136120;
    case 266u: goto L_00136130;
    case 267u: goto L_00136140;
    case 268u: goto L_00136150;
    case 269u: goto L_00136160;
    case 270u: goto L_00136170;
    case 271u: goto L_00136180;
    case 272u: goto L_00136190;
    case 273u: goto L_001361A0;
    case 274u: goto L_001361B0;
    case 275u: goto L_001361C0;
    case 276u: goto L_001361D0;
    case 277u: goto L_001361E0;
    case 278u: goto L_001361F0;
    case 279u: goto L_00136200;
    case 280u: goto L_0013621C;
    case 281u: goto L_0013622C;
    case 282u: goto L_00136240;
    case 283u: goto L_00136248;
    case 284u: goto L_0013627C;
    case 285u: goto L_00136290;
    case 286u: goto L_001362A8;
    case 287u: goto L_001362B0;
    case 288u: goto L_001362D0;
    case 289u: goto L_0013631C;
    case 290u: goto L_0013632C;
    case 291u: goto L_00136344;
    case 292u: goto L_00136360;
    case 293u: goto L_00136384;
    case 294u: goto L_00136394;
    case 295u: goto L_001363B0;
    case 296u: goto L_001363E8;
    case 297u: goto L_00136400;
    case 298u: goto L_00136428;
    case 299u: goto L_00136438;
    case 300u: goto L_00136448;
    case 301u: goto L_00136458;
    case 302u: goto L_00136468;
    case 303u: goto L_00136478;
    case 304u: goto L_00136494;
    case 305u: goto L_0013649C;
    case 306u: goto L_001364B0;
    case 307u: goto L_001364D0;
    case 308u: goto L_001364E4;
    case 309u: goto L_001364F8;
    case 310u: goto L_00136500;
    case 311u: goto L_0013651C;
    case 312u: goto L_00136534;
    case 313u: goto L_00136548;
    case 314u: goto L_00136560;
    case 315u: goto L_001365AC;
    case 316u: goto L_001365D4;
    case 317u: goto L_001365E4;
    case 318u: goto L_001365FC;
    case 319u: goto L_00136620;
    case 320u: goto L_00136650;
    case 321u: goto L_00136668;
    case 322u: goto L_00136680;
    case 323u: goto L_001366A8;
    case 324u: goto L_001366BC;
    case 325u: goto L_001366C8;
    case 326u: goto L_001366E0;
    case 327u: goto L_00136724;
    case 328u: goto L_0013674C;
    case 329u: goto L_00136760;
    case 330u: goto L_00136768;
    case 331u: goto L_00136770;
    case 332u: goto L_00136778;
    case 333u: goto L_00136780;
    case 334u: goto L_00136788;
    case 335u: goto L_001367A0;
    case 336u: goto L_001367C0;
    case 337u: goto L_001367D8;
    case 338u: goto L_001367E8;
    case 339u: goto L_0013680C;
    case 340u: goto L_0013682C;
    case 341u: goto L_00136840;
    case 342u: goto L_00136860;
    case 343u: goto L_00136870;
    case 344u: goto L_00136884;
    case 345u: goto L_00136894;
    case 346u: goto L_001368A8;
    case 347u: goto L_001368C0;
    case 348u: goto L_001368E0;
    case 349u: goto L_001368EC;
    case 350u: goto L_00136900;
    case 351u: goto L_00136950;
    case 352u: goto L_001369B4;
    case 353u: goto L_001369C4;
    case 354u: goto L_001369D0;
    case 355u: goto L_001369DC;
    case 356u: goto L_001369F4;
    case 357u: goto L_00136A10;
    case 358u: goto L_00136A3C;
    case 359u: goto L_00136A78;
    case 360u: goto L_00136AA8;
    case 361u: goto L_00136AD4;
    case 362u: goto L_00136AE4;
    case 363u: goto L_00136B00;
    case 364u: goto L_00136B2C;
    case 365u: goto L_00136B34;
    case 366u: goto L_00136B44;
    case 367u: goto L_00136B70;
    case 368u: goto L_00136BFC;
    case 369u: goto L_00136C08;
    case 370u: goto L_00136C1C;
    case 371u: goto L_00136C50;
    case 372u: goto L_00136D00;
    case 373u: goto L_00136D0C;
    case 374u: goto L_00136D18;
    case 375u: goto L_00136D40;
    case 376u: goto L_00136D54;
    case 377u: goto L_00136D70;
    case 378u: goto L_00136D84;
    case 379u: goto L_00136DA0;
    case 380u: goto L_00136DB4;
    case 381u: goto L_00136DD0;
    case 382u: goto L_00136DF4;
    case 383u: goto L_00136E00;
    case 384u: goto L_00136E2C;
    case 385u: goto L_00136E60;
    case 386u: goto L_00136E98;
    case 387u: goto L_00136ED4;
    case 388u: goto L_00136EFC;
    case 389u: goto L_00136F10;
    case 390u: goto L_00136F44;
    case 391u: goto L_00136F70;
    case 392u: goto L_00136F80;
    case 393u: goto L_00136F90;
    case 394u: goto L_00136FA0;
    case 395u: goto L_00136FB0;
    case 396u: goto L_00136FC8;
    case 397u: goto L_00136FF0;
    case 398u: goto L_00137020;
    case 399u: goto L_00137038;
    case 400u: goto L_00137050;
    case 401u: goto L_00137078;
    case 402u: goto L_00137080;
    case 403u: goto L_00137090;
    case 404u: goto L_001370B0;
    case 405u: goto L_00137110;
    case 406u: goto L_00137134;
    case 407u: goto L_0013713C;
    case 408u: goto L_0013714C;
    case 409u: goto L_00137168;
    case 410u: goto L_00137170;
    case 411u: goto L_00137180;
    case 412u: goto L_001371A8;
    case 413u: goto L_001371EC;
    case 414u: goto L_001371F4;
    case 415u: goto L_00137208;
    case 416u: goto L_00137210;
    case 417u: goto L_00137224;
    case 418u: goto L_00137238;
    case 419u: goto L_00137240;
    case 420u: goto L_00137258;
    case 421u: goto L_00137278;
    case 422u: goto L_001372C0;
    case 423u: goto L_001372D4;
    case 424u: goto L_001372F0;
    case 425u: goto L_00137304;
    case 426u: goto L_0013731C;
    case 427u: goto L_00137324;
    case 428u: goto L_0013733C;
    case 429u: goto L_0013735C;
    case 430u: goto L_001373A4;
    case 431u: goto L_001373B8;
    case 432u: goto L_001373D4;
    case 433u: goto L_001373E8;
    case 434u: goto L_00137400;
    case 435u: goto L_00137414;
    case 436u: goto L_0013742C;
    case 437u: goto L_00137460;
    case 438u: goto L_0013747C;
    case 439u: goto L_00137488;
    case 440u: goto L_00137490;
    case 441u: goto L_00137498;
    case 442u: goto L_001374B4;
    case 443u: goto L_001374CC;
    case 444u: goto L_001374E0;
    case 445u: goto L_00137500;
    case 446u: goto L_00137554;
    case 447u: goto L_0013755C;
    case 448u: goto L_00137588;
    case 449u: goto L_001375BC;
    case 450u: goto L_001375CC;
    case 451u: goto L_001375E4;
    case 452u: goto L_00137610;
    case 453u: goto L_0013762C;
    case 454u: goto L_00137648;
    case 455u: goto L_0013765C;
    case 456u: goto L_0013766C;
    case 457u: goto L_0013767C;
    case 458u: goto L_0013768C;
    case 459u: goto L_001376C0;
    case 460u: goto L_001376F8;
    case 461u: goto L_0013770C;
    case 462u: goto L_0013774C;
    case 463u: goto L_00137754;
    case 464u: goto L_00137768;
    case 465u: goto L_001377A8;
    case 466u: goto L_001377C0;
    case 467u: goto L_001377E8;
    case 468u: goto L_0013782C;
    case 469u: goto L_00137848;
    case 470u: goto L_00137860;
    case 471u: goto L_0013789C;
    case 472u: goto L_001378BC;
    case 473u: goto L_001378F0;
    case 474u: goto L_00137914;
    case 475u: goto L_00137930;
    case 476u: goto L_00137958;
    case 477u: goto L_0013796C;
    case 478u: goto L_00137984;
    case 479u: goto L_00137A00;
    case 480u: goto L_00137A70;
    case 481u: goto L_00137A8C;
    case 482u: goto L_00137B0C;
    case 483u: goto L_00137B3C;
    case 484u: goto L_00137BBC;
    case 485u: goto L_00137BD8;
    case 486u: goto L_00137C2C;
    case 487u: goto L_00137C50;
    case 488u: goto L_00137C6C;
    case 489u: goto L_00137CA0;
    case 490u: goto L_00137CC4;
    case 491u: goto L_00137CE0;
    case 492u: goto L_00137D00;
    case 493u: goto L_00137D3C;
    case 494u: goto L_00137D58;
    case 495u: goto L_00137D60;
    case 496u: goto L_00137D74;
    case 497u: goto L_00137D88;
    case 498u: goto L_00137DA4;
    case 499u: goto L_00137DAC;
    case 500u: goto L_00137DC0;
    case 501u: goto L_00137DD4;
    case 502u: goto L_00137DF0;
    case 503u: goto L_00137DF8;
    case 504u: goto L_00137E0C;
    case 505u: goto L_00137E20;
    case 506u: goto L_00137E50;
    case 507u: goto L_00137E68;
    case 508u: goto L_00137E70;
    case 509u: goto L_00137EA4;
    case 510u: goto L_00137EAC;
    case 511u: goto L_00137EC8;
    case 512u: goto L_00137EDC;
    case 513u: goto L_00137EF0;
    case 514u: goto L_00137F20;
    case 515u: goto L_00137F3C;
    case 516u: goto L_00137F44;
    case 517u: goto L_00137F4C;
    case 518u: goto L_00137F54;
    case 519u: goto L_00137F84;
    case 520u: goto L_00137F94;
    case 521u: goto L_00137FA4;
    case 522u: goto L_00137FB4;
    case 523u: goto L_00137FC4;
    case 524u: goto L_00137FD0;
    case 525u: goto L_00137FF0;
    default: bad_entry(c, 0x00134000u); return;
    }
L_00134000:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] - 4416u);
    set32(c.r[2], 0u + 2u);
    ld128((c.r[3].w[0]) & ~15u, c.r[6]);
    set32(c.r[4], c.r[16].w[0] + 40u);
    c.r[3].d[0] = ld64((c.r[3].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[6]);
    st64((c.r[5].w[0] + 16u), c.r[3].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013402Cu); st32((c.r[16].w[0] + 444u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x0013402Cu) [[unlikely]] return; }
L_0013402C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00134034u); set32(c.r[4], c.r[16].w[0] + 480u);  if (depth < kMaxDepth) unit_000D(c, 69u, depth + 1u); else { c.pc = 0x001348D0u; return; } if (c.pc != 0x00134034u) [[unlikely]] return; }
L_00134034:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013403Cu);  if (depth < kMaxDepth) unit_0051(c, 19u, depth + 1u); else { c.pc = 0x00244170u; return; } if (c.pc != 0x0013403Cu) [[unlikely]] return; }
L_0013403C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00134050:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013406Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 32u, depth + 1u); else { c.pc = 0x00130300u; return; } if (c.pc != 0x0013406Cu) [[unlikely]] return; }
L_0013406C:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[4], c.r[17].w[0] + 352u);
    st32((c.r[17].w[0] + 428u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 412u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00134084u); st8((c.r[17].w[0] + 408u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x00134084u) [[unlikely]] return; }
L_00134084:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001340A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001340BCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 29u, depth + 1u); else { c.pc = 0x001302B0u; return; } if (c.pc != 0x001340BCu) [[unlikely]] return; }
L_001340BC:
    st32((c.r[17].w[0] + 428u), c.r[16].w[0]);
    set32(c.r[4], c.r[17].w[0] + 352u);
    st32((c.r[17].w[0] + 412u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001340D0u); st8((c.r[17].w[0] + 408u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x001340D0u) [[unlikely]] return; }
L_001340D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001340F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00134104u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 304u, depth + 1u); else { c.pc = 0x0012E500u; return; } if (c.pc != 0x00134104u) [[unlikely]] return; }
    goto L_00134104;
L_00134100:
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_00134104:
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[16].w[0] + 432u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00134130:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00134144u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 135u, depth + 1u); else { c.pc = 0x001A9560u; return; } if (c.pc != 0x00134144u) [[unlikely]] return; }
L_00134144:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013415C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013415Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013415Cu) [[unlikely]] return; }
L_0013415C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00134170:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00134184u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 26u, depth + 1u); else { c.pc = 0x00134230u; return; } if (c.pc != 0x00134184u) [[unlikely]] return; }
L_00134184:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013419C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013419Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013419Cu) [[unlikely]] return; }
L_0013419C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001341B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001341C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 26u, depth + 1u); else { c.pc = 0x00134230u; return; } if (c.pc != 0x001341C4u) [[unlikely]] return; }
L_001341C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001341DC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001341DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001341DCu) [[unlikely]] return; }
L_001341DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001341F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00134204u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 26u, depth + 1u); else { c.pc = 0x00134230u; return; } if (c.pc != 0x00134204u) [[unlikely]] return; }
L_00134204:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013421C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013421Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013421Cu) [[unlikely]] return; }
L_0013421C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00134230:
    set32(c.r[3], ld32((c.r[4].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00134240; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 137u));
    c.budget -= 1;
L_00134240:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00134250:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00134264u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 436u, depth + 1u); else { c.pc = 0x00133BC0u; return; } if (c.pc != 0x00134264u) [[unlikely]] return; }
L_00134264:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 20624u);
    set32(c.r[3], c.r[3].w[0] - 20536u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 608u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001342A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001342B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 476u, depth + 1u); else { c.pc = 0x00133FD0u; return; } if (c.pc != 0x001342B4u) [[unlikely]] return; }
L_001342B4:
    st8((c.r[16].w[0] + 608u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001342D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 608u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00134314; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 137u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0013431C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00134308u); set32(c.r[5], 0u + 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00134308u) [[unlikely]] return; }
L_00134308:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 608u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0013431C; } }
L_00134314:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013431Cu);  if (depth < kMaxDepth) unit_000D(c, 23u, depth + 1u); else { c.pc = 0x001341F0u; return; } if (c.pc != 0x0013431Cu) [[unlikely]] return; }
L_0013431C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00134330:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0] + 12u), c.f[23]);
    c.r[16].d[0] = c.r[10].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    set32(c.r[6], c.r[29].w[0] + 144u);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[4], 0u + 3u);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[23] = c.f[12];
    c.f[20] = c.f[13];
    c.f[22] = c.f[14];
    c.f[21] = c.f[15];
    c.budget -= 21;
L_00134384:
    set32(c.r[3], ld32((c.r[8].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[8].w[0] + 4u)));
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[8], c.r[8].w[0] + 8u);
    st32((c.r[6].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[6], c.r[6].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00134384u | kUnwind; return; } goto L_00134384; } }
    set32(c.r[6], c.r[29].w[0] + 112u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 2;
L_001343AC:
    set32(c.r[3], ld32((c.r[9].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[9].w[0] + 4u)));
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[9], c.r[9].w[0] + 8u);
    st32((c.r[6].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[6], c.r[6].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001343ACu | kUnwind; return; } goto L_001343AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001343D4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x001343D4u) [[unlikely]] return; }
L_001343D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[19].w[0] + 20u);
    set32(c.r[2], c.r[2].w[0] - 20640u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001343ECu); st32((c.r[19].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 271u, depth + 1u); else { c.pc = 0x002275A0u; return; } if (c.pc != 0x001343ECu) [[unlikely]] return; }
L_001343EC:
    st32((c.r[19].w[0] + 56u), c.f[23]);
    set32(c.r[6], c.r[29].w[0] + 144u);
    st32((c.r[19].w[0] + 60u), c.f[20]);
    set32(c.r[5], c.r[19].w[0] + 72u);
    st32((c.r[19].w[0] + 64u), c.f[22]);
    set32(c.r[4], 0u + 3u);
    st32((c.r[19].w[0] + 68u), c.f[21]);
    c.budget -= 7;
L_00134408:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00134408u | kUnwind; return; } goto L_00134408; } }
    set32(c.r[6], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[19].w[0] + 96u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
L_00134434:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 2;
L_0013443C:
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00134434u | kUnwind; return; } goto L_00134434; } }
    st8((c.r[19].w[0] + 120u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[20], ld32((c.r[2].w[0] + 224u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 440u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00134470u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00134470u) [[unlikely]] return; }
L_00134470:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00134484; } }
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00134484u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 110u, depth + 1u); else { c.pc = 0x001630C0u; return; } if (c.pc != 0x00134484u) [[unlikely]] return; }
L_00134484:
    st32((c.r[19].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00134490u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00134490u) [[unlikely]] return; }
L_00134490:
    ld128((c.r[2].w[0]) & ~15u, c.r[4]);
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st128((c.r[3].w[0] + 48u) & ~15u, c.r[4]);
    c.f[1] = ld32((c.r[19].w[0] + 68u));
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    c.f[0] = ld32((c.r[19].w[0] + 64u));
    st32((c.r[3].w[0] + 16u), c.f[0]);
    st32((c.r[3].w[0] + 20u), c.f[1]);
    st32((c.r[3].w[0] + 24u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[19].w[0] + 120u));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001344F4; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    c.f[12] = ld32((c.r[19].w[0] + 56u));
    c.f[13] = ld32((c.r[19].w[0] + 60u));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001344ECu); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001344ECu) [[unlikely]] return; }
L_001344EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 830u);  if (t) { goto L_00134520; } }
L_001344F4:
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    c.f[12] = ld32((c.r[19].w[0] + 56u));
    c.f[13] = ld32((c.r[19].w[0] + 60u));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013451Cu); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013451Cu) [[unlikely]] return; }
L_0013451C:
    set32(c.r[2], 0u + 830u);
    c.budget -= 1;
L_00134520:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 272u);  if (t) { goto L_00134530; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 16u), 0u);  if (t) { goto L_001346E0; } }
L_00134530:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00134538u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00134538u) [[unlikely]] return; }
L_00134538:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0013454C; } }
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013454Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 110u, depth + 1u); else { c.pc = 0x001630C0u; return; } if (c.pc != 0x0013454Cu) [[unlikely]] return; }
L_0013454C:
    st32((c.r[19].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00134558u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00134558u) [[unlikely]] return; }
L_00134558:
    ld128((c.r[2].w[0]) & ~15u, c.r[7]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    set32(c.r[6], ld32((c.r[19].w[0] + 16u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.f[20];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00260000u);
    c.r[2].d[0] = c.r[2].d[0] | 22647ull;
    st128((c.r[6].w[0] + 48u) & ~15u, c.r[7]);
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    st32((c.r[2].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 20;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001345A8u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001345A8u) [[unlikely]] return; }
L_001345A8:
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[2], 0u + 610u);
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[4] = ld32((c.r[4].w[0] + 160u));
    c.f[3] = ld32((c.r[4].w[0] + 16u));
    c.f[2] = ld32((c.r[3].w[0] + 160u));
    c.f[1] = ld32((c.r[3].w[0] + 16u));
    c.facc = fp::mul(c.f[4], c.f[3]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[2], c.f[1]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 15;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);  if (t) { goto L_0013463C; } }
    fpu_div(c, 3u, c.f[0], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.f[1] = ld32((c.r[1].w[0] - 17656u));
    c.f[2] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    st32((c.r[4].w[0] + 16u), c.f[1]);
    c.f[1] = ld32((c.r[1].w[0] - 17664u));
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    st32((c.r[4].w[0] + 20u), c.f[1]);
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    st32((c.r[2].w[0] + 16u), c.f[0]);
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 24u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.budget -= 22;
L_0013463C:
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    c.f[2] = c.r[2].w[0];
    set32(c.r[5], ld32((c.r[19].w[0] + 16u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[5] = ld32((c.r[4].w[0] + 16u));
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[4] = ld32((c.r[4].w[0] + 160u));
    c.f[3] = ld32((c.r[5].w[0] + 16u));
    c.f[0] = ld32((c.r[5].w[0] + 160u));
    c.f[1] = c.r[3].w[0];
    c.f[13] = c.f[20];
    c.f[22] = fp::mul(c.f[4], c.f[5]);
    c.f[21] = fp::mul(c.f[0], c.f[3]);
    c.f[0] = fp::add(c.f[22], c.f[21]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.f[23] = fp::sub(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[22], c.f[2]);
    c.budget -= 26;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001346A4u); c.f[12] = fp::add(c.f[23], c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001346A4u) [[unlikely]] return; }
L_001346A4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[4], ld32((c.r[19].w[0] + 16u)));
    c.f[2] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    fpu_div(c, 2u, c.f[21], c.f[2]);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[1] = fp::add(c.f[23], c.f[22]);
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::add(c.f[2], c.f[1]);
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001346E0u); c.f[13] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001346E0u) [[unlikely]] return; }
L_001346E0:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00134720:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001347C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 20640u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013476C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013476C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013476Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013476Cu) [[unlikely]] return; }
L_0013476C:
    st32((c.r[17].w[0] + 12u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00134794; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00134794; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00134794u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00134794u) [[unlikely]] return; }
L_00134794:
    set32(c.r[4], c.r[17].w[0] + 20u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001347A4u); st32((c.r[17].w[0] + 16u), 0u);  if (depth < kMaxDepth) unit_0049(c, 274u, depth + 1u); else { c.pc = 0x002275F0u; return; } if (c.pc != 0x001347A4u) [[unlikely]] return; }
L_001347A4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001347B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x001347B0u) [[unlikely]] return; }
L_001347B0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001347CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001347C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001347C8u) [[unlikely]] return; }
L_001347C8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001347CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001347E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00134828; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 17264u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00134810u); st32((c.r[17].w[0] + 176u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 264u, depth + 1u); else { c.pc = 0x0014ADA0u; return; } if (c.pc != 0x00134810u) [[unlikely]] return; }
L_00134810:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0013482C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00134828u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00134828u) [[unlikely]] return; }
L_00134828:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0013482C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00134840:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0013487C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00134860u);  if (depth < kMaxDepth) unit_000D(c, 70u, depth + 1u); else { c.pc = 0x001348E0u; return; } if (c.pc != 0x00134860u) [[unlikely]] return; }
L_00134860:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[3].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013487Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013487Cu) [[unlikely]] return; }
L_0013487C:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001348AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00134890u);  if (depth < kMaxDepth) unit_000D(c, 70u, depth + 1u); else { c.pc = 0x001348E0u; return; } if (c.pc != 0x00134890u) [[unlikely]] return; }
L_00134890:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    st32((c.r[3].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001348ACu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001348ACu) [[unlikely]] return; }
L_001348AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001348C0:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] + 20u);
    c.budget -= 4;
    { set32(c.r[5], c.r[2].w[0] + 72u);  [[clang::musttail]] return unit_0049(c, 280u, depth); }
L_001348D0:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] + 20u);
    c.budget -= 4;
    { set32(c.r[5], c.r[2].w[0] + 96u);  [[clang::musttail]] return unit_0049(c, 280u, depth); }
L_001348E0:
    c.f[0] = ld32((c.r[4].w[0] + 32u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00134900:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 53u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00134924; } }
    set32(c.r[4], c.r[16].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00134924u); set32(c.r[5], c.r[16].w[0] + 72u);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x00134924u) [[unlikely]] return; }
L_00134924:
    set32(c.r[4], c.r[16].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00134930u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0049(c, 277u, depth + 1u); else { c.pc = 0x00227650u; return; } if (c.pc != 0x00134930u) [[unlikely]] return; }
L_00134930:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00134940:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00134968u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0012(c, 254u, depth + 1u); else { c.pc = 0x0014AA40u; return; } if (c.pc != 0x00134968u) [[unlikely]] return; }
L_00134968:
    set32(c.r[4], c.r[19].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00134974u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x00134974u) [[unlikely]] return; }
L_00134974:
    set32(c.r[4], c.r[19].w[0] + 204u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00134980u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 256u, depth + 1u); else { c.pc = 0x0013E440u; return; } if (c.pc != 0x00134980u) [[unlikely]] return; }
L_00134980:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 20720u);
    set32(c.r[3], c.r[3].w[0] - 20692u);
    st32((c.r[19].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[4], 0u + 9u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[19].w[0] + 192u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 20676u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001349ACu); st32((c.r[19].w[0] + 204u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x001349ACu) [[unlikely]] return; }
L_001349AC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001349B8u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x001349B8u) [[unlikely]] return; }
L_001349B8:
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    set32(c.r[5], 0u + 30u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[12] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42D00000u);
    st128((c.r[19].w[0] + 224u) & ~15u, c.r[6]);
    c.f[13] = c.r[2].w[0];
    ld128((c.r[16].w[0]) & ~15u, c.r[2]);
    st128((c.r[19].w[0] + 240u) & ~15u, c.r[2]);
    st32((c.r[19].w[0] + 276u), c.r[5].w[0]);
    st32((c.r[19].w[0] + 272u), 0u);
    st32((c.r[19].w[0] + 284u), 0u);
    st8((c.r[19].w[0] + 280u), static_cast<std::uint8_t>(0u));
    ld128((c.r[19].w[0] + 224u) & ~15u, c.r[2]);
    st128((c.r[19].w[0] + 256u) & ~15u, c.r[2]);
    st32((c.r[19].w[0] + 288u), c.r[18].w[0]);
    st32((c.r[19].w[0] + 292u), c.r[17].w[0]);
    st32((c.r[19].w[0] + 296u), 0u);
    st32((c.r[19].w[0] + 300u), 0u);
    st32((c.r[19].w[0] + 304u), 0u);
    st32((c.r[19].w[0] + 308u), 0u);
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.f[14] = ld32((c.r[1].w[0] - 17632u));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 27;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00134A24u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00134A24u) [[unlikely]] return; }
L_00134A24:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00134A50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00134ACC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 20720u);
    set32(c.r[3], c.r[3].w[0] - 20692u);
    st32((c.r[17].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[4], c.r[17].w[0] + 204u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 192u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 20676u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00134A9Cu); st32((c.r[17].w[0] + 204u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E490u; return; } if (c.pc != 0x00134A9Cu) [[unlikely]] return; }
L_00134A9C:
    set32(c.r[4], c.r[17].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00134AA8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x00134AA8u) [[unlikely]] return; }
L_00134AA8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00134AB4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 255u, depth + 1u); else { c.pc = 0x0014AB70u; return; } if (c.pc != 0x00134AB4u) [[unlikely]] return; }
L_00134AB4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00134AD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00134ACCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00134ACCu) [[unlikely]] return; }
L_00134ACC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00134AD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00134AF0:
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00134000u < 16384u) { entry = entries_000D[(t - 0x00134000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00134B00:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 224u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00134B34u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00134B34u) [[unlikely]] return; }
L_00134B34:
    set32(c.r[8], ld32((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], c.r[5].w[0] - 4384u);
    set32(c.r[3], c.r[29].w[0] + 112u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 48u), c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[16].w[0] + 52u), c.r[8].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 304u), c.r[7].w[0]);
    st32((c.r[16].w[0] + 308u), c.r[7].w[0]);
    st32((c.r[16].w[0] + 312u), 0u);
    st32((c.r[16].w[0] + 316u), c.r[6].w[0]);
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00134B80u); st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00134B80u) [[unlikely]] return; }
L_00134B80:
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], 0u + 16u);
    st32((c.r[16].w[0] + 48u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[16].w[0] + 52u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 17656u));
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] - 17664u));
    st32((c.r[16].w[0] + 20u), c.f[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00134BC0u); st32((c.r[16].w[0] + 24u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00134BC0u) [[unlikely]] return; }
L_00134BC0:
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 356u), 0u);
    set32(c.r[2], ld32((c.r[20].w[0] + 300u)));
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00134BE4u); set32(c.r[5], c.r[29].w[0] + 112u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00134BE4u) [[unlikely]] return; }
L_00134BE4:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00134BF4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00134BF4u) [[unlikely]] return; }
L_00134BF4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[5], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[2], c.r[2].w[0] - 4368u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[29].w[0] + 96u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[19], ld32((c.r[5].w[0] + 440u)));
    set32(c.r[18], ld32((c.r[5].w[0] + 444u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00134C20u); st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00134C20u) [[unlikely]] return; }
L_00134C20:
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[19].w[0] + 48u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[19].w[0] + 52u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[19].w[0] + 56u), c.r[5].w[0]);
    st32((c.r[19].w[0] + 304u), c.r[4].w[0]);
    st32((c.r[19].w[0] + 308u), c.r[4].w[0]);
    st32((c.r[19].w[0] + 312u), 0u);
    st32((c.r[19].w[0] + 316u), c.r[3].w[0]);
    ld128((c.r[20].w[0] + 256u) & ~15u, c.r[3]);
    st128((c.r[18].w[0] + 48u) & ~15u, c.r[3]);
    set32(c.r[3], ld32((c.r[20].w[0] + 308u)));
    c.budget -= 17;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[6], c.r[20].w[0] + 256u);  if (t) { goto L_00134C88; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 300u)));
    set32(c.r[3], 0u + 255u);
    set32(c.r[5], ld32((c.r[6].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00134C84; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00134C84:
    st32((c.r[18].w[0] + 60u), c.r[3].w[0]);
    c.budget -= 1;
L_00134C88:
    set32(c.r[4], ld32((c.r[20].w[0] + 300u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[19].w[0] + 60u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 300u)));
    st32((c.r[19].w[0] + 300u), c.r[4].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 17640u));
    st32((c.r[19].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] - 17640u));
    st32((c.r[19].w[0] + 20u), c.f[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_00134E14; } }
L_00134CC0:
    set32(c.r[2], ld32((c.r[20].w[0] + 288u)));
    set32(c.r[16], c.r[17].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00134CFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00134CE0u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00134CE0u) [[unlikely]] return; }
L_00134CE0:
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[19].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[19].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 56u), c.r[2].w[0]);  if (t) { goto L_00134D1C; } }
L_00134CFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00134D04u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00134D04u) [[unlikely]] return; }
L_00134D04:
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[19].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[19].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[19].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 6;
L_00134D1C:
    set32(c.r[2], ld32((c.r[20].w[0] + 288u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00134D2Cu); set32(c.r[4], ld32((c.r[2].w[0] + 4u)));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00134D2Cu) [[unlikely]] return; }
L_00134D2C:
    st32((c.r[19].w[0] + 352u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[19].w[0] + 356u), 0u);
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00134D48u); set32(c.r[5], c.r[29].w[0] + 96u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00134D48u) [[unlikely]] return; }
L_00134D48:
    set32(c.r[2], ld32((c.r[20].w[0] + 296u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_00134DBC; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 352u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 352u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 356u), 0u);
    c.f[0] = ld32((c.r[1].w[0] - 17640u));
    st32((c.r[18].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] - 17672u));
    st32((c.r[18].w[0] + 20u), c.f[0]);
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00134D94u); set32(c.r[5], c.r[29].w[0] + 96u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00134D94u) [[unlikely]] return; }
L_00134D94:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00134DA4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00134DA4u) [[unlikely]] return; }
L_00134DA4:
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00134DB4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00134DB4u) [[unlikely]] return; }
L_00134DB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[29].w[0] + 100u));  if (t) { goto L_00134E00; } }
L_00134DBC:
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00134DDCu); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00134DDCu) [[unlikely]] return; }
L_00134DDC:
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00134DFCu); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00134DFCu) [[unlikely]] return; }
L_00134DFC:
    c.f[1] = ld32((c.r[29].w[0] + 100u));
    c.budget -= 1;
L_00134E00:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41B80000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 100u), c.f[0]);
    c.budget -= 5;
L_00134E14:
    set32(c.r[3], ld32((c.r[20].w[0] + 292u)));
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00134CC0u | kUnwind; return; } goto L_00134CC0; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00134E50:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 280u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00134E88; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 284u)));
    set32(c.r[3], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0] + 284u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 272u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00134EB8; } }
    st32((c.r[4].w[0] + 284u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 280u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00134EB8; } }
L_00134E88:
    set32(c.r[2], ld32((c.r[4].w[0] + 284u)));
    set32(c.r[5], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0] + 284u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 276u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 272u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00134EB8; } }
    st32((c.r[4].w[0] + 284u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] + 280u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00134EB8:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] + 224u);  [[clang::musttail]] return unit_002A(c, 280u, depth); }
L_00134EC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00134EE8u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 12u, depth + 1u); else { c.pc = 0x001300B0u; return; } if (c.pc != 0x00134EE8u) [[unlikely]] return; }
L_00134EE8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 20880u);
    set32(c.r[2], c.r[2].w[0] - 20792u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[18].w[0] + 40u);
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00134F0Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 271u, depth + 1u); else { c.pc = 0x002275A0u; return; } if (c.pc != 0x00134F0Cu) [[unlikely]] return; }
L_00134F0C:
    set32(c.r[4], c.r[18].w[0] + 76u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00134F18u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 271u, depth + 1u); else { c.pc = 0x002275A0u; return; } if (c.pc != 0x00134F18u) [[unlikely]] return; }
L_00134F18:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00134F28u); set32(c.r[4], c.r[18].w[0] + 112u);  if (depth < kMaxDepth) unit_000D(c, 74u, depth + 1u); else { c.pc = 0x00134940u; return; } if (c.pc != 0x00134F28u) [[unlikely]] return; }
L_00134F28:
    st32((c.r[18].w[0] + 432u), 0u);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[18].w[0] + 436u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00134F50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00134FF4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 20880u);
    set32(c.r[2], c.r[2].w[0] - 20792u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 432u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00134FA8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00134FA8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00134FA8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00134FA8u) [[unlikely]] return; }
L_00134FA8:
    set32(c.r[4], c.r[17].w[0] + 112u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00134FB8u); st32((c.r[17].w[0] + 432u), 0u);  if (depth < kMaxDepth) unit_000D(c, 81u, depth + 1u); else { c.pc = 0x00134A50u; return; } if (c.pc != 0x00134FB8u) [[unlikely]] return; }
L_00134FB8:
    set32(c.r[4], c.r[17].w[0] + 76u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00134FC4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0049(c, 274u, depth + 1u); else { c.pc = 0x002275F0u; return; } if (c.pc != 0x00134FC4u) [[unlikely]] return; }
L_00134FC4:
    set32(c.r[4], c.r[17].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00134FD0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0049(c, 274u, depth + 1u); else { c.pc = 0x002275F0u; return; } if (c.pc != 0x00134FD0u) [[unlikely]] return; }
L_00134FD0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00134FDCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 15u, depth + 1u); else { c.pc = 0x00130130u; return; } if (c.pc != 0x00134FDCu) [[unlikely]] return; }
L_00134FDC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00134FF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00134FF4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00134FF4u) [[unlikely]] return; }
L_00134FF4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00134FF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00135010:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00135028u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00135028u) [[unlikely]] return; }
L_00135028:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00135058; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0013503C; } }
    set32(c.r[7], c.r[7].w[0] + 20u);
    c.budget -= 1;
L_0013503C:
    set32(c.r[8], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[9], ld32((c.r[16].w[0] + 32u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00135058u); c.r[10].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 371u, depth + 1u); else { c.pc = 0x0012EBA0u; return; } if (c.pc != 0x00135058u) [[unlikely]] return; }
L_00135058:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00135070:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00135084u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 24u, depth + 1u); else { c.pc = 0x00130260u; return; } if (c.pc != 0x00135084u) [[unlikely]] return; }
L_00135084:
    st32((c.r[16].w[0] + 396u), 0u);
    set32(c.r[4], c.r[16].w[0] + 336u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00135094u); st8((c.r[16].w[0] + 392u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x00135094u) [[unlikely]] return; }
L_00135094:
    st32((c.r[16].w[0] + 420u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001350B0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001350C8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 25u, depth + 1u); else { c.pc = 0x00130270u; return; } if (c.pc != 0x001350C8u) [[unlikely]] return; }
L_001350C8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001350DCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002A(c, 139u, depth + 1u); else { c.pc = 0x001A95F0u; return; } if (c.pc != 0x001350DCu) [[unlikely]] return; }
L_001350DC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 432u)));
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[3].w[0] + 624u);  if (t) { goto L_0013513C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001350F8u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001350F8u) [[unlikely]] return; }
L_001350F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0013510C; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013510Cu); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_002A(c, 287u, depth + 1u); else { c.pc = 0x001AB200u; return; } if (c.pc != 0x0013510Cu) [[unlikely]] return; }
L_0013510C:
    st32((c.r[16].w[0] + 432u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013511Cu); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x0013511Cu) [[unlikely]] return; }
L_0013511C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013512Cu); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x0013512Cu) [[unlikely]] return; }
L_0013512C:
    set32(c.r[4], ld32((c.r[16].w[0] + 432u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013513Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x0013513Cu) [[unlikely]] return; }
L_0013513C:
    set32(c.r[4], ld32((c.r[16].w[0] + 432u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00135150u); set32(c.r[5], 0u + 20u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00135150u) [[unlikely]] return; }
L_00135150:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[2], c.r[2].w[0] - 4352u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    ld128((c.r[2].w[0]) & ~15u, c.r[8]);
    set32(c.r[3], c.r[3].w[0] - 4320u);
    c.r[6].d[0] = ld64((c.r[2].w[0] + 16u));
    set32(c.r[7], c.r[29].w[0] + 48u);
    set32(c.r[4], c.r[16].w[0] + 76u);
    st128((c.r[5].w[0]) & ~15u, c.r[8]);
    set32(c.r[2], 0u + 1u);
    st64((c.r[5].w[0] + 16u), c.r[6].d[0]);
    ld128((c.r[3].w[0]) & ~15u, c.r[6]);
    c.r[3].d[0] = ld64((c.r[3].w[0] + 16u));
    st128((c.r[7].w[0]) & ~15u, c.r[6]);
    st64((c.r[7].w[0] + 16u), c.r[3].d[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00135198u); st32((c.r[16].w[0] + 420u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x00135198u) [[unlikely]] return; }
L_00135198:
    set32(c.r[4], c.r[16].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001351A4u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x001351A4u) [[unlikely]] return; }
L_001351A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001351ACu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0051(c, 16u, depth + 1u); else { c.pc = 0x00244130u; return; } if (c.pc != 0x001351ACu) [[unlikely]] return; }
L_001351AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001351B4u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x001351B4u) [[unlikely]] return; }
L_001351B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001351D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001351E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 26u, depth + 1u); else { c.pc = 0x00130280u; return; } if (c.pc != 0x001351E4u) [[unlikely]] return; }
L_001351E4:
    set32(c.r[4], ld32((c.r[16].w[0] + 432u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00135200; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00135200u); set32(c.r[5], 0u + 21u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00135200u) [[unlikely]] return; }
L_00135200:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] - 4288u);
    set32(c.r[2], 0u + 2u);
    ld128((c.r[3].w[0]) & ~15u, c.r[6]);
    set32(c.r[4], c.r[16].w[0] + 76u);
    c.r[3].d[0] = ld64((c.r[3].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[6]);
    st64((c.r[5].w[0] + 16u), c.r[3].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013522Cu); st32((c.r[16].w[0] + 420u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x0013522Cu) [[unlikely]] return; }
L_0013522C:
    set32(c.r[4], c.r[16].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00135238u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x00135238u) [[unlikely]] return; }
L_00135238:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00135240u);  if (depth < kMaxDepth) unit_0051(c, 19u, depth + 1u); else { c.pc = 0x00244170u; return; } if (c.pc != 0x00135240u) [[unlikely]] return; }
L_00135240:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00135250:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00135264u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 27u, depth + 1u); else { c.pc = 0x00130290u; return; } if (c.pc != 0x00135264u) [[unlikely]] return; }
L_00135264:
    st8((c.r[16].w[0] + 436u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[16].w[0] + 432u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00135284; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00135284u); set32(c.r[5], 0u + 21u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00135284u) [[unlikely]] return; }
L_00135284:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] - 4256u);
    set32(c.r[2], 0u + 2u);
    ld128((c.r[3].w[0]) & ~15u, c.r[6]);
    set32(c.r[4], c.r[16].w[0] + 76u);
    c.r[3].d[0] = ld64((c.r[3].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[6]);
    st64((c.r[5].w[0] + 16u), c.r[3].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001352B0u); st32((c.r[16].w[0] + 420u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x001352B0u) [[unlikely]] return; }
L_001352B0:
    set32(c.r[4], c.r[16].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001352BCu); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x001352BCu) [[unlikely]] return; }
L_001352BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001352C4u);  if (depth < kMaxDepth) unit_0051(c, 19u, depth + 1u); else { c.pc = 0x00244170u; return; } if (c.pc != 0x001352C4u) [[unlikely]] return; }
L_001352C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001352E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001352FCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 32u, depth + 1u); else { c.pc = 0x00130300u; return; } if (c.pc != 0x001352FCu) [[unlikely]] return; }
L_001352FC:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    st32((c.r[17].w[0] + 408u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00135320:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013533Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 29u, depth + 1u); else { c.pc = 0x001302B0u; return; } if (c.pc != 0x0013533Cu) [[unlikely]] return; }
L_0013533C:
    st32((c.r[17].w[0] + 408u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00135360:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00135374u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 304u, depth + 1u); else { c.pc = 0x0012E500u; return; } if (c.pc != 0x00135374u) [[unlikely]] return; }
L_00135374:
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[16].w[0] + 412u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 88u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[16].w[0] + 416u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001353B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001353C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 135u, depth + 1u); else { c.pc = 0x001A9560u; return; } if (c.pc != 0x001353C4u) [[unlikely]] return; }
L_001353C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001353DC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001353DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001353DCu) [[unlikely]] return; }
L_001353DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001353F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00135404u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 167u, depth + 1u); else { c.pc = 0x001354F0u; return; } if (c.pc != 0x00135404u) [[unlikely]] return; }
L_00135404:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013541C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013541Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013541Cu) [[unlikely]] return; }
L_0013541C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00135430:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00135444u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 167u, depth + 1u); else { c.pc = 0x001354F0u; return; } if (c.pc != 0x00135444u) [[unlikely]] return; }
L_00135444:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013545C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013545Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013545Cu) [[unlikely]] return; }
L_0013545C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00135470:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 436u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001354B4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 432u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 137u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001354D4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001354A8u); set32(c.r[5], 0u + 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001354A8u) [[unlikely]] return; }
L_001354A8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 436u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001354D4; } }
L_001354B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001354BCu);  if (depth < kMaxDepth) unit_000D(c, 167u, depth + 1u); else { c.pc = 0x001354F0u; return; } if (c.pc != 0x001354BCu) [[unlikely]] return; }
L_001354BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001354D4; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001354D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001354D4u) [[unlikely]] return; }
L_001354D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001354F0:
    set32(c.r[3], ld32((c.r[4].w[0] + 432u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00135500; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 137u));
    c.budget -= 1;
L_00135500:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00135510:
    set32(c.r[4], c.r[4].w[0] + 112u);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00134000u < 16384u) { entry = entries_000D[(t - 0x00134000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00135530:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 4224u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 4u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00135554u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 12u, depth + 1u); else { c.pc = 0x001300B0u; return; } if (c.pc != 0x00135554u) [[unlikely]] return; }
L_00135554:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 21040u);
    set32(c.r[2], c.r[2].w[0] - 20952u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[3].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 40u), 0u);
    st32((c.r[16].w[0] + 44u), 0u);
    st32((c.r[16].w[0] + 48u), 0u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 68u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00135594; } }
L_00135584:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 52u), 0u);
    c.budget -= 4;
L_00135594:
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00135584u | kUnwind; return; } goto L_00135584; } }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001355C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001356DC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 21040u);
    set32(c.r[2], c.r[2].w[0] - 20952u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00135620; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00135620; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00135620u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00135620u) [[unlikely]] return; }
L_00135620:
    st32((c.r[17].w[0] + 48u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0013565C; } }
L_0013562C:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[18], c.r[2].w[0] + 52u);  if (t) { goto L_00135654; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00135654; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00135654u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00135654u) [[unlikely]] return; }
L_00135654:
    st32((c.r[18].w[0]), 0u);
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 2;
L_0013565C:
    c.r[2].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[19].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013562Cu | kUnwind; return; } goto L_0013562C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013568C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013568C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013568Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013568Cu) [[unlikely]] return; }
L_0013568C:
    st32((c.r[17].w[0] + 40u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001356B4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001356B4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001356B4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001356B4u) [[unlikely]] return; }
L_001356B4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001356C4u); st32((c.r[17].w[0] + 44u), 0u);  if (depth < kMaxDepth) unit_000C(c, 15u, depth + 1u); else { c.pc = 0x00130130u; return; } if (c.pc != 0x001356C4u) [[unlikely]] return; }
L_001356C4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001356E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001356DCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001356DCu) [[unlikely]] return; }
L_001356DC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001356E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00135700:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0013579C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 19456u);
    set32(c.r[3], c.r[3].w[0] - 19440u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 176u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 19424u);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_0013575C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 19392u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013575Cu); st32((c.r[16].w[0] + 176u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x0013575Cu) [[unlikely]] return; }
L_0013575C:
    set32(c.r[4], c.r[16].w[0] + 160u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);  if (t) { goto L_00135778; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 19392u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00135778u); st32((c.r[16].w[0] + 160u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x00135778u) [[unlikely]] return; }
L_00135778:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00135784u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 310u, depth + 1u); else { c.pc = 0x00196D20u; return; } if (c.pc != 0x00135784u) [[unlikely]] return; }
L_00135784:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001357A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013579Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0013579Cu) [[unlikely]] return; }
L_0013579C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001357A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001357C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00135840; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 19504u);
    set32(c.r[2], c.r[2].w[0] - 19488u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00135810; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 17264u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00135810u); st32((c.r[17].w[0] + 208u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 264u, depth + 1u); else { c.pc = 0x0014ADA0u; return; } if (c.pc != 0x00135810u) [[unlikely]] return; }
L_00135810:
    set32(c.r[4], c.r[17].w[0] + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013581Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x0013581Cu) [[unlikely]] return; }
L_0013581C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00135828u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E490u; return; } if (c.pc != 0x00135828u) [[unlikely]] return; }
L_00135828:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00135844; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00135840u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00135840u) [[unlikely]] return; }
L_00135840:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00135844:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00135860:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00135878u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00135878u) [[unlikely]] return; }
L_00135878:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001358AC; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_0013588C; } }
    set32(c.r[16], c.r[16].w[0] + 20u);
    c.budget -= 1;
L_0013588C:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[8].w[0] - 4224u);
    set32(c.r[9], 0u + 4u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001358ACu); c.r[10].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 371u, depth + 1u); else { c.pc = 0x0012EBA0u; return; } if (c.pc != 0x001358ACu) [[unlikely]] return; }
L_001358AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001358C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001358D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 24u, depth + 1u); else { c.pc = 0x00130260u; return; } if (c.pc != 0x001358D4u) [[unlikely]] return; }
L_001358D4:
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001358E4; } }
    st8((c.r[4].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001358E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00135900:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00135924u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000C(c, 25u, depth + 1u); else { c.pc = 0x00130270u; return; } if (c.pc != 0x00135924u) [[unlikely]] return; }
L_00135924:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00135938u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002A(c, 139u, depth + 1u); else { c.pc = 0x001A95F0u; return; } if (c.pc != 0x00135938u) [[unlikely]] return; }
L_00135938:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[20].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[3].w[0] + 624u);  if (t) { goto L_00135998; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00135954u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00135954u) [[unlikely]] return; }
L_00135954:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00135968; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00135968u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_002A(c, 287u, depth + 1u); else { c.pc = 0x001AB200u; return; } if (c.pc != 0x00135968u) [[unlikely]] return; }
L_00135968:
    st32((c.r[20].w[0] + 40u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00135978u); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x00135978u) [[unlikely]] return; }
L_00135978:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00135988u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x00135988u) [[unlikely]] return; }
L_00135988:
    set32(c.r[4], ld32((c.r[20].w[0] + 40u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00135998u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x00135998u) [[unlikely]] return; }
L_00135998:
    set32(c.r[4], ld32((c.r[20].w[0] + 40u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001359ACu); set32(c.r[5], 0u + 57u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001359ACu) [[unlikely]] return; }
L_001359AC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[19], ld32((c.r[2].w[0] + 224u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 228u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00135AA0; } }
L_001359C4:
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[2].w[0] + 52u);
    set32(c.r[2], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 208u);  if (t) { goto L_00135A88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001359E0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001359E0u) [[unlikely]] return; }
L_001359E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_00135A0C; } }
    set32(c.r[4], c.r[18].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - 4224u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[7], 0u + 10017u);
    set32(c.r[6], ld32((c.r[3].w[0] + 4u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00135A0Cu); set32(c.r[8], 0u + 16u);  if (depth < kMaxDepth) unit_000E(c, 56u, depth + 1u); else { c.pc = 0x00138450u; return; } if (c.pc != 0x00135A0Cu) [[unlikely]] return; }
L_00135A0C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x429A0000u);
    set32(c.r[2], 0u + 425u);
    set32(c.r[7], ld32((c.r[16].w[0])));
    c.f[0] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], c.r[18].w[0] << 3);
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[6], c.r[2].w[0] << 3);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[2], c.r[2].w[0] - 4224u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[1] = c.r[6].w[0];
    st32((c.r[7].w[0] + 96u), c.f[0]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[7].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[1].w[0] - 17632u));
    st32((c.r[7].w[0] + 104u), c.f[0]);
    st32((c.r[7].w[0] + 108u), c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0])));
    st8((c.r[2].w[0] + 200u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 31;
L_00135A88:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00135A9Cu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00135A9Cu) [[unlikely]] return; }
L_00135A9C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00135AA0:
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[18].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001359C4u | kUnwind; return; } goto L_001359C4; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_00135B20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00135AC0u); set32(c.r[4], 0u + 384u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00135AC0u) [[unlikely]] return; }
L_00135AC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00135AD4; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00135AD4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 75u, depth + 1u); else { c.pc = 0x00138690u; return; } if (c.pc != 0x00135AD4u) [[unlikely]] return; }
L_00135AD4:
    st32((c.r[20].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[16], ld32((c.r[20].w[0] + 52u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00135AE8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 340u, depth + 1u); else { c.pc = 0x00197030u; return; } if (c.pc != 0x00135AE8u) [[unlikely]] return; }
L_00135AE8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00135B04; } }
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 4;
L_00135B04:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[6], ld32((c.r[1].w[0] - 4220u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00135B14u); set32(c.r[4], ld32((c.r[20].w[0] + 48u)));  if (depth < kMaxDepth) unit_000E(c, 87u, depth + 1u); else { c.pc = 0x00138900u; return; } if (c.pc != 0x00135B14u) [[unlikely]] return; }
L_00135B14:
    set32(c.r[2], ld32((c.r[20].w[0] + 48u)));
    st8((c.r[2].w[0] + 16u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
L_00135B20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00135B28u);  if (depth < kMaxDepth) unit_0051(c, 16u, depth + 1u); else { c.pc = 0x00244130u; return; } if (c.pc != 0x00135B28u) [[unlikely]] return; }
L_00135B28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00135B30u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x00135B30u) [[unlikely]] return; }
L_00135B30:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00135B40u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002A(c, 147u, depth + 1u); else { c.pc = 0x001A96C0u; return; } if (c.pc != 0x00135B40u) [[unlikely]] return; }
L_00135B40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00135B60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00135B78u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 26u, depth + 1u); else { c.pc = 0x00130280u; return; } if (c.pc != 0x00135B78u) [[unlikely]] return; }
L_00135B78:
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00135B98; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00135B94u); set32(c.r[5], 0u + 58u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00135B94u) [[unlikely]] return; }
L_00135B94:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00135B98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;  if (t) { goto L_00135BC8; } }
L_00135BA0:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00135BC0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00135BC0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00135BC0u) [[unlikely]] return; }
L_00135BC0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 2;
L_00135BC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00135BA0u | kUnwind; return; } goto L_00135BA0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00135C34; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00135BF8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 340u, depth + 1u); else { c.pc = 0x00197030u; return; } if (c.pc != 0x00135BF8u) [[unlikely]] return; }
L_00135BF8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00135C14; } }
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 4;
L_00135C14:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[2], c.r[2].w[0] - 4220u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00135C34u); set32(c.r[4], ld32((c.r[16].w[0] + 48u)));  if (depth < kMaxDepth) unit_000E(c, 87u, depth + 1u); else { c.pc = 0x00138900u; return; } if (c.pc != 0x00135C34u) [[unlikely]] return; }
L_00135C34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00135C3Cu);  if (depth < kMaxDepth) unit_0051(c, 19u, depth + 1u); else { c.pc = 0x00244170u; return; } if (c.pc != 0x00135C3Cu) [[unlikely]] return; }
L_00135C3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00135C50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00135C68u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 27u, depth + 1u); else { c.pc = 0x00130290u; return; } if (c.pc != 0x00135C68u) [[unlikely]] return; }
L_00135C68:
    st8((c.r[16].w[0] + 68u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00135C8C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00135C88u); set32(c.r[5], 0u + 58u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00135C88u) [[unlikely]] return; }
L_00135C88:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00135C8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;  if (t) { goto L_00135CBC; } }
L_00135C94:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00135CB4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00135CB4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00135CB4u) [[unlikely]] return; }
L_00135CB4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 2;
L_00135CBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00135C94u | kUnwind; return; } goto L_00135C94; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00135D28; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00135CECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 340u, depth + 1u); else { c.pc = 0x00197030u; return; } if (c.pc != 0x00135CECu) [[unlikely]] return; }
L_00135CEC:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00135D08; } }
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 4;
L_00135D08:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[2], c.r[2].w[0] - 4220u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00135D28u); set32(c.r[4], ld32((c.r[16].w[0] + 48u)));  if (depth < kMaxDepth) unit_000E(c, 87u, depth + 1u); else { c.pc = 0x00138900u; return; } if (c.pc != 0x00135D28u) [[unlikely]] return; }
L_00135D28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00135D30u);  if (depth < kMaxDepth) unit_0051(c, 19u, depth + 1u); else { c.pc = 0x00244170u; return; } if (c.pc != 0x00135D30u) [[unlikely]] return; }
L_00135D30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00135D50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00135D70u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 32u, depth + 1u); else { c.pc = 0x00130300u; return; } if (c.pc != 0x00135D70u) [[unlikely]] return; }
L_00135D70:
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], ld32((c.r[16].w[0] + 24u)));  if (t) { goto L_00135DCC; } }
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00135D94u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 340u, depth + 1u); else { c.pc = 0x00197030u; return; } if (c.pc != 0x00135D94u) [[unlikely]] return; }
L_00135D94:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00135DB0; } }
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 4;
L_00135DB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - 4220u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00135DCCu); set32(c.r[4], ld32((c.r[17].w[0] + 48u)));  if (depth < kMaxDepth) unit_000E(c, 87u, depth + 1u); else { c.pc = 0x00138900u; return; } if (c.pc != 0x00135DCCu) [[unlikely]] return; }
L_00135DCC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00135DF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00135E10u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 29u, depth + 1u); else { c.pc = 0x001302B0u; return; } if (c.pc != 0x00135E10u) [[unlikely]] return; }
L_00135E10:
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00135E6C; } }
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00135E34u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 340u, depth + 1u); else { c.pc = 0x00197030u; return; } if (c.pc != 0x00135E34u) [[unlikely]] return; }
L_00135E34:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00135E50; } }
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 4;
L_00135E50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - 4220u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00135E6Cu); set32(c.r[4], ld32((c.r[17].w[0] + 48u)));  if (depth < kMaxDepth) unit_000E(c, 87u, depth + 1u); else { c.pc = 0x00138900u; return; } if (c.pc != 0x00135E6Cu) [[unlikely]] return; }
L_00135E6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00135E90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00135EA4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 135u, depth + 1u); else { c.pc = 0x001A9560u; return; } if (c.pc != 0x00135EA4u) [[unlikely]] return; }
L_00135EA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00135ECC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00135EB4u);  if (depth < kMaxDepth) unit_004F(c, 127u, depth + 1u); else { c.pc = 0x0023DDB0u; return; } if (c.pc != 0x00135EB4u) [[unlikely]] return; }
L_00135EB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00135ECC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00135ECCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00135ECCu) [[unlikely]] return; }
L_00135ECC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00135EE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00135EF4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 253u, depth + 1u); else { c.pc = 0x00135FE0u; return; } if (c.pc != 0x00135EF4u) [[unlikely]] return; }
L_00135EF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00135F0C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00135F0Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00135F0Cu) [[unlikely]] return; }
L_00135F0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00135F20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00135F34u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 253u, depth + 1u); else { c.pc = 0x00135FE0u; return; } if (c.pc != 0x00135F34u) [[unlikely]] return; }
L_00135F34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00135F4C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00135F4Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00135F4Cu) [[unlikely]] return; }
L_00135F4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00135F60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 68u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00135FA4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 137u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00135FC4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00135F98u); set32(c.r[5], 0u + 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00135F98u) [[unlikely]] return; }
L_00135F98:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 68u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00135FC4; } }
L_00135FA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00135FACu);  if (depth < kMaxDepth) unit_000D(c, 253u, depth + 1u); else { c.pc = 0x00135FE0u; return; } if (c.pc != 0x00135FACu) [[unlikely]] return; }
L_00135FAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00135FC4; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00135FC4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00135FC4u) [[unlikely]] return; }
L_00135FC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00135FE0:
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00135FF0; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 137u));
    c.budget -= 1;
L_00135FF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00136020; } }
L_00135FF8:
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 52u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0013601C; } }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 137u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0013601C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0013602C; } }
L_0013601C:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_00136020:
    c.r[3].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00135FF8u | kUnwind; return; } goto L_00135FF8; } }
L_0013602C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00136040:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00136094; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 20624u);
    set32(c.r[2], c.r[2].w[0] - 20536u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013607Cu); st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000C(c, 443u, depth + 1u); else { c.pc = 0x00133CE0u; return; } if (c.pc != 0x0013607Cu) [[unlikely]] return; }
L_0013607C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00136098; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00136094u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00136094u) [[unlikely]] return; }
L_00136094:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00136098:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001360B0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 192u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001327B0u | kUnwind; return; } [[clang::musttail]] return unit_000C(c, 283u, depth); }
L_001360C0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 192u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00132710u | kUnwind; return; } [[clang::musttail]] return unit_000C(c, 278u, depth); }
L_001360D0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 204u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00132A30u | kUnwind; return; } [[clang::musttail]] return unit_000C(c, 300u, depth); }
L_001360E0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 204u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00132710u | kUnwind; return; } [[clang::musttail]] return unit_000C(c, 278u, depth); }
L_001360F0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 192u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00132D20u | kUnwind; return; } [[clang::musttail]] return unit_000C(c, 317u, depth); }
L_00136100:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 192u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00132C60u | kUnwind; return; } [[clang::musttail]] return unit_000C(c, 311u, depth); }
L_00136110:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 204u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00133410u | kUnwind; return; } [[clang::musttail]] return unit_000C(c, 361u, depth); }
L_00136120:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 204u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00132C60u | kUnwind; return; } [[clang::musttail]] return unit_000C(c, 311u, depth); }
L_00136130:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00133980u | kUnwind; return; } [[clang::musttail]] return unit_000C(c, 413u, depth); }
L_00136140:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00133550u | kUnwind; return; } [[clang::musttail]] return unit_000C(c, 367u, depth); }
L_00136150:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00133CE0u | kUnwind; return; } [[clang::musttail]] return unit_000C(c, 443u, depth); }
L_00136160:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00134050u | kUnwind; return; } goto L_00134050; }
L_00136170:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00136040u | kUnwind; return; } goto L_00136040; }
L_00136180:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 192u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00134AF0u | kUnwind; return; } goto L_00134AF0; }
L_00136190:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 192u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00134A50u | kUnwind; return; } goto L_00134A50; }
L_001361A0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 204u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00134E50u | kUnwind; return; } goto L_00134E50; }
L_001361B0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 204u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00134A50u | kUnwind; return; } goto L_00134A50; }
L_001361C0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001352E0u | kUnwind; return; } goto L_001352E0; }
L_001361D0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00134F50u | kUnwind; return; } goto L_00134F50; }
L_001361E0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00135D50u | kUnwind; return; } goto L_00135D50; }
L_001361F0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001355C0u | kUnwind; return; } goto L_001355C0; }
L_00136200:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[5], 0u + 3u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013621Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0010(c, 29u, depth + 1u); else { c.pc = 0x00140690u; return; } if (c.pc != 0x0013621Cu) [[unlikely]] return; }
L_0013621C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 19808u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013622Cu); st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x0013622Cu) [[unlikely]] return; }
L_0013622C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00136240u); st32((c.r[29].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00136240u) [[unlikely]] return; }
L_00136240:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00136248u);  if (depth < kMaxDepth) unit_002A(c, 64u, depth + 1u); else { c.pc = 0x001A8F40u; return; } if (c.pc != 0x00136248u) [[unlikely]] return; }
L_00136248:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[16], 0u + 4u);  if (t) { goto L_00136270; } }
    set32(c.r[16], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[16].d[0]; set32(c.r[4], 0u + 80u);  if (t) { goto L_00136274; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00136270; } }
    set32(c.r[16], 0u + 4u);
    c.budget -= 1;
L_00136270:
    set32(c.r[4], 0u + 80u);
    c.budget -= 1;
L_00136274:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013627Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0013627Cu) [[unlikely]] return; }
L_0013627C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00136290; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00136290u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 347u, depth + 1u); else { c.pc = 0x001368C0u; return; } if (c.pc != 0x00136290u) [[unlikely]] return; }
L_00136290:
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001362A8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001362A8u) [[unlikely]] return; }
L_001362A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001362B0u); set32(c.r[4], ld32((c.r[29].w[0] + 60u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x001362B0u) [[unlikely]] return; }
L_001362B0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001362D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00136344; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 19808u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013631C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013631C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013631Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013631Cu) [[unlikely]] return; }
L_0013631C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013632Cu); st32((c.r[17].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_0010(c, 31u, depth + 1u); else { c.pc = 0x00140700u; return; } if (c.pc != 0x0013632Cu) [[unlikely]] return; }
L_0013632C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00136348; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00136344u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00136344u) [[unlikely]] return; }
L_00136344:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00136348:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00136360:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00136384u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00136384u) [[unlikely]] return; }
L_00136384:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00136394; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00136394u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 295u, depth + 1u); else { c.pc = 0x001363B0u; return; } if (c.pc != 0x00136394u) [[unlikely]] return; }
L_00136394:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001363B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], ld32((c.r[4].w[0] + 64u)));  if (t) { goto L_001363E8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001363E8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001363E8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001363E8u) [[unlikely]] return; }
L_001363E8:
    st32((c.r[17].w[0] + 12u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00136400u); st32((c.r[29].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00136400u) [[unlikely]] return; }
L_00136400:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 16u);  if (t) { goto L_00136440; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 56u);  if (t) { goto L_00136420; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 16u);  if (t) { goto L_00136460; } }
L_00136420:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00136428u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00136428u) [[unlikely]] return; }
L_00136428:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00136478; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00136438u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000D(c, 411u, depth + 1u); else { c.pc = 0x00137180u; return; } if (c.pc != 0x00136438u) [[unlikely]] return; }
L_00136438:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00136478; } }
L_00136440:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00136448u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00136448u) [[unlikely]] return; }
L_00136448:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00136478; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00136458u);  if (depth < kMaxDepth) unit_000D(c, 395u, depth + 1u); else { c.pc = 0x00136FB0u; return; } if (c.pc != 0x00136458u) [[unlikely]] return; }
L_00136458:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00136478; } }
L_00136460:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00136468u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00136468u) [[unlikely]] return; }
L_00136468:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00136478; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00136478u);  if (depth < kMaxDepth) unit_000E(c, 4u, depth + 1u); else { c.pc = 0x00138030u; return; } if (c.pc != 0x00136478u) [[unlikely]] return; }
L_00136478:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00136494; } }
    set32(c.r[25], ld32((c.r[17].w[0] + 8u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00136494u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00136494u) [[unlikely]] return; }
L_00136494:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013649Cu); set32(c.r[4], ld32((c.r[29].w[0] + 60u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0013649Cu) [[unlikely]] return; }
L_0013649C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001364B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001364D0u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0010(c, 29u, depth + 1u); else { c.pc = 0x00140690u; return; } if (c.pc != 0x001364D0u) [[unlikely]] return; }
L_001364D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 19856u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001364E4u); st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(c.r[17].w[0]));  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x001364E4u) [[unlikely]] return; }
L_001364E4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001364F8u); st32((c.r[29].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x001364F8u) [[unlikely]] return; }
L_001364F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00136500u); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00136500u) [[unlikely]] return; }
L_00136500:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[3], 0u + 10752u);  if (t) { goto L_00136538; } }
    set32(c.r[2], 0u + 15311u);
    st16((c.r[29].w[0] + 56u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013651Cu); st16((c.r[29].w[0] + 58u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x0013651Cu) [[unlikely]] return; }
L_0013651C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 17624u);
    set32(c.r[6], c.r[29].w[0] + 56u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00136534u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 7u, depth + 1u); else { c.pc = 0x001A80E0u; return; } if (c.pc != 0x00136534u) [[unlikely]] return; }
L_00136534:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00136538:
    st32((c.r[16].w[0] + 12u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 16u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00136548u); set32(c.r[4], ld32((c.r[29].w[0] + 60u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00136548u) [[unlikely]] return; }
L_00136548:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00136560:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001365FC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 19856u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001365AC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001365AC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001365ACu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001365ACu) [[unlikely]] return; }
L_001365AC:
    st32((c.r[17].w[0] + 12u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001365D4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001365D4; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001365D4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001365D4u) [[unlikely]] return; }
L_001365D4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001365E4u); st32((c.r[17].w[0] + 16u), 0u);  if (depth < kMaxDepth) unit_0010(c, 31u, depth + 1u); else { c.pc = 0x00140700u; return; } if (c.pc != 0x001365E4u) [[unlikely]] return; }
L_001365E4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00136600; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001365FCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001365FCu) [[unlikely]] return; }
L_001365FC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00136600:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00136620:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00136668; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 17536u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00136650u); st32((c.r[17].w[0] + 176u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 264u, depth + 1u); else { c.pc = 0x0014ADA0u; return; } if (c.pc != 0x00136650u) [[unlikely]] return; }
L_00136650:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0013666C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00136668u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00136668u) [[unlikely]] return; }
L_00136668:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0013666C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00136680:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00136790; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001366A8u); set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  if (depth < kMaxDepth) unit_0029(c, 351u, depth + 1u); else { c.pc = 0x001A7FE0u; return; } if (c.pc != 0x001366A8u) [[unlikely]] return; }
L_001366A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001367A0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001366BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x001366BCu) [[unlikely]] return; }
L_001366BC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001366C8u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001366C8u) [[unlikely]] return; }
L_001366C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001366E0; } }
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[5].d[0] = ld64((c.r[3].w[0] + 16u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001366E0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x001366E0u) [[unlikely]] return; }
L_001366E0:
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43E60000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C70000u);
    c.f[13] = c.r[2].w[0];
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    c.r[2].d[0] = 0ull | 65535ull;
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    c.f[0] = c.r[2].w[0];
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 17;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00136724u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00136724u) [[unlikely]] return; }
L_00136724:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], 0u + 255u);
    set32(c.r[3], 0u + 12289u);
    st32((c.r[4].w[0] + 48u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 52u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013674Cu); st64((c.r[2].w[0] + 248u), c.r[3].d[0]);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x0013674Cu) [[unlikely]] return; }
L_0013674C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00136760u); st32((c.r[29].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00136760u) [[unlikely]] return; }
L_00136760:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00136768u);  if (depth < kMaxDepth) unit_002A(c, 64u, depth + 1u); else { c.pc = 0x001A8F40u; return; } if (c.pc != 0x00136768u) [[unlikely]] return; }
L_00136768:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00136770u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_002B(c, 465u, depth + 1u); else { c.pc = 0x001AF560u; return; } if (c.pc != 0x00136770u) [[unlikely]] return; }
L_00136770:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00136778u);  if (depth < kMaxDepth) unit_0051(c, 4u, depth + 1u); else { c.pc = 0x00244030u; return; } if (c.pc != 0x00136778u) [[unlikely]] return; }
L_00136778:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00136780u);  if (depth < kMaxDepth) unit_004F(c, 117u, depth + 1u); else { c.pc = 0x0023DCD0u; return; } if (c.pc != 0x00136780u) [[unlikely]] return; }
L_00136780:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00136788u); set32(c.r[4], ld32((c.r[29].w[0] + 60u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00136788u) [[unlikely]] return; }
L_00136788:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_001367A4; } }
L_00136790:
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001367A0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001367A0u) [[unlikely]] return; }
L_001367A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001367A4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001367C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001367D8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_002A(c, 135u, depth + 1u); else { c.pc = 0x001A9560u; return; } if (c.pc != 0x001367D8u) [[unlikely]] return; }
L_001367D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001368A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001367E8u);  if (depth < kMaxDepth) unit_004F(c, 127u, depth + 1u); else { c.pc = 0x0023DDB0u; return; } if (c.pc != 0x001367E8u) [[unlikely]] return; }
L_001367E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001368A8; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = ld8((c.r[17].w[0] + 20u));  if (t) { goto L_0013680C; } }
    set32(c.r[25], ld32((c.r[17].w[0] + 8u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013680Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013680Cu) [[unlikely]] return; }
L_0013680C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[4], 0u + 16u);  if (t) { goto L_0013688C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 8407u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_00136848; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013682Cu); set32(c.r[4], 0u + 60u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0013682Cu) [[unlikely]] return; }
L_0013682C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001368A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00136840u);  if (depth < kMaxDepth) unit_00A6(c, 311u, depth + 1u); else { c.pc = 0x0039AF70u; return; } if (c.pc != 0x00136840u) [[unlikely]] return; }
L_00136840:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_001368AC; } }
L_00136848:
    set32(c.r[2], 0u + 13u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 8384u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 16u);  if (t) { goto L_00136868; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00136860u);  if (depth < kMaxDepth) unit_00AA(c, 100u, depth + 1u); else { c.pc = 0x003A92B0u; return; } if (c.pc != 0x00136860u) [[unlikely]] return; }
L_00136860:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001368A8; } }
L_00136868:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00136870u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00136870u) [[unlikely]] return; }
L_00136870:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001368A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00136884u);  if (depth < kMaxDepth) unit_000E(c, 4u, depth + 1u); else { c.pc = 0x00138030u; return; } if (c.pc != 0x00136884u) [[unlikely]] return; }
L_00136884:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001368A8; } }
L_0013688C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00136894u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00136894u) [[unlikely]] return; }
L_00136894:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001368A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001368A8u);  if (depth < kMaxDepth) unit_000E(c, 4u, depth + 1u); else { c.pc = 0x00138030u; return; } if (c.pc != 0x001368A8u) [[unlikely]] return; }
L_001368A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001368AC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001368C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001368E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 298u, depth + 1u); else { c.pc = 0x0012E440u; return; } if (c.pc != 0x001368E0u) [[unlikely]] return; }
L_001368E0:
    set32(c.r[4], c.r[17].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001368ECu); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x001368ECu) [[unlikely]] return; }
L_001368EC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[17].w[0] + 32u);
    set32(c.r[5], c.r[5].w[0] - 17608u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00136900u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 40u, depth + 1u); else { c.pc = 0x00148710u; return; } if (c.pc != 0x00136900u) [[unlikely]] return; }
L_00136900:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 19984u);
    set32(c.r[2], c.r[2].w[0] - 19896u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 19880u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 32u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 64u), c.r[16].w[0]);
    st32((c.r[17].w[0] + 68u), 0u);
    st32((c.r[17].w[0] + 72u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00136950:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001369F4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 19984u);
    set32(c.r[3], c.r[3].w[0] - 19896u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 19880u);
    st32((c.r[17].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001369B4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001369B4; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001369B4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001369B4u) [[unlikely]] return; }
L_001369B4:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001369C4u); st32((c.r[17].w[0] + 68u), 0u);  if (depth < kMaxDepth) unit_0012(c, 42u, depth + 1u); else { c.pc = 0x00148750u; return; } if (c.pc != 0x001369C4u) [[unlikely]] return; }
L_001369C4:
    set32(c.r[4], c.r[17].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001369D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x001369D0u) [[unlikely]] return; }
L_001369D0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001369DCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 300u, depth + 1u); else { c.pc = 0x0012E490u; return; } if (c.pc != 0x001369DCu) [[unlikely]] return; }
L_001369DC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001369F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001369F4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001369F4u) [[unlikely]] return; }
L_001369F4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001369F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00136A10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00136AE4; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00136A3Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00136A3Cu) [[unlikely]] return; }
L_00136A3C:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00136AE4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 60u)));
    c.r[3].d[0] = c.r[3].sd[0] < 255ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_00136AE4; } }
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[16], ld32((c.r[3].w[0] + 440u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00136AE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00136A78u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00136A78u) [[unlikely]] return; }
L_00136A78:
    ld128((c.r[2].w[0]) & ~15u, c.r[5]);
    set32(c.r[3], 0u + 255u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[4].d[0] = 0ull + 0ull;
    st128((c.r[16].w[0] + 48u) & ~15u, c.r[5]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 60u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 17592u));
    st32((c.r[16].w[0] + 16u), c.f[0]);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00136AA8u); st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00136AA8u) [[unlikely]] return; }
L_00136AA8:
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    c.f[14] = 0u;
    st32((c.r[16].w[0] + 356u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43BE0000u);
    c.f[13] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00136AD4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00136AD4u) [[unlikely]] return; }
L_00136AD4:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00136AE4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00136AE4u) [[unlikely]] return; }
L_00136AE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00136B00:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[4], c.r[29].w[0] + 176u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00136B2Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0017(c, 125u, depth + 1u); else { c.pc = 0x0015D850u; return; } if (c.pc != 0x00136B2Cu) [[unlikely]] return; }
L_00136B2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00136B34u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0012(c, 130u, depth + 1u); else { c.pc = 0x00149000u; return; } if (c.pc != 0x00136B34u) [[unlikely]] return; }
L_00136B34:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00136B44u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 138u, depth + 1u); else { c.pc = 0x00149120u; return; } if (c.pc != 0x00136B44u) [[unlikely]] return; }
L_00136B44:
    set32(c.r[17], c.r[29].w[0] + 132u);
    set32(c.r[16], c.r[29].w[0] + 128u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[5], 0u + 13000u);
    c.r[7].d[0] = 0ull + 0ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] >> 8);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00136B70u); set32(c.r[6], c.r[2].w[0] + 13000u);  if (depth < kMaxDepth) unit_0012(c, 153u, depth + 1u); else { c.pc = 0x001492C0u; return; } if (c.pc != 0x00136B70u) [[unlikely]] return; }
L_00136B70:
    set32(c.r[8], c.r[29].w[0] + 100u);
    c.r[2].d[0] = 0ull & 3ull;
    c.r[7].d[0] = ld8((c.r[8].w[0]));
    set32(c.r[4], 0u - 5u);
    set32(c.r[3], c.r[2].w[0] << 3);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    set32(c.r[2], 0u - 25u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[7].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[8].w[0]));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[1].w[0] + 20144u)));
    set32(c.r[4], ld32((c.r[20].w[0] + 68u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[18], ld32((c.r[1].w[0] + 1420u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1424u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1416u)));
    c.budget -= 29;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[3].w[0] << (c.r[2].w[0] & 31u));  if (t) { goto L_00136BFC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00136BFC; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00136BFCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00136BFCu) [[unlikely]] return; }
L_00136BFC:
    set32(c.r[4], 0u + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00136C08u); st32((c.r[20].w[0] + 68u), 0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00136C08u) [[unlikely]] return; }
L_00136C08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00136C1C; } }
    c.r[5].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00136C1Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x00136C1Cu) [[unlikely]] return; }
L_00136C1C:
    st32((c.r[20].w[0] + 68u), c.r[2].w[0]);
    c.f[14] = 0u;
    set32(c.r[4], ld32((c.r[20].w[0] + 68u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[18].w[0]) >> 1));
    c.f[1] = c.r[2].w[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[19].w[0]) >> 1));
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[1]);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00136C50u); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00136C50u) [[unlikely]] return; }
L_00136C50:
    c.f[0] = c.r[19].w[0];
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00136C6C; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00136C88; } }
L_00136C6C:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_00136C88:
    fpu_div(c, 2u, c.f[1], c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[20].w[0] + 68u)));
    c.f[0] = c.r[18].w[0];
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] < 0; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00136CB4; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00136CD0; } }
L_00136CB4:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_00136CD0:
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[5].w[0] + 16u), c.f[0]);
    st32((c.r[5].w[0] + 20u), c.f[2]);
    st32((c.r[5].w[0] + 24u), 0u);
    set32(c.r[2], ld32((c.r[20].w[0] + 68u)));
    st32((c.r[2].w[0] + 60u), 0u);
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00136D00u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00136D00u) [[unlikely]] return; }
L_00136D00:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00136D0Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0012(c, 131u, depth + 1u); else { c.pc = 0x00149030u; return; } if (c.pc != 0x00136D0Cu) [[unlikely]] return; }
L_00136D0C:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00136D18u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x00136D18u) [[unlikely]] return; }
L_00136D18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_00136D40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00136D54u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 318u, depth + 1u); else { c.pc = 0x0012E5E0u; return; } if (c.pc != 0x00136D54u) [[unlikely]] return; }
L_00136D54:
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    st32((c.r[3].w[0] + 60u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00136D70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00136D84u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 319u, depth + 1u); else { c.pc = 0x0012E600u; return; } if (c.pc != 0x00136D84u) [[unlikely]] return; }
L_00136D84:
    set32(c.r[3], 0u + 180u);
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00136DA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00136DB4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 320u, depth + 1u); else { c.pc = 0x0012E610u; return; } if (c.pc != 0x00136DB4u) [[unlikely]] return; }
L_00136DB4:
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[4], 0u + 255u);
    st32((c.r[3].w[0] + 60u), c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00136DD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00136DF4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00136DF4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00136DF4u) [[unlikely]] return; }
L_00136DF4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00136E00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 255u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 68u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 60u)));
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_00136E34; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00136E2Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00136E2Cu) [[unlikely]] return; }
L_00136E2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00136E50; } }
L_00136E34:
    set32(c.r[6], c.r[6].w[0] + 10u);
    c.r[1].d[0] = c.r[6].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00136E48; } }
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_00136E48:
    st32((c.r[5].w[0] + 60u), c.r[6].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_00136E50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00136E60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[1].w[0] - 1536u)));
    c.r[5].d[0] = ld16((c.r[6].w[0] + 4u));
    c.r[3].d[0] = c.r[5].d[0] & 2048ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00136EA0; } }
    set32(c.r[2], 0u + 6u);
    st32((c.r[4].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00136E98u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00136E98u) [[unlikely]] return; }
L_00136E98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00136F00; } }
L_00136EA0:
    c.r[3].d[0] = ld16((c.r[6].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00136EDC; } }
    c.r[3].d[0] = c.r[5].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00136EDC; } }
    set32(c.r[2], 0u + 200u);
    st32((c.r[4].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00136ED4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00136ED4u) [[unlikely]] return; }
L_00136ED4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00136EFC; } }
L_00136EDC:
    set32(c.r[3], ld32((c.r[4].w[0] + 72u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 72u), c.r[3].w[0]);  if (t) { goto L_00136EFC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00136EFCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00136EFCu) [[unlikely]] return; }
L_00136EFC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00136F00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00136F10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 68u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 60u)));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_00136F4C; } }
    c.r[3].d[0] = ld8((c.r[1].w[0] + 20008u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00136F4C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00136F44u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00136F44u) [[unlikely]] return; }
L_00136F44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00136F64; } }
L_00136F4C:
    set32(c.r[6], c.r[6].w[0] - 10u);
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] >= 0;  if (t) { goto L_00136F5C; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00136F5C:
    st32((c.r[5].w[0] + 60u), c.r[6].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_00136F64:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00136F70:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00136A10u | kUnwind; return; } goto L_00136A10; }
L_00136F80:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00136950u | kUnwind; return; } goto L_00136950; }
L_00136F90:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00136B00u | kUnwind; return; } goto L_00136B00; }
L_00136FA0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00136950u | kUnwind; return; } goto L_00136950; }
L_00136FB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 5u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00136FC8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 29u, depth + 1u); else { c.pc = 0x00140690u; return; } if (c.pc != 0x00136FC8u) [[unlikely]] return; }
L_00136FC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], 0u + 600u);
    set32(c.r[2], c.r[2].w[0] - 19760u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00136FF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00137038; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 19760u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00137020u); st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 31u, depth + 1u); else { c.pc = 0x00140700u; return; } if (c.pc != 0x00137020u) [[unlikely]] return; }
L_00137020:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0013703C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00137038u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00137038u) [[unlikely]] return; }
L_00137038:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0013703C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00137050:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[1].w[0] - 1536u)));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 4u));
    c.r[3].d[0] = c.r[3].d[0] & 2048ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00137078; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00137078u);  if (depth < kMaxDepth) unit_000D(c, 405u, depth + 1u); else { c.pc = 0x00137110u; return; } if (c.pc != 0x00137078u) [[unlikely]] return; }
L_00137078:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00137080:
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 1;
    c.pc = 0x00137084u; [[clang::musttail]] return dispatch(c, 0u, depth);
L_00137090:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_001370B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001370B0u);  if (depth < kMaxDepth) unit_000D(c, 405u, depth + 1u); else { c.pc = 0x00137110u; return; } if (c.pc != 0x001370B0u) [[unlikely]] return; }
L_001370B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00137108; } }
L_001370B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 7976u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[1].w[0] - 7976u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].sd[0] < 60ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_00137104; } }
    st32((c.r[1].w[0] - 7976u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 4192u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st32((c.r[1].w[0] - 4192u), c.r[3].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < 26ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00137104; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st32((c.r[1].w[0] - 4192u), 0u);
    c.budget -= 2;
L_00137104:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00137108:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00137110:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00137134u); st32((c.r[29].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00137134u) [[unlikely]] return; }
L_00137134:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013713Cu); set32(c.r[4], 0u + 56u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0013713Cu) [[unlikely]] return; }
L_0013713C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0013714C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013714Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000D(c, 411u, depth + 1u); else { c.pc = 0x00137180u; return; } if (c.pc != 0x0013714Cu) [[unlikely]] return; }
L_0013714C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00137168; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00137168u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00137168u) [[unlikely]] return; }
L_00137168:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00137170u); set32(c.r[4], ld32((c.r[29].w[0] + 44u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00137170u) [[unlikely]] return; }
L_00137170:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00137180:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001371A8u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0010(c, 29u, depth + 1u); else { c.pc = 0x00140690u; return; } if (c.pc != 0x001371A8u) [[unlikely]] return; }
L_001371A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] - 19712u);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], 0u + 128u);
    st32((c.r[18].w[0] + 24u), 0u);
    st32((c.r[18].w[0] + 28u), 0u);
    st8((c.r[18].w[0] + 32u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[18].w[0] + 33u), static_cast<std::uint8_t>(0u));
    st32((c.r[18].w[0] + 36u), 0u);
    st32((c.r[18].w[0] + 40u), 0u);
    st32((c.r[18].w[0] + 44u), c.r[16].w[0]);
    st32((c.r[18].w[0] + 48u), 0u);
    st32((c.r[18].w[0] + 12u), 0u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001371ECu); st32((c.r[18].w[0] + 16u), 0u);  if (depth < kMaxDepth) unit_002A(c, 47u, depth + 1u); else { c.pc = 0x001A8E00u; return; } if (c.pc != 0x001371ECu) [[unlikely]] return; }
L_001371EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001371F4u);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x001371F4u) [[unlikely]] return; }
L_001371F4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00137208u); st32((c.r[29].w[0] + 108u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00137208u) [[unlikely]] return; }
L_00137208:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00137210u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_002B(c, 465u, depth + 1u); else { c.pc = 0x001AF560u; return; } if (c.pc != 0x00137210u) [[unlikely]] return; }
L_00137210:
    set32(c.r[2], 0u + 10752u);
    st32((c.r[29].w[0] + 88u), 0u);
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00137224u); st32((c.r[29].w[0] + 92u), 0u);  if (depth < kMaxDepth) unit_0011(c, 139u, depth + 1u); else { c.pc = 0x00146880u; return; } if (c.pc != 0x00137224u) [[unlikely]] return; }
L_00137224:
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_0013730C; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00137238:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00137240u); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00137240u) [[unlikely]] return; }
L_00137240:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[19], c.r[17].w[0] << 2);  if (t) { goto L_0013725C; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00137258u); set32(c.r[6], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_002C(c, 41u, depth + 1u); else { c.pc = 0x001B0720u; return; } if (c.pc != 0x00137258u) [[unlikely]] return; }
L_00137258:
    set32(c.r[19], c.r[17].w[0] << 2);
    c.budget -= 1;
L_0013725C:
    set32(c.r[3], c.r[18].w[0] + c.r[19].w[0]);
    st32((c.r[3].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00137278u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00137278u) [[unlikely]] return; }
L_00137278:
    set32(c.r[2], c.r[18].w[0] + c.r[19].w[0]);
    c.r[5].d[0] = ld8((c.r[18].w[0] + 32u));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[3], 0u + 128u);
    st32((c.r[4].w[0] + 32u), c.r[5].w[0]);
    c.r[2].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    st32((c.r[4].w[0] + 36u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 40u), c.r[5].w[0]);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 44u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00137238u | kUnwind; return; } goto L_00137238; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001372DC; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[5], 0u + 9u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001372C0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 66u, depth + 1u); else { c.pc = 0x001B0C20u; return; } if (c.pc != 0x001372C0u) [[unlikely]] return; }
L_001372C0:
    set32(c.r[4], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[5], 0u + 9u);
    set32(c.r[6], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001372D4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 66u, depth + 1u); else { c.pc = 0x001B0C20u; return; } if (c.pc != 0x001372D4u) [[unlikely]] return; }
L_001372D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00137480; } }
L_001372DC:
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[5], 0u + 9u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001372F0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 66u, depth + 1u); else { c.pc = 0x001B0C20u; return; } if (c.pc != 0x001372F0u) [[unlikely]] return; }
L_001372F0:
    set32(c.r[4], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[5], 0u + 9u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00137304u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 66u, depth + 1u); else { c.pc = 0x001B0C20u; return; } if (c.pc != 0x00137304u) [[unlikely]] return; }
L_00137304:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013747C; } }
L_0013730C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_001373F0; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0013731C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00137324u); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00137324u) [[unlikely]] return; }
L_00137324:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[19], c.r[17].w[0] << 2);  if (t) { goto L_00137340; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013733Cu); set32(c.r[6], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_002C(c, 41u, depth + 1u); else { c.pc = 0x001B0720u; return; } if (c.pc != 0x0013733Cu) [[unlikely]] return; }
L_0013733C:
    set32(c.r[19], c.r[17].w[0] << 2);
    c.budget -= 1;
L_00137340:
    set32(c.r[3], c.r[18].w[0] + c.r[19].w[0]);
    st32((c.r[3].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013735Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013735Cu) [[unlikely]] return; }
L_0013735C:
    set32(c.r[2], c.r[18].w[0] + c.r[19].w[0]);
    c.r[5].d[0] = ld8((c.r[18].w[0] + 32u));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[3], 0u + 128u);
    st32((c.r[4].w[0] + 32u), c.r[5].w[0]);
    c.r[2].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    st32((c.r[4].w[0] + 36u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 40u), c.r[5].w[0]);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 44u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013731Cu | kUnwind; return; } goto L_0013731C; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001373C0; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[5], 0u + 9u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001373A4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 66u, depth + 1u); else { c.pc = 0x001B0C20u; return; } if (c.pc != 0x001373A4u) [[unlikely]] return; }
L_001373A4:
    set32(c.r[4], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[5], 0u + 9u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001373B8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 66u, depth + 1u); else { c.pc = 0x001B0C20u; return; } if (c.pc != 0x001373B8u) [[unlikely]] return; }
L_001373B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013747C; } }
L_001373C0:
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[5], 0u + 9u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001373D4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 66u, depth + 1u); else { c.pc = 0x001B0C20u; return; } if (c.pc != 0x001373D4u) [[unlikely]] return; }
L_001373D4:
    set32(c.r[4], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[5], 0u + 9u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001373E8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 66u, depth + 1u); else { c.pc = 0x001B0C20u; return; } if (c.pc != 0x001373E8u) [[unlikely]] return; }
L_001373E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013747C; } }
L_001373F0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 48u);  if (t) { goto L_0013747C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00137400u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00137400u) [[unlikely]] return; }
L_00137400:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00137414; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00137414u); set32(c.r[6], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_002C(c, 41u, depth + 1u); else { c.pc = 0x001B0720u; return; } if (c.pc != 0x00137414u) [[unlikely]] return; }
L_00137414:
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013742Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013742Cu) [[unlikely]] return; }
L_0013742C:
    c.r[4].d[0] = ld8((c.r[18].w[0] + 32u));
    set32(c.r[2], 0u + 128u);
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    st32((c.r[3].w[0] + 32u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 36u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 40u), c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[3].w[0] + 44u), c.r[2].w[0]);  if (t) { goto L_00137468; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[5], 0u + 9u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00137460u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 66u, depth + 1u); else { c.pc = 0x001B0C20u; return; } if (c.pc != 0x00137460u) [[unlikely]] return; }
L_00137460:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013747C; } }
L_00137468:
    set32(c.r[4], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[5], 0u + 9u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013747Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 66u, depth + 1u); else { c.pc = 0x001B0C20u; return; } if (c.pc != 0x0013747Cu) [[unlikely]] return; }
L_0013747C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00137480:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00137488u);  if (depth < kMaxDepth) unit_0016(c, 293u, depth + 1u); else { c.pc = 0x0015A8F0u; return; } if (c.pc != 0x00137488u) [[unlikely]] return; }
L_00137488:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00137490u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0016(c, 293u, depth + 1u); else { c.pc = 0x0015A8F0u; return; } if (c.pc != 0x00137490u) [[unlikely]] return; }
L_00137490:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00137498u); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00137498u) [[unlikely]] return; }
L_00137498:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[3], 0u + 15360u);  if (t) { goto L_001374D0; } }
    set32(c.r[2], 0u + 16383u);
    st16((c.r[29].w[0] + 104u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001374B4u); st16((c.r[29].w[0] + 106u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x001374B4u) [[unlikely]] return; }
L_001374B4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 17584u);
    set32(c.r[6], c.r[29].w[0] + 104u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001374CCu); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 7u, depth + 1u); else { c.pc = 0x001A80E0u; return; } if (c.pc != 0x001374CCu) [[unlikely]] return; }
L_001374CC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001374D0:
    st32((c.r[18].w[0] + 48u), c.r[16].w[0]);
    st32((c.r[18].w[0] + 52u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001374E0u); set32(c.r[4], ld32((c.r[29].w[0] + 108u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x001374E0u) [[unlikely]] return; }
L_001374E0:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00137500:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001375E4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 19712u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00137554; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00137554; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00137554u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00137554u) [[unlikely]] return; }
L_00137554:
    st32((c.r[17].w[0] + 52u), 0u);
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0013755C:
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[18], c.r[2].w[0] + 12u);  if (t) { goto L_00137588; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00137588; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00137588u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00137588u) [[unlikely]] return; }
L_00137588:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[18].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013755Cu | kUnwind; return; } goto L_0013755C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001375BC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001375BC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001375BCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001375BCu) [[unlikely]] return; }
L_001375BC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001375CCu); st32((c.r[17].w[0] + 48u), 0u);  if (depth < kMaxDepth) unit_0010(c, 31u, depth + 1u); else { c.pc = 0x00140700u; return; } if (c.pc != 0x001375CCu) [[unlikely]] return; }
L_001375CC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001375E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001375E4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001375E4u) [[unlikely]] return; }
L_001375E4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001375E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00137610:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013762Cu); set32(c.r[4], ld32((c.r[4].w[0] + 48u)));  if (depth < kMaxDepth) unit_0029(c, 351u, depth + 1u); else { c.pc = 0x001A7FE0u; return; } if (c.pc != 0x0013762Cu) [[unlikely]] return; }
L_0013762C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001376A8; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 160u);  if (t) { goto L_001376A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00137648u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00137648u) [[unlikely]] return; }
L_00137648:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0013765C; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013765Cu); set32(c.r[6], 0u + 12u);  if (depth < kMaxDepth) unit_002A(c, 287u, depth + 1u); else { c.pc = 0x001AB200u; return; } if (c.pc != 0x0013765Cu) [[unlikely]] return; }
L_0013765C:
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013766Cu); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x0013766Cu) [[unlikely]] return; }
L_0013766C:
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013767Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x0013767Cu) [[unlikely]] return; }
L_0013767C:
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013768Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x0013768Cu) [[unlikely]] return; }
L_0013768C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 52u)));
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[3].w[0] + 104u), c.f[0]);
    c.budget -= 7;
L_001376A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001376C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001377A8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 17568u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00134000u < 16384u) { entry = entries_000D[(t - 0x00134000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001376F8:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013770Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013770Cu) [[unlikely]] return; }
L_0013770C:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00137728; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 32u));
    c.r[1].d[0] = c.r[3].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001377A8; } }
L_00137728:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 32u));
    set32(c.r[2], 0u + 128u);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[3].w[0] + 32u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 36u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 40u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013774Cu); set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  if (depth < kMaxDepth) unit_002C(c, 58u, depth + 1u); else { c.pc = 0x001B0B50u; return; } if (c.pc != 0x0013774Cu) [[unlikely]] return; }
L_0013774C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_001377AC; } }
L_00137754:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00137768u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00137768u) [[unlikely]] return; }
L_00137768:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00137784; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 32u));
    c.r[1].d[0] = c.r[3].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001377A8; } }
L_00137784:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 32u));
    set32(c.r[2], 0u + 128u);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    st32((c.r[3].w[0] + 32u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 36u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 40u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001377A8u); set32(c.r[4], ld32((c.r[16].w[0] + 16u)));  if (depth < kMaxDepth) unit_002C(c, 58u, depth + 1u); else { c.pc = 0x001B0B50u; return; } if (c.pc != 0x001377A8u) [[unlikely]] return; }
L_001377A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001377AC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001377C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001377E8u); set32(c.r[4], ld32((c.r[4].w[0] + 48u)));  if (depth < kMaxDepth) unit_0029(c, 351u, depth + 1u); else { c.pc = 0x001A7FE0u; return; } if (c.pc != 0x001377E8u) [[unlikely]] return; }
L_001377E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00137CE0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00137804; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00137CE4; } }
L_00137804:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00137868; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013782C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013782Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013782Cu) [[unlikely]] return; }
L_0013782C:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00137848; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00137848u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00137848u) [[unlikely]] return; }
L_00137848:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[17].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_00137CE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00137860u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 513u, depth + 1u); else { c.pc = 0x00137EF0u; return; } if (c.pc != 0x00137860u) [[unlikely]] return; }
L_00137860:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00137CE0; } }
L_00137868:
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_00137990; } }
    st32((c.r[17].w[0] + 36u), 0u);
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0013791C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013789Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013789Cu) [[unlikely]] return; }
L_0013789C:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00137CE0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001378BCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001378BCu) [[unlikely]] return; }
L_001378BC:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00137CE0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_001378FC; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001378F0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001378F0u) [[unlikely]] return; }
L_001378F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00137984; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_001378FC:
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00137914u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00137914u) [[unlikely]] return; }
L_00137914:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00137984; } }
L_0013791C:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00137930u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00137930u) [[unlikely]] return; }
L_00137930:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00137CE0; } }
    set32(c.r[2], 0u + 4u);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00137958u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00137958u) [[unlikely]] return; }
L_00137958:
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013796Cu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013796Cu) [[unlikely]] return; }
L_0013796C:
    st32((c.r[17].w[0] + 28u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00137984u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00137984u) [[unlikely]] return; }
L_00137984:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00137CE0; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_00137990:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0013799C; } }
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0013799C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 1536u)));
    c.r[2].d[0] = ld16((c.r[2].w[0] + 4u));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00137A08; } }
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00137A08; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00137A04; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00137A00; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.r[1].d[0] = c.r[2].sd[0] < 44ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00137A00; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26472u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00137A00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00137A00u); set32(c.r[4], 0u + 400u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x00137A00u) [[unlikely]] return; }
L_00137A00:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00137A04:
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 1;
L_00137A08:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00137A24; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 32u));
    c.r[2].d[0] = c.r[2].d[0] ^ 128ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_00137A24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00137A40; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.r[1].d[0] = c.r[2].sd[0] < 61ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00137A40; } }
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00137A40:
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00137A5C; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00137A78; } }
L_00137A5C:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00137A70u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00137A70u) [[unlikely]] return; }
L_00137A70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = ld8((c.r[17].w[0] + 32u));  if (t) { goto L_00137A90; } }
L_00137A78:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00137A8Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00137A8Cu) [[unlikely]] return; }
L_00137A8C:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 32u));
    c.budget -= 1;
L_00137A90:
    set32(c.r[3], 0u + 128u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00137B20; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00137AB4; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00137ABC; } }
L_00137AB4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00137B60; } }
L_00137ABC:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 32u));
    set32(c.r[3], c.r[3].w[0] - 4u);
    st8((c.r[17].w[0] + 32u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    c.r[1].d[0] = c.r[3].sd[0] < 44ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00137B60; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00137B60; } }
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], 0u + 4u);
    st8((c.r[17].w[0] + 33u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00137B60; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00137B0Cu); set32(c.r[5], 0u + 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00137B0Cu) [[unlikely]] return; }
L_00137B0C:
    set32(c.r[4], 0u + 127u);
    set32(c.r[3], 0u + 44u);
    st8((c.r[17].w[0] + 32u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 28u), c.r[3].w[0]);  if (t) { goto L_00137B60; } }
L_00137B20:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; c.r[1].d[0] = c.r[4].sd[0] < 5ll ? 1ull : 0ull;  if (t) { goto L_00137B48; } }
    st8((c.r[17].w[0] + 32u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 40u), 0u);
    c.r[5].d[0] = ld8((c.r[17].w[0] + 33u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00137B3Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 492u, depth + 1u); else { c.pc = 0x00137D00u; return; } if (c.pc != 0x00137B3Cu) [[unlikely]] return; }
L_00137B3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 33u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00137B60; } }
    c.r[1].d[0] = c.r[4].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 1;
L_00137B48:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00137B5C; } }
    set32(c.r[3], c.r[4].w[0] - 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 32u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00137B60; } }
L_00137B5C:
    st8((c.r[17].w[0] + 32u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00137B60:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00137BF8; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 52u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 137u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00137BF8; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    c.r[1].d[0] = c.r[3].sd[0] < 44ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00137BE0; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], 0u + 44u);
    st32((c.r[17].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00137BC4; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00137BBCu); set32(c.r[5], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00137BBCu) [[unlikely]] return; }
L_00137BBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 24u)));  if (t) { goto L_00137BFC; } }
L_00137BC4:
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00137BD8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00137BD8u) [[unlikely]] return; }
L_00137BD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00137BF8; } }
L_00137BE0:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 32u));
    set32(c.r[3], 0u + 128u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00137BF8; } }
    set32(c.r[3], c.r[4].w[0] - 4u);
    st8((c.r[17].w[0] + 32u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00137BF8:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 1;
L_00137BFC:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00137C6C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00137C6C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], 0u + 60u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00137C6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00137C2Cu);  if (depth < kMaxDepth) unit_0011(c, 139u, depth + 1u); else { c.pc = 0x00146880u; return; } if (c.pc != 0x00137C2Cu) [[unlikely]] return; }
L_00137C2C:
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00137C58; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[5], 0u + 9u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00137C50u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 66u, depth + 1u); else { c.pc = 0x001B0C20u; return; } if (c.pc != 0x00137C50u) [[unlikely]] return; }
L_00137C50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 24u)));  if (t) { goto L_00137C70; } }
L_00137C58:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[5], 0u + 9u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00137C6Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 66u, depth + 1u); else { c.pc = 0x001B0C20u; return; } if (c.pc != 0x00137C6Cu) [[unlikely]] return; }
L_00137C6C:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 1;
L_00137C70:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00137CE0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00137CE0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], 0u + 60u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00137CE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00137CA0u);  if (depth < kMaxDepth) unit_0011(c, 139u, depth + 1u); else { c.pc = 0x00146880u; return; } if (c.pc != 0x00137CA0u) [[unlikely]] return; }
L_00137CA0:
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00137CCC; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[5], 0u + 9u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00137CC4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 66u, depth + 1u); else { c.pc = 0x001B0C20u; return; } if (c.pc != 0x00137CC4u) [[unlikely]] return; }
L_00137CC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00137CE0; } }
L_00137CCC:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[5], 0u + 9u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00137CE0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 66u, depth + 1u); else { c.pc = 0x001B0C20u; return; } if (c.pc != 0x00137CE0u) [[unlikely]] return; }
L_00137CE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00137CE4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00137D00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 36u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00137EDC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 17536u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00134000u < 16384u) { entry = entries_000D[(t - 0x00134000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00137D3C:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00137D58u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00137D58u) [[unlikely]] return; }
L_00137D58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00137EE0; } }
L_00137D60:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00137D74u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00137D74u) [[unlikely]] return; }
L_00137D74:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00137D88u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00137D88u) [[unlikely]] return; }
L_00137D88:
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00137DA4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00137DA4u) [[unlikely]] return; }
L_00137DA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00137EDC; } }
L_00137DAC:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00137DC0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00137DC0u) [[unlikely]] return; }
L_00137DC0:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00137DD4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00137DD4u) [[unlikely]] return; }
L_00137DD4:
    set32(c.r[2], 0u + 3u);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00137DF0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00137DF0u) [[unlikely]] return; }
L_00137DF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00137EDC; } }
L_00137DF8:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00137E0Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00137E0Cu) [[unlikely]] return; }
L_00137E0C:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00137E20u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00137E20u) [[unlikely]] return; }
L_00137E20:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00137E34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 32u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00137EDC; } }
L_00137E34:
    set32(c.r[2], 0u + 4u);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00137E50u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00137E50u) [[unlikely]] return; }
L_00137E50:
    st32((c.r[16].w[0] + 28u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00137E68u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00137E68u) [[unlikely]] return; }
L_00137E68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), 0u);  if (t) { goto L_00137EDC; } }
L_00137E70:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_00137E84; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_00137E88; } }
L_00137E84:
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 1;
L_00137E88:
    set32(c.r[2], 0u + 10u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00137EA4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00137EA4u) [[unlikely]] return; }
L_00137EA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00137EDC; } }
L_00137EAC:
    set32(c.r[2], 0u + 10u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00137EC8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00137EC8u) [[unlikely]] return; }
L_00137EC8:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00137EDCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00137EDCu) [[unlikely]] return; }
L_00137EDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00137EE0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00137EF0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00137F20u); st32((c.r[29].w[0] + 76u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00137F20u) [[unlikely]] return; }
L_00137F20:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[16], ld32((c.r[18].w[0] + 44u)));  if (t) { goto L_00137F3C; } }
    set32(c.r[25], ld32((c.r[18].w[0] + 8u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00137F3Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00137F3Cu) [[unlikely]] return; }
L_00137F3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00137F44u); set32(c.r[4], 0u + 255u);  if (depth < kMaxDepth) unit_002C(c, 23u, depth + 1u); else { c.pc = 0x001B0420u; return; } if (c.pc != 0x00137F44u) [[unlikely]] return; }
L_00137F44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00137F4Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0016(c, 293u, depth + 1u); else { c.pc = 0x0015A8F0u; return; } if (c.pc != 0x00137F4Cu) [[unlikely]] return; }
L_00137F4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00137F54u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0016(c, 293u, depth + 1u); else { c.pc = 0x0015A8F0u; return; } if (c.pc != 0x00137F54u) [[unlikely]] return; }
L_00137F54:
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 24u);  if (t) { goto L_00137FAC; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_00137F74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 76u)));  if (t) { goto L_00137FC8; } }
L_00137F74:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 56u);  if (t) { goto L_00137F8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00137F84u);  if (depth < kMaxDepth) unit_003F(c, 250u, depth + 1u); else { c.pc = 0x001FE360u; return; } if (c.pc != 0x00137F84u) [[unlikely]] return; }
L_00137F84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00137FC4; } }
L_00137F8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00137F94u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00137F94u) [[unlikely]] return; }
L_00137F94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00137FC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00137FA4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_000D(c, 411u, depth + 1u); else { c.pc = 0x00137180u; return; } if (c.pc != 0x00137FA4u) [[unlikely]] return; }
L_00137FA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00137FC4; } }
L_00137FAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00137FB4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00137FB4u) [[unlikely]] return; }
L_00137FB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00137FC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00137FC4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000D(c, 306u, depth + 1u); else { c.pc = 0x001364B0u; return; } if (c.pc != 0x00137FC4u) [[unlikely]] return; }
L_00137FC4:
    set32(c.r[4], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 1;
L_00137FC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00137FD0u);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00137FD0u) [[unlikely]] return; }
L_00137FD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00137FF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138000u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00138000u) [[unlikely]] return; }
    [[clang::musttail]] return unit_000E(c, 1u, depth);
}

}
