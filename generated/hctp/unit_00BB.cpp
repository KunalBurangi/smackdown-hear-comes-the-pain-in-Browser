#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00BB[4096] = {
    1, 2, 3, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 7, 8, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0,
    0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0,
    0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0,
    0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0,
    36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0,
    40, 0, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 50, 0, 0, 0, 0, 0, 51, 0,
    0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0,
    0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 69,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0,
    0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    95, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 0, 100,
    0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0,
    0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 0,
    0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0,
    117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 0,
    0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0,
    0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0,
    0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    148, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 151, 0, 152, 0, 153, 0, 0, 0, 0, 0, 0, 154, 0,
    0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0,
    0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 0,
    162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 166, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0,
    170, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0,
    0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 179, 0, 0, 0, 0, 0, 0,
    180, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 0,
    0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0,
    0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0,
    0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 210, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 213, 0, 214, 0, 0, 0, 0, 215, 0, 216, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 219, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0,
    225, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 229, 0, 0, 0, 0,
    0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 0, 232, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 235, 0,
    0, 0, 0, 236, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0,
    241, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 0, 0,
    0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 250, 0, 0,
    0, 0, 251, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0,
    0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0,
    0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 274, 0, 0, 0, 0, 275, 0, 276, 0, 0, 277, 0,
    0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 0,
    0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0,
    0, 0, 287, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 291, 0, 0,
    0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0,
    0, 296, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0,
    0, 0, 301, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 0, 0, 307, 0,
    0, 0, 308, 0, 0, 0, 309, 0, 0, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 312, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0,
    314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 316, 0,
    317, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0,
    0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 326, 0, 327, 0, 0, 328, 0,
    0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 331, 0, 0, 0, 0, 332, 0, 333, 0, 334,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0,
    0, 337, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 340, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0,
    342, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 345, 0, 0, 0,
    0, 346, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 350, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 352, 0, 353, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 355, 0, 0,
    0, 0, 356, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 359, 0, 0, 0, 0, 360, 0, 0, 361,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 364, 0, 365, 0, 366, 0,
    367, 0, 368, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0,
    0, 0, 372, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0,
    0, 0, 377, 0, 0, 0, 378, 0, 0, 0, 379, 0, 380, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0,
    0, 0, 383, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 386, 0, 0, 0, 387, 0, 0, 0, 0, 388, 0, 389, 0, 390,
    0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 393, 0,
    0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 397, 0, 0, 0, 398, 0, 0, 0, 0, 399, 0, 0, 400, 0, 0, 0, 401, 0, 0, 0, 0, 402, 0, 0, 403, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 404, 0, 0, 405, 0, 0, 0, 406, 0, 407, 0, 0, 0, 408, 0, 0, 0, 0, 409, 0, 410, 0, 411, 0, 0, 0, 0,
    0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 415, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 419,
    0, 420, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 423, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 426, 0,
    0, 0, 427, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 429, 0, 0, 0, 0, 430, 0, 0, 0, 431, 0, 0, 0, 432, 0, 433, 0, 434, 0,
    435, 0, 436, 0, 0, 0, 0, 437, 0, 0, 0, 0, 438, 0, 0, 0, 439, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 441, 0, 0,
    0, 0, 0, 0, 442, 0, 443, 0, 0, 0, 444, 0, 0, 0, 445, 0, 0, 0, 446, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 448, 0, 0,
    449, 0, 450, 0, 0, 451, 0, 452, 0, 0, 0, 0, 453, 0, 454, 0, 455, 0, 456, 0, 457, 0, 0, 0, 0, 0, 458, 0, 0, 0, 459, 0,
    460, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 463, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0,
    0, 0, 465, 0, 0, 0, 0, 0, 466, 0, 0, 0, 467, 0, 0, 0, 468, 0, 0, 0, 469, 0, 0, 0, 0, 0, 470, 0, 471, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 474, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 476, 0, 0, 0,
    0, 0, 477, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 481, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0,
    0, 0, 485, 0, 0, 0, 0, 486, 0, 0, 0, 0, 487, 0, 0, 0, 0, 488, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 490, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0,
    0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 498, 0, 0, 499, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 502, 0, 0, 0, 503, 0, 504, 0, 0, 0, 0, 505, 0, 0, 0, 0, 506, 0, 0, 0, 507, 0, 508, 0, 0, 0, 509, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 510, 0, 0, 511, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    512, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0, 516, 0, 0, 517, 0, 0, 518, 0,
    519, 0, 520, 0, 521, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 0, 0, 524,
    0, 0, 525, 0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 529,
    0, 0, 0, 0, 0, 530, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 536, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0, 539, 0,
    0, 0, 0, 540, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0, 0, 0, 0, 542, 0, 0, 0, 0, 0, 0, 543, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 544, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 0, 546, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 548, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 549, 0, 0, 0, 0, 0, 0, 0, 0, 550, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 551, 0,
    0, 0, 0, 0, 0, 0, 552, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 553, 0, 0, 0, 554, 0,
    0, 0, 0, 0, 0, 0, 555, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 556, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 557, 558, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 559, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 560, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 561, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 0, 0, 563, 0, 0, 0, 0, 0, 0, 0, 0, 564, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 566, 0,
    0, 0, 0, 0, 0, 567, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 568, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 569,
    0, 0, 0, 0, 570, 0, 0, 0, 571, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 572, 0, 0, 0,
};

void unit_00BB(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003EC000;
    case 2u: goto L_003EC004;
    case 3u: goto L_003EC008;
    case 4u: goto L_003EC018;
    case 5u: goto L_003EC028;
    case 6u: goto L_003EC03C;
    case 7u: goto L_003EC04C;
    case 8u: goto L_003EC050;
    case 9u: goto L_003EC068;
    case 10u: goto L_003EC084;
    case 11u: goto L_003EC118;
    case 12u: goto L_003EC12C;
    case 13u: goto L_003EC148;
    case 14u: goto L_003EC15C;
    case 15u: goto L_003EC170;
    case 16u: goto L_003EC190;
    case 17u: goto L_003EC1A8;
    case 18u: goto L_003EC1C0;
    case 19u: goto L_003EC1D8;
    case 20u: goto L_003EC1F0;
    case 21u: goto L_003EC208;
    case 22u: goto L_003EC22C;
    case 23u: goto L_003EC260;
    case 24u: goto L_003EC288;
    case 25u: goto L_003EC2A0;
    case 26u: goto L_003EC2B8;
    case 27u: goto L_003EC2E4;
    case 28u: goto L_003EC318;
    case 29u: goto L_003EC32C;
    case 30u: goto L_003EC350;
    case 31u: goto L_003EC36C;
    case 32u: goto L_003EC398;
    case 33u: goto L_003EC3B8;
    case 34u: goto L_003EC3CC;
    case 35u: goto L_003EC3E0;
    case 36u: goto L_003EC400;
    case 37u: goto L_003EC418;
    case 38u: goto L_003EC434;
    case 39u: goto L_003EC460;
    case 40u: goto L_003EC480;
    case 41u: goto L_003EC494;
    case 42u: goto L_003EC4A8;
    case 43u: goto L_003EC4C8;
    case 44u: goto L_003EC4E0;
    case 45u: goto L_003EC4F0;
    case 46u: goto L_003EC518;
    case 47u: goto L_003EC530;
    case 48u: goto L_003EC544;
    case 49u: goto L_003EC558;
    case 50u: goto L_003EC560;
    case 51u: goto L_003EC578;
    case 52u: goto L_003EC59C;
    case 53u: goto L_003EC5A8;
    case 54u: goto L_003EC5BC;
    case 55u: goto L_003EC5EC;
    case 56u: goto L_003EC608;
    case 57u: goto L_003EC628;
    case 58u: goto L_003EC64C;
    case 59u: goto L_003EC658;
    case 60u: goto L_003EC68C;
    case 61u: goto L_003EC6B0;
    case 62u: goto L_003EC6D4;
    case 63u: goto L_003EC6F8;
    case 64u: goto L_003EC730;
    case 65u: goto L_003EC760;
    case 66u: goto L_003EC798;
    case 67u: goto L_003EC7D4;
    case 68u: goto L_003EC7EC;
    case 69u: goto L_003EC7FC;
    case 70u: goto L_003EC828;
    case 71u: goto L_003EC848;
    case 72u: goto L_003EC884;
    case 73u: goto L_003EC8A8;
    case 74u: goto L_003EC8DC;
    case 75u: goto L_003EC90C;
    case 76u: goto L_003EC924;
    case 77u: goto L_003EC940;
    case 78u: goto L_003EC950;
    case 79u: goto L_003EC964;
    case 80u: goto L_003EC994;
    case 81u: goto L_003EC9B0;
    case 82u: goto L_003EC9C8;
    case 83u: goto L_003EC9E0;
    case 84u: goto L_003EC9F8;
    case 85u: goto L_003ECA20;
    case 86u: goto L_003ECA48;
    case 87u: goto L_003ECA78;
    case 88u: goto L_003ECA8C;
    case 89u: goto L_003ECAA0;
    case 90u: goto L_003ECAC0;
    case 91u: goto L_003ECAE4;
    case 92u: goto L_003ECB10;
    case 93u: goto L_003ECB34;
    case 94u: goto L_003ECB48;
    case 95u: goto L_003ECB80;
    case 96u: goto L_003ECBA0;
    case 97u: goto L_003ECBB4;
    case 98u: goto L_003ECBD8;
    case 99u: goto L_003ECBE8;
    case 100u: goto L_003ECBFC;
    case 101u: goto L_003ECC08;
    case 102u: goto L_003ECC20;
    case 103u: goto L_003ECC40;
    case 104u: goto L_003ECC54;
    case 105u: goto L_003ECC78;
    case 106u: goto L_003ECC88;
    case 107u: goto L_003ECC9C;
    case 108u: goto L_003ECCA8;
    case 109u: goto L_003ECCC0;
    case 110u: goto L_003ECCD8;
    case 111u: goto L_003ECCF0;
    case 112u: goto L_003ECD08;
    case 113u: goto L_003ECD20;
    case 114u: goto L_003ECD38;
    case 115u: goto L_003ECD50;
    case 116u: goto L_003ECD68;
    case 117u: goto L_003ECD80;
    case 118u: goto L_003ECD98;
    case 119u: goto L_003ECDB0;
    case 120u: goto L_003ECDC8;
    case 121u: goto L_003ECE00;
    case 122u: goto L_003ECE38;
    case 123u: goto L_003ECE80;
    case 124u: goto L_003ECE94;
    case 125u: goto L_003ECEB0;
    case 126u: goto L_003ECEC0;
    case 127u: goto L_003ECED4;
    case 128u: goto L_003ECEF4;
    case 129u: goto L_003ECF20;
    case 130u: goto L_003ECF58;
    case 131u: goto L_003ECF90;
    case 132u: goto L_003ECFD8;
    case 133u: goto L_003ECFEC;
    case 134u: goto L_003ED008;
    case 135u: goto L_003ED018;
    case 136u: goto L_003ED02C;
    case 137u: goto L_003ED04C;
    case 138u: goto L_003ED078;
    case 139u: goto L_003ED094;
    case 140u: goto L_003ED0C0;
    case 141u: goto L_003ED0E0;
    case 142u: goto L_003ED0F4;
    case 143u: goto L_003ED108;
    case 144u: goto L_003ED128;
    case 145u: goto L_003ED140;
    case 146u: goto L_003ED15C;
    case 147u: goto L_003ED1B0;
    case 148u: goto L_003ED200;
    case 149u: goto L_003ED214;
    case 150u: goto L_003ED240;
    case 151u: goto L_003ED24C;
    case 152u: goto L_003ED254;
    case 153u: goto L_003ED25C;
    case 154u: goto L_003ED278;
    case 155u: goto L_003ED290;
    case 156u: goto L_003ED2AC;
    case 157u: goto L_003ED2E8;
    case 158u: goto L_003ED304;
    case 159u: goto L_003ED350;
    case 160u: goto L_003ED35C;
    case 161u: goto L_003ED368;
    case 162u: goto L_003ED380;
    case 163u: goto L_003ED394;
    case 164u: goto L_003ED3C0;
    case 165u: goto L_003ED3D8;
    case 166u: goto L_003ED3EC;
    case 167u: goto L_003ED420;
    case 168u: goto L_003ED438;
    case 169u: goto L_003ED45C;
    case 170u: goto L_003ED480;
    case 171u: goto L_003ED494;
    case 172u: goto L_003ED4AC;
    case 173u: goto L_003ED4C4;
    case 174u: goto L_003ED4DC;
    case 175u: goto L_003ED4F8;
    case 176u: goto L_003ED51C;
    case 177u: goto L_003ED548;
    case 178u: goto L_003ED558;
    case 179u: goto L_003ED564;
    case 180u: goto L_003ED580;
    case 181u: goto L_003ED59C;
    case 182u: goto L_003ED5B0;
    case 183u: goto L_003ED5C0;
    case 184u: goto L_003ED5E0;
    case 185u: goto L_003ED5F0;
    case 186u: goto L_003ED628;
    case 187u: goto L_003ED640;
    case 188u: goto L_003ED658;
    case 189u: goto L_003ED670;
    case 190u: goto L_003ED688;
    case 191u: goto L_003ED6A0;
    case 192u: goto L_003ED6B0;
    case 193u: goto L_003ED6C8;
    case 194u: goto L_003ED6F8;
    case 195u: goto L_003ED710;
    case 196u: goto L_003ED728;
    case 197u: goto L_003ED744;
    case 198u: goto L_003ED79C;
    case 199u: goto L_003ED7B0;
    case 200u: goto L_003ED7C8;
    case 201u: goto L_003ED7E0;
    case 202u: goto L_003ED7F0;
    case 203u: goto L_003ED808;
    case 204u: goto L_003ED818;
    case 205u: goto L_003ED830;
    case 206u: goto L_003ED840;
    case 207u: goto L_003ED870;
    case 208u: goto L_003ED8A8;
    case 209u: goto L_003ED8C0;
    case 210u: goto L_003ED904;
    case 211u: goto L_003ED91C;
    case 212u: goto L_003ED940;
    case 213u: goto L_003ED948;
    case 214u: goto L_003ED950;
    case 215u: goto L_003ED964;
    case 216u: goto L_003ED96C;
    case 217u: goto L_003ED998;
    case 218u: goto L_003ED9B8;
    case 219u: goto L_003ED9CC;
    case 220u: goto L_003ED9D4;
    case 221u: goto L_003EDA08;
    case 222u: goto L_003EDA18;
    case 223u: goto L_003EDA3C;
    case 224u: goto L_003EDA5C;
    case 225u: goto L_003EDA80;
    case 226u: goto L_003EDA9C;
    case 227u: goto L_003EDAB8;
    case 228u: goto L_003EDAD8;
    case 229u: goto L_003EDAEC;
    case 230u: goto L_003EDB10;
    case 231u: goto L_003EDB20;
    case 232u: goto L_003EDB34;
    case 233u: goto L_003EDB48;
    case 234u: goto L_003EDB68;
    case 235u: goto L_003EDB78;
    case 236u: goto L_003EDB8C;
    case 237u: goto L_003EDBA0;
    case 238u: goto L_003EDBBC;
    case 239u: goto L_003EDBD0;
    case 240u: goto L_003EDBEC;
    case 241u: goto L_003EDC00;
    case 242u: goto L_003EDC1C;
    case 243u: goto L_003EDC38;
    case 244u: goto L_003EDC5C;
    case 245u: goto L_003EDC70;
    case 246u: goto L_003EDC8C;
    case 247u: goto L_003EDCA8;
    case 248u: goto L_003EDCC4;
    case 249u: goto L_003EDCD8;
    case 250u: goto L_003EDCF4;
    case 251u: goto L_003EDD08;
    case 252u: goto L_003EDD24;
    case 253u: goto L_003EDD38;
    case 254u: goto L_003EDD54;
    case 255u: goto L_003EDD68;
    case 256u: goto L_003EDD84;
    case 257u: goto L_003EDD98;
    case 258u: goto L_003EDDB4;
    case 259u: goto L_003EDDD0;
    case 260u: goto L_003EDE08;
    case 261u: goto L_003EDE18;
    case 262u: goto L_003EDE38;
    case 263u: goto L_003EDE5C;
    case 264u: goto L_003EDE84;
    case 265u: goto L_003EDEB0;
    case 266u: goto L_003EDEC8;
    case 267u: goto L_003EDEF0;
    case 268u: goto L_003EDF14;
    case 269u: goto L_003EDF28;
    case 270u: goto L_003EDF44;
    case 271u: goto L_003EDF54;
    case 272u: goto L_003EDFA0;
    case 273u: goto L_003EDFBC;
    case 274u: goto L_003EDFD0;
    case 275u: goto L_003EDFE4;
    case 276u: goto L_003EDFEC;
    case 277u: goto L_003EDFF8;
    case 278u: goto L_003EE008;
    case 279u: goto L_003EE040;
    case 280u: goto L_003EE050;
    case 281u: goto L_003EE060;
    case 282u: goto L_003EE070;
    case 283u: goto L_003EE084;
    case 284u: goto L_003EE0B0;
    case 285u: goto L_003EE0C0;
    case 286u: goto L_003EE0F0;
    case 287u: goto L_003EE108;
    case 288u: goto L_003EE124;
    case 289u: goto L_003EE138;
    case 290u: goto L_003EE158;
    case 291u: goto L_003EE174;
    case 292u: goto L_003EE188;
    case 293u: goto L_003EE1B0;
    case 294u: goto L_003EE1C8;
    case 295u: goto L_003EE1E8;
    case 296u: goto L_003EE204;
    case 297u: goto L_003EE218;
    case 298u: goto L_003EE238;
    case 299u: goto L_003EE254;
    case 300u: goto L_003EE268;
    case 301u: goto L_003EE288;
    case 302u: goto L_003EE298;
    case 303u: goto L_003EE2A8;
    case 304u: goto L_003EE2C0;
    case 305u: goto L_003EE2D0;
    case 306u: goto L_003EE2E0;
    case 307u: goto L_003EE2F8;
    case 308u: goto L_003EE308;
    case 309u: goto L_003EE318;
    case 310u: goto L_003EE330;
    case 311u: goto L_003EE340;
    case 312u: goto L_003EE350;
    case 313u: goto L_003EE368;
    case 314u: goto L_003EE380;
    case 315u: goto L_003EE3E8;
    case 316u: goto L_003EE3F8;
    case 317u: goto L_003EE400;
    case 318u: goto L_003EE418;
    case 319u: goto L_003EE430;
    case 320u: goto L_003EE448;
    case 321u: goto L_003EE460;
    case 322u: goto L_003EE470;
    case 323u: goto L_003EE488;
    case 324u: goto L_003EE4B0;
    case 325u: goto L_003EE4D0;
    case 326u: goto L_003EE4E4;
    case 327u: goto L_003EE4EC;
    case 328u: goto L_003EE4F8;
    case 329u: goto L_003EE518;
    case 330u: goto L_003EE54C;
    case 331u: goto L_003EE558;
    case 332u: goto L_003EE56C;
    case 333u: goto L_003EE574;
    case 334u: goto L_003EE57C;
    case 335u: goto L_003EE5B8;
    case 336u: goto L_003EE5E0;
    case 337u: goto L_003EE604;
    case 338u: goto L_003EE610;
    case 339u: goto L_003EE640;
    case 340u: goto L_003EE650;
    case 341u: goto L_003EE668;
    case 342u: goto L_003EE680;
    case 343u: goto L_003EE694;
    case 344u: goto L_003EE6D8;
    case 345u: goto L_003EE6F0;
    case 346u: goto L_003EE704;
    case 347u: goto L_003EE71C;
    case 348u: goto L_003EE734;
    case 349u: goto L_003EE760;
    case 350u: goto L_003EE778;
    case 351u: goto L_003EE7A8;
    case 352u: goto L_003EE7C0;
    case 353u: goto L_003EE7C8;
    case 354u: goto L_003EE7E4;
    case 355u: goto L_003EE7F4;
    case 356u: goto L_003EE808;
    case 357u: goto L_003EE820;
    case 358u: goto L_003EE84C;
    case 359u: goto L_003EE85C;
    case 360u: goto L_003EE870;
    case 361u: goto L_003EE87C;
    case 362u: goto L_003EE8A8;
    case 363u: goto L_003EE8E0;
    case 364u: goto L_003EE8E8;
    case 365u: goto L_003EE8F0;
    case 366u: goto L_003EE8F8;
    case 367u: goto L_003EE900;
    case 368u: goto L_003EE908;
    case 369u: goto L_003EE920;
    case 370u: goto L_003EE944;
    case 371u: goto L_003EE964;
    case 372u: goto L_003EE988;
    case 373u: goto L_003EE99C;
    case 374u: goto L_003EE9B4;
    case 375u: goto L_003EE9D0;
    case 376u: goto L_003EE9F0;
    case 377u: goto L_003EEA08;
    case 378u: goto L_003EEA18;
    case 379u: goto L_003EEA28;
    case 380u: goto L_003EEA30;
    case 381u: goto L_003EEA50;
    case 382u: goto L_003EEA70;
    case 383u: goto L_003EEA88;
    case 384u: goto L_003EEA98;
    case 385u: goto L_003EEAB8;
    case 386u: goto L_003EEAC8;
    case 387u: goto L_003EEAD8;
    case 388u: goto L_003EEAEC;
    case 389u: goto L_003EEAF4;
    case 390u: goto L_003EEAFC;
    case 391u: goto L_003EEB10;
    case 392u: goto L_003EEB6C;
    case 393u: goto L_003EEB78;
    case 394u: goto L_003EEB94;
    case 395u: goto L_003EEBB0;
    case 396u: goto L_003EEBDC;
    case 397u: goto L_003EEC08;
    case 398u: goto L_003EEC18;
    case 399u: goto L_003EEC2C;
    case 400u: goto L_003EEC38;
    case 401u: goto L_003EEC48;
    case 402u: goto L_003EEC5C;
    case 403u: goto L_003EEC68;
    case 404u: goto L_003EEC94;
    case 405u: goto L_003EECA0;
    case 406u: goto L_003EECB0;
    case 407u: goto L_003EECB8;
    case 408u: goto L_003EECC8;
    case 409u: goto L_003EECDC;
    case 410u: goto L_003EECE4;
    case 411u: goto L_003EECEC;
    case 412u: goto L_003EED08;
    case 413u: goto L_003EED44;
    case 414u: goto L_003EED64;
    case 415u: goto L_003EED74;
    case 416u: goto L_003EEDA8;
    case 417u: goto L_003EEDCC;
    case 418u: goto L_003EEDE8;
    case 419u: goto L_003EEDFC;
    case 420u: goto L_003EEE04;
    case 421u: goto L_003EEE10;
    case 422u: goto L_003EEE30;
    case 423u: goto L_003EEE3C;
    case 424u: goto L_003EEE44;
    case 425u: goto L_003EEE68;
    case 426u: goto L_003EEE78;
    case 427u: goto L_003EEE88;
    case 428u: goto L_003EEEA0;
    case 429u: goto L_003EEEB4;
    case 430u: goto L_003EEEC8;
    case 431u: goto L_003EEED8;
    case 432u: goto L_003EEEE8;
    case 433u: goto L_003EEEF0;
    case 434u: goto L_003EEEF8;
    case 435u: goto L_003EEF00;
    case 436u: goto L_003EEF08;
    case 437u: goto L_003EEF1C;
    case 438u: goto L_003EEF30;
    case 439u: goto L_003EEF40;
    case 440u: goto L_003EEF58;
    case 441u: goto L_003EEF74;
    case 442u: goto L_003EEF90;
    case 443u: goto L_003EEF98;
    case 444u: goto L_003EEFA8;
    case 445u: goto L_003EEFB8;
    case 446u: goto L_003EEFC8;
    case 447u: goto L_003EEFE0;
    case 448u: goto L_003EEFF4;
    case 449u: goto L_003EF000;
    case 450u: goto L_003EF008;
    case 451u: goto L_003EF014;
    case 452u: goto L_003EF01C;
    case 453u: goto L_003EF030;
    case 454u: goto L_003EF038;
    case 455u: goto L_003EF040;
    case 456u: goto L_003EF048;
    case 457u: goto L_003EF050;
    case 458u: goto L_003EF068;
    case 459u: goto L_003EF078;
    case 460u: goto L_003EF080;
    case 461u: goto L_003EF0A4;
    case 462u: goto L_003EF0C4;
    case 463u: goto L_003EF0D0;
    case 464u: goto L_003EF0E8;
    case 465u: goto L_003EF108;
    case 466u: goto L_003EF120;
    case 467u: goto L_003EF130;
    case 468u: goto L_003EF140;
    case 469u: goto L_003EF150;
    case 470u: goto L_003EF168;
    case 471u: goto L_003EF170;
    case 472u: goto L_003EF198;
    case 473u: goto L_003EF1B0;
    case 474u: goto L_003EF1C4;
    case 475u: goto L_003EF1D8;
    case 476u: goto L_003EF1F0;
    case 477u: goto L_003EF208;
    case 478u: goto L_003EF220;
    case 479u: goto L_003EF23C;
    case 480u: goto L_003EF258;
    case 481u: goto L_003EF278;
    case 482u: goto L_003EF2AC;
    case 483u: goto L_003EF2C4;
    case 484u: goto L_003EF2F0;
    case 485u: goto L_003EF308;
    case 486u: goto L_003EF31C;
    case 487u: goto L_003EF330;
    case 488u: goto L_003EF344;
    case 489u: goto L_003EF358;
    case 490u: goto L_003EF370;
    case 491u: goto L_003EF3C0;
    case 492u: goto L_003EF3D0;
    case 493u: goto L_003EF410;
    case 494u: goto L_003EF430;
    case 495u: goto L_003EF450;
    case 496u: goto L_003EF470;
    case 497u: goto L_003EF490;
    case 498u: goto L_003EF4A8;
    case 499u: goto L_003EF4B4;
    case 500u: goto L_003EF4BC;
    case 501u: goto L_003EF530;
    case 502u: goto L_003EF588;
    case 503u: goto L_003EF598;
    case 504u: goto L_003EF5A0;
    case 505u: goto L_003EF5B4;
    case 506u: goto L_003EF5C8;
    case 507u: goto L_003EF5D8;
    case 508u: goto L_003EF5E0;
    case 509u: goto L_003EF5F0;
    case 510u: goto L_003EF628;
    case 511u: goto L_003EF634;
    case 512u: goto L_003EF680;
    case 513u: goto L_003EF698;
    case 514u: goto L_003EF6B4;
    case 515u: goto L_003EF6C4;
    case 516u: goto L_003EF6E0;
    case 517u: goto L_003EF6EC;
    case 518u: goto L_003EF6F8;
    case 519u: goto L_003EF700;
    case 520u: goto L_003EF708;
    case 521u: goto L_003EF710;
    case 522u: goto L_003EF728;
    case 523u: goto L_003EF758;
    case 524u: goto L_003EF77C;
    case 525u: goto L_003EF788;
    case 526u: goto L_003EF7A0;
    case 527u: goto L_003EF7C0;
    case 528u: goto L_003EF7D0;
    case 529u: goto L_003EF7FC;
    case 530u: goto L_003EF814;
    case 531u: goto L_003EF82C;
    case 532u: goto L_003EF844;
    case 533u: goto L_003EF858;
    case 534u: goto L_003EF89C;
    case 535u: goto L_003EF8C8;
    case 536u: goto L_003EF8D8;
    case 537u: goto L_003EF910;
    case 538u: goto L_003EF964;
    case 539u: goto L_003EF978;
    case 540u: goto L_003EF98C;
    case 541u: goto L_003EF9A4;
    case 542u: goto L_003EF9C4;
    case 543u: goto L_003EF9E0;
    case 544u: goto L_003EFA5C;
    case 545u: goto L_003EFAB8;
    case 546u: goto L_003EFAD4;
    case 547u: goto L_003EFB18;
    case 548u: goto L_003EFB70;
    case 549u: goto L_003EFBA8;
    case 550u: goto L_003EFBCC;
    case 551u: goto L_003EFBF8;
    case 552u: goto L_003EFC18;
    case 553u: goto L_003EFC68;
    case 554u: goto L_003EFC78;
    case 555u: goto L_003EFC98;
    case 556u: goto L_003EFCD0;
    case 557u: goto L_003EFD30;
    case 558u: goto L_003EFD34;
    case 559u: goto L_003EFD60;
    case 560u: goto L_003EFDB0;
    case 561u: goto L_003EFDF0;
    case 562u: goto L_003EFE2C;
    case 563u: goto L_003EFE50;
    case 564u: goto L_003EFE74;
    case 565u: goto L_003EFE9C;
    case 566u: goto L_003EFEF8;
    case 567u: goto L_003EFF14;
    case 568u: goto L_003EFF48;
    case 569u: goto L_003EFF7C;
    case 570u: goto L_003EFF90;
    case 571u: goto L_003EFFA0;
    case 572u: goto L_003EFFF0;
    default: bad_entry(c, 0x003EC000u); return;
    }
L_003EC000:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_003EC004:
    c.budget -= 1;
L_003EC008:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_003EC020; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC018u); set32(c.r[4], c.r[4].w[0] + 31136u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003EC018u) [[unlikely]] return; }
L_003EC018:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_003EC050; } }
L_003EC020:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC028u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 488u, depth + 1u); else { c.pc = 0x003EB7C0u; return; } if (c.pc != 0x003EC028u) [[unlikely]] return; }
L_003EC028:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC03Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 491u, depth + 1u); else { c.pc = 0x003EB7E8u; return; } if (c.pc != 0x003EC03Cu) [[unlikely]] return; }
L_003EC03C:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC04Cu); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 248u, depth + 1u); else { c.pc = 0x00406D70u; return; } if (c.pc != 0x003EC04Cu) [[unlikely]] return; }
L_003EC04C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_003EC050:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 152u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 168u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_003EC068:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC084u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 392u, depth + 1u); else { c.pc = 0x003EABF0u; return; } if (c.pc != 0x003EC084u) [[unlikely]] return; }
L_003EC084:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 31184u);  if (t) { goto L_003EC0A8; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003EE380; }
L_003EC0A8:
    set32(c.r[2], ld32((c.r[17].w[0] + 232u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003EC100; } }
    set32(c.r[2], 0u + 257u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_003EC0D8; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 31240u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003EE380; }
L_003EC0D8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003EC100; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 31312u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003EE380; }
L_003EC100:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003EC118; }
L_003EC118:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC12Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 488u, depth + 1u); else { c.pc = 0x003EB7C0u; return; } if (c.pc != 0x003EC12Cu) [[unlikely]] return; }
L_003EC12C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C1(c, 352u, depth); }
L_003EC148:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC15Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 392u, depth + 1u); else { c.pc = 0x003EABF0u; return; } if (c.pc != 0x003EC15Cu) [[unlikely]] return; }
L_003EC15C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003EC188; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC170u); set32(c.r[4], c.r[4].w[0] + 31392u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003EC170u) [[unlikely]] return; }
L_003EC170:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EC188:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC190u);  if (depth < kMaxDepth) unit_00BA(c, 488u, depth + 1u); else { c.pc = 0x003EB7C0u; return; } if (c.pc != 0x003EC190u) [[unlikely]] return; }
L_003EC190:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C1(c, 353u, depth); }
L_003EC1A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 168u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C2(c, 8u, depth); }
L_003EC1C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EC1A8u | kUnwind; return; } goto L_003EC1A8; }
L_003EC1D8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 168u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C2(c, 9u, depth); }
L_003EC1F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003EC2B8; }
L_003EC208:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC22Cu); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 392u, depth + 1u); else { c.pc = 0x003EABF0u; return; } if (c.pc != 0x003EC22Cu) [[unlikely]] return; }
L_003EC22C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003EC258; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 31448u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003EE380; }
L_003EC258:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC260u);  if (depth < kMaxDepth) unit_00BA(c, 488u, depth + 1u); else { c.pc = 0x003EB7C0u; return; } if (c.pc != 0x003EC260u) [[unlikely]] return; }
L_003EC260:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00C1(c, 355u, depth); }
L_003EC288:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003EC2B8; }
L_003EC2A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EC208u | kUnwind; return; } goto L_003EC208; }
L_003EC2B8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC2E4u); c.r[19].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 392u, depth + 1u); else { c.pc = 0x003EABF0u; return; } if (c.pc != 0x003EC2E4u) [[unlikely]] return; }
L_003EC2E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003EC310; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 31512u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 48u);  goto L_003EE380; }
L_003EC310:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC318u);  if (depth < kMaxDepth) unit_00BA(c, 488u, depth + 1u); else { c.pc = 0x003EB7C0u; return; } if (c.pc != 0x003EC318u) [[unlikely]] return; }
L_003EC318:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC32Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 354u, depth + 1u); else { c.pc = 0x00407E88u; return; } if (c.pc != 0x003EC32Cu) [[unlikely]] return; }
L_003EC32C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 48u);  [[clang::musttail]] return unit_00C1(c, 356u, depth); }
L_003EC350:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC36Cu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 392u, depth + 1u); else { c.pc = 0x003EABF0u; return; } if (c.pc != 0x003EC36Cu) [[unlikely]] return; }
L_003EC36C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003EC390; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 31568u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003EE380; }
L_003EC390:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC398u);  if (depth < kMaxDepth) unit_00BA(c, 488u, depth + 1u); else { c.pc = 0x003EB7C0u; return; } if (c.pc != 0x003EC398u) [[unlikely]] return; }
L_003EC398:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00C1(c, 367u, depth); }
L_003EC3B8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC3CCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 392u, depth + 1u); else { c.pc = 0x003EABF0u; return; } if (c.pc != 0x003EC3CCu) [[unlikely]] return; }
L_003EC3CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003EC3F8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC3E0u); set32(c.r[4], c.r[4].w[0] + 31624u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003EC3E0u) [[unlikely]] return; }
L_003EC3E0:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EC3F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC400u);  if (depth < kMaxDepth) unit_00BA(c, 488u, depth + 1u); else { c.pc = 0x003EB7C0u; return; } if (c.pc != 0x003EC400u) [[unlikely]] return; }
L_003EC400:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C1(c, 368u, depth); }
L_003EC418:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC434u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 392u, depth + 1u); else { c.pc = 0x003EABF0u; return; } if (c.pc != 0x003EC434u) [[unlikely]] return; }
L_003EC434:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003EC458; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 31680u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003EE380; }
L_003EC458:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC460u);  if (depth < kMaxDepth) unit_00BA(c, 488u, depth + 1u); else { c.pc = 0x003EB7C0u; return; } if (c.pc != 0x003EC460u) [[unlikely]] return; }
L_003EC460:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00C2(c, 1u, depth); }
L_003EC480:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC494u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 392u, depth + 1u); else { c.pc = 0x003EABF0u; return; } if (c.pc != 0x003EC494u) [[unlikely]] return; }
L_003EC494:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003EC4C0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC4A8u); set32(c.r[4], c.r[4].w[0] + 31736u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003EC4A8u) [[unlikely]] return; }
L_003EC4A8:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EC4C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC4C8u);  if (depth < kMaxDepth) unit_00BA(c, 488u, depth + 1u); else { c.pc = 0x003EB7C0u; return; } if (c.pc != 0x003EC4C8u) [[unlikely]] return; }
L_003EC4C8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C2(c, 2u, depth); }
L_003EC4E0:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_003EC4F0:
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_003EC50C; } }
    set32(c.r[2], 0u + 257u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003EC50C; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_003EC50C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_003EC518:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC530u); set32(c.r[4], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_00BB(c, 45u, depth + 1u); else { c.pc = 0x003EC4F0u; return; } if (c.pc != 0x003EC530u) [[unlikely]] return; }
L_003EC530:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_003EC564; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 236u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC544u); set32(c.r[5], ld32((c.r[16].w[0] + 240u)));  if (depth < kMaxDepth) unit_00B4(c, 157u, depth + 1u); else { c.pc = 0x003D1450u; return; } if (c.pc != 0x003EC544u) [[unlikely]] return; }
L_003EC544:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 31792u);  if (t) { goto L_003EC564; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC558u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003EC558u) [[unlikely]] return; }
L_003EC558:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC560u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 350u, depth + 1u); else { c.pc = 0x003E7E00u; return; } if (c.pc != 0x003EC560u) [[unlikely]] return; }
L_003EC560:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003EC564:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EC578:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 232u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003EC59C; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC59Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EC59Cu) [[unlikely]] return; }
L_003EC59C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EC5A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC5BCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 44u, depth + 1u); else { c.pc = 0x003EC4E0u; return; } if (c.pc != 0x003EC5BCu) [[unlikely]] return; }
L_003EC5BC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 232u)));  goto L_003EC5D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003EC5F8; } }
L_003EC5D0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[6].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_003EC5F8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC5ECu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 311u, depth + 1u); else { c.pc = 0x00403540u; return; } if (c.pc != 0x003EC5ECu) [[unlikely]] return; }
L_003EC5EC:
    set32(c.r[3], 0u - 1u);
    if (c.r[2].d[0] == 0) c.r[3].d[0] = 0ull;
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
L_003EC5F8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EC608:
    set32(c.r[2], c.r[4].w[0] + 256u);
    set32(c.r[3], 0u - 1u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 252u), c.r[3].w[0]);  c.pc = t; return; }
L_003EC628:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 232u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003EC64C; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC64Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EC64Cu) [[unlikely]] return; }
L_003EC64C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EC658:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 232u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] + 256u);  if (t) { goto L_003EC6A0; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003EC6A4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC68Cu);  if (depth < kMaxDepth) unit_00BB(c, 63u, depth + 1u); else { c.pc = 0x003EC6F8u; return; } if (c.pc != 0x003EC68Cu) [[unlikely]] return; }
L_003EC68C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003EC8A8; }
L_003EC6A0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003EC6A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EC6B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 232u)));
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003EC6E8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC6D4u);  if (depth < kMaxDepth) unit_00BB(c, 63u, depth + 1u); else { c.pc = 0x003EC6F8u; return; } if (c.pc != 0x003EC6D4u) [[unlikely]] return; }
L_003EC6D4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003EC8A8; }
L_003EC6E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EC6F8:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[17].d[0]);
    set32(c.r[17], c.r[16].w[0] + 256u);
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[18], ld32((c.r[16].w[0] + 232u)));
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC730u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EC730u) [[unlikely]] return; }
L_003EC730:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 31840u);
    set32(c.r[6], c.r[6].w[0] + 31848u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[7], c.r[29].w[0] + 16u);  if (t) { goto L_003EC768; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 236u)));
    st32((c.r[29].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC760u); st32((c.r[29].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B4(c, 238u, depth + 1u); else { c.pc = 0x003D25C8u; return; } if (c.pc != 0x003EC760u) [[unlikely]] return; }
L_003EC760:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[16].w[0] + 244u);  if (t) { goto L_003EC780; } }
L_003EC768:
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 4u), 0u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), 0u);  if (t) { goto L_003EC828; } }
    c.budget -= 1;
L_003EC780:
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003EC808; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC798u); set32(c.r[6], ld32((c.r[29].w[0] + 20u)));  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x003EC798u) [[unlikely]] return; }
L_003EC798:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[5], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[7], ld32((c.r[18].w[0])));
    set32(c.r[16], c.r[29].w[0] + 32u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[2], ld32((c.r[7].w[0] + 24u)));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[17].w[0] + 8u), c.r[5].w[0]);
    set32(c.r[5], 0u + 1u);
    c.budget -= 15;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC7D4u); c.r[6].d[0] = c.r[6].d[0] | 65535ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EC7D4u) [[unlikely]] return; }
L_003EC7D4:
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC7ECu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EC7ECu) [[unlikely]] return; }
L_003EC7EC:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC7FCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EC7FCu) [[unlikely]] return; }
L_003EC7FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003EC82C; } }
    c.budget -= 1;
L_003EC808:
    set32(c.r[5], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC828u); st32((c.r[17].w[0] + 8u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_00BB(c, 78u, depth + 1u); else { c.pc = 0x003EC950u; return; } if (c.pc != 0x003EC828u) [[unlikely]] return; }
L_003EC828:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003EC82C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003EC848:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[16], c.r[4].w[0] + 244u);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003EC884; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC884u); set32(c.r[4], c.r[4].w[0] + 31856u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003EC884u) [[unlikely]] return; }
L_003EC884:
    st32((c.r[16].w[0] + 4u), c.r[17].w[0]);
    st32((c.r[16].w[0]), c.r[18].w[0]);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003EC8A8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    set32(c.r[3], c.r[2].w[0] + 256u);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 9;
    { const bool t = c.r[8].d[0] != 0ull; set32(c.r[16], ld32((c.r[2].w[0] + 168u)));  if (t) { goto L_003EC8E8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC8DCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 362u, depth + 1u); else { c.pc = 0x00407F28u; return; } if (c.pc != 0x003EC8DCu) [[unlikely]] return; }
L_003EC8DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003EC944; } }
    c.budget -= 1;
L_003EC8E8:
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[5], c.r[5].w[0] + 31912u);
    set32(c.r[6], c.r[6].w[0] + 31920u);
    set32(c.r[7], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0]), c.r[8].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC90Cu); st32((c.r[29].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B4(c, 238u, depth + 1u); else { c.pc = 0x003D25C8u; return; } if (c.pc != 0x003EC90Cu) [[unlikely]] return; }
L_003EC90C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_003EC930; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC924u);  if (depth < kMaxDepth) unit_00C1(c, 362u, depth + 1u); else { c.pc = 0x00407F28u; return; } if (c.pc != 0x003EC924u) [[unlikely]] return; }
L_003EC924:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003EC944; } }
    c.budget -= 1;
L_003EC930:
    set32(c.r[5], ld32((c.r[29].w[0] + 16u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC940u); set32(c.r[6], ld32((c.r[29].w[0] + 20u)));  if (depth < kMaxDepth) unit_00C1(c, 362u, depth + 1u); else { c.pc = 0x00407F28u; return; } if (c.pc != 0x003EC940u) [[unlikely]] return; }
L_003EC940:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003EC944:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003EC950:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC964u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 44u, depth + 1u); else { c.pc = 0x003EC4E0u; return; } if (c.pc != 0x003EC964u) [[unlikely]] return; }
L_003EC964:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 232u)));  goto L_003EC978; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003EC9A0; } }
L_003EC978:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003EC9A0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC994u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 311u, depth + 1u); else { c.pc = 0x00403540u; return; } if (c.pc != 0x003EC994u) [[unlikely]] return; }
L_003EC994:
    set32(c.r[3], 0u - 1u);
    if (c.r[2].d[0] == 0) c.r[3].d[0] = 0ull;
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
L_003EC9A0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EC9B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 168u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C2(c, 3u, depth); }
L_003EC9C8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 168u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C2(c, 4u, depth); }
L_003EC9E0:
    set32(c.r[4], c.r[4].w[0] + 256u);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_003EC9F8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 4u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECA20u); set32(c.r[4], ld32((c.r[4].w[0] + 168u)));  if (depth < kMaxDepth) unit_00C1(c, 366u, depth + 1u); else { c.pc = 0x00407FC0u; return; } if (c.pc != 0x003ECA20u) [[unlikely]] return; }
L_003ECA20:
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003ECA48:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 144u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 152u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 160u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 168u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 176u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 184u), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECA78u); c.r[20].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 488u, depth + 1u); else { c.pc = 0x003EB7C0u; return; } if (c.pc != 0x003ECA78u) [[unlikely]] return; }
L_003ECA78:
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECA8Cu); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 491u, depth + 1u); else { c.pc = 0x003EB7E8u; return; } if (c.pc != 0x003ECA8Cu) [[unlikely]] return; }
L_003ECA8C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECAA0u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 5u, depth + 1u); else { c.pc = 0x00408040u; return; } if (c.pc != 0x003ECAA0u) [[unlikely]] return; }
L_003ECAA0:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 152u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 168u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 184u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_003ECAC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECAE4u); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 488u, depth + 1u); else { c.pc = 0x003EB7C0u; return; } if (c.pc != 0x003ECAE4u) [[unlikely]] return; }
L_003ECAE4:
    c.r[16].d[0] = c.r[16].d[0] ^ 1ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[7].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 11;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00C2(c, 6u, depth); }
L_003ECB10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECB34u); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 488u, depth + 1u); else { c.pc = 0x003EB7C0u; return; } if (c.pc != 0x003ECB34u) [[unlikely]] return; }
L_003ECB34:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECB48u); set32(c.r[7], c.r[29].w[0] + 8u);  if (depth < kMaxDepth) unit_00C2(c, 7u, depth + 1u); else { c.pc = 0x00408078u; return; } if (c.pc != 0x003ECB48u) [[unlikely]] return; }
L_003ECB48:
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.r[3].d[0] = c.r[2].d[0] ^ 1ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    st32((c.r[16].w[0]), c.r[4].w[0]);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[18].w[0]), c.r[5].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003ECB80:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 152u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 160u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 168u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECBA0u); c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 392u, depth + 1u); else { c.pc = 0x003EABF0u; return; } if (c.pc != 0x003ECBA0u) [[unlikely]] return; }
L_003ECBA0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 31928u);  if (t) { goto L_003ECBC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECBB4u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003ECBB4u) [[unlikely]] return; }
L_003ECBB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_003ECC0C; } }
    c.budget -= 1;
L_003ECBC0:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003ECBE0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECBD8u); set32(c.r[4], c.r[4].w[0] + 31976u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003ECBD8u) [[unlikely]] return; }
L_003ECBD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_003ECC0C; } }
L_003ECBE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECBE8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 488u, depth + 1u); else { c.pc = 0x003EB7C0u; return; } if (c.pc != 0x003ECBE8u) [[unlikely]] return; }
L_003ECBE8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECBFCu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 491u, depth + 1u); else { c.pc = 0x003EB7E8u; return; } if (c.pc != 0x003ECBFCu) [[unlikely]] return; }
L_003ECBFC:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECC08u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 287u, depth + 1u); else { c.pc = 0x00407570u; return; } if (c.pc != 0x003ECC08u) [[unlikely]] return; }
L_003ECC08:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_003ECC0C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 152u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 168u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_003ECC20:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 152u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 160u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 168u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECC40u); c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 392u, depth + 1u); else { c.pc = 0x003EABF0u; return; } if (c.pc != 0x003ECC40u) [[unlikely]] return; }
L_003ECC40:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 32024u);  if (t) { goto L_003ECC60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECC54u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003ECC54u) [[unlikely]] return; }
L_003ECC54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_003ECCAC; } }
    c.budget -= 1;
L_003ECC60:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003ECC80; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECC78u); set32(c.r[4], c.r[4].w[0] + 32072u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003ECC78u) [[unlikely]] return; }
L_003ECC78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_003ECCAC; } }
L_003ECC80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECC88u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 488u, depth + 1u); else { c.pc = 0x003EB7C0u; return; } if (c.pc != 0x003ECC88u) [[unlikely]] return; }
L_003ECC88:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECC9Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 491u, depth + 1u); else { c.pc = 0x003EB7E8u; return; } if (c.pc != 0x003ECC9Cu) [[unlikely]] return; }
L_003ECC9C:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECCA8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 289u, depth + 1u); else { c.pc = 0x004075D8u; return; } if (c.pc != 0x003ECCA8u) [[unlikely]] return; }
L_003ECCA8:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_003ECCAC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 152u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 168u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_003ECCC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 168u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C2(c, 28u, depth); }
L_003ECCD8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 168u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C2(c, 31u, depth); }
L_003ECCF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 168u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C2(c, 30u, depth); }
L_003ECD08:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003ECCD8u | kUnwind; return; } goto L_003ECCD8; }
L_003ECD20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 168u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C2(c, 32u, depth); }
L_003ECD38:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 168u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C2(c, 10u, depth); }
L_003ECD50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 168u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C2(c, 11u, depth); }
L_003ECD68:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 168u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C2(c, 12u, depth); }
L_003ECD80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 168u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C2(c, 13u, depth); }
L_003ECD98:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C1(c, 348u, depth); }
L_003ECDB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C1(c, 349u, depth); }
L_003ECDC8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[10], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[9], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[3], c.r[10].w[0] >> 31);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[10], c.r[10].w[0] + c.r[3].w[0]);
    set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[10].w[0]) >> 1));
    c.budget -= 13;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003ECE38; }
L_003ECE00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[9], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[3], c.r[8].w[0] >> 31);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[8], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 1));
    c.r[10].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 13;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003ECE38; }
L_003ECE38:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 152u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 160u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 168u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 176u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 184u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 192u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[9].d[0] + 0ull;
    st64((c.r[29].w[0] + 200u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 208u), c.r[31].d[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECE80u); c.r[23].d[0] = c.r[10].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 392u, depth + 1u); else { c.pc = 0x003EABF0u; return; } if (c.pc != 0x003ECE80u) [[unlikely]] return; }
L_003ECE80:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0])));  goto L_003ECEA0; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECE94u); set32(c.r[4], c.r[4].w[0] + 32120u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003ECE94u) [[unlikely]] return; }
L_003ECE94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_003ECEF8; } }
    c.budget -= 1;
L_003ECEA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_003ECEB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECEB0u); set32(c.r[4], c.r[4].w[0] + 32176u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003ECEB0u) [[unlikely]] return; }
L_003ECEB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_003ECEF8; } }
L_003ECEB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECEC0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 488u, depth + 1u); else { c.pc = 0x003EB7C0u; return; } if (c.pc != 0x003ECEC0u) [[unlikely]] return; }
L_003ECEC0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECED4u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 491u, depth + 1u); else { c.pc = 0x003EB7E8u; return; } if (c.pc != 0x003ECED4u) [[unlikely]] return; }
L_003ECED4:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].d[0] = c.r[21].d[0] + 0ull;
    c.r[9].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECEF4u); c.r[10].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 179u, depth + 1u); else { c.pc = 0x00405C40u; return; } if (c.pc != 0x003ECEF4u) [[unlikely]] return; }
L_003ECEF4:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_003ECEF8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 152u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 168u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 184u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 192u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 200u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 208u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_003ECF20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[10], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[9], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[3], c.r[10].w[0] >> 31);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[10], c.r[10].w[0] + c.r[3].w[0]);
    set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[10].w[0]) >> 1));
    c.budget -= 13;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003ECF90; }
L_003ECF58:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[9], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[3], c.r[8].w[0] >> 31);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[8], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 1));
    c.r[10].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 13;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003ECF90; }
L_003ECF90:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 152u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 160u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 168u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 176u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 184u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 192u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[9].d[0] + 0ull;
    st64((c.r[29].w[0] + 200u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 208u), c.r[31].d[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECFD8u); c.r[23].d[0] = c.r[10].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 392u, depth + 1u); else { c.pc = 0x003EABF0u; return; } if (c.pc != 0x003ECFD8u) [[unlikely]] return; }
L_003ECFD8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0])));  goto L_003ECFF8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECFECu); set32(c.r[4], c.r[4].w[0] + 32232u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003ECFECu) [[unlikely]] return; }
L_003ECFEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_003ED050; } }
    c.budget -= 1;
L_003ECFF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_003ED010; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED008u); set32(c.r[4], c.r[4].w[0] + 32288u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003ED008u) [[unlikely]] return; }
L_003ED008:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_003ED050; } }
L_003ED010:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED018u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 488u, depth + 1u); else { c.pc = 0x003EB7C0u; return; } if (c.pc != 0x003ED018u) [[unlikely]] return; }
L_003ED018:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED02Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 491u, depth + 1u); else { c.pc = 0x003EB7E8u; return; } if (c.pc != 0x003ED02Cu) [[unlikely]] return; }
L_003ED02C:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].d[0] = c.r[21].d[0] + 0ull;
    c.r[9].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED04Cu); c.r[10].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 225u, depth + 1u); else { c.pc = 0x00406718u; return; } if (c.pc != 0x003ED04Cu) [[unlikely]] return; }
L_003ED04C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_003ED050:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 152u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 168u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 184u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 192u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 200u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 208u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_003ED078:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED094u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 392u, depth + 1u); else { c.pc = 0x003EABF0u; return; } if (c.pc != 0x003ED094u) [[unlikely]] return; }
L_003ED094:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003ED0B8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 32344u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003EE380; }
L_003ED0B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED0C0u);  if (depth < kMaxDepth) unit_00BA(c, 488u, depth + 1u); else { c.pc = 0x003EB7C0u; return; } if (c.pc != 0x003ED0C0u) [[unlikely]] return; }
L_003ED0C0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00C2(c, 23u, depth); }
L_003ED0E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED0F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 392u, depth + 1u); else { c.pc = 0x003EABF0u; return; } if (c.pc != 0x003ED0F4u) [[unlikely]] return; }
L_003ED0F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003ED120; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED108u); set32(c.r[4], c.r[4].w[0] + 32392u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003ED108u) [[unlikely]] return; }
L_003ED108:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003ED120:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED128u);  if (depth < kMaxDepth) unit_00BA(c, 488u, depth + 1u); else { c.pc = 0x003EB7C0u; return; } if (c.pc != 0x003ED128u) [[unlikely]] return; }
L_003ED128:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C2(c, 25u, depth); }
L_003ED140:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED15Cu); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 392u, depth + 1u); else { c.pc = 0x003EABF0u; return; } if (c.pc != 0x003ED15Cu) [[unlikely]] return; }
L_003ED15C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 32440u);  if (t) { goto L_003ED180; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003EE380; }
L_003ED180:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  goto L_003ED1A8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 32488u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003EE380; }
L_003ED1A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED1B0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 267u, depth + 1u); else { c.pc = 0x003CE070u; return; } if (c.pc != 0x003ED1B0u) [[unlikely]] return; }
L_003ED1B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[4], c.r[4].w[0] + 32536u);  if (t) { goto L_003ED1E0; } }
    set32(c.r[2], 0u + 4u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003EE380; }
L_003ED1E0:
    set32(c.r[2], ld32((c.r[17].w[0] + 116u)));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    st32((c.r[17].w[0] + 116u), c.r[2].w[0]);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003ED200:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED214u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 392u, depth + 1u); else { c.pc = 0x003EABF0u; return; } if (c.pc != 0x003ED214u) [[unlikely]] return; }
L_003ED214:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003ED238; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 32584u);
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003EE380; }
L_003ED238:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED240u);  if (depth < kMaxDepth) unit_00BB(c, 196u, depth + 1u); else { c.pc = 0x003ED728u; return; } if (c.pc != 0x003ED240u) [[unlikely]] return; }
L_003ED240:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED24Cu); set32(c.r[5], ld32((c.r[16].w[0] + 300u)));  if (depth < kMaxDepth) unit_00BA(c, 263u, depth + 1u); else { c.pc = 0x003E9EA0u; return; } if (c.pc != 0x003ED24Cu) [[unlikely]] return; }
L_003ED24C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED254u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 293u, depth + 1u); else { c.pc = 0x003EA1E0u; return; } if (c.pc != 0x003ED254u) [[unlikely]] return; }
L_003ED254:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED25Cu); set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_00B3(c, 274u, depth + 1u); else { c.pc = 0x003CE270u; return; } if (c.pc != 0x003ED25Cu) [[unlikely]] return; }
L_003ED25C:
    set32(c.r[2], ld32((c.r[16].w[0] + 296u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003ED278; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED278u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003ED278u) [[unlikely]] return; }
L_003ED278:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E6BD8u | kUnwind; return; } [[clang::musttail]] return unit_00B9(c, 230u, depth); }
L_003ED290:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED2ACu); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 392u, depth + 1u); else { c.pc = 0x003EABF0u; return; } if (c.pc != 0x003ED2ACu) [[unlikely]] return; }
L_003ED2AC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 32640u);  if (t) { goto L_003ED2D0; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003EE380; }
L_003ED2D0:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CE7C8u | kUnwind; return; } [[clang::musttail]] return unit_00B3(c, 308u, depth); }
L_003ED2E8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED304u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 392u, depth + 1u); else { c.pc = 0x003EABF0u; return; } if (c.pc != 0x003ED304u) [[unlikely]] return; }
L_003ED304:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 32688u);  if (t) { goto L_003ED328; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003EE380; }
L_003ED328:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003ED348; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 32736u);
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003EE380; }
L_003ED348:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED350u); set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_00B3(c, 276u, depth + 1u); else { c.pc = 0x003CE2D8u; return; } if (c.pc != 0x003ED350u) [[unlikely]] return; }
L_003ED350:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED35Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 145u, depth + 1u); else { c.pc = 0x003ED140u; return; } if (c.pc != 0x003ED35Cu) [[unlikely]] return; }
L_003ED35C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED368u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00BB(c, 155u, depth + 1u); else { c.pc = 0x003ED290u; return; } if (c.pc != 0x003ED368u) [[unlikely]] return; }
L_003ED368:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003ED200u | kUnwind; return; } goto L_003ED200; }
L_003ED380:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED394u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 392u, depth + 1u); else { c.pc = 0x003EABF0u; return; } if (c.pc != 0x003ED394u) [[unlikely]] return; }
L_003ED394:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003ED3B8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] - 32752u);
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003EE380; }
L_003ED3B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED3C0u);  if (depth < kMaxDepth) unit_00BB(c, 155u, depth + 1u); else { c.pc = 0x003ED290u; return; } if (c.pc != 0x003ED3C0u) [[unlikely]] return; }
L_003ED3C0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003ED3D8; }
L_003ED3D8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED3ECu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 392u, depth + 1u); else { c.pc = 0x003EABF0u; return; } if (c.pc != 0x003ED3ECu) [[unlikely]] return; }
L_003ED3EC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003ED410; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] - 32704u);
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003EE380; }
L_003ED410:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003ED728; }
L_003ED420:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CE430u | kUnwind; return; } [[clang::musttail]] return unit_00B3(c, 285u, depth); }
L_003ED438:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED45Cu); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 392u, depth + 1u); else { c.pc = 0x003EABF0u; return; } if (c.pc != 0x003ED45Cu) [[unlikely]] return; }
L_003ED45C:
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[8], c.r[29].w[0] + 4u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[9], c.r[29].w[0] + 8u);  if (t) { goto L_003ED488; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED480u); set32(c.r[4], c.r[4].w[0] - 32648u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003ED480u) [[unlikely]] return; }
L_003ED480:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003ED4E0; } }
L_003ED488:
    set32(c.r[6], ld32((c.r[17].w[0] + 272u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED494u); set32(c.r[17], ld32((c.r[17].w[0] + 76u)));  if (depth < kMaxDepth) unit_00AD(c, 167u, depth + 1u); else { c.pc = 0x003B5738u; return; } if (c.pc != 0x003ED494u) [[unlikely]] return; }
L_003ED494:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003ED4D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED4ACu);  if (depth < kMaxDepth) unit_00AD(c, 172u, depth + 1u); else { c.pc = 0x003B5890u; return; } if (c.pc != 0x003ED4ACu) [[unlikely]] return; }
L_003ED4AC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0])));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED4C4u); set32(c.r[8], ld32((c.r[29].w[0] + 8u)));  if (depth < kMaxDepth) unit_00B3(c, 268u, depth + 1u); else { c.pc = 0x003CE098u; return; } if (c.pc != 0x003ED4C4u) [[unlikely]] return; }
L_003ED4C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003ED4E0; } }
    c.budget -= 1;
L_003ED4D0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED4DCu); set32(c.r[4], c.r[4].w[0] - 32600u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003ED4DCu) [[unlikely]] return; }
L_003ED4DC:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003ED4E0:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003ED4F8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED51Cu); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 392u, depth + 1u); else { c.pc = 0x003EABF0u; return; } if (c.pc != 0x003ED51Cu) [[unlikely]] return; }
L_003ED51C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));  if (t) { goto L_003ED540; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] - 32544u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003EE380; }
L_003ED540:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED548u); set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_00B3(c, 276u, depth + 1u); else { c.pc = 0x003CE2D8u; return; } if (c.pc != 0x003ED548u) [[unlikely]] return; }
L_003ED548:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED558u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 168u, depth + 1u); else { c.pc = 0x003ED438u; return; } if (c.pc != 0x003ED558u) [[unlikely]] return; }
L_003ED558:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED564u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00BB(c, 155u, depth + 1u); else { c.pc = 0x003ED290u; return; } if (c.pc != 0x003ED564u) [[unlikely]] return; }
L_003ED564:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003ED200u | kUnwind; return; } goto L_003ED200; }
L_003ED580:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED59Cu); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 392u, depth + 1u); else { c.pc = 0x003EABF0u; return; } if (c.pc != 0x003ED59Cu) [[unlikely]] return; }
L_003ED59C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003ED5B8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED5B0u); set32(c.r[4], c.r[4].w[0] - 32496u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003ED5B0u) [[unlikely]] return; }
L_003ED5B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003ED610; } }
L_003ED5B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED5C0u);  if (depth < kMaxDepth) unit_00BB(c, 167u, depth + 1u); else { c.pc = 0x003ED420u; return; } if (c.pc != 0x003ED5C0u) [[unlikely]] return; }
L_003ED5C0:
    c.r[3].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003ED610; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003ED5E8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED5E0u); set32(c.r[4], c.r[4].w[0] - 32448u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003ED5E0u) [[unlikely]] return; }
L_003ED5E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003ED610; } }
L_003ED5E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED5F0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 187u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003ED5F0u) [[unlikely]] return; }
L_003ED5F0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003ED658; }
L_003ED610:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003ED628:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CE400u | kUnwind; return; } [[clang::musttail]] return unit_00B3(c, 283u, depth); }
L_003ED640:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CE460u | kUnwind; return; } [[clang::musttail]] return unit_00B3(c, 287u, depth); }
L_003ED658:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CE4F0u | kUnwind; return; } [[clang::musttail]] return unit_00B3(c, 290u, depth); }
L_003ED670:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CE588u | kUnwind; return; } [[clang::musttail]] return unit_00B3(c, 294u, depth); }
L_003ED688:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CE620u | kUnwind; return; } [[clang::musttail]] return unit_00B3(c, 298u, depth); }
L_003ED6A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED6B0u);  if (depth < kMaxDepth) unit_00B3(c, 283u, depth + 1u); else { c.pc = 0x003CE400u; return; } if (c.pc != 0x003ED6B0u) [[unlikely]] return; }
L_003ED6B0:
    c.r[2].d[0] = c.r[2].d[0] ^ 3ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003ED6C8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003ED6E8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CE6B8u | kUnwind; return; } [[clang::musttail]] return unit_00B3(c, 302u, depth); }
L_003ED6E8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003ED6F8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED710u); set32(c.r[4], ld32((c.r[4].w[0] + 76u)));  if (depth < kMaxDepth) unit_00B3(c, 303u, depth + 1u); else { c.pc = 0x003CE720u; return; } if (c.pc != 0x003ED710u) [[unlikely]] return; }
L_003ED710:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003ED728:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED744u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 392u, depth + 1u); else { c.pc = 0x003EABF0u; return; } if (c.pc != 0x003ED744u) [[unlikely]] return; }
L_003ED744:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] - 32408u);  if (t) { goto L_003ED768; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003EE380; }
L_003ED768:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[4], ld32((c.r[16].w[0] + 64u)));  if (t) { goto L_003ED780; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st8((c.r[16].w[0] + 113u), static_cast<std::uint8_t>(c.r[2].w[0]));  goto L_003ED77C; }
L_003ED77C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 112u)));
    c.budget -= 1;
L_003ED780:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st8((c.r[16].w[0] + 112u), static_cast<std::uint8_t>(c.r[17].w[0]));  goto L_003ED7B4; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[2].d[0]) { st8((c.r[16].w[0] + 112u), static_cast<std::uint8_t>(c.r[17].w[0]));  goto L_003ED7B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED79Cu);  if (depth < kMaxDepth) unit_00BC(c, 293u, depth + 1u); else { c.pc = 0x003F29A0u; return; } if (c.pc != 0x003ED79Cu) [[unlikely]] return; }
L_003ED79C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] - 32360u);  if (t) { goto L_003ED7B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED7B0u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003ED7B0u) [[unlikely]] return; }
L_003ED7B0:
    st8((c.r[16].w[0] + 112u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.budget -= 1;
L_003ED7B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003ED7C8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED7E0u); set32(c.r[6], c.r[29].w[0] + 8u);  if (depth < kMaxDepth) unit_00BB(c, 206u, depth + 1u); else { c.pc = 0x003ED840u; return; } if (c.pc != 0x003ED7E0u) [[unlikely]] return; }
L_003ED7E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003ED7F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED808u); set32(c.r[6], c.r[29].w[0] + 8u);  if (depth < kMaxDepth) unit_00BB(c, 206u, depth + 1u); else { c.pc = 0x003ED840u; return; } if (c.pc != 0x003ED808u) [[unlikely]] return; }
L_003ED808:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003ED818:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED830u); set32(c.r[6], c.r[29].w[0] + 8u);  if (depth < kMaxDepth) unit_00BB(c, 207u, depth + 1u); else { c.pc = 0x003ED870u; return; } if (c.pc != 0x003ED830u) [[unlikely]] return; }
L_003ED830:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003ED840:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[7], 0u + 2048u);
    c.r[2].d[0] = c.r[2].d[0] | 18916ull;
    set32(c.r[3], 0u + 28000u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    st32((c.r[6].w[0]), c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);  c.pc = t; return; }
L_003ED870:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00060000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[7], 0u + 8192u);
    c.r[2].d[0] = c.r[2].d[0] | 38188ull;
    c.r[3].d[0] = c.r[3].d[0] | 15464ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    st32((c.r[6].w[0]), c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);  c.pc = t; return; }
L_003ED8A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003ED8C0; }
L_003ED8C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[4].w[0] + 492u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[8].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[17], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[18], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED904u); set32(c.r[5], c.r[5].w[0] + 192u);  if (depth < kMaxDepth) unit_00BD(c, 119u, depth + 1u); else { c.pc = 0x003F4C20u; return; } if (c.pc != 0x003ED904u) [[unlikely]] return; }
L_003ED904:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[19].w[0] + 192u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED91Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 119u, depth + 1u); else { c.pc = 0x003F4C20u; return; } if (c.pc != 0x003ED91Cu) [[unlikely]] return; }
L_003ED91C:
    st32((c.r[16].w[0] + 16u), c.r[19].w[0]);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003ED940:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 504u)));  c.pc = t; return; }
L_003ED948:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 512u)));  c.pc = t; return; }
L_003ED950:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED964u);  if (depth < kMaxDepth) unit_00BB(c, 279u, depth + 1u); else { c.pc = 0x003EE040u; return; } if (c.pc != 0x003ED964u) [[unlikely]] return; }
L_003ED964:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED96Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 280u, depth + 1u); else { c.pc = 0x003EE050u; return; } if (c.pc != 0x003ED96Cu) [[unlikely]] return; }
L_003ED96C:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003ED9A8; }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003ED9A8; }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], c.r[2].w[0] + 1u);  goto L_003ED9A0; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED998u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003ED998u) [[unlikely]] return; }
L_003ED998:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 2;
L_003ED9A0:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_003ED9A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003ED9B8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED9CCu);  if (depth < kMaxDepth) unit_00BB(c, 279u, depth + 1u); else { c.pc = 0x003EE040u; return; } if (c.pc != 0x003ED9CCu) [[unlikely]] return; }
L_003ED9CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED9D4u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 280u, depth + 1u); else { c.pc = 0x003EE050u; return; } if (c.pc != 0x003ED9D4u) [[unlikely]] return; }
L_003ED9D4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003EDA0C; }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[2].w[0] - 1u);  if (t) { goto L_003EDA08; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_003EDA08; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003EDA0C; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDA08u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EDA08u) [[unlikely]] return; }
L_003EDA08:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003EDA0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EDA18:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDA3Cu); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 280u, depth + 1u); else { c.pc = 0x003EE050u; return; } if (c.pc != 0x003EDA3Cu) [[unlikely]] return; }
L_003EDA3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003EDA60; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003EDA60; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDA5Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EDA5Cu) [[unlikely]] return; }
L_003EDA5C:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003EDA60:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003EDA80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDA9Cu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 280u, depth + 1u); else { c.pc = 0x003EE050u; return; } if (c.pc != 0x003EDA9Cu) [[unlikely]] return; }
L_003EDA9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003EDABC; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003EDABC; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDAB8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EDAB8u) [[unlikely]] return; }
L_003EDAB8:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003EDABC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003EDAD8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDAECu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 280u, depth + 1u); else { c.pc = 0x003EE050u; return; } if (c.pc != 0x003EDAECu) [[unlikely]] return; }
L_003EDAEC:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003EDB14; }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003EDB14; }
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003EDB14; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDB10u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EDB10u) [[unlikely]] return; }
L_003EDB10:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003EDB14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EDB20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDB34u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 282u, depth + 1u); else { c.pc = 0x003EE070u; return; } if (c.pc != 0x003EDB34u) [[unlikely]] return; }
L_003EDB34:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003EDB6C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDB48u);  if (depth < kMaxDepth) unit_00BB(c, 280u, depth + 1u); else { c.pc = 0x003EE050u; return; } if (c.pc != 0x003EDB48u) [[unlikely]] return; }
L_003EDB48:
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_003EDB68; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003EDB6C; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDB68u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EDB68u) [[unlikely]] return; }
L_003EDB68:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003EDB6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EDB78:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDB8Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 282u, depth + 1u); else { c.pc = 0x003EE070u; return; } if (c.pc != 0x003EDB8Cu) [[unlikely]] return; }
L_003EDB8C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003EDBC0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDBA0u);  if (depth < kMaxDepth) unit_00BB(c, 280u, depth + 1u); else { c.pc = 0x003EE050u; return; } if (c.pc != 0x003EDBA0u) [[unlikely]] return; }
L_003EDBA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_003EDBBC; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003EDBC0; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDBBCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EDBBCu) [[unlikely]] return; }
L_003EDBBC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003EDBC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EDBD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDBECu); c.r[17].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 282u, depth + 1u); else { c.pc = 0x003EE070u; return; } if (c.pc != 0x003EDBECu) [[unlikely]] return; }
L_003EDBEC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003EDC24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDC00u);  if (depth < kMaxDepth) unit_00BB(c, 280u, depth + 1u); else { c.pc = 0x003EE050u; return; } if (c.pc != 0x003EDC00u) [[unlikely]] return; }
L_003EDC00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_003EDC20; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003EDC24; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDC1Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EDC1Cu) [[unlikely]] return; }
L_003EDC1C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003EDC20:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003EDC24:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003EDC38:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDC5Cu); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 282u, depth + 1u); else { c.pc = 0x003EE070u; return; } if (c.pc != 0x003EDC5Cu) [[unlikely]] return; }
L_003EDC5C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003EDC90; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDC70u);  if (depth < kMaxDepth) unit_00BB(c, 280u, depth + 1u); else { c.pc = 0x003EE050u; return; } if (c.pc != 0x003EDC70u) [[unlikely]] return; }
L_003EDC70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_003EDC8C; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003EDC8C; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDC8Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EDC8Cu) [[unlikely]] return; }
L_003EDC8C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003EDC90:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003EDCA8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDCC4u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 282u, depth + 1u); else { c.pc = 0x003EE070u; return; } if (c.pc != 0x003EDCC4u) [[unlikely]] return; }
L_003EDCC4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003EDCF8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDCD8u);  if (depth < kMaxDepth) unit_00BB(c, 280u, depth + 1u); else { c.pc = 0x003EE050u; return; } if (c.pc != 0x003EDCD8u) [[unlikely]] return; }
L_003EDCD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_003EDCF4; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003EDCF8; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDCF4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EDCF4u) [[unlikely]] return; }
L_003EDCF4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003EDCF8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003EDD08:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDD24u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 282u, depth + 1u); else { c.pc = 0x003EE070u; return; } if (c.pc != 0x003EDD24u) [[unlikely]] return; }
L_003EDD24:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003EDD58; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDD38u);  if (depth < kMaxDepth) unit_00BB(c, 280u, depth + 1u); else { c.pc = 0x003EE050u; return; } if (c.pc != 0x003EDD38u) [[unlikely]] return; }
L_003EDD38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_003EDD54; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003EDD58; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDD54u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EDD54u) [[unlikely]] return; }
L_003EDD54:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003EDD58:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003EDD68:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDD84u); c.r[17].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 282u, depth + 1u); else { c.pc = 0x003EE070u; return; } if (c.pc != 0x003EDD84u) [[unlikely]] return; }
L_003EDD84:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003EDDBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDD98u);  if (depth < kMaxDepth) unit_00BB(c, 280u, depth + 1u); else { c.pc = 0x003EE050u; return; } if (c.pc != 0x003EDD98u) [[unlikely]] return; }
L_003EDD98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_003EDDB8; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 44u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003EDDBC; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDDB4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EDDB4u) [[unlikely]] return; }
L_003EDDB4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003EDDB8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003EDDBC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003EDDD0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[18], c.r[16].w[0] + 492u);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDE08u); c.r[20].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 280u, depth + 1u); else { c.pc = 0x003EE050u; return; } if (c.pc != 0x003EDE08u) [[unlikely]] return; }
L_003EDE08:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003EDED0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDE18u);  if (depth < kMaxDepth) unit_00BB(c, 214u, depth + 1u); else { c.pc = 0x003ED950u; return; } if (c.pc != 0x003EDE18u) [[unlikely]] return; }
L_003EDE18:
    set32(c.r[21], ld32((c.r[16].w[0] + 64u)));
    st32((c.r[18].w[0] + 8u), c.r[17].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[18].w[0] + 4u), c.r[19].w[0]);
    set32(c.r[5], c.r[29].w[0] + 4u);
    st32((c.r[18].w[0] + 16u), c.r[20].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDE38u); set32(c.r[6], c.r[29].w[0] + 8u);  if (depth < kMaxDepth) unit_00BB(c, 222u, depth + 1u); else { c.pc = 0x003EDA18u; return; } if (c.pc != 0x003EDE38u) [[unlikely]] return; }
L_003EDE38:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] - 32312u);  if (t) { goto L_003EDEA8; } }
    set32(c.r[4], ld32((c.r[29].w[0])));
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDE5Cu); set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);  if (depth < kMaxDepth) unit_00B4(c, 157u, depth + 1u); else { c.pc = 0x003D1450u; return; } if (c.pc != 0x003EDE5Cu) [[unlikely]] return; }
L_003EDE5C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_003EDE78; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] - 32264u);  if (t) { goto L_003EDEA8; } }
    c.budget -= 1;
L_003EDE78:
    st32((c.r[18].w[0] + 12u), c.r[17].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDE84u); set32(c.r[5], ld32((c.r[29].w[0])));  if (depth < kMaxDepth) unit_00BB(c, 225u, depth + 1u); else { c.pc = 0x003EDA80u; return; } if (c.pc != 0x003EDE84u) [[unlikely]] return; }
L_003EDE84:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[20].w[0] + 192u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_003EDEB8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[4].w[0] - 32224u);
    c.budget -= 2;
L_003EDEA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDEB0u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003EDEB0u) [[unlikely]] return; }
L_003EDEB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003EDECC; } }
L_003EDEB8:
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 20u), c.r[16].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDEC8u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BD(c, 119u, depth + 1u); else { c.pc = 0x003F4C20u; return; } if (c.pc != 0x003EDEC8u) [[unlikely]] return; }
L_003EDEC8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003EDECC:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003EDED0:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003EDEF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[4].w[0] + 492u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDF14u); set32(c.r[19], ld32((c.r[4].w[0] + 64u)));  if (depth < kMaxDepth) unit_00BB(c, 280u, depth + 1u); else { c.pc = 0x003EE050u; return; } if (c.pc != 0x003EDF14u) [[unlikely]] return; }
L_003EDF14:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[17], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDF28u); set32(c.r[16], ld32((c.r[16].w[0] + 16u)));  if (depth < kMaxDepth) unit_00BB(c, 282u, depth + 1u); else { c.pc = 0x003EE070u; return; } if (c.pc != 0x003EDF28u) [[unlikely]] return; }
L_003EDF28:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003EDF88; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0])));  goto L_003EDF48; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDF44u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 235u, depth + 1u); else { c.pc = 0x003EDB78u; return; } if (c.pc != 0x003EDF44u) [[unlikely]] return; }
L_003EDF44:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_003EDF48:
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDF54u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EDF54u) [[unlikely]] return; }
L_003EDF54:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 192u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 12;
    { set32(c.r[29], c.r[29].w[0] + 48u);  [[clang::musttail]] return unit_00BD(c, 119u, depth); }
L_003EDF88:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003EDFA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDFBCu); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 282u, depth + 1u); else { c.pc = 0x003EE070u; return; } if (c.pc != 0x003EDFBCu) [[unlikely]] return; }
L_003EDFBC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003EE02C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDFD0u);  if (depth < kMaxDepth) unit_00BB(c, 280u, depth + 1u); else { c.pc = 0x003EE050u; return; } if (c.pc != 0x003EDFD0u) [[unlikely]] return; }
L_003EDFD0:
    set32(c.r[16], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[18], ld32((c.r[17].w[0] + 12u)));  if (t) { goto L_003EE028; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDFE4u);  if (depth < kMaxDepth) unit_00BB(c, 318u, depth + 1u); else { c.pc = 0x003EE418u; return; } if (c.pc != 0x003EDFE4u) [[unlikely]] return; }
L_003EDFE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDFECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 235u, depth + 1u); else { c.pc = 0x003EDB78u; return; } if (c.pc != 0x003EDFECu) [[unlikely]] return; }
L_003EDFEC:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDFF8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 228u, depth + 1u); else { c.pc = 0x003EDAD8u; return; } if (c.pc != 0x003EDFF8u) [[unlikely]] return; }
L_003EDFF8:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE008u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EE008u) [[unlikely]] return; }
L_003EE008:
    st32((c.r[17].w[0] + 20u), 0u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003ED9B8u | kUnwind; return; } goto L_003ED9B8; }
L_003EE028:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003EE02C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003EE040:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 17472u);  c.pc = t; return; }
L_003EE050:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[3].w[0] - 17472u)));  c.pc = t; return; }
L_003EE060:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[2].w[0] - 17472u), c.r[4].w[0]);  c.pc = t; return; }
L_003EE070:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE084u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 280u, depth + 1u); else { c.pc = 0x003EE050u; return; } if (c.pc != 0x003EE084u) [[unlikely]] return; }
L_003EE084:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_003EE0A0; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003EE0A0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_003EE0A0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EE0B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE0C0u);  if (depth < kMaxDepth) unit_00B4(c, 394u, depth + 1u); else { c.pc = 0x003D3CA0u; return; } if (c.pc != 0x003EE0C0u) [[unlikely]] return; }
L_003EE0C0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[2].w[0] - 19072u), 0u);
    st32((c.r[3].w[0] - 19068u), 0u);
    st32((c.r[4].w[0] - 19064u), 0u);
    st32((c.r[5].w[0] - 19060u), 0u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EE0F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D3CE0u | kUnwind; return; } [[clang::musttail]] return unit_00B4(c, 396u, depth); }
L_003EE108:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE124u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 352u, depth + 1u); else { c.pc = 0x003D36B8u; return; } if (c.pc != 0x003EE124u) [[unlikely]] return; }
L_003EE124:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[3].w[0] - 19072u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EE138:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] - 19072u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D3788u | kUnwind; return; } [[clang::musttail]] return unit_00B4(c, 357u, depth); }
L_003EE158:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], 0u + 2u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE174u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 352u, depth + 1u); else { c.pc = 0x003D36B8u; return; } if (c.pc != 0x003EE174u) [[unlikely]] return; }
L_003EE174:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[3].w[0] - 19068u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EE188:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], 0u + 2u);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE1B0u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 360u, depth + 1u); else { c.pc = 0x003D3800u; return; } if (c.pc != 0x003EE1B0u) [[unlikely]] return; }
L_003EE1B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    st32((c.r[2].w[0] - 19068u), c.r[16].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EE1C8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], ld32((c.r[2].w[0] - 19068u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D3788u | kUnwind; return; } [[clang::musttail]] return unit_00B4(c, 357u, depth); }
L_003EE1E8:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], 0u + 6u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE204u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 352u, depth + 1u); else { c.pc = 0x003D36B8u; return; } if (c.pc != 0x003EE204u) [[unlikely]] return; }
L_003EE204:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[3].w[0] - 19064u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EE218:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], 0u + 6u);
    set32(c.r[5], ld32((c.r[2].w[0] - 19064u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D3788u | kUnwind; return; } [[clang::musttail]] return unit_00B4(c, 357u, depth); }
L_003EE238:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], 0u + 5u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE254u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 352u, depth + 1u); else { c.pc = 0x003D36B8u; return; } if (c.pc != 0x003EE254u) [[unlikely]] return; }
L_003EE254:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[3].w[0] - 19060u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EE268:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], 0u + 5u);
    set32(c.r[5], ld32((c.r[2].w[0] - 19060u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D3788u | kUnwind; return; } [[clang::musttail]] return unit_00B4(c, 357u, depth); }
L_003EE288:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE298u);  if (depth < kMaxDepth) unit_00B4(c, 318u, depth + 1u); else { c.pc = 0x003D32A8u; return; } if (c.pc != 0x003EE298u) [[unlikely]] return; }
L_003EE298:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EE2A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D3320u | kUnwind; return; } [[clang::musttail]] return unit_00B4(c, 323u, depth); }
L_003EE2C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE2D0u);  if (depth < kMaxDepth) unit_00B4(c, 319u, depth + 1u); else { c.pc = 0x003D32C0u; return; } if (c.pc != 0x003EE2D0u) [[unlikely]] return; }
L_003EE2D0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EE2E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D3338u | kUnwind; return; } [[clang::musttail]] return unit_00B4(c, 324u, depth); }
L_003EE2F8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE308u);  if (depth < kMaxDepth) unit_00B4(c, 320u, depth + 1u); else { c.pc = 0x003D32D8u; return; } if (c.pc != 0x003EE308u) [[unlikely]] return; }
L_003EE308:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EE318:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D3350u | kUnwind; return; } [[clang::musttail]] return unit_00B4(c, 325u, depth); }
L_003EE330:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE340u);  if (depth < kMaxDepth) unit_00B4(c, 321u, depth + 1u); else { c.pc = 0x003D32F0u; return; } if (c.pc != 0x003EE340u) [[unlikely]] return; }
L_003EE340:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EE350:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D3368u | kUnwind; return; } [[clang::musttail]] return unit_00B4(c, 326u, depth); }
L_003EE368:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D3D38u | kUnwind; return; } [[clang::musttail]] return unit_00B4(c, 398u, depth); }
L_003EE380:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[16], c.r[16].w[0] - 19328u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[5].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[6].d[0]);
    set32(c.r[6], 0u + 256u);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[7].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 104u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[10].d[0]);
    st64((c.r[29].w[0] + 120u), c.r[11].d[0]);
    st32((c.r[29].w[0] + 40u), c.f[12]);
    st32((c.r[29].w[0] + 44u), c.f[13]);
    st32((c.r[29].w[0] + 48u), c.f[14]);
    st32((c.r[29].w[0] + 52u), c.f[15]);
    st32((c.r[29].w[0] + 56u), c.f[16]);
    st32((c.r[29].w[0] + 60u), c.f[17]);
    st32((c.r[29].w[0] + 64u), c.f[18]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE3E8u); st32((c.r[29].w[0] + 68u), c.f[19]);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003EE3E8u) [[unlikely]] return; }
L_003EE3E8:
    set32(c.r[6], c.r[29].w[0] + 72u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE3F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 31u, depth + 1u); else { c.pc = 0x0012C458u; return; } if (c.pc != 0x003EE3F8u) [[unlikely]] return; }
L_003EE3F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE400u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 320u, depth + 1u); else { c.pc = 0x003EE448u; return; } if (c.pc != 0x003EE400u) [[unlikely]] return; }
L_003EE400:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003EE418:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 6u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D3918u | kUnwind; return; } [[clang::musttail]] return unit_00B4(c, 367u, depth); }
L_003EE430:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B76D8u | kUnwind; return; } [[clang::musttail]] return unit_00AD(c, 426u, depth); }
L_003EE448:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D3450u | kUnwind; return; } [[clang::musttail]] return unit_00B4(c, 333u, depth); }
L_003EE460:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE470u);  if (depth < kMaxDepth) unit_00BF(c, 440u, depth + 1u); else { c.pc = 0x003FFF10u; return; } if (c.pc != 0x003EE470u) [[unlikely]] return; }
L_003EE470:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EE488:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 96u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003EE4A8; } }
    c.budget -= 2;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003EE4B0; }
L_003EE4A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EE4B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[17].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 8;
L_003EE4D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_003EE504; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE4E4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 440u, depth + 1u); else { c.pc = 0x003EEF58u; return; } if (c.pc != 0x003EE4E4u) [[unlikely]] return; }
L_003EE4E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE4ECu);  if (depth < kMaxDepth) unit_00AE(c, 7u, depth + 1u); else { c.pc = 0x003B80F8u; return; } if (c.pc != 0x003EE4ECu) [[unlikely]] return; }
L_003EE4EC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE4F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 440u, depth + 1u); else { c.pc = 0x003EEF58u; return; } if (c.pc != 0x003EE4F8u) [[unlikely]] return; }
L_003EE4F8:
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[17].sd[0] < 10ll ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EE4D0u | kUnwind; return; } goto L_003EE4D0; } }
L_003EE504:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003EE518:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[18], ld32((c.r[17].w[0] + 280u)));
    c.budget -= 11;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; set32(c.r[19], ld32((c.r[17].w[0] + 64u)));  if (t) { goto L_003EE56C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE54Cu);  if (depth < kMaxDepth) unit_00BB(c, 310u, depth + 1u); else { c.pc = 0x003EE330u; return; } if (c.pc != 0x003EE54Cu) [[unlikely]] return; }
L_003EE54C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE558u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 349u, depth + 1u); else { c.pc = 0x003EE760u; return; } if (c.pc != 0x003EE558u) [[unlikely]] return; }
L_003EE558:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[18].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003EE564; } }
    st32((c.r[17].w[0] + 280u), 0u);
    c.budget -= 1;
L_003EE564:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE56Cu);  if (depth < kMaxDepth) unit_00BB(c, 312u, depth + 1u); else { c.pc = 0x003EE350u; return; } if (c.pc != 0x003EE56Cu) [[unlikely]] return; }
L_003EE56C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE574u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 335u, depth + 1u); else { c.pc = 0x003EE5B8u; return; } if (c.pc != 0x003EE574u) [[unlikely]] return; }
L_003EE574:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE57Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 441u, depth + 1u); else { c.pc = 0x003FFF28u; return; } if (c.pc != 0x003EE57Cu) [[unlikely]] return; }
L_003EE57C:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 6u);  if (t) { goto L_003EE594; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003EE5A0; } }
L_003EE594:
    set32(c.r[2], 0u + 2u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
L_003EE5A0:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003EE5B8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 492u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003EE5D8; } }
    c.budget -= 2;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003EE5E0; }
L_003EE5D8:
    c.budget -= 2;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003EE6D8; }
L_003EE5E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], c.r[17].w[0] + 492u);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE604u); set32(c.r[4], ld32((c.r[17].w[0] + 64u)));  if (depth < kMaxDepth) unit_00BF(c, 441u, depth + 1u); else { c.pc = 0x003FFF28u; return; } if (c.pc != 0x003EE604u) [[unlikely]] return; }
L_003EE604:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE610u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 239u, depth + 1u); else { c.pc = 0x003EDBD0u; return; } if (c.pc != 0x003EE610u) [[unlikely]] return; }
L_003EE610:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    if (c.r[16].d[0] != c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003EE6C0; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003EE648; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE640u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EE640u) [[unlikely]] return; }
L_003EE640:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003EE6C0; } }
L_003EE648:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE650u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 225u, depth + 1u); else { c.pc = 0x003E9AB8u; return; } if (c.pc != 0x003EE650u) [[unlikely]] return; }
L_003EE650:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 114u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 112u)));  goto L_003EE66C; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE668u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 277u, depth + 1u); else { c.pc = 0x003EA020u; return; } if (c.pc != 0x003EE668u) [[unlikely]] return; }
L_003EE668:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 112u)));
    c.budget -= 1;
L_003EE66C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 114u)));  goto L_003EE698; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE680u); set32(c.r[4], ld32((c.r[17].w[0] + 64u)));  if (depth < kMaxDepth) unit_00BC(c, 293u, depth + 1u); else { c.pc = 0x003F29A0u; return; } if (c.pc != 0x003EE680u) [[unlikely]] return; }
L_003EE680:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 114u)));  goto L_003EE698; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE694u); set32(c.r[4], c.r[4].w[0] - 32176u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003EE694u) [[unlikely]] return; }
L_003EE694:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 114u)));
    c.budget -= 1;
L_003EE698:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003EE6C0; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EDCA8u | kUnwind; return; } goto L_003EDCA8; }
L_003EE6C0:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003EE6D8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE6F0u); set32(c.r[4], ld32((c.r[16].w[0] + 64u)));  if (depth < kMaxDepth) unit_00BF(c, 441u, depth + 1u); else { c.pc = 0x003FFF28u; return; } if (c.pc != 0x003EE6F0u) [[unlikely]] return; }
L_003EE6F0:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003EE750; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE704u);  if (depth < kMaxDepth) unit_00BA(c, 225u, depth + 1u); else { c.pc = 0x003E9AB8u; return; } if (c.pc != 0x003EE704u) [[unlikely]] return; }
L_003EE704:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 114u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003EE71C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE71Cu);  if (depth < kMaxDepth) unit_00BA(c, 277u, depth + 1u); else { c.pc = 0x003EA020u; return; } if (c.pc != 0x003EE71Cu) [[unlikely]] return; }
L_003EE71C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 112u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003EE754; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE734u); set32(c.r[4], ld32((c.r[16].w[0] + 64u)));  if (depth < kMaxDepth) unit_00BC(c, 293u, depth + 1u); else { c.pc = 0x003F29A0u; return; } if (c.pc != 0x003EE734u) [[unlikely]] return; }
L_003EE734:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] - 32176u);  if (t) { goto L_003EE750; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EE380u | kUnwind; return; } goto L_003EE380; }
L_003EE750:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003EE754:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EE760:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE778u); set32(c.r[4], ld32((c.r[16].w[0] + 68u)));  if (depth < kMaxDepth) unit_00BB(c, 489u, depth + 1u); else { c.pc = 0x003EF358u; return; } if (c.pc != 0x003EE778u) [[unlikely]] return; }
L_003EE778:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 296u)));  goto L_003EE790; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003EE80C; } }
    c.budget -= 1;
L_003EE790:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 272u)));  goto L_003EE7AC; }
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE7A8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EE7A8u) [[unlikely]] return; }
L_003EE7A8:
    set32(c.r[5], ld32((c.r[16].w[0] + 272u)));
    c.budget -= 1;
L_003EE7AC:
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 284u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 288u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE7C0u); set32(c.r[8], ld32((c.r[16].w[0] + 292u)));  if (depth < kMaxDepth) unit_00BB(c, 481u, depth + 1u); else { c.pc = 0x003EF278u; return; } if (c.pc != 0x003EE7C0u) [[unlikely]] return; }
L_003EE7C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE7C8u); set32(c.r[4], ld32((c.r[16].w[0] + 68u)));  if (depth < kMaxDepth) unit_00BB(c, 484u, depth + 1u); else { c.pc = 0x003EF2F0u; return; } if (c.pc != 0x003EE7C8u) [[unlikely]] return; }
L_003EE7C8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003EE800; } }
    set32(c.r[2], 0u + 4u);
    set32(c.r[4], 0u - 102u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE7E4u); st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BA(c, 195u, depth + 1u); else { c.pc = 0x003E9720u; return; } if (c.pc != 0x003EE7E4u) [[unlikely]] return; }
L_003EE7E4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 272u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE7F4u); set32(c.r[4], c.r[4].w[0] - 32128u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003EE7F4u) [[unlikely]] return; }
L_003EE7F4:
    st32((c.r[16].w[0] + 280u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003EE80C; } }
L_003EE800:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE808u);  if (depth < kMaxDepth) unit_00B9(c, 230u, depth + 1u); else { c.pc = 0x003E6BD8u; return; } if (c.pc != 0x003EE808u) [[unlikely]] return; }
L_003EE808:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003EE80C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EE820:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 113u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[17], ld32((c.r[16].w[0] + 64u)));  if (t) { goto L_003EE874; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE84Cu); set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_00B3(c, 285u, depth + 1u); else { c.pc = 0x003CE430u; return; } if (c.pc != 0x003EE84Cu) [[unlikely]] return; }
L_003EE84C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003EE874; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE85Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 329u, depth + 1u); else { c.pc = 0x003FEB58u; return; } if (c.pc != 0x003EE85Cu) [[unlikely]] return; }
L_003EE85C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] - 32080u);  if (t) { goto L_003EE870; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE870u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003EE870u) [[unlikely]] return; }
L_003EE870:
    st8((c.r[16].w[0] + 113u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_003EE874:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE87Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 441u, depth + 1u); else { c.pc = 0x003FFF28u; return; } if (c.pc != 0x003EE87Cu) [[unlikely]] return; }
L_003EE87C:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003EE894; }
    set32(c.r[2], 0u + 3u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
L_003EE894:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003EE8A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] << 2);  if (t) { goto L_003EE8F8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] - 32032u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x003EC000u < 16384u) { entry = entries_00BB[(t - 0x003EC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003EE8E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE8E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 329u, depth + 1u); else { c.pc = 0x003EE518u; return; } if (c.pc != 0x003EE8E8u) [[unlikely]] return; }
L_003EE8E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003EE8F8; } }
L_003EE8F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE8F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 357u, depth + 1u); else { c.pc = 0x003EE820u; return; } if (c.pc != 0x003EE8F8u) [[unlikely]] return; }
L_003EE8F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE900u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 369u, depth + 1u); else { c.pc = 0x003EE920u; return; } if (c.pc != 0x003EE900u) [[unlikely]] return; }
L_003EE900:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE908u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 345u, depth + 1u); else { c.pc = 0x003EA6E8u; return; } if (c.pc != 0x003EE908u) [[unlikely]] return; }
L_003EE908:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EE920:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003EE950; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE944u);  if (depth < kMaxDepth) unit_00BB(c, 468u, depth + 1u); else { c.pc = 0x003EF140u; return; } if (c.pc != 0x003EE944u) [[unlikely]] return; }
L_003EE944:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_003EE950; } }
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 1;
L_003EE950:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003EE97C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE964u);  if (depth < kMaxDepth) unit_00BB(c, 191u, depth + 1u); else { c.pc = 0x003ED6A0u; return; } if (c.pc != 0x003EE964u) [[unlikely]] return; }
L_003EE964:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003EE97C; }
    set32(c.r[2], 0u + 4u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
L_003EE97C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EE988:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE99Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 425u, depth + 1u); else { c.pc = 0x003B76C8u; return; } if (c.pc != 0x003EE99Cu) [[unlikely]] return; }
L_003EE99C:
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003EE9B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE9B4u);  if (depth < kMaxDepth) unit_00BB(c, 387u, depth + 1u); else { c.pc = 0x003EEAD8u; return; } if (c.pc != 0x003EE9B4u) [[unlikely]] return; }
L_003EE9B4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003EE9B8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EE9D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE9F0u); c.r[17].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 425u, depth + 1u); else { c.pc = 0x003B76C8u; return; } if (c.pc != 0x003EE9F0u) [[unlikely]] return; }
L_003EE9F0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003EEA20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEA08u);  if (depth < kMaxDepth) unit_00BB(c, 385u, depth + 1u); else { c.pc = 0x003EEAB8u; return; } if (c.pc != 0x003EEA08u) [[unlikely]] return; }
L_003EEA08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[18].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003EEA34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEA18u);  if (depth < kMaxDepth) unit_00BB(c, 403u, depth + 1u); else { c.pc = 0x003EEC68u; return; } if (c.pc != 0x003EEA18u) [[unlikely]] return; }
L_003EEA18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003EEA34; } }
L_003EEA20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEA28u);  if (depth < kMaxDepth) unit_00BB(c, 387u, depth + 1u); else { c.pc = 0x003EEAD8u; return; } if (c.pc != 0x003EEA28u) [[unlikely]] return; }
L_003EEA28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEA30u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 403u, depth + 1u); else { c.pc = 0x003EEC68u; return; } if (c.pc != 0x003EEA30u) [[unlikely]] return; }
L_003EEA30:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003EEA34:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003EEA50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEA70u); c.r[18].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 425u, depth + 1u); else { c.pc = 0x003B76C8u; return; } if (c.pc != 0x003EEA70u) [[unlikely]] return; }
L_003EEA70:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[16].d[0] != c.r[2].d[0]) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_003EEAA0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEA88u);  if (depth < kMaxDepth) unit_00BB(c, 385u, depth + 1u); else { c.pc = 0x003EEAB8u; return; } if (c.pc != 0x003EEA88u) [[unlikely]] return; }
L_003EEA88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[16].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003EEA9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEA98u);  if (depth < kMaxDepth) unit_00BB(c, 403u, depth + 1u); else { c.pc = 0x003EEC68u; return; } if (c.pc != 0x003EEA98u) [[unlikely]] return; }
L_003EEA98:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003EEA9C:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_003EEAA0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003EEAB8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEAC8u);  if (depth < kMaxDepth) unit_00BA(c, 140u, depth + 1u); else { c.pc = 0x003E92A8u; return; } if (c.pc != 0x003EEAC8u) [[unlikely]] return; }
L_003EEAC8:
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EEAD8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEAECu);  if (depth < kMaxDepth) unit_00BB(c, 304u, depth + 1u); else { c.pc = 0x003EE2C0u; return; } if (c.pc != 0x003EEAECu) [[unlikely]] return; }
L_003EEAEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEAF4u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 391u, depth + 1u); else { c.pc = 0x003EEB10u; return; } if (c.pc != 0x003EEAF4u) [[unlikely]] return; }
L_003EEAF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEAFCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 306u, depth + 1u); else { c.pc = 0x003EE2E0u; return; } if (c.pc != 0x003EEAFCu) [[unlikely]] return; }
L_003EEAFC:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EEB10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00450000u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00450000u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[5], c.r[5].w[0] - 17464u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[6], c.r[6].w[0] - 17460u);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[18], c.r[4].w[0] - 21820u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], ld32((c.r[6].w[0])));
    set32(c.r[17], ld32((c.r[18].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 21;
    if (c.r[17].d[0] != c.r[4].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003EEB9C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEB6Cu);  if (depth < kMaxDepth) unit_00BA(c, 140u, depth + 1u); else { c.pc = 0x003E92A8u; return; } if (c.pc != 0x003EEB6Cu) [[unlikely]] return; }
L_003EEB6C:
    set32(c.r[16], c.r[2].w[0] + 88u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEB78u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 313u, depth + 1u); else { c.pc = 0x003EE368u; return; } if (c.pc != 0x003EEB78u) [[unlikely]] return; }
L_003EEB78:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003EEB9C; }
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[17].d[0]) { st32((c.r[16].w[0]), 0u);  goto L_003EEB98; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEB94u);  if (depth < kMaxDepth) unit_00BF(c, 108u, depth + 1u); else { c.pc = 0x003FD0B0u; return; } if (c.pc != 0x003EEB94u) [[unlikely]] return; }
L_003EEB94:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_003EEB98:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003EEB9C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003EEBB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEBDCu); c.r[19].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 140u, depth + 1u); else { c.pc = 0x003E92A8u; return; } if (c.pc != 0x003EEBDCu) [[unlikely]] return; }
L_003EEBDC:
    st32((c.r[2].w[0] + 76u), c.r[16].w[0]);
    st32((c.r[2].w[0] + 64u), c.r[17].w[0]);
    st32((c.r[2].w[0] + 68u), c.r[18].w[0]);
    st32((c.r[2].w[0] + 72u), c.r[19].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003EEC08:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEC18u);  if (depth < kMaxDepth) unit_00BA(c, 140u, depth + 1u); else { c.pc = 0x003E92A8u; return; } if (c.pc != 0x003EEC18u) [[unlikely]] return; }
L_003EEC18:
    set32(c.r[3], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 68u)));  if (t) { goto L_003EEC2C; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEC2Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EEC2Cu) [[unlikely]] return; }
L_003EEC2C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EEC38:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEC48u);  if (depth < kMaxDepth) unit_00BA(c, 140u, depth + 1u); else { c.pc = 0x003E92A8u; return; } if (c.pc != 0x003EEC48u) [[unlikely]] return; }
L_003EEC48:
    set32(c.r[3], ld32((c.r[2].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 76u)));  if (t) { goto L_003EEC5C; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEC5Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EEC5Cu) [[unlikely]] return; }
L_003EEC5C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EEC68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], ld32((c.r[2].w[0] - 21820u)));
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_003EECF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEC94u);  if (depth < kMaxDepth) unit_00BA(c, 140u, depth + 1u); else { c.pc = 0x003E92A8u; return; } if (c.pc != 0x003EEC94u) [[unlikely]] return; }
L_003EEC94:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EECA0u); set32(c.r[4], c.r[16].w[0] + 84u);  if (depth < kMaxDepth) unit_00BB(c, 313u, depth + 1u); else { c.pc = 0x003EE368u; return; } if (c.pc != 0x003EECA0u) [[unlikely]] return; }
L_003EECA0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003EECF8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EECB0u); set32(c.r[16], c.r[16].w[0] + 104u);  if (depth < kMaxDepth) unit_00BB(c, 397u, depth + 1u); else { c.pc = 0x003EEC08u; return; } if (c.pc != 0x003EECB0u) [[unlikely]] return; }
L_003EECB0:
    set32(c.r[17], 0u + 7u);
    c.budget -= 2;
L_003EECB8:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_003EECCC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EECC8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 412u, depth + 1u); else { c.pc = 0x003EED08u; return; } if (c.pc != 0x003EECC8u) [[unlikely]] return; }
L_003EECC8:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_003EECCC:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] + 528u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EECB8u | kUnwind; return; } goto L_003EECB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EECDCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 428u, depth + 1u); else { c.pc = 0x003EEEA0u; return; } if (c.pc != 0x003EECDCu) [[unlikely]] return; }
L_003EECDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EECE4u);  if (depth < kMaxDepth) unit_00BF(c, 111u, depth + 1u); else { c.pc = 0x003FD0F8u; return; } if (c.pc != 0x003EECE4u) [[unlikely]] return; }
L_003EECE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EECECu); c.r[16].d[0] = c.r[2].d[0] ^ 1ull;  if (depth < kMaxDepth) unit_00BB(c, 400u, depth + 1u); else { c.pc = 0x003EEC38u; return; } if (c.pc != 0x003EECECu) [[unlikely]] return; }
L_003EECEC:
    c.r[16].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_003EECF4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003EECF8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003EED08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], ld32((c.r[2].w[0] - 21820u)));
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_003EED90; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_003EED50; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EED44u); set32(c.r[4], c.r[4].w[0] - 32008u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003EED44u) [[unlikely]] return; }
L_003EED44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003EED90; } }
    c.budget -= 1;
L_003EED50:
    set32(c.r[16], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[5].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003EED90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EED64u);  if (depth < kMaxDepth) unit_00BB(c, 433u, depth + 1u); else { c.pc = 0x003EEEF0u; return; } if (c.pc != 0x003EED64u) [[unlikely]] return; }
L_003EED64:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[16].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_003EED90; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EED74u);  if (depth < kMaxDepth) unit_00BB(c, 443u, depth + 1u); else { c.pc = 0x003EEF98u; return; } if (c.pc != 0x003EED74u) [[unlikely]] return; }
L_003EED74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[16].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EED44u | kUnwind; return; } goto L_003EED44; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003EEDA8; }
L_003EED90:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003EEDA8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEDCCu); set32(c.r[18], ld32((c.r[16].w[0] + 64u)));  if (depth < kMaxDepth) unit_00BB(c, 432u, depth + 1u); else { c.pc = 0x003EEEE8u; return; } if (c.pc != 0x003EEDCCu) [[unlikely]] return; }
L_003EEDCC:
    set32(c.r[17], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003EEDF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEDE8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 432u, depth + 1u); else { c.pc = 0x003EEEE8u; return; } if (c.pc != 0x003EEDE8u) [[unlikely]] return; }
L_003EEDE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003EEE4C; } }
L_003EEDF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEDFCu); st32((c.r[2].w[0] - 17456u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_00BB(c, 434u, depth + 1u); else { c.pc = 0x003EEEF8u; return; } if (c.pc != 0x003EEDFCu) [[unlikely]] return; }
L_003EEDFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEE04u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 114u, depth + 1u); else { c.pc = 0x003FD160u; return; } if (c.pc != 0x003EEE04u) [[unlikely]] return; }
L_003EEE04:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEE10u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 434u, depth + 1u); else { c.pc = 0x003EEEF8u; return; } if (c.pc != 0x003EEE10u) [[unlikely]] return; }
L_003EEE10:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003EEE28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 104u), 0u);  if (t) { goto L_003EEE34; } }
    c.budget -= 1;
L_003EEE28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEE30u); st32((c.r[16].w[0] + 104u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_00BB(c, 362u, depth + 1u); else { c.pc = 0x003EE8A8u; return; } if (c.pc != 0x003EEE30u) [[unlikely]] return; }
L_003EEE30:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003EEE34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEE3Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 432u, depth + 1u); else { c.pc = 0x003EEEE8u; return; } if (c.pc != 0x003EEE3Cu) [[unlikely]] return; }
L_003EEE3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEE44u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 110u, depth + 1u); else { c.pc = 0x003FD0D0u; return; } if (c.pc != 0x003EEE44u) [[unlikely]] return; }
L_003EEE44:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_003EEE4C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003EEE68:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEE78u);  if (depth < kMaxDepth) unit_00BB(c, 391u, depth + 1u); else { c.pc = 0x003EEB10u; return; } if (c.pc != 0x003EEE78u) [[unlikely]] return; }
L_003EEE78:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EEE88:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EEC68u | kUnwind; return; } goto L_003EEC68; }
L_003EEEA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEEB4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 140u, depth + 1u); else { c.pc = 0x003E92A8u; return; } if (c.pc != 0x003EEEB4u) [[unlikely]] return; }
L_003EEEB4:
    st32((c.r[2].w[0] + 84u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EEEC8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEED8u);  if (depth < kMaxDepth) unit_00BA(c, 140u, depth + 1u); else { c.pc = 0x003E92A8u; return; } if (c.pc != 0x003EEED8u) [[unlikely]] return; }
L_003EEED8:
    set32(c.r[2], ld32((c.r[2].w[0] + 84u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EEEE8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 96u), c.r[5].w[0]);  c.pc = t; return; }
L_003EEEF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 96u)));  c.pc = t; return; }
L_003EEEF8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 100u), c.r[5].w[0]);  c.pc = t; return; }
L_003EEF00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 100u)));  c.pc = t; return; }
L_003EEF08:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEF1Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 392u, depth + 1u); else { c.pc = 0x003EABF0u; return; } if (c.pc != 0x003EEF1Cu) [[unlikely]] return; }
L_003EEF1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003EEF38; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEF30u); set32(c.r[4], c.r[4].w[0] - 31968u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003EEF30u) [[unlikely]] return; }
L_003EEF30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003EEF48; } }
L_003EEF38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEF40u);  if (depth < kMaxDepth) unit_00BB(c, 433u, depth + 1u); else { c.pc = 0x003EEEF0u; return; } if (c.pc != 0x003EEF40u) [[unlikely]] return; }
L_003EEF40:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_003EEF48:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EEF58:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEF74u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 140u, depth + 1u); else { c.pc = 0x003E92A8u; return; } if (c.pc != 0x003EEF74u) [[unlikely]] return; }
L_003EEF74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    st32((c.r[16].w[0] + 92u), c.r[17].w[0]);
    st32((c.r[2].w[0] + 36u), c.r[17].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003EEF90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 92u)));  c.pc = t; return; }
L_003EEF98:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEFA8u);  if (depth < kMaxDepth) unit_00BA(c, 140u, depth + 1u); else { c.pc = 0x003E92A8u; return; } if (c.pc != 0x003EEFA8u) [[unlikely]] return; }
L_003EEFA8:
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EEFB8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEFC8u);  if (depth < kMaxDepth) unit_00BB(c, 430u, depth + 1u); else { c.pc = 0x003EEEC8u; return; } if (c.pc != 0x003EEFC8u) [[unlikely]] return; }
L_003EEFC8:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EEFE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEFF4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 341u, depth + 1u); else { c.pc = 0x003EA6A8u; return; } if (c.pc != 0x003EEFF4u) [[unlikely]] return; }
L_003EEFF4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF000u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00BB(c, 440u, depth + 1u); else { c.pc = 0x003EEF58u; return; } if (c.pc != 0x003EF000u) [[unlikely]] return; }
L_003EF000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF008u);  if (depth < kMaxDepth) unit_00BB(c, 318u, depth + 1u); else { c.pc = 0x003EE418u; return; } if (c.pc != 0x003EF008u) [[unlikely]] return; }
L_003EF008:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF014u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 440u, depth + 1u); else { c.pc = 0x003EEF58u; return; } if (c.pc != 0x003EF014u) [[unlikely]] return; }
L_003EF014:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF01Cu);  if (depth < kMaxDepth) unit_00BA(c, 342u, depth + 1u); else { c.pc = 0x003EA6C0u; return; } if (c.pc != 0x003EF01Cu) [[unlikely]] return; }
L_003EF01C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EE488u | kUnwind; return; } goto L_003EE488; }
L_003EF030:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003EF038:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003EF040:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003EF048:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003EF050:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003EF06C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF068u);  if (depth < kMaxDepth) unit_00AF(c, 114u, depth + 1u); else { c.pc = 0x003BCF70u; return; } if (c.pc != 0x003EF068u) [[unlikely]] return; }
L_003EF068:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003EF06C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EF078:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003EF080:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_003EF0B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF0A4u);  if (depth < kMaxDepth) unit_00AF(c, 54u, depth + 1u); else { c.pc = 0x003BC708u; return; } if (c.pc != 0x003EF0A4u) [[unlikely]] return; }
L_003EF0A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003EF10C; } }
    c.budget -= 1;
L_003EF0B0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[6].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 2u);  goto L_003EF0D8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF0C4u);  if (depth < kMaxDepth) unit_00AF(c, 55u, depth + 1u); else { c.pc = 0x003BC750u; return; } if (c.pc != 0x003EF0C4u) [[unlikely]] return; }
L_003EF0C4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF0D0u); set32(c.r[5], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_00AF(c, 54u, depth + 1u); else { c.pc = 0x003BC708u; return; } if (c.pc != 0x003EF0D0u) [[unlikely]] return; }
L_003EF0D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003EF10C; } }
L_003EF0D8:
    c.budget -= 2;
    if (c.r[6].d[0] != c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003EF10C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF0E8u);  if (depth < kMaxDepth) unit_00AF(c, 116u, depth + 1u); else { c.pc = 0x003BCF88u; return; } if (c.pc != 0x003EF0E8u) [[unlikely]] return; }
L_003EF0E8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[2].w[0] + 2047u);
    set32(c.r[2], c.r[2].w[0] + 4094u);
    c.r[3].d[0] = c.r[5].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[5].d[0] = c.r[2].d[0];
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 11));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF108u); set32(c.r[5], c.r[5].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_00AF(c, 54u, depth + 1u); else { c.pc = 0x003BC708u; return; } if (c.pc != 0x003EF108u) [[unlikely]] return; }
L_003EF108:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003EF10C:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003EF120:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF130u);  if (depth < kMaxDepth) unit_00AF(c, 57u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x003EF130u) [[unlikely]] return; }
L_003EF130:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EF140:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF150u);  if (depth < kMaxDepth) unit_00AF(c, 53u, depth + 1u); else { c.pc = 0x003BC700u; return; } if (c.pc != 0x003EF150u) [[unlikely]] return; }
L_003EF150:
    c.r[2].d[0] = c.r[2].d[0] ^ 4ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EF168:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003EF170:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003EF188; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BCF60u | kUnwind; return; } [[clang::musttail]] return unit_00AF(c, 113u, depth); }
L_003EF188:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EF198:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BCF40u | kUnwind; return; } [[clang::musttail]] return unit_00AF(c, 111u, depth); }
L_003EF1B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF1C4u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 116u, depth + 1u); else { c.pc = 0x003BCF88u; return; } if (c.pc != 0x003EF1C4u) [[unlikely]] return; }
L_003EF1C4:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EF1D8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BD128u | kUnwind; return; } [[clang::musttail]] return unit_00AF(c, 134u, depth); }
L_003EF1F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BC520u | kUnwind; return; } [[clang::musttail]] return unit_00AF(c, 32u, depth); }
L_003EF208:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BC568u | kUnwind; return; } [[clang::musttail]] return unit_00AF(c, 35u, depth); }
L_003EF220:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF23Cu); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 44u, depth + 1u); else { c.pc = 0x003BC668u; return; } if (c.pc != 0x003EF23Cu) [[unlikely]] return; }
L_003EF23C:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF258u); c.r[8].d[0] = c.r[8].d[0] | 65535ull;  if (depth < kMaxDepth) unit_00AF(c, 38u, depth + 1u); else { c.pc = 0x003BC5C0u; return; } if (c.pc != 0x003EF258u) [[unlikely]] return; }
L_003EF258:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BC8F0u | kUnwind; return; } [[clang::musttail]] return unit_00AF(c, 72u, depth); }
L_003EF278:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF2ACu); c.r[20].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 44u, depth + 1u); else { c.pc = 0x003BC668u; return; } if (c.pc != 0x003EF2ACu) [[unlikely]] return; }
L_003EF2AC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF2C4u); c.r[8].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 38u, depth + 1u); else { c.pc = 0x003BC5C0u; return; } if (c.pc != 0x003EF2C4u) [[unlikely]] return; }
L_003EF2C4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BC8F0u | kUnwind; return; } [[clang::musttail]] return unit_00AF(c, 72u, depth); }
L_003EF2F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BC7A0u | kUnwind; return; } [[clang::musttail]] return unit_00AF(c, 57u, depth); }
L_003EF308:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF31Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 65u, depth + 1u); else { c.pc = 0x003BC828u; return; } if (c.pc != 0x003EF31Cu) [[unlikely]] return; }
L_003EF31C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BC668u | kUnwind; return; } [[clang::musttail]] return unit_00AF(c, 44u, depth); }
L_003EF330:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF344u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 67u, depth + 1u); else { c.pc = 0x003BC890u; return; } if (c.pc != 0x003EF344u) [[unlikely]] return; }
L_003EF344:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BC6A8u | kUnwind; return; } [[clang::musttail]] return unit_00AF(c, 47u, depth); }
L_003EF358:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BC700u | kUnwind; return; } [[clang::musttail]] return unit_00AF(c, 53u, depth); }
L_003EF370:
    set32(c.r[2], 0u + 288u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[5].sd[0] < 288ll ? 1ull : 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003EF3C4; } }
    c.r[4].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[3], 0u + 128u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003EF3C8; }
    c.r[3].d[0] = ld8((c.r[6].w[0] + 1u));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003EF3C8; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[6].w[0] + 282u);
    set32(c.r[5], c.r[5].w[0] - 31832u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF3C0u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_000A(c, 3u, depth + 1u); else { c.pc = 0x00128038u; return; } if (c.pc != 0x003EF3C0u) [[unlikely]] return; }
L_003EF3C0:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 1;
L_003EF3C4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003EF3C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EF3D0:
    set32(c.r[2], 0u + 18u);
    c.r[5].d[0] = c.r[5].sd[0] < 18ll ? 1ull : 0ull;
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003EF404; } }
    c.r[4].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[3], 0u + 128u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003EF404; } }
    c.r[2].d[0] = ld8((c.r[6].w[0] + 1u));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_003EF404:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003EF410:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 7028u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BE7E0u | kUnwind; return; } [[clang::musttail]] return unit_00AF(c, 303u, depth); }
L_003EF430:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 7028u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BE898u | kUnwind; return; } [[clang::musttail]] return unit_00AF(c, 307u, depth); }
L_003EF450:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 7028u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BE960u | kUnwind; return; } [[clang::musttail]] return unit_00AF(c, 314u, depth); }
L_003EF470:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 7028u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BE9C8u | kUnwind; return; } [[clang::musttail]] return unit_00AF(c, 316u, depth); }
L_003EF490:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[4].w[0] + 7020u);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF4A8u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 75u, depth + 1u); else { c.pc = 0x0011CEF8u; return; } if (c.pc != 0x003EF4A8u) [[unlikely]] return; }
L_003EF4A8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF4B4u);  if (depth < kMaxDepth) unit_0006(c, 216u, depth + 1u); else { c.pc = 0x0011A590u; return; } if (c.pc != 0x003EF4B4u) [[unlikely]] return; }
L_003EF4B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF4BCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 82u, depth + 1u); else { c.pc = 0x0011D080u; return; } if (c.pc != 0x003EF4BCu) [[unlikely]] return; }
L_003EF4BC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40DD0000u);
    c.r[1].d[0] = c.r[1].d[0] | 3156ull;
    c.f[2] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44D80000u);
    c.r[1].d[0] = c.r[1].d[0] | 26493ull;
    c.f[3] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[1].d[0] = c.r[1].d[0] | 55050ull;
    c.f[1] = c.r[1].w[0];
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    c.f[2] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[0]);
    set32(c.r[6], c.r[2].w[0] << 1);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[3].w[0] - c.r[6].w[0]);
    c.budget -= 29;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BF188u | kUnwind; return; } [[clang::musttail]] return unit_00AF(c, 376u, depth); }
L_003EF530:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], c.r[5].w[0] - 19056u);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[6], 0u - 32u);
    set32(c.r[2], c.r[2].w[0] + 31u);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    st32((c.r[5].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[5].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + 31u);
    st32((c.r[5].w[0] + 12u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    st32((c.r[5].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    st32((c.r[5].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 22;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 20u), c.r[2].w[0]);  c.pc = t; return; }
L_003EF588:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF598u);  if (depth < kMaxDepth) unit_00AD(c, 233u, depth + 1u); else { c.pc = 0x003B62A0u; return; } if (c.pc != 0x003EF598u) [[unlikely]] return; }
L_003EF598:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF5A0u);  if (depth < kMaxDepth) unit_00AE(c, 106u, depth + 1u); else { c.pc = 0x003B89D0u; return; } if (c.pc != 0x003EF5A0u) [[unlikely]] return; }
L_003EF5A0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 19056u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF5B4u); set32(c.r[6], 0u + 7u);  if (depth < kMaxDepth) unit_00B8(c, 53u, depth + 1u); else { c.pc = 0x003E0EE8u; return; } if (c.pc != 0x003EF5B4u) [[unlikely]] return; }
L_003EF5B4:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EF5C8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF5D8u);  if (depth < kMaxDepth) unit_00AE(c, 107u, depth + 1u); else { c.pc = 0x003B89E8u; return; } if (c.pc != 0x003EF5D8u) [[unlikely]] return; }
L_003EF5D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF5E0u);  if (depth < kMaxDepth) unit_00AD(c, 256u, depth + 1u); else { c.pc = 0x003B6440u; return; } if (c.pc != 0x003EF5E0u) [[unlikely]] return; }
L_003EF5E0:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EF5F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[2], c.r[16].w[0] + 3264u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 7028u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 436u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 432u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; set32(c.r[17], ld32((c.r[4].w[0])));  if (t) { goto L_003EF668; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF628u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 293u, depth + 1u); else { c.pc = 0x003BE650u; return; } if (c.pc != 0x003EF628u) [[unlikely]] return; }
L_003EF628:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF634u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 295u, depth + 1u); else { c.pc = 0x003BE6A0u; return; } if (c.pc != 0x003EF634u) [[unlikely]] return; }
L_003EF634:
    c.budget -= 2;
    if (c.r[18].sd[0] <= 0) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003EF66C; }
    c.budget -= 2;
    if (c.r[2].sd[0] <= 0) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003EF66C; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00BC(c, 307u, depth); }
L_003EF668:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003EF66C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003EF680:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003EF698; }
L_003EF698:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 6u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF6B4u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 20u, depth + 1u); else { c.pc = 0x00400258u; return; } if (c.pc != 0x003EF6B4u) [[unlikely]] return; }
L_003EF6B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003EF714; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF6C4u);  if (depth < kMaxDepth) unit_00BC(c, 18u, depth + 1u); else { c.pc = 0x003F0228u; return; } if (c.pc != 0x003EF6C4u) [[unlikely]] return; }
L_003EF6C4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003EF6D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003EF714; } }
L_003EF6D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF6E0u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 522u, depth + 1u); else { c.pc = 0x003EF728u; return; } if (c.pc != 0x003EF6E0u) [[unlikely]] return; }
L_003EF6E0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF6ECu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 568u, depth + 1u); else { c.pc = 0x003EFF48u; return; } if (c.pc != 0x003EF6ECu) [[unlikely]] return; }
L_003EF6EC:
    set32(c.r[5], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF6F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 3u, depth + 1u); else { c.pc = 0x003F0018u; return; } if (c.pc != 0x003EF6F8u) [[unlikely]] return; }
L_003EF6F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF700u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 20u, depth + 1u); else { c.pc = 0x003F0260u; return; } if (c.pc != 0x003EF700u) [[unlikely]] return; }
L_003EF700:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF708u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 29u, depth + 1u); else { c.pc = 0x003F0340u; return; } if (c.pc != 0x003EF708u) [[unlikely]] return; }
L_003EF708:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF710u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 509u, depth + 1u); else { c.pc = 0x003EF5F0u; return; } if (c.pc != 0x003EF710u) [[unlikely]] return; }
L_003EF710:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003EF714:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003EF728:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 4u);
    st32((c.r[18].w[0]), 0u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF758u); set32(c.r[17], ld32((c.r[16].w[0] + 7028u)));  if (depth < kMaxDepth) unit_00BC(c, 13u, depth + 1u); else { c.pc = 0x003F01A8u; return; } if (c.pc != 0x003EF758u) [[unlikely]] return; }
L_003EF758:
    set32(c.r[7], c.r[29].w[0] + 8u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003EF788; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[3], ld32((c.r[17].w[0] + 60u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF77Cu); st32((c.r[18].w[0]), c.r[2].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EF77Cu) [[unlikely]] return; }
L_003EF77C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF788u); set32(c.r[5], ld32((c.r[29].w[0] + 8u)));  if (depth < kMaxDepth) unit_00BC(c, 15u, depth + 1u); else { c.pc = 0x003F01F0u; return; } if (c.pc != 0x003EF788u) [[unlikely]] return; }
L_003EF788:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003EF7A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF7C0u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EF7C0u) [[unlikely]] return; }
L_003EF7C0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EF7D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != 0ull; st64((c.r[29].w[0] + 32u), c.r[31].d[0]);  if (t) { goto L_003EF808; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF7FCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EF7FCu) [[unlikely]] return; }
L_003EF7FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003EF848; } }
    c.budget -= 1;
L_003EF808:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF814u); c.r[7].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 230u, depth + 1u); else { c.pc = 0x003D2388u; return; } if (c.pc != 0x003EF814u) [[unlikely]] return; }
L_003EF814:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF82Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EF82Cu) [[unlikely]] return; }
L_003EF82C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF844u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EF844u) [[unlikely]] return; }
L_003EF844:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003EF848:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003EF858:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    set32(c.r[17], ld32((c.r[4].w[0] + 7028u)));
    set32(c.r[19], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF89Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 526u, depth + 1u); else { c.pc = 0x003EF7A0u; return; } if (c.pc != 0x003EF89Cu) [[unlikely]] return; }
L_003EF89C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[16], ld32((c.r[29].w[0] + 4u)));
    c.r[6].d[0] = c.r[6].d[0] | 36864ull;
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[2].d[0] = c.r[18].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[16].d[0] = c.r[18].d[0];
    c.r[3].d[0] = c.r[6].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[16].d[0] = c.r[6].d[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF8C8u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 36u, depth + 1u); else { c.pc = 0x003E0A78u; return; } if (c.pc != 0x003EF8C8u) [[unlikely]] return; }
L_003EF8C8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF8D8u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 528u, depth + 1u); else { c.pc = 0x003EF7D0u; return; } if (c.pc != 0x003EF8D8u) [[unlikely]] return; }
L_003EF8D8:
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    st32((c.r[17].w[0] + 72u), c.r[2].w[0]);
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    st32((c.r[21].w[0]), c.r[16].w[0]);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003EF910:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[30].d[0]);
    c.r[30].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 88u), c.r[23].d[0]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    set32(c.r[6], c.r[29].w[0] + 4u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    set32(c.r[17], c.r[20].w[0] + 3264u);
    st64((c.r[29].w[0] + 80u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 104u), c.r[31].d[0]);
    st32((c.r[30].w[0]), 0u);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF964u); set32(c.r[19], ld32((c.r[20].w[0] + 7028u)));  if (depth < kMaxDepth) unit_00BB(c, 566u, depth + 1u); else { c.pc = 0x003EFEF8u; return; } if (c.pc != 0x003EF964u) [[unlikely]] return; }
L_003EF964:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x003F0000u);  goto L_003EF9A8; }
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF978u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 79u, depth + 1u); else { c.pc = 0x00400CF0u; return; } if (c.pc != 0x003EF978u) [[unlikely]] return; }
L_003EF978:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].sd[0] < 0; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_003EFB3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF98Cu); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_00C0(c, 20u, depth + 1u); else { c.pc = 0x00400258u; return; } if (c.pc != 0x003EF98Cu) [[unlikely]] return; }
L_003EF98C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[29].w[0] + 4u)));  goto L_003EF9B8; }
    set32(c.r[6], ld32((c.r[29].w[0] + 4u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF9A4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 83u, depth + 1u); else { c.pc = 0x00400DB8u; return; } if (c.pc != 0x003EF9A4u) [[unlikely]] return; }
L_003EF9A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    c.budget -= 1;
L_003EF9A8:
    set32(c.r[2], c.r[2].w[0] - 1960u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 60u), c.r[2].w[0]);  if (t) { goto L_003EFB3C; } }
    c.budget -= 1;
L_003EF9B8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF9C4u); set32(c.r[6], c.r[29].w[0] + 8u);  if (depth < kMaxDepth) unit_00C0(c, 81u, depth + 1u); else { c.pc = 0x00400D40u; return; } if (c.pc != 0x003EF9C4u) [[unlikely]] return; }
L_003EF9C4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] < 0; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003EFB3C; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 4u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF9E0u); c.r[22].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 83u, depth + 1u); else { c.pc = 0x00400DB8u; return; } if (c.pc != 0x003EF9E0u) [[unlikely]] return; }
L_003EF9E0:
    set32(c.r[3], c.r[16].w[0] - c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 56u)));
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[5], ld32((c.r[29].w[0])));  if (t) { goto L_003EFAE0; } }
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], c.r[2].w[0] << 1);
    c.budget -= 7;
    { const bool t = c.r[17].sd[0] <= 0; st32((c.r[29].w[0] + 12u), 0u);  if (t) { goto L_003EFA94; } }
    set32(c.r[2], c.r[5].w[0] << 3);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[29].w[0] + 12u);
    set32(c.r[2], c.r[2].w[0] << 1);
    mmi::div(c, 0, c.r[21].w[0], c.r[2].w[0]);
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x003EFA2Cu);  goto L_003EFA30; }
L_003EFA30:
    c.r[3].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[17].d[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFA5Cu); set32(c.r[16], c.r[17].w[0] - c.r[16].w[0]);  if (depth < kMaxDepth) unit_00BB(c, 548u, depth + 1u); else { c.pc = 0x003EFB70u; return; } if (c.pc != 0x003EFA5Cu) [[unlikely]] return; }
L_003EFA5C:
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    mmi::div(c, 0, c.r[22].w[0], c.r[2].w[0]);
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x003EFA78u);  goto L_003EFA7C; }
L_003EFA7C:
    set32(c.r[3], ld32((c.r[19].w[0] + 56u)));
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = c.r[16].sd[0] > 0; st32((c.r[19].w[0] + 56u), c.r[3].w[0]);  if (t) { goto L_003EFABC; } }
L_003EFA94:
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x003F0000u);  if (t) { goto L_003EFABC; } }
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1960u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[19].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFAB8u); set32(c.r[6], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_00AF(c, 399u, depth + 1u); else { c.pc = 0x003BF418u; return; } if (c.pc != 0x003EFAB8u) [[unlikely]] return; }
L_003EFAB8:
    st32((c.r[29].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 1;
L_003EFABC:
    set32(c.r[2], ld32((c.r[29].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_003EFB38; } }
    set32(c.r[5], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFAD4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 9u, depth + 1u); else { c.pc = 0x00400090u; return; } if (c.pc != 0x003EFAD4u) [[unlikely]] return; }
L_003EFAD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[30].w[0]), c.r[22].w[0]);  if (t) { goto L_003EFB3C; } }
    c.budget -= 1;
L_003EFAE0:
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u - c.r[3].w[0]);  if (t) { goto L_003EFB38; } }
    set32(c.r[2], c.r[4].w[0] + 31u);
    c.r[3].d[0] = c.r[4].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[4].d[0] = c.r[2].d[0];
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 5));
    set32(c.r[16], c.r[4].w[0] << 5);
    c.budget -= 7;
    if (c.r[16].sd[0] <= 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x003F0000u);  goto L_003EFB30; }
    set32(c.r[5], ld32((c.r[29].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFB18u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 551u, depth + 1u); else { c.pc = 0x003EFBF8u; return; } if (c.pc != 0x003EFB18u) [[unlikely]] return; }
L_003EFB18:
    set32(c.r[3], ld32((c.r[19].w[0] + 56u)));
    set32(c.r[4], c.r[16].w[0] - c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] > 0; st32((c.r[19].w[0] + 56u), c.r[3].w[0]);  if (t) { goto L_003EFB38; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    c.budget -= 1;
L_003EFB30:
    set32(c.r[2], c.r[2].w[0] - 1960u);
    st32((c.r[19].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 2;
L_003EFB38:
    st32((c.r[30].w[0]), c.r[22].w[0]);
    c.budget -= 1;
L_003EFB3C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 88u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 104u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003EFB70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    set32(c.r[20], 0u + 1u);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), 0u);  if (t) { goto L_003EFBAC; } }
L_003EFBA8:
    set32(c.r[17], c.r[17].w[0] + 18u);
    c.budget -= 1;
L_003EFBAC:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003EFBD8; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 18u);
    set32(c.r[5], 0u + 18u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFBCCu); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 399u, depth + 1u); else { c.pc = 0x003BF418u; return; } if (c.pc != 0x003EFBCCu) [[unlikely]] return; }
L_003EFBCC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EFBA8u | kUnwind; return; } goto L_003EFBA8; } }
    st32((c.r[19].w[0]), c.r[20].w[0]);
    c.budget -= 1;
L_003EFBD8:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003EFBF8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 7028u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BF458u | kUnwind; return; } [[clang::musttail]] return unit_00AF(c, 400u, depth); }
L_003EFC18:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    c.r[2].d[0] = c.r[18].sd[0] < 288ll ? 1ull : 0ull;
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[19].w[0]), 0u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 18;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], ld32((c.r[16].w[0] + 7028u)));  if (t) { goto L_003EFCAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFC68u);  if (depth < kMaxDepth) unit_00AF(c, 397u, depth + 1u); else { c.pc = 0x003BF380u; return; } if (c.pc != 0x003EFC68u) [[unlikely]] return; }
L_003EFC68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], ld32((c.r[29].w[0])));  if (t) { goto L_003EFC9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFC78u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 52u, depth + 1u); else { c.pc = 0x003F45B0u; return; } if (c.pc != 0x003EFC78u) [[unlikely]] return; }
L_003EFC78:
    c.r[3].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].sd[0] < 108ll ? 1ull : 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003EFC9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFC98u);  if (depth < kMaxDepth) unit_00BB(c, 556u, depth + 1u); else { c.pc = 0x003EFCD0u; return; } if (c.pc != 0x003EFC98u) [[unlikely]] return; }
L_003EFC98:
    set32(c.r[3], c.r[2].w[0] - c.r[17].w[0]);
    c.budget -= 1;
L_003EFC9C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1776u);
    st32((c.r[20].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 4;
L_003EFCAC:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003EFCD0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], c.r[17].w[0] + 36u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[2].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    c.r[21].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[22].d[0]);
    c.r[22].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[30].d[0]);
    c.r[30].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[18], c.r[20].w[0] + c.r[6].w[0]);
    st64((c.r[29].w[0] + 72u), c.r[23].d[0]);
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 21;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0] + 88u), c.r[31].d[0]);  if (t) { goto L_003EFD90; } }
    c.r[23].d[0] = c.r[3].d[0] + 0ull;
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_003EFD30:
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003EFD34:
    c.r[2].d[0] = c.r[16].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003EFD78; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].sd[0] >= 0) { set32(c.r[16], c.r[16].w[0] + 18u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EFD34u | kUnwind; return; } goto L_003EFD34; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 18u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFD60u); set32(c.r[19], 0u + 1u);  if (depth < kMaxDepth) unit_00AF(c, 399u, depth + 1u); else { c.pc = 0x003BF418u; return; } if (c.pc != 0x003EFD60u) [[unlikely]] return; }
L_003EFD60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[21].d[0] < c.r[16].d[0] ? 1ull : 0ull;  if (t) { goto L_003EFD78; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003EFD78; } }
    c.r[21].d[0] = c.r[16].d[0] + 0ull;
    c.r[22].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_003EFD78:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003EFDBC; } }
    set32(c.r[17], c.r[17].w[0] + 2u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[23].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[19].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EFD30u | kUnwind; return; } goto L_003EFD30; }
L_003EFD90:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003EFDBC; } }
    c.budget -= 2;
    if (c.r[22].d[0] != 0ull) { c.r[17].d[0] = c.r[22].d[0] + 0ull;  goto L_003EFDB8; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFDB0u); c.r[5].d[0] = c.r[5].d[0] | 3082ull;  if (depth < kMaxDepth) unit_00BD(c, 82u, depth + 1u); else { c.pc = 0x003F4840u; return; } if (c.pc != 0x003EFDB0u) [[unlikely]] return; }
L_003EFDB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_003EFDBC; } }
L_003EFDB8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003EFDBC:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 88u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003EFDF0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st32((c.r[21].w[0]), 0u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFE2Cu); set32(c.r[19], ld32((c.r[20].w[0] + 7028u)));  if (depth < kMaxDepth) unit_00BD(c, 52u, depth + 1u); else { c.pc = 0x003F45B0u; return; } if (c.pc != 0x003EFE2Cu) [[unlikely]] return; }
L_003EFE2C:
    c.r[2].d[0] = c.r[2].sd[0] < 108ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003EFE48; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    set32(c.r[2], c.r[2].w[0] - 1000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 60u), c.r[2].w[0]);  if (t) { goto L_003EFED4; } }
L_003EFE48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] - 18u);  if (t) { goto L_003EFE54; } }
L_003EFE50:
    set32(c.r[17], c.r[17].w[0] + 18u);
    c.budget -= 1;
L_003EFE54:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { st32((c.r[21].w[0]), c.r[17].w[0]);  goto L_003EFE8C; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 31856u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFE74u); set32(c.r[6], 0u + 18u);  if (depth < kMaxDepth) unit_0009(c, 37u, depth + 1u); else { c.pc = 0x00124C88u; return; } if (c.pc != 0x003EFE74u) [[unlikely]] return; }
L_003EFE74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] + 18u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EFE50u | kUnwind; return; } goto L_003EFE50; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    set32(c.r[2], c.r[2].w[0] - 1000u);
    st32((c.r[19].w[0] + 60u), c.r[2].w[0]);
    st32((c.r[21].w[0]), c.r[17].w[0]);
    c.budget -= 4;
L_003EFE8C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFE9Cu); set32(c.r[6], c.r[29].w[0] + 4u);  if (depth < kMaxDepth) unit_00BB(c, 566u, depth + 1u); else { c.pc = 0x003EFEF8u; return; } if (c.pc != 0x003EFE9Cu) [[unlikely]] return; }
L_003EFE9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003EFED8; } }
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    mmi::div(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x003EFEBCu);  goto L_003EFEC0; }
L_003EFEC0:
    set32(c.r[3], ld32((c.r[19].w[0] + 56u)));
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[19].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 5;
L_003EFED4:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003EFED8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003EFEF8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFF14u); c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 111u, depth + 1u); else { c.pc = 0x003F0D58u; return; } if (c.pc != 0x003EFF14u) [[unlikely]] return; }
L_003EFF14:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003EFF34; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 12u)));
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 16u)));
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 5;
L_003EFF34:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003EFF48:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    set32(c.r[19], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[2], c.r[17].w[0] + 7020u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[18], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFF7Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 286u, depth + 1u); else { c.pc = 0x003F28F0u; return; } if (c.pc != 0x003EFF7Cu) [[unlikely]] return; }
L_003EFF7C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[19].d[0]; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003EFFD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFF90u);  if (depth < kMaxDepth) unit_00BC(c, 286u, depth + 1u); else { c.pc = 0x003F28F0u; return; } if (c.pc != 0x003EFF90u) [[unlikely]] return; }
L_003EFF90:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[19].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003EFFD4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFFA0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 572u, depth + 1u); else { c.pc = 0x003EFFF0u; return; } if (c.pc != 0x003EFFA0u) [[unlikely]] return; }
L_003EFFA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003EFFD0; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[6], 0u + 1u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 48u);  [[clang::musttail]] return unit_00BC(c, 285u, depth); }
L_003EFFD0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003EFFD4:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003EFFF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 7028u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0004u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00AF(c, 265u, depth + 1u); else { c.pc = 0x003BE0A0u; return; } if (c.pc != 0x003F0004u) [[unlikely]] return; }
    [[clang::musttail]] return unit_00BC(c, 2u, depth);
}

}
