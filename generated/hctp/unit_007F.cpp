#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_007F[4096] = {
    1, 0, 0, 0, 0, 2, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0,
    7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 11, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 16, 0,
    0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0,
    21, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0,
    0, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0,
    30, 0, 0, 31, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 39, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 44, 0,
    0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 51, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 57, 0, 0, 0, 0, 0,
    0, 58, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0,
    0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    65, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 70,
    0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72,
    0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0,
    0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0,
    0, 79, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85,
    0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0,
    88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 91, 0, 92, 0, 0, 0, 0, 0, 93, 0, 0, 94, 0, 0, 0, 0, 95, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 98, 0, 0, 0,
    0, 99, 0, 100, 0, 0, 0, 0, 0, 101, 0, 0, 102, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 106, 0, 0, 0, 0, 107,
    0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0,
    0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 116, 0, 0, 0, 117, 0, 118, 0, 119, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 121, 0, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 0,
    128, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0,
    0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0,
    138, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 144, 0, 0, 145, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 152, 0, 0, 0, 153, 0, 0, 154, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0,
    0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 161, 0, 0, 0, 162, 0, 0, 163, 0,
    0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 166, 0, 167, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 169,
    0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 0, 175,
    0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 181, 0, 0,
    0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0,
    0, 185, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 0, 193, 0, 194, 0, 195, 0,
    0, 196, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0,
    0, 0, 0, 201, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0,
    0, 0, 205, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0,
    0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0,
    0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 219, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 0,
    223, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    225, 0, 0, 0, 0, 0, 0, 226, 0, 0, 227, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 230, 0, 231, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 236, 0, 237, 0,
    0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 239, 0, 240, 0, 0, 0, 0, 0, 241, 0, 0, 242, 0, 243, 0, 0, 0, 244, 0, 0, 0, 0,
    245, 0, 246, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 248, 0, 0, 249, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 252, 0, 253, 0,
    0, 0, 254, 0, 0, 0, 0, 255, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 257, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 259, 0, 260, 0, 261, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    263, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 266, 0, 267, 0, 268, 0, 0, 0, 269, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 271, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 273, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0, 277,
    0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 279, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0,
    282, 0, 0, 0, 283, 0, 284, 0, 285, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 289,
    0, 0, 290, 0, 0, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 295, 0, 0, 0, 0, 296, 0,
    0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 300, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0,
    308, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 311, 0, 312, 0, 313, 0, 0, 314,
    0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    318, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 320, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 0, 323, 0, 0, 0, 324, 0,
    0, 0, 0, 0, 325, 0, 0, 0, 326, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 331, 0, 0,
    0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 335, 0, 0, 0, 0, 336, 0, 0,
    0, 0, 0, 337, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0,
    0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0,
    0, 0, 346, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0,
    0, 0, 0, 351, 0, 0, 352, 0, 0, 0, 353, 0, 0, 354, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 357,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0,
    361, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 366, 0, 0, 0, 367, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0,
    370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 372, 0, 0, 373, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0,
    0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 382, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 384, 0, 0, 0, 385,
    0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 391, 0, 0, 0, 0, 0, 392, 0, 0, 0, 393, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    399, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 401, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 403, 0, 404, 0, 0, 0, 0, 0, 405, 0,
    0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0,
    0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 412, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0,
    421, 0, 0, 0, 422, 0, 0, 0, 423, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0,
    426, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0,
    430, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 434, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 440, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 443, 0, 0, 0, 444, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    451, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 456, 0, 0,
    0, 0, 457, 0, 0, 0, 0, 0, 458, 0, 0, 0, 459, 0, 0, 0, 460, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 462, 0, 463, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 466, 0, 467, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0,
    0, 0, 471, 0, 472, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 475, 0, 476,
    0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 478, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 484, 0, 0, 0,
    0, 0, 485, 0, 0, 0, 0, 0, 486, 0, 0, 0, 487, 0, 0, 488, 0, 0, 489, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0,
    491, 0, 0, 0, 492, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 495, 0, 0, 0, 0, 0, 496, 0, 497, 0, 0, 498,
    0, 499, 0, 0, 0, 0, 0, 0, 500, 0, 0, 501, 0, 0, 0, 0, 502, 0, 0, 0, 503, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 505, 0, 0, 506, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0, 509, 0, 0, 0,
    0, 0, 0, 0, 0, 510, 0, 0, 0, 511, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 512, 0, 513, 0, 0, 0, 0, 0, 0,
    0, 514, 0, 515, 0, 0, 0, 0, 0, 0, 516, 0, 517, 0, 0, 0, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 519, 0, 520, 0, 0,
    0, 0, 0, 521, 0, 522, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 523, 0, 0, 0, 524, 0, 0, 0,
    525, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 529, 0, 0,
    0, 0, 0, 0, 530, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 533, 0, 0, 0, 0, 0, 534, 0, 0, 0,
    535, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_007F(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002FC000;
    case 2u: goto L_002FC014;
    case 3u: goto L_002FC018;
    case 4u: goto L_002FC038;
    case 5u: goto L_002FC054;
    case 6u: goto L_002FC06C;
    case 7u: goto L_002FC080;
    case 8u: goto L_002FC0F0;
    case 9u: goto L_002FC11C;
    case 10u: goto L_002FC154;
    case 11u: goto L_002FC184;
    case 12u: goto L_002FC198;
    case 13u: goto L_002FC2AC;
    case 14u: goto L_002FC2CC;
    case 15u: goto L_002FC2E8;
    case 16u: goto L_002FC2F8;
    case 17u: goto L_002FC310;
    case 18u: goto L_002FC33C;
    case 19u: goto L_002FC348;
    case 20u: goto L_002FC374;
    case 21u: goto L_002FC380;
    case 22u: goto L_002FC3A4;
    case 23u: goto L_002FC3F4;
    case 24u: goto L_002FC414;
    case 25u: goto L_002FC424;
    case 26u: goto L_002FC434;
    case 27u: goto L_002FC44C;
    case 28u: goto L_002FC464;
    case 29u: goto L_002FC4F4;
    case 30u: goto L_002FC500;
    case 31u: goto L_002FC50C;
    case 32u: goto L_002FC518;
    case 33u: goto L_002FC594;
    case 34u: goto L_002FC5A4;
    case 35u: goto L_002FC640;
    case 36u: goto L_002FC65C;
    case 37u: goto L_002FC678;
    case 38u: goto L_002FC6A4;
    case 39u: goto L_002FC704;
    case 40u: goto L_002FC718;
    case 41u: goto L_002FC734;
    case 42u: goto L_002FC758;
    case 43u: goto L_002FC768;
    case 44u: goto L_002FC778;
    case 45u: goto L_002FC79C;
    case 46u: goto L_002FC804;
    case 47u: goto L_002FC814;
    case 48u: goto L_002FC834;
    case 49u: goto L_002FC840;
    case 50u: goto L_002FC854;
    case 51u: goto L_002FC890;
    case 52u: goto L_002FC89C;
    case 53u: goto L_002FC8BC;
    case 54u: goto L_002FC8F8;
    case 55u: goto L_002FC93C;
    case 56u: goto L_002FC95C;
    case 57u: goto L_002FC968;
    case 58u: goto L_002FC984;
    case 59u: goto L_002FC9A4;
    case 60u: goto L_002FC9DC;
    case 61u: goto L_002FC9EC;
    case 62u: goto L_002FCA0C;
    case 63u: goto L_002FCA28;
    case 64u: goto L_002FCA44;
    case 65u: goto L_002FCA80;
    case 66u: goto L_002FCAA0;
    case 67u: goto L_002FCAB0;
    case 68u: goto L_002FCAC0;
    case 69u: goto L_002FCADC;
    case 70u: goto L_002FCAFC;
    case 71u: goto L_002FCB20;
    case 72u: goto L_002FCB7C;
    case 73u: goto L_002FCBA0;
    case 74u: goto L_002FCBD0;
    case 75u: goto L_002FCBEC;
    case 76u: goto L_002FCC10;
    case 77u: goto L_002FCC5C;
    case 78u: goto L_002FCC6C;
    case 79u: goto L_002FCC84;
    case 80u: goto L_002FCCA0;
    case 81u: goto L_002FCCD0;
    case 82u: goto L_002FCCE0;
    case 83u: goto L_002FCCF0;
    case 84u: goto L_002FCD4C;
    case 85u: goto L_002FCD7C;
    case 86u: goto L_002FCD88;
    case 87u: goto L_002FCDE0;
    case 88u: goto L_002FCE00;
    case 89u: goto L_002FCE40;
    case 90u: goto L_002FCE48;
    case 91u: goto L_002FCE84;
    case 92u: goto L_002FCE8C;
    case 93u: goto L_002FCEA4;
    case 94u: goto L_002FCEB0;
    case 95u: goto L_002FCEC4;
    case 96u: goto L_002FCECC;
    case 97u: goto L_002FCEE4;
    case 98u: goto L_002FCEF0;
    case 99u: goto L_002FCF04;
    case 100u: goto L_002FCF0C;
    case 101u: goto L_002FCF24;
    case 102u: goto L_002FCF30;
    case 103u: goto L_002FCF38;
    case 104u: goto L_002FCF4C;
    case 105u: goto L_002FCF60;
    case 106u: goto L_002FCF68;
    case 107u: goto L_002FCF7C;
    case 108u: goto L_002FCF88;
    case 109u: goto L_002FCF9C;
    case 110u: goto L_002FCFC0;
    case 111u: goto L_002FCFF0;
    case 112u: goto L_002FD008;
    case 113u: goto L_002FD020;
    case 114u: goto L_002FD048;
    case 115u: goto L_002FD05C;
    case 116u: goto L_002FD08C;
    case 117u: goto L_002FD09C;
    case 118u: goto L_002FD0A4;
    case 119u: goto L_002FD0AC;
    case 120u: goto L_002FD0B4;
    case 121u: goto L_002FD108;
    case 122u: goto L_002FD114;
    case 123u: goto L_002FD130;
    case 124u: goto L_002FD144;
    case 125u: goto L_002FD180;
    case 126u: goto L_002FD1D8;
    case 127u: goto L_002FD1E8;
    case 128u: goto L_002FD200;
    case 129u: goto L_002FD220;
    case 130u: goto L_002FD230;
    case 131u: goto L_002FD240;
    case 132u: goto L_002FD250;
    case 133u: goto L_002FD260;
    case 134u: goto L_002FD278;
    case 135u: goto L_002FD290;
    case 136u: goto L_002FD2B0;
    case 137u: goto L_002FD2E4;
    case 138u: goto L_002FD300;
    case 139u: goto L_002FD310;
    case 140u: goto L_002FD320;
    case 141u: goto L_002FD360;
    case 142u: goto L_002FD38C;
    case 143u: goto L_002FD3A4;
    case 144u: goto L_002FD3B0;
    case 145u: goto L_002FD3BC;
    case 146u: goto L_002FD3C8;
    case 147u: goto L_002FD3E0;
    case 148u: goto L_002FD42C;
    case 149u: goto L_002FD460;
    case 150u: goto L_002FD4B8;
    case 151u: goto L_002FD4E0;
    case 152u: goto L_002FD508;
    case 153u: goto L_002FD518;
    case 154u: goto L_002FD524;
    case 155u: goto L_002FD530;
    case 156u: goto L_002FD564;
    case 157u: goto L_002FD584;
    case 158u: goto L_002FD59C;
    case 159u: goto L_002FD5C0;
    case 160u: goto L_002FD5D4;
    case 161u: goto L_002FD5DC;
    case 162u: goto L_002FD5EC;
    case 163u: goto L_002FD5F8;
    case 164u: goto L_002FD60C;
    case 165u: goto L_002FD630;
    case 166u: goto L_002FD644;
    case 167u: goto L_002FD64C;
    case 168u: goto L_002FD66C;
    case 169u: goto L_002FD67C;
    case 170u: goto L_002FD688;
    case 171u: goto L_002FD6B0;
    case 172u: goto L_002FD6C0;
    case 173u: goto L_002FD6D4;
    case 174u: goto L_002FD6F0;
    case 175u: goto L_002FD6FC;
    case 176u: goto L_002FD708;
    case 177u: goto L_002FD720;
    case 178u: goto L_002FD734;
    case 179u: goto L_002FD740;
    case 180u: goto L_002FD760;
    case 181u: goto L_002FD774;
    case 182u: goto L_002FD798;
    case 183u: goto L_002FD7B0;
    case 184u: goto L_002FD7E8;
    case 185u: goto L_002FD804;
    case 186u: goto L_002FD824;
    case 187u: goto L_002FD838;
    case 188u: goto L_002FD860;
    case 189u: goto L_002FD874;
    case 190u: goto L_002FD8AC;
    case 191u: goto L_002FD8C0;
    case 192u: goto L_002FD8D0;
    case 193u: goto L_002FD8E8;
    case 194u: goto L_002FD8F0;
    case 195u: goto L_002FD8F8;
    case 196u: goto L_002FD904;
    case 197u: goto L_002FD918;
    case 198u: goto L_002FD93C;
    case 199u: goto L_002FD960;
    case 200u: goto L_002FD974;
    case 201u: goto L_002FD98C;
    case 202u: goto L_002FD9A0;
    case 203u: goto L_002FD9C4;
    case 204u: goto L_002FD9F4;
    case 205u: goto L_002FDA08;
    case 206u: goto L_002FDA14;
    case 207u: goto L_002FDA54;
    case 208u: goto L_002FDA64;
    case 209u: goto L_002FDA74;
    case 210u: goto L_002FDA90;
    case 211u: goto L_002FDAC8;
    case 212u: goto L_002FDAE0;
    case 213u: goto L_002FDB34;
    case 214u: goto L_002FDB50;
    case 215u: goto L_002FDB6C;
    case 216u: goto L_002FDBF0;
    case 217u: goto L_002FDC04;
    case 218u: goto L_002FDC1C;
    case 219u: goto L_002FDC30;
    case 220u: goto L_002FDC44;
    case 221u: goto L_002FDC5C;
    case 222u: goto L_002FDC70;
    case 223u: goto L_002FDC80;
    case 224u: goto L_002FDCA4;
    case 225u: goto L_002FDD00;
    case 226u: goto L_002FDD1C;
    case 227u: goto L_002FDD28;
    case 228u: goto L_002FDD30;
    case 229u: goto L_002FDD5C;
    case 230u: goto L_002FDD68;
    case 231u: goto L_002FDD70;
    case 232u: goto L_002FDDA4;
    case 233u: goto L_002FDDB4;
    case 234u: goto L_002FDDC0;
    case 235u: goto L_002FDDE4;
    case 236u: goto L_002FDDF0;
    case 237u: goto L_002FDDF8;
    case 238u: goto L_002FDE1C;
    case 239u: goto L_002FDE28;
    case 240u: goto L_002FDE30;
    case 241u: goto L_002FDE48;
    case 242u: goto L_002FDE54;
    case 243u: goto L_002FDE5C;
    case 244u: goto L_002FDE6C;
    case 245u: goto L_002FDE80;
    case 246u: goto L_002FDE88;
    case 247u: goto L_002FDE98;
    case 248u: goto L_002FDEB4;
    case 249u: goto L_002FDEC0;
    case 250u: goto L_002FDEC8;
    case 251u: goto L_002FDED8;
    case 252u: goto L_002FDEF0;
    case 253u: goto L_002FDEF8;
    case 254u: goto L_002FDF08;
    case 255u: goto L_002FDF1C;
    case 256u: goto L_002FDF28;
    case 257u: goto L_002FDF48;
    case 258u: goto L_002FDF50;
    case 259u: goto L_002FDF88;
    case 260u: goto L_002FDF90;
    case 261u: goto L_002FDF98;
    case 262u: goto L_002FDFB0;
    case 263u: goto L_002FE000;
    case 264u: goto L_002FE020;
    case 265u: goto L_002FE030;
    case 266u: goto L_002FE050;
    case 267u: goto L_002FE058;
    case 268u: goto L_002FE060;
    case 269u: goto L_002FE070;
    case 270u: goto L_002FE0AC;
    case 271u: goto L_002FE0C4;
    case 272u: goto L_002FE0CC;
    case 273u: goto L_002FE10C;
    case 274u: goto L_002FE114;
    case 275u: goto L_002FE160;
    case 276u: goto L_002FE170;
    case 277u: goto L_002FE17C;
    case 278u: goto L_002FE1A0;
    case 279u: goto L_002FE1A8;
    case 280u: goto L_002FE1C0;
    case 281u: goto L_002FE1F4;
    case 282u: goto L_002FE200;
    case 283u: goto L_002FE210;
    case 284u: goto L_002FE218;
    case 285u: goto L_002FE220;
    case 286u: goto L_002FE230;
    case 287u: goto L_002FE250;
    case 288u: goto L_002FE268;
    case 289u: goto L_002FE27C;
    case 290u: goto L_002FE288;
    case 291u: goto L_002FE2A0;
    case 292u: goto L_002FE2B0;
    case 293u: goto L_002FE2C4;
    case 294u: goto L_002FE2D4;
    case 295u: goto L_002FE2E4;
    case 296u: goto L_002FE2F8;
    case 297u: goto L_002FE308;
    case 298u: goto L_002FE330;
    case 299u: goto L_002FE35C;
    case 300u: goto L_002FE368;
    case 301u: goto L_002FE394;
    case 302u: goto L_002FE3B4;
    case 303u: goto L_002FE3D4;
    case 304u: goto L_002FE404;
    case 305u: goto L_002FE428;
    case 306u: goto L_002FE450;
    case 307u: goto L_002FE470;
    case 308u: goto L_002FE480;
    case 309u: goto L_002FE4A0;
    case 310u: goto L_002FE4C4;
    case 311u: goto L_002FE4E0;
    case 312u: goto L_002FE4E8;
    case 313u: goto L_002FE4F0;
    case 314u: goto L_002FE4FC;
    case 315u: goto L_002FE510;
    case 316u: goto L_002FE53C;
    case 317u: goto L_002FE548;
    case 318u: goto L_002FE580;
    case 319u: goto L_002FE5A0;
    case 320u: goto L_002FE5B4;
    case 321u: goto L_002FE5C4;
    case 322u: goto L_002FE5D4;
    case 323u: goto L_002FE5E8;
    case 324u: goto L_002FE5F8;
    case 325u: goto L_002FE610;
    case 326u: goto L_002FE620;
    case 327u: goto L_002FE634;
    case 328u: goto L_002FE670;
    case 329u: goto L_002FE6BC;
    case 330u: goto L_002FE6E4;
    case 331u: goto L_002FE6F4;
    case 332u: goto L_002FE70C;
    case 333u: goto L_002FE730;
    case 334u: goto L_002FE74C;
    case 335u: goto L_002FE760;
    case 336u: goto L_002FE774;
    case 337u: goto L_002FE78C;
    case 338u: goto L_002FE7A0;
    case 339u: goto L_002FE7BC;
    case 340u: goto L_002FE7D0;
    case 341u: goto L_002FE7F0;
    case 342u: goto L_002FE810;
    case 343u: goto L_002FE830;
    case 344u: goto L_002FE840;
    case 345u: goto L_002FE870;
    case 346u: goto L_002FE888;
    case 347u: goto L_002FE894;
    case 348u: goto L_002FE8BC;
    case 349u: goto L_002FE8D0;
    case 350u: goto L_002FE8EC;
    case 351u: goto L_002FE90C;
    case 352u: goto L_002FE918;
    case 353u: goto L_002FE928;
    case 354u: goto L_002FE934;
    case 355u: goto L_002FE948;
    case 356u: goto L_002FE964;
    case 357u: goto L_002FE97C;
    case 358u: goto L_002FE9B0;
    case 359u: goto L_002FE9D0;
    case 360u: goto L_002FE9E0;
    case 361u: goto L_002FEA00;
    case 362u: goto L_002FEA20;
    case 363u: goto L_002FEA30;
    case 364u: goto L_002FEA6C;
    case 365u: goto L_002FEA94;
    case 366u: goto L_002FEAA8;
    case 367u: goto L_002FEAB8;
    case 368u: goto L_002FEACC;
    case 369u: goto L_002FEAE4;
    case 370u: goto L_002FEB00;
    case 371u: goto L_002FEB30;
    case 372u: goto L_002FEC14;
    case 373u: goto L_002FEC20;
    case 374u: goto L_002FEC34;
    case 375u: goto L_002FEC60;
    case 376u: goto L_002FEC90;
    case 377u: goto L_002FECA8;
    case 378u: goto L_002FECC0;
    case 379u: goto L_002FECF4;
    case 380u: goto L_002FED10;
    case 381u: goto L_002FED30;
    case 382u: goto L_002FED40;
    case 383u: goto L_002FED54;
    case 384u: goto L_002FED6C;
    case 385u: goto L_002FED7C;
    case 386u: goto L_002FED90;
    case 387u: goto L_002FEDB0;
    case 388u: goto L_002FEDCC;
    case 389u: goto L_002FEDE0;
    case 390u: goto L_002FEE14;
    case 391u: goto L_002FEE88;
    case 392u: goto L_002FEEA0;
    case 393u: goto L_002FEEB0;
    case 394u: goto L_002FEEC4;
    case 395u: goto L_002FEEF0;
    case 396u: goto L_002FEF20;
    case 397u: goto L_002FEF38;
    case 398u: goto L_002FEF50;
    case 399u: goto L_002FEF80;
    case 400u: goto L_002FEF9C;
    case 401u: goto L_002FEFAC;
    case 402u: goto L_002FEFC0;
    case 403u: goto L_002FEFD8;
    case 404u: goto L_002FEFE0;
    case 405u: goto L_002FEFF8;
    case 406u: goto L_002FF010;
    case 407u: goto L_002FF02C;
    case 408u: goto L_002FF04C;
    case 409u: goto L_002FF06C;
    case 410u: goto L_002FF08C;
    case 411u: goto L_002FF0A8;
    case 412u: goto L_002FF0BC;
    case 413u: goto L_002FF0D0;
    case 414u: goto L_002FF118;
    case 415u: goto L_002FF134;
    case 416u: goto L_002FF170;
    case 417u: goto L_002FF1A0;
    case 418u: goto L_002FF1B0;
    case 419u: goto L_002FF1D0;
    case 420u: goto L_002FF1F0;
    case 421u: goto L_002FF200;
    case 422u: goto L_002FF210;
    case 423u: goto L_002FF220;
    case 424u: goto L_002FF234;
    case 425u: goto L_002FF26C;
    case 426u: goto L_002FF280;
    case 427u: goto L_002FF2A0;
    case 428u: goto L_002FF2D0;
    case 429u: goto L_002FF2E8;
    case 430u: goto L_002FF300;
    case 431u: goto L_002FF314;
    case 432u: goto L_002FF344;
    case 433u: goto L_002FF360;
    case 434u: goto L_002FF378;
    case 435u: goto L_002FF3A0;
    case 436u: goto L_002FF3C4;
    case 437u: goto L_002FF3DC;
    case 438u: goto L_002FF410;
    case 439u: goto L_002FF434;
    case 440u: goto L_002FF490;
    case 441u: goto L_002FF4A0;
    case 442u: goto L_002FF4BC;
    case 443u: goto L_002FF504;
    case 444u: goto L_002FF514;
    case 445u: goto L_002FF528;
    case 446u: goto L_002FF540;
    case 447u: goto L_002FF554;
    case 448u: goto L_002FF580;
    case 449u: goto L_002FF624;
    case 450u: goto L_002FF6B0;
    case 451u: goto L_002FF700;
    case 452u: goto L_002FF708;
    case 453u: goto L_002FF730;
    case 454u: goto L_002FF740;
    case 455u: goto L_002FF76C;
    case 456u: goto L_002FF774;
    case 457u: goto L_002FF788;
    case 458u: goto L_002FF7A0;
    case 459u: goto L_002FF7B0;
    case 460u: goto L_002FF7C0;
    case 461u: goto L_002FF7D0;
    case 462u: goto L_002FF7EC;
    case 463u: goto L_002FF7F4;
    case 464u: goto L_002FF81C;
    case 465u: goto L_002FF850;
    case 466u: goto L_002FF86C;
    case 467u: goto L_002FF874;
    case 468u: goto L_002FF89C;
    case 469u: goto L_002FF8D0;
    case 470u: goto L_002FF8F0;
    case 471u: goto L_002FF908;
    case 472u: goto L_002FF910;
    case 473u: goto L_002FF91C;
    case 474u: goto L_002FF95C;
    case 475u: goto L_002FF974;
    case 476u: goto L_002FF97C;
    case 477u: goto L_002FF9A0;
    case 478u: goto L_002FF9B0;
    case 479u: goto L_002FF9C4;
    case 480u: goto L_002FF9E0;
    case 481u: goto L_002FFA0C;
    case 482u: goto L_002FFA30;
    case 483u: goto L_002FFA58;
    case 484u: goto L_002FFA70;
    case 485u: goto L_002FFA88;
    case 486u: goto L_002FFAA0;
    case 487u: goto L_002FFAB0;
    case 488u: goto L_002FFABC;
    case 489u: goto L_002FFAC8;
    case 490u: goto L_002FFAE0;
    case 491u: goto L_002FFB00;
    case 492u: goto L_002FFB10;
    case 493u: goto L_002FFB24;
    case 494u: goto L_002FFB40;
    case 495u: goto L_002FFB50;
    case 496u: goto L_002FFB68;
    case 497u: goto L_002FFB70;
    case 498u: goto L_002FFB7C;
    case 499u: goto L_002FFB84;
    case 500u: goto L_002FFBA0;
    case 501u: goto L_002FFBAC;
    case 502u: goto L_002FFBC0;
    case 503u: goto L_002FFBD0;
    case 504u: goto L_002FFBE0;
    case 505u: goto L_002FFC0C;
    case 506u: goto L_002FFC18;
    case 507u: goto L_002FFC30;
    case 508u: goto L_002FFC58;
    case 509u: goto L_002FFC70;
    case 510u: goto L_002FFC94;
    case 511u: goto L_002FFCA4;
    case 512u: goto L_002FFD5C;
    case 513u: goto L_002FFD64;
    case 514u: goto L_002FFD84;
    case 515u: goto L_002FFD8C;
    case 516u: goto L_002FFDA8;
    case 517u: goto L_002FFDB0;
    case 518u: goto L_002FFDCC;
    case 519u: goto L_002FFDEC;
    case 520u: goto L_002FFDF4;
    case 521u: goto L_002FFE0C;
    case 522u: goto L_002FFE14;
    case 523u: goto L_002FFE60;
    case 524u: goto L_002FFE70;
    case 525u: goto L_002FFE80;
    case 526u: goto L_002FFEB0;
    case 527u: goto L_002FFEC4;
    case 528u: goto L_002FFEDC;
    case 529u: goto L_002FFEF4;
    case 530u: goto L_002FFF10;
    case 531u: goto L_002FFF24;
    case 532u: goto L_002FFF50;
    case 533u: goto L_002FFF58;
    case 534u: goto L_002FFF70;
    case 535u: goto L_002FFF80;
    default: bad_entry(c, 0x002FC000u); return;
    }
L_002FC000:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 2u, c.f[1], c.f[0]);
    c.budget -= 5;
L_002FC014:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.budget -= 1;
L_002FC018:
    set32(c.r[3], ld32((c.r[17].w[0] + 1884u)));
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 448u), c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC038u); set32(c.r[4], ld32((c.r[17].w[0] + 1884u)));  if (depth < kMaxDepth) unit_005B(c, 349u, depth + 1u); else { c.pc = 0x0026EE80u; return; } if (c.pc != 0x002FC038u) [[unlikely]] return; }
L_002FC038:
    set32(c.r[2], ld32((c.r[17].w[0] + 1884u)));
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC054u); set32(c.r[6], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FC054u) [[unlikely]] return; }
L_002FC054:
    set32(c.r[2], ld32((c.r[17].w[0] + 1884u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC06Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FC06Cu) [[unlikely]] return; }
L_002FC06C:
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[6], c.r[17].w[0] + 1536u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC080u); set32(c.r[5], c.r[2].w[0] + 224u);  if (depth < kMaxDepth) unit_0011(c, 77u, depth + 1u); else { c.pc = 0x00145760u; return; } if (c.pc != 0x002FC080u) [[unlikely]] return; }
L_002FC080:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC0A00000u);
    st32((c.r[29].w[0] + 112u), 0u);
    st32((c.r[29].w[0] + 116u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1880000u);
    st32((c.r[29].w[0] + 120u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 124u), c.r[3].w[0]);
    set32(c.r[3], c.r[29].w[0] + 48u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[8]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[8].w[3]);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[12]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[3]);
    st128((c.r[17].w[0] + 1968u) & ~15u, c.r[3]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 26;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002FC0F0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 31184u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002FC2F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC11Cu);  if (depth < kMaxDepth) unit_007E(c, 217u, depth + 1u); else { c.pc = 0x002FACA0u; return; } if (c.pc != 0x002FC11Cu) [[unlikely]] return; }
L_002FC11C:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[29].w[0] + 48u);  if (t) { goto L_002FC184; } }
    set32(c.r[2], c.r[17].w[0] + 1776u);
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[3].w[0]) & ~15u, c.r[6]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[3].w[0] + 48u) & ~15u, c.r[9]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC154u); set32(c.r[4], c.r[17].w[0] + 1888u);  if (depth < kMaxDepth) unit_0049(c, 117u, depth + 1u); else { c.pc = 0x00225980u; return; } if (c.pc != 0x002FC154u) [[unlikely]] return; }
L_002FC154:
    set32(c.r[3], c.r[29].w[0] + 96u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 1852u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC184u); set32(c.r[5], c.r[29].w[0] + 48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FC184u) [[unlikely]] return; }
L_002FC184:
    set32(c.r[4], ld32((c.r[17].w[0] + 1884u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FC198; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC198u);  if (depth < kMaxDepth) unit_005B(c, 353u, depth + 1u); else { c.pc = 0x0026EF90u; return; } if (c.pc != 0x002FC198u) [[unlikely]] return; }
L_002FC198:
    set32(c.r[4], ld32((c.r[17].w[0] + 1880u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FC2F8; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1873u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002FC2F0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 1984u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 364u)));
    c.r[1].d[0] = c.r[2].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[16], ld32((c.r[3].w[0] + 52u)));  if (t) { goto L_002FC2BC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[11], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_002FC280; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x50000000u);
    set32(c.r[10], ld32((c.r[1].w[0] + 1380u)));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[6].d[0] = c.r[4].d[0] | 2ull;
    c.r[8].d[0] = c.r[2].d[0] | 3ull;
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x11000000u);
    c.r[2].d[0] = 0ull | 32769ull;
    set32(c.r[4], 0u + 14u);
    c.r[5].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[3], 0u + 68u);
    set32(c.r[2], 0u + 66u);
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
    st64((c.r[9].w[0] + 48u), c.r[3].d[0]);
    st64((c.r[9].w[0] + 56u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1380u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[2].w[0] + 64u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1380u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[2].w[0] - 4u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1364u), c.r[2].w[0]);
    c.budget -= 38;
L_002FC280:
    set32(c.r[3], ld32((c.r[17].w[0] + 1880u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = ld32((c.r[3].w[0] + 364u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC2ACu);  if (depth < kMaxDepth) unit_0015(c, 85u, depth + 1u); else { c.pc = 0x00156E00u; return; } if (c.pc != 0x002FC2ACu) [[unlikely]] return; }
L_002FC2AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00050000u);
    c.r[2].d[0] = c.r[2].d[0] | 12801ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st64((c.r[16].w[0] + 192u), c.r[2].d[0]);  if (t) { goto L_002FC2D8; } }
L_002FC2BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC2CCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0015(c, 85u, depth + 1u); else { c.pc = 0x00156E00u; return; } if (c.pc != 0x002FC2CCu) [[unlikely]] return; }
L_002FC2CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00050000u);
    c.r[2].d[0] = c.r[2].d[0] | 12813ull;
    st64((c.r[16].w[0] + 192u), c.r[2].d[0]);
    c.budget -= 3;
L_002FC2D8:
    set32(c.r[25], ld32((c.r[16].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC2E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FC2E8u) [[unlikely]] return; }
L_002FC2E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002FC2FC; } }
L_002FC2F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC2F8u);  if (depth < kMaxDepth) unit_005B(c, 353u, depth + 1u); else { c.pc = 0x0026EF90u; return; } if (c.pc != 0x002FC2F8u) [[unlikely]] return; }
L_002FC2F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002FC2FC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002FC310:
    set32(c.r[29], c.r[29].w[0] - 480u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC33Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_007F(c, 71u, depth + 1u); else { c.pc = 0x002FCB20u; return; } if (c.pc != 0x002FC33Cu) [[unlikely]] return; }
L_002FC33C:
    set32(c.r[5], c.r[29].w[0] + 192u);
    set32(c.r[4], c.r[29].w[0] + 432u);
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
L_002FC348:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FC348u | kUnwind; return; } goto L_002FC348; } }
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC374u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_007F(c, 71u, depth + 1u); else { c.pc = 0x002FCB20u; return; } if (c.pc != 0x002FC374u) [[unlikely]] return; }
L_002FC374:
    set32(c.r[6], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[29].w[0] + 384u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
L_002FC380:
    ld128((c.r[6].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FC380u | kUnwind; return; } goto L_002FC380; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002FC618; } }
L_002FC3A4:
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 28320u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002FC614; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[3], 0u + 12084u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002FC614; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    ld128((c.r[4].w[0] + 48u) & ~15u, c.r[4]);
    st128((c.r[29].w[0] + 352u) & ~15u, c.r[4]);
    st32((c.r[29].w[0] + 364u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 368u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 372u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC3F4u); set32(c.r[4], ld32((c.r[16].w[0] + 912u)));  if (depth < kMaxDepth) unit_0049(c, 324u, depth + 1u); else { c.pc = 0x00227CF0u; return; } if (c.pc != 0x002FC3F4u) [[unlikely]] return; }
L_002FC3F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FC614; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 474u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002FC614; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC414u);  if (depth < kMaxDepth) unit_0034(c, 90u, depth + 1u); else { c.pc = 0x001D0BC0u; return; } if (c.pc != 0x002FC414u) [[unlikely]] return; }
L_002FC414:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 432u);  if (t) { goto L_002FC440; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC424u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 97u, depth + 1u); else { c.pc = 0x001D0D70u; return; } if (c.pc != 0x002FC424u) [[unlikely]] return; }
L_002FC424:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002FC43C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC434u);  if (depth < kMaxDepth) unit_0034(c, 93u, depth + 1u); else { c.pc = 0x001D0C90u; return; } if (c.pc != 0x002FC434u) [[unlikely]] return; }
L_002FC434:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FC614; } }
L_002FC43C:
    set32(c.r[4], c.r[29].w[0] + 432u);
    c.budget -= 1;
L_002FC440:
    set32(c.r[5], c.r[29].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC44Cu); c.r[19].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 141u, depth + 1u); else { c.pc = 0x00141AC0u; return; } if (c.pc != 0x002FC44Cu) [[unlikely]] return; }
L_002FC44C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 384u);  if (t) { goto L_002FC45C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002FC470; } }
L_002FC45C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC464u); set32(c.r[5], c.r[29].w[0] + 352u);  if (depth < kMaxDepth) unit_0010(c, 141u, depth + 1u); else { c.pc = 0x00141AC0u; return; } if (c.pc != 0x002FC464u) [[unlikely]] return; }
L_002FC464:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FC470; } }
    c.r[19].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002FC470:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002FC614; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[29].w[0] + 320u);
    set32(c.r[2], c.r[2].w[0] - 9808u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[18].w[0] + 96u)));
    ld128((c.r[16].w[0] + 224u) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] + 224u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[2]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.r[29].w[0] + 96u);
    set32(c.r[3], c.r[29].w[0] + 128u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], c.r[29].w[0] + 256u);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[2]);
    st128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[0]);
    vu::mr32(c.vu0, 15u, 1u, 0u);
    st128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    vu::mr32(c.vu0, 15u, 2u, 1u);
    st128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    vu::mr32(c.vu0, 15u, 3u, 2u);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[3]);
    set32(c.r[5], c.r[18].w[0] + 1536u);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC4F4u); set32(c.r[4], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_0011(c, 53u, depth + 1u); else { c.pc = 0x00145110u; return; } if (c.pc != 0x002FC4F4u) [[unlikely]] return; }
L_002FC4F4:
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC500u); set32(c.r[5], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_0011(c, 19u, depth + 1u); else { c.pc = 0x00144490u; return; } if (c.pc != 0x002FC500u) [[unlikely]] return; }
L_002FC500:
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC50Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 348u, depth + 1u); else { c.pc = 0x00103930u; return; } if (c.pc != 0x002FC50Cu) [[unlikely]] return; }
L_002FC50C:
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC518u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 348u, depth + 1u); else { c.pc = 0x00103930u; return; } if (c.pc != 0x002FC518u) [[unlikely]] return; }
L_002FC518:
    c.f[6] = ld32((c.r[29].w[0] + 336u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[5] = ld32((c.r[29].w[0] + 324u));
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    c.f[4] = ld32((c.r[29].w[0] + 340u));
    set32(c.r[2], c.r[29].w[0] + 80u);
    c.f[3] = ld32((c.r[29].w[0] + 320u));
    set32(c.r[3], c.r[29].w[0] + 112u);
    c.f[2] = ld32((c.r[29].w[0] + 344u));
    c.f[1] = ld32((c.r[29].w[0] + 328u));
    c.f[0] = 0u;
    c.facc = fp::mul(c.f[6], c.f[5]);
    c.f[7] = fp::sub(c.facc, fp::mul(c.f[4], c.f[3]));
    c.facc = fp::mul(c.f[2], c.f[3]);
    c.f[3] = fp::sub(c.facc, fp::mul(c.f[6], c.f[1]));
    c.facc = fp::mul(c.f[4], c.f[1]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[2], c.f[5]));
    st32((c.r[29].w[0] + 88u), c.f[7]);
    st32((c.r[29].w[0] + 84u), c.f[3]);
    st32((c.r[29].w[0] + 80u), c.f[1]);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[2]);
    c.f[1] = ld32((c.r[29].w[0] + 244u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 28;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002FC59C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC594u); set32(c.r[5], 0u + 12080u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x002FC594u) [[unlikely]] return; }
L_002FC594:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[9], ld32((c.r[18].w[0] + 96u)));  if (t) { goto L_002FC5A8; } }
L_002FC59C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC5A4u); set32(c.r[5], 0u + 12081u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x002FC5A4u) [[unlikely]] return; }
L_002FC5A4:
    set32(c.r[9], ld32((c.r[18].w[0] + 96u)));
    c.budget -= 1;
L_002FC5A8:
    set32(c.r[6], 0u - 65u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    set32(c.r[5], 0u - 2u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[3], 0u - 5u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    set32(c.r[10], 0u + 1u);
    ld128((c.r[9].w[0] + 224u) & ~15u, c.r[9]);
    st128((c.r[16].w[0] + 224u) & ~15u, c.r[9]);
    set32(c.r[9], ld32((c.r[18].w[0] + 96u)));
    ld128((c.r[9].w[0] + 208u) & ~15u, c.r[9]);
    st128((c.r[16].w[0] + 208u) & ~15u, c.r[9]);
    c.r[9].d[0] = ld8((c.r[16].w[0] + 394u));
    c.r[6].d[0] = c.r[9].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[16].w[0] + 394u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[16].w[0] + 395u));
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[8].d[0];
    st8((c.r[16].w[0] + 395u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 392u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 392u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[18].w[0] + 1568u), c.r[16].w[0]);
    c.budget -= 27;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 1572u), c.r[10].w[0]);  if (t) { goto L_002FC624; } }
L_002FC614:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002FC618:
    c.r[3].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FC3A4u | kUnwind; return; } goto L_002FC3A4; } }
L_002FC624:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 480u);  c.pc = t; return; }
L_002FC640:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC65Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_007E(c, 247u, depth + 1u); else { c.pc = 0x002FB490u; return; } if (c.pc != 0x002FC65Cu) [[unlikely]] return; }
L_002FC65C:
    set32(c.r[2], ld32((c.r[17].w[0] + 1572u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FC680; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[5], 0u + 150u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC678u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 236u, depth + 1u); else { c.pc = 0x003ADA80u; return; } if (c.pc != 0x002FC678u) [[unlikely]] return; }
L_002FC678:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_002FCB00; } }
L_002FC680:
    set32(c.r[3], ld32((c.r[17].w[0] + 1568u)));
    set32(c.r[2], 0u + 12084u);
    set32(c.r[3], ld32((c.r[3].w[0] + 164u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002FC6A4; } }
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 150u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC6A4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 236u, depth + 1u); else { c.pc = 0x003ADA80u; return; } if (c.pc != 0x002FC6A4u) [[unlikely]] return; }
L_002FC6A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[2], c.r[2].w[0] - 9792u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], c.r[2].w[0] - 9776u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[6].w[0]) & ~15u, c.r[2]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 1872u));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 1568u)));  if (t) { goto L_002FC720; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 474u));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 1888u);  if (t) { goto L_002FCA20; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[12] = ld32((c.r[1].w[0] - 22000u));
    set32(c.r[4], c.r[17].w[0] + 1888u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC704u); set32(c.r[7], 0u + 20u);  if (depth < kMaxDepth) unit_0049(c, 110u, depth + 1u); else { c.pc = 0x002257F0u; return; } if (c.pc != 0x002FC704u) [[unlikely]] return; }
L_002FC704:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[17].w[0] + 1872u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC718u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_007E(c, 280u, depth + 1u); else { c.pc = 0x002FBD40u; return; } if (c.pc != 0x002FC718u) [[unlikely]] return; }
L_002FC718:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FCA1C; } }
L_002FC720:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1873u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[17].w[0] + 1888u);  if (t) { goto L_002FC7B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC734u);  if (depth < kMaxDepth) unit_0049(c, 118u, depth + 1u); else { c.pc = 0x00225990u; return; } if (c.pc != 0x002FC734u) [[unlikely]] return; }
L_002FC734:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FCA1C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC758u); set32(c.r[4], ld32((c.r[17].w[0] + 1880u)));  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x002FC758u) [[unlikely]] return; }
L_002FC758:
    set32(c.r[4], ld32((c.r[17].w[0] + 1880u)));
    set32(c.r[5], 0u + 60u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC768u); set32(c.r[6], 0u + 140u);  if (depth < kMaxDepth) unit_005B(c, 358u, depth + 1u); else { c.pc = 0x0026F230u; return; } if (c.pc != 0x002FC768u) [[unlikely]] return; }
L_002FC768:
    set32(c.r[4], ld32((c.r[17].w[0] + 1884u)));
    set32(c.r[5], 0u + 30u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC778u); set32(c.r[6], 0u + 70u);  if (depth < kMaxDepth) unit_005B(c, 358u, depth + 1u); else { c.pc = 0x0026F230u; return; } if (c.pc != 0x002FC778u) [[unlikely]] return; }
L_002FC778:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[12] = ld32((c.r[1].w[0] - 22000u));
    set32(c.r[4], c.r[17].w[0] + 1888u);
    c.f[13] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 160u);
    set32(c.r[6], c.r[29].w[0] + 176u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC79Cu); set32(c.r[7], 0u + 20u);  if (depth < kMaxDepth) unit_0049(c, 110u, depth + 1u); else { c.pc = 0x002257F0u; return; } if (c.pc != 0x002FC79Cu) [[unlikely]] return; }
L_002FC79C:
    set32(c.r[3], 0u + 29u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 1876u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1873u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002FCA1C; } }
L_002FC7B0:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 1874u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[17].w[0] + 1888u);  if (t) { goto L_002FC8B4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 1888u);  if (t) { goto L_002FC894; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    set32(c.r[4], c.r[4].w[0] - 1776u);
    set32(c.r[3], ld32((c.r[3].w[0] + 68u)));
    ld128((c.r[3].w[0] + 48u) & ~15u, c.r[3]);
    st128((c.r[1].w[0] - 1776u) & ~15u, c.r[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[1].w[0] - 1760u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[1].w[0] - 1756u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 1568u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 912u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC804u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0049(c, 96u, depth + 1u); else { c.pc = 0x002254A0u; return; } if (c.pc != 0x002FC804u) [[unlikely]] return; }
L_002FC804:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002FC834; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC814u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 85u, depth + 1u); else { c.pc = 0x001D0B30u; return; } if (c.pc != 0x002FC814u) [[unlikely]] return; }
L_002FC814:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[17].w[0] + 1888u);  if (t) { goto L_002FC838; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[5], 0u + 340u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002FC834; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC834u);  if (depth < kMaxDepth) unit_0052(c, 156u, depth + 1u); else { c.pc = 0x00249520u; return; } if (c.pc != 0x002FC834u) [[unlikely]] return; }
L_002FC834:
    set32(c.r[4], c.r[17].w[0] + 1888u);
    c.budget -= 1;
L_002FC838:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC840u);  if (depth < kMaxDepth) unit_0049(c, 118u, depth + 1u); else { c.pc = 0x00225990u; return; } if (c.pc != 0x002FC840u) [[unlikely]] return; }
L_002FC840:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[17].w[0] + 1888u);  if (t) { goto L_002FC890; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC854u);  if (depth < kMaxDepth) unit_0049(c, 117u, depth + 1u); else { c.pc = 0x00225980u; return; } if (c.pc != 0x002FC854u) [[unlikely]] return; }
L_002FC854:
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1880000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_002FC890; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[12] = ld32((c.r[1].w[0] - 22000u));
    set32(c.r[4], c.r[17].w[0] + 1888u);
    c.f[13] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 160u);
    set32(c.r[6], c.r[29].w[0] + 176u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC890u); set32(c.r[7], 0u + 20u);  if (depth < kMaxDepth) unit_0049(c, 110u, depth + 1u); else { c.pc = 0x002257F0u; return; } if (c.pc != 0x002FC890u) [[unlikely]] return; }
L_002FC890:
    set32(c.r[4], c.r[17].w[0] + 1888u);
    c.budget -= 1;
L_002FC894:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC89Cu);  if (depth < kMaxDepth) unit_0049(c, 118u, depth + 1u); else { c.pc = 0x00225990u; return; } if (c.pc != 0x002FC89Cu) [[unlikely]] return; }
L_002FC89C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FC8FC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1874u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002FC8FC; } }
L_002FC8B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC8BCu);  if (depth < kMaxDepth) unit_0049(c, 118u, depth + 1u); else { c.pc = 0x00225990u; return; } if (c.pc != 0x002FC8BCu) [[unlikely]] return; }
L_002FC8BC:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FC8FC; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 474u));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_002FC8FC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[12] = ld32((c.r[1].w[0] - 22000u));
    set32(c.r[4], c.r[17].w[0] + 1888u);
    c.f[13] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC8F8u); set32(c.r[7], 0u + 20u);  if (depth < kMaxDepth) unit_0049(c, 110u, depth + 1u); else { c.pc = 0x002257F0u; return; } if (c.pc != 0x002FC8F8u) [[unlikely]] return; }
L_002FC8F8:
    st8((c.r[17].w[0] + 1874u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002FC8FC:
    set32(c.r[2], ld32((c.r[17].w[0] + 1876u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002FC990; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FC984; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 1880u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], 0u + 48u);
    set32(c.r[2], ld32((c.r[3].w[0] + 72u)));
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[2]);
    c.f[1] = ld32((c.r[29].w[0] + 148u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC93Cu); st32((c.r[29].w[0] + 148u), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002FC93Cu) [[unlikely]] return; }
L_002FC93C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 48u);  if (t) { goto L_002FC960; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 57u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC95Cu); set32(c.r[8], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0049(c, 172u, depth + 1u); else { c.pc = 0x00226490u; return; } if (c.pc != 0x002FC95Cu) [[unlikely]] return; }
L_002FC95C:
    set32(c.r[4], 0u + 48u);
    c.budget -= 1;
L_002FC960:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC968u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002FC968u) [[unlikely]] return; }
L_002FC968:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002FC984; } }
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 57u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC984u); set32(c.r[8], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0049(c, 172u, depth + 1u); else { c.pc = 0x00226490u; return; } if (c.pc != 0x002FC984u) [[unlikely]] return; }
L_002FC984:
    set32(c.r[2], ld32((c.r[17].w[0] + 1876u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0] + 1876u), c.r[2].w[0]);
    c.budget -= 3;
L_002FC990:
    set32(c.r[2], ld32((c.r[17].w[0] + 1880u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 364u)));
    c.r[2].d[0] = c.r[2].sd[0] < 112ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002FCA1C; } }
L_002FC9A4:
    set32(c.r[3], ld32((c.r[17].w[0] + 1880u)));
    set32(c.r[6], c.r[16].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 64u)));
    ld128((c.r[3].w[0] + 48u) & ~15u, c.r[3]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[3]);
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 116u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 1568u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 912u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC9DCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0049(c, 96u, depth + 1u); else { c.pc = 0x002254A0u; return; } if (c.pc != 0x002FC9DCu) [[unlikely]] return; }
L_002FC9DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002FCA0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC9ECu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 85u, depth + 1u); else { c.pc = 0x001D0B30u; return; } if (c.pc != 0x002FC9ECu) [[unlikely]] return; }
L_002FC9EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FCA0C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 164u)));
    set32(c.r[5], 0u + 340u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002FCA0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCA0Cu);  if (depth < kMaxDepth) unit_0052(c, 156u, depth + 1u); else { c.pc = 0x00249520u; return; } if (c.pc != 0x002FCA0Cu) [[unlikely]] return; }
L_002FCA0C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FC9A4u | kUnwind; return; } goto L_002FC9A4; } }
L_002FCA1C:
    set32(c.r[4], c.r[17].w[0] + 1888u);
    c.budget -= 1;
L_002FCA20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCA28u);  if (depth < kMaxDepth) unit_0049(c, 111u, depth + 1u); else { c.pc = 0x00225820u; return; } if (c.pc != 0x002FCA28u) [[unlikely]] return; }
L_002FCA28:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1874u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_002FCAFC; } }
    set32(c.r[5], 0u + 321u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26328u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCA44u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 414u, depth + 1u); else { c.pc = 0x00197E00u; return; } if (c.pc != 0x002FCA44u) [[unlikely]] return; }
L_002FCA44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FCAFC; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 68u)));
    ld128((c.r[4].w[0] + 48u) & ~15u, c.r[4]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[4]);
    st32((c.r[29].w[0] + 80u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 84u), 0u);
    set32(c.r[4], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCA80u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 247u, depth + 1u); else { c.pc = 0x001437D0u; return; } if (c.pc != 0x002FCA80u) [[unlikely]] return; }
L_002FCA80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FCAFC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCAA0u); set32(c.r[4], ld32((c.r[17].w[0] + 1880u)));  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x002FCAA0u) [[unlikely]] return; }
L_002FCAA0:
    set32(c.r[4], ld32((c.r[17].w[0] + 1880u)));
    set32(c.r[5], 0u + 65u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCAB0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 357u, depth + 1u); else { c.pc = 0x0026F210u; return; } if (c.pc != 0x002FCAB0u) [[unlikely]] return; }
L_002FCAB0:
    set32(c.r[4], ld32((c.r[17].w[0] + 1884u)));
    set32(c.r[5], 0u + 65u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCAC0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 357u, depth + 1u); else { c.pc = 0x0026F210u; return; } if (c.pc != 0x002FCAC0u) [[unlikely]] return; }
L_002FCAC0:
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 1852u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCADCu); set32(c.r[5], c.r[17].w[0] + 1776u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FCADCu) [[unlikely]] return; }
L_002FCADC:
    st8((c.r[17].w[0] + 1874u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u - 1u);
    st8((c.r[17].w[0] + 1872u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[17].w[0] + 1873u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCAFCu); st32((c.r[17].w[0] + 1876u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_007E(c, 280u, depth + 1u); else { c.pc = 0x002FBD40u; return; } if (c.pc != 0x002FCAFCu) [[unlikely]] return; }
L_002FCAFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002FCB00:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_002FCB20:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[29].w[0] + 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 12;
    { const bool t = c.r[6].d[0] != 0ull; st32((c.r[29].w[0] + 64u), c.f[0]);  if (t) { goto L_002FCB58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 10u);  if (t) { goto L_002FCB5C; } }
L_002FCB58:
    set32(c.r[2], 0u - 10u);
    c.budget -= 1;
L_002FCB5C:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    c.f[12] = ld32((c.r[2].w[0] + 212u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCB7Cu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0011(c, 21u, depth + 1u); else { c.pc = 0x001444F0u; return; } if (c.pc != 0x002FCB7Cu) [[unlikely]] return; }
L_002FCB7C:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[3], c.r[3].w[0] + 224u);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 9;
L_002FCBA0:
    ld128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st128((c.r[16].w[0]) & ~15u, c.r[3]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[16], c.r[16].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FCBA0u | kUnwind; return; } goto L_002FCBA0; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002FCBD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x474F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[7].d[0] = c.r[2].d[0] | 16970ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCBECu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 200u, depth + 1u); else { c.pc = 0x001B1A30u; return; } if (c.pc != 0x002FCBECu) [[unlikely]] return; }
L_002FCBEC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 16592u);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 96u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002FCC10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002FCC84; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 16592u);
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FCC5C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FCC5C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCC5Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FCC5Cu) [[unlikely]] return; }
L_002FCC5C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCC6Cu); st32((c.r[17].w[0] + 96u), 0u);  if (depth < kMaxDepth) unit_002C(c, 203u, depth + 1u); else { c.pc = 0x001B1AC0u; return; } if (c.pc != 0x002FCC6Cu) [[unlikely]] return; }
L_002FCC6C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002FCC88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCC84u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002FCC84u) [[unlikely]] return; }
L_002FCC84:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002FCC88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002FCCA0:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCCD0u); set32(c.r[5], c.r[2].w[0] - 2000u);  if (depth < kMaxDepth) unit_0024(c, 249u, depth + 1u); else { c.pc = 0x00191DE0u; return; } if (c.pc != 0x002FCCD0u) [[unlikely]] return; }
L_002FCCD0:
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCCE0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 92u, depth + 1u); else { c.pc = 0x00225420u; return; } if (c.pc != 0x002FCCE0u) [[unlikely]] return; }
L_002FCCE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002FCCF0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[16].w[0]) & ~15u, c.vu0.vf[0]);
    c.f[0] = 0u;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], 0u + 31u);
    st32((c.r[16].w[0] + 16u), c.f[0]);
    st32((c.r[16].w[0] + 20u), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8896u)));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 17;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_002FCD3C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002FCDC0; } }
L_002FCD3C:
    set32(c.r[5], 0u + 81u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26328u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCD4Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 416u, depth + 1u); else { c.pc = 0x00197E60u; return; } if (c.pc != 0x002FCD4Cu) [[unlikely]] return; }
L_002FCD4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FCD5C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002FCDC0; } }
L_002FCD5C:
    set32(c.r[3], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002FCD70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002FCDC0; } }
L_002FCD70:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCD7Cu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_007F(c, 71u, depth + 1u); else { c.pc = 0x002FCB20u; return; } if (c.pc != 0x002FCD7Cu) [[unlikely]] return; }
L_002FCD7C:
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
L_002FCD88:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FCD88u | kUnwind; return; } goto L_002FCD88; } }
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[3]);
    set32(c.r[2], 0u + 1u);
    st128((c.r[16].w[0]) & ~15u, c.r[3]);
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    st32((c.r[16].w[0] + 16u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 116u)));
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 7;
L_002FCDC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_002FCDE0:
    set32(c.r[29], c.r[29].w[0] - 320u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCE00u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0059(c, 86u, depth + 1u); else { c.pc = 0x00265660u; return; } if (c.pc != 0x002FCE00u) [[unlikely]] return; }
L_002FCE00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], c.r[2].w[0] + 16720u);
    set32(c.r[3], 0u + 32u);
    st32((c.r[17].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[1].w[0] + 3840u)));
    set32(c.r[2], 0u + 100u);
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 48u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_002FCE30; } }
    breakpoint(c, 0x002FCE2Cu);
    c.budget -= 1;
L_002FCE30:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].d[0] = c.lo.d[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCE40u); set32(c.r[4], ld32((c.r[1].w[0] - 27032u)));  if (depth < kMaxDepth) unit_005A(c, 118u, depth + 1u); else { c.pc = 0x00269250u; return; } if (c.pc != 0x002FCE40u) [[unlikely]] return; }
L_002FCE40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCE48u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002FCE48u) [[unlikely]] return; }
L_002FCE48:
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.r[2].d[0] = c.r[3].sd[0] < 44ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 47ll ? 1ull : 0ull;  if (t) { goto L_002FCE68; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002FCE6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002FCE6C; } }
L_002FCE68:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002FCE6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_002FCEB8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCE84u); set32(c.r[5], c.r[5].w[0] - 21984u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x002FCE84u) [[unlikely]] return; }
L_002FCE84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCE8Cu); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002FCE8Cu) [[unlikely]] return; }
L_002FCE8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002FCEA4; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCEA4u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 220u, depth + 1u); else { c.pc = 0x00269C00u; return; } if (c.pc != 0x002FCEA4u) [[unlikely]] return; }
L_002FCEA4:
    set32(c.r[4], ld32((c.r[17].w[0] + 152u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCEB0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x002FCEB0u) [[unlikely]] return; }
L_002FCEB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FCEF0; } }
L_002FCEB8:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCEC4u); set32(c.r[5], c.r[5].w[0] - 21968u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x002FCEC4u) [[unlikely]] return; }
L_002FCEC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCECCu); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002FCECCu) [[unlikely]] return; }
L_002FCECC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002FCEE4; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCEE4u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 220u, depth + 1u); else { c.pc = 0x00269C00u; return; } if (c.pc != 0x002FCEE4u) [[unlikely]] return; }
L_002FCEE4:
    set32(c.r[4], ld32((c.r[17].w[0] + 152u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCEF0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x002FCEF0u) [[unlikely]] return; }
L_002FCEF0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[5].w[0] - 21952u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCF04u); set32(c.r[6], c.r[18].w[0] + 15u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x002FCF04u) [[unlikely]] return; }
L_002FCF04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCF0Cu); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002FCF0Cu) [[unlikely]] return; }
L_002FCF0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002FCF24; } }
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCF24u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 220u, depth + 1u); else { c.pc = 0x00269C00u; return; } if (c.pc != 0x002FCF24u) [[unlikely]] return; }
L_002FCF24:
    set32(c.r[4], ld32((c.r[17].w[0] + 156u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCF30u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x002FCF30u) [[unlikely]] return; }
L_002FCF30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCF38u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 133u, depth + 1u); else { c.pc = 0x00272430u; return; } if (c.pc != 0x002FCF38u) [[unlikely]] return; }
L_002FCF38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FCF4C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 140u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCF4Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x002FCF4Cu) [[unlikely]] return; }
L_002FCF4C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[6], c.r[18].w[0] + 25u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCF60u); set32(c.r[5], c.r[5].w[0] - 21952u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x002FCF60u) [[unlikely]] return; }
L_002FCF60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCF68u); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002FCF68u) [[unlikely]] return; }
L_002FCF68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002FCF7C; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCF7Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_005A(c, 201u, depth + 1u); else { c.pc = 0x00269950u; return; } if (c.pc != 0x002FCF7Cu) [[unlikely]] return; }
L_002FCF7C:
    st32((c.r[17].w[0] + 164u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCF88u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 137u, depth + 1u); else { c.pc = 0x00272490u; return; } if (c.pc != 0x002FCF88u) [[unlikely]] return; }
L_002FCF88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FCF9C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 140u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCF9Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x002FCF9Cu) [[unlikely]] return; }
L_002FCF9C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_002FCFC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002FD008; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 16720u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCFF0u); st32((c.r[17].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0059(c, 105u, depth + 1u); else { c.pc = 0x00265800u; return; } if (c.pc != 0x002FCFF0u) [[unlikely]] return; }
L_002FCFF0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002FD00C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD008u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002FD008u) [[unlikely]] return; }
L_002FD008:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002FD00C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002FD020:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[1].w[0] - 27920u)));
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002FD114; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD048u); set32(c.r[4], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_0011(c, 177u, depth + 1u); else { c.pc = 0x00146C10u; return; } if (c.pc != 0x002FD048u) [[unlikely]] return; }
L_002FD048:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FD060; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD05Cu); set32(c.r[4], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_0011(c, 182u, depth + 1u); else { c.pc = 0x00146C90u; return; } if (c.pc != 0x002FD05Cu) [[unlikely]] return; }
L_002FD05C:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_002FD060:
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FD078; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002FD118; } }
L_002FD078:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 148u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002FD094; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD08Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0059(c, 129u, depth + 1u); else { c.pc = 0x00265AA0u; return; } if (c.pc != 0x002FD08Cu) [[unlikely]] return; }
L_002FD08C:
    st8((c.r[16].w[0] + 148u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_002FD094:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD09Cu);  if (depth < kMaxDepth) unit_0059(c, 373u, depth + 1u); else { c.pc = 0x002676E0u; return; } if (c.pc != 0x002FD09Cu) [[unlikely]] return; }
L_002FD09C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD0A4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0059(c, 138u, depth + 1u); else { c.pc = 0x00265C00u; return; } if (c.pc != 0x002FD0A4u) [[unlikely]] return; }
L_002FD0A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD0ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0059(c, 151u, depth + 1u); else { c.pc = 0x00265CC0u; return; } if (c.pc != 0x002FD0ACu) [[unlikely]] return; }
L_002FD0AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD0B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 37u, depth + 1u); else { c.pc = 0x00268780u; return; } if (c.pc != 0x002FD0B4u) [[unlikely]] return; }
L_002FD0B4:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], 0u + 39u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002FD0E4; } }
    set32(c.r[3], c.r[4].w[0] - 36u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002FD0E0; } }
    set32(c.r[3], 0u + 38u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002FD0F0; } }
L_002FD0E0:
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002FD0E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FD0F0; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002FD0F0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002FD10C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FD108; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD108u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 42u, depth + 1u); else { c.pc = 0x00268840u; return; } if (c.pc != 0x002FD108u) [[unlikely]] return; }
L_002FD108:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002FD10C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD114u);  if (depth < kMaxDepth) unit_0059(c, 368u, depth + 1u); else { c.pc = 0x00267630u; return; } if (c.pc != 0x002FD114u) [[unlikely]] return; }
L_002FD114:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002FD118:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002FD130:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD144u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 218u, depth + 1u); else { c.pc = 0x001667A0u; return; } if (c.pc != 0x002FD144u) [[unlikely]] return; }
L_002FD144:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 16736u);
    set32(c.r[3], c.r[3].w[0] + 16752u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 44u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002FD180:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002FD200; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 16736u);
    set32(c.r[2], c.r[2].w[0] + 16752u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FD1D8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FD1D8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD1D8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FD1D8u) [[unlikely]] return; }
L_002FD1D8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD1E8u); st32((c.r[17].w[0] + 44u), 0u);  if (depth < kMaxDepth) unit_0019(c, 221u, depth + 1u); else { c.pc = 0x00166810u; return; } if (c.pc != 0x002FD1E8u) [[unlikely]] return; }
L_002FD1E8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002FD204; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD200u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002FD200u) [[unlikely]] return; }
L_002FD200:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002FD204:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002FD220:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_002FD230:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_002FD240:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FD250:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FD260:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD278u); set32(c.r[4], 0u + 320u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002FD278u) [[unlikely]] return; }
L_002FD278:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002FD290; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD290u); set32(c.r[7], 0u + 224u);  if (depth < kMaxDepth) unit_007D(c, 107u, depth + 1u); else { c.pc = 0x002F5FD0u; return; } if (c.pc != 0x002FD290u) [[unlikely]] return; }
L_002FD290:
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], 0u + 1u);
    st8((c.r[3].w[0] + 305u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002FD2B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FD2E4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FD2E4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD2E4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FD2E4u) [[unlikely]] return; }
L_002FD2E4:
    st32((c.r[16].w[0] + 44u), 0u);
    set32(c.r[2], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002FD300:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002FD250u | kUnwind; return; } goto L_002FD250; }
L_002FD310:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002FD180u | kUnwind; return; } goto L_002FD180; }
L_002FD320:
    set32(c.r[29], c.r[29].w[0] - 112u);
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
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD360u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_000B(c, 298u, depth + 1u); else { c.pc = 0x0012E440u; return; } if (c.pc != 0x002FD360u) [[unlikely]] return; }
L_002FD360:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 2248u);
    set32(c.r[3], c.r[3].w[0] + 16800u);
    st32((c.r[21].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], c.r[21].w[0] + 24u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[21].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 16888u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD38Cu); st32((c.r[21].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006F(c, 137u, depth + 1u); else { c.pc = 0x002BD810u; return; } if (c.pc != 0x002FD38Cu) [[unlikely]] return; }
L_002FD38C:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[4], c.r[21].w[0] + 8372u);
    set32(c.r[5], c.r[21].w[0] + 20u);
    st32((c.r[21].w[0] + 8364u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD3A4u); st32((c.r[21].w[0] + 8368u), c.r[20].w[0]);  if (depth < kMaxDepth) unit_0054(c, 264u, depth + 1u); else { c.pc = 0x00251A80u; return; } if (c.pc != 0x002FD3A4u) [[unlikely]] return; }
L_002FD3A4:
    set32(c.r[4], c.r[21].w[0] + 8428u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD3B0u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0049(c, 271u, depth + 1u); else { c.pc = 0x002275A0u; return; } if (c.pc != 0x002FD3B0u) [[unlikely]] return; }
L_002FD3B0:
    set32(c.r[4], c.r[21].w[0] + 8464u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD3BCu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0049(c, 271u, depth + 1u); else { c.pc = 0x002275A0u; return; } if (c.pc != 0x002FD3BCu) [[unlikely]] return; }
L_002FD3BC:
    set32(c.r[4], c.r[21].w[0] + 8500u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD3C8u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0049(c, 271u, depth + 1u); else { c.pc = 0x002275A0u; return; } if (c.pc != 0x002FD3C8u) [[unlikely]] return; }
L_002FD3C8:
    st32((c.r[21].w[0] + 32u), 0u);
    set32(c.r[4], c.r[21].w[0] + 44u);
    st32((c.r[21].w[0] + 36u), 0u);
    set32(c.r[5], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD3E0u); st32((c.r[21].w[0] + 40u), 0u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x002FD3E0u) [[unlikely]] return; }
L_002FD3E0:
    st32((c.r[21].w[0] + 8388u), c.r[19].w[0]);
    st32((c.r[21].w[0] + 8392u), c.r[18].w[0]);
    st32((c.r[21].w[0] + 8396u), 0u);
    st32((c.r[21].w[0] + 8400u), 0u);
    st32((c.r[21].w[0] + 8412u), 0u);
    st32((c.r[21].w[0] + 8416u), 0u);
    st32((c.r[21].w[0] + 8420u), 0u);
    st32((c.r[21].w[0] + 8424u), c.r[16].w[0]);
    st8((c.r[21].w[0] + 8404u), static_cast<std::uint8_t>(0u));
    st8((c.r[21].w[0] + 8405u), static_cast<std::uint8_t>(0u));
    st8((c.r[21].w[0] + 8406u), static_cast<std::uint8_t>(0u));
    st8((c.r[21].w[0] + 8407u), static_cast<std::uint8_t>(0u));
    st16((c.r[21].w[0] + 8408u), static_cast<std::uint16_t>(0u));
    st32((c.r[21].w[0] + 8536u), 0u);
    st32((c.r[21].w[0] + 8540u), 0u);
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 19;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD42Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FD42Cu) [[unlikely]] return; }
L_002FD42C:
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002FD460:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002FD59C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 16800u);
    set32(c.r[2], c.r[2].w[0] + 16888u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FD4B8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FD4B8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD4B8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FD4B8u) [[unlikely]] return; }
L_002FD4B8:
    st32((c.r[17].w[0] + 32u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FD4E0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FD4E0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD4E0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FD4E0u) [[unlikely]] return; }
L_002FD4E0:
    st32((c.r[17].w[0] + 36u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FD508; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FD508; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD508u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FD508u) [[unlikely]] return; }
L_002FD508:
    set32(c.r[4], c.r[17].w[0] + 8500u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD518u); st32((c.r[17].w[0] + 40u), 0u);  if (depth < kMaxDepth) unit_0049(c, 274u, depth + 1u); else { c.pc = 0x002275F0u; return; } if (c.pc != 0x002FD518u) [[unlikely]] return; }
L_002FD518:
    set32(c.r[4], c.r[17].w[0] + 8464u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD524u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0049(c, 274u, depth + 1u); else { c.pc = 0x002275F0u; return; } if (c.pc != 0x002FD524u) [[unlikely]] return; }
L_002FD524:
    set32(c.r[4], c.r[17].w[0] + 8428u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD530u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0049(c, 274u, depth + 1u); else { c.pc = 0x002275F0u; return; } if (c.pc != 0x002FD530u) [[unlikely]] return; }
L_002FD530:
    set32(c.r[3], c.r[17].w[0] + 8372u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 24u);  if (t) { goto L_002FD55C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 2480u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[17].w[0] + 8376u), c.r[2].w[0]);  if (t) { goto L_002FD558; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 18416u);
    st32((c.r[17].w[0] + 8376u), c.r[2].w[0]);
    c.budget -= 3;
L_002FD558:
    set32(c.r[4], c.r[17].w[0] + 24u);
    c.budget -= 1;
L_002FD55C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD564u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_006F(c, 138u, depth + 1u); else { c.pc = 0x002BD820u; return; } if (c.pc != 0x002FD564u) [[unlikely]] return; }
L_002FD564:
    set32(c.r[2], c.r[17].w[0] + 20u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002FD57C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 2248u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 3;
L_002FD57C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD584u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 300u, depth + 1u); else { c.pc = 0x0012E490u; return; } if (c.pc != 0x002FD584u) [[unlikely]] return; }
L_002FD584:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002FD5A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD59Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002FD59Cu) [[unlikely]] return; }
L_002FD59C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002FD5A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002FD5C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD5D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 317u, depth + 1u); else { c.pc = 0x0012E5D0u; return; } if (c.pc != 0x002FD5D4u) [[unlikely]] return; }
L_002FD5D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD5DCu); set32(c.r[4], 0u + 56u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002FD5DCu) [[unlikely]] return; }
L_002FD5DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002FD5EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD5ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 405u, depth + 1u); else { c.pc = 0x0026FBA0u; return; } if (c.pc != 0x002FD5ECu) [[unlikely]] return; }
L_002FD5EC:
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD5F8u); set32(c.r[4], 0u + 40u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002FD5F8u) [[unlikely]] return; }
L_002FD5F8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], c.r[16].w[0] + 8364u);  if (t) { goto L_002FD610; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD60Cu);  if (depth < kMaxDepth) unit_0054(c, 235u, depth + 1u); else { c.pc = 0x00251760u; return; } if (c.pc != 0x002FD60Cu) [[unlikely]] return; }
L_002FD60C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002FD610:
    st32((c.r[16].w[0] + 36u), c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002FD630:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD644u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 318u, depth + 1u); else { c.pc = 0x0012E5E0u; return; } if (c.pc != 0x002FD644u) [[unlikely]] return; }
L_002FD644:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD64Cu); set32(c.r[4], 0u + 992u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002FD64Cu) [[unlikely]] return; }
L_002FD64C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FD66C; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 8368u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 8388u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 8392u)));
    set32(c.r[8], ld32((c.r[6].w[0] + 8u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD66Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 387u, depth + 1u); else { c.pc = 0x00287180u; return; } if (c.pc != 0x002FD66Cu) [[unlikely]] return; }
L_002FD66C:
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 8412u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD67Cu); set32(c.r[4], c.r[16].w[0] + 24u);  if (depth < kMaxDepth) unit_006F(c, 203u, depth + 1u); else { c.pc = 0x002BE2A0u; return; } if (c.pc != 0x002FD67Cu) [[unlikely]] return; }
L_002FD67C:
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD688u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 428u, depth + 1u); else { c.pc = 0x00287590u; return; } if (c.pc != 0x002FD688u) [[unlikely]] return; }
L_002FD688:
    set32(c.r[4], ld32((c.r[16].w[0] + 8412u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[4], c.r[4].w[0] << 7);
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] + 44u);
    st32((c.r[3].w[0] + 128u), c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002FD6B0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E600u | kUnwind; return; } [[clang::musttail]] return unit_000B(c, 319u, depth); }
L_002FD6C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD6D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 320u, depth + 1u); else { c.pc = 0x0012E610u; return; } if (c.pc != 0x002FD6D4u) [[unlikely]] return; }
L_002FD6D4:
    set32(c.r[3], ld32((c.r[16].w[0] + 8396u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 7u);  if (t) { goto L_002FD6E8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002FD6FC; } }
L_002FD6E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD6F0u); set32(c.r[4], ld32((c.r[16].w[0] + 32u)));  if (depth < kMaxDepth) unit_0062(c, 189u, depth + 1u); else { c.pc = 0x0028A8D0u; return; } if (c.pc != 0x002FD6F0u) [[unlikely]] return; }
L_002FD6F0:
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD6FCu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0062(c, 251u, depth + 1u); else { c.pc = 0x0028B190u; return; } if (c.pc != 0x002FD6FCu) [[unlikely]] return; }
L_002FD6FC:
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD708u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0062(c, 209u, depth + 1u); else { c.pc = 0x0028AC20u; return; } if (c.pc != 0x002FD708u) [[unlikely]] return; }
L_002FD708:
    set32(c.r[3], 0u + 6u);
    st32((c.r[16].w[0] + 8396u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002FD720:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD734u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 321u, depth + 1u); else { c.pc = 0x0012E630u; return; } if (c.pc != 0x002FD734u) [[unlikely]] return; }
L_002FD734:
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD740u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0062(c, 209u, depth + 1u); else { c.pc = 0x0028AC20u; return; } if (c.pc != 0x002FD740u) [[unlikely]] return; }
L_002FD740:
    set32(c.r[3], 0u + 6u);
    st32((c.r[16].w[0] + 8396u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002FD760:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD774u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 322u, depth + 1u); else { c.pc = 0x0012E640u; return; } if (c.pc != 0x002FD774u) [[unlikely]] return; }
L_002FD774:
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FD798; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FD798; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD798u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FD798u) [[unlikely]] return; }
L_002FD798:
    st32((c.r[16].w[0] + 32u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002FD7B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8404u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002FD93C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x6D6E0000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));
    c.r[5].d[0] = c.r[2].d[0] | 21335ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD7E8u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x002FD7E8u) [[unlikely]] return; }
L_002FD7E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002FD7F4; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_002FD7F4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002FD810; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD804u);  if (depth < kMaxDepth) unit_0053(c, 82u, depth + 1u); else { c.pc = 0x0024C840u; return; } if (c.pc != 0x002FD804u) [[unlikely]] return; }
L_002FD804:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FD810; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002FD810:
    set32(c.r[18], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[4], c.r[18].w[0] + 8u);  if (t) { goto L_002FD84C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD824u);  if (depth < kMaxDepth) unit_0011(c, 177u, depth + 1u); else { c.pc = 0x00146C10u; return; } if (c.pc != 0x002FD824u) [[unlikely]] return; }
L_002FD824:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[18].w[0] + 8u);  if (t) { goto L_002FD83C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD838u);  if (depth < kMaxDepth) unit_0011(c, 182u, depth + 1u); else { c.pc = 0x00146C90u; return; } if (c.pc != 0x002FD838u) [[unlikely]] return; }
L_002FD838:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_002FD83C:
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FD84C; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002FD84C:
    set32(c.r[18], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[4], c.r[18].w[0] + 8u);  if (t) { goto L_002FD888; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD860u);  if (depth < kMaxDepth) unit_0011(c, 177u, depth + 1u); else { c.pc = 0x00146C10u; return; } if (c.pc != 0x002FD860u) [[unlikely]] return; }
L_002FD860:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[18].w[0] + 8u);  if (t) { goto L_002FD878; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD874u);  if (depth < kMaxDepth) unit_0011(c, 182u, depth + 1u); else { c.pc = 0x00146C90u; return; } if (c.pc != 0x002FD874u) [[unlikely]] return; }
L_002FD874:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_002FD878:
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FD888; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002FD888:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_002FD93C; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 8404u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], c.r[17].w[0] + 44u);  if (t) { goto L_002FD8AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD8ACu);  if (depth < kMaxDepth) unit_005B(c, 425u, depth + 1u); else { c.pc = 0x0026FE60u; return; } if (c.pc != 0x002FD8ACu) [[unlikely]] return; }
L_002FD8AC:
    set32(c.r[4], c.r[17].w[0] + 24u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[17].w[0] + 44u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD8C0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006F(c, 141u, depth + 1u); else { c.pc = 0x002BD880u; return; } if (c.pc != 0x002FD8C0u) [[unlikely]] return; }
L_002FD8C0:
    set32(c.r[2], ld32((c.r[17].w[0] + 8368u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD8D0u); set32(c.r[4], c.r[17].w[0] + 24u);  if (depth < kMaxDepth) unit_006F(c, 204u, depth + 1u); else { c.pc = 0x002BE2C0u; return; } if (c.pc != 0x002FD8D0u) [[unlikely]] return; }
L_002FD8D0:
    st32((c.r[17].w[0] + 8412u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 8368u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 8412u)));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD8E8u); set32(c.r[4], c.r[17].w[0] + 24u);  if (depth < kMaxDepth) unit_006F(c, 192u, depth + 1u); else { c.pc = 0x002BE060u; return; } if (c.pc != 0x002FD8E8u) [[unlikely]] return; }
L_002FD8E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002FD91C; } }
L_002FD8F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD8F8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 203u, depth + 1u); else { c.pc = 0x002BE2A0u; return; } if (c.pc != 0x002FD8F8u) [[unlikely]] return; }
L_002FD8F8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD904u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 110u, depth + 1u); else { c.pc = 0x0012D160u; return; } if (c.pc != 0x002FD904u) [[unlikely]] return; }
L_002FD904:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002FD918; } }
    set32(c.r[4], c.r[17].w[0] + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD918u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006F(c, 201u, depth + 1u); else { c.pc = 0x002BE260u; return; } if (c.pc != 0x002FD918u) [[unlikely]] return; }
L_002FD918:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002FD91C:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[17].w[0] + 24u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FD8F0u | kUnwind; return; } goto L_002FD8F0; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD93Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FD93Cu) [[unlikely]] return; }
L_002FD93C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002FD960:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD974u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_007F(c, 307u, depth + 1u); else { c.pc = 0x002FE470u; return; } if (c.pc != 0x002FD974u) [[unlikely]] return; }
L_002FD974:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FD98C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD98Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FD98Cu) [[unlikely]] return; }
L_002FD98C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002FD9A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 8407u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002FD9C8; } }
    set32(c.r[4], c.r[16].w[0] + 8372u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD9C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0054(c, 265u, depth + 1u); else { c.pc = 0x00251AB0u; return; } if (c.pc != 0x002FD9C4u) [[unlikely]] return; }
L_002FD9C4:
    st8((c.r[16].w[0] + 8407u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002FD9C8:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8405u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FDA0C; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8406u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FD9FC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    st8((c.r[2].w[0] + 240u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD9F4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 172u, depth + 1u); else { c.pc = 0x0028A5C0u; return; } if (c.pc != 0x002FD9F4u) [[unlikely]] return; }
L_002FD9F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 8406u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002FDA08; } }
L_002FD9FC:
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDA08u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0062(c, 172u, depth + 1u); else { c.pc = 0x0028A5C0u; return; } if (c.pc != 0x002FDA08u) [[unlikely]] return; }
L_002FDA08:
    st8((c.r[16].w[0] + 8405u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002FDA0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDA14u); set32(c.r[4], ld32((c.r[16].w[0] + 32u)));  if (depth < kMaxDepth) unit_0062(c, 208u, depth + 1u); else { c.pc = 0x0028ABE0u; return; } if (c.pc != 0x002FDA14u) [[unlikely]] return; }
L_002FDA14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FDA64; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8536u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FDA64; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 8396u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002FDA5C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002FDA4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[25], ld32((c.r[16].w[0])));  if (t) { goto L_002FDA68; } }
L_002FDA4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDA54u);  if (depth < kMaxDepth) unit_007F(c, 223u, depth + 1u); else { c.pc = 0x002FDC80u; return; } if (c.pc != 0x002FDA54u) [[unlikely]] return; }
L_002FDA54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FDA64; } }
L_002FDA5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDA64u);  if (depth < kMaxDepth) unit_007F(c, 262u, depth + 1u); else { c.pc = 0x002FDFB0u; return; } if (c.pc != 0x002FDA64u) [[unlikely]] return; }
L_002FDA64:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_002FDA68:
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDA74u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FDA74u) [[unlikely]] return; }
L_002FDA74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002FDA90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8420u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002FDAC8; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 8420u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 8420u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FDAC8; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 8396u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDAC8u); set32(c.r[4], ld32((c.r[16].w[0] + 32u)));  if (depth < kMaxDepth) unit_0061(c, 429u, depth + 1u); else { c.pc = 0x002875A0u; return; } if (c.pc != 0x002FDAC8u) [[unlikely]] return; }
L_002FDAC8:
    set32(c.r[4], ld32((c.r[16].w[0] + 8396u)));
    set32(c.r[3], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002FDAF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDAE0u); set32(c.r[4], ld32((c.r[16].w[0] + 32u)));  if (depth < kMaxDepth) unit_0062(c, 208u, depth + 1u); else { c.pc = 0x0028ABE0u; return; } if (c.pc != 0x002FDAE0u) [[unlikely]] return; }
L_002FDAE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FDAF0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    st8((c.r[3].w[0] + 832u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_002FDAF0:
    set32(c.r[4], ld32((c.r[16].w[0] + 8396u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_002FDB08; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002FDBA4; } }
L_002FDB08:
    set32(c.r[4], ld32((c.r[16].w[0] + 8536u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_002FDB74; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8460u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FDB8C; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 8540u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDB34u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_007F(c, 298u, depth + 1u); else { c.pc = 0x002FE330u; return; } if (c.pc != 0x002FDB34u) [[unlikely]] return; }
L_002FDB34:
    set32(c.r[4], ld32((c.r[16].w[0] + 8396u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_002FDB58; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 8540u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDB50u); set32(c.r[4], ld32((c.r[16].w[0] + 32u)));  if (depth < kMaxDepth) unit_0062(c, 196u, depth + 1u); else { c.pc = 0x0028A9C0u; return; } if (c.pc != 0x002FDB50u) [[unlikely]] return; }
L_002FDB50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[16].w[0] + 8476u));  if (t) { goto L_002FDB90; } }
L_002FDB58:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002FDB8C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 8540u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDB6Cu); set32(c.r[4], ld32((c.r[16].w[0] + 32u)));  if (depth < kMaxDepth) unit_0062(c, 202u, depth + 1u); else { c.pc = 0x0028AAF0u; return; } if (c.pc != 0x002FDB6Cu) [[unlikely]] return; }
L_002FDB6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FDB8C; } }
L_002FDB74:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002FDB8C; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8460u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FDB8C; } }
    st32((c.r[16].w[0] + 8536u), 0u);
    c.budget -= 1;
L_002FDB8C:
    c.f[0] = ld32((c.r[16].w[0] + 8476u));
    c.budget -= 1;
L_002FDB90:
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 248u), c.r[4].w[0]);  if (t) { goto L_002FDBAC; } }
L_002FDBA4:
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    st32((c.r[3].w[0] + 248u), 0u);
    c.budget -= 2;
L_002FDBAC:
    c.f[0] = ld32((c.r[16].w[0] + 8440u));
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    st32((c.r[3].w[0] + 244u), c.r[4].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8512u));
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    st32((c.r[3].w[0] + 252u), c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002FDBF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDC04u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_007F(c, 307u, depth + 1u); else { c.pc = 0x002FE470u; return; } if (c.pc != 0x002FDC04u) [[unlikely]] return; }
L_002FDC04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FDC1C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDC1Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FDC1Cu) [[unlikely]] return; }
L_002FDC1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002FDC30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDC44u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_007F(c, 307u, depth + 1u); else { c.pc = 0x002FE470u; return; } if (c.pc != 0x002FDC44u) [[unlikely]] return; }
L_002FDC44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FDC5C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDC5Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FDC5Cu) [[unlikely]] return; }
L_002FDC5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002FDC70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FDC80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 8406u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002FDCAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDCA4u);  if (depth < kMaxDepth) unit_007F(c, 269u, depth + 1u); else { c.pc = 0x002FE070u; return; } if (c.pc != 0x002FDCA4u) [[unlikely]] return; }
L_002FDCA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002FDF9C; } }
L_002FDCAC:
    set32(c.r[3], ld32((c.r[17].w[0] + 8368u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 1536u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 168u));
    c.r[2].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 16384ull;  if (t) { goto L_002FDD78; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 8412u)));
    set32(c.r[4], c.r[17].w[0] + 24u);
    set32(c.r[7], 0u - 1u);
    st32((c.r[17].w[0] + 8416u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 8368u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 8412u)));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDD00u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006F(c, 197u, depth + 1u); else { c.pc = 0x002BE130u; return; } if (c.pc != 0x002FDD00u) [[unlikely]] return; }
L_002FDD00:
    st32((c.r[17].w[0] + 8412u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FDD28; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 8412u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDD1Cu); set32(c.r[4], c.r[17].w[0] + 24u);  if (depth < kMaxDepth) unit_006F(c, 203u, depth + 1u); else { c.pc = 0x002BE2A0u; return; } if (c.pc != 0x002FDD1Cu) [[unlikely]] return; }
L_002FDD1C:
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDD28u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 428u, depth + 1u); else { c.pc = 0x00287590u; return; } if (c.pc != 0x002FDD28u) [[unlikely]] return; }
L_002FDD28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDD30u); set32(c.r[16], ld32((c.r[17].w[0] + 8412u)));  if (depth < kMaxDepth) unit_005B(c, 404u, depth + 1u); else { c.pc = 0x0026FB90u; return; } if (c.pc != 0x002FDD30u) [[unlikely]] return; }
L_002FDD30:
    c.r[1].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002FDD48; } }
    set32(c.r[2], c.r[16].w[0] << 7);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] + 44u);
    c.budget -= 3;
L_002FDD48:
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    st32((c.r[2].w[0] + 128u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDD5Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0062(c, 262u, depth + 1u); else { c.pc = 0x0028B370u; return; } if (c.pc != 0x002FDD5Cu) [[unlikely]] return; }
L_002FDD5C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDD68u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_007F(c, 286u, depth + 1u); else { c.pc = 0x002FE230u; return; } if (c.pc != 0x002FDD68u) [[unlikely]] return; }
L_002FDD68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDD70u); set32(c.r[4], 0u + 402u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x002FDD70u) [[unlikely]] return; }
L_002FDD70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FDF98; } }
L_002FDD78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FDE00; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 8412u)));
    set32(c.r[4], c.r[17].w[0] + 24u);
    set32(c.r[7], 0u + 1u);
    st32((c.r[17].w[0] + 8416u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 8368u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 8412u)));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDDA4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006F(c, 197u, depth + 1u); else { c.pc = 0x002BE130u; return; } if (c.pc != 0x002FDDA4u) [[unlikely]] return; }
L_002FDDA4:
    st32((c.r[17].w[0] + 8412u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 8412u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDDB4u); set32(c.r[4], c.r[17].w[0] + 24u);  if (depth < kMaxDepth) unit_006F(c, 203u, depth + 1u); else { c.pc = 0x002BE2A0u; return; } if (c.pc != 0x002FDDB4u) [[unlikely]] return; }
L_002FDDB4:
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDDC0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 428u, depth + 1u); else { c.pc = 0x00287590u; return; } if (c.pc != 0x002FDDC0u) [[unlikely]] return; }
L_002FDDC0:
    set32(c.r[3], ld32((c.r[17].w[0] + 8412u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + 44u);
    st32((c.r[2].w[0] + 128u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDDE4u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0062(c, 262u, depth + 1u); else { c.pc = 0x0028B370u; return; } if (c.pc != 0x002FDDE4u) [[unlikely]] return; }
L_002FDDE4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDDF0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_007F(c, 286u, depth + 1u); else { c.pc = 0x002FE230u; return; } if (c.pc != 0x002FDDF0u) [[unlikely]] return; }
L_002FDDF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDDF8u); set32(c.r[4], 0u + 402u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x002FDDF8u) [[unlikely]] return; }
L_002FDDF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FDF98; } }
L_002FDE00:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 4u));
    c.r[2].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 8192ull;  if (t) { goto L_002FDE38; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDE1Cu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_007F(c, 298u, depth + 1u); else { c.pc = 0x002FE330u; return; } if (c.pc != 0x002FDE1Cu) [[unlikely]] return; }
L_002FDE1C:
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDE28u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0062(c, 262u, depth + 1u); else { c.pc = 0x0028B370u; return; } if (c.pc != 0x002FDE28u) [[unlikely]] return; }
L_002FDE28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDE30u); set32(c.r[4], 0u + 402u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x002FDE30u) [[unlikely]] return; }
L_002FDE30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FDF98; } }
L_002FDE38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_002FDE64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDE48u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_007F(c, 298u, depth + 1u); else { c.pc = 0x002FE330u; return; } if (c.pc != 0x002FDE48u) [[unlikely]] return; }
L_002FDE48:
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDE54u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 262u, depth + 1u); else { c.pc = 0x0028B370u; return; } if (c.pc != 0x002FDE54u) [[unlikely]] return; }
L_002FDE54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDE5Cu); set32(c.r[4], 0u + 402u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x002FDE5Cu) [[unlikely]] return; }
L_002FDE5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FDF98; } }
L_002FDE64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDE6Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 314u, depth + 1u); else { c.pc = 0x0013F0C0u; return; } if (c.pc != 0x002FDE6Cu) [[unlikely]] return; }
L_002FDE6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002FDED0; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 8412u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDE80u); set32(c.r[4], c.r[17].w[0] + 24u);  if (depth < kMaxDepth) unit_006F(c, 203u, depth + 1u); else { c.pc = 0x002BE2A0u; return; } if (c.pc != 0x002FDE80u) [[unlikely]] return; }
L_002FDE80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDE88u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 110u, depth + 1u); else { c.pc = 0x0012D160u; return; } if (c.pc != 0x002FDE88u) [[unlikely]] return; }
L_002FDE88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 403u);  if (t) { goto L_002FDEA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDE98u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x002FDE98u) [[unlikely]] return; }
L_002FDE98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FDF98; } }
L_002FDEA0:
    set32(c.r[2], 0u + 6u);
    st32((c.r[17].w[0] + 8396u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDEB4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0062(c, 251u, depth + 1u); else { c.pc = 0x0028B190u; return; } if (c.pc != 0x002FDEB4u) [[unlikely]] return; }
L_002FDEB4:
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDEC0u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_0061(c, 429u, depth + 1u); else { c.pc = 0x002875A0u; return; } if (c.pc != 0x002FDEC0u) [[unlikely]] return; }
L_002FDEC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDEC8u); set32(c.r[4], 0u + 400u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x002FDEC8u) [[unlikely]] return; }
L_002FDEC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FDF98; } }
L_002FDED0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDED8u);  if (depth < kMaxDepth) unit_000F(c, 315u, depth + 1u); else { c.pc = 0x0013F0D0u; return; } if (c.pc != 0x002FDED8u) [[unlikely]] return; }
L_002FDED8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002FDF00; } }
    set32(c.r[2], 0u + 7u);
    st32((c.r[17].w[0] + 8396u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDEF0u); set32(c.r[4], ld32((c.r[17].w[0] + 32u)));  if (depth < kMaxDepth) unit_0062(c, 189u, depth + 1u); else { c.pc = 0x0028A8D0u; return; } if (c.pc != 0x002FDEF0u) [[unlikely]] return; }
L_002FDEF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDEF8u); set32(c.r[4], 0u + 401u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x002FDEF8u) [[unlikely]] return; }
L_002FDEF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FDF98; } }
L_002FDF00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDF08u);  if (depth < kMaxDepth) unit_000F(c, 318u, depth + 1u); else { c.pc = 0x0013F100u; return; } if (c.pc != 0x002FDF08u) [[unlikely]] return; }
L_002FDF08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FDF58; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDF1Cu); st8((c.r[17].w[0] + 8406u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0010(c, 15u, depth + 1u); else { c.pc = 0x00140210u; return; } if (c.pc != 0x002FDF1Cu) [[unlikely]] return; }
L_002FDF1C:
    set32(c.r[5], 0u + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDF28u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 228u, depth + 1u); else { c.pc = 0x0011B928u; return; } if (c.pc != 0x002FDF28u) [[unlikely]] return; }
L_002FDF28:
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(40ll);
    set32(c.r[3], 0u + 1u);
    st16((c.r[17].w[0] + 8408u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    st8((c.r[2].w[0] + 240u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDF48u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0062(c, 172u, depth + 1u); else { c.pc = 0x0028A5C0u; return; } if (c.pc != 0x002FDF48u) [[unlikely]] return; }
L_002FDF48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDF50u); set32(c.r[4], 0u + 400u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x002FDF50u) [[unlikely]] return; }
L_002FDF50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FDF98; } }
L_002FDF58:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 4u));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FDF98; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 8396u)));
    set32(c.r[3], 0u + 3u);
    set32(c.r[2], 0u + 10u);
    st32((c.r[17].w[0] + 8400u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 8396u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 8420u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDF88u); set32(c.r[4], ld32((c.r[17].w[0] + 32u)));  if (depth < kMaxDepth) unit_0062(c, 243u, depth + 1u); else { c.pc = 0x0028B090u; return; } if (c.pc != 0x002FDF88u) [[unlikely]] return; }
L_002FDF88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDF90u); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x002FDF90u) [[unlikely]] return; }
L_002FDF90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDF98u); set32(c.r[4], 0u + 400u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x002FDF98u) [[unlikely]] return; }
L_002FDF98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002FDF9C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002FDFB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8368u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[1].w[0] - 1536u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 168u));
    c.r[2].d[0] = c.r[3].d[0] & 8192ull;
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 32768ull;  if (t) { goto L_002FE008; } }
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE000u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_007F(c, 298u, depth + 1u); else { c.pc = 0x002FE330u; return; } if (c.pc != 0x002FE000u) [[unlikely]] return; }
L_002FE000:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002FE064; } }
L_002FE008:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FE028; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE020u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_007F(c, 298u, depth + 1u); else { c.pc = 0x002FE330u; return; } if (c.pc != 0x002FE020u) [[unlikely]] return; }
L_002FE020:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FE060; } }
L_002FE028:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE030u);  if (depth < kMaxDepth) unit_000F(c, 315u, depth + 1u); else { c.pc = 0x0013F0D0u; return; } if (c.pc != 0x002FE030u) [[unlikely]] return; }
L_002FE030:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FE060; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 8400u)));
    set32(c.r[2], 0u + 10u);
    st32((c.r[16].w[0] + 8396u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 8420u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE050u); set32(c.r[4], ld32((c.r[16].w[0] + 32u)));  if (depth < kMaxDepth) unit_0062(c, 243u, depth + 1u); else { c.pc = 0x0028B090u; return; } if (c.pc != 0x002FE050u) [[unlikely]] return; }
L_002FE050:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE058u); set32(c.r[4], 0u + 401u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x002FE058u) [[unlikely]] return; }
L_002FE058:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE060u); set32(c.r[4], 0u + 6u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x002FE060u) [[unlikely]] return; }
L_002FE060:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002FE064:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002FE070:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 8368u)));
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[1].w[0] - 1536u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE0ACu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 318u, depth + 1u); else { c.pc = 0x0013F100u; return; } if (c.pc != 0x002FE0ACu) [[unlikely]] return; }
L_002FE0AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FE0E8; } }
    st16((c.r[17].w[0] + 8408u), static_cast<std::uint16_t>(0u));
    set32(c.r[5], ld32((c.r[17].w[0] + 8412u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE0C4u); set32(c.r[4], c.r[17].w[0] + 24u);  if (depth < kMaxDepth) unit_006F(c, 203u, depth + 1u); else { c.pc = 0x002BE2A0u; return; } if (c.pc != 0x002FE0C4u) [[unlikely]] return; }
L_002FE0C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE0CCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 110u, depth + 1u); else { c.pc = 0x0012D160u; return; } if (c.pc != 0x002FE0CCu) [[unlikely]] return; }
L_002FE0CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FE134; } }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 8408u));
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 8408u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002FE134; } }
L_002FE0E8:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 8408u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[17].w[0] + 8408u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[17].w[0] + 8408u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FE130; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 8412u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE10Cu); set32(c.r[4], c.r[17].w[0] + 24u);  if (depth < kMaxDepth) unit_006F(c, 203u, depth + 1u); else { c.pc = 0x002BE2A0u; return; } if (c.pc != 0x002FE10Cu) [[unlikely]] return; }
L_002FE10C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE114u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 110u, depth + 1u); else { c.pc = 0x0012D160u; return; } if (c.pc != 0x002FE114u) [[unlikely]] return; }
L_002FE114:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FE134; } }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 8408u));
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 8408u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002FE134; } }
L_002FE130:
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002FE134:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002FE198; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 8412u)));
    set32(c.r[4], c.r[17].w[0] + 24u);
    set32(c.r[7], 0u + 1u);
    st32((c.r[17].w[0] + 8416u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 8368u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 8412u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE160u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006F(c, 197u, depth + 1u); else { c.pc = 0x002BE130u; return; } if (c.pc != 0x002FE160u) [[unlikely]] return; }
L_002FE160:
    st32((c.r[17].w[0] + 8412u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 8412u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE170u); set32(c.r[4], c.r[17].w[0] + 24u);  if (depth < kMaxDepth) unit_006F(c, 203u, depth + 1u); else { c.pc = 0x002BE2A0u; return; } if (c.pc != 0x002FE170u) [[unlikely]] return; }
L_002FE170:
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE17Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 428u, depth + 1u); else { c.pc = 0x00287590u; return; } if (c.pc != 0x002FE17Cu) [[unlikely]] return; }
L_002FE17C:
    set32(c.r[4], ld32((c.r[17].w[0] + 8412u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[4], c.r[4].w[0] << 7);
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] + 44u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 128u), c.r[4].w[0]);  if (t) { goto L_002FE1A8; } }
L_002FE198:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE1A0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_007F(c, 286u, depth + 1u); else { c.pc = 0x002FE230u; return; } if (c.pc != 0x002FE1A0u) [[unlikely]] return; }
L_002FE1A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE1A8u); set32(c.r[4], 0u + 400u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x002FE1A8u) [[unlikely]] return; }
L_002FE1A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002FE1C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 9760u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], c.r[29].w[0] + 32u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 8464u);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE1F4u); st64((c.r[5].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x002FE1F4u) [[unlikely]] return; }
L_002FE1F4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE200u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_007F(c, 286u, depth + 1u); else { c.pc = 0x002FE230u; return; } if (c.pc != 0x002FE200u) [[unlikely]] return; }
L_002FE200:
    set32(c.r[5], 0u + 1u);
    st32((c.r[16].w[0] + 8396u), c.r[5].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE210u); set32(c.r[4], ld32((c.r[16].w[0] + 32u)));  if (depth < kMaxDepth) unit_0061(c, 429u, depth + 1u); else { c.pc = 0x002875A0u; return; } if (c.pc != 0x002FE210u) [[unlikely]] return; }
L_002FE210:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE218u); set32(c.r[4], ld32((c.r[16].w[0] + 32u)));  if (depth < kMaxDepth) unit_0062(c, 184u, depth + 1u); else { c.pc = 0x0028A7F0u; return; } if (c.pc != 0x002FE218u) [[unlikely]] return; }
L_002FE218:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE220u); set32(c.r[4], 0u + 6u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x002FE220u) [[unlikely]] return; }
L_002FE220:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002FE230:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE250u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0053(c, 78u, depth + 1u); else { c.pc = 0x0024C7C0u; return; } if (c.pc != 0x002FE250u) [[unlikely]] return; }
L_002FE250:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002FE318; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 8416u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE268u); set32(c.r[4], c.r[18].w[0] + 24u);  if (depth < kMaxDepth) unit_006F(c, 203u, depth + 1u); else { c.pc = 0x002BE2A0u; return; } if (c.pc != 0x002FE268u) [[unlikely]] return; }
L_002FE268:
    set32(c.r[6], ld32((c.r[18].w[0] + 8424u)));
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE27Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0053(c, 87u, depth + 1u); else { c.pc = 0x0024C8E0u; return; } if (c.pc != 0x002FE27Cu) [[unlikely]] return; }
L_002FE27C:
    set32(c.r[5], ld32((c.r[18].w[0] + 8412u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE288u); set32(c.r[4], c.r[18].w[0] + 24u);  if (depth < kMaxDepth) unit_006F(c, 203u, depth + 1u); else { c.pc = 0x002BE2A0u; return; } if (c.pc != 0x002FE288u) [[unlikely]] return; }
L_002FE288:
    set32(c.r[3], ld32((c.r[18].w[0] + 8424u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE2A0u); set32(c.r[6], c.r[3].w[0] + 1u);  if (depth < kMaxDepth) unit_0053(c, 87u, depth + 1u); else { c.pc = 0x0024C8E0u; return; } if (c.pc != 0x002FE2A0u) [[unlikely]] return; }
L_002FE2A0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; st8((c.r[18].w[0] + 8405u), static_cast<std::uint8_t>(c.r[17].w[0]));  if (t) { goto L_002FE310; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE2B0u);  if (depth < kMaxDepth) unit_0053(c, 78u, depth + 1u); else { c.pc = 0x0024C7C0u; return; } if (c.pc != 0x002FE2B0u) [[unlikely]] return; }
L_002FE2B0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002FE318; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE2C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0053(c, 90u, depth + 1u); else { c.pc = 0x0024C940u; return; } if (c.pc != 0x002FE2C4u) [[unlikely]] return; }
L_002FE2C4:
    set32(c.r[6], ld32((c.r[18].w[0] + 8424u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE2D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0053(c, 93u, depth + 1u); else { c.pc = 0x0024C9A0u; return; } if (c.pc != 0x002FE2D4u) [[unlikely]] return; }
L_002FE2D4:
    set32(c.r[4], ld32((c.r[18].w[0] + 32u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE2E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0062(c, 163u, depth + 1u); else { c.pc = 0x0028A480u; return; } if (c.pc != 0x002FE2E4u) [[unlikely]] return; }
L_002FE2E4:
    set32(c.r[2], ld32((c.r[18].w[0] + 8424u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE2F8u); set32(c.r[6], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0053(c, 93u, depth + 1u); else { c.pc = 0x0024C9A0u; return; } if (c.pc != 0x002FE2F8u) [[unlikely]] return; }
L_002FE2F8:
    set32(c.r[4], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE308u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 163u, depth + 1u); else { c.pc = 0x0028A480u; return; } if (c.pc != 0x002FE308u) [[unlikely]] return; }
L_002FE308:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_002FE31C; } }
L_002FE310:
    set32(c.r[3], 0u + 1u);
    st8((c.r[18].w[0] + 8407u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002FE318:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002FE31C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002FE330:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE35Cu); set32(c.r[5], 0u + 24u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x002FE35Cu) [[unlikely]] return; }
L_002FE35C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE368u); set32(c.r[5], 0u + 24u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x002FE368u) [[unlikely]] return; }
L_002FE368:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_002FE3E0; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0; c.r[3].sd[0] = static_cast<std::int32_t>(0xC38C0000u);  if (t) { goto L_002FE39C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x438C0000u);
    set32(c.r[2], 0u + 10u);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 8428u);
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE394u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x002FE394u) [[unlikely]] return; }
L_002FE394:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);  if (t) { goto L_002FE3B8; } }
L_002FE39C:
    set32(c.r[2], 0u + 10u);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 8428u);
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE3B4u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x002FE3B4u) [[unlikely]] return; }
L_002FE3B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.budget -= 1;
L_002FE3B8:
    set32(c.r[4], c.r[17].w[0] + 8464u);
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[2], 0u + 3u);
    st32((c.r[29].w[0] + 72u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE3D4u); st32((c.r[29].w[0] + 76u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x002FE3D4u) [[unlikely]] return; }
L_002FE3D4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8536u), c.r[3].w[0]);  if (t) { goto L_002FE450; } }
L_002FE3E0:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0; st32((c.r[17].w[0] + 8536u), c.r[2].w[0]);  if (t) { goto L_002FE40C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC38C0000u);
    set32(c.r[2], 0u + 10u);
    st32((c.r[29].w[0] + 96u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 8428u);
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE404u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x002FE404u) [[unlikely]] return; }
L_002FE404:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);  if (t) { goto L_002FE42C; } }
L_002FE40C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x438C0000u);
    set32(c.r[2], 0u + 10u);
    st32((c.r[29].w[0] + 96u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 8428u);
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE428u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x002FE428u) [[unlikely]] return; }
L_002FE428:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.budget -= 1;
L_002FE42C:
    set32(c.r[4], c.r[17].w[0] + 8464u);
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[2], 0u + 10u);
    st32((c.r[29].w[0] + 64u), 0u);
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[2], 0u + 6u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE450u); st32((c.r[29].w[0] + 80u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x002FE450u) [[unlikely]] return; }
L_002FE450:
    st32((c.r[17].w[0] + 8540u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002FE470:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE480u); set32(c.r[4], ld32((c.r[4].w[0] + 32u)));  if (depth < kMaxDepth) unit_0062(c, 208u, depth + 1u); else { c.pc = 0x0028ABE0u; return; } if (c.pc != 0x002FE480u) [[unlikely]] return; }
L_002FE480:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002FE4A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE4C4u); set32(c.r[4], c.r[16].w[0] + 24u);  if (depth < kMaxDepth) unit_006F(c, 204u, depth + 1u); else { c.pc = 0x002BE2C0u; return; } if (c.pc != 0x002FE4C4u) [[unlikely]] return; }
L_002FE4C4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0] + 8412u), c.r[2].w[0]);  if (t) { goto L_002FE524; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8368u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 8412u)));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE4E0u); set32(c.r[4], c.r[16].w[0] + 24u);  if (depth < kMaxDepth) unit_006F(c, 192u, depth + 1u); else { c.pc = 0x002BE060u; return; } if (c.pc != 0x002FE4E0u) [[unlikely]] return; }
L_002FE4E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002FE514; } }
L_002FE4E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE4F0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 203u, depth + 1u); else { c.pc = 0x002BE2A0u; return; } if (c.pc != 0x002FE4F0u) [[unlikely]] return; }
L_002FE4F0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE4FCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 110u, depth + 1u); else { c.pc = 0x0012D160u; return; } if (c.pc != 0x002FE4FCu) [[unlikely]] return; }
L_002FE4FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002FE510; } }
    set32(c.r[4], c.r[16].w[0] + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE510u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006F(c, 201u, depth + 1u); else { c.pc = 0x002BE260u; return; } if (c.pc != 0x002FE510u) [[unlikely]] return; }
L_002FE510:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002FE514:
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 24u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FE4E8u | kUnwind; return; } goto L_002FE4E8; } }
L_002FE524:
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FE560; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 8412u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE53Cu); set32(c.r[4], c.r[16].w[0] + 24u);  if (depth < kMaxDepth) unit_006F(c, 203u, depth + 1u); else { c.pc = 0x002BE2A0u; return; } if (c.pc != 0x002FE53Cu) [[unlikely]] return; }
L_002FE53C:
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE548u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 428u, depth + 1u); else { c.pc = 0x00287590u; return; } if (c.pc != 0x002FE548u) [[unlikely]] return; }
L_002FE548:
    set32(c.r[4], ld32((c.r[16].w[0] + 8412u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[4], c.r[4].w[0] << 7);
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] + 44u);
    st32((c.r[3].w[0] + 128u), c.r[4].w[0]);
    c.budget -= 6;
L_002FE560:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002FE580:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE5A0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0053(c, 78u, depth + 1u); else { c.pc = 0x0024C7C0u; return; } if (c.pc != 0x002FE5A0u) [[unlikely]] return; }
L_002FE5A0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002FE5F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE5B4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 90u, depth + 1u); else { c.pc = 0x0024C940u; return; } if (c.pc != 0x002FE5B4u) [[unlikely]] return; }
L_002FE5B4:
    set32(c.r[6], ld32((c.r[18].w[0] + 8424u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE5C4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 93u, depth + 1u); else { c.pc = 0x0024C9A0u; return; } if (c.pc != 0x002FE5C4u) [[unlikely]] return; }
L_002FE5C4:
    set32(c.r[4], ld32((c.r[18].w[0] + 32u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE5D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0062(c, 163u, depth + 1u); else { c.pc = 0x0028A480u; return; } if (c.pc != 0x002FE5D4u) [[unlikely]] return; }
L_002FE5D4:
    set32(c.r[2], ld32((c.r[18].w[0] + 8424u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE5E8u); set32(c.r[6], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0053(c, 93u, depth + 1u); else { c.pc = 0x0024C9A0u; return; } if (c.pc != 0x002FE5E8u) [[unlikely]] return; }
L_002FE5E8:
    set32(c.r[4], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE5F8u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 163u, depth + 1u); else { c.pc = 0x0028A480u; return; } if (c.pc != 0x002FE5F8u) [[unlikely]] return; }
L_002FE5F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002FE610:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002FE580u | kUnwind; return; } goto L_002FE580; }
L_002FE620:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE634u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 117u, depth + 1u); else { c.pc = 0x00198E50u; return; } if (c.pc != 0x002FE634u) [[unlikely]] return; }
L_002FE634:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 17264u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 128u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 132u), 0u);
    st32((c.r[16].w[0] + 136u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002FE670:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002FE70C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 17264u);
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 128u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FE6BC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FE6BC; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE6BCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FE6BCu) [[unlikely]] return; }
L_002FE6BC:
    st32((c.r[17].w[0] + 128u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 132u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FE6E4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FE6E4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE6E4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FE6E4u) [[unlikely]] return; }
L_002FE6E4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE6F4u); st32((c.r[17].w[0] + 132u), 0u);  if (depth < kMaxDepth) unit_0026(c, 119u, depth + 1u); else { c.pc = 0x00198EB0u; return; } if (c.pc != 0x002FE6F4u) [[unlikely]] return; }
L_002FE6F4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002FE710; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE70Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002FE70Cu) [[unlikely]] return; }
L_002FE70C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002FE710:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002FE730:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 72u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE74Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FE74Cu) [[unlikely]] return; }
L_002FE74C:
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE760u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FE760u) [[unlikely]] return; }
L_002FE760:
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 76u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE774u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FE774u) [[unlikely]] return; }
L_002FE774:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FE7A4; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 76u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE78Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FE78Cu) [[unlikely]] return; }
L_002FE78C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], c.r[2].w[0] - 2000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26176u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE7A0u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 252u, depth + 1u); else { c.pc = 0x00191E60u; return; } if (c.pc != 0x002FE7A0u) [[unlikely]] return; }
L_002FE7A0:
    st32((c.r[16].w[0] + 128u), c.r[2].w[0]);
    c.budget -= 1;
L_002FE7A4:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_002FE7C0; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE7BCu); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 303u, depth + 1u); else { c.pc = 0x0026E9C0u; return; } if (c.pc != 0x002FE7BCu) [[unlikely]] return; }
L_002FE7BC:
    st32((c.r[16].w[0] + 132u), c.r[2].w[0]);
    c.budget -= 1;
L_002FE7C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002FE7D0:
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FE7F0:
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FE810:
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FE830:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 128u)));  c.pc = t; return; }
L_002FE840:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 132u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002FE894; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE870u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FE870u) [[unlikely]] return; }
L_002FE870:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FE894; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE888u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FE888u) [[unlikely]] return; }
L_002FE888:
    set32(c.r[4], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE894u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x002FE894u) [[unlikely]] return; }
L_002FE894:
    set32(c.r[2], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002FE918; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 164u)));
    set32(c.r[2], 0u + 660u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002FE8B4; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002FE8B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE8BCu); set32(c.r[4], ld32((c.r[16].w[0] + 116u)));  if (depth < kMaxDepth) unit_0034(c, 137u, depth + 1u); else { c.pc = 0x001D15B0u; return; } if (c.pc != 0x002FE8BCu) [[unlikely]] return; }
L_002FE8BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FE8C8; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002FE8C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE8D0u); set32(c.r[4], ld32((c.r[16].w[0] + 116u)));  if (depth < kMaxDepth) unit_0034(c, 141u, depth + 1u); else { c.pc = 0x001D1670u; return; } if (c.pc != 0x002FE8D0u) [[unlikely]] return; }
L_002FE8D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FE8DC; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002FE8DC:
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE8ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FE8ECu) [[unlikely]] return; }
L_002FE8EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FE918; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002FE918; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE90Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FE90Cu) [[unlikely]] return; }
L_002FE90C:
    set32(c.r[4], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE918u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x002FE918u) [[unlikely]] return; }
L_002FE918:
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 96u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE928u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FE928u) [[unlikely]] return; }
L_002FE928:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002FE980; } }
L_002FE934:
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 88u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE948u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FE948u) [[unlikely]] return; }
L_002FE948:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FE97C; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 88u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE964u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FE964u) [[unlikely]] return; }
L_002FE964:
    set32(c.r[5], ld32((c.r[16].w[0] + 136u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE97Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0066(c, 208u, depth + 1u); else { c.pc = 0x0029A200u; return; } if (c.pc != 0x002FE97Cu) [[unlikely]] return; }
L_002FE97C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002FE980:
    c.r[3].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FE934u | kUnwind; return; } goto L_002FE934; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002FE9B0:
    set32(c.r[3], ld32((c.r[4].w[0] + 68u)));
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FE9D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 2u);  c.pc = t; return; }
L_002FE9E0:
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FEA00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEA20u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FEA20u) [[unlikely]] return; }
L_002FEA20:
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 92u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEA30u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FEA30u) [[unlikely]] return; }
L_002FEA30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FEA3C; } }
    st8((c.r[16].w[0] + 112u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002FEA3C:
    set32(c.r[3], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FEA94; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0400000u);
    st32((c.r[29].w[0] + 48u), 0u);
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 52u), 0u);
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.f[12] = ld32((c.r[16].w[0] + 36u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEA6Cu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0011(c, 21u, depth + 1u); else { c.pc = 0x001444F0u; return; } if (c.pc != 0x002FEA6Cu) [[unlikely]] return; }
L_002FEA6C:
    set32(c.r[3], c.r[29].w[0] + 48u);
    set32(c.r[2], c.r[16].w[0] + 16u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[4], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEA94u); set32(c.r[6], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0042(c, 78u, depth + 1u); else { c.pc = 0x00209290u; return; } if (c.pc != 0x002FEA94u) [[unlikely]] return; }
L_002FEA94:
    set32(c.r[4], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FEAE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEAA8u);  if (depth < kMaxDepth) unit_005B(c, 349u, depth + 1u); else { c.pc = 0x0026EE80u; return; } if (c.pc != 0x002FEAA8u) [[unlikely]] return; }
L_002FEAA8:
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEAB8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FEAB8u) [[unlikely]] return; }
L_002FEAB8:
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEACCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FEACCu) [[unlikely]] return; }
L_002FEACC:
    set32(c.r[3], ld32((c.r[16].w[0] + 132u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[3].w[0] + 52u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEAE4u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 208u, depth + 1u); else { c.pc = 0x001B1B70u; return; } if (c.pc != 0x002FEAE4u) [[unlikely]] return; }
L_002FEAE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002FEB00:
    set32(c.r[3], ld32((c.r[4].w[0] + 68u)));
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[3].w[0] + 28u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_002FEB1C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002FEB1C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FEB30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 132u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_002FEC14; } }
    set32(c.r[12], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002FEBFC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x50000000u);
    set32(c.r[11], ld32((c.r[1].w[0] + 1380u)));
    c.r[10].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[7].d[0] = c.r[5].d[0] | 2ull;
    c.r[9].d[0] = c.r[2].d[0] | 3ull;
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x11000000u);
    c.r[2].d[0] = 0ull | 32769ull;
    set32(c.r[5], 0u + 14u);
    c.r[6].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[3], 0u + 68u);
    set32(c.r[2], 0u + 66u);
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
    st64((c.r[10].w[0] + 48u), c.r[3].d[0]);
    st64((c.r[10].w[0] + 56u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1380u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[2].w[0] + 64u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1380u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[2].w[0] - 4u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1364u), c.r[2].w[0]);
    c.budget -= 39;
L_002FEBFC:
    set32(c.r[2], ld32((c.r[4].w[0] + 132u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEC14u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FEC14u) [[unlikely]] return; }
L_002FEC14:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002FEC20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEC34u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_007F(c, 326u, depth + 1u); else { c.pc = 0x002FE620u; return; } if (c.pc != 0x002FEC34u) [[unlikely]] return; }
L_002FEC34:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 17152u);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 144u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002FEC60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002FECA8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 17152u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEC90u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_007F(c, 328u, depth + 1u); else { c.pc = 0x002FE670u; return; } if (c.pc != 0x002FEC90u) [[unlikely]] return; }
L_002FEC90:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002FECAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FECA8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002FECA8u) [[unlikely]] return; }
L_002FECA8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002FECAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002FECC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 112u));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002FED74; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FED7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FECF4u);  if (depth < kMaxDepth) unit_005B(c, 361u, depth + 1u); else { c.pc = 0x0026F2F0u; return; } if (c.pc != 0x002FECF4u) [[unlikely]] return; }
L_002FECF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FED28; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[17], ld32((c.r[16].w[0] + 144u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 104u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FED10u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FED10u) [[unlikely]] return; }
L_002FED10:
    c.r[1].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002FED28; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 144u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 144u), c.r[2].w[0]);
    c.budget -= 3;
L_002FED28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FED30u); set32(c.r[4], ld32((c.r[16].w[0] + 132u)));  if (depth < kMaxDepth) unit_005B(c, 349u, depth + 1u); else { c.pc = 0x0026EE80u; return; } if (c.pc != 0x002FED30u) [[unlikely]] return; }
L_002FED30:
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FED40u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FED40u) [[unlikely]] return; }
L_002FED40:
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FED54u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FED54u) [[unlikely]] return; }
L_002FED54:
    set32(c.r[3], ld32((c.r[16].w[0] + 132u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[3].w[0] + 52u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FED6Cu); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 208u, depth + 1u); else { c.pc = 0x001B1B70u; return; } if (c.pc != 0x002FED6Cu) [[unlikely]] return; }
L_002FED6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002FED80; } }
L_002FED74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FED7Cu);  if (depth < kMaxDepth) unit_007F(c, 361u, depth + 1u); else { c.pc = 0x002FEA00u; return; } if (c.pc != 0x002FED7Cu) [[unlikely]] return; }
L_002FED7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002FED80:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002FED90:
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FEDB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 144u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FEDCC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEDCCu);  if (depth < kMaxDepth) unit_007F(c, 371u, depth + 1u); else { c.pc = 0x002FEB30u; return; } if (c.pc != 0x002FEDCCu) [[unlikely]] return; }
L_002FEDCC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002FEDE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 144u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002FEEA0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FEEA0; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 104u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEE14u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FEE14u) [[unlikely]] return; }
L_002FEE14:
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_002FEE3C; } }
    c.f[12] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FEE4C; } }
L_002FEE3C:
    c.f[0] = ld32((c.r[16].w[0] + 144u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    fpu_div(c, 12u, c.f[0], c.f[1]);
    c.budget -= 4;
L_002FEE4C:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002FEEA0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002FEE7C; } }
    c.f[12] = c.f[0];
    c.budget -= 1;
L_002FEE7C:
    set32(c.r[2], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEE88u); set32(c.r[4], ld32((c.r[2].w[0] + 52u)));  if (depth < kMaxDepth) unit_0015(c, 85u, depth + 1u); else { c.pc = 0x00156E00u; return; } if (c.pc != 0x002FEE88u) [[unlikely]] return; }
L_002FEE88:
    set32(c.r[2], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEEA0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FEEA0u) [[unlikely]] return; }
L_002FEEA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002FEEB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEEC4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_007F(c, 326u, depth + 1u); else { c.pc = 0x002FE620u; return; } if (c.pc != 0x002FEEC4u) [[unlikely]] return; }
L_002FEEC4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 17024u);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002FEEF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002FEF38; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 17024u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEF20u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_007F(c, 328u, depth + 1u); else { c.pc = 0x002FE670u; return; } if (c.pc != 0x002FEF20u) [[unlikely]] return; }
L_002FEF20:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002FEF3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEF38u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002FEF38u) [[unlikely]] return; }
L_002FEF38:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002FEF3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002FEF50:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 112u));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002FEF88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEF80u);  if (depth < kMaxDepth) unit_007F(c, 361u, depth + 1u); else { c.pc = 0x002FEA00u; return; } if (c.pc != 0x002FEF80u) [[unlikely]] return; }
L_002FEF80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_002FF178; } }
L_002FEF88:
    set32(c.r[4], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FF174; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEF9Cu);  if (depth < kMaxDepth) unit_005B(c, 349u, depth + 1u); else { c.pc = 0x0026EE80u; return; } if (c.pc != 0x002FEF9Cu) [[unlikely]] return; }
L_002FEF9C:
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEFACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FEFACu) [[unlikely]] return; }
L_002FEFAC:
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEFC0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FEFC0u) [[unlikely]] return; }
L_002FEFC0:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEFD8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 208u, depth + 1u); else { c.pc = 0x001B1B70u; return; } if (c.pc != 0x002FEFD8u) [[unlikely]] return; }
L_002FEFD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEFE0u); set32(c.r[4], ld32((c.r[16].w[0] + 132u)));  if (depth < kMaxDepth) unit_005B(c, 361u, depth + 1u); else { c.pc = 0x0026F2F0u; return; } if (c.pc != 0x002FEFE0u) [[unlikely]] return; }
L_002FEFE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FF174; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEFF8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 207u, depth + 1u); else { c.pc = 0x001B1B60u; return; } if (c.pc != 0x002FEFF8u) [[unlikely]] return; }
L_002FEFF8:
    set32(c.r[2], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF010u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FF010u) [[unlikely]] return; }
L_002FF010:
    set32(c.r[6], c.r[2].w[0] - 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF02Cu); set32(c.r[5], c.r[29].w[0] + 112u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FF02Cu) [[unlikely]] return; }
L_002FF02C:
    set32(c.r[2], c.r[29].w[0] + 160u);
    set32(c.r[3], c.r[29].w[0] + 96u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 108u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF04Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FF04Cu) [[unlikely]] return; }
L_002FF04C:
    c.f[1] = ld32((c.r[29].w[0] + 96u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 112u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF06Cu); set32(c.r[18], c.r[29].w[0] + 100u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FF06Cu) [[unlikely]] return; }
L_002FF06C:
    c.f[1] = ld32((c.r[18].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[18].w[0]), c.f[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 116u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF08Cu); set32(c.r[19], c.r[29].w[0] + 104u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FF08Cu) [[unlikely]] return; }
L_002FF08C:
    c.f[1] = ld32((c.r[19].w[0]));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[19].w[0]), c.f[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 120u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF0A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FF0A8u) [[unlikely]] return; }
L_002FF0A8:
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    c.f[20] = c.f[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 124u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF0BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FF0BCu) [[unlikely]] return; }
L_002FF0BC:
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 104u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF0D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FF0D0u) [[unlikely]] return; }
L_002FF0D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43340000u);
    c.f[1] = ld32((c.r[1].w[0] - 21936u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[15] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    c.f[0] = c.r[3].w[0];
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.f[13] = ld32((c.r[18].w[0]));
    c.f[14] = ld32((c.r[19].w[0]));
    c.f[12] = ld32((c.r[29].w[0] + 96u));
    c.f[1] = fp::mul(c.f[1], c.f[20]);
    fpu_div(c, 16u, c.f[1], c.f[0]);
    c.f[17] = c.f[15];
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF118u);  if (depth < kMaxDepth) unit_003E(c, 165u, depth + 1u); else { c.pc = 0x001F9D70u; return; } if (c.pc != 0x002FF118u) [[unlikely]] return; }
L_002FF118:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002FF128; } }
    set32(c.r[2], c.r[2].w[0] + 436u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_002FF128:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4C490000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF134u); c.r[5].d[0] = c.r[2].d[0] | 18248ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x002FF134u) [[unlikely]] return; }
L_002FF134:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_002FF144; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_002FF148; } }
L_002FF144:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002FF148:
    st32((c.r[3].w[0] + 164u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FF170; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FF170; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF170u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FF170u) [[unlikely]] return; }
L_002FF170:
    st32((c.r[16].w[0] + 132u), 0u);
    c.budget -= 1;
L_002FF174:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_002FF178:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_002FF1A0:
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = ld32((c.r[2].w[0] + 44u));  c.pc = t; return; }
L_002FF1B0:
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FF1D0:
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.f[0] = ld32((c.r[2].w[0] + 48u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FF1F0:
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = ld32((c.r[2].w[0] + 40u));  c.pc = t; return; }
L_002FF200:
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = ld32((c.r[2].w[0] + 36u));  c.pc = t; return; }
L_002FF210:
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = ld32((c.r[2].w[0] + 32u));  c.pc = t; return; }
L_002FF220:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF234u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_007F(c, 326u, depth + 1u); else { c.pc = 0x002FE620u; return; } if (c.pc != 0x002FF234u) [[unlikely]] return; }
L_002FF234:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 16912u);
    set32(c.r[6], c.r[29].w[0] + 44u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[7], c.r[29].w[0] + 40u);
    st32((c.r[29].w[0] + 40u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[2], ld32((c.r[1].w[0] + 26176u)));
    c.f[0] = ld32((c.r[3].w[0] + 16u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF26Cu); set32(c.r[4], c.r[2].w[0] + 2020u);  if (depth < kMaxDepth) unit_002C(c, 187u, depth + 1u); else { c.pc = 0x001B1880u; return; } if (c.pc != 0x002FF26Cu) [[unlikely]] return; }
L_002FF26C:
    set32(c.r[2], ld32((c.r[29].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[2].w[0] + 4u);  if (t) { goto L_002FF280; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF280u); set32(c.r[4], c.r[16].w[0] + 144u);  if (depth < kMaxDepth) unit_0066(c, 263u, depth + 1u); else { c.pc = 0x0029AB70u; return; } if (c.pc != 0x002FF280u) [[unlikely]] return; }
L_002FF280:
    st32((c.r[16].w[0] + 192u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 196u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002FF2A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002FF2E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 16912u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF2D0u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_007F(c, 328u, depth + 1u); else { c.pc = 0x002FE670u; return; } if (c.pc != 0x002FF2D0u) [[unlikely]] return; }
L_002FF2D0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002FF2EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF2E8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002FF2E8u) [[unlikely]] return; }
L_002FF2E8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002FF2EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002FF300:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF314u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_007F(c, 333u, depth + 1u); else { c.pc = 0x002FE730u; return; } if (c.pc != 0x002FF314u) [[unlikely]] return; }
L_002FF314:
    set32(c.r[4], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FF344; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[3].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[0] = fp::cvt_w_s(c.f[1]);  if (t) { goto L_002FF344; } }
    set32(c.r[5], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF344u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x002FF344u) [[unlikely]] return; }
L_002FF344:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002FF360:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF378u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_007F(c, 344u, depth + 1u); else { c.pc = 0x002FE840u; return; } if (c.pc != 0x002FF378u) [[unlikely]] return; }
L_002FF378:
    set32(c.r[4], ld32((c.r[17].w[0] + 184u)));
    c.f[12] = ld32((c.r[17].w[0] + 160u));
    c.f[13] = ld32((c.r[17].w[0] + 164u));
    set32(c.r[6], ld32((c.r[17].w[0] + 144u)));
    c.f[14] = ld32((c.r[17].w[0] + 168u));
    c.f[15] = ld32((c.r[17].w[0] + 172u));
    c.f[16] = ld32((c.r[17].w[0] + 176u));
    c.f[17] = ld32((c.r[17].w[0] + 180u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF3A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003E(c, 165u, depth + 1u); else { c.pc = 0x001F9D70u; return; } if (c.pc != 0x002FF3A0u) [[unlikely]] return; }
L_002FF3A0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002FF3F8; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 148u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[7], ld32((c.r[17].w[0] + 156u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF3C4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x002FF3C4u) [[unlikely]] return; }
L_002FF3C4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x4C490000u);  if (t) { goto L_002FF3D0; } }
    set32(c.r[16], c.r[16].w[0] + 436u);
    c.budget -= 1;
L_002FF3D0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF3DCu); c.r[5].d[0] = c.r[2].d[0] | 18248ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x002FF3DCu) [[unlikely]] return; }
L_002FF3DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_002FF3EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_002FF3F0; } }
L_002FF3EC:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002FF3F0:
    st32((c.r[3].w[0] + 164u), c.r[4].w[0]);
    set32(c.r[3], 0u + 1u);
    c.budget -= 2;
L_002FF3F8:
    st8((c.r[17].w[0] + 112u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002FF410:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 112u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002FF4C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF434u);  if (depth < kMaxDepth) unit_007F(c, 361u, depth + 1u); else { c.pc = 0x002FEA00u; return; } if (c.pc != 0x002FF434u) [[unlikely]] return; }
L_002FF434:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 112u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002FF490; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 218u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_002FF490; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 28008u));
    set32(c.r[2], c.r[2].w[0] - 25200u);
    set32(c.r[5], 0u + 12014u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[1].w[0] + 28008u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 116u)));
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF490u); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x002FF490u) [[unlikely]] return; }
L_002FF490:
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF4A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FF4A0u) [[unlikely]] return; }
L_002FF4A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31072u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 4492u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF4BCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 171u, depth + 1u); else { c.pc = 0x0021E250u; return; } if (c.pc != 0x002FF4BCu) [[unlikely]] return; }
L_002FF4BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[16].w[0] + 112u));  if (t) { goto L_002FF544; } }
L_002FF4C4:
    c.f[2] = ld32((c.r[16].w[0] + 192u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 192u), c.f[1]);  if (t) { goto L_002FF4F0; } }
    st32((c.r[16].w[0] + 192u), c.f[0]);
    c.budget -= 1;
L_002FF4F0:
    set32(c.r[4], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FF540; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF504u);  if (depth < kMaxDepth) unit_005B(c, 349u, depth + 1u); else { c.pc = 0x0026EE80u; return; } if (c.pc != 0x002FF504u) [[unlikely]] return; }
L_002FF504:
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF514u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FF514u) [[unlikely]] return; }
L_002FF514:
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF528u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FF528u) [[unlikely]] return; }
L_002FF528:
    set32(c.r[3], ld32((c.r[16].w[0] + 132u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[3].w[0] + 52u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF540u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 208u, depth + 1u); else { c.pc = 0x001B1B70u; return; } if (c.pc != 0x002FF540u) [[unlikely]] return; }
L_002FF540:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 112u));
    c.budget -= 1;
L_002FF544:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002FF55C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF554u);  if (depth < kMaxDepth) unit_007F(c, 448u, depth + 1u); else { c.pc = 0x002FF580u; return; } if (c.pc != 0x002FF554u) [[unlikely]] return; }
L_002FF554:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002FF564; } }
L_002FF55C:
    st8((c.r[16].w[0] + 196u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 2;
L_002FF564:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002FF580:
    st8((c.r[4].w[0] + 196u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 202u);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);  if (t) { goto L_002FF5E0; } }
    set32(c.r[3], 0u + 218u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002FF5A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FF60C; } }
L_002FF5A8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x420C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1F80000u);
    c.f[6] = c.r[5].w[0];
    c.f[5] = c.r[3].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42540000u);
    c.f[4] = c.r[5].w[0];
    c.f[3] = c.r[3].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0xC1E80000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42F00000u);
    c.f[2] = c.r[5].w[0];
    c.f[1] = c.r[3].w[0];
    c.budget -= 14;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FF614; } }
L_002FF5E0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[6] = c.r[3].w[0];
    c.f[5] = c.r[5].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1A00000u);
    c.f[4] = c.r[3].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[3] = c.r[5].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[3].w[0];
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.f[1] = c.f[6];  if (t) { goto L_002FF614; } }
L_002FF60C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FF6A0; } }
L_002FF614:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 28320u);  if (t) { goto L_002FF694; } }
L_002FF624:
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FF690; } }
    c.f[0] = ld32((c.r[3].w[0] + 224u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[6]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002FF690; } }
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002FF690; } }
    c.f[0] = ld32((c.r[3].w[0] + 228u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[5]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002FF690; } }
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002FF690; } }
    c.f[0] = ld32((c.r[3].w[0] + 232u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[4]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002FF690; } }
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_002FF690; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 196u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002FF6A0; } }
L_002FF690:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_002FF694:
    c.r[3].d[0] = c.r[6].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[6].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FF624u | kUnwind; return; } goto L_002FF624; } }
L_002FF6A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FF6B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 196u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002FF730; } }
    c.f[0] = ld32((c.r[16].w[0] + 192u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002FF730; } }
    c.f[0] = c.f[0] ^ fp::kSign;
    set32(c.r[2], ld32((c.r[16].w[0] + 132u)));
    fpu_div(c, 12u, c.f[0], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF700u); set32(c.r[4], ld32((c.r[2].w[0] + 52u)));  if (depth < kMaxDepth) unit_0015(c, 89u, depth + 1u); else { c.pc = 0x00156E80u; return; } if (c.pc != 0x002FF700u) [[unlikely]] return; }
L_002FF700:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF708u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007F(c, 371u, depth + 1u); else { c.pc = 0x002FEB30u; return; } if (c.pc != 0x002FF708u) [[unlikely]] return; }
L_002FF708:
    c.f[0] = ld32((c.r[16].w[0] + 192u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[3], ld32((c.r[16].w[0] + 132u)));
    fpu_div(c, 12u, c.f[0], c.f[1]);
    set32(c.r[4], ld32((c.r[3].w[0] + 52u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF730u);  if (depth < kMaxDepth) unit_0015(c, 89u, depth + 1u); else { c.pc = 0x00156E80u; return; } if (c.pc != 0x002FF730u) [[unlikely]] return; }
L_002FF730:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002FF740:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 196u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002FF788; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 132u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF76Cu); c.f[12] = ld32((c.r[1].w[0] - 21944u));  if (depth < kMaxDepth) unit_0015(c, 85u, depth + 1u); else { c.pc = 0x00156E00u; return; } if (c.pc != 0x002FF76Cu) [[unlikely]] return; }
L_002FF76C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF774u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007F(c, 371u, depth + 1u); else { c.pc = 0x002FEB30u; return; } if (c.pc != 0x002FF774u) [[unlikely]] return; }
L_002FF774:
    set32(c.r[3], ld32((c.r[16].w[0] + 132u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF788u); set32(c.r[4], ld32((c.r[3].w[0] + 52u)));  if (depth < kMaxDepth) unit_0015(c, 85u, depth + 1u); else { c.pc = 0x00156E00u; return; } if (c.pc != 0x002FF788u) [[unlikely]] return; }
L_002FF788:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002FF7A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 136u)));  c.pc = t; return; }
L_002FF7B0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002FEB30u | kUnwind; return; } goto L_002FEB30; }
L_002FF7C0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002FEA00u | kUnwind; return; } goto L_002FEA00; }
L_002FF7D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002FF814; } }
L_002FF7EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF7F4u);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x002FF7F4u) [[unlikely]] return; }
L_002FF7F4:
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 580u));
    c.budget -= 5;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_002FF810; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002FF830; } }
L_002FF810:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002FF814:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF81Cu);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x002FF81Cu) [[unlikely]] return; }
L_002FF81C:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 519u));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FF7ECu | kUnwind; return; } goto L_002FF7EC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002FF830:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002FF850:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002FF894; } }
L_002FF86C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF874u);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x002FF874u) [[unlikely]] return; }
L_002FF874:
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 580u));
    c.budget -= 5;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_002FF890; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002FF8B0; } }
L_002FF890:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002FF894:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF89Cu);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x002FF89Cu) [[unlikely]] return; }
L_002FF89C:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 519u));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FF86Cu | kUnwind; return; } goto L_002FF86C; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_002FF8B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002FF8D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF8F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 298u, depth + 1u); else { c.pc = 0x0012E440u; return; } if (c.pc != 0x002FF8F0u) [[unlikely]] return; }
L_002FF8F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[16].w[0] + 8360u);
    set32(c.r[2], c.r[2].w[0] + 17728u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF908u); st32((c.r[16].w[0] + 24u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_006F(c, 137u, depth + 1u); else { c.pc = 0x002BD810u; return; } if (c.pc != 0x002FF908u) [[unlikely]] return; }
L_002FF908:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF910u); set32(c.r[4], 0u + 9u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002FF910u) [[unlikely]] return; }
L_002FF910:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF91Cu); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002FF91Cu) [[unlikely]] return; }
L_002FF91C:
    ld128((c.r[2].w[0]) & ~15u, c.r[5]);
    set32(c.r[4], 0u + 30u);
    set32(c.r[3], 0u + 13312u);
    st128((c.r[16].w[0] + 8384u) & ~15u, c.r[5]);
    set32(c.r[2], 0u + 13631u);
    ld128((c.r[17].w[0]) & ~15u, c.r[5]);
    st128((c.r[16].w[0] + 8400u) & ~15u, c.r[5]);
    st32((c.r[16].w[0] + 8436u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 8432u), 0u);
    st32((c.r[16].w[0] + 8444u), 0u);
    st8((c.r[16].w[0] + 8440u), static_cast<std::uint8_t>(0u));
    ld128((c.r[16].w[0] + 8384u) & ~15u, c.r[4]);
    st128((c.r[16].w[0] + 8416u) & ~15u, c.r[4]);
    st16((c.r[29].w[0] + 60u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF95Cu); st16((c.r[29].w[0] + 62u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x002FF95Cu) [[unlikely]] return; }
L_002FF95C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 8448u);
    set32(c.r[5], c.r[5].w[0] - 21928u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF974u); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_002A(c, 7u, depth + 1u); else { c.pc = 0x001A80E0u; return; } if (c.pc != 0x002FF974u) [[unlikely]] return; }
L_002FF974:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF97Cu);  if (depth < kMaxDepth) unit_0051(c, 11u, depth + 1u); else { c.pc = 0x002440A0u; return; } if (c.pc != 0x002FF97Cu) [[unlikely]] return; }
L_002FF97C:
    st32((c.r[16].w[0] + 20u), 0u);
    set32(c.r[4], 0u + 56u);
    st32((c.r[16].w[0] + 28u), 0u);
    st32((c.r[16].w[0] + 8368u), 0u);
    st32((c.r[16].w[0] + 8372u), 0u);
    st32((c.r[16].w[0] + 8528u), 0u);
    st32((c.r[16].w[0] + 8532u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF9A0u); st32((c.r[16].w[0] + 8536u), 0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002FF9A0u) [[unlikely]] return; }
L_002FF9A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002FF9B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF9B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 405u, depth + 1u); else { c.pc = 0x0026FBA0u; return; } if (c.pc != 0x002FF9B0u) [[unlikely]] return; }
L_002FF9B0:
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF9C4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FF9C4u) [[unlikely]] return; }
L_002FF9C4:
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002FF9E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002FFAE0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 17728u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFA0Cu); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0053(c, 114u, depth + 1u); else { c.pc = 0x0024CC40u; return; } if (c.pc != 0x002FFA0Cu) [[unlikely]] return; }
L_002FFA0C:
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FFA30; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FFA30; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFA30u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FFA30u) [[unlikely]] return; }
L_002FFA30:
    st32((c.r[17].w[0] + 28u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FFA58; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FFA58; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFA58u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FFA58u) [[unlikely]] return; }
L_002FFA58:
    st32((c.r[17].w[0] + 32u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 8532u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FFA70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFA70u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x002FFA70u) [[unlikely]] return; }
L_002FFA70:
    st32((c.r[17].w[0] + 8532u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 8536u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FFA88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFA88u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x002FFA88u) [[unlikely]] return; }
L_002FFA88:
    st32((c.r[17].w[0] + 8536u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 8528u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FFAA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFAA0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x002FFAA0u) [[unlikely]] return; }
L_002FFAA0:
    set32(c.r[4], c.r[17].w[0] + 8448u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFAB0u); st32((c.r[17].w[0] + 8528u), 0u);  if (depth < kMaxDepth) unit_002A(c, 11u, depth + 1u); else { c.pc = 0x001A8150u; return; } if (c.pc != 0x002FFAB0u) [[unlikely]] return; }
L_002FFAB0:
    set32(c.r[4], c.r[17].w[0] + 8360u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFABCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_006F(c, 138u, depth + 1u); else { c.pc = 0x002BD820u; return; } if (c.pc != 0x002FFABCu) [[unlikely]] return; }
L_002FFABC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFAC8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 300u, depth + 1u); else { c.pc = 0x0012E490u; return; } if (c.pc != 0x002FFAC8u) [[unlikely]] return; }
L_002FFAC8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002FFAE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFAE0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002FFAE0u) [[unlikely]] return; }
L_002FFAE0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002FFAE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002FFB00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFB10u);  if (depth < kMaxDepth) unit_000B(c, 317u, depth + 1u); else { c.pc = 0x0012E5D0u; return; } if (c.pc != 0x002FFB10u) [[unlikely]] return; }
L_002FFB10:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x6D6E0000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFB24u); c.r[5].d[0] = c.r[2].d[0] | 21335ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x002FFB24u) [[unlikely]] return; }
L_002FFB24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002FFB30; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_002FFB30:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002FFB40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFB40u);  if (depth < kMaxDepth) unit_0053(c, 59u, depth + 1u); else { c.pc = 0x0024C560u; return; } if (c.pc != 0x002FFB40u) [[unlikely]] return; }
L_002FFB40:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002FFB50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFB68u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x002FFB68u) [[unlikely]] return; }
L_002FFB68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFB70u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 318u, depth + 1u); else { c.pc = 0x0012E5E0u; return; } if (c.pc != 0x002FFB70u) [[unlikely]] return; }
L_002FFB70:
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFB7Cu); set32(c.r[5], c.r[16].w[0] + 40u);  if (depth < kMaxDepth) unit_005B(c, 425u, depth + 1u); else { c.pc = 0x0026FE60u; return; } if (c.pc != 0x002FFB7Cu) [[unlikely]] return; }
L_002FFB7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFB84u); set32(c.r[4], 0u + 448u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002FFB84u) [[unlikely]] return; }
L_002FFB84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { goto L_002FFBA0; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 9728u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFBA0u); set32(c.r[7], 0u + 3u);  if (depth < kMaxDepth) unit_0080(c, 147u, depth + 1u); else { c.pc = 0x00301060u; return; } if (c.pc != 0x002FFBA0u) [[unlikely]] return; }
L_002FFBA0:
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFBACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 55u, depth + 1u); else { c.pc = 0x00300690u; return; } if (c.pc != 0x002FFBACu) [[unlikely]] return; }
L_002FFBAC:
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFBC0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FFBC0u) [[unlikely]] return; }
L_002FFBC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002FFBD0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E600u | kUnwind; return; } [[clang::musttail]] return unit_000B(c, 319u, depth); }
L_002FFBE0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFC0Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000B(c, 320u, depth + 1u); else { c.pc = 0x0012E610u; return; } if (c.pc != 0x002FFC0Cu) [[unlikely]] return; }
L_002FFC0C:
    c.r[16].d[0] = 0ull + 0ull;
    c.r[22].d[0] = 0ull + 0ull;
    c.r[1].d[0] = c.r[22].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
L_002FFC18:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[22].w[0] << 1);  if (t) { goto L_002FFCE4; } }
    set32(c.r[2], c.r[22].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFC30u); set32(c.r[20], c.r[2].w[0] << 4);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x002FFC30u) [[unlikely]] return; }
L_002FFC30:
    set32(c.r[4], c.r[22].w[0] << 1);
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = ld16((c.r[2].w[0] + 520u));
    set32(c.r[2], c.r[3].w[0] + c.r[20].w[0]);
    st32((c.r[2].w[0] + 28u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFC58u); set32(c.r[4], ld32((c.r[2].w[0] + 28u)));  if (depth < kMaxDepth) unit_007F(c, 461u, depth + 1u); else { c.pc = 0x002FF7D0u; return; } if (c.pc != 0x002FFC58u) [[unlikely]] return; }
L_002FFC58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FFC80; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFC70u); set32(c.r[4], ld32((c.r[2].w[0] + 28u)));  if (depth < kMaxDepth) unit_007F(c, 465u, depth + 1u); else { c.pc = 0x002FF850u; return; } if (c.pc != 0x002FFC70u) [[unlikely]] return; }
L_002FFC70:
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002FFC90; } }
L_002FFC80:
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[3], c.r[22].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_002FFC90:
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002FFC94:
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[19], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFCA4u); set32(c.r[18], ld32((c.r[19].w[0] + 28u)));  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x002FFCA4u) [[unlikely]] return; }
L_002FFCA4:
    set32(c.r[3], c.r[21].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 580u));
    c.budget -= 5;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_002FFCC0; } }
    st32((c.r[19].w[0] + 8u), c.r[21].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_002FFCC0:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FFC94u | kUnwind; return; } goto L_002FFC94; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 40u), c.r[3].w[0]);  if (t) { goto L_002FFD18; } }
L_002FFCE4:
    set32(c.r[4], c.r[22].w[0] + 8u);
    set32(c.r[3], c.r[2].w[0] + c.r[22].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[20], c.r[3].w[0] << 4);
    set32(c.r[3], 0u + 25500u);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    st32((c.r[2].w[0] + 16u), c.r[22].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    st32((c.r[2].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 13;
L_002FFD18:
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    st32((c.r[2].w[0] + 16u), c.r[22].w[0]);
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.r[2].d[0] = c.r[22].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[22].sd[0] < 2ll ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FFC18u | kUnwind; return; } goto L_002FFC18; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[3], 0u + 6u);
    c.r[18].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 288u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    st32((c.r[2].w[0] + 292u), c.r[16].w[0]);
    c.budget -= 6;
L_002FFD5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFD64u); set32(c.r[17], c.r[18].w[0] << 1);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x002FFD64u) [[unlikely]] return; }
L_002FFD64:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = ld16((c.r[2].w[0] + 520u));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFD84u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 99u, depth + 1u); else { c.pc = 0x0012CCE0u; return; } if (c.pc != 0x002FFD84u) [[unlikely]] return; }
L_002FFD84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFD8Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x002FFD8Cu) [[unlikely]] return; }
L_002FFD8C:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    st16((c.r[2].w[0] + 520u), static_cast<std::uint16_t>(c.r[16].w[0]));
    c.r[2].d[0] = c.r[18].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FFD5Cu | kUnwind; return; } goto L_002FFD5C; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002FFDA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFDB0u); set32(c.r[18], c.r[16].w[0] << 1);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x002FFDB0u) [[unlikely]] return; }
L_002FFDB0:
    set32(c.r[3], c.r[2].w[0] + c.r[18].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 580u));
    set32(c.r[2], 0u + 25500u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002FFDFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFDCCu);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x002FFDCCu) [[unlikely]] return; }
L_002FFDCC:
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = ld16((c.r[2].w[0] + 580u));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFDECu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 99u, depth + 1u); else { c.pc = 0x0012CCE0u; return; } if (c.pc != 0x002FFDECu) [[unlikely]] return; }
L_002FFDEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFDF4u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x002FFDF4u) [[unlikely]] return; }
L_002FFDF4:
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st16((c.r[2].w[0] + 580u), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.budget -= 2;
L_002FFDFC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FFDA8u | kUnwind; return; } goto L_002FFDA8; } }
L_002FFE0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFE14u); c.r[16].d[0] = c.r[17].d[0] & 255ull;  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x002FFE14u) [[unlikely]] return; }
L_002FFE14:
    set32(c.r[3], c.r[17].w[0] + c.r[2].w[0]);
    st8((c.r[3].w[0] + 592u), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FFE0Cu | kUnwind; return; } goto L_002FFE0C; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002FFE60:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E630u | kUnwind; return; } [[clang::musttail]] return unit_000B(c, 321u, depth); }
L_002FFE70:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E640u | kUnwind; return; } [[clang::musttail]] return unit_000B(c, 322u, depth); }
L_002FFE80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x6D6E0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[5].d[0] = c.r[2].d[0] | 21335ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFEB0u); c.r[17].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x002FFEB0u) [[unlikely]] return; }
L_002FFEB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002FFEBC; } }
    set32(c.r[16], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_002FFEBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFEC4u); set32(c.r[4], c.r[18].w[0] + 8448u);  if (depth < kMaxDepth) unit_0029(c, 351u, depth + 1u); else { c.pc = 0x001A7FE0u; return; } if (c.pc != 0x002FFEC4u) [[unlikely]] return; }
L_002FFEC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002FFED4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_002FFF38; } }
L_002FFED4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFEDCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0053(c, 82u, depth + 1u); else { c.pc = 0x0024C840u; return; } if (c.pc != 0x002FFEDCu) [[unlikely]] return; }
L_002FFEDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002FFEEC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_002FFF38; } }
L_002FFEEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFEF4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0053(c, 82u, depth + 1u); else { c.pc = 0x0024C840u; return; } if (c.pc != 0x002FFEF4u) [[unlikely]] return; }
L_002FFEF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FFF04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_002FFF38; } }
L_002FFF04:
    set32(c.r[16], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFF10u); set32(c.r[4], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_0011(c, 177u, depth + 1u); else { c.pc = 0x00146C10u; return; } if (c.pc != 0x002FFF10u) [[unlikely]] return; }
L_002FFF10:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 8u);  if (t) { goto L_002FFF28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFF24u);  if (depth < kMaxDepth) unit_0011(c, 182u, depth + 1u); else { c.pc = 0x00146C90u; return; } if (c.pc != 0x002FFF24u) [[unlikely]] return; }
L_002FFF24:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_002FFF28:
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FFF38; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002FFF38:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_002FFF58; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFF50u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FFF50u) [[unlikely]] return; }
L_002FFF50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFF58u); set32(c.r[4], 0u + 13632u);  if (depth < kMaxDepth) unit_0053(c, 108u, depth + 1u); else { c.pc = 0x0024CBD0u; return; } if (c.pc != 0x002FFF58u) [[unlikely]] return; }
L_002FFF58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002FFF70:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x002FC000u < 16384u) { entry = entries_007F[(t - 0x002FC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002FFF80:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 8440u));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002FFFD0; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 8444u)));
    set32(c.r[3], c.r[2].w[0] - 1u);
    st32((c.r[19].w[0] + 8444u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 8432u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[19].w[0] + 8384u);  if (t) { [[clang::musttail]] return unit_0080(c, 2u, depth); } }
    st32((c.r[19].w[0] + 8444u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 8440u), static_cast<std::uint8_t>(0u));  if (t) { [[clang::musttail]] return unit_0080(c, 1u, depth); } }
L_002FFFD0:
    set32(c.r[2], ld32((c.r[19].w[0] + 8444u)));
    set32(c.r[4], c.r[2].w[0] + 1u);
    st32((c.r[19].w[0] + 8444u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 8436u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 8432u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0080(c, 1u, depth); } }
    st32((c.r[19].w[0] + 8444u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[19].w[0] + 8440u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    [[clang::musttail]] return unit_0080(c, 1u, depth);
}

}
