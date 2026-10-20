#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0022[4096] = {
    1, 0, 2, 0, 3, 0, 4, 0, 5, 0, 0, 0, 0, 6, 0, 7, 0, 8, 0, 9, 0, 10, 0, 11, 0, 12, 13, 14, 0, 0, 0, 0,
    15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 17, 0, 0, 0, 0, 0, 0, 0, 18, 0, 19, 0, 20, 0, 0, 0,
    0, 0, 0, 0, 21, 0, 22, 0, 23, 0, 0, 0, 0, 0, 0, 0, 24, 0, 25, 0, 26, 0, 0, 0, 0, 0, 0, 0, 27, 0, 28, 0,
    29, 0, 0, 0, 0, 0, 0, 0, 30, 0, 31, 0, 32, 0, 0, 0, 0, 0, 0, 0, 33, 0, 34, 0, 35, 0, 0, 0, 0, 0, 36, 0,
    37, 0, 38, 0, 0, 0, 0, 0, 39, 0, 40, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 44, 0, 45, 0, 0, 0, 46, 0,
    47, 0, 48, 0, 0, 0, 49, 0, 50, 0, 51, 0, 0, 0, 52, 0, 53, 0, 54, 0, 0, 0, 0, 0, 55, 0, 56, 0, 57, 0, 0, 0,
    58, 0, 59, 0, 60, 0, 0, 0, 61, 0, 62, 0, 63, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0,
    67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 71, 0, 0, 0, 0, 0, 0,
    72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 76, 0,
    0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 80, 0, 0, 81, 0, 0, 82, 0, 0, 83, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 87, 0, 0, 0, 0,
    0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91,
    0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0,
    0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0,
    0, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    109, 0, 110, 0, 0, 0, 111, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0,
    126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0,
    0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 144, 0, 145, 0, 0, 0, 0,
    146, 0, 0, 147, 0, 148, 0, 0, 0, 0, 149, 0, 0, 150, 0, 151, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 153, 0, 154, 0, 0, 0,
    0, 0, 0, 0, 155, 0, 0, 156, 0, 157, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 159, 0, 160, 0, 0, 0, 0, 0, 0, 0, 161, 0,
    0, 0, 162, 0, 163, 0, 0, 0, 0, 164, 0, 0, 165, 0, 166, 0, 0, 0, 0, 167, 0, 0, 168, 0, 169, 0, 0, 0, 0, 0, 170, 0,
    0, 171, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 0,
    176, 0, 177, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0,
    181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0,
    0, 183, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 186, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0,
    190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    200, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 210, 0, 0, 211, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0,
    214, 0, 0, 0, 215, 0, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 220, 0, 0, 0,
    0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231,
    0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 0, 236, 0,
    0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0,
    0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    243, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0,
    0, 0, 247, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 253, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0,
    257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 259, 0, 0, 260, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 262, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 0, 0, 265, 0,
    0, 266, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 272, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 277, 0, 0, 278, 0, 0, 0, 279, 0,
    0, 0, 0, 0, 280, 0, 0, 281, 0, 282, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 288, 0, 0,
    0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 291, 0, 0,
    0, 0, 0, 292, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 305, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312,
    0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 314, 0, 0, 0, 315, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 317, 0, 0, 318, 0, 0, 319, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 321, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 324, 0, 325, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 330, 0, 0, 331, 0, 0, 332, 0, 0, 333, 0,
    0, 334, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 336, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 339, 0,
    0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 342, 0, 0, 0, 0, 0, 343, 0, 0,
    0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 346, 0, 0, 347, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 351, 0, 352, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 355, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 357, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 359, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 363, 0, 0,
    0, 0, 0, 364, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 368,
    0, 0, 0, 0, 369, 0, 0, 0, 370, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 374,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0,
    381, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0,
    0, 0, 0, 386, 0, 0, 387, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 392, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0,
    0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0,
    403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0,
    0, 0, 0, 406, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 409, 0, 0, 0, 0, 410, 0, 0, 0, 0, 411, 0,
    0, 0, 0, 412, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 418, 0, 0, 0, 0, 0,
    419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 421, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0,
    423, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 425, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429,
    0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 432, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0,
    0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438,
    0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 445, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0,
    0, 0, 0, 453, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0,
    457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 463, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0,
    467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 473,
    0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    479, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 485, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0,
    487, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 490,
    0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 498, 0, 0, 0,
    0, 0, 499, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0022(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00188000;
    case 2u: goto L_00188008;
    case 3u: goto L_00188010;
    case 4u: goto L_00188018;
    case 5u: goto L_00188020;
    case 6u: goto L_00188034;
    case 7u: goto L_0018803C;
    case 8u: goto L_00188044;
    case 9u: goto L_0018804C;
    case 10u: goto L_00188054;
    case 11u: goto L_0018805C;
    case 12u: goto L_00188064;
    case 13u: goto L_00188068;
    case 14u: goto L_0018806C;
    case 15u: goto L_00188080;
    case 16u: goto L_001880B8;
    case 17u: goto L_001880C0;
    case 18u: goto L_001880E0;
    case 19u: goto L_001880E8;
    case 20u: goto L_001880F0;
    case 21u: goto L_00188110;
    case 22u: goto L_00188118;
    case 23u: goto L_00188120;
    case 24u: goto L_00188140;
    case 25u: goto L_00188148;
    case 26u: goto L_00188150;
    case 27u: goto L_00188170;
    case 28u: goto L_00188178;
    case 29u: goto L_00188180;
    case 30u: goto L_001881A0;
    case 31u: goto L_001881A8;
    case 32u: goto L_001881B0;
    case 33u: goto L_001881D0;
    case 34u: goto L_001881D8;
    case 35u: goto L_001881E0;
    case 36u: goto L_001881F8;
    case 37u: goto L_00188200;
    case 38u: goto L_00188208;
    case 39u: goto L_00188220;
    case 40u: goto L_00188228;
    case 41u: goto L_00188230;
    case 42u: goto L_00188244;
    case 43u: goto L_00188254;
    case 44u: goto L_00188260;
    case 45u: goto L_00188268;
    case 46u: goto L_00188278;
    case 47u: goto L_00188280;
    case 48u: goto L_00188288;
    case 49u: goto L_00188298;
    case 50u: goto L_001882A0;
    case 51u: goto L_001882A8;
    case 52u: goto L_001882B8;
    case 53u: goto L_001882C0;
    case 54u: goto L_001882C8;
    case 55u: goto L_001882E0;
    case 56u: goto L_001882E8;
    case 57u: goto L_001882F0;
    case 58u: goto L_00188300;
    case 59u: goto L_00188308;
    case 60u: goto L_00188310;
    case 61u: goto L_00188320;
    case 62u: goto L_00188328;
    case 63u: goto L_00188330;
    case 64u: goto L_00188340;
    case 65u: goto L_00188350;
    case 66u: goto L_00188370;
    case 67u: goto L_00188380;
    case 68u: goto L_001883B0;
    case 69u: goto L_001883C0;
    case 70u: goto L_001883D8;
    case 71u: goto L_001883E4;
    case 72u: goto L_00188400;
    case 73u: goto L_00188438;
    case 74u: goto L_0018844C;
    case 75u: goto L_0018846C;
    case 76u: goto L_00188478;
    case 77u: goto L_00188490;
    case 78u: goto L_001884A0;
    case 79u: goto L_001884D8;
    case 80u: goto L_0018850C;
    case 81u: goto L_00188518;
    case 82u: goto L_00188524;
    case 83u: goto L_00188530;
    case 84u: goto L_0018853C;
    case 85u: goto L_00188554;
    case 86u: goto L_00188564;
    case 87u: goto L_0018856C;
    case 88u: goto L_00188590;
    case 89u: goto L_001885B4;
    case 90u: goto L_001885C0;
    case 91u: goto L_001885FC;
    case 92u: goto L_00188610;
    case 93u: goto L_0018863C;
    case 94u: goto L_00188650;
    case 95u: goto L_00188680;
    case 96u: goto L_00188690;
    case 97u: goto L_001886B4;
    case 98u: goto L_001886C4;
    case 99u: goto L_001886CC;
    case 100u: goto L_001886F0;
    case 101u: goto L_00188714;
    case 102u: goto L_00188734;
    case 103u: goto L_0018874C;
    case 104u: goto L_00188770;
    case 105u: goto L_00188790;
    case 106u: goto L_001887A4;
    case 107u: goto L_001887B0;
    case 108u: goto L_001887D0;
    case 109u: goto L_00188800;
    case 110u: goto L_00188808;
    case 111u: goto L_00188818;
    case 112u: goto L_00188824;
    case 113u: goto L_00188890;
    case 114u: goto L_001888B8;
    case 115u: goto L_001888E4;
    case 116u: goto L_00188910;
    case 117u: goto L_00188950;
    case 118u: goto L_001889B0;
    case 119u: goto L_001889C0;
    case 120u: goto L_001889E0;
    case 121u: goto L_00188A10;
    case 122u: goto L_00188A2C;
    case 123u: goto L_00188A3C;
    case 124u: goto L_00188A50;
    case 125u: goto L_00188A70;
    case 126u: goto L_00188A80;
    case 127u: goto L_00188AB0;
    case 128u: goto L_00188AE0;
    case 129u: goto L_00188AF0;
    case 130u: goto L_00188B08;
    case 131u: goto L_00188B20;
    case 132u: goto L_00188B30;
    case 133u: goto L_00188B40;
    case 134u: goto L_00188B50;
    case 135u: goto L_00188BA0;
    case 136u: goto L_00188BB0;
    case 137u: goto L_00188C14;
    case 138u: goto L_00188C30;
    case 139u: goto L_00188C40;
    case 140u: goto L_00188C58;
    case 141u: goto L_00188C90;
    case 142u: goto L_00188CC0;
    case 143u: goto L_00188CD8;
    case 144u: goto L_00188CE4;
    case 145u: goto L_00188CEC;
    case 146u: goto L_00188D00;
    case 147u: goto L_00188D0C;
    case 148u: goto L_00188D14;
    case 149u: goto L_00188D28;
    case 150u: goto L_00188D34;
    case 151u: goto L_00188D3C;
    case 152u: goto L_00188D5C;
    case 153u: goto L_00188D68;
    case 154u: goto L_00188D70;
    case 155u: goto L_00188D90;
    case 156u: goto L_00188D9C;
    case 157u: goto L_00188DA4;
    case 158u: goto L_00188DC4;
    case 159u: goto L_00188DD0;
    case 160u: goto L_00188DD8;
    case 161u: goto L_00188DF8;
    case 162u: goto L_00188E08;
    case 163u: goto L_00188E10;
    case 164u: goto L_00188E24;
    case 165u: goto L_00188E30;
    case 166u: goto L_00188E38;
    case 167u: goto L_00188E4C;
    case 168u: goto L_00188E58;
    case 169u: goto L_00188E60;
    case 170u: goto L_00188E78;
    case 171u: goto L_00188E84;
    case 172u: goto L_00188E9C;
    case 173u: goto L_00188F50;
    case 174u: goto L_00188F58;
    case 175u: goto L_00188F68;
    case 176u: goto L_00188F80;
    case 177u: goto L_00188F88;
    case 178u: goto L_00188FA0;
    case 179u: goto L_00188FC0;
    case 180u: goto L_00188FE0;
    case 181u: goto L_00189000;
    case 182u: goto L_001890F0;
    case 183u: goto L_00189104;
    case 184u: goto L_00189118;
    case 185u: goto L_00189128;
    case 186u: goto L_0018913C;
    case 187u: goto L_00189148;
    case 188u: goto L_00189160;
    case 189u: goto L_00189170;
    case 190u: goto L_00189180;
    case 191u: goto L_001891B4;
    case 192u: goto L_001891D0;
    case 193u: goto L_00189200;
    case 194u: goto L_00189244;
    case 195u: goto L_00189268;
    case 196u: goto L_001892A0;
    case 197u: goto L_001892D0;
    case 198u: goto L_001892F0;
    case 199u: goto L_00189350;
    case 200u: goto L_00189380;
    case 201u: goto L_00189394;
    case 202u: goto L_001893D0;
    case 203u: goto L_00189420;
    case 204u: goto L_00189440;
    case 205u: goto L_00189454;
    case 206u: goto L_00189464;
    case 207u: goto L_001894AC;
    case 208u: goto L_001894C0;
    case 209u: goto L_001894D8;
    case 210u: goto L_001894EC;
    case 211u: goto L_001894F8;
    case 212u: goto L_00189520;
    case 213u: goto L_00189568;
    case 214u: goto L_00189580;
    case 215u: goto L_00189590;
    case 216u: goto L_001895A8;
    case 217u: goto L_001895B8;
    case 218u: goto L_001895D4;
    case 219u: goto L_001895E4;
    case 220u: goto L_001895F0;
    case 221u: goto L_00189610;
    case 222u: goto L_0018962C;
    case 223u: goto L_00189660;
    case 224u: goto L_00189698;
    case 225u: goto L_001896B8;
    case 226u: goto L_001896C8;
    case 227u: goto L_001896D8;
    case 228u: goto L_00189700;
    case 229u: goto L_0018972C;
    case 230u: goto L_0018974C;
    case 231u: goto L_0018977C;
    case 232u: goto L_00189798;
    case 233u: goto L_001897B0;
    case 234u: goto L_001897D0;
    case 235u: goto L_001897E8;
    case 236u: goto L_001897F8;
    case 237u: goto L_00189818;
    case 238u: goto L_0018982C;
    case 239u: goto L_00189848;
    case 240u: goto L_00189870;
    case 241u: goto L_00189890;
    case 242u: goto L_001898B0;
    case 243u: goto L_00189900;
    case 244u: goto L_00189914;
    case 245u: goto L_00189940;
    case 246u: goto L_00189978;
    case 247u: goto L_00189988;
    case 248u: goto L_001899A0;
    case 249u: goto L_001899CC;
    case 250u: goto L_001899F0;
    case 251u: goto L_00189A20;
    case 252u: goto L_00189A5C;
    case 253u: goto L_00189A68;
    case 254u: goto L_00189AE0;
    case 255u: goto L_00189B40;
    case 256u: goto L_00189B70;
    case 257u: goto L_00189B80;
    case 258u: goto L_00189BC4;
    case 259u: goto L_00189C0C;
    case 260u: goto L_00189C18;
    case 261u: goto L_00189C2C;
    case 262u: goto L_00189C44;
    case 263u: goto L_00189C50;
    case 264u: goto L_00189C60;
    case 265u: goto L_00189C78;
    case 266u: goto L_00189C84;
    case 267u: goto L_00189CA4;
    case 268u: goto L_00189CB8;
    case 269u: goto L_00189CD0;
    case 270u: goto L_00189CE4;
    case 271u: goto L_00189D28;
    case 272u: goto L_00189D38;
    case 273u: goto L_00189D40;
    case 274u: goto L_00189D70;
    case 275u: goto L_00189DA8;
    case 276u: goto L_00189DC4;
    case 277u: goto L_00189DDC;
    case 278u: goto L_00189DE8;
    case 279u: goto L_00189DF8;
    case 280u: goto L_00189E10;
    case 281u: goto L_00189E1C;
    case 282u: goto L_00189E24;
    case 283u: goto L_00189E40;
    case 284u: goto L_00189E70;
    case 285u: goto L_00189EAC;
    case 286u: goto L_00189EC4;
    case 287u: goto L_00189EDC;
    case 288u: goto L_00189EF4;
    case 289u: goto L_00189F10;
    case 290u: goto L_00189F5C;
    case 291u: goto L_00189F74;
    case 292u: goto L_00189F8C;
    case 293u: goto L_00189FA0;
    case 294u: goto L_00189FD8;
    case 295u: goto L_0018A014;
    case 296u: goto L_0018A030;
    case 297u: goto L_0018A050;
    case 298u: goto L_0018A08C;
    case 299u: goto L_0018A0BC;
    case 300u: goto L_0018A0F0;
    case 301u: goto L_0018A160;
    case 302u: goto L_0018A174;
    case 303u: goto L_0018A1B4;
    case 304u: goto L_0018A1C8;
    case 305u: goto L_0018A208;
    case 306u: goto L_0018A21C;
    case 307u: goto L_0018A250;
    case 308u: goto L_0018A2A0;
    case 309u: goto L_0018A2C4;
    case 310u: goto L_0018A2F8;
    case 311u: goto L_0018A340;
    case 312u: goto L_0018A37C;
    case 313u: goto L_0018A394;
    case 314u: goto L_0018A3AC;
    case 315u: goto L_0018A3BC;
    case 316u: goto L_0018A3D0;
    case 317u: goto L_0018A418;
    case 318u: goto L_0018A424;
    case 319u: goto L_0018A430;
    case 320u: goto L_0018A438;
    case 321u: goto L_0018A488;
    case 322u: goto L_0018A49C;
    case 323u: goto L_0018A4BC;
    case 324u: goto L_0018A4C8;
    case 325u: goto L_0018A4D0;
    case 326u: goto L_0018A4E0;
    case 327u: goto L_0018A528;
    case 328u: goto L_0018A5A0;
    case 329u: goto L_0018A5C8;
    case 330u: goto L_0018A5D4;
    case 331u: goto L_0018A5E0;
    case 332u: goto L_0018A5EC;
    case 333u: goto L_0018A5F8;
    case 334u: goto L_0018A604;
    case 335u: goto L_0018A620;
    case 336u: goto L_0018A630;
    case 337u: goto L_0018A644;
    case 338u: goto L_0018A670;
    case 339u: goto L_0018A678;
    case 340u: goto L_0018A690;
    case 341u: goto L_0018A6D0;
    case 342u: goto L_0018A6DC;
    case 343u: goto L_0018A6F4;
    case 344u: goto L_0018A710;
    case 345u: goto L_0018A730;
    case 346u: goto L_0018A740;
    case 347u: goto L_0018A74C;
    case 348u: goto L_0018A758;
    case 349u: goto L_0018A7A0;
    case 350u: goto L_0018A7EC;
    case 351u: goto L_0018A814;
    case 352u: goto L_0018A81C;
    case 353u: goto L_0018A82C;
    case 354u: goto L_0018A858;
    case 355u: goto L_0018A870;
    case 356u: goto L_0018A8C0;
    case 357u: goto L_0018A8D4;
    case 358u: goto L_0018A8E4;
    case 359u: goto L_0018A914;
    case 360u: goto L_0018A924;
    case 361u: goto L_0018A990;
    case 362u: goto L_0018A9E0;
    case 363u: goto L_0018A9F4;
    case 364u: goto L_0018AA0C;
    case 365u: goto L_0018AA20;
    case 366u: goto L_0018AA44;
    case 367u: goto L_0018AA58;
    case 368u: goto L_0018AA7C;
    case 369u: goto L_0018AA90;
    case 370u: goto L_0018AAA0;
    case 371u: goto L_0018AAA8;
    case 372u: goto L_0018AB50;
    case 373u: goto L_0018AB58;
    case 374u: goto L_0018AB7C;
    case 375u: goto L_0018ABA8;
    case 376u: goto L_0018ABB8;
    case 377u: goto L_0018ABC8;
    case 378u: goto L_0018ABD8;
    case 379u: goto L_0018AC30;
    case 380u: goto L_0018AC74;
    case 381u: goto L_0018AC80;
    case 382u: goto L_0018AC8C;
    case 383u: goto L_0018ACBC;
    case 384u: goto L_0018ACC4;
    case 385u: goto L_0018ACF0;
    case 386u: goto L_0018AD0C;
    case 387u: goto L_0018AD18;
    case 388u: goto L_0018AD20;
    case 389u: goto L_0018AD98;
    case 390u: goto L_0018ADD0;
    case 391u: goto L_0018AE1C;
    case 392u: goto L_0018AE28;
    case 393u: goto L_0018AE30;
    case 394u: goto L_0018AE78;
    case 395u: goto L_0018AE84;
    case 396u: goto L_0018AEDC;
    case 397u: goto L_0018AF10;
    case 398u: goto L_0018AF34;
    case 399u: goto L_0018AF58;
    case 400u: goto L_0018AF80;
    case 401u: goto L_0018AFC0;
    case 402u: goto L_0018AFF0;
    case 403u: goto L_0018B000;
    case 404u: goto L_0018B04C;
    case 405u: goto L_0018B074;
    case 406u: goto L_0018B08C;
    case 407u: goto L_0018B0A4;
    case 408u: goto L_0018B0BC;
    case 409u: goto L_0018B0D0;
    case 410u: goto L_0018B0E4;
    case 411u: goto L_0018B0F8;
    case 412u: goto L_0018B10C;
    case 413u: goto L_0018B120;
    case 414u: goto L_0018B140;
    case 415u: goto L_0018B1A0;
    case 416u: goto L_0018B1B4;
    case 417u: goto L_0018B1E0;
    case 418u: goto L_0018B1E8;
    case 419u: goto L_0018B200;
    case 420u: goto L_0018B240;
    case 421u: goto L_0018B24C;
    case 422u: goto L_0018B264;
    case 423u: goto L_0018B280;
    case 424u: goto L_0018B29C;
    case 425u: goto L_0018B2AC;
    case 426u: goto L_0018B2B8;
    case 427u: goto L_0018B2F0;
    case 428u: goto L_0018B344;
    case 429u: goto L_0018B37C;
    case 430u: goto L_0018B390;
    case 431u: goto L_0018B3B8;
    case 432u: goto L_0018B3C0;
    case 433u: goto L_0018B3C8;
    case 434u: goto L_0018B3F0;
    case 435u: goto L_0018B408;
    case 436u: goto L_0018B444;
    case 437u: goto L_0018B454;
    case 438u: goto L_0018B47C;
    case 439u: goto L_0018B494;
    case 440u: goto L_0018B4B8;
    case 441u: goto L_0018B4EC;
    case 442u: goto L_0018B540;
    case 443u: goto L_0018B580;
    case 444u: goto L_0018B5C0;
    case 445u: goto L_0018B5D0;
    case 446u: goto L_0018B5E0;
    case 447u: goto L_0018B618;
    case 448u: goto L_0018B640;
    case 449u: goto L_0018B650;
    case 450u: goto L_0018B67C;
    case 451u: goto L_0018B740;
    case 452u: goto L_0018B778;
    case 453u: goto L_0018B78C;
    case 454u: goto L_0018B79C;
    case 455u: goto L_0018B7D4;
    case 456u: goto L_0018B7E0;
    case 457u: goto L_0018B800;
    case 458u: goto L_0018B890;
    case 459u: goto L_0018B8C0;
    case 460u: goto L_0018B8F0;
    case 461u: goto L_0018B92C;
    case 462u: goto L_0018B934;
    case 463u: goto L_0018B984;
    case 464u: goto L_0018B9A4;
    case 465u: goto L_0018B9CC;
    case 466u: goto L_0018B9F0;
    case 467u: goto L_0018BA00;
    case 468u: goto L_0018BA30;
    case 469u: goto L_0018BA40;
    case 470u: goto L_0018BA8C;
    case 471u: goto L_0018BACC;
    case 472u: goto L_0018BADC;
    case 473u: goto L_0018BAFC;
    case 474u: goto L_0018BB0C;
    case 475u: goto L_0018BB44;
    case 476u: goto L_0018BB9C;
    case 477u: goto L_0018BBE4;
    case 478u: goto L_0018BC50;
    case 479u: goto L_0018BC80;
    case 480u: goto L_0018BCA4;
    case 481u: goto L_0018BCC8;
    case 482u: goto L_0018BCF4;
    case 483u: goto L_0018BD3C;
    case 484u: goto L_0018BD60;
    case 485u: goto L_0018BD78;
    case 486u: goto L_0018BDF0;
    case 487u: goto L_0018BE00;
    case 488u: goto L_0018BE44;
    case 489u: goto L_0018BE6C;
    case 490u: goto L_0018BE7C;
    case 491u: goto L_0018BE8C;
    case 492u: goto L_0018BEAC;
    case 493u: goto L_0018BEC4;
    case 494u: goto L_0018BEE0;
    case 495u: goto L_0018BF24;
    case 496u: goto L_0018BF38;
    case 497u: goto L_0018BF58;
    case 498u: goto L_0018BF70;
    case 499u: goto L_0018BF88;
    case 500u: goto L_0018BFA0;
    case 501u: goto L_0018BFD0;
    default: bad_entry(c, 0x00188000u); return;
    }
L_00188000:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_00188068; } }
L_00188008:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00188068; } }
L_00188010:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 6u);  if (t) { goto L_00188068; } }
L_00188018:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8u);  if (t) { goto L_00188068; } }
L_00188020:
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[2], 0u + 7u);
    set32(c.r[3], 0u + 8u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; if (c.r[4].d[0] != 0) c.r[2].d[0] = c.r[3].d[0];  if (t) { goto L_00188068; } }
L_00188034:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 6u);  if (t) { goto L_00188068; } }
L_0018803C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 10u);  if (t) { goto L_00188068; } }
L_00188044:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 6u);  if (t) { goto L_00188068; } }
L_0018804C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 12u);  if (t) { goto L_00188068; } }
L_00188054:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 12u);  if (t) { goto L_00188068; } }
L_0018805C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00188068; } }
L_00188064:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00188068:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0018806C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00188080:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00188348; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 12976u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00188000u < 16384u) { entry = entries_0022[(t - 0x00188000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001880B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001880C0u); set32(c.r[4], 0u + 336u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001880C0u) [[unlikely]] return; }
L_001880C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00188370; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[7], 0u + 1u);
    set32(c.r[6], ld32((c.r[16].w[0] + 52u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001880E0u); c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 408u, depth + 1u); else { c.pc = 0x0031F9C0u; return; } if (c.pc != 0x001880E0u) [[unlikely]] return; }
L_001880E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00188374; } }
L_001880E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001880F0u); set32(c.r[4], 0u + 752u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001880F0u) [[unlikely]] return; }
L_001880F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00188370; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[7], 0u + 1u);
    set32(c.r[6], ld32((c.r[16].w[0] + 52u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188110u); c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0088(c, 29u, depth + 1u); else { c.pc = 0x003202C0u; return; } if (c.pc != 0x00188110u) [[unlikely]] return; }
L_00188110:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00188370; } }
L_00188118:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188120u); set32(c.r[4], 0u + 752u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00188120u) [[unlikely]] return; }
L_00188120:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00188370; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[7], 0u + 1u);
    set32(c.r[6], ld32((c.r[16].w[0] + 52u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188140u); c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0088(c, 103u, depth + 1u); else { c.pc = 0x003209D0u; return; } if (c.pc != 0x00188140u) [[unlikely]] return; }
L_00188140:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00188370; } }
L_00188148:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188150u); set32(c.r[4], 0u + 1376u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00188150u) [[unlikely]] return; }
L_00188150:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00188370; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[7], 0u + 1u);
    set32(c.r[6], ld32((c.r[16].w[0] + 52u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188170u); c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0088(c, 157u, depth + 1u); else { c.pc = 0x00320E90u; return; } if (c.pc != 0x00188170u) [[unlikely]] return; }
L_00188170:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00188370; } }
L_00188178:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188180u); set32(c.r[4], 0u + 912u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00188180u) [[unlikely]] return; }
L_00188180:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00188370; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 52u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001881A0u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 287u, depth + 1u); else { c.pc = 0x00321CD0u; return; } if (c.pc != 0x001881A0u) [[unlikely]] return; }
L_001881A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00188370; } }
L_001881A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001881B0u); set32(c.r[4], 0u + 912u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001881B0u) [[unlikely]] return; }
L_001881B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00188370; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 52u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001881D0u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 341u, depth + 1u); else { c.pc = 0x00322180u; return; } if (c.pc != 0x001881D0u) [[unlikely]] return; }
L_001881D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00188370; } }
L_001881D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001881E0u); set32(c.r[4], 0u + 2304u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001881E0u) [[unlikely]] return; }
L_001881E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00188370; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001881F8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008B(c, 381u, depth + 1u); else { c.pc = 0x0032FCA0u; return; } if (c.pc != 0x001881F8u) [[unlikely]] return; }
L_001881F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00188370; } }
L_00188200:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188208u); set32(c.r[4], 0u + 1648u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00188208u) [[unlikely]] return; }
L_00188208:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00188370; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188220u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008C(c, 222u, depth + 1u); else { c.pc = 0x003316D0u; return; } if (c.pc != 0x00188220u) [[unlikely]] return; }
L_00188220:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00188370; } }
L_00188228:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188230u); set32(c.r[4], 0u + 2384u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00188230u) [[unlikely]] return; }
L_00188230:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00188258; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188244u);  if (depth < kMaxDepth) unit_0022(c, 118u, depth + 1u); else { c.pc = 0x001889B0u; return; } if (c.pc != 0x00188244u) [[unlikely]] return; }
L_00188244:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188254u); set32(c.r[6], 0u + 7u);  if (depth < kMaxDepth) unit_008C(c, 42u, depth + 1u); else { c.pc = 0x00330410u; return; } if (c.pc != 0x00188254u) [[unlikely]] return; }
L_00188254:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00188258:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00188370; } }
L_00188260:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188268u); set32(c.r[4], 0u + 2368u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00188268u) [[unlikely]] return; }
L_00188268:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00188370; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188278u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008C(c, 133u, depth + 1u); else { c.pc = 0x00330D40u; return; } if (c.pc != 0x00188278u) [[unlikely]] return; }
L_00188278:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00188370; } }
L_00188280:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188288u); set32(c.r[4], 0u + 2304u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00188288u) [[unlikely]] return; }
L_00188288:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00188370; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188298u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008C(c, 290u, depth + 1u); else { c.pc = 0x00331F10u; return; } if (c.pc != 0x00188298u) [[unlikely]] return; }
L_00188298:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00188370; } }
L_001882A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001882A8u); set32(c.r[4], 0u + 2032u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001882A8u) [[unlikely]] return; }
L_001882A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00188370; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001882B8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008C(c, 369u, depth + 1u); else { c.pc = 0x003326D0u; return; } if (c.pc != 0x001882B8u) [[unlikely]] return; }
L_001882B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00188370; } }
L_001882C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001882C8u); set32(c.r[4], 0u + 848u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001882C8u) [[unlikely]] return; }
L_001882C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00188370; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001882E0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008C(c, 548u, depth + 1u); else { c.pc = 0x00333960u; return; } if (c.pc != 0x001882E0u) [[unlikely]] return; }
L_001882E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00188370; } }
L_001882E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001882F0u); set32(c.r[4], 0u + 848u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001882F0u) [[unlikely]] return; }
L_001882F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00188370; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188300u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008C(c, 602u, depth + 1u); else { c.pc = 0x00333DC0u; return; } if (c.pc != 0x00188300u) [[unlikely]] return; }
L_00188300:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00188370; } }
L_00188308:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188310u); set32(c.r[4], 0u + 1424u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00188310u) [[unlikely]] return; }
L_00188310:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00188370; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188320u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 7u, depth + 1u); else { c.pc = 0x003340A0u; return; } if (c.pc != 0x00188320u) [[unlikely]] return; }
L_00188320:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00188370; } }
L_00188328:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188330u); set32(c.r[4], 0u + 336u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00188330u) [[unlikely]] return; }
L_00188330:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00188370; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188340u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0088(c, 396u, depth + 1u); else { c.pc = 0x00322600u; return; } if (c.pc != 0x00188340u) [[unlikely]] return; }
L_00188340:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00188370; } }
L_00188348:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188350u); set32(c.r[4], 0u + 208u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00188350u) [[unlikely]] return; }
L_00188350:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00188370; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[7], 0u + 1u);
    set32(c.r[6], ld32((c.r[16].w[0] + 52u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188370u); c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 356u, depth + 1u); else { c.pc = 0x0031F380u; return; } if (c.pc != 0x00188370u) [[unlikely]] return; }
L_00188370:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00188374:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00188380:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 72u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001883B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001883B0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x001883B0u) [[unlikely]] return; }
L_001883B0:
    st32((c.r[17].w[0] + 56u), 0u);
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001883C0u); st32((c.r[29].w[0] + 76u), 0u);  if (depth < kMaxDepth) unit_0021(c, 485u, depth + 1u); else { c.pc = 0x00187E00u; return; } if (c.pc != 0x001883C0u) [[unlikely]] return; }
L_001883C0:
    set32(c.r[18], ld32((c.r[17].w[0] + 64u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[5], c.r[29].w[0] + 76u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001883D8u); st32((c.r[17].w[0] + 64u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 77u, depth + 1u); else { c.pc = 0x00188490u; return; } if (c.pc != 0x001883D8u) [[unlikely]] return; }
L_001883D8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001883E4u); set32(c.r[5], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_0022(c, 15u, depth + 1u); else { c.pc = 0x00188080u; return; } if (c.pc != 0x001883E4u) [[unlikely]] return; }
L_001883E4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[17].w[0] + 60u), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00188400u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00188400u) [[unlikely]] return; }
L_00188400:
    set32(c.r[2], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 15u);  if (t) { goto L_00188438; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_0018841C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 72u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00188438; } }
L_0018841C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00188430; } }
    set32(c.r[2], 0u + 118u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 188u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00188438; } }
L_00188430:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188438u);  if (depth < kMaxDepth) unit_0021(c, 410u, depth + 1u); else { c.pc = 0x001873D0u; return; } if (c.pc != 0x00188438u) [[unlikely]] return; }
L_00188438:
    set32(c.r[4], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0018844Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0018844Cu) [[unlikely]] return; }
L_0018844C:
    set32(c.r[3], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00188470; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018846Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 182u, depth + 1u); else { c.pc = 0x0018DC10u; return; } if (c.pc != 0x0018846Cu) [[unlikely]] return; }
L_0018846C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00188470:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188478u); set32(c.r[5], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_0022(c, 90u, depth + 1u); else { c.pc = 0x001885C0u; return; } if (c.pc != 0x00188478u) [[unlikely]] return; }
L_00188478:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00188490:
    c.budget -= 2;
    {  goto L_001884A0; }
L_001884A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 64u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00188574; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 13072u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00188000u < 16384u) { entry = entries_0022[(t - 0x00188000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001884D8:
    set32(c.r[3], 0u + 3u);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_00188574; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 13040u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00188000u < 16384u) { entry = entries_0022[(t - 0x00188000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0018850C:
    set32(c.r[3], 0u + 30u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_00188574; } }
L_00188518:
    set32(c.r[3], 0u + 60u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_00188574; } }
L_00188524:
    set32(c.r[3], 0u + 120u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_00188574; } }
L_00188530:
    set32(c.r[3], 0u + 3600u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_00188574; } }
L_0018853C:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 59u);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[4], 0u + 472u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188554u); st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x00188554u) [[unlikely]] return; }
L_00188554:
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188564u); set32(c.r[5], 0u + 472u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x00188564u) [[unlikely]] return; }
L_00188564:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00188578; } }
L_0018856C:
    set32(c.r[3], 0u + 4u);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_00188574:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00188578:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00188590:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001885B4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001885B4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001885B4u) [[unlikely]] return; }
L_001885B4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001885C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 8u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00188618; } }
    set32(c.r[16], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001885FCu); set32(c.r[5], c.r[2].w[0] + 80u);  if (depth < kMaxDepth) unit_008C(c, 99u, depth + 1u); else { c.pc = 0x00330A00u; return; } if (c.pc != 0x001885FCu) [[unlikely]] return; }
L_001885FC:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00188610u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00188610u) [[unlikely]] return; }
L_00188610:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00188664; } }
L_00188618:
    set32(c.r[18], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 140u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0018863Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0018863Cu) [[unlikely]] return; }
L_0018863C:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00188650u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00188650u) [[unlikely]] return; }
L_00188650:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 5;
L_00188664:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00188680:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00188690:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001886B4u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 289u, depth + 1u); else { c.pc = 0x00386C00u; return; } if (c.pc != 0x001886B4u) [[unlikely]] return; }
L_001886B4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001886C4u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 45u, depth + 1u); else { c.pc = 0x00190600u; return; } if (c.pc != 0x001886C4u) [[unlikely]] return; }
L_001886C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001886CCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 95u, depth + 1u); else { c.pc = 0x00188680u; return; } if (c.pc != 0x001886CCu) [[unlikely]] return; }
L_001886CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001886F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[1].w[0] + 26136u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 80u);  if (t) { goto L_00188758; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188714u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00188714u) [[unlikely]] return; }
L_00188714:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00188750; } }
    set32(c.r[3], 0u + 10752u);
    set32(c.r[2], 0u + 15311u);
    st16((c.r[29].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188734u); st16((c.r[29].w[0] + 46u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x00188734u) [[unlikely]] return; }
L_00188734:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 13136u);
    set32(c.r[6], c.r[29].w[0] + 44u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018874Cu); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 7u, depth + 1u); else { c.pc = 0x001A80E0u; return; } if (c.pc != 0x0018874Cu) [[unlikely]] return; }
L_0018874C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00188750:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 26136u), c.r[16].w[0]);
    c.budget -= 2;
L_00188758:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00188770:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26112u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00188788; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26136u)));
    c.budget -= 2;
L_00188788:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00188790:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001887A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 104u, depth + 1u); else { c.pc = 0x00188770u; return; } if (c.pc != 0x001887A4u) [[unlikely]] return; }
L_001887A4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001887B0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x001887B0u) [[unlikely]] return; }
L_001887B0:
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[16].w[0] << 5);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001887D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], ld32((c.r[1].w[0] + 26112u)));
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00188874; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00188874; } }
L_00188800:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188808u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00188808u) [[unlikely]] return; }
L_00188808:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00188830; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188818u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 105u, depth + 1u); else { c.pc = 0x00188790u; return; } if (c.pc != 0x00188818u) [[unlikely]] return; }
L_00188818:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188824u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x00188824u) [[unlikely]] return; }
L_00188824:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 21424u);
    st32((c.r[16].w[0] + 176u), c.r[3].w[0]);
    c.budget -= 3;
L_00188830:
    set32(c.r[3], c.r[17].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[6], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[6].w[0] + 76u), c.r[16].w[0]);
    set32(c.r[4], 0u + 255u);
    set32(c.r[7], ld32((c.r[6].w[0] + 76u)));
    c.r[3].d[0] = c.r[17].sd[0] < 41ll ? 1ull : 0ull;
    st32((c.r[7].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[7].w[0] + 20u), c.r[5].w[0]);
    st32((c.r[7].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[6].w[0] + 76u)));
    st32((c.r[5].w[0] + 48u), c.r[4].w[0]);
    st32((c.r[5].w[0] + 52u), c.r[4].w[0]);
    st32((c.r[5].w[0] + 56u), c.r[4].w[0]);
    c.budget -= 17;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[5].w[0] + 60u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00188800u | kUnwind; return; } goto L_00188800; } }
L_00188874:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00188890:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], ld32((c.r[1].w[0] + 26112u)));
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001888F4; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001888B8:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[3].w[0] + 76u);  if (t) { goto L_001888E4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001888E4; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001888E4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001888E4u) [[unlikely]] return; }
L_001888E4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 41ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[16].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001888B8u | kUnwind; return; } goto L_001888B8; } }
L_001888F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00188910:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 26112u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = c.r[4].sd[0] < 41ll ? 1ull : 0ull;  if (t) { goto L_00188928; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00188944; } }
L_00188928:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00188938; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00188944; } }
L_00188938:
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 76u)));
    c.budget -= 3;
L_00188944:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00188950:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 248u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;  if (t) { goto L_00188964; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0018899C; } }
L_00188964:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 10u);  if (t) { goto L_00188974; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0018899C; } }
L_00188974:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_00188984; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0018899C; } }
L_00188984:
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[5].d[0] ^ 12ull;  if (t) { goto L_00188998; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0018899C; } }
L_00188998:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0018899C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001889B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001889C0u);  if (depth < kMaxDepth) unit_0022(c, 128u, depth + 1u); else { c.pc = 0x00188AE0u; return; } if (c.pc != 0x001889C0u) [[unlikely]] return; }
L_001889C0:
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] + 12592u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001889E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26120u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001889F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00188A08; } }
L_001889F8:
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 4;
L_00188A08:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00188A10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188A2Cu); set32(c.r[4], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_0012(c, 234u, depth + 1u); else { c.pc = 0x0014A4C0u; return; } if (c.pc != 0x00188A2Cu) [[unlikely]] return; }
L_00188A2C:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00188A3Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00188A3Cu) [[unlikely]] return; }
L_00188A3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00188A50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 26120u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00188A70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188A70u);  if (depth < kMaxDepth) unit_0023(c, 46u, depth + 1u); else { c.pc = 0x0018C890u; return; } if (c.pc != 0x00188A70u) [[unlikely]] return; }
L_00188A70:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00188A80:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26120u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00188A98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_00188A9C; } }
L_00188A98:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00188A9C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00188AB0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26120u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00188AC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  if (t) { goto L_00188ACC; } }
L_00188AC8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00188ACC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00188AE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188AF0u);  if (depth < kMaxDepth) unit_0022(c, 256u, depth + 1u); else { c.pc = 0x00189B70u; return; } if (c.pc != 0x00188AF0u) [[unlikely]] return; }
L_00188AF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00188B00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  if (t) { goto L_00188B08; } }
L_00188B00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188B08u);  if (depth < kMaxDepth) unit_009E(c, 75u, depth + 1u); else { c.pc = 0x00378B90u; return; } if (c.pc != 0x00188B08u) [[unlikely]] return; }
L_00188B08:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00188B20:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26112u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_00188B30:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[1].w[0] + 26144u)));  c.pc = t; return; }
L_00188B40:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] + 26144u), c.r[4].w[0]);  c.pc = t; return; }
L_00188B50:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 26144u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 26144u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 26144u)));
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00188B7C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 26144u), 0u);
    c.budget -= 2;
L_00188B7C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 26144u)));
    c.r[1].d[0] = c.r[3].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 255u);  if (t) { goto L_00188B98; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 26144u), c.r[3].w[0]);
    c.budget -= 2;
L_00188B98:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00188BA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00188BB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[1].w[0] + 28324u)));
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00188C38; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 392u));
    set32(c.r[3], 0u - 2u);
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[10].d[0];
    st8((c.r[16].w[0] + 392u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 400u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[10].d[0];
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188C14u); st8((c.r[16].w[0] + 400u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0030(c, 20u, depth + 1u); else { c.pc = 0x001C02D0u; return; } if (c.pc != 0x00188C14u) [[unlikely]] return; }
L_00188C14:
    set32(c.r[2], c.r[16].w[0] + 208u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[16].w[0] + 224u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[4], c.r[16].w[0] + 424u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188C30u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_000F(c, 269u, depth + 1u); else { c.pc = 0x0013E620u; return; } if (c.pc != 0x00188C30u) [[unlikely]] return; }
L_00188C30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00188F8C; } }
L_00188C38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188C40u);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x00188C40u) [[unlikely]] return; }
L_00188C40:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188C58u); st32((c.r[29].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00188C58u) [[unlikely]] return; }
L_00188C58:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], 0u + 15312u);
    st32((c.r[1].w[0] + 28000u), c.r[16].w[0]);
    set32(c.r[4], 0u + 6736u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[16], 0u + 9000u);
    st32((c.r[1].w[0] + 27968u), c.r[2].w[0]);
    set32(c.r[2], 0u + 13312u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 27984u), c.r[2].w[0]);
    set32(c.r[2], 0u + 12544u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188C90u); st32((c.r[1].w[0] + 27976u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00188C90u) [[unlikely]] return; }
L_00188C90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_00188CC0; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[3].w[0];
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188CC0u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 118u, depth + 1u); else { c.pc = 0x001B9C40u; return; } if (c.pc != 0x00188CC0u) [[unlikely]] return; }
L_00188CC0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[16].w[0] + 416u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188CD8u); st32((c.r[1].w[0] + 28324u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_000F(c, 261u, depth + 1u); else { c.pc = 0x0013E500u; return; } if (c.pc != 0x00188CD8u) [[unlikely]] return; }
L_00188CD8:
    set32(c.r[4], c.r[16].w[0] + 424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188CE4u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_000F(c, 269u, depth + 1u); else { c.pc = 0x0013E620u; return; } if (c.pc != 0x00188CE4u) [[unlikely]] return; }
L_00188CE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188CECu); set32(c.r[4], 0u + 448u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00188CECu) [[unlikely]] return; }
L_00188CEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00188D04; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188D00u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 204u, depth + 1u); else { c.pc = 0x001C6F50u; return; } if (c.pc != 0x00188D00u) [[unlikely]] return; }
L_00188D00:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00188D04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188D0Cu); set32(c.r[4], c.r[16].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x00188D0Cu) [[unlikely]] return; }
L_00188D0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188D14u); set32(c.r[4], 0u + 96u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00188D14u) [[unlikely]] return; }
L_00188D14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00188D2C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188D28u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 90u, depth + 1u); else { c.pc = 0x001B4F50u; return; } if (c.pc != 0x00188D28u) [[unlikely]] return; }
L_00188D28:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00188D2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188D34u); set32(c.r[4], c.r[16].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x00188D34u) [[unlikely]] return; }
L_00188D34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188D3Cu); set32(c.r[4], 0u + 84u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00188D3Cu) [[unlikely]] return; }
L_00188D3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00188D60; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00188D54; } }
    set32(c.r[5], c.r[5].w[0] + 436u);
    c.budget -= 1;
L_00188D54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188D5Cu);  if (depth < kMaxDepth) unit_002D(c, 98u, depth + 1u); else { c.pc = 0x001B5050u; return; } if (c.pc != 0x00188D5Cu) [[unlikely]] return; }
L_00188D5C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00188D60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188D68u); set32(c.r[4], c.r[16].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x00188D68u) [[unlikely]] return; }
L_00188D68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188D70u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00188D70u) [[unlikely]] return; }
L_00188D70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00188D94; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00188D88; } }
    set32(c.r[5], c.r[5].w[0] + 436u);
    c.budget -= 1;
L_00188D88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188D90u);  if (depth < kMaxDepth) unit_002C(c, 471u, depth + 1u); else { c.pc = 0x001B3010u; return; } if (c.pc != 0x00188D90u) [[unlikely]] return; }
L_00188D90:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00188D94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188D9Cu); set32(c.r[4], c.r[16].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x00188D9Cu) [[unlikely]] return; }
L_00188D9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188DA4u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00188DA4u) [[unlikely]] return; }
L_00188DA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00188DC8; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00188DBC; } }
    set32(c.r[5], c.r[5].w[0] + 436u);
    c.budget -= 1;
L_00188DBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188DC4u);  if (depth < kMaxDepth) unit_002D(c, 169u, depth + 1u); else { c.pc = 0x001B63B0u; return; } if (c.pc != 0x00188DC4u) [[unlikely]] return; }
L_00188DC4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00188DC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188DD0u); set32(c.r[4], c.r[16].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x00188DD0u) [[unlikely]] return; }
L_00188DD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188DD8u); set32(c.r[4], 0u + 1664u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00188DD8u) [[unlikely]] return; }
L_00188DD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00188DFC; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00188DF0; } }
    set32(c.r[5], c.r[5].w[0] + 436u);
    c.budget -= 1;
L_00188DF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188DF8u); set32(c.r[6], 0u + 21u);  if (depth < kMaxDepth) unit_002D(c, 119u, depth + 1u); else { c.pc = 0x001B54E0u; return; } if (c.pc != 0x00188DF8u) [[unlikely]] return; }
L_00188DF8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00188DFC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188E08u); set32(c.r[4], c.r[16].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x00188E08u) [[unlikely]] return; }
L_00188E08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188E10u); set32(c.r[4], 0u + 116u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00188E10u) [[unlikely]] return; }
L_00188E10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00188E28; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188E24u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 29u, depth + 1u); else { c.pc = 0x001CC750u; return; } if (c.pc != 0x00188E24u) [[unlikely]] return; }
L_00188E24:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00188E28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188E30u); set32(c.r[4], c.r[16].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x00188E30u) [[unlikely]] return; }
L_00188E30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188E38u); set32(c.r[4], 0u + 12976u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00188E38u) [[unlikely]] return; }
L_00188E38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00188E50; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188E4Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 34u, depth + 1u); else { c.pc = 0x001C0500u; return; } if (c.pc != 0x00188E4Cu) [[unlikely]] return; }
L_00188E4C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00188E50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188E58u); set32(c.r[4], c.r[16].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x00188E58u) [[unlikely]] return; }
L_00188E58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188E60u); set32(c.r[4], 0u + 36u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00188E60u) [[unlikely]] return; }
L_00188E60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00188E7C; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 32u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188E78u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 163u, depth + 1u); else { c.pc = 0x001C3D40u; return; } if (c.pc != 0x00188E78u) [[unlikely]] return; }
L_00188E78:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00188E7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188E84u); set32(c.r[4], c.r[16].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x00188E84u) [[unlikely]] return; }
L_00188E84:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x4D430000u);  if (t) { goto L_00188E94; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_00188E94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188E9Cu); c.r[5].d[0] = c.r[2].d[0] | 21580ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x00188E9Cu) [[unlikely]] return; }
L_00188E9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00188EAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_00188EB0; } }
L_00188EAC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00188EB0:
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[8], 0u - 2u);
    c.r[10].d[0] = ld8((c.r[16].w[0] + 392u));
    set32(c.r[2], 0u + 1u);
    c.r[9].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[6], 0u - 17u);
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[4], 0u - 2u);
    set32(c.r[7], c.r[2].w[0] << 4);
    set32(c.r[2], 0u + 1u);
    c.r[5].d[0] = c.r[2].d[0] & 1ull;
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[2].d[0] = 0ull & 1ull;
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    set32(c.r[3], c.r[2].w[0] << 4);
    st8((c.r[16].w[0] + 392u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[2], 0u - 17u);
    c.r[8].d[0] = ld8((c.r[16].w[0] + 398u));
    set32(c.r[10], c.r[16].w[0] + 208u);
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[16].w[0] + 398u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[16].w[0] + 400u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[16].w[0] + 400u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 406u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 406u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st128((c.r[10].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[16].w[0] + 224u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 40;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188F50u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 20u, depth + 1u); else { c.pc = 0x001C02D0u; return; } if (c.pc != 0x00188F50u) [[unlikely]] return; }
L_00188F50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00188F6C; } }
L_00188F58:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00188F68u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00188F68u) [[unlikely]] return; }
L_00188F68:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00188F6C:
    c.r[2].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00188F58u | kUnwind; return; } goto L_00188F58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188F80u);  if (depth < kMaxDepth) unit_009C(c, 170u, depth + 1u); else { c.pc = 0x00370CE0u; return; } if (c.pc != 0x00188F80u) [[unlikely]] return; }
L_00188F80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188F88u); set32(c.r[4], ld32((c.r[29].w[0] + 60u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00188F88u) [[unlikely]] return; }
L_00188F88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00188F8C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00188FA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 28324u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_00188FC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188FC0u);  if (depth < kMaxDepth) unit_003E(c, 288u, depth + 1u); else { c.pc = 0x001FB100u; return; } if (c.pc != 0x00188FC0u) [[unlikely]] return; }
L_00188FC0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 28324u), 0u);
    c.budget -= 2;
L_00188FC8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00188FE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189000u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00189000u) [[unlikely]] return; }
L_00189000:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[3], 0u + 4u);
    c.r[1].d[0] = c.r[1].d[0] | 23854ull;
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == c.r[3].d[0]; set32(c.r[2], c.r[2].w[0] + c.r[1].w[0]);  if (t) { goto L_001890B8; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[3].d[0]; set32(c.r[3], c.r[16].w[0] << 1);  if (t) { goto L_0018909C; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[3].d[0]; set32(c.r[3], c.r[16].w[0] << 1);  if (t) { goto L_00189080; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[3].d[0]; set32(c.r[3], c.r[16].w[0] << 1);  if (t) { goto L_00189064; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] << 1);  if (t) { goto L_00189048; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001890D4; } }
L_00189048:
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[2].w[0] + 2944u);  if (t) { goto L_001890D0; } }
L_00189064:
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[2].w[0] + 5888u);  if (t) { goto L_001890D0; } }
L_00189080:
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[2].w[0] + 4416u);  if (t) { goto L_001890D0; } }
L_0018909C:
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[2].w[0] + 1472u);  if (t) { goto L_001890D0; } }
L_001890B8:
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
L_001890D0:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001890D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001890F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189104u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0022(c, 256u, depth + 1u); else { c.pc = 0x00189B70u; return; } if (c.pc != 0x00189104u) [[unlikely]] return; }
L_00189104:
    set32(c.r[17], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 8u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189118u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 180u, depth + 1u); else { c.pc = 0x00188FE0u; return; } if (c.pc != 0x00189118u) [[unlikely]] return; }
L_00189118:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26120u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189128u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 48u, depth + 1u); else { c.pc = 0x0018C8F0u; return; } if (c.pc != 0x00189128u) [[unlikely]] return; }
L_00189128:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[3].d[0];  if (t) { goto L_00189148; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018913Cu);  if (depth < kMaxDepth) unit_0023(c, 256u, depth + 1u); else { c.pc = 0x0018E780u; return; } if (c.pc != 0x0018913Cu) [[unlikely]] return; }
L_0018913C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189148u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 1u, depth + 1u); else { c.pc = 0x00190000u; return; } if (c.pc != 0x00189148u) [[unlikely]] return; }
L_00189148:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00189160:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00188690u | kUnwind; return; } goto L_00188690; }
L_00189170:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00187860u | kUnwind; return; } [[clang::musttail]] return unit_0021(c, 438u, depth); }
L_00189180:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[1].w[0] + 26152u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001891DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001891B4u); set32(c.r[4], 0u + 108u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001891B4u) [[unlikely]] return; }
L_001891B4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001891D4; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001891D0u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 193u, depth + 1u); else { c.pc = 0x00189200u; return; } if (c.pc != 0x001891D0u) [[unlikely]] return; }
L_001891D0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001891D4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 26152u), c.r[4].w[0]);
    c.budget -= 2;
L_001891DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00189200:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[3].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 80u), 0u);
    st32((c.r[4].w[0] + 84u), 0u);
    st32((c.r[4].w[0] + 88u), 0u);
    st32((c.r[4].w[0] + 92u), 0u);
    st32((c.r[4].w[0] + 96u), 0u);
    c.budget -= 17;
L_00189244:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 16u), 0u);
    c.r[2].d[0] = c.r[3].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00189244u | kUnwind; return; } goto L_00189244; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189268u);  if (depth < kMaxDepth) unit_00A1(c, 289u, depth + 1u); else { c.pc = 0x00386C00u; return; } if (c.pc != 0x00189268u) [[unlikely]] return; }
L_00189268:
    st32((c.r[17].w[0] + 100u), c.r[2].w[0]);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    if (c.r[16].d[0] == 0) c.r[3].d[0] = c.r[2].d[0];
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[1].w[0] + 26128u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 104u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001892A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001892D4; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001892D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001892D0u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001892D0u) [[unlikely]] return; }
L_001892D0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001892D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001892F0:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[3], 0u + 8u);  if (t) { goto L_00189308; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 16u), c.r[6].w[0]);  if (t) { goto L_00189340; } }
L_00189308:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00189324; } }
    set32(c.r[3], ld32((c.r[7].w[0])));
    st32((c.r[4].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 84u), c.r[3].w[0]);  if (t) { goto L_00189340; } }
L_00189324:
    set32(c.r[3], 0u + 13u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00189340; } }
    set32(c.r[3], ld32((c.r[7].w[0])));
    st32((c.r[4].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    st32((c.r[4].w[0] + 92u), c.r[3].w[0]);
    c.budget -= 4;
L_00189340:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00189350:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 4u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00189388; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189380u); set32(c.r[4], ld32((c.r[17].w[0] + 100u)));  if (depth < kMaxDepth) unit_0024(c, 42u, depth + 1u); else { c.pc = 0x00190580u; return; } if (c.pc != 0x00189380u) [[unlikely]] return; }
L_00189380:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (t) { goto L_00189398; } }
L_00189388:
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189394u); set32(c.r[5], c.r[3].w[0] + 10u);  if (depth < kMaxDepth) unit_0024(c, 42u, depth + 1u); else { c.pc = 0x00190580u; return; } if (c.pc != 0x00189394u) [[unlikely]] return; }
L_00189394:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_00189398:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001893A8; } }
    set32(c.r[16], c.r[16].w[0] << 3);
    c.budget -= 1;
L_001893A8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 24u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001893D0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[1].w[0] + 26120u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00189410; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00189500; } }
L_00189410:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00189424; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189420u); set32(c.r[5], c.r[3].w[0] - 1u);  if (depth < kMaxDepth) unit_0022(c, 500u, depth + 1u); else { c.pc = 0x0018BFA0u; return; } if (c.pc != 0x00189420u) [[unlikely]] return; }
L_00189420:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00189424:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[16], ld32((c.r[20].w[0] + 28u)));  if (t) { goto L_00189448; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189440u); set32(c.r[4], ld32((c.r[20].w[0] + 100u)));  if (depth < kMaxDepth) unit_0024(c, 42u, depth + 1u); else { c.pc = 0x00190580u; return; } if (c.pc != 0x00189440u) [[unlikely]] return; }
L_00189440:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00189458; } }
L_00189448:
    set32(c.r[4], ld32((c.r[20].w[0] + 100u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189454u); set32(c.r[5], c.r[3].w[0] + 10u);  if (depth < kMaxDepth) unit_0024(c, 42u, depth + 1u); else { c.pc = 0x00190580u; return; } if (c.pc != 0x00189454u) [[unlikely]] return; }
L_00189454:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00189458:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189464u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 199u, depth + 1u); else { c.pc = 0x00189350u; return; } if (c.pc != 0x00189464u) [[unlikely]] return; }
L_00189464:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; st16((c.r[29].w[0] + 120u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00189478; } }
    c.r[2].d[0] = ld16((c.r[29].w[0] + 120u));
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    st16((c.r[29].w[0] + 120u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00189478:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00189494; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
L_00189494:
    c.r[5].d[0] = ld16((c.r[29].w[0] + 120u));
    set32(c.r[4], c.r[29].w[0] + 96u);
    st8((c.r[29].w[0] + 125u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001894ACu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0023(c, 69u, depth + 1u); else { c.pc = 0x0018CBD0u; return; } if (c.pc != 0x001894ACu) [[unlikely]] return; }
L_001894AC:
    set32(c.r[2], ld32((c.r[29].w[0] + 104u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26120u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001894C0u); st8((c.r[29].w[0] + 126u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0023(c, 42u, depth + 1u); else { c.pc = 0x0018C7D0u; return; } if (c.pc != 0x001894C0u) [[unlikely]] return; }
L_001894C0:
    st8((c.r[29].w[0] + 127u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[29].w[0] + 120u);
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[29].w[0] + 124u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001894D8u); st16((c.r[29].w[0] + 122u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0022(c, 479u, depth + 1u); else { c.pc = 0x0018BC80u; return; } if (c.pc != 0x001894D8u) [[unlikely]] return; }
L_001894D8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 24u)));
    set32(c.r[4], ld32((c.r[20].w[0] + 100u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001894ECu); set32(c.r[5], c.r[3].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_0024(c, 43u, depth + 1u); else { c.pc = 0x001905B0u; return; } if (c.pc != 0x001894ECu) [[unlikely]] return; }
L_001894EC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001894F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 335u, depth + 1u); else { c.pc = 0x0018A620u; return; } if (c.pc != 0x001894F8u) [[unlikely]] return; }
L_001894F8:
    st32((c.r[20].w[0] + 96u), c.r[17].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_00189500:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00189520:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[1].w[0] + 26120u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00189560; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00189640; } }
L_00189560:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189568u); set32(c.r[5], ld32((c.r[16].w[0] + 44u)));  if (depth < kMaxDepth) unit_0022(c, 240u, depth + 1u); else { c.pc = 0x00189870u; return; } if (c.pc != 0x00189568u) [[unlikely]] return; }
L_00189568:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189580u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0023(c, 69u, depth + 1u); else { c.pc = 0x0018CBD0u; return; } if (c.pc != 0x00189580u) [[unlikely]] return; }
L_00189580:
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[17], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189590u); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_0024(c, 42u, depth + 1u); else { c.pc = 0x00190580u; return; } if (c.pc != 0x00189590u) [[unlikely]] return; }
L_00189590:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 24u)));
    set32(c.r[4], ld32((c.r[1].w[0] + 26120u)));
    st8((c.r[29].w[0] + 110u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001895A8u); st16((c.r[29].w[0] + 104u), static_cast<std::uint16_t>(c.r[19].w[0]));  if (depth < kMaxDepth) unit_0023(c, 42u, depth + 1u); else { c.pc = 0x0018C7D0u; return; } if (c.pc != 0x001895A8u) [[unlikely]] return; }
L_001895A8:
    st8((c.r[29].w[0] + 111u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001895B8u); set32(c.r[5], c.r[19].w[0] - c.r[18].w[0]);  if (depth < kMaxDepth) unit_0024(c, 44u, depth + 1u); else { c.pc = 0x001905E0u; return; } if (c.pc != 0x001895B8u) [[unlikely]] return; }
L_001895B8:
    st8((c.r[29].w[0] + 108u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[29].w[0] + 104u);
    st16((c.r[29].w[0] + 106u), static_cast<std::uint16_t>(0u));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001895D4u); st8((c.r[29].w[0] + 109u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0022(c, 397u, depth + 1u); else { c.pc = 0x0018AF10u; return; } if (c.pc != 0x001895D4u) [[unlikely]] return; }
L_001895D4:
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001895E4u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 43u, depth + 1u); else { c.pc = 0x001905B0u; return; } if (c.pc != 0x001895E4u) [[unlikely]] return; }
L_001895E4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001895F0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 335u, depth + 1u); else { c.pc = 0x0018A620u; return; } if (c.pc != 0x001895F0u) [[unlikely]] return; }
L_001895F0:
    st32((c.r[16].w[0] + 96u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189610u); set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0022(c, 118u, depth + 1u); else { c.pc = 0x001889B0u; return; } if (c.pc != 0x00189610u) [[unlikely]] return; }
L_00189610:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0018963C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018962Cu); set32(c.r[18], ld32((c.r[2].w[0] + 20u)));  if (depth < kMaxDepth) unit_0022(c, 118u, depth + 1u); else { c.pc = 0x001889B0u; return; } if (c.pc != 0x0018962Cu) [[unlikely]] return; }
L_0018962C:
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[4], c.r[17].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    st32((c.r[3].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 4;
L_0018963C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00189640:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00189660:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 84u)));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 100u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189698u); set32(c.r[5], c.r[2].w[0] + 14u);  if (depth < kMaxDepth) unit_0024(c, 42u, depth + 1u); else { c.pc = 0x00190580u; return; } if (c.pc != 0x00189698u) [[unlikely]] return; }
L_00189698:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 24u)));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[20], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001896B8u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 69u, depth + 1u); else { c.pc = 0x0018CBD0u; return; } if (c.pc != 0x001896B8u) [[unlikely]] return; }
L_001896B8:
    set32(c.r[4], ld32((c.r[18].w[0] + 100u)));
    set32(c.r[19], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001896C8u); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_0024(c, 42u, depth + 1u); else { c.pc = 0x00190580u; return; } if (c.pc != 0x001896C8u) [[unlikely]] return; }
L_001896C8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 24u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 100u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001896D8u); set32(c.r[5], c.r[20].w[0] - c.r[2].w[0]);  if (depth < kMaxDepth) unit_0024(c, 44u, depth + 1u); else { c.pc = 0x001905E0u; return; } if (c.pc != 0x001896D8u) [[unlikely]] return; }
L_001896D8:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0]), c.r[19].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00189700:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].sd[0] >= 0; set32(c.r[2], 0u - c.r[16].w[0]);  if (t) { goto L_00189724; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_00189730; } }
L_00189724:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018972Cu);  if (depth < kMaxDepth) unit_0022(c, 199u, depth + 1u); else { c.pc = 0x00189350u; return; } if (c.pc != 0x0018972Cu) [[unlikely]] return; }
L_0018972C:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_00189730:
    st16((c.r[29].w[0] + 72u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[5].d[0] = ld16((c.r[29].w[0] + 72u));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018974Cu); st8((c.r[29].w[0] + 77u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0023(c, 69u, depth + 1u); else { c.pc = 0x0018CBD0u; return; } if (c.pc != 0x0018974Cu) [[unlikely]] return; }
L_0018974C:
    set32(c.r[3], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[17], c.r[29].w[0] + 78u);
    set32(c.r[2], 0u - 2u);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00189768; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00189768:
    st8((c.r[29].w[0] + 79u), static_cast<std::uint8_t>(0u));
    st8((c.r[29].w[0] + 76u), static_cast<std::uint8_t>(0u));
    st16((c.r[29].w[0] + 74u), static_cast<std::uint16_t>(0u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018977Cu); c.r[16].d[0] = ld8((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0022(c, 118u, depth + 1u); else { c.pc = 0x001889B0u; return; } if (c.pc != 0x0018977Cu) [[unlikely]] return; }
L_0018977C:
    c.r[1].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 72u);  if (t) { goto L_00189790; } }
    set32(c.r[2], 0u + 15u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00189790:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189798u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0022(c, 479u, depth + 1u); else { c.pc = 0x0018BC80u; return; } if (c.pc != 0x00189798u) [[unlikely]] return; }
L_00189798:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001897B0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001897D0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0022(c, 240u, depth + 1u); else { c.pc = 0x00189870u; return; } if (c.pc != 0x001897D0u) [[unlikely]] return; }
L_001897D0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001897E8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0023(c, 69u, depth + 1u); else { c.pc = 0x0018CBD0u; return; } if (c.pc != 0x001897E8u) [[unlikely]] return; }
L_001897E8:
    set32(c.r[4], ld32((c.r[19].w[0] + 100u)));
    set32(c.r[16], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001897F8u); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_0024(c, 42u, depth + 1u); else { c.pc = 0x00190580u; return; } if (c.pc != 0x001897F8u) [[unlikely]] return; }
L_001897F8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 24u)));
    set32(c.r[17], c.r[29].w[0] + 110u);
    st16((c.r[29].w[0] + 104u), static_cast<std::uint16_t>(c.r[18].w[0]));
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[16].w[0]));
    st8((c.r[29].w[0] + 111u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[19].w[0] + 100u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189818u); set32(c.r[5], c.r[18].w[0] - c.r[2].w[0]);  if (depth < kMaxDepth) unit_0024(c, 44u, depth + 1u); else { c.pc = 0x001905E0u; return; } if (c.pc != 0x00189818u) [[unlikely]] return; }
L_00189818:
    st8((c.r[29].w[0] + 108u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[29].w[0] + 106u), static_cast<std::uint16_t>(0u));
    st8((c.r[29].w[0] + 109u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018982Cu); c.r[16].d[0] = ld8((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0022(c, 118u, depth + 1u); else { c.pc = 0x001889B0u; return; } if (c.pc != 0x0018982Cu) [[unlikely]] return; }
L_0018982C:
    c.r[1].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 104u);  if (t) { goto L_00189840; } }
    set32(c.r[2], 0u + 15u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00189840:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189848u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0022(c, 397u, depth + 1u); else { c.pc = 0x0018AF10u; return; } if (c.pc != 0x00189848u) [[unlikely]] return; }
L_00189848:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00189870:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 84u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 100u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189890u); set32(c.r[5], c.r[2].w[0] + 14u);  if (depth < kMaxDepth) unit_0024(c, 42u, depth + 1u); else { c.pc = 0x00190580u; return; } if (c.pc != 0x00189890u) [[unlikely]] return; }
L_00189890:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 24u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001898B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 96u)));
    c.budget -= 8;
    { const bool t = c.r[16].d[0] != 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001898D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0018991C; } }
L_001898D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26120u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001898F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00189920; } }
L_001898F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189900u);  if (depth < kMaxDepth) unit_0023(c, 39u, depth + 1u); else { c.pc = 0x0018C700u; return; } if (c.pc != 0x00189900u) [[unlikely]] return; }
L_00189900:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189914u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 401u, depth + 1u); else { c.pc = 0x0018AFC0u; return; } if (c.pc != 0x00189914u) [[unlikely]] return; }
L_00189914:
    st32((c.r[18].w[0] + 96u), c.r[17].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_0018991C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00189920:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00189940:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 96u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00189960; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00189990; } }
L_00189960:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_00189980; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189978u); set32(c.r[4], ld32((c.r[1].w[0] + 26120u)));  if (depth < kMaxDepth) unit_0023(c, 13u, depth + 1u); else { c.pc = 0x0018C240u; return; } if (c.pc != 0x00189978u) [[unlikely]] return; }
L_00189978:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 96u), 0u);  if (t) { goto L_0018998C; } }
L_00189980:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189988u); set32(c.r[4], ld32((c.r[1].w[0] + 26120u)));  if (depth < kMaxDepth) unit_0023(c, 21u, depth + 1u); else { c.pc = 0x0018C3E0u; return; } if (c.pc != 0x00189988u) [[unlikely]] return; }
L_00189988:
    st32((c.r[16].w[0] + 96u), 0u);
    c.budget -= 1;
L_0018998C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00189990:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001899A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 96u), 0u);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001899D8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26120u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001899CCu); set32(c.r[5], ld32((c.r[16].w[0] + 32u)));  if (depth < kMaxDepth) unit_0022(c, 500u, depth + 1u); else { c.pc = 0x0018BFA0u; return; } if (c.pc != 0x001899CCu) [[unlikely]] return; }
L_001899CC:
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00189A04; } }
L_001899D8:
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00189A04; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001899F0u); set32(c.r[4], ld32((c.r[16].w[0] + 80u)));  if (depth < kMaxDepth) unit_0022(c, 251u, depth + 1u); else { c.pc = 0x00189A20u; return; } if (c.pc != 0x001899F0u) [[unlikely]] return; }
L_001899F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 96u), c.r[2].w[0]);  if (t) { goto L_00189A00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00189A04; } }
L_00189A00:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00189A04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00189A20:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[18], c.r[2].w[0] << (c.r[5].w[0] & 31u));
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[19], ld32((c.r[1].w[0] + 26120u)));
    set32(c.r[16], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 15;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00189AB0; } }
L_00189A5C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189A68u); set32(c.r[5], c.r[2].w[0] - 1u);  if (depth < kMaxDepth) unit_0023(c, 4u, depth + 1u); else { c.pc = 0x0018C010u; return; } if (c.pc != 0x00189A68u) [[unlikely]] return; }
L_00189A68:
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[3].d[0] = c.r[18].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00189AAC; } }
    set32(c.r[5], ld32((c.r[2].w[0] + 12u)));
    c.r[3].d[0] = c.r[20].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00189AAC; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[1].d[0] = c.r[20].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00189AAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_00189AC4; } }
L_00189AAC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00189AB0:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] - c.r[17].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00189A5Cu | kUnwind; return; } goto L_00189A5C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 2;
L_00189AC4:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00189AE0:
    set32(c.r[8], ld32((c.r[4].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_00189B38; } }
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_00189AF8; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00189AF8:
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[7], ld32((c.r[8].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + 13168u);
    set32(c.r[6], ld32((c.r[8].w[0] + 20u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.r[3].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00189B34; } }
    set32(c.r[6], c.r[6].w[0] - c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    c.budget -= 2;
L_00189B34:
    st32((c.r[8].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 1;
L_00189B38:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00189B40:
    set32(c.r[4], ld32((c.r[4].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00189B68; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], c.r[5].w[0] + c.r[6].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 6u);  if (t) { goto L_00189B64; } }
    set32(c.r[5], c.r[3].w[0] - c.r[6].w[0]);
    c.budget -= 1;
L_00189B64:
    st32((c.r[4].w[0] + 20u), c.r[5].w[0]);
    c.budget -= 1;
L_00189B68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00189B70:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[1].w[0] + 26152u)));  c.pc = t; return; }
L_00189B80:
    set32(c.r[29], c.r[29].w[0] - 144u);
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
    set32(c.r[3], ld32((c.r[4].w[0] + 104u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull; c.r[20].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00189D40; } }
    set32(c.r[5], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189BC4u); set32(c.r[4], ld32((c.r[21].w[0] + 4u)));  if (depth < kMaxDepth) unit_0022(c, 180u, depth + 1u); else { c.pc = 0x00188FE0u; return; } if (c.pc != 0x00189BC4u) [[unlikely]] return; }
L_00189BC4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 182u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00189BD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 104u), 0u);  if (t) { goto L_00189D40; } }
L_00189BD8:
    set32(c.r[3], ld32((c.r[21].w[0] + 104u)));
    set32(c.r[2], 0u + 20u);
    set32(c.r[19], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[18], c.r[19].w[0] + c.r[20].w[0]);
    c.r[1].d[0] = c.r[18].sd[0] < 21ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_00189BF8; } }
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00189BF8:
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[1].w[0] + 26120u)));
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189C0Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 57u, depth + 1u); else { c.pc = 0x0018CA30u; return; } if (c.pc != 0x00189C0Cu) [[unlikely]] return; }
L_00189C0C:
    set32(c.r[23], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00189CE8; } }
L_00189C18:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], c.r[16].w[0] - c.r[23].w[0]);  if (t) { goto L_00189C58; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189C2Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 500u, depth + 1u); else { c.pc = 0x0018BFA0u; return; } if (c.pc != 0x00189C2Cu) [[unlikely]] return; }
L_00189C2C:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_00189CF4; } }
    set32(c.r[5], ld32((c.r[22].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189C44u); set32(c.r[4], ld32((c.r[21].w[0] + 100u)));  if (depth < kMaxDepth) unit_0024(c, 43u, depth + 1u); else { c.pc = 0x001905B0u; return; } if (c.pc != 0x00189C44u) [[unlikely]] return; }
L_00189C44:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189C50u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 335u, depth + 1u); else { c.pc = 0x0018A620u; return; } if (c.pc != 0x00189C50u) [[unlikely]] return; }
L_00189C50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00189C84; } }
L_00189C58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189C60u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 4u, depth + 1u); else { c.pc = 0x0018C010u; return; } if (c.pc != 0x00189C60u) [[unlikely]] return; }
L_00189C60:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_00189CF4; } }
    set32(c.r[5], ld32((c.r[22].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189C78u); set32(c.r[4], ld32((c.r[21].w[0] + 100u)));  if (depth < kMaxDepth) unit_0024(c, 43u, depth + 1u); else { c.pc = 0x001905B0u; return; } if (c.pc != 0x00189C78u) [[unlikely]] return; }
L_00189C78:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189C84u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 335u, depth + 1u); else { c.pc = 0x0018A620u; return; } if (c.pc != 0x00189C84u) [[unlikely]] return; }
L_00189C84:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_00189CE4; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00189CB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189CA4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 500u, depth + 1u); else { c.pc = 0x0018BFA0u; return; } if (c.pc != 0x00189CA4u) [[unlikely]] return; }
L_00189CA4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189CB8u);  if (depth < kMaxDepth) unit_0022(c, 484u, depth + 1u); else { c.pc = 0x0018BD60u; return; } if (c.pc != 0x00189CB8u) [[unlikely]] return; }
L_00189CB8:
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00189CE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189CD0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 500u, depth + 1u); else { c.pc = 0x0018BFA0u; return; } if (c.pc != 0x00189CD0u) [[unlikely]] return; }
L_00189CD0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189CE4u);  if (depth < kMaxDepth) unit_0022(c, 484u, depth + 1u); else { c.pc = 0x0018BD60u; return; } if (c.pc != 0x00189CE4u) [[unlikely]] return; }
L_00189CE4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00189CE8:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[16].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00189C18u | kUnwind; return; } goto L_00189C18; } }
L_00189CF4:
    set32(c.r[2], ld32((c.r[21].w[0] + 104u)));
    set32(c.r[2], c.r[2].w[0] - c.r[20].w[0]);
    st32((c.r[21].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 104u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_00189D38; } }
    st32((c.r[21].w[0] + 104u), 0u);
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00189D38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189D28u);  if (depth < kMaxDepth) unit_0023(c, 256u, depth + 1u); else { c.pc = 0x0018E780u; return; } if (c.pc != 0x00189D28u) [[unlikely]] return; }
L_00189D28:
    set32(c.r[5], ld32((c.r[21].w[0] + 8u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189D38u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 5u, depth + 1u); else { c.pc = 0x00190090u; return; } if (c.pc != 0x00189D38u) [[unlikely]] return; }
L_00189D38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189D40u);  if (depth < kMaxDepth) unit_0087(c, 346u, depth + 1u); else { c.pc = 0x0031F2D0u; return; } if (c.pc != 0x00189D40u) [[unlikely]] return; }
L_00189D40:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00189D70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[1].w[0] + 26120u)));
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[7], c.r[17].w[0] + 1u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189DA8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 57u, depth + 1u); else { c.pc = 0x0018CA30u; return; } if (c.pc != 0x00189DA8u) [[unlikely]] return; }
L_00189DA8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[1].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], c.r[17].w[0] - c.r[2].w[0]);  if (t) { goto L_00189DF0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189DC4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 500u, depth + 1u); else { c.pc = 0x0018BFA0u; return; } if (c.pc != 0x00189DC4u) [[unlikely]] return; }
L_00189DC4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00189E24; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189DDCu); set32(c.r[4], ld32((c.r[18].w[0] + 100u)));  if (depth < kMaxDepth) unit_0024(c, 43u, depth + 1u); else { c.pc = 0x001905B0u; return; } if (c.pc != 0x00189DDCu) [[unlikely]] return; }
L_00189DDC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189DE8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 335u, depth + 1u); else { c.pc = 0x0018A620u; return; } if (c.pc != 0x00189DE8u) [[unlikely]] return; }
L_00189DE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00189E1C; } }
L_00189DF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189DF8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 4u, depth + 1u); else { c.pc = 0x0018C010u; return; } if (c.pc != 0x00189DF8u) [[unlikely]] return; }
L_00189DF8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00189E24; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189E10u); set32(c.r[4], ld32((c.r[18].w[0] + 100u)));  if (depth < kMaxDepth) unit_0024(c, 43u, depth + 1u); else { c.pc = 0x001905B0u; return; } if (c.pc != 0x00189E10u) [[unlikely]] return; }
L_00189E10:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189E1Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 335u, depth + 1u); else { c.pc = 0x0018A620u; return; } if (c.pc != 0x00189E1Cu) [[unlikely]] return; }
L_00189E1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189E24u);  if (depth < kMaxDepth) unit_0087(c, 346u, depth + 1u); else { c.pc = 0x0031F2D0u; return; } if (c.pc != 0x00189E24u) [[unlikely]] return; }
L_00189E24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00189E40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 13312u);
    set32(c.r[3], c.r[3].w[0] + 13200u);
    st32((c.r[4].w[0] + 44u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 32u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 40u), 0u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 28u), c.r[3].w[0]);  c.pc = t; return; }
L_00189E70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00189EF4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 13312u);
    st32((c.r[17].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00189EAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189EACu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00189EACu) [[unlikely]] return; }
L_00189EAC:
    st32((c.r[17].w[0] + 36u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00189EC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189EC4u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00189EC4u) [[unlikely]] return; }
L_00189EC4:
    st32((c.r[17].w[0] + 40u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] << 48;  if (t) { goto L_00189EE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189EDCu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00189EDCu) [[unlikely]] return; }
L_00189EDC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_00189EE0:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[17].w[0] + 32u), 0u);  if (t) { goto L_00189EF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189EF4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00189EF4u) [[unlikely]] return; }
L_00189EF4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00189F10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + 13200u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 17;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00189F5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189F5Cu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00189F5Cu) [[unlikely]] return; }
L_00189F5C:
    st32((c.r[16].w[0] + 36u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00189F74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189F74u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00189F74u) [[unlikely]] return; }
L_00189F74:
    st32((c.r[16].w[0] + 40u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00189F8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189F8Cu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00189F8Cu) [[unlikely]] return; }
L_00189F8C:
    st32((c.r[16].w[0] + 32u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00189FA0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189FD8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0023(c, 69u, depth + 1u); else { c.pc = 0x0018CBD0u; return; } if (c.pc != 0x00189FD8u) [[unlikely]] return; }
L_00189FD8:
    set32(c.r[3], c.r[29].w[0] + 112u);
    set32(c.r[2], c.r[29].w[0] + 128u);
    c.f[3] = ld32((c.r[3].w[0]));
    set32(c.r[16], c.r[29].w[0] + 136u);
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    st32((c.r[29].w[0] + 156u), 0u);
    st32((c.r[29].w[0] + 152u), 0u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A014u); set32(c.r[17], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0022(c, 118u, depth + 1u); else { c.pc = 0x001889B0u; return; } if (c.pc != 0x0018A014u) [[unlikely]] return; }
L_0018A014:
    c.r[1].d[0] = c.r[2].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 15u);  if (t) { goto L_0018A024; } }
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_0018A024:
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0018A0C0; } }
L_0018A030:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[1].w[0] + 28312u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[9], c.r[29].w[0] + 156u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A050u); set32(c.r[10], c.r[29].w[0] + 152u);  if (depth < kMaxDepth) unit_001A(c, 45u, depth + 1u); else { c.pc = 0x00168AA0u; return; } if (c.pc != 0x0018A050u) [[unlikely]] return; }
L_0018A050:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_0018A0BC; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[3].d[0];  if (t) { goto L_0018A0CC; } }
    c.r[3].d[0] = ld8((c.r[18].w[0]));
    c.r[2].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018A0A0; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 152u)));
    c.r[21].d[0] = c.r[3].d[0] & 127ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A08Cu); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 307u, depth + 1u); else { c.pc = 0x0018A250u; return; } if (c.pc != 0x0018A08Cu) [[unlikely]] return; }
L_0018A08C:
    set32(c.r[3], ld32((c.r[29].w[0] + 156u)));
    set32(c.r[2], c.r[21].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[29].w[0] + 156u), c.r[2].w[0]);
    c.budget -= 5;
L_0018A0A0:
    set32(c.r[25], ld32((c.r[20].w[0] + 44u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 156u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A0BCu); c.r[7].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0018A0BCu) [[unlikely]] return; }
L_0018A0BC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0018A0C0:
    c.r[3].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018A030u | kUnwind; return; } goto L_0018A030; } }
L_0018A0CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0018A0F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0018A1DC; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0018A188; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0018A134; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0018A230; } }
L_0018A134:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0018A14C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0018A22C; } }
L_0018A14C:
    set32(c.r[3], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 128u);  if (t) { goto L_0018A174; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A160u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0018A160u) [[unlikely]] return; }
L_0018A160:
    st32((c.r[18].w[0] + 32u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A174u); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0018A174u) [[unlikely]] return; }
L_0018A174:
    set32(c.r[3], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[4], c.r[16].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[17].w[0]));  if (t) { goto L_0018A22C; } }
L_0018A188:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0018A1A0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0018A22C; } }
L_0018A1A0:
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 128u);  if (t) { goto L_0018A1C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A1B4u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0018A1B4u) [[unlikely]] return; }
L_0018A1B4:
    st32((c.r[18].w[0] + 36u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A1C8u); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0018A1C8u) [[unlikely]] return; }
L_0018A1C8:
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[4], c.r[16].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[17].w[0]));  if (t) { goto L_0018A22C; } }
L_0018A1DC:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0018A1F4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0018A22C; } }
L_0018A1F4:
    set32(c.r[3], ld32((c.r[18].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 128u);  if (t) { goto L_0018A21C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A208u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0018A208u) [[unlikely]] return; }
L_0018A208:
    st32((c.r[18].w[0] + 40u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[18].w[0] + 40u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A21Cu); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0018A21Cu) [[unlikely]] return; }
L_0018A21C:
    set32(c.r[3], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[4], c.r[16].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.budget -= 4;
L_0018A22C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0018A230:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0018A250:
    set32(c.r[29], c.r[29].w[0] - 256u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].d[0] = ld8((c.r[5].w[0]));
    c.r[3].d[0] = c.r[4].d[0] & 128ull;
    c.budget -= 16;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0018A310; } }
    c.r[22].d[0] = c.r[4].d[0] & 127ull;
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0018A304; } }
L_0018A2A0:
    c.r[6].d[0] = ld8((c.r[20].w[0]));
    set32(c.r[3], c.r[19].w[0] + c.r[6].w[0]);
    c.r[16].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = c.r[16].sd[0] > 0; set32(c.r[3], 0u + 16u);  if (t) { goto L_0018A2CC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A2C4u); set32(c.r[5], c.r[5].w[0] + 13216u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x0018A2C4u) [[unlikely]] return; }
L_0018A2C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_0018A314; } }
L_0018A2CC:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_0018A2F8; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 3u));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[20].w[0] + 2u));
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = ld8((c.r[20].w[0] + 1u));
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A2F8u); c.r[6].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0022(c, 300u, depth + 1u); else { c.pc = 0x0018A0F0u; return; } if (c.pc != 0x0018A2F8u) [[unlikely]] return; }
L_0018A2F8:
    set32(c.r[17], c.r[17].w[0] + c.r[16].w[0]);
    set32(c.r[20], c.r[20].w[0] + c.r[16].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 3;
L_0018A304:
    c.r[3].d[0] = c.r[17].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018A2A0u | kUnwind; return; } goto L_0018A2A0; } }
L_0018A310:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_0018A314:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_0018A340:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 8u), c.r[16].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 13;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0018A37C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A37Cu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0018A37Cu) [[unlikely]] return; }
L_0018A37C:
    st32((c.r[17].w[0] + 32u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0018A394; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A394u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0018A394u) [[unlikely]] return; }
L_0018A394:
    st32((c.r[17].w[0] + 36u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0018A3B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A3ACu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0018A3ACu) [[unlikely]] return; }
L_0018A3AC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0018A3B0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A3BCu); st32((c.r[17].w[0] + 40u), 0u);  if (depth < kMaxDepth) unit_0022(c, 293u, depth + 1u); else { c.pc = 0x00189FA0u; return; } if (c.pc != 0x0018A3BCu) [[unlikely]] return; }
L_0018A3BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0018A3D0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[23], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A418u); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 75u, depth + 1u); else { c.pc = 0x0011CEF8u; return; } if (c.pc != 0x0018A418u) [[unlikely]] return; }
L_0018A418:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A424u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 75u, depth + 1u); else { c.pc = 0x0011CEF8u; return; } if (c.pc != 0x0018A424u) [[unlikely]] return; }
L_0018A424:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A430u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 65u, depth + 1u); else { c.pc = 0x0011CC10u; return; } if (c.pc != 0x0018A430u) [[unlikely]] return; }
L_0018A430:
    st64((c.r[29].w[0] + 168u), c.r[2].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0018A438:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0018A474; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_0018A468; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0018A45C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0018A480; } }
L_0018A45C:
    set32(c.r[16], ld32((c.r[20].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[21].w[0] + 32u)));  if (t) { goto L_0018A47C; } }
L_0018A468:
    set32(c.r[16], ld32((c.r[20].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[21].w[0] + 36u)));  if (t) { goto L_0018A47C; } }
L_0018A474:
    set32(c.r[17], ld32((c.r[21].w[0] + 40u)));
    set32(c.r[16], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 2;
L_0018A47C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0018A480:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A488u);  if (depth < kMaxDepth) unit_0023(c, 425u, depth + 1u); else { c.pc = 0x0018FE80u; return; } if (c.pc != 0x0018A488u) [[unlikely]] return; }
L_0018A488:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[22].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_0018A560; } }
    set32(c.r[30], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0018A50C; } }
L_0018A49C:
    set32(c.r[2], c.r[19].w[0] << 1);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0018A4B4; } }
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0018A4B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A4BCu);  if (depth < kMaxDepth) unit_0007(c, 75u, depth + 1u); else { c.pc = 0x0011CEF8u; return; } if (c.pc != 0x0018A4BCu) [[unlikely]] return; }
L_0018A4BC:
    c.r[5].d[0] = ld64((c.r[29].w[0] + 168u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A4C8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x0018A4C8u) [[unlikely]] return; }
L_0018A4C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A4D0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 78u, depth + 1u); else { c.pc = 0x0011CFB0u; return; } if (c.pc != 0x0018A4D0u) [[unlikely]] return; }
L_0018A4D0:
    set32(c.r[3], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[7], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0018A4F8; } }
L_0018A4E0:
    set32(c.r[4], c.r[16].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[4].w[0]));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0018A4F4; } }
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[22].w[0]));
    c.budget -= 1;
L_0018A4F4:
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.budget -= 1;
L_0018A4F8:
    c.r[1].d[0] = c.r[30].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], c.r[6].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018A4E0u | kUnwind; return; } goto L_0018A4E0; } }
    c.r[30].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 2;
L_0018A50C:
    set32(c.r[3], ld32((c.r[21].w[0] + 16u)));
    c.r[3].d[0] = c.r[19].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018A49Cu | kUnwind; return; } goto L_0018A49C; } }
    c.r[5].d[0] = ld16((c.r[17].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0018A554; } }
L_0018A528:
    set32(c.r[3], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[6], c.r[16].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[6].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0018A54C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { goto L_0018A550; } }
L_0018A54C:
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_0018A550:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_0018A554:
    c.r[3].d[0] = c.r[4].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018A528u | kUnwind; return; } goto L_0018A528; } }
L_0018A560:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018A438u | kUnwind; return; } goto L_0018A438; } }
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
L_0018A5A0:
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(21ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  if (t) { goto L_0018A610; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 13248u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00188000u < 16384u) { entry = entries_0022[(t - 0x00188000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0018A5C8:
    c.r[2].d[0] = c.r[4].d[0] ^ 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_0018A614; } }
L_0018A5D4:
    c.r[2].d[0] = c.r[4].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { goto L_0018A614; } }
L_0018A5E0:
    c.r[2].d[0] = c.r[4].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { goto L_0018A614; } }
L_0018A5EC:
    c.r[2].d[0] = c.r[4].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { goto L_0018A614; } }
L_0018A5F8:
    c.r[2].d[0] = c.r[4].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { goto L_0018A614; } }
L_0018A604:
    c.r[2].d[0] = c.r[4].d[0] ^ 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_0018A614; } }
L_0018A610:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0018A614:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0018A620:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 28u), c.r[5].w[0]);  c.pc = t; return; }
L_0018A630:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A644u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 283u, depth + 1u); else { c.pc = 0x00189E40u; return; } if (c.pc != 0x0018A644u) [[unlikely]] return; }
L_0018A644:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00190000u);
    set32(c.r[2], c.r[2].w[0] - 13328u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00190000u);
    set32(c.r[4], c.r[16].w[0] + 112u);
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 6592u);
    set32(c.r[6], c.r[6].w[0] - 6528u);
    set32(c.r[7], 0u + 20u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A670u); set32(c.r[8], 0u + 768u);  if (depth < kMaxDepth) unit_0000(c, 89u, depth + 1u); else { c.pc = 0x00100790u; return; } if (c.pc != 0x0018A670u) [[unlikely]] return; }
L_0018A670:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A678u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 344u, depth + 1u); else { c.pc = 0x0018A710u; return; } if (c.pc != 0x0018A678u) [[unlikely]] return; }
L_0018A678:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0018A690:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0018A6F4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00190000u);
    set32(c.r[2], c.r[2].w[0] - 13328u);
    set32(c.r[4], c.r[17].w[0] + 112u);
    st32((c.r[17].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 6528u);
    set32(c.r[6], 0u + 20u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A6D0u); set32(c.r[7], 0u + 768u);  if (depth < kMaxDepth) unit_0000(c, 86u, depth + 1u); else { c.pc = 0x00100720u; return; } if (c.pc != 0x0018A6D0u) [[unlikely]] return; }
L_0018A6D0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A6DCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 284u, depth + 1u); else { c.pc = 0x00189E70u; return; } if (c.pc != 0x0018A6DCu) [[unlikely]] return; }
L_0018A6DC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0018A6F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A6F4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0018A6F4u) [[unlikely]] return; }
L_0018A6F4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0018A6F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0018A710:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A730u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0022(c, 289u, depth + 1u); else { c.pc = 0x00189F10u; return; } if (c.pc != 0x0018A730u) [[unlikely]] return; }
L_0018A730:
    set32(c.r[4], c.r[19].w[0] + 48u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A740u); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0018A740u) [[unlikely]] return; }
L_0018A740:
    set32(c.r[18], c.r[19].w[0] + 112u);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_0018A74C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A758u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0023(c, 252u, depth + 1u); else { c.pc = 0x0018E700u; return; } if (c.pc != 0x0018A758u) [[unlikely]] return; }
L_0018A758:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018A74Cu | kUnwind; return; } goto L_0018A74C; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018A74Cu | kUnwind; return; } goto L_0018A74C; } }
    st8((c.r[19].w[0] + 15472u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0018A7A0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    set32(c.r[3], c.r[7].w[0] << 2);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    set32(c.r[23], c.r[3].w[0] << 2);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0018A950; } }
L_0018A7EC:
    set32(c.r[2], 0u + 124u);
    c.r[19].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 4;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_0018A8A4; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 1u));
    set32(c.r[20], c.r[20].w[0] + 8u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.r[19].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 6;
L_0018A814:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A81Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 333u, depth + 1u); else { c.pc = 0x0018F220u; return; } if (c.pc != 0x0018A81Cu) [[unlikely]] return; }
L_0018A81C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A82Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 328u, depth + 1u); else { c.pc = 0x0018A5A0u; return; } if (c.pc != 0x0018A82Cu) [[unlikely]] return; }
L_0018A82C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] - 1u);  if (t) { goto L_0018A88C; } }
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[23].w[0]);
    set32(c.r[18], c.r[2].w[0] + 112u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A858u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 252u, depth + 1u); else { c.pc = 0x0018E700u; return; } if (c.pc != 0x0018A858u) [[unlikely]] return; }
L_0018A858:
    st8((c.r[18].w[0] + 10u), static_cast<std::uint8_t>(c.r[19].w[0]));
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0]), c.r[16].w[0]);
    set32(c.r[5], c.r[21].w[0] + c.r[20].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 16u), 0u);  if (t) { goto L_0018A880; } }
L_0018A870:
    set32(c.r[3], c.r[18].w[0] + c.r[6].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
L_0018A880:
    c.r[3].d[0] = c.r[6].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[5].w[0] + c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018A870u | kUnwind; return; } goto L_0018A870; } }
L_0018A88C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 21ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + c.r[17].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018A814u | kUnwind; return; } goto L_0018A814; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[30].w[0] - 1u);  if (t) { goto L_0018A954; } }
L_0018A8A4:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0018A8B8; } }
    c.r[2].d[0] = c.r[19].sd[0] < 13ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0018A8CC; } }
L_0018A8B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A8C0u);  if (depth < kMaxDepth) unit_0023(c, 333u, depth + 1u); else { c.pc = 0x0018F220u; return; } if (c.pc != 0x0018A8C0u) [[unlikely]] return; }
L_0018A8C0:
    set32(c.r[3], c.r[2].w[0] + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] + c.r[3].w[0]);  if (t) { goto L_0018A950; } }
L_0018A8CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A8D4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 333u, depth + 1u); else { c.pc = 0x0018F220u; return; } if (c.pc != 0x0018A8D4u) [[unlikely]] return; }
L_0018A8D4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A8E4u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 328u, depth + 1u); else { c.pc = 0x0018A5A0u; return; } if (c.pc != 0x0018A8E4u) [[unlikely]] return; }
L_0018A8E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[18].w[0] + 2u);  if (t) { goto L_0018A94C; } }
    set32(c.r[3], c.r[19].w[0] - 1u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[23].w[0]);
    set32(c.r[16], c.r[2].w[0] + 112u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A914u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 252u, depth + 1u); else { c.pc = 0x0018E700u; return; } if (c.pc != 0x0018A914u) [[unlikely]] return; }
L_0018A914:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1u));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0018A934; } }
L_0018A924:
    set32(c.r[3], c.r[16].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 2u));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
L_0018A934:
    c.r[3].d[0] = c.r[5].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[17].w[0] + c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018A924u | kUnwind; return; } goto L_0018A924; } }
    st32((c.r[16].w[0]), c.r[19].w[0]);
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[3], c.r[18].w[0] + 2u);
    c.budget -= 3;
L_0018A94C:
    set32(c.r[20], c.r[20].w[0] + c.r[3].w[0]);
    c.budget -= 1;
L_0018A950:
    set32(c.r[3], c.r[30].w[0] - 1u);
    c.budget -= 1;
L_0018A954:
    c.r[3].d[0] = c.r[20].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[21].w[0] + c.r[20].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018A7ECu | kUnwind; return; } goto L_0018A7EC; } }
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0018A990:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[5].w[0] + 4u));
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[5].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 32767ull;
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[5].w[0] + 5u));
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A9E0u); c.r[21].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 311u, depth + 1u); else { c.pc = 0x0018A340u; return; } if (c.pc != 0x0018A9E0u) [[unlikely]] return; }
L_0018A9E0:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 6u));
    st32((c.r[21].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 32u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0018AA20; } }
L_0018A9F4:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0018AA20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018AA0Cu);  if (depth < kMaxDepth) unit_0023(c, 425u, depth + 1u); else { c.pc = 0x0018FE80u; return; } if (c.pc != 0x0018AA0Cu) [[unlikely]] return; }
L_0018AA0C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018AA20u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 300u, depth + 1u); else { c.pc = 0x0018A0F0u; return; } if (c.pc != 0x0018AA20u) [[unlikely]] return; }
L_0018AA20:
    set32(c.r[2], ld32((c.r[21].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0018AA58; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_0018AA58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018AA44u);  if (depth < kMaxDepth) unit_0023(c, 425u, depth + 1u); else { c.pc = 0x0018FE80u; return; } if (c.pc != 0x0018AA44u) [[unlikely]] return; }
L_0018AA44:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018AA58u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 300u, depth + 1u); else { c.pc = 0x0018A0F0u; return; } if (c.pc != 0x0018AA58u) [[unlikely]] return; }
L_0018AA58:
    set32(c.r[2], ld32((c.r[21].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[21].w[0] + 48u);  if (t) { goto L_0018AA94; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_0018AA90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018AA7Cu);  if (depth < kMaxDepth) unit_0023(c, 425u, depth + 1u); else { c.pc = 0x0018FE80u; return; } if (c.pc != 0x0018AA7Cu) [[unlikely]] return; }
L_0018AA7C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[6], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018AA90u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 300u, depth + 1u); else { c.pc = 0x0018A0F0u; return; } if (c.pc != 0x0018AA90u) [[unlikely]] return; }
L_0018AA90:
    set32(c.r[4], c.r[21].w[0] + 48u);
    c.budget -= 1;
L_0018AA94:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018AAA0u); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0018AAA0u) [[unlikely]] return; }
L_0018AAA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0018ABF8; } }
L_0018AAA8:
    set32(c.r[4], ld32((c.r[21].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], c.r[19].w[0] << 1);  if (t) { goto L_0018AAD8; } }
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0018AAD8; } }
    set32(c.r[4], c.r[21].w[0] + c.r[19].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 48u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 48u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0018ABF4; } }
L_0018AAD8:
    set32(c.r[4], ld32((c.r[21].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], c.r[19].w[0] << 1);  if (t) { goto L_0018AB08; } }
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0018AB08; } }
    set32(c.r[4], c.r[21].w[0] + c.r[19].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 48u));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 48u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0018ABF4; } }
L_0018AB08:
    set32(c.r[4], ld32((c.r[21].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], c.r[19].w[0] << 1);  if (t) { goto L_0018AB38; } }
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0018AB38; } }
    set32(c.r[4], c.r[21].w[0] + c.r[19].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 48u));
    c.r[3].d[0] = c.r[3].d[0] | 16ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 48u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0018ABF4; } }
L_0018AB38:
    set32(c.r[2], c.r[19].w[0] << 2);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[16], c.r[21].w[0] + c.r[19].w[0]);
    set32(c.r[17], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.budget -= 6;
L_0018AB50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018AB58u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 328u, depth + 1u); else { c.pc = 0x0018A5A0u; return; } if (c.pc != 0x0018AB58u) [[unlikely]] return; }
L_0018AB58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018ABE4; } }
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018AB7Cu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0023(c, 251u, depth + 1u); else { c.pc = 0x0018E6D0u; return; } if (c.pc != 0x0018AB7Cu) [[unlikely]] return; }
L_0018AB7C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[1].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;  if (t) { goto L_0018ABE4; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_0018ABA8; } }
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 13344u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00188000u < 16384u) { entry = entries_0022[(t - 0x00188000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0018ABA8:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 48u));
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 48u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0018ABE4; } }
L_0018ABB8:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 48u));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 48u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0018ABE4; } }
L_0018ABC8:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 48u));
    c.r[3].d[0] = c.r[3].d[0] | 32ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 48u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0018ABE4; } }
L_0018ABD8:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 48u));
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    st8((c.r[16].w[0] + 48u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0018ABE4:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[18].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018AB50u | kUnwind; return; } goto L_0018AB50; } }
L_0018ABF4:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0018ABF8:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 6u));
    c.r[3].d[0] = c.r[19].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018AAA8u | kUnwind; return; } goto L_0018AAA8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0018AC30:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[22], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018AC74u); set32(c.r[4], c.r[22].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0007(c, 75u, depth + 1u); else { c.pc = 0x0011CEF8u; return; } if (c.pc != 0x0018AC74u) [[unlikely]] return; }
L_0018AC74:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018AC80u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 75u, depth + 1u); else { c.pc = 0x0011CEF8u; return; } if (c.pc != 0x0018AC80u) [[unlikely]] return; }
L_0018AC80:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018AC8Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 65u, depth + 1u); else { c.pc = 0x0011CC10u; return; } if (c.pc != 0x0018AC8Cu) [[unlikely]] return; }
L_0018AC8C:
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[21].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[1].d[0] = c.r[5].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    if (c.r[1].d[0] == 0) c.r[22].d[0] = c.r[5].d[0];
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[19].w[0] + 1u);
    c.budget -= 12;
L_0018ACBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018ACC4u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 328u, depth + 1u); else { c.pc = 0x0018A5A0u; return; } if (c.pc != 0x0018ACC4u) [[unlikely]] return; }
L_0018ACC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018AEC0; } }
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[23], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 160u), c.r[2].w[0]);  if (t) { goto L_0018AE58; } }
    set32(c.r[2], c.r[21].w[0] + c.r[18].w[0]);
    c.budget -= 1;
L_0018ACF0:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 48u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018AE54; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0018AD5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018AD0Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 75u, depth + 1u); else { c.pc = 0x0011CEF8u; return; } if (c.pc != 0x0018AD0Cu) [[unlikely]] return; }
L_0018AD0C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018AD18u); c.r[5].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x0018AD18u) [[unlikely]] return; }
L_0018AD18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018AD20u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 78u, depth + 1u); else { c.pc = 0x0011CFB0u; return; } if (c.pc != 0x0018AD20u) [[unlikely]] return; }
L_0018AD20:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0018AD2C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0018AD2C:
    set32(c.r[4], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0018AE68; } }
    c.r[1].d[0] = c.r[23].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0018AE54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[23].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0018AD5C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0018AD5C:
    set32(c.r[3], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].d[0] = c.r[22].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0018AE68; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[6], c.r[19].w[0] + 1u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018AD98u); set32(c.r[17], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0023(c, 283u, depth + 1u); else { c.pc = 0x0018EA40u; return; } if (c.pc != 0x0018AD98u) [[unlikely]] return; }
L_0018AD98:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0018AE44; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0018AE3C; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[7], c.r[17].w[0] + 4u);
    set32(c.r[6], c.r[16].w[0] + 4u);
    set32(c.r[4], 0u + 3u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 5;
L_0018ADD0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 1u)));
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[7], c.r[7].w[0] + 2u);
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[6], c.r[6].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018ADD0u | kUnwind; return; } goto L_0018ADD0; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 10u));
    set32(c.r[2], 0u + 3u);
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 16u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018AE1Cu); set32(c.r[4], c.r[2].w[0] - c.r[18].w[0]);  if (depth < kMaxDepth) unit_0007(c, 75u, depth + 1u); else { c.pc = 0x0011CEF8u; return; } if (c.pc != 0x0018AE1Cu) [[unlikely]] return; }
L_0018AE1C:
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018AE28u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x0018AE28u) [[unlikely]] return; }
L_0018AE28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018AE30u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 85u, depth + 1u); else { c.pc = 0x0011D0D8u; return; } if (c.pc != 0x0018AE30u) [[unlikely]] return; }
L_0018AE30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0018AE54; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_0018AE3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_0018AE54; } }
L_0018AE44:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018AE54; } }
    set32(c.r[23], c.r[23].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_0018AE54:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0018AE58:
    set32(c.r[2], ld32((c.r[21].w[0] + 16u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[21].w[0] + c.r[18].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018ACF0u | kUnwind; return; } goto L_0018ACF0; } }
L_0018AE68:
    set32(c.r[5], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[6], c.r[19].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018AE78u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 283u, depth + 1u); else { c.pc = 0x0018EA40u; return; } if (c.pc != 0x0018AE78u) [[unlikely]] return; }
L_0018AE78:
    set32(c.r[5], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_0018AEB0; } }
L_0018AE84:
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0018AE98; } }
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    c.budget -= 1;
L_0018AE98:
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 20u);
    c.budget -= 6;
L_0018AEB0:
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018AE84u | kUnwind; return; } goto L_0018AE84; } }
L_0018AEC0:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[19].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018ACBCu | kUnwind; return; } goto L_0018ACBC; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018AEDCu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 316u, depth + 1u); else { c.pc = 0x0018A3D0u; return; } if (c.pc != 0x0018AEDCu) [[unlikely]] return; }
L_0018AEDC:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_0018AF10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0018AF3C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018AF34u); set32(c.r[4], ld32((c.r[1].w[0] + 26120u)));  if (depth < kMaxDepth) unit_0023(c, 39u, depth + 1u); else { c.pc = 0x0018C700u; return; } if (c.pc != 0x0018AF34u) [[unlikely]] return; }
L_0018AF34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0018AF58; } }
L_0018AF3C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26120u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[1].d[0] = c.r[1].d[0] | 2932ull;
    set32(c.r[16], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018AF58u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 344u, depth + 1u); else { c.pc = 0x0018A710u; return; } if (c.pc != 0x0018AF58u) [[unlikely]] return; }
L_0018AF58:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = ld16((c.r[17].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 32767ull;
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 5u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018AF80u); st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 361u, depth + 1u); else { c.pc = 0x0018A990u; return; } if (c.pc != 0x0018AF80u) [[unlikely]] return; }
L_0018AF80:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 2u)));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 4u));
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 6u));
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 7u));
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0018AFC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 48u);
    set32(c.r[5], c.r[17].w[0] + 48u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018AFF0u); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x0018AFF0u) [[unlikely]] return; }
L_0018AFF0:
    set32(c.r[4], c.r[18].w[0] + 112u);
    set32(c.r[5], c.r[17].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018B000u); set32(c.r[6], 0u + 15360u);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x0018B000u) [[unlikely]] return; }
L_0018B000:
    c.r[3].d[0] = ld8((c.r[17].w[0]));
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[18].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    st32((c.r[18].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    st32((c.r[18].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 13;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[18].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_0018B040; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_0018B050; } }
L_0018B040:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018B04Cu); set32(c.r[4], ld32((c.r[1].w[0] + 26120u)));  if (depth < kMaxDepth) unit_0023(c, 42u, depth + 1u); else { c.pc = 0x0018C7D0u; return; } if (c.pc != 0x0018B04Cu) [[unlikely]] return; }
L_0018B04C:
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 1;
L_0018B050:
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    st32((c.r[18].w[0] + 28u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 15472u));
    st8((c.r[18].w[0] + 15472u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0018B074; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018B074u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0018B074u) [[unlikely]] return; }
L_0018B074:
    st32((c.r[18].w[0] + 32u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0018B08C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018B08Cu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0018B08Cu) [[unlikely]] return; }
L_0018B08C:
    st32((c.r[18].w[0] + 36u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 40u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0018B0A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018B0A4u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0018B0A4u) [[unlikely]] return; }
L_0018B0A4:
    st32((c.r[18].w[0] + 40u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], 0u + 128u);  if (t) { goto L_0018B0D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018B0BCu);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0018B0BCu) [[unlikely]] return; }
L_0018B0BC:
    st32((c.r[18].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018B0D0u); set32(c.r[6], 0u + 128u);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x0018B0D0u) [[unlikely]] return; }
L_0018B0D0:
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], 0u + 128u);  if (t) { goto L_0018B0F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018B0E4u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0018B0E4u) [[unlikely]] return; }
L_0018B0E4:
    st32((c.r[18].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018B0F8u); set32(c.r[6], 0u + 128u);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x0018B0F8u) [[unlikely]] return; }
L_0018B0F8:
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], 0u + 128u);  if (t) { goto L_0018B120; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018B10Cu);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0018B10Cu) [[unlikely]] return; }
L_0018B10C:
    st32((c.r[18].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018B120u); set32(c.r[6], 0u + 128u);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x0018B120u) [[unlikely]] return; }
L_0018B120:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0018B140:
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    c.r[6].d[0] = 0ull | 61440ull;
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 12u)));
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 20u)));
    st32((c.r[4].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 24u)));
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 28u)));
    st32((c.r[4].w[0] + 28u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[5].w[0] + 48u));
    st8((c.r[4].w[0] + 48u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] + 52u);
    c.budget -= 22;
    { set32(c.r[4], c.r[4].w[0] + 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00124D20u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 40u, depth); }
L_0018B1A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018B1B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 283u, depth + 1u); else { c.pc = 0x00189E40u; return; } if (c.pc != 0x0018B1B4u) [[unlikely]] return; }
L_0018B1B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00190000u);
    set32(c.r[2], c.r[2].w[0] - 13344u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00190000u);
    set32(c.r[4], c.r[16].w[0] + 52u);
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 6592u);
    set32(c.r[6], c.r[6].w[0] - 6528u);
    set32(c.r[7], 0u + 20u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018B1E0u); set32(c.r[8], 0u + 3072u);  if (depth < kMaxDepth) unit_0000(c, 89u, depth + 1u); else { c.pc = 0x00100790u; return; } if (c.pc != 0x0018B1E0u) [[unlikely]] return; }
L_0018B1E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018B1E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 423u, depth + 1u); else { c.pc = 0x0018B280u; return; } if (c.pc != 0x0018B1E8u) [[unlikely]] return; }
L_0018B1E8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0018B200:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0018B264; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00190000u);
    set32(c.r[2], c.r[2].w[0] - 13344u);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 6528u);
    set32(c.r[6], 0u + 20u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018B240u); set32(c.r[7], 0u + 3072u);  if (depth < kMaxDepth) unit_0000(c, 86u, depth + 1u); else { c.pc = 0x00100720u; return; } if (c.pc != 0x0018B240u) [[unlikely]] return; }
L_0018B240:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018B24Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 284u, depth + 1u); else { c.pc = 0x00189E70u; return; } if (c.pc != 0x0018B24Cu) [[unlikely]] return; }
L_0018B24C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0018B268; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018B264u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0018B264u) [[unlikely]] return; }
L_0018B264:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0018B268:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0018B280:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018B29Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 289u, depth + 1u); else { c.pc = 0x00189F10u; return; } if (c.pc != 0x0018B29Cu) [[unlikely]] return; }
L_0018B29C:
    st8((c.r[16].w[0] + 48u), static_cast<std::uint8_t>(0u));
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[16].w[0] + 52u);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_0018B2AC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018B2B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0023(c, 252u, depth + 1u); else { c.pc = 0x0018E700u; return; } if (c.pc != 0x0018B2B8u) [[unlikely]] return; }
L_0018B2B8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 24ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018B2ACu | kUnwind; return; } goto L_0018B2AC; } }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018B2ACu | kUnwind; return; } goto L_0018B2AC; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0018B2F0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    set32(c.r[3], c.r[7].w[0] << 2);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[22], c.r[3].w[0] << 2);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[3], c.r[4].w[0] + c.r[22].w[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 188u), c.r[6].w[0]);
    c.budget -= 21;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 160u), c.r[3].w[0]);  if (t) { goto L_0018B4F4; } }
L_0018B344:
    set32(c.r[2], 0u + 124u);
    c.r[18].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0018B43C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.r[1].d[0] = 0ull | 53812ull;
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1u));
    set32(c.r[5], 0u + 1u);
    set32(c.r[16], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018B37Cu); c.r[23].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0023(c, 252u, depth + 1u); else { c.pc = 0x0018E700u; return; } if (c.pc != 0x0018B37Cu) [[unlikely]] return; }
L_0018B37C:
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(c.r[23].w[0]));
    set32(c.r[2], 0u + 126u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 16u), 0u);
    c.budget -= 5;
L_0018B390:
    set32(c.r[2], c.r[17].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[16].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = ld8((c.r[2].w[0] + 2u));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018B390u | kUnwind; return; } goto L_0018B390; } }
    set32(c.r[2], c.r[19].w[0] + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018B3B8u); set32(c.r[4], c.r[20].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 442u, depth + 1u); else { c.pc = 0x0018B540u; return; } if (c.pc != 0x0018B3B8u) [[unlikely]] return; }
L_0018B3B8:
    set32(c.r[19], c.r[19].w[0] + 8u);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0018B3C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018B3C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 333u, depth + 1u); else { c.pc = 0x0018F220u; return; } if (c.pc != 0x0018B3C8u) [[unlikely]] return; }
L_0018B3C8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 9);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    set32(c.r[16], c.r[2].w[0] + 52u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018B3F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 252u, depth + 1u); else { c.pc = 0x0018E700u; return; } if (c.pc != 0x0018B3F0u) [[unlikely]] return; }
L_0018B3F0:
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(c.r[23].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0]), c.r[17].w[0]);
    set32(c.r[6], c.r[20].w[0] + c.r[19].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), 0u);  if (t) { goto L_0018B418; } }
L_0018B408:
    set32(c.r[3], c.r[16].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
L_0018B418:
    c.r[3].d[0] = c.r[5].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[6].w[0] + c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018B408u | kUnwind; return; } goto L_0018B408; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 21ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + c.r[18].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018B3C0u | kUnwind; return; } goto L_0018B3C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 188u)));  if (t) { goto L_0018B4F8; } }
L_0018B43C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018B444u);  if (depth < kMaxDepth) unit_0023(c, 333u, depth + 1u); else { c.pc = 0x0018F220u; return; } if (c.pc != 0x0018B444u) [[unlikely]] return; }
L_0018B444:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018B454u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 443u, depth + 1u); else { c.pc = 0x0018B580u; return; } if (c.pc != 0x0018B454u) [[unlikely]] return; }
L_0018B454:
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << 9);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    set32(c.r[16], c.r[2].w[0] + 52u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018B47Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 252u, depth + 1u); else { c.pc = 0x0018E700u; return; } if (c.pc != 0x0018B47Cu) [[unlikely]] return; }
L_0018B47C:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1u));
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0]), c.r[18].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), 0u);  if (t) { goto L_0018B4A4; } }
L_0018B494:
    set32(c.r[3], c.r[16].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 2u));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
L_0018B4A4:
    c.r[3].d[0] = c.r[5].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[17].w[0] + c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018B494u | kUnwind; return; } goto L_0018B494; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[5].sd[0] < 6ll ? 1ull : 0ull;  if (t) { goto L_0018B4C8; } }
L_0018B4B8:
    set32(c.r[3], c.r[16].w[0] + c.r[5].w[0]);
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[5].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
L_0018B4C8:
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018B4B8u | kUnwind; return; } goto L_0018B4B8; } }
    set32(c.r[3], 0u + 21u);
    c.budget -= 3;
    { const bool t = c.r[30].d[0] != c.r[3].d[0]; set32(c.r[3], c.r[23].w[0] + 2u);  if (t) { goto L_0018B4F0; } }
    set32(c.r[2], c.r[19].w[0] + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018B4ECu); set32(c.r[4], c.r[20].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 442u, depth + 1u); else { c.pc = 0x0018B540u; return; } if (c.pc != 0x0018B4ECu) [[unlikely]] return; }
L_0018B4EC:
    set32(c.r[3], c.r[23].w[0] + 2u);
    c.budget -= 1;
L_0018B4F0:
    set32(c.r[19], c.r[19].w[0] + c.r[3].w[0]);
    c.budget -= 1;
L_0018B4F4:
    set32(c.r[3], ld32((c.r[29].w[0] + 188u)));
    c.budget -= 1;
L_0018B4F8:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[3].d[0] = c.r[19].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[20].w[0] + c.r[19].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018B344u | kUnwind; return; } goto L_0018B344; } }
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_0018B540:
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[29], c.r[29].w[0] - 16u);
    st8((c.r[29].w[0] + 14u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    st8((c.r[29].w[0] + 15u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    st8((c.r[29].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 3u));
    st8((c.r[29].w[0] + 13u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 4u));
    st8((c.r[29].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 5u));
    st8((c.r[29].w[0] + 11u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0018B580:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[1].d[0] = c.r[2].sd[0] < 21ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0018B59C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0018B5C8; } }
L_0018B59C:
    set32(c.r[3], 0u + 126u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_0018B5B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 21u);  if (t) { goto L_0018B5C4; } }
L_0018B5B0:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018B5C0u); set32(c.r[5], c.r[5].w[0] + 13408u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x0018B5C0u) [[unlikely]] return; }
L_0018B5C0:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0018B5C4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0018B5C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0018B5D0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0018A340u | kUnwind; return; } goto L_0018A340; }
L_0018B5E0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[19], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[17], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 14;
L_0018B618:
    set32(c.r[18], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 9);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[2].w[0] + 52u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018B640u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 283u, depth + 1u); else { c.pc = 0x0018EA40u; return; } if (c.pc != 0x0018B640u) [[unlikely]] return; }
L_0018B640:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[10], 0u + 1u);  if (t) { goto L_0018B6F4; } }
L_0018B650:
    set32(c.r[4], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0018B6C4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[10].d[0];  if (t) { goto L_0018B6E8; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[9], c.r[16].w[0] + 4u);
    set32(c.r[8], c.r[3].w[0] + 4u);
    set32(c.r[7], 0u + 3u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 5;
L_0018B67C:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0])));
    set32(c.r[7], c.r[7].w[0] - 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 1u)));
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[9], c.r[9].w[0] + 2u);
    st8((c.r[8].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 8;
    { const bool t = c.r[7].sd[0] > 0; set32(c.r[8], c.r[8].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018B67Cu | kUnwind; return; } goto L_0018B67C; } }
    c.r[6].d[0] = ld8((c.r[16].w[0] + 10u));
    set32(c.r[4], c.r[17].w[0] - c.r[18].w[0]);
    st8((c.r[3].w[0] + 10u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[6], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[3].w[0] + 12u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 16u)));
    st32((c.r[3].w[0] + 16u), c.r[6].w[0]);
    st32((c.r[3].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 10u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0018B6E8; } }
L_0018B6C4:
    set32(c.r[4], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[6], c.r[4].w[0] - 1u);  if (t) { goto L_0018B6E8; } }
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[18], c.r[18].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[16], c.r[16].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
L_0018B6E8:
    set32(c.r[16], c.r[16].w[0] + 20u);
    set32(c.r[3], c.r[3].w[0] + 20u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 3;
L_0018B6F4:
    c.r[4].d[0] = c.r[18].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018B650u | kUnwind; return; } goto L_0018B650; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < 13ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018B618u | kUnwind; return; } goto L_0018B618; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0018B740:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018B778u); set32(c.r[17], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 118u, depth + 1u); else { c.pc = 0x001889B0u; return; } if (c.pc != 0x0018B778u) [[unlikely]] return; }
L_0018B778:
    c.r[3].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0018B794; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018B78Cu);  if (depth < kMaxDepth) unit_0022(c, 118u, depth + 1u); else { c.pc = 0x001889B0u; return; } if (c.pc != 0x0018B78Cu) [[unlikely]] return; }
L_0018B78C:
    set32(c.r[17], c.r[2].w[0] - 1u);
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0018B794:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[19].sd[0] < 24ll ? 1ull : 0ull;  if (t) { goto L_0018B860; } }
L_0018B79C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_0018B7AC; } }
    set32(c.r[19], c.r[19].w[0] + 12u);
    c.budget -= 1;
L_0018B7AC:
    set32(c.r[18], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 9);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[2].w[0] + 52u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018B7D4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 283u, depth + 1u); else { c.pc = 0x0018EA40u; return; } if (c.pc != 0x0018B7D4u) [[unlikely]] return; }
L_0018B7D4:
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[8], 0u + 1u);  if (t) { goto L_0018B84C; } }
L_0018B7E0:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[8].d[0]; set32(c.r[3], c.r[17].w[0] - c.r[18].w[0]);  if (t) { goto L_0018B83C; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[7], c.r[16].w[0] + 4u);
    set32(c.r[6], c.r[9].w[0] + 4u);
    set32(c.r[5], 0u + 3u);
    st32((c.r[9].w[0]), c.r[3].w[0]);
    c.budget -= 5;
L_0018B800:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 1u)));
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[7], c.r[7].w[0] + 2u);
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[6], c.r[6].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018B800u | kUnwind; return; } goto L_0018B800; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 10u));
    st8((c.r[9].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[9].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    st32((c.r[9].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], c.r[17].w[0] - c.r[18].w[0]);
    c.budget -= 7;
L_0018B83C:
    set32(c.r[16], c.r[16].w[0] + 20u);
    st32((c.r[9].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[9], c.r[9].w[0] + 20u);
    c.budget -= 4;
L_0018B84C:
    c.r[3].d[0] = c.r[18].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018B7E0u | kUnwind; return; } goto L_0018B7E0; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < 24ll ? 1ull : 0ull;
    c.budget -= 2;
L_0018B860:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018B79Cu | kUnwind; return; } goto L_0018B79C; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0018B890:
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[5].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[5].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0018B8C0:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 3u));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 5u));
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[5].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[5].w[0] + 5u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_0018B8F0:
    set32(c.r[29], c.r[29].w[0] - 208u);
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
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[30], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018B92Cu); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0023(c, 248u, depth + 1u); else { c.pc = 0x0018E640u; return; } if (c.pc != 0x0018B92Cu) [[unlikely]] return; }
L_0018B92C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0018BC38; } }
L_0018B934:
    c.r[1].d[0] = 0ull | 53812ull;
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.r[21].d[0] = 0ull + 0ull;
    set32(c.r[23], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[22].w[0] + c.r[23].w[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 4u));
    st8((c.r[29].w[0] + 204u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 5u));
    st8((c.r[29].w[0] + 205u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 204u)));
    st16((c.r[29].w[0] + 206u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 206u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    st16((c.r[29].w[0] + 206u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 206u));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 207u));
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[21].w[0] << 2);
    c.budget -= 20;
L_0018B984:
    set32(c.r[5], c.r[29].w[0] + 192u);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[4], 0u + 3u);
    set32(c.r[2], c.r[2].w[0] << 9);
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[23].w[0]);
    set32(c.r[16], c.r[2].w[0] + 52u);
    set32(c.r[6], c.r[16].w[0] + 4u);
    c.budget -= 8;
L_0018B9A4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 2u);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018B9A4u | kUnwind; return; } goto L_0018B9A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018B9CCu); c.r[4].d[0] = c.r[21].d[0] & 255ull;  if (depth < kMaxDepth) unit_002D(c, 87u, depth + 1u); else { c.pc = 0x001B4ED0u; return; } if (c.pc != 0x0018B9CCu) [[unlikely]] return; }
L_0018B9CC:
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], 0u + 14u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[16].w[0] + 4u);  if (t) { goto L_0018B9E8; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_0018B9F0; } }
L_0018B9E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018B9F0u); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0022(c, 458u, depth + 1u); else { c.pc = 0x0018B890u; return; } if (c.pc != 0x0018B9F0u) [[unlikely]] return; }
L_0018B9F0:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018BA00u); set32(c.r[6], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_002D(c, 195u, depth + 1u); else { c.pc = 0x001B6DE0u; return; } if (c.pc != 0x0018BA00u) [[unlikely]] return; }
L_0018BA00:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[20].d[0] < c.r[21].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0018BC24; } }
    set32(c.r[2], 0u + 14u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[29].w[0] + 184u);  if (t) { goto L_0018BA28; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[6], c.r[29].w[0] + 184u);  if (t) { goto L_0018BA38; } }
L_0018BA28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018BA30u); set32(c.r[5], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0022(c, 459u, depth + 1u); else { c.pc = 0x0018B8C0u; return; } if (c.pc != 0x0018BA30u) [[unlikely]] return; }
L_0018BA30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = c.r[21].d[0] < c.r[20].d[0] ? 1ull : 0ull;  if (t) { goto L_0018BA64; } }
L_0018BA38:
    set32(c.r[5], c.r[16].w[0] + 4u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 2;
L_0018BA40:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 2u);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018BA40u | kUnwind; return; } goto L_0018BA40; } }
    c.r[1].d[0] = c.r[21].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0018BA64:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[20].w[0] << 2);  if (t) { goto L_0018BC24; } }
    set32(c.r[5], c.r[29].w[0] + 192u);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[4], 0u + 3u);
    set32(c.r[2], c.r[2].w[0] << 9);
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[23].w[0]);
    set32(c.r[18], c.r[2].w[0] + 52u);
    set32(c.r[6], c.r[18].w[0] + 4u);
    c.budget -= 8;
L_0018BA8C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 2u);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018BA8Cu | kUnwind; return; } goto L_0018BA8C; } }
    set32(c.r[2], 0u + 14u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[18].w[0] + 4u);  if (t) { goto L_0018BAC4; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_0018BACC; } }
L_0018BAC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018BACCu); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0022(c, 458u, depth + 1u); else { c.pc = 0x0018B890u; return; } if (c.pc != 0x0018BACCu) [[unlikely]] return; }
L_0018BACC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018BADCu); set32(c.r[6], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_002D(c, 195u, depth + 1u); else { c.pc = 0x001B6DE0u; return; } if (c.pc != 0x0018BADCu) [[unlikely]] return; }
L_0018BADC:
    set32(c.r[2], 0u + 14u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[29].w[0] + 184u);  if (t) { goto L_0018BAF4; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[6], c.r[29].w[0] + 184u);  if (t) { goto L_0018BB04; } }
L_0018BAF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018BAFCu); set32(c.r[5], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_0022(c, 459u, depth + 1u); else { c.pc = 0x0018B8C0u; return; } if (c.pc != 0x0018BAFCu) [[unlikely]] return; }
L_0018BAFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0])));  if (t) { goto L_0018BB30; } }
L_0018BB04:
    set32(c.r[5], c.r[18].w[0] + 4u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 2;
L_0018BB0C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 2u);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018BB0Cu | kUnwind; return; } goto L_0018BB0C; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_0018BB30:
    set32(c.r[5], c.r[29].w[0] + 164u);
    set32(c.r[7], c.r[16].w[0] + 4u);
    set32(c.r[4], 0u + 3u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    c.budget -= 5;
L_0018BB44:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 1u)));
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[7], c.r[7].w[0] + 2u);
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[6], c.r[6].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018BB44u | kUnwind; return; } goto L_0018BB44; } }
    c.r[6].d[0] = ld8((c.r[16].w[0] + 10u));
    set32(c.r[4], c.r[29].w[0] + 170u);
    set32(c.r[3], c.r[29].w[0] + 172u);
    set32(c.r[2], c.r[29].w[0] + 176u);
    set32(c.r[10], c.r[18].w[0] + 4u);
    set32(c.r[9], c.r[16].w[0] + 4u);
    set32(c.r[8], 0u + 3u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[6], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[3].w[0]), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 16u)));
    st32((c.r[2].w[0]), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[18].w[0])));
    st32((c.r[16].w[0]), c.r[6].w[0]);
    c.budget -= 14;
L_0018BB9C:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0])));
    set32(c.r[8], c.r[8].w[0] - 1u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 1u)));
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[10], c.r[10].w[0] + 2u);
    st8((c.r[9].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 8;
    { const bool t = c.r[8].sd[0] > 0; set32(c.r[9], c.r[9].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018BB9Cu | kUnwind; return; } goto L_0018BB9C; } }
    c.r[6].d[0] = ld8((c.r[18].w[0] + 10u));
    set32(c.r[9], c.r[18].w[0] + 4u);
    set32(c.r[8], 0u + 3u);
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[6], ld32((c.r[18].w[0] + 12u)));
    st32((c.r[16].w[0] + 12u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[18].w[0] + 16u)));
    st32((c.r[16].w[0] + 16u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[29].w[0] + 160u)));
    st32((c.r[18].w[0]), c.r[6].w[0]);
    c.budget -= 10;
L_0018BBE4:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[8], c.r[8].w[0] - 1u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[5], c.r[5].w[0] + 2u);
    st8((c.r[9].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 8;
    { const bool t = c.r[8].sd[0] > 0; set32(c.r[9], c.r[9].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018BBE4u | kUnwind; return; } goto L_0018BBE4; } }
    c.r[4].d[0] = ld8((c.r[4].w[0]));
    st8((c.r[18].w[0] + 10u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[18].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0]), c.r[21].w[0]);
    st32((c.r[18].w[0]), c.r[20].w[0]);
    c.budget -= 8;
L_0018BC24:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[1].d[0] = c.r[21].sd[0] < 21ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], c.r[21].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018B984u | kUnwind; return; } goto L_0018B984; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0018BC38:
    c.r[2].d[0] = c.r[19].sd[0] < c.r[30].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[19].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018B934u | kUnwind; return; } goto L_0018B934; } }
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018BC50u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0023(c, 249u, depth + 1u); else { c.pc = 0x0018E680u; return; } if (c.pc != 0x0018BC50u) [[unlikely]] return; }
L_0018BC50:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_0018BC80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0018BCAC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018BCA4u); set32(c.r[4], ld32((c.r[1].w[0] + 26120u)));  if (depth < kMaxDepth) unit_0023(c, 36u, depth + 1u); else { c.pc = 0x0018C640u; return; } if (c.pc != 0x0018BCA4u) [[unlikely]] return; }
L_0018BCA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0018BCC8; } }
L_0018BCAC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26120u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x000E0000u);
    c.r[1].d[0] = c.r[1].d[0] | 6976ull;
    set32(c.r[16], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018BCC8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 423u, depth + 1u); else { c.pc = 0x0018B280u; return; } if (c.pc != 0x0018BCC8u) [[unlikely]] return; }
L_0018BCC8:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[17].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 32767ull;
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 5u));
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018BCF4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 445u, depth + 1u); else { c.pc = 0x0018B5D0u; return; } if (c.pc != 0x0018BCF4u) [[unlikely]] return; }
L_0018BCF4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 2u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 4u));
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 6u));
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 7u));
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    st8((c.r[16].w[0] + 48u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 48u));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0018BD40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018BD3Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 460u, depth + 1u); else { c.pc = 0x0018B8F0u; return; } if (c.pc != 0x0018BD3Cu) [[unlikely]] return; }
L_0018BD3C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0018BD40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0018BD60:
    c.r[1].d[0] = 0ull | 53812ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[8], c.r[4].w[0] + c.r[1].w[0]);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[29].w[0] + 14u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 6;
L_0018BD78:
    set32(c.r[3], ld32((c.r[8].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_0018BDD8; } }
    c.r[3].d[0] = ld8((c.r[8].w[0] + 10u));
    set32(c.r[3], c.r[3].w[0] >> 1);
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[4], 0u - c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[12], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st16((c.r[29].w[0] + 14u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[6].w[0]));
    st8((c.r[8].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 1u));
    st8((c.r[8].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 21;
L_0018BDD8:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018BD78u | kUnwind; return; } goto L_0018BD78; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0018BDF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0018BE00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00190000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00190000u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    set32(c.r[2], c.r[2].w[0] - 13360u);
    set32(c.r[5], c.r[5].w[0] - 20064u);
    st32((c.r[1].w[0] + 18408u), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] - 19968u);
    set32(c.r[4], c.r[16].w[0] + 8u);
    c.r[7].d[0] = 0ull | 61492ull;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018BE44u); set32(c.r[8], 0u + 10u);  if (depth < kMaxDepth) unit_0000(c, 89u, depth + 1u); else { c.pc = 0x00100790u; return; } if (c.pc != 0x0018BE44u) [[unlikely]] return; }
L_0018BE44:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00090000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00190000u);
    c.r[1].d[0] = c.r[1].d[0] | 25104ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00190000u);
    set32(c.r[4], c.r[16].w[0] + c.r[1].w[0]);
    set32(c.r[5], c.r[5].w[0] - 22992u);
    set32(c.r[6], c.r[6].w[0] - 22896u);
    set32(c.r[7], 0u + 15476u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018BE6Cu); set32(c.r[8], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 89u, depth + 1u); else { c.pc = 0x00100790u; return; } if (c.pc != 0x0018BE6Cu) [[unlikely]] return; }
L_0018BE6C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x000E0000u);
    c.r[1].d[0] = c.r[1].d[0] | 6976ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018BE7Cu); set32(c.r[4], c.r[16].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0022(c, 415u, depth + 1u); else { c.pc = 0x0018B1A0u; return; } if (c.pc != 0x0018BE7Cu) [[unlikely]] return; }
L_0018BE7C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[1].d[0] = c.r[1].d[0] | 2932ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018BE8Cu); set32(c.r[4], c.r[16].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0022(c, 336u, depth + 1u); else { c.pc = 0x0018A630u; return; } if (c.pc != 0x0018BE8Cu) [[unlikely]] return; }
L_0018BE8C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x000E0000u);
    set32(c.r[5], 0u + 10u);
    c.r[1].d[0] = c.r[1].d[0] | 6944ull;
    st32((c.r[16].w[0]), 0u);
    set32(c.r[4], c.r[16].w[0] + c.r[1].w[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018BEACu); st32((c.r[16].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0018BEACu) [[unlikely]] return; }
L_0018BEAC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x000E0000u);
    set32(c.r[5], 0u + 20u);
    c.r[1].d[0] = c.r[1].d[0] | 6954ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018BEC4u); set32(c.r[4], c.r[16].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0018BEC4u) [[unlikely]] return; }
L_0018BEC4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0018BEE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0018BF88; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[1].d[0] = c.r[1].d[0] | 2932ull;
    set32(c.r[2], c.r[2].w[0] - 13360u);
    set32(c.r[4], c.r[17].w[0] + c.r[1].w[0]);
    set32(c.r[5], 0u - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018BF24u); st32((c.r[1].w[0] + 18408u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 340u, depth + 1u); else { c.pc = 0x0018A690u; return; } if (c.pc != 0x0018BF24u) [[unlikely]] return; }
L_0018BF24:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x000E0000u);
    set32(c.r[5], 0u - 1u);
    c.r[1].d[0] = c.r[1].d[0] | 6976ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018BF38u); set32(c.r[4], c.r[17].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0022(c, 419u, depth + 1u); else { c.pc = 0x0018B200u; return; } if (c.pc != 0x0018BF38u) [[unlikely]] return; }
L_0018BF38:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00090000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00190000u);
    c.r[1].d[0] = c.r[1].d[0] | 25104ull;
    set32(c.r[5], c.r[5].w[0] - 22896u);
    set32(c.r[4], c.r[17].w[0] + c.r[1].w[0]);
    set32(c.r[6], 0u + 15476u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018BF58u); set32(c.r[7], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 86u, depth + 1u); else { c.pc = 0x00100720u; return; } if (c.pc != 0x0018BF58u) [[unlikely]] return; }
L_0018BF58:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00190000u);
    set32(c.r[4], c.r[17].w[0] + 8u);
    set32(c.r[5], c.r[5].w[0] - 19968u);
    c.r[6].d[0] = 0ull | 61492ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018BF70u); set32(c.r[7], 0u + 10u);  if (depth < kMaxDepth) unit_0000(c, 86u, depth + 1u); else { c.pc = 0x00100720u; return; } if (c.pc != 0x0018BF70u) [[unlikely]] return; }
L_0018BF70:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0018BF8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018BF88u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0018BF88u) [[unlikely]] return; }
L_0018BF88:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0018BF8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0018BFA0:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] >= 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0018BFB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0023(c, 3u, depth); } }
L_0018BFB0:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0018BFC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0023(c, 3u, depth); } }
L_0018BFC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;  if (t) { goto L_0018BFFC; } }
L_0018BFD0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x000E0000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 6944u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; c.r[2].d[0] = 0ull | 61492ull;  if (t) { goto L_0018BFF4; } }
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 8u);  if (t) { [[clang::musttail]] return unit_0023(c, 3u, depth); } }
L_0018BFF4:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 2;
L_0018BFFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] + c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018BFD0u | kUnwind; return; } goto L_0018BFD0; } }
    [[clang::musttail]] return unit_0023(c, 2u, depth);
}

}
