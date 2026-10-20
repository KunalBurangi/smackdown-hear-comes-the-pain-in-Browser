#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00BA[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    4, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    11, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0,
    0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 26, 0, 0, 0,
    0, 0, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 31, 0, 32, 0,
    0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 0, 36, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0,
    0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0,
    0, 47, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 50, 0, 0, 51, 0, 52, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 57, 0, 0, 0,
    0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62,
    0, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0,
    0, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 84, 0, 0, 0, 0, 85, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0,
    89, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0,
    0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0,
    0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0,
    119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0,
    0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0,
    0, 129, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 133, 134, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0,
    0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 145, 0, 146, 0, 147, 0, 148, 0, 0, 0, 149,
    0, 0, 150, 0, 151, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 154, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 0, 157, 0,
    158, 0, 0, 0, 159, 0, 160, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0,
    0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0,
    173, 0, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0,
    179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0,
    0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 185, 0, 186, 0, 187, 0, 188, 0, 189, 0, 190, 0, 191, 0, 192, 0, 193, 0, 194, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0,
    0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215,
    0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 221, 0,
    0, 0, 222, 0, 0, 0, 223, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 228, 0, 0, 0, 0, 229, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0,
    0, 237, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 240, 0, 241, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    243, 0, 244, 0, 245, 0, 0, 246, 0, 0, 247, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 0, 0,
    0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 254, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0,
    0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0, 261, 0, 0, 0, 0, 0,
    262, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0,
    0, 0, 266, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 269, 0, 0, 0, 270, 0, 0, 271, 0, 272, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0,
    0, 276, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 280, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 284, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 286, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0,
    294, 0, 0, 0, 295, 0, 296, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 302, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 309, 0, 0, 0,
    0, 0, 310, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 313, 0, 314, 0, 0, 0, 0, 315,
    0, 316, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 319, 0, 320, 0, 0, 0, 0, 321, 0, 322,
    0, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 327, 0,
    0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0,
    331, 0, 0, 0, 0, 332, 0, 0, 333, 0, 0, 334, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 0,
    338, 0, 0, 0, 339, 0, 340, 0, 0, 0, 341, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 343, 0, 344, 0, 345, 0, 346, 0, 0, 0,
    0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 349, 0, 0, 0, 0, 350, 0,
    0, 0, 0, 0, 351, 0, 0, 0, 0, 352, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 355, 0,
    0, 0, 0, 356, 0, 0, 0, 0, 357, 0, 0, 358, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 360, 0, 0, 0, 0, 361, 0, 0, 0,
    362, 0, 0, 363, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 366, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 369, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 374,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 377, 0, 0,
    0, 0, 0, 378, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 385, 0, 386, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0,
    0, 0, 388, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0,
    0, 0, 393, 0, 394, 0, 395, 0, 396, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 398, 0, 0, 0, 0, 399, 0, 0, 0, 0, 400, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0,
    0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 407, 0, 0, 0, 0,
    0, 408, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 411, 0,
    0, 0, 0, 412, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 414, 0, 0, 0, 0, 415, 0, 0, 0, 0, 416, 0, 0, 0, 0, 417, 0, 0,
    0, 0, 0, 418, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0,
    0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 425, 0, 0, 0, 426, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 433, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0,
    0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0,
    0, 438, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0,
    447, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 451, 0, 0, 0, 0, 452, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 456, 0,
    0, 0, 457, 0, 0, 458, 0, 459, 0, 0, 460, 0, 0, 461, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 466, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 472, 0, 0, 0, 0, 473, 0, 0, 0, 474, 0, 0, 475, 0, 0, 476, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 478, 0, 479, 0, 480, 0, 0, 0, 0, 0, 481, 0, 0, 0, 482, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 484, 0, 0, 0,
    0, 0, 485, 0, 486, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 488, 0, 489, 0, 490, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 492, 0, 0, 0, 493, 0, 0, 494, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 499, 0, 0, 0, 0, 500, 0, 0, 0, 0, 501, 0, 0, 0, 0, 502, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 504, 0,
    0, 0, 505, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0, 0, 509,
    0, 0, 0, 510, 0, 0, 0, 0, 0, 0, 0, 0, 511, 0, 0, 512, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 518, 0, 0, 0,
    0, 0, 519, 0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 523, 0, 0,
    0, 0, 0, 0, 524, 0, 0, 0, 525, 0, 0, 0, 0, 526, 0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 529, 0, 0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 532, 0, 0, 0, 0, 533, 0, 0, 0, 534, 0, 0, 0, 0,
    0, 0, 535, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0,
    539, 0, 0, 0, 0, 540, 0, 0, 0, 0, 541, 0, 0, 0, 0, 0, 0, 0, 542, 0, 0, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0, 0,
    0, 544, 0, 0, 0, 0, 0, 0, 545, 0, 0, 0, 546, 0, 0, 0, 0, 547, 0, 0, 0, 548, 0, 0, 0, 0, 0, 0, 549, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 550, 0, 0, 0, 0, 551, 0, 0, 0, 0, 0, 0, 552, 0, 0, 0, 553, 0, 0, 0, 0, 554, 0, 0, 0, 555,
    0, 0, 0, 0, 0, 0, 556, 0, 0, 0, 0, 0, 0, 0, 0, 0, 557, 0, 0, 0, 0, 558, 0, 0, 0, 0, 0, 0, 559, 0, 0, 0,
    560, 0, 0, 0, 0, 561, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 563, 0, 0, 0, 0, 0, 0, 0, 0, 0, 564, 0, 0, 0, 0, 565,
};

void unit_00BA(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003E8000;
    case 2u: goto L_003E8034;
    case 3u: goto L_003E803C;
    case 4u: goto L_003E8080;
    case 5u: goto L_003E8084;
    case 6u: goto L_003E80A0;
    case 7u: goto L_003E80F0;
    case 8u: goto L_003E8188;
    case 9u: goto L_003E81AC;
    case 10u: goto L_003E81D0;
    case 11u: goto L_003E8200;
    case 12u: goto L_003E8224;
    case 13u: goto L_003E8238;
    case 14u: goto L_003E8258;
    case 15u: goto L_003E8270;
    case 16u: goto L_003E82A8;
    case 17u: goto L_003E82BC;
    case 18u: goto L_003E82CC;
    case 19u: goto L_003E82E0;
    case 20u: goto L_003E8304;
    case 21u: goto L_003E8318;
    case 22u: goto L_003E8330;
    case 23u: goto L_003E8338;
    case 24u: goto L_003E834C;
    case 25u: goto L_003E835C;
    case 26u: goto L_003E8370;
    case 27u: goto L_003E8390;
    case 28u: goto L_003E83A4;
    case 29u: goto L_003E83D0;
    case 30u: goto L_003E83E0;
    case 31u: goto L_003E83F0;
    case 32u: goto L_003E83F8;
    case 33u: goto L_003E8414;
    case 34u: goto L_003E8450;
    case 35u: goto L_003E8464;
    case 36u: goto L_003E8478;
    case 37u: goto L_003E84A0;
    case 38u: goto L_003E84A8;
    case 39u: goto L_003E84D4;
    case 40u: goto L_003E84E8;
    case 41u: goto L_003E84F8;
    case 42u: goto L_003E8508;
    case 43u: goto L_003E8530;
    case 44u: goto L_003E8540;
    case 45u: goto L_003E8550;
    case 46u: goto L_003E8568;
    case 47u: goto L_003E8584;
    case 48u: goto L_003E85A4;
    case 49u: goto L_003E85B4;
    case 50u: goto L_003E85C0;
    case 51u: goto L_003E85CC;
    case 52u: goto L_003E85D4;
    case 53u: goto L_003E85E0;
    case 54u: goto L_003E8608;
    case 55u: goto L_003E863C;
    case 56u: goto L_003E8658;
    case 57u: goto L_003E8670;
    case 58u: goto L_003E8688;
    case 59u: goto L_003E86D8;
    case 60u: goto L_003E8720;
    case 61u: goto L_003E874C;
    case 62u: goto L_003E877C;
    case 63u: goto L_003E8790;
    case 64u: goto L_003E87A0;
    case 65u: goto L_003E87B4;
    case 66u: goto L_003E8828;
    case 67u: goto L_003E8858;
    case 68u: goto L_003E8890;
    case 69u: goto L_003E88F0;
    case 70u: goto L_003E8908;
    case 71u: goto L_003E8924;
    case 72u: goto L_003E8940;
    case 73u: goto L_003E8980;
    case 74u: goto L_003E89D4;
    case 75u: goto L_003E89E8;
    case 76u: goto L_003E8A48;
    case 77u: goto L_003E8A50;
    case 78u: goto L_003E8A68;
    case 79u: goto L_003E8A90;
    case 80u: goto L_003E8AD8;
    case 81u: goto L_003E8B18;
    case 82u: goto L_003E8B44;
    case 83u: goto L_003E8B5C;
    case 84u: goto L_003E8B64;
    case 85u: goto L_003E8B78;
    case 86u: goto L_003E8BA4;
    case 87u: goto L_003E8BC0;
    case 88u: goto L_003E8BDC;
    case 89u: goto L_003E8C00;
    case 90u: goto L_003E8C10;
    case 91u: goto L_003E8C28;
    case 92u: goto L_003E8C50;
    case 93u: goto L_003E8C78;
    case 94u: goto L_003E8CA0;
    case 95u: goto L_003E8CDC;
    case 96u: goto L_003E8D24;
    case 97u: goto L_003E8D34;
    case 98u: goto L_003E8D60;
    case 99u: goto L_003E8D78;
    case 100u: goto L_003E8D90;
    case 101u: goto L_003E8DA0;
    case 102u: goto L_003E8DB8;
    case 103u: goto L_003E8DC4;
    case 104u: goto L_003E8DD8;
    case 105u: goto L_003E8E14;
    case 106u: goto L_003E8E30;
    case 107u: goto L_003E8EA0;
    case 108u: goto L_003E8EE0;
    case 109u: goto L_003E8F34;
    case 110u: goto L_003E8F48;
    case 111u: goto L_003E8F78;
    case 112u: goto L_003E8F98;
    case 113u: goto L_003E8FD8;
    case 114u: goto L_003E8FF0;
    case 115u: goto L_003E9020;
    case 116u: goto L_003E9034;
    case 117u: goto L_003E9048;
    case 118u: goto L_003E9068;
    case 119u: goto L_003E9080;
    case 120u: goto L_003E90A8;
    case 121u: goto L_003E90BC;
    case 122u: goto L_003E90D0;
    case 123u: goto L_003E90E8;
    case 124u: goto L_003E9108;
    case 125u: goto L_003E9134;
    case 126u: goto L_003E914C;
    case 127u: goto L_003E9164;
    case 128u: goto L_003E9178;
    case 129u: goto L_003E9184;
    case 130u: goto L_003E91A0;
    case 131u: goto L_003E91B0;
    case 132u: goto L_003E91D0;
    case 133u: goto L_003E9210;
    case 134u: goto L_003E9214;
    case 135u: goto L_003E9234;
    case 136u: goto L_003E924C;
    case 137u: goto L_003E9264;
    case 138u: goto L_003E9278;
    case 139u: goto L_003E9284;
    case 140u: goto L_003E92A8;
    case 141u: goto L_003E92B8;
    case 142u: goto L_003E92D0;
    case 143u: goto L_003E9324;
    case 144u: goto L_003E934C;
    case 145u: goto L_003E9354;
    case 146u: goto L_003E935C;
    case 147u: goto L_003E9364;
    case 148u: goto L_003E936C;
    case 149u: goto L_003E937C;
    case 150u: goto L_003E9388;
    case 151u: goto L_003E9390;
    case 152u: goto L_003E93B0;
    case 153u: goto L_003E93C0;
    case 154u: goto L_003E93C8;
    case 155u: goto L_003E93D0;
    case 156u: goto L_003E93E4;
    case 157u: goto L_003E93F8;
    case 158u: goto L_003E9400;
    case 159u: goto L_003E9410;
    case 160u: goto L_003E9418;
    case 161u: goto L_003E9420;
    case 162u: goto L_003E9448;
    case 163u: goto L_003E9464;
    case 164u: goto L_003E9474;
    case 165u: goto L_003E9490;
    case 166u: goto L_003E94A8;
    case 167u: goto L_003E94BC;
    case 168u: goto L_003E94C4;
    case 169u: goto L_003E9538;
    case 170u: goto L_003E954C;
    case 171u: goto L_003E9560;
    case 172u: goto L_003E9570;
    case 173u: goto L_003E9580;
    case 174u: goto L_003E9594;
    case 175u: goto L_003E95A8;
    case 176u: goto L_003E95B8;
    case 177u: goto L_003E95C8;
    case 178u: goto L_003E95E8;
    case 179u: goto L_003E9600;
    case 180u: goto L_003E9630;
    case 181u: goto L_003E964C;
    case 182u: goto L_003E9678;
    case 183u: goto L_003E968C;
    case 184u: goto L_003E96A0;
    case 185u: goto L_003E96A8;
    case 186u: goto L_003E96B0;
    case 187u: goto L_003E96B8;
    case 188u: goto L_003E96C0;
    case 189u: goto L_003E96C8;
    case 190u: goto L_003E96D0;
    case 191u: goto L_003E96D8;
    case 192u: goto L_003E96E0;
    case 193u: goto L_003E96E8;
    case 194u: goto L_003E96F0;
    case 195u: goto L_003E9720;
    case 196u: goto L_003E9734;
    case 197u: goto L_003E9750;
    case 198u: goto L_003E9760;
    case 199u: goto L_003E9770;
    case 200u: goto L_003E97A4;
    case 201u: goto L_003E97BC;
    case 202u: goto L_003E97D0;
    case 203u: goto L_003E97E0;
    case 204u: goto L_003E97F8;
    case 205u: goto L_003E9808;
    case 206u: goto L_003E9818;
    case 207u: goto L_003E9828;
    case 208u: goto L_003E9838;
    case 209u: goto L_003E986C;
    case 210u: goto L_003E9968;
    case 211u: goto L_003E9990;
    case 212u: goto L_003E99A0;
    case 213u: goto L_003E99B8;
    case 214u: goto L_003E99DC;
    case 215u: goto L_003E99FC;
    case 216u: goto L_003E9A20;
    case 217u: goto L_003E9A30;
    case 218u: goto L_003E9A44;
    case 219u: goto L_003E9A58;
    case 220u: goto L_003E9A68;
    case 221u: goto L_003E9A78;
    case 222u: goto L_003E9A88;
    case 223u: goto L_003E9A98;
    case 224u: goto L_003E9AA4;
    case 225u: goto L_003E9AB8;
    case 226u: goto L_003E9AC8;
    case 227u: goto L_003E9AD8;
    case 228u: goto L_003E9AE4;
    case 229u: goto L_003E9AF8;
    case 230u: goto L_003E9B24;
    case 231u: goto L_003E9B58;
    case 232u: goto L_003E9B88;
    case 233u: goto L_003E9B98;
    case 234u: goto L_003E9BBC;
    case 235u: goto L_003E9BD0;
    case 236u: goto L_003E9BE8;
    case 237u: goto L_003E9C04;
    case 238u: goto L_003E9C18;
    case 239u: goto L_003E9C40;
    case 240u: goto L_003E9C48;
    case 241u: goto L_003E9C50;
    case 242u: goto L_003E9C58;
    case 243u: goto L_003E9C80;
    case 244u: goto L_003E9C88;
    case 245u: goto L_003E9C90;
    case 246u: goto L_003E9C9C;
    case 247u: goto L_003E9CA8;
    case 248u: goto L_003E9CB0;
    case 249u: goto L_003E9CD8;
    case 250u: goto L_003E9CE8;
    case 251u: goto L_003E9D04;
    case 252u: goto L_003E9D70;
    case 253u: goto L_003E9DA4;
    case 254u: goto L_003E9DAC;
    case 255u: goto L_003E9DB8;
    case 256u: goto L_003E9DC8;
    case 257u: goto L_003E9DF0;
    case 258u: goto L_003E9E14;
    case 259u: goto L_003E9E48;
    case 260u: goto L_003E9E5C;
    case 261u: goto L_003E9E68;
    case 262u: goto L_003E9E80;
    case 263u: goto L_003E9EA0;
    case 264u: goto L_003E9EBC;
    case 265u: goto L_003E9EE8;
    case 266u: goto L_003E9F08;
    case 267u: goto L_003E9F20;
    case 268u: goto L_003E9F48;
    case 269u: goto L_003E9F54;
    case 270u: goto L_003E9F64;
    case 271u: goto L_003E9F70;
    case 272u: goto L_003E9F78;
    case 273u: goto L_003E9FB8;
    case 274u: goto L_003E9FCC;
    case 275u: goto L_003E9FF8;
    case 276u: goto L_003EA004;
    case 277u: goto L_003EA020;
    case 278u: goto L_003EA044;
    case 279u: goto L_003EA058;
    case 280u: goto L_003EA078;
    case 281u: goto L_003EA0A0;
    case 282u: goto L_003EA0B8;
    case 283u: goto L_003EA0C8;
    case 284u: goto L_003EA0D4;
    case 285u: goto L_003EA0E4;
    case 286u: goto L_003EA110;
    case 287u: goto L_003EA11C;
    case 288u: goto L_003EA140;
    case 289u: goto L_003EA164;
    case 290u: goto L_003EA198;
    case 291u: goto L_003EA1AC;
    case 292u: goto L_003EA1BC;
    case 293u: goto L_003EA1E0;
    case 294u: goto L_003EA200;
    case 295u: goto L_003EA210;
    case 296u: goto L_003EA218;
    case 297u: goto L_003EA238;
    case 298u: goto L_003EA25C;
    case 299u: goto L_003EA290;
    case 300u: goto L_003EA2B0;
    case 301u: goto L_003EA2D0;
    case 302u: goto L_003EA308;
    case 303u: goto L_003EA31C;
    case 304u: goto L_003EA348;
    case 305u: goto L_003EA374;
    case 306u: goto L_003EA3B0;
    case 307u: goto L_003EA3C0;
    case 308u: goto L_003EA3D8;
    case 309u: goto L_003EA3F0;
    case 310u: goto L_003EA408;
    case 311u: goto L_003EA420;
    case 312u: goto L_003EA44C;
    case 313u: goto L_003EA460;
    case 314u: goto L_003EA468;
    case 315u: goto L_003EA47C;
    case 316u: goto L_003EA484;
    case 317u: goto L_003EA4A0;
    case 318u: goto L_003EA4C4;
    case 319u: goto L_003EA4D8;
    case 320u: goto L_003EA4E0;
    case 321u: goto L_003EA4F4;
    case 322u: goto L_003EA4FC;
    case 323u: goto L_003EA510;
    case 324u: goto L_003EA520;
    case 325u: goto L_003EA530;
    case 326u: goto L_003EA558;
    case 327u: goto L_003EA578;
    case 328u: goto L_003EA598;
    case 329u: goto L_003EA5C0;
    case 330u: goto L_003EA5E0;
    case 331u: goto L_003EA600;
    case 332u: goto L_003EA614;
    case 333u: goto L_003EA620;
    case 334u: goto L_003EA62C;
    case 335u: goto L_003EA648;
    case 336u: goto L_003EA65C;
    case 337u: goto L_003EA66C;
    case 338u: goto L_003EA680;
    case 339u: goto L_003EA690;
    case 340u: goto L_003EA698;
    case 341u: goto L_003EA6A8;
    case 342u: goto L_003EA6C0;
    case 343u: goto L_003EA6D8;
    case 344u: goto L_003EA6E0;
    case 345u: goto L_003EA6E8;
    case 346u: goto L_003EA6F0;
    case 347u: goto L_003EA70C;
    case 348u: goto L_003EA750;
    case 349u: goto L_003EA764;
    case 350u: goto L_003EA778;
    case 351u: goto L_003EA790;
    case 352u: goto L_003EA7A4;
    case 353u: goto L_003EA7B8;
    case 354u: goto L_003EA7E0;
    case 355u: goto L_003EA7F8;
    case 356u: goto L_003EA80C;
    case 357u: goto L_003EA820;
    case 358u: goto L_003EA82C;
    case 359u: goto L_003EA848;
    case 360u: goto L_003EA85C;
    case 361u: goto L_003EA870;
    case 362u: goto L_003EA880;
    case 363u: goto L_003EA88C;
    case 364u: goto L_003EA8A8;
    case 365u: goto L_003EA8C4;
    case 366u: goto L_003EA908;
    case 367u: goto L_003EA924;
    case 368u: goto L_003EA950;
    case 369u: goto L_003EA988;
    case 370u: goto L_003EA99C;
    case 371u: goto L_003EA9B4;
    case 372u: goto L_003EA9C8;
    case 373u: goto L_003EA9E0;
    case 374u: goto L_003EA9FC;
    case 375u: goto L_003EAA28;
    case 376u: goto L_003EAA60;
    case 377u: goto L_003EAA74;
    case 378u: goto L_003EAA8C;
    case 379u: goto L_003EAAA0;
    case 380u: goto L_003EAAB8;
    case 381u: goto L_003EAAD0;
    case 382u: goto L_003EAAE8;
    case 383u: goto L_003EAB10;
    case 384u: goto L_003EAB38;
    case 385u: goto L_003EAB40;
    case 386u: goto L_003EAB48;
    case 387u: goto L_003EAB68;
    case 388u: goto L_003EAB88;
    case 389u: goto L_003EABA0;
    case 390u: goto L_003EABB8;
    case 391u: goto L_003EABD0;
    case 392u: goto L_003EABF0;
    case 393u: goto L_003EAC08;
    case 394u: goto L_003EAC10;
    case 395u: goto L_003EAC18;
    case 396u: goto L_003EAC20;
    case 397u: goto L_003EAC3C;
    case 398u: goto L_003EAC90;
    case 399u: goto L_003EACA4;
    case 400u: goto L_003EACB8;
    case 401u: goto L_003EACC4;
    case 402u: goto L_003EACE4;
    case 403u: goto L_003EAD18;
    case 404u: goto L_003EAD70;
    case 405u: goto L_003EAD8C;
    case 406u: goto L_003EAE58;
    case 407u: goto L_003EAE6C;
    case 408u: goto L_003EAE84;
    case 409u: goto L_003EAE98;
    case 410u: goto L_003EAEDC;
    case 411u: goto L_003EAEF8;
    case 412u: goto L_003EAF0C;
    case 413u: goto L_003EAF24;
    case 414u: goto L_003EAF38;
    case 415u: goto L_003EAF4C;
    case 416u: goto L_003EAF60;
    case 417u: goto L_003EAF74;
    case 418u: goto L_003EAF8C;
    case 419u: goto L_003EAFA0;
    case 420u: goto L_003EAFB8;
    case 421u: goto L_003EAFCC;
    case 422u: goto L_003EAFE8;
    case 423u: goto L_003EB00C;
    case 424u: goto L_003EB028;
    case 425u: goto L_003EB038;
    case 426u: goto L_003EB048;
    case 427u: goto L_003EB054;
    case 428u: goto L_003EB090;
    case 429u: goto L_003EB0B0;
    case 430u: goto L_003EB0D0;
    case 431u: goto L_003EB0EC;
    case 432u: goto L_003EB128;
    case 433u: goto L_003EB13C;
    case 434u: goto L_003EB150;
    case 435u: goto L_003EB178;
    case 436u: goto L_003EB19C;
    case 437u: goto L_003EB1E8;
    case 438u: goto L_003EB204;
    case 439u: goto L_003EB21C;
    case 440u: goto L_003EB250;
    case 441u: goto L_003EB290;
    case 442u: goto L_003EB2D0;
    case 443u: goto L_003EB308;
    case 444u: goto L_003EB340;
    case 445u: goto L_003EB354;
    case 446u: goto L_003EB36C;
    case 447u: goto L_003EB380;
    case 448u: goto L_003EB398;
    case 449u: goto L_003EB3B4;
    case 450u: goto L_003EB3E0;
    case 451u: goto L_003EB408;
    case 452u: goto L_003EB41C;
    case 453u: goto L_003EB430;
    case 454u: goto L_003EB448;
    case 455u: goto L_003EB464;
    case 456u: goto L_003EB478;
    case 457u: goto L_003EB488;
    case 458u: goto L_003EB494;
    case 459u: goto L_003EB49C;
    case 460u: goto L_003EB4A8;
    case 461u: goto L_003EB4B4;
    case 462u: goto L_003EB4C0;
    case 463u: goto L_003EB4E0;
    case 464u: goto L_003EB538;
    case 465u: goto L_003EB558;
    case 466u: goto L_003EB568;
    case 467u: goto L_003EB5D0;
    case 468u: goto L_003EB5EC;
    case 469u: goto L_003EB618;
    case 470u: goto L_003EB638;
    case 471u: goto L_003EB65C;
    case 472u: goto L_003EB690;
    case 473u: goto L_003EB6A4;
    case 474u: goto L_003EB6B4;
    case 475u: goto L_003EB6C0;
    case 476u: goto L_003EB6CC;
    case 477u: goto L_003EB6D8;
    case 478u: goto L_003EB708;
    case 479u: goto L_003EB710;
    case 480u: goto L_003EB718;
    case 481u: goto L_003EB730;
    case 482u: goto L_003EB740;
    case 483u: goto L_003EB758;
    case 484u: goto L_003EB770;
    case 485u: goto L_003EB788;
    case 486u: goto L_003EB790;
    case 487u: goto L_003EB7A8;
    case 488u: goto L_003EB7C0;
    case 489u: goto L_003EB7C8;
    case 490u: goto L_003EB7D0;
    case 491u: goto L_003EB7E8;
    case 492u: goto L_003EB810;
    case 493u: goto L_003EB820;
    case 494u: goto L_003EB82C;
    case 495u: goto L_003EB83C;
    case 496u: goto L_003EB860;
    case 497u: goto L_003EB8A8;
    case 498u: goto L_003EB8C0;
    case 499u: goto L_003EB910;
    case 500u: goto L_003EB924;
    case 501u: goto L_003EB938;
    case 502u: goto L_003EB94C;
    case 503u: goto L_003EB960;
    case 504u: goto L_003EB978;
    case 505u: goto L_003EB988;
    case 506u: goto L_003EB998;
    case 507u: goto L_003EB9B8;
    case 508u: goto L_003EB9E0;
    case 509u: goto L_003EB9FC;
    case 510u: goto L_003EBA0C;
    case 511u: goto L_003EBA30;
    case 512u: goto L_003EBA3C;
    case 513u: goto L_003EBA58;
    case 514u: goto L_003EBAB0;
    case 515u: goto L_003EBAC8;
    case 516u: goto L_003EBB20;
    case 517u: goto L_003EBB38;
    case 518u: goto L_003EBB70;
    case 519u: goto L_003EBB88;
    case 520u: goto L_003EBBA0;
    case 521u: goto L_003EBBB8;
    case 522u: goto L_003EBBE0;
    case 523u: goto L_003EBBF4;
    case 524u: goto L_003EBC10;
    case 525u: goto L_003EBC20;
    case 526u: goto L_003EBC34;
    case 527u: goto L_003EBC44;
    case 528u: goto L_003EBC60;
    case 529u: goto L_003EBC88;
    case 530u: goto L_003EBC9C;
    case 531u: goto L_003EBCB8;
    case 532u: goto L_003EBCC8;
    case 533u: goto L_003EBCDC;
    case 534u: goto L_003EBCEC;
    case 535u: goto L_003EBD08;
    case 536u: goto L_003EBD38;
    case 537u: goto L_003EBD4C;
    case 538u: goto L_003EBD6C;
    case 539u: goto L_003EBD80;
    case 540u: goto L_003EBD94;
    case 541u: goto L_003EBDA8;
    case 542u: goto L_003EBDC8;
    case 543u: goto L_003EBDF0;
    case 544u: goto L_003EBE04;
    case 545u: goto L_003EBE20;
    case 546u: goto L_003EBE30;
    case 547u: goto L_003EBE44;
    case 548u: goto L_003EBE54;
    case 549u: goto L_003EBE70;
    case 550u: goto L_003EBE98;
    case 551u: goto L_003EBEAC;
    case 552u: goto L_003EBEC8;
    case 553u: goto L_003EBED8;
    case 554u: goto L_003EBEEC;
    case 555u: goto L_003EBEFC;
    case 556u: goto L_003EBF18;
    case 557u: goto L_003EBF40;
    case 558u: goto L_003EBF54;
    case 559u: goto L_003EBF70;
    case 560u: goto L_003EBF80;
    case 561u: goto L_003EBF94;
    case 562u: goto L_003EBFA4;
    case 563u: goto L_003EBFC0;
    case 564u: goto L_003EBFE8;
    case 565u: goto L_003EBFFC;
    default: bad_entry(c, 0x003E8000u); return;
    }
L_003E8000:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], ld32((c.r[29].w[0] + 52u)));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 76u)));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 72u)));
    st32((c.r[29].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[10].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[8].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8034u); st32((c.r[29].w[0] + 24u), c.r[9].w[0]);  if (depth < kMaxDepth) unit_00BA(c, 132u, depth + 1u); else { c.pc = 0x003E91D0u; return; } if (c.pc != 0x003E8034u) [[unlikely]] return; }
L_003E8034:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E803Cu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 7u, depth + 1u); else { c.pc = 0x003E80F0u; return; } if (c.pc != 0x003E803Cu) [[unlikely]] return; }
L_003E803C:
    st32((c.r[29].w[0]), c.r[2].w[0]);
    ldl(c.r[2], (c.r[29].w[0] + 7u));
    ldr(c.r[2], (c.r[29].w[0]));
    ldl(c.r[3], (c.r[29].w[0] + 15u));
    ldr(c.r[3], (c.r[29].w[0] + 8u));
    ldl(c.r[4], (c.r[29].w[0] + 23u));
    ldr(c.r[4], (c.r[29].w[0] + 16u));
    ldl(c.r[5], (c.r[29].w[0] + 31u));
    ldr(c.r[5], (c.r[29].w[0] + 24u));
    sdl(c.r[2], (c.r[18].w[0] + 7u));
    sdr(c.r[2], (c.r[18].w[0]));
    sdl(c.r[3], (c.r[18].w[0] + 15u));
    sdr(c.r[3], (c.r[18].w[0] + 8u));
    sdl(c.r[4], (c.r[18].w[0] + 23u));
    sdr(c.r[4], (c.r[18].w[0] + 16u));
    sdl(c.r[5], (c.r[18].w[0] + 31u));
    sdr(c.r[5], (c.r[18].w[0] + 24u));
    c.budget -= 17;
L_003E8080:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_003E8084:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 104u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 120u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003E80A0:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003E80D0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003E80E4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], 0u + 2u);  goto L_003E80E0; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; return; }
L_003E80D0:
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], 0u + 3u);
    if (c.r[3].d[0] != 0) c.r[5].d[0] = c.r[2].d[0];
    c.budget -= 4;
L_003E80E0:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_003E80E4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003E80F0:
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[6].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003E8180; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 8u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00060000u);
    set32(c.r[5], ld32((c.r[6].w[0] + 12u)));
    c.r[3].d[0] = c.r[3].d[0] | 21504ull;
    mmi::mult(c, 0, c.r[4].w[0], c.r[5].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_003E8180; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_003E8180; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { goto L_003E8180; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 20u)));
    set32(c.r[2], 0u + 12000u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_003E8180; } }
    c.r[2].d[0] = c.r[4].sd[0] < 12001ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 24000u);  if (t) { goto L_003E8160; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_003E8180; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 6000u);  if (t) { goto L_003E816C; } }
L_003E8160:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_003E8180; } }
    c.r[2].d[0] = 0ull | 48000ull;
    c.budget -= 1;
L_003E816C:
    c.budget -= 2;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_003E8180; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003E8180:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003E8188:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E81ACu); c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 140u, depth + 1u); else { c.pc = 0x003E92A8u; return; } if (c.pc != 0x003E81ACu) [[unlikely]] return; }
L_003E81AC:
    st32((c.r[2].w[0] + 48u), c.r[16].w[0]);
    st32((c.r[2].w[0] + 40u), c.r[17].w[0]);
    st32((c.r[2].w[0] + 44u), c.r[18].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E81D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 360u)));
    c.r[2].d[0] = c.r[2].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003E8208; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8200u); set32(c.r[4], c.r[4].w[0] + 27000u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003E8200u) [[unlikely]] return; }
L_003E8200:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003E825C; } }
L_003E8208:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] < 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003E825C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 344u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E8230; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8224u);  if (depth < kMaxDepth) unit_00BA(c, 15u, depth + 1u); else { c.pc = 0x003E8270u; return; } if (c.pc != 0x003E8224u) [[unlikely]] return; }
L_003E8224:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003E823C; } }
    c.budget -= 1;
L_003E8230:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8238u); c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 16u, depth + 1u); else { c.pc = 0x003E82A8u; return; } if (c.pc != 0x003E8238u) [[unlikely]] return; }
L_003E8238:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003E823C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003E8258; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 360u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8258u); st32((c.r[2].w[0] + 364u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_00BA(c, 29u, depth + 1u); else { c.pc = 0x003E83D0u; return; } if (c.pc != 0x003E8258u) [[unlikely]] return; }
L_003E8258:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003E825C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E8270:
    set32(c.r[4], c.r[4].w[0] + 344u);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_003E829C; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 8u)));
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[2], c.r[6].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
L_003E829C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[6].d[0] + 0ull;  c.pc = t; return; }
L_003E82A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E82BCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 140u, depth + 1u); else { c.pc = 0x003E92A8u; return; } if (c.pc != 0x003E82BCu) [[unlikely]] return; }
L_003E82BC:
    set32(c.r[4], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E82CCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E82CCu) [[unlikely]] return; }
L_003E82CC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003E82E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 344u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003E8310; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8304u);  if (depth < kMaxDepth) unit_00BA(c, 22u, depth + 1u); else { c.pc = 0x003E8330u; return; } if (c.pc != 0x003E8304u) [[unlikely]] return; }
L_003E8304:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003E831C; } }
    c.budget -= 1;
L_003E8310:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8318u); c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 23u, depth + 1u); else { c.pc = 0x003E8338u; return; } if (c.pc != 0x003E8318u) [[unlikely]] return; }
L_003E8318:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003E831C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003E83E0; }
L_003E8330:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003E8338:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E834Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 140u, depth + 1u); else { c.pc = 0x003E92A8u; return; } if (c.pc != 0x003E834Cu) [[unlikely]] return; }
L_003E834C:
    set32(c.r[4], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E835Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E835Cu) [[unlikely]] return; }
L_003E835C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003E8370:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[17].w[0] + 488u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], 0u + 31u);
    c.budget -= 8;
L_003E8390:
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] - 1u);  goto L_003E83AC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E83A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 19u, depth + 1u); else { c.pc = 0x003E82E0u; return; } if (c.pc != 0x003E83A4u) [[unlikely]] return; }
L_003E83A4:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 2;
L_003E83AC:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] - 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E8390u | kUnwind; return; } goto L_003E8390; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E83D0:
    set32(c.r[2], ld32((c.r[4].w[0] + 360u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 360u), c.r[2].w[0]);  c.pc = t; return; }
L_003E83E0:
    set32(c.r[2], ld32((c.r[4].w[0] + 360u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 360u), c.r[2].w[0]);  c.pc = t; return; }
L_003E83F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 360u)));  c.pc = t; return; }
L_003E83F8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8414u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 392u, depth + 1u); else { c.pc = 0x003EABF0u; return; } if (c.pc != 0x003E8414u) [[unlikely]] return; }
L_003E8414:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 27040u);  if (t) { goto L_003E8438; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00BB(c, 314u, depth); }
L_003E8438:
    st32((c.r[16].w[0] + 84u), c.r[17].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E8450:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8464u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 392u, depth + 1u); else { c.pc = 0x003EABF0u; return; } if (c.pc != 0x003E8464u) [[unlikely]] return; }
L_003E8464:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003E8490; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8478u); set32(c.r[4], c.r[4].w[0] + 27088u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003E8478u) [[unlikely]] return; }
L_003E8478:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003E8490:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003E84A0; }
L_003E84A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 84u)));  c.pc = t; return; }
L_003E84A8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E84D4u); c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 392u, depth + 1u); else { c.pc = 0x003EABF0u; return; } if (c.pc != 0x003E84D4u) [[unlikely]] return; }
L_003E84D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E84F0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E84E8u); set32(c.r[4], c.r[4].w[0] + 27136u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003E84E8u) [[unlikely]] return; }
L_003E84E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), 0u);  if (t) { goto L_003E85E4; } }
L_003E84F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E84F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 348u, depth + 1u); else { c.pc = 0x003EA750u; return; } if (c.pc != 0x003E84F8u) [[unlikely]] return; }
L_003E84F8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8508u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 334u, depth + 1u); else { c.pc = 0x003FEBE0u; return; } if (c.pc != 0x003E8508u) [[unlikely]] return; }
L_003E8508:
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { st32((c.r[19].w[0]), 0u);  goto L_003E85E4; }
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003E8574; } }
    set32(c.r[20], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[21], 0u + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
L_003E8530:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_003E8570; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8540u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 115u, depth + 1u); else { c.pc = 0x003E9020u; return; } if (c.pc != 0x003E8540u) [[unlikely]] return; }
L_003E8540:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[21].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003E8570; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8550u); set32(c.r[5], ld32((c.r[29].w[0])));  if (depth < kMaxDepth) unit_00BF(c, 337u, depth + 1u); else { c.pc = 0x003FEC60u; return; } if (c.pc != 0x003E8550u) [[unlikely]] return; }
L_003E8550:
    set32(c.r[3], ld32((c.r[16].w[0] + 132u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8568u); st32((c.r[16].w[0] + 132u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00BF(c, 334u, depth + 1u); else { c.pc = 0x003FEBE0u; return; } if (c.pc != 0x003E8568u) [[unlikely]] return; }
L_003E8568:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E8530u | kUnwind; return; } goto L_003E8530; } }
L_003E8570:
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.budget -= 1;
L_003E8574:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[19].w[0]), 0u);  goto L_003E85E4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8584u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 80u, depth + 1u); else { c.pc = 0x003E8AD8u; return; } if (c.pc != 0x003E8584u) [[unlikely]] return; }
L_003E8584:
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 124u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E85A4u); st32((c.r[16].w[0] + 120u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00BA(c, 79u, depth + 1u); else { c.pc = 0x003E8A90u; return; } if (c.pc != 0x003E85A4u) [[unlikely]] return; }
L_003E85A4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E85B4u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 59u, depth + 1u); else { c.pc = 0x003E86D8u; return; } if (c.pc != 0x003E85B4u) [[unlikely]] return; }
L_003E85B4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E85C0u); set32(c.r[5], ld32((c.r[29].w[0])));  if (depth < kMaxDepth) unit_00BA(c, 93u, depth + 1u); else { c.pc = 0x003E8C78u; return; } if (c.pc != 0x003E85C0u) [[unlikely]] return; }
L_003E85C0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E85CCu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 54u, depth + 1u); else { c.pc = 0x003E8608u; return; } if (c.pc != 0x003E85CCu) [[unlikely]] return; }
L_003E85CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E85D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 56u, depth + 1u); else { c.pc = 0x003E8658u; return; } if (c.pc != 0x003E85D4u) [[unlikely]] return; }
L_003E85D4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E85E0u); set32(c.r[5], ld32((c.r[29].w[0])));  if (depth < kMaxDepth) unit_00BA(c, 75u, depth + 1u); else { c.pc = 0x003E89E8u; return; } if (c.pc != 0x003E85E0u) [[unlikely]] return; }
L_003E85E0:
    st32((c.r[19].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 1;
L_003E85E4:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003E8608:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 252u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 252u), c.r[3].w[0]);  goto L_003E8644; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E863Cu);  if (depth < kMaxDepth) unit_00BB(c, 61u, depth + 1u); else { c.pc = 0x003EC6B0u; return; } if (c.pc != 0x003E863Cu) [[unlikely]] return; }
L_003E863C:
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    st32((c.r[16].w[0] + 252u), c.r[3].w[0]);
    c.budget -= 2;
L_003E8644:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E8658:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8670u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 100u, depth + 1u); else { c.pc = 0x003E8D90u; return; } if (c.pc != 0x003E8670u) [[unlikely]] return; }
L_003E8670:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003E86C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8688u);  if (depth < kMaxDepth) unit_00BB(c, 110u, depth + 1u); else { c.pc = 0x003ECCD8u; return; } if (c.pc != 0x003E8688u) [[unlikely]] return; }
L_003E8688:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[17].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003E86A8; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00BB(c, 18u, depth); }
L_003E86A8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00BB(c, 18u, depth); }
L_003E86C0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E86D8:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 56u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 104u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 120u), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[16], ld32((c.r[22].w[0] + 64u)));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8720u); set32(c.r[23], ld32((c.r[18].w[0] + 32u)));  if (depth < kMaxDepth) unit_00BA(c, 72u, depth + 1u); else { c.pc = 0x003E8940u; return; } if (c.pc != 0x003E8720u) [[unlikely]] return; }
L_003E8720:
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[4], ld32((c.r[18].w[0] + 16u)));
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    st32((c.r[29].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[18].w[0] + 8u)));
    st32((c.r[29].w[0] + 16u), c.r[6].w[0]);
    set32(c.r[7], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E874Cu); st32((c.r[29].w[0] + 20u), c.r[7].w[0]);  if (depth < kMaxDepth) unit_00BA(c, 73u, depth + 1u); else { c.pc = 0x003E8980u; return; } if (c.pc != 0x003E874Cu) [[unlikely]] return; }
L_003E874C:
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[19], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[20], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[21], ld32((c.r[18].w[0] + 48u)));
    set32(c.r[30], ld32((c.r[18].w[0] + 44u)));
    st32((c.r[29].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[18].w[0] + 40u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E877Cu); st32((c.r[29].w[0] + 32u), c.r[6].w[0]);  if (depth < kMaxDepth) unit_00C0(c, 157u, depth + 1u); else { c.pc = 0x00401A58u; return; } if (c.pc != 0x003E877Cu) [[unlikely]] return; }
L_003E877C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], ld32((c.r[29].w[0])));  if (t) { goto L_003E8794; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8790u); set32(c.r[4], c.r[4].w[0] + 27184u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003E8790u) [[unlikely]] return; }
L_003E8790:
    set32(c.r[5], ld32((c.r[29].w[0])));
    c.budget -= 1;
L_003E8794:
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E87A0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 69u, depth + 1u); else { c.pc = 0x003E88F0u; return; } if (c.pc != 0x003E87A0u) [[unlikely]] return; }
L_003E87A0:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0])));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E87B4u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 69u, depth + 1u); else { c.pc = 0x003E88F0u; return; } if (c.pc != 0x003E87B4u) [[unlikely]] return; }
L_003E87B4:
    st32((c.r[17].w[0]), c.r[23].w[0]);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[29].w[0])));
    st32((c.r[17].w[0] + 4u), c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[29].w[0] + 8u)));
    st32((c.r[17].w[0] + 8u), c.r[6].w[0]);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 12u)));
    st32((c.r[17].w[0] + 12u), c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[29].w[0] + 16u)));
    st32((c.r[17].w[0] + 16u), c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[29].w[0] + 20u)));
    st32((c.r[17].w[0] + 20u), c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[29].w[0] + 24u)));
    st32((c.r[17].w[0] + 28u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 32u), c.r[16].w[0]);
    st32((c.r[17].w[0] + 36u), c.r[20].w[0]);
    st32((c.r[17].w[0] + 40u), c.r[19].w[0]);
    st32((c.r[17].w[0] + 44u), c.r[30].w[0]);
    st32((c.r[17].w[0] + 52u), c.r[21].w[0]);
    st32((c.r[17].w[0] + 24u), c.r[7].w[0]);
    st32((c.r[17].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 28u)));
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8828u); st32((c.r[17].w[0] + 60u), c.r[7].w[0]);  if (depth < kMaxDepth) unit_00BA(c, 67u, depth + 1u); else { c.pc = 0x003E8858u; return; } if (c.pc != 0x003E8828u) [[unlikely]] return; }
L_003E8828:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 88u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 104u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 120u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003E8858:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    set32(c.r[19], c.r[4].w[0] + 188u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 56u)));
    set32(c.r[20], ld32((c.r[4].w[0] + 212u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8890u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00BA(c, 171u, depth + 1u); else { c.pc = 0x003E9560u; return; } if (c.pc != 0x003E8890u) [[unlikely]] return; }
L_003E8890:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[18].w[0] + 68u), 0u);  goto L_003E88A8; }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[19].d[0];  if (t) { goto L_003E88B0; } }
    st32((c.r[18].w[0] + 68u), 0u);
    c.budget -= 1;
L_003E88A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 64u), 0u);  if (t) { goto L_003E88D0; } }
L_003E88B0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[17].sd[0] < 5ll ? 1ull : 0ull;  if (t) { goto L_003E88C8; } }
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[18].w[0] + 68u), c.r[17].w[0]);  goto L_003E88CC; }
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[17], c.r[17].w[0] - 4u);
    c.budget -= 2;
L_003E88C8:
    st32((c.r[18].w[0] + 68u), c.r[17].w[0]);
    c.budget -= 1;
L_003E88CC:
    st32((c.r[18].w[0] + 64u), c.r[16].w[0]);
    c.budget -= 1;
L_003E88D0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E88F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8908u); c.r[5].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 221u, depth + 1u); else { c.pc = 0x0011A608u; return; } if (c.pc != 0x003E8908u) [[unlikely]] return; }
L_003E8908:
    c.r[5].d[0] = c.r[16].d[0] << 5;
    c.r[5].d[0] = c.r[5].d[0] - c.r[16].d[0];
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] << 2;
    c.r[5].d[0] = c.r[5].d[0] + c.r[16].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8924u); c.r[5].d[0] = c.r[5].d[0] << 3;  if (depth < kMaxDepth) unit_0006(c, 222u, depth + 1u); else { c.pc = 0x0011A680u; return; } if (c.pc != 0x003E8924u) [[unlikely]] return; }
L_003E8924:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003E8940:
    set32(c.r[2], 0u + 2u);
    c.r[5].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_003E8974; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], 0u + 3u);  goto L_003E8968; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_003E896C; } }
    c.budget -= 1;
L_003E8968:
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_003E896C:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[3], 0u + 3u);  goto L_003E8974; }
L_003E8974:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[3].d[0] + 0ull;  c.pc = t; return; }
L_003E8980:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_003E89D8; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], 0u + 3u);  goto L_003E89B0; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_003E89C0; } }
    c.budget -= 1;
L_003E89B0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_003E89D8; } }
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], 0u + 4u);
    c.budget -= 2;
L_003E89C0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003E89DC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E89D4u); set32(c.r[4], c.r[4].w[0] + 27216u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003E89D4u) [[unlikely]] return; }
L_003E89D4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_003E89D8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003E89DC:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003E89E8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 60u)));
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003E8A20; } }
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[17], 0u + 2u);  goto L_003E8A48; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_003E8A40; } }
L_003E8A20:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_003E8A40; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E8A48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 2u);  if (t) { goto L_003E8A48; } }
L_003E8A40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8A48u); set32(c.r[4], c.r[4].w[0] + 27256u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003E8A48u) [[unlikely]] return; }
L_003E8A48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8A50u);  if (depth < kMaxDepth) unit_00BA(c, 171u, depth + 1u); else { c.pc = 0x003E9560u; return; } if (c.pc != 0x003E8A50u) [[unlikely]] return; }
L_003E8A50:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[16].d[0] != c.r[2].d[0]) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003E8A78; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8A68u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 111u, depth + 1u); else { c.pc = 0x003ECCF0u; return; } if (c.pc != 0x003E8A68u) [[unlikely]] return; }
L_003E8A68:
    set32(c.r[3], 0u + 2u);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[16].d[0];
    if (c.r[2].d[0] == 0) c.r[17].d[0] = c.r[3].d[0];
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
L_003E8A78:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E8A90:
    set32(c.r[2], ld32((c.r[5].w[0] + 68u)));
    set32(c.r[4], c.r[4].w[0] + 136u);
    set32(c.r[3], ld32((c.r[5].w[0] + 80u)));
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 72u)));
    set32(c.r[7], ld32((c.r[5].w[0] + 84u)));
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 60u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 64u)));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 24u), c.r[7].w[0]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 28u), 0u);  c.pc = t; return; }
L_003E8AD8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[3], c.r[17].w[0] + 180u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 10;
    if (c.r[2].d[0] == c.r[4].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003E8B68; }
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[3].w[0] + 4u), 0u);
    set32(c.r[6], c.r[29].w[0] + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8B18u); set32(c.r[4], ld32((c.r[17].w[0] + 64u)));  if (depth < kMaxDepth) unit_00C0(c, 33u, depth + 1u); else { c.pc = 0x004005D0u; return; } if (c.pc != 0x003E8B18u) [[unlikely]] return; }
L_003E8B18:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003E8B68; }
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(2048ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003E8B68; }
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003E8B68; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8B44u);  if (depth < kMaxDepth) unit_00C0(c, 389u, depth + 1u); else { c.pc = 0x00403D20u; return; } if (c.pc != 0x003E8B44u) [[unlikely]] return; }
L_003E8B44:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003E8B64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8B5Cu);  if (depth < kMaxDepth) unit_00BA(c, 85u, depth + 1u); else { c.pc = 0x003E8B78u; return; } if (c.pc != 0x003E8B5Cu) [[unlikely]] return; }
L_003E8B5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8B64u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 393u, depth + 1u); else { c.pc = 0x00403DE8u; return; } if (c.pc != 0x003E8B64u) [[unlikely]] return; }
L_003E8B64:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003E8B68:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E8B78:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8BA4u); set32(c.r[18], c.r[17].w[0] + 180u);  if (depth < kMaxDepth) unit_00C0(c, 406u, depth + 1u); else { c.pc = 0x00403F38u; return; } if (c.pc != 0x003E8BA4u) [[unlikely]] return; }
L_003E8BA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], ld32((c.r[29].w[0])));  if (t) { goto L_003E8C10; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003E8C10; } }
    set32(c.r[5], 0u + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8BC0u); set32(c.r[6], c.r[29].w[0] + 4u);  if (depth < kMaxDepth) unit_00C1(c, 3u, depth + 1u); else { c.pc = 0x00404028u; return; } if (c.pc != 0x003E8BC0u) [[unlikely]] return; }
L_003E8BC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_003E8C10; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003E8C10; } }
    set32(c.r[5], 0u + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8BDCu); set32(c.r[6], c.r[29].w[0] + 8u);  if (depth < kMaxDepth) unit_00C1(c, 92u, depth + 1u); else { c.pc = 0x00404D88u; return; } if (c.pc != 0x003E8BDCu) [[unlikely]] return; }
L_003E8BDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_003E8C10; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003E8C08; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8C00u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00BB(c, 17u, depth + 1u); else { c.pc = 0x003EC1A8u; return; } if (c.pc != 0x003E8C00u) [[unlikely]] return; }
L_003E8C00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003E8C14; } }
L_003E8C08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8C10u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 17u, depth + 1u); else { c.pc = 0x003EC1A8u; return; } if (c.pc != 0x003E8C10u) [[unlikely]] return; }
L_003E8C10:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003E8C14:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E8C28:
    set32(c.r[4], c.r[4].w[0] + 180u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  if (t) { goto L_003E8C48; } }
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[5].d[0];
    c.r[6].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_003E8C48:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[6].d[0] + 0ull;  c.pc = t; return; }
L_003E8C50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], c.r[4].w[0] + 180u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 4u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[2].w[0]), 0u);
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00BB(c, 17u, depth); }
L_003E8C78:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 56u)));
    set32(c.r[18], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8CA0u); set32(c.r[17], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00BA(c, 171u, depth + 1u); else { c.pc = 0x003E9560u; return; } if (c.pc != 0x003E8CA0u) [[unlikely]] return; }
L_003E8CA0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003E8D64; }
    set32(c.r[2], ld32((c.r[16].w[0] + 216u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003E8D64; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[2].d[0] = c.r[18].sd[0] < 5ll ? 1ull : 0ull;  if (t) { goto L_003E8CE8; } }
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[29].w[0]), 0u);  goto L_003E8CEC; }
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[5], c.r[18].w[0] - 4u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8CDCu); set32(c.r[7], c.r[29].w[0] + 4u);  if (depth < kMaxDepth) unit_00C2(c, 139u, depth + 1u); else { c.pc = 0x004092D0u; return; } if (c.pc != 0x003E8CDCu) [[unlikely]] return; }
L_003E8CDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0])));  if (t) { goto L_003E8CF4; } }
    c.budget -= 1;
L_003E8CE8:
    st32((c.r[29].w[0]), 0u);
    c.budget -= 1;
L_003E8CEC:
    st32((c.r[29].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 2;
L_003E8CF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[7], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_003E8D48; } }
    c.budget -= 2;
    if (c.r[7].sd[0] <= 0) { st32((c.r[16].w[0] + 224u), 0u);  goto L_003E8D4C; }
    set32(c.r[2], ld32((c.r[16].w[0] + 220u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 216u)));
    c.r[3].d[0] = c.r[2].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    if (c.r[3].d[0] != 0) c.r[7].d[0] = c.r[2].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8D24u); st32((c.r[29].w[0] + 4u), c.r[7].w[0]);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003E8D24u) [[unlikely]] return; }
L_003E8D24:
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[4], ld32((c.r[16].w[0] + 216u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8D34u); set32(c.r[6], ld32((c.r[29].w[0] + 4u)));  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x003E8D34u) [[unlikely]] return; }
L_003E8D34:
    set32(c.r[3], ld32((c.r[16].w[0] + 216u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    st32((c.r[16].w[0] + 224u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 228u), c.r[2].w[0]);  if (t) { goto L_003E8D50; } }
L_003E8D48:
    st32((c.r[16].w[0] + 224u), 0u);
    c.budget -= 1;
L_003E8D4C:
    st32((c.r[16].w[0] + 228u), 0u);
    c.budget -= 1;
L_003E8D50:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 224u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8D60u); set32(c.r[6], ld32((c.r[4].w[0] + 228u)));  if (depth < kMaxDepth) unit_00BB(c, 109u, depth + 1u); else { c.pc = 0x003ECCC0u; return; } if (c.pc != 0x003E8D60u) [[unlikely]] return; }
L_003E8D60:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003E8D64:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E8D78:
    set32(c.r[2], ld32((c.r[4].w[0] + 228u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 224u)));
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_003E8D90:
    set32(c.r[2], ld32((c.r[4].w[0] + 224u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_003E8DA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8DB8u); c.r[7].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 310u, depth + 1u); else { c.pc = 0x003F6A68u; return; } if (c.pc != 0x003E8DB8u) [[unlikely]] return; }
L_003E8DB8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8DC4u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 110u, depth + 1u); else { c.pc = 0x003E8F48u; return; } if (c.pc != 0x003E8DC4u) [[unlikely]] return; }
L_003E8DC4:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E8DD8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[23].d[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8E14u); set32(c.r[23], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00BA(c, 107u, depth + 1u); else { c.pc = 0x003E8EA0u; return; } if (c.pc != 0x003E8E14u) [[unlikely]] return; }
L_003E8E14:
    set32(c.r[22], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[19], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8E30u); set32(c.r[20], ld32((c.r[16].w[0] + 20u)));  if (depth < kMaxDepth) unit_00BA(c, 108u, depth + 1u); else { c.pc = 0x003E8EE0u; return; } if (c.pc != 0x003E8E30u) [[unlikely]] return; }
L_003E8E30:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 60u)));
    st32((c.r[17].w[0] + 32u), c.r[23].w[0]);
    st32((c.r[17].w[0] + 28u), c.r[21].w[0]);
    st32((c.r[17].w[0]), c.r[22].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[18].w[0]);
    st32((c.r[17].w[0] + 8u), c.r[19].w[0]);
    st32((c.r[17].w[0] + 12u), c.r[20].w[0]);
    st32((c.r[17].w[0] + 44u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 24u), c.r[5].w[0]);
    st32((c.r[17].w[0] + 36u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 40u), c.r[7].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 28;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003E8EA0:
    set32(c.r[2], 0u + 2u);
    c.r[5].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_003E8ED4; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], 0u + 3u);  goto L_003E8EC8; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_003E8ECC; } }
    c.budget -= 1;
L_003E8EC8:
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_003E8ECC:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[3], 0u + 3u);  goto L_003E8ED4; }
L_003E8ED4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[3].d[0] + 0ull;  c.pc = t; return; }
L_003E8EE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_003E8F38; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], 0u + 3u);  goto L_003E8F10; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_003E8F20; } }
    c.budget -= 1;
L_003E8F10:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_003E8F38; } }
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], 0u + 4u);
    c.budget -= 2;
L_003E8F20:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003E8F3C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8F34u); set32(c.r[4], c.r[4].w[0] + 27312u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003E8F34u) [[unlikely]] return; }
L_003E8F34:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_003E8F38:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003E8F3C:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003E8F48:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 12u)));
    st32((c.r[5].w[0]), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 14u)));
    set32(c.r[2], ld32((c.r[4].w[0])));
    st32((c.r[5].w[0] + 20u), c.r[6].w[0]);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[5].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[5].w[0] + 16u), c.r[6].w[0]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 8u), c.r[2].w[0]);  c.pc = t; return; }
L_003E8F78:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8F98u); c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 392u, depth + 1u); else { c.pc = 0x003EABF0u; return; } if (c.pc != 0x003E8F98u) [[unlikely]] return; }
L_003E8F98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_003E8FC8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 27352u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 48u);  [[clang::musttail]] return unit_00BB(c, 314u, depth); }
L_003E8FC8:
    set32(c.r[18], ld32((c.r[19].w[0] + 124u)));
    set32(c.r[16], ld32((c.r[19].w[0] + 128u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8FD8u); set32(c.r[17], ld32((c.r[19].w[0] + 120u)));  if (depth < kMaxDepth) unit_00BA(c, 348u, depth + 1u); else { c.pc = 0x003EA750u; return; } if (c.pc != 0x003E8FD8u) [[unlikely]] return; }
L_003E8FD8:
    c.r[16].d[0] = c.r[16].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003E9000; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8FF0u);  if (depth < kMaxDepth) unit_00BF(c, 337u, depth + 1u); else { c.pc = 0x003FEC60u; return; } if (c.pc != 0x003E8FF0u) [[unlikely]] return; }
L_003E8FF0:
    set32(c.r[3], ld32((c.r[19].w[0] + 128u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 124u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 128u), c.r[3].w[0]);
    c.budget -= 4;
L_003E9000:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E9020:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9034u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 392u, depth + 1u); else { c.pc = 0x003EABF0u; return; } if (c.pc != 0x003E9034u) [[unlikely]] return; }
L_003E9034:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003E9060; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9048u); set32(c.r[4], c.r[4].w[0] + 27400u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003E9048u) [[unlikely]] return; }
L_003E9048:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003E9060:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9068u);  if (depth < kMaxDepth) unit_00BA(c, 348u, depth + 1u); else { c.pc = 0x003EA750u; return; } if (c.pc != 0x003E9068u) [[unlikely]] return; }
L_003E9068:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00BD(c, 317u, depth); }
L_003E9080:
    set32(c.r[5], ld32((c.r[4].w[0] + 128u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 124u)));
    set32(c.r[4], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];  if (t) { goto L_003E90A0; } }
    c.r[4].d[0] = 0ull + 0ull;
    if (c.r[2].d[0] == 0) c.r[4].d[0] = c.r[5].d[0];
    c.budget -= 2;
L_003E90A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_003E90A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E90BCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 392u, depth + 1u); else { c.pc = 0x003EABF0u; return; } if (c.pc != 0x003E90BCu) [[unlikely]] return; }
L_003E90BC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 132u)));  goto L_003E90D4; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E90D0u); set32(c.r[4], c.r[4].w[0] + 27456u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003E90D0u) [[unlikely]] return; }
L_003E90D0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003E90D4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003E90E8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    set32(c.r[6], c.r[29].w[0] + 4u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9108u); set32(c.r[4], ld32((c.r[4].w[0] + 64u)));  if (depth < kMaxDepth) unit_00C0(c, 33u, depth + 1u); else { c.pc = 0x004005D0u; return; } if (c.pc != 0x003E9108u) [[unlikely]] return; }
L_003E9108:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003E9188; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(2048ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u - 1u);  goto L_003E9188; }
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u - 1u);  goto L_003E9188; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9134u);  if (depth < kMaxDepth) unit_00C0(c, 389u, depth + 1u); else { c.pc = 0x00403D20u; return; } if (c.pc != 0x003E9134u) [[unlikely]] return; }
L_003E9134:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003E9188; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E914Cu); set32(c.r[5], c.r[29].w[0] + 8u);  if (depth < kMaxDepth) unit_00C0(c, 406u, depth + 1u); else { c.pc = 0x00403F38u; return; } if (c.pc != 0x003E914Cu) [[unlikely]] return; }
L_003E914C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 8u)));  if (t) { goto L_003E915C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E9170; } }
L_003E915C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9164u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 393u, depth + 1u); else { c.pc = 0x00403DE8u; return; } if (c.pc != 0x003E9164u) [[unlikely]] return; }
L_003E9164:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003E9188; } }
    c.budget -= 1;
L_003E9170:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9178u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 130u, depth + 1u); else { c.pc = 0x003E91A0u; return; } if (c.pc != 0x003E9178u) [[unlikely]] return; }
L_003E9178:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9184u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 393u, depth + 1u); else { c.pc = 0x00403DE8u; return; } if (c.pc != 0x003E9184u) [[unlikely]] return; }
L_003E9184:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003E9188:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E91A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E91B0u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 57u, depth + 1u); else { c.pc = 0x00404860u; return; } if (c.pc != 0x003E91B0u) [[unlikely]] return; }
L_003E91B0:
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    if (c.r[2].d[0] != 0) c.r[4].d[0] = c.r[3].d[0];
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E91D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    c.r[3].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(2048ll) ? 1ull : 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[20].w[0] + 28u), c.r[2].w[0]);  if (t) { goto L_003E9284; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[17], 0u + 2u);  if (t) { goto L_003E9284; } }
L_003E9210:
    c.r[2].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 1;
L_003E9214:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003E9288; } }
    set32(c.r[4], c.r[17].w[0] << 11);
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] - 2048u);
    set32(c.r[5], c.r[19].w[0] - c.r[4].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9234u); set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);  if (depth < kMaxDepth) unit_00C0(c, 389u, depth + 1u); else { c.pc = 0x00403D20u; return; } if (c.pc != 0x003E9234u) [[unlikely]] return; }
L_003E9234:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E9210u | kUnwind; return; } goto L_003E9210; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E924Cu);  if (depth < kMaxDepth) unit_00C0(c, 406u, depth + 1u); else { c.pc = 0x00403F38u; return; } if (c.pc != 0x003E924Cu) [[unlikely]] return; }
L_003E924C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], ld32((c.r[29].w[0])));  if (t) { goto L_003E925C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E9270; } }
L_003E925C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9264u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 393u, depth + 1u); else { c.pc = 0x00403DE8u; return; } if (c.pc != 0x003E9264u) [[unlikely]] return; }
L_003E9264:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E9214u | kUnwind; return; } goto L_003E9214; } }
    c.budget -= 1;
L_003E9270:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9278u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 130u, depth + 1u); else { c.pc = 0x003E91A0u; return; } if (c.pc != 0x003E9278u) [[unlikely]] return; }
L_003E9278:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9284u); st32((c.r[20].w[0] + 28u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C0(c, 393u, depth + 1u); else { c.pc = 0x00403DE8u; return; } if (c.pc != 0x003E9284u) [[unlikely]] return; }
L_003E9284:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003E9288:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003E92A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 21816u);  c.pc = t; return; }
L_003E92B8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00BB(c, 314u, depth); }
L_003E92D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_003E9308; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 27672u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00BB(c, 314u, depth); }
L_003E9308:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[3].w[0] + 13176u);
    set32(c.r[2], c.r[2].w[0] + 27512u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9324u); c.r[17].sd[0] = static_cast<std::int32_t>(0x00450000u);  if (depth < kMaxDepth) unit_00BB(c, 284u, depth + 1u); else { c.pc = 0x003EE0B0u; return; } if (c.pc != 0x003E9324u) [[unlikely]] return; }
L_003E9324:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.r[3].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = 0ull;
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] - 21824u)));
    c.budget -= 8;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[17].w[0] - 21824u);  goto L_003E9424; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E934Cu);  if (depth < kMaxDepth) unit_00AD(c, 233u, depth + 1u); else { c.pc = 0x003B62A0u; return; } if (c.pc != 0x003E934Cu) [[unlikely]] return; }
L_003E934C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9354u);  if (depth < kMaxDepth) unit_00B4(c, 151u, depth + 1u); else { c.pc = 0x003D13A0u; return; } if (c.pc != 0x003E9354u) [[unlikely]] return; }
L_003E9354:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E935Cu);  if (depth < kMaxDepth) unit_00B4(c, 121u, depth + 1u); else { c.pc = 0x003D0E68u; return; } if (c.pc != 0x003E935Cu) [[unlikely]] return; }
L_003E935C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9364u);  if (depth < kMaxDepth) unit_00B4(c, 194u, depth + 1u); else { c.pc = 0x003D1BC8u; return; } if (c.pc != 0x003E9364u) [[unlikely]] return; }
L_003E9364:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E936Cu);  if (depth < kMaxDepth) unit_00BB(c, 454u, depth + 1u); else { c.pc = 0x003EF038u; return; } if (c.pc != 0x003E936Cu) [[unlikely]] return; }
L_003E936C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u - 101u);  if (t) { goto L_003E9388; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E937Cu);  if (depth < kMaxDepth) unit_00BA(c, 195u, depth + 1u); else { c.pc = 0x003E9720u; return; } if (c.pc != 0x003E937Cu) [[unlikely]] return; }
L_003E937C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9388u); set32(c.r[4], c.r[4].w[0] + 27712u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003E9388u) [[unlikely]] return; }
L_003E9388:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9390u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 165u, depth + 1u); else { c.pc = 0x003E9490u; return; } if (c.pc != 0x003E9390u) [[unlikely]] return; }
L_003E9390:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.f[0] = ld32((c.r[16].w[0]));
    set32(c.r[2], c.r[2].w[0] - 17460u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.f[12] = c.r[1].w[0];
    st32((c.r[2].w[0]), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E93B0u); c.f[12] = fp::mul(c.f[0], c.f[12]);  if (depth < kMaxDepth) unit_0007(c, 36u, depth + 1u); else { c.pc = 0x0011C438u; return; } if (c.pc != 0x003E93B0u) [[unlikely]] return; }
L_003E93B0:
    c.r[5].d[0] = 0ull | 65408ull;
    c.r[5].d[0] = c.r[5].d[0] << 46;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E93C0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x003E93C0u) [[unlikely]] return; }
L_003E93C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E93C8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 78u, depth + 1u); else { c.pc = 0x0011CFB0u; return; } if (c.pc != 0x003E93C8u) [[unlikely]] return; }
L_003E93C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E93D0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 199u, depth + 1u); else { c.pc = 0x003E9770u; return; } if (c.pc != 0x003E93D0u) [[unlikely]] return; }
L_003E93D0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 27752u);  if (t) { goto L_003E93E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E93E4u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003E93E4u) [[unlikely]] return; }
L_003E93E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E93F8u); st32((c.r[2].w[0] - 21820u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00BA(c, 177u, depth + 1u); else { c.pc = 0x003E95C8u; return; } if (c.pc != 0x003E93F8u) [[unlikely]] return; }
L_003E93F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9400u);  if (depth < kMaxDepth) unit_00B3(c, 318u, depth + 1u); else { c.pc = 0x003CE8F8u; return; } if (c.pc != 0x003E9400u) [[unlikely]] return; }
L_003E9400:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9410u); set32(c.r[4], c.r[4].w[0] - 27976u);  if (depth < kMaxDepth) unit_00B3(c, 312u, depth + 1u); else { c.pc = 0x003CE830u; return; } if (c.pc != 0x003E9410u) [[unlikely]] return; }
L_003E9410:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9418u);  if (depth < kMaxDepth) unit_00BA(c, 481u, depth + 1u); else { c.pc = 0x003EB730u; return; } if (c.pc != 0x003E9418u) [[unlikely]] return; }
L_003E9418:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9420u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 162u, depth + 1u); else { c.pc = 0x003E9448u; return; } if (c.pc != 0x003E9420u) [[unlikely]] return; }
L_003E9420:
    set32(c.r[3], c.r[17].w[0] - 21824u);
    c.budget -= 1;
L_003E9424:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E9448:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9464u); set32(c.r[5], c.r[5].w[0] - 5752u);  if (depth < kMaxDepth) unit_00BB(c, 292u, depth + 1u); else { c.pc = 0x003EE188u; return; } if (c.pc != 0x003E9464u) [[unlikely]] return; }
L_003E9464:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    set32(c.r[4], c.r[4].w[0] - 5680u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9474u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 298u, depth + 1u); else { c.pc = 0x003EE238u; return; } if (c.pc != 0x003E9474u) [[unlikely]] return; }
L_003E9474:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] - 5552u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00BB(c, 295u, depth); }
L_003E9490:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E94A8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 140u, depth + 1u); else { c.pc = 0x003E92A8u; return; } if (c.pc != 0x003E94A8u) [[unlikely]] return; }
L_003E94A8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E94BCu); set32(c.r[6], 0u + 4328u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003E94BCu) [[unlikely]] return; }
L_003E94BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E94C4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 428u, depth + 1u); else { c.pc = 0x003EEEA0u; return; } if (c.pc != 0x003E94C4u) [[unlikely]] return; }
L_003E94C4:
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 88u), 0u);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[5], c.r[17].w[0] + 4u);  if (t) { goto L_003E9500; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[5].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[5].w[0]), c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_003E951C; } }
    c.budget -= 1;
L_003E9500:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x426F0000u);
    c.r[1].d[0] = c.r[1].d[0] | 49807ull;
    c.f[0] = c.r[1].w[0];
    st32((c.r[5].w[0] + 12u), 0u);
    st32((c.r[5].w[0]), c.f[0]);
    st32((c.r[5].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 7;
L_003E951C:
    st32((c.r[17].w[0] + 60u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 56u), c.r[4].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E9538:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E954Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 140u, depth + 1u); else { c.pc = 0x003E92A8u; return; } if (c.pc != 0x003E954Cu) [[unlikely]] return; }
L_003E954C:
    st32((c.r[2].w[0] + 56u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003E9560:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9570u);  if (depth < kMaxDepth) unit_00BA(c, 140u, depth + 1u); else { c.pc = 0x003E92A8u; return; } if (c.pc != 0x003E9570u) [[unlikely]] return; }
L_003E9570:
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003E9580:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9594u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 140u, depth + 1u); else { c.pc = 0x003E92A8u; return; } if (c.pc != 0x003E9594u) [[unlikely]] return; }
L_003E9594:
    st32((c.r[2].w[0] + 60u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003E95A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E95B8u);  if (depth < kMaxDepth) unit_00BA(c, 140u, depth + 1u); else { c.pc = 0x003E92A8u; return; } if (c.pc != 0x003E95B8u) [[unlikely]] return; }
L_003E95B8:
    set32(c.r[2], ld32((c.r[2].w[0] + 60u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003E95C8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 27u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E95E8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 382u, depth + 1u); else { c.pc = 0x003EAAE8u; return; } if (c.pc != 0x003E95E8u) [[unlikely]] return; }
L_003E95E8:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[5], 0u + 7u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003EAAE8; }
L_003E9600:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 21824u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003E9628; } }
    st32((c.r[2].w[0]), 0u);
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E92D0u | kUnwind; return; } goto L_003E92D0; }
L_003E9628:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003E9630:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E964Cu);  if (depth < kMaxDepth) unit_00BA(c, 140u, depth + 1u); else { c.pc = 0x003E92A8u; return; } if (c.pc != 0x003E964Cu) [[unlikely]] return; }
L_003E964C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 21824u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_003E9708; } }
    set32(c.r[16], c.r[4].w[0] + 104u);
    set32(c.r[18], 0u + 1u);
    set32(c.r[17], 0u + 7u);
    c.budget -= 4;
L_003E9678:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_003E9690; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E968Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 350u, depth + 1u); else { c.pc = 0x003E7E00u; return; } if (c.pc != 0x003E968Cu) [[unlikely]] return; }
L_003E968C:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_003E9690:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] + 528u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E9678u | kUnwind; return; } goto L_003E9678; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E96A0u);  if (depth < kMaxDepth) unit_00BB(c, 294u, depth + 1u); else { c.pc = 0x003EE1C8u; return; } if (c.pc != 0x003E96A0u) [[unlikely]] return; }
L_003E96A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E96A8u);  if (depth < kMaxDepth) unit_00BB(c, 300u, depth + 1u); else { c.pc = 0x003EE268u; return; } if (c.pc != 0x003E96A8u) [[unlikely]] return; }
L_003E96A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E96B0u);  if (depth < kMaxDepth) unit_00BB(c, 297u, depth + 1u); else { c.pc = 0x003EE218u; return; } if (c.pc != 0x003E96B0u) [[unlikely]] return; }
L_003E96B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E96B8u);  if (depth < kMaxDepth) unit_00BA(c, 484u, depth + 1u); else { c.pc = 0x003EB770u; return; } if (c.pc != 0x003E96B8u) [[unlikely]] return; }
L_003E96B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E96C0u);  if (depth < kMaxDepth) unit_00B3(c, 324u, depth + 1u); else { c.pc = 0x003CE978u; return; } if (c.pc != 0x003E96C0u) [[unlikely]] return; }
L_003E96C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E96C8u);  if (depth < kMaxDepth) unit_00BA(c, 206u, depth + 1u); else { c.pc = 0x003E9818u; return; } if (c.pc != 0x003E96C8u) [[unlikely]] return; }
L_003E96C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E96D0u);  if (depth < kMaxDepth) unit_00AD(c, 256u, depth + 1u); else { c.pc = 0x003B6440u; return; } if (c.pc != 0x003E96D0u) [[unlikely]] return; }
L_003E96D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E96D8u);  if (depth < kMaxDepth) unit_00BB(c, 456u, depth + 1u); else { c.pc = 0x003EF048u; return; } if (c.pc != 0x003E96D8u) [[unlikely]] return; }
L_003E96D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E96E0u);  if (depth < kMaxDepth) unit_00B4(c, 196u, depth + 1u); else { c.pc = 0x003D1C18u; return; } if (c.pc != 0x003E96E0u) [[unlikely]] return; }
L_003E96E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E96E8u);  if (depth < kMaxDepth) unit_00B4(c, 123u, depth + 1u); else { c.pc = 0x003D0EB8u; return; } if (c.pc != 0x003E96E8u) [[unlikely]] return; }
L_003E96E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E96F0u);  if (depth < kMaxDepth) unit_00B4(c, 154u, depth + 1u); else { c.pc = 0x003D1400u; return; } if (c.pc != 0x003E96F0u) [[unlikely]] return; }
L_003E96F0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00BB(c, 286u, depth); }
L_003E9708:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E9720:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9734u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 140u, depth + 1u); else { c.pc = 0x003E92A8u; return; } if (c.pc != 0x003E9734u) [[unlikely]] return; }
L_003E9734:
    st32((c.r[2].w[0] + 100u), c.r[16].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003E9750:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9760u);  if (depth < kMaxDepth) unit_00BA(c, 140u, depth + 1u); else { c.pc = 0x003E92A8u; return; } if (c.pc != 0x003E9760u) [[unlikely]] return; }
L_003E9760:
    set32(c.r[2], ld32((c.r[2].w[0] + 100u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003E9770:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[8], c.r[2].w[0] + 27656u);
    ldl(c.r[5], (c.r[8].w[0] + 7u));
    ldr(c.r[5], (c.r[8].w[0]));
    sdl(c.r[5], (c.r[29].w[0] + 7u));
    sdr(c.r[5], (c.r[29].w[0]));
    set32(c.r[5], 0u + 11136u);
    st32((c.r[29].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E97A4u); set32(c.r[4], c.r[3].w[0] + 27784u);  if (depth < kMaxDepth) unit_00BD(c, 55u, depth + 1u); else { c.pc = 0x003F4620u; return; } if (c.pc != 0x003E97A4u) [[unlikely]] return; }
L_003E97A4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_003E97C8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E97BCu); set32(c.r[4], c.r[4].w[0] + 27792u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003E97BCu) [[unlikely]] return; }
L_003E97BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003E9808; } }
    c.budget -= 1;
L_003E97C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E97D0u);  if (depth < kMaxDepth) unit_00BD(c, 56u, depth + 1u); else { c.pc = 0x003F4630u; return; } if (c.pc != 0x003E97D0u) [[unlikely]] return; }
L_003E97D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x003F0000u);  if (t) { goto L_003E97E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E97E0u); set32(c.r[4], 0u - 301u);  if (depth < kMaxDepth) unit_00BA(c, 195u, depth + 1u); else { c.pc = 0x003E9720u; return; } if (c.pc != 0x003E97E0u) [[unlikely]] return; }
L_003E97E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003E980C; } }
L_003E97E8:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] - 26568u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E97F8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 87u, depth + 1u); else { c.pc = 0x003F48F0u; return; } if (c.pc != 0x003E97F8u) [[unlikely]] return; }
L_003E97F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u - 303u);  if (t) { goto L_003E9808; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9808u);  if (depth < kMaxDepth) unit_00BA(c, 195u, depth + 1u); else { c.pc = 0x003E9720u; return; } if (c.pc != 0x003E9808u) [[unlikely]] return; }
L_003E9808:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003E980C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E9818:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9828u);  if (depth < kMaxDepth) unit_00BD(c, 71u, depth + 1u); else { c.pc = 0x003F4768u; return; } if (c.pc != 0x003E9828u) [[unlikely]] return; }
L_003E9828:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003E9838:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.budget -= 11;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 40u), c.r[31].d[0]);  if (t) { goto L_003E9888; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E986Cu);  if (depth < kMaxDepth) unit_00BA(c, 348u, depth + 1u); else { c.pc = 0x003EA750u; return; } if (c.pc != 0x003E986Cu) [[unlikely]] return; }
L_003E986C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    st32((c.r[2].w[0] - 17488u), c.r[16].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] - 17484u), c.r[18].w[0]);  if (t) { goto L_003E989C; } }
    c.budget -= 1;
L_003E9888:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00450000u);
    st32((c.r[2].w[0] - 17488u), 0u);
    c.r[18].d[0] = 0ull + 0ull;
    st32((c.r[3].w[0] - 17484u), 0u);
    c.budget -= 5;
L_003E989C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_003E98CC; } }
    set32(c.r[5], c.r[2].w[0] + 13248u);
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[4].w[0] << 2);
    c.r[3].d[0] = c.r[4].sd[0] < 15ll ? 1ull : 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[1], c.r[1].w[0] + c.r[2].w[0]);
    st32((c.r[1].w[0] + 13184u), c.r[17].w[0]);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[4].w[0] + 1u);  if (t) { goto L_003E98CC; } }
    st32((c.r[5].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_003E98CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[2].d[0] = c.r[2].d[0] | 3868ull;
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[2].d[0] < c.r[17].d[0] ? 1ull : 0ull;  if (t) { goto L_003E99C0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E9920; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[2].d[0] = c.r[2].d[0] | 3864ull;
    c.r[2].d[0] = c.r[2].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[20].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_003E99E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[2].d[0] = c.r[2].d[0] | 3863ull;
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);  goto L_003E99EC; }
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 27896u);  if (t) { goto L_003E995C; } }
    c.budget -= 1;
L_003E9920:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[2].d[0] = c.r[2].d[0] | 3904ull;
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;  if (t) { goto L_003E9970; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[20].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_003E99E8; } }
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(-1ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_003E99EC; } }
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(-3ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 28048u);  if (t) { goto L_003E99F0; } }
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[5], c.r[5].w[0] + 27848u);
    c.budget -= 3;
L_003E995C:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9968u); set32(c.r[4], c.r[20].w[0] + 13256u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x003E9968u) [[unlikely]] return; }
L_003E9968:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[20].w[0] + 13256u);  if (t) { goto L_003E9A00; } }
L_003E9970:
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[16], c.r[20].w[0] + 13256u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    set32(c.r[5], c.r[5].w[0] + 27872u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9990u); c.r[6].d[0] = c.r[6].d[0] | 3904ull;  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x003E9990u) [[unlikely]] return; }
L_003E9990:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003E99A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E99A0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 26u, depth + 1u); else { c.pc = 0x003FC438u; return; } if (c.pc != 0x003E99A0u) [[unlikely]] return; }
L_003E99A0:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003E99A4:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003E99FC; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E99B8u); set32(c.r[6], 0u + 105u);  if (depth < kMaxDepth) unit_0009(c, 243u, depth + 1u); else { c.pc = 0x00127E88u; return; } if (c.pc != 0x003E99B8u) [[unlikely]] return; }
L_003E99B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[20].w[0] + 13256u);  if (t) { goto L_003E9A00; } }
L_003E99C0:
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    set32(c.r[5], c.r[5].w[0] + 27952u);
    set32(c.r[4], c.r[20].w[0] + 13256u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E99DCu); c.r[6].d[0] = c.r[6].d[0] | 3868ull;  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x003E99DCu) [[unlikely]] return; }
L_003E99DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[20].w[0] + 13256u);  if (t) { goto L_003E9A00; } }
    c.budget -= 1;
L_003E99E8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 1;
L_003E99EC:
    set32(c.r[5], c.r[5].w[0] + 28048u);
    c.budget -= 1;
L_003E99F0:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E99FCu); set32(c.r[4], c.r[20].w[0] + 13256u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x003E99FCu) [[unlikely]] return; }
L_003E99FC:
    set32(c.r[4], c.r[20].w[0] + 13256u);
    c.budget -= 1;
L_003E9A00:
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 48u);  [[clang::musttail]] return unit_00BB(c, 314u, depth); }
L_003E9A20:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[3].w[0] - 17488u)));  c.pc = t; return; }
L_003E9A30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9A44u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 140u, depth + 1u); else { c.pc = 0x003E92A8u; return; } if (c.pc != 0x003E9A44u) [[unlikely]] return; }
L_003E9A44:
    st32((c.r[2].w[0] + 52u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003E9A58:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9A68u);  if (depth < kMaxDepth) unit_00BA(c, 140u, depth + 1u); else { c.pc = 0x003E92A8u; return; } if (c.pc != 0x003E9A68u) [[unlikely]] return; }
L_003E9A68:
    set32(c.r[2], ld32((c.r[2].w[0] + 52u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003E9A78:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9A88u); set32(c.r[4], ld32((c.r[4].w[0] + 64u)));  if (depth < kMaxDepth) unit_00BF(c, 93u, depth + 1u); else { c.pc = 0x003FCEA8u; return; } if (c.pc != 0x003E9A88u) [[unlikely]] return; }
L_003E9A88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u - 311u);  if (t) { goto L_003E9AA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9A98u);  if (depth < kMaxDepth) unit_00BA(c, 195u, depth + 1u); else { c.pc = 0x003E9720u; return; } if (c.pc != 0x003E9A98u) [[unlikely]] return; }
L_003E9A98:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9AA4u); set32(c.r[4], c.r[4].w[0] + 28064u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003E9AA4u) [[unlikely]] return; }
L_003E9AA4:
    set32(c.r[2], 0u - 311u);
    c.budget -= 1;
L_003E9AA8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003E9AB8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9AC8u); set32(c.r[4], ld32((c.r[4].w[0] + 64u)));  if (depth < kMaxDepth) unit_00BF(c, 288u, depth + 1u); else { c.pc = 0x003FE6A0u; return; } if (c.pc != 0x003E9AC8u) [[unlikely]] return; }
L_003E9AC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u - 307u);  if (t) { goto L_003E9AE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9AD8u);  if (depth < kMaxDepth) unit_00BA(c, 195u, depth + 1u); else { c.pc = 0x003E9720u; return; } if (c.pc != 0x003E9AD8u) [[unlikely]] return; }
L_003E9AD8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9AE4u); set32(c.r[4], c.r[4].w[0] + 28096u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003E9AE4u) [[unlikely]] return; }
L_003E9AE4:
    set32(c.r[2], 0u - 307u);
    c.budget -= 1;
L_003E9AE8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003E9AF8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9B24u); set32(c.r[4], ld32((c.r[4].w[0] + 64u)));  if (depth < kMaxDepth) unit_00BF(c, 325u, depth + 1u); else { c.pc = 0x003FEA68u; return; } if (c.pc != 0x003E9B24u) [[unlikely]] return; }
L_003E9B24:
    set32(c.r[4], ld32((c.r[29].w[0])));
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[18].w[0]), c.r[4].w[0]);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003E9B58:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] < 0; set32(c.r[4], ld32((c.r[4].w[0] + 64u)));  if (t) { goto L_003E9B78; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00BF(c, 327u, depth); }
L_003E9B78:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003E9B88:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9B98u); set32(c.r[4], ld32((c.r[4].w[0] + 64u)));  if (depth < kMaxDepth) unit_00BF(c, 81u, depth + 1u); else { c.pc = 0x003FCCA8u; return; } if (c.pc != 0x003E9B98u) [[unlikely]] return; }
L_003E9B98:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003E9BC0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003E9BC0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9BBCu); set32(c.r[4], c.r[4].w[0] + 28128u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003E9BBCu) [[unlikely]] return; }
L_003E9BBC:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003E9BC0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003E9BD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 64u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00BF(c, 329u, depth); }
L_003E9BE8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9C04u); set32(c.r[17], c.r[16].w[0] + 492u);  if (depth < kMaxDepth) unit_00BA(c, 140u, depth + 1u); else { c.pc = 0x003E92A8u; return; } if (c.pc != 0x003E9C04u) [[unlikely]] return; }
L_003E9C04:
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003E9C80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9C18u);  if (depth < kMaxDepth) unit_00B9(c, 299u, depth + 1u); else { c.pc = 0x003E77F8u; return; } if (c.pc != 0x003E9C18u) [[unlikely]] return; }
L_003E9C18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003E9C38; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 28176u);
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00BB(c, 314u, depth); }
L_003E9C38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9C40u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 267u, depth + 1u); else { c.pc = 0x003EDEF0u; return; } if (c.pc != 0x003E9C40u) [[unlikely]] return; }
L_003E9C40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9C48u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 92u, depth + 1u); else { c.pc = 0x003E8C50u; return; } if (c.pc != 0x003E9C48u) [[unlikely]] return; }
L_003E9C48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9C50u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 57u, depth + 1u); else { c.pc = 0x003EC628u; return; } if (c.pc != 0x003E9C50u) [[unlikely]] return; }
L_003E9C50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9C58u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 53u, depth + 1u); else { c.pc = 0x003EC5A8u; return; } if (c.pc != 0x003E9C58u) [[unlikely]] return; }
L_003E9C58:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 28224u);  if (t) { goto L_003E9C78; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00BB(c, 314u, depth); }
L_003E9C78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9C80u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 56u, depth + 1u); else { c.pc = 0x003EC608u; return; } if (c.pc != 0x003E9C80u) [[unlikely]] return; }
L_003E9C80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9C88u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 249u, depth + 1u); else { c.pc = 0x003E9CD8u; return; } if (c.pc != 0x003E9C88u) [[unlikely]] return; }
L_003E9C88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9C90u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 221u, depth + 1u); else { c.pc = 0x003E9A78u; return; } if (c.pc != 0x003E9C90u) [[unlikely]] return; }
L_003E9C90:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9C9Cu); c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 114u)));  if (depth < kMaxDepth) unit_00BA(c, 277u, depth + 1u); else { c.pc = 0x003EA020u; return; } if (c.pc != 0x003E9C9Cu) [[unlikely]] return; }
L_003E9C9C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9CA8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00BB(c, 247u, depth + 1u); else { c.pc = 0x003EDCA8u; return; } if (c.pc != 0x003E9CA8u) [[unlikely]] return; }
L_003E9CA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9CB0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 231u, depth + 1u); else { c.pc = 0x003EDB20u; return; } if (c.pc != 0x003E9CB0u) [[unlikely]] return; }
L_003E9CB0:
    st32((c.r[16].w[0] + 132u), 0u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 113u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E9CD8:
    st32((c.r[4].w[0] + 128u), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 124u), 0u);  c.pc = t; return; }
L_003E9CE8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9D04u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 392u, depth + 1u); else { c.pc = 0x003EABF0u; return; } if (c.pc != 0x003E9D04u) [[unlikely]] return; }
L_003E9D04:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 28272u);  if (t) { goto L_003E9D28; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00BB(c, 314u, depth); }
L_003E9D28:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003E9D50; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 28320u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00BB(c, 314u, depth); }
L_003E9D50:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003E9D70; }
L_003E9D70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 300u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9DA4u); st32((c.r[16].w[0] + 296u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BA(c, 267u, depth + 1u); else { c.pc = 0x003E9F20u; return; } if (c.pc != 0x003E9DA4u) [[unlikely]] return; }
L_003E9DA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9DACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 236u, depth + 1u); else { c.pc = 0x003E9BE8u; return; } if (c.pc != 0x003E9DACu) [[unlikely]] return; }
L_003E9DAC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9DB8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 302u, depth + 1u); else { c.pc = 0x003EA308u; return; } if (c.pc != 0x003E9DB8u) [[unlikely]] return; }
L_003E9DB8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9DC8u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 343u, depth + 1u); else { c.pc = 0x003EA6D8u; return; } if (c.pc != 0x003E9DC8u) [[unlikely]] return; }
L_003E9DC8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 48u);  goto L_003EA6E0; }
L_003E9DF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9E14u); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 392u, depth + 1u); else { c.pc = 0x003EABF0u; return; } if (c.pc != 0x003E9E14u) [[unlikely]] return; }
L_003E9E14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003E9E40; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 28368u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00BB(c, 314u, depth); }
L_003E9E40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9E48u);  if (depth < kMaxDepth) unit_00BA(c, 267u, depth + 1u); else { c.pc = 0x003E9F20u; return; } if (c.pc != 0x003E9E48u) [[unlikely]] return; }
L_003E9E48:
    set32(c.r[4], ld32((c.r[16].w[0] + 332u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9E5Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E9E5Cu) [[unlikely]] return; }
L_003E9E5C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9E68u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 124u, depth + 1u); else { c.pc = 0x003D0F08u; return; } if (c.pc != 0x003E9E68u) [[unlikely]] return; }
L_003E9E68:
    st32((c.r[16].w[0] + 336u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 296u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 340u), c.r[18].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9E80u); st32((c.r[16].w[0] + 332u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BA(c, 236u, depth + 1u); else { c.pc = 0x003E9BE8u; return; } if (c.pc != 0x003E9E80u) [[unlikely]] return; }
L_003E9E80:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E6BD8u | kUnwind; return; } [[clang::musttail]] return unit_00B9(c, 230u, depth); }
L_003E9EA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9EBCu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 392u, depth + 1u); else { c.pc = 0x003EABF0u; return; } if (c.pc != 0x003E9EBCu) [[unlikely]] return; }
L_003E9EBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003E9EE0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 28416u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00BB(c, 314u, depth); }
L_003E9EE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9EE8u);  if (depth < kMaxDepth) unit_00BA(c, 267u, depth + 1u); else { c.pc = 0x003E9F20u; return; } if (c.pc != 0x003E9EE8u) [[unlikely]] return; }
L_003E9EE8:
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 296u), c.r[17].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 316u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 320u), 0u);
    st32((c.r[16].w[0] + 324u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9F08u); st32((c.r[16].w[0] + 328u), 0u);  if (depth < kMaxDepth) unit_00BA(c, 236u, depth + 1u); else { c.pc = 0x003E9BE8u; return; } if (c.pc != 0x003E9F08u) [[unlikely]] return; }
L_003E9F08:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E6BD8u | kUnwind; return; } [[clang::musttail]] return unit_00B9(c, 230u, depth); }
L_003E9F20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[17], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 8;
    if (c.r[17].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003E9FA4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9F48u);  if (depth < kMaxDepth) unit_00BB(c, 447u, depth + 1u); else { c.pc = 0x003EEFE0u; return; } if (c.pc != 0x003E9F48u) [[unlikely]] return; }
L_003E9F48:
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9F54u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 296u, depth + 1u); else { c.pc = 0x003FE758u; return; } if (c.pc != 0x003E9F54u) [[unlikely]] return; }
L_003E9F54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u - 308u);  if (t) { goto L_003E9F70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9F64u);  if (depth < kMaxDepth) unit_00BA(c, 195u, depth + 1u); else { c.pc = 0x003E9720u; return; } if (c.pc != 0x003E9F64u) [[unlikely]] return; }
L_003E9F64:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9F70u); set32(c.r[4], c.r[4].w[0] + 28464u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003E9F70u) [[unlikely]] return; }
L_003E9F70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9F78u); set32(c.r[4], c.r[16].w[0] + 492u);  if (depth < kMaxDepth) unit_00BB(c, 235u, depth + 1u); else { c.pc = 0x003EDB78u; return; } if (c.pc != 0x003E9F78u) [[unlikely]] return; }
L_003E9F78:
    st32((c.r[16].w[0] + 524u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003E9FA0; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00BB(c, 485u, depth); }
L_003E9FA0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003E9FA4:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E9FB8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9FCCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 392u, depth + 1u); else { c.pc = 0x003EABF0u; return; } if (c.pc != 0x003E9FCCu) [[unlikely]] return; }
L_003E9FCC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003E9FF0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 28496u);
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00BB(c, 314u, depth); }
L_003E9FF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9FF8u);  if (depth < kMaxDepth) unit_00BA(c, 267u, depth + 1u); else { c.pc = 0x003E9F20u; return; } if (c.pc != 0x003E9FF8u) [[unlikely]] return; }
L_003E9FF8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA004u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 196u, depth + 1u); else { c.pc = 0x003ED728u; return; } if (c.pc != 0x003EA004u) [[unlikely]] return; }
L_003EA004:
    st32((c.r[16].w[0] + 116u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CE2D8u | kUnwind; return; } [[clang::musttail]] return unit_00B3(c, 276u, depth); }
L_003EA020:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA044u); c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 392u, depth + 1u); else { c.pc = 0x003EABF0u; return; } if (c.pc != 0x003EA044u) [[unlikely]] return; }
L_003EA044:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 114u)));  goto L_003EA060; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA058u); set32(c.r[4], c.r[4].w[0] + 28536u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003EA058u) [[unlikely]] return; }
L_003EA058:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003EA124; } }
L_003EA060:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], ld32((c.r[16].w[0] + 64u)));  if (t) { goto L_003EA070; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003EA124; }
L_003EA070:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA078u);  if (depth < kMaxDepth) unit_00BA(c, 175u, depth + 1u); else { c.pc = 0x003E95A8u; return; } if (c.pc != 0x003EA078u) [[unlikely]] return; }
L_003EA078:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_003EA0CC; } }
    set32(c.r[17], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[3].d[0];  if (t) { goto L_003EA0CC; } }
    set32(c.r[5], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA0A0u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 17u, depth + 1u); else { c.pc = 0x004001B8u; return; } if (c.pc != 0x003EA0A0u) [[unlikely]] return; }
L_003EA0A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0])));  if (t) { goto L_003EA0C0; } }
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[17].d[0]) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_003EA0CC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA0B8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 447u, depth + 1u); else { c.pc = 0x003EEFE0u; return; } if (c.pc != 0x003EA0B8u) [[unlikely]] return; }
L_003EA0B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_003EA0CC; } }
L_003EA0C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA0C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 447u, depth + 1u); else { c.pc = 0x003EEFE0u; return; } if (c.pc != 0x003EA0C8u) [[unlikely]] return; }
L_003EA0C8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_003EA0CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA0D4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 84u, depth + 1u); else { c.pc = 0x003FCCF8u; return; } if (c.pc != 0x003EA0D4u) [[unlikely]] return; }
L_003EA0D4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[16].w[0] + 492u);  goto L_003EA114; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA0E4u); set32(c.r[4], 0u - 310u);  if (depth < kMaxDepth) unit_00BA(c, 195u, depth + 1u); else { c.pc = 0x003E9720u; return; } if (c.pc != 0x003EA0E4u) [[unlikely]] return; }
L_003EA0E4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[3].w[0] + 28576u);  if (t) { goto L_003EA100; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[2].w[0] + 28616u);  if (t) { goto L_003EA108; } }
L_003EA100:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[5], c.r[2].w[0] + 28624u);
    c.budget -= 2;
L_003EA108:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA110u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003EA110u) [[unlikely]] return; }
L_003EA110:
    set32(c.r[4], c.r[16].w[0] + 492u);
    c.budget -= 1;
L_003EA114:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA11Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 247u, depth + 1u); else { c.pc = 0x003EDCA8u; return; } if (c.pc != 0x003EA11Cu) [[unlikely]] return; }
L_003EA11C:
    st8((c.r[16].w[0] + 114u), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_003EA124:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003EA140:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA164u); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 392u, depth + 1u); else { c.pc = 0x003EABF0u; return; } if (c.pc != 0x003EA164u) [[unlikely]] return; }
L_003EA164:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003EA190; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 28632u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00BB(c, 314u, depth); }
L_003EA190:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA198u);  if (depth < kMaxDepth) unit_00BA(c, 451u, depth + 1u); else { c.pc = 0x003EB408u; return; } if (c.pc != 0x003EA198u) [[unlikely]] return; }
L_003EA198:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA1ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EA1ACu) [[unlikely]] return; }
L_003EA1AC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA1BCu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 304u, depth + 1u); else { c.pc = 0x003EA348u; return; } if (c.pc != 0x003EA1BCu) [[unlikely]] return; }
L_003EA1BC:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 280u), c.r[2].w[0]);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003EA1E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], ld32((c.r[16].w[0] + 308u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA200u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 75u, depth + 1u); else { c.pc = 0x0011CEF8u; return; } if (c.pc != 0x003EA200u) [[unlikely]] return; }
L_003EA200:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 28680u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA210u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x003EA210u) [[unlikely]] return; }
L_003EA210:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA218u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 78u, depth + 1u); else { c.pc = 0x0011CFB0u; return; } if (c.pc != 0x003EA218u) [[unlikely]] return; }
L_003EA218:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003EAB48; }
L_003EA238:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003EA280; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA25Cu);  if (depth < kMaxDepth) unit_00BB(c, 489u, depth + 1u); else { c.pc = 0x003EF358u; return; } if (c.pc != 0x003EA25Cu) [[unlikely]] return; }
L_003EA25C:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003EA284; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00BF(c, 329u, depth); }
L_003EA280:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003EA284:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EA290:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA2B0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 237u, depth + 1u); else { c.pc = 0x00127D00u; return; } if (c.pc != 0x003EA2B0u) [[unlikely]] return; }
L_003EA2B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 276u)));
    set32(c.r[4], c.r[4].w[0] + 28688u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003EA2F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA2D0u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003EA2D0u) [[unlikely]] return; }
L_003EA2D0:
    set32(c.r[6], ld32((c.r[16].w[0] + 276u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], ld32((c.r[16].w[0] + 272u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001281F0u | kUnwind; return; } [[clang::musttail]] return unit_000A(c, 12u, depth); }
L_003EA2F0:
    set32(c.r[4], ld32((c.r[16].w[0] + 272u)));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00127BE8u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 233u, depth); }
L_003EA308:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA31Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 299u, depth + 1u); else { c.pc = 0x003EA290u; return; } if (c.pc != 0x003EA31Cu) [[unlikely]] return; }
L_003EA31C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    st32((c.r[16].w[0] + 280u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 292u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 284u), 0u);
    st32((c.r[16].w[0] + 288u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EA348:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 272u)));
    set32(c.r[8], c.r[29].w[0] + 4u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA374u); set32(c.r[9], c.r[29].w[0] + 8u);  if (depth < kMaxDepth) unit_00AD(c, 167u, depth + 1u); else { c.pc = 0x003B5738u; return; } if (c.pc != 0x003EA374u) [[unlikely]] return; }
L_003EA374:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 28720u);  if (t) { goto L_003EA3A8; } }
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 8u)));
    st32((c.r[16].w[0] + 280u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 284u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 288u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 292u), c.r[5].w[0]);  if (t) { goto L_003EA3B0; } }
    c.budget -= 1;
L_003EA3A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA3B0u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003EA3B0u) [[unlikely]] return; }
L_003EA3B0:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003EA3C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 64u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00BC(c, 121u, depth); }
L_003EA3D8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 64u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00BC(c, 125u, depth); }
L_003EA3F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 64u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00BC(c, 112u, depth); }
L_003EA408:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 64u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00BC(c, 116u, depth); }
L_003EA420:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00450000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[3].w[0] - 17480u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], 0u + 1u);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == c.r[17].d[0]; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_003EA488; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA44Cu);  if (depth < kMaxDepth) unit_00BA(c, 323u, depth + 1u); else { c.pc = 0x003EA510u; return; } if (c.pc != 0x003EA44Cu) [[unlikely]] return; }
L_003EA44C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], c.r[6].w[0] + 13440u);
    set32(c.r[5], 0u + 16384u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA460u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 325u, depth + 1u); else { c.pc = 0x003EA530u; return; } if (c.pc != 0x003EA460u) [[unlikely]] return; }
L_003EA460:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA468u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_00BA(c, 331u, depth + 1u); else { c.pc = 0x003EA600u; return; } if (c.pc != 0x003EA468u) [[unlikely]] return; }
L_003EA468:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 29824u);
    set32(c.r[5], 0u + 16384u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA47Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 328u, depth + 1u); else { c.pc = 0x003EA598u; return; } if (c.pc != 0x003EA47Cu) [[unlikely]] return; }
L_003EA47C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA484u); set32(c.r[4], 0u + 9u);  if (depth < kMaxDepth) unit_00BA(c, 331u, depth + 1u); else { c.pc = 0x003EA600u; return; } if (c.pc != 0x003EA484u) [[unlikely]] return; }
L_003EA484:
    st32((c.r[16].w[0]), c.r[17].w[0]);
    c.budget -= 1;
L_003EA488:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003EA4A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[2].w[0] - 17480u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_003EA500; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA4C4u);  if (depth < kMaxDepth) unit_00BA(c, 323u, depth + 1u); else { c.pc = 0x003EA510u; return; } if (c.pc != 0x003EA4C4u) [[unlikely]] return; }
L_003EA4C4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], c.r[6].w[0] + 29824u);
    set32(c.r[5], 0u + 16384u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA4D8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 325u, depth + 1u); else { c.pc = 0x003EA530u; return; } if (c.pc != 0x003EA4D8u) [[unlikely]] return; }
L_003EA4D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA4E0u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_00BA(c, 331u, depth + 1u); else { c.pc = 0x003EA600u; return; } if (c.pc != 0x003EA4E0u) [[unlikely]] return; }
L_003EA4E0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 13440u);
    set32(c.r[5], 0u + 16384u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA4F4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 328u, depth + 1u); else { c.pc = 0x003EA598u; return; } if (c.pc != 0x003EA4F4u) [[unlikely]] return; }
L_003EA4F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA4FCu); set32(c.r[4], 0u + 9u);  if (depth < kMaxDepth) unit_00BA(c, 331u, depth + 1u); else { c.pc = 0x003EA600u; return; } if (c.pc != 0x003EA4FCu) [[unlikely]] return; }
L_003EA4FC:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_003EA500:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EA510:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA520u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_00BA(c, 331u, depth + 1u); else { c.pc = 0x003EA600u; return; } if (c.pc != 0x003EA520u) [[unlikely]] return; }
L_003EA520:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], 0u + 9u);
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003EA600; }
L_003EA530:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], 0u + 8u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA558u); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 280u, depth + 1u); else { c.pc = 0x00102DF0u; return; } if (c.pc != 0x003EA558u) [[unlikely]] return; }
L_003EA558:
    set32(c.r[4], c.r[16].w[0] + 15u);
    c.r[3].d[0] = c.r[16].sd[0] < 0ll ? 1ull : 0ull;
    st32((c.r[2].w[0] + 128u), c.r[17].w[0]);
    if (c.r[3].d[0] != 0) c.r[16].d[0] = c.r[4].d[0];
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA578u); set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 4));  if (depth < kMaxDepth) unit_0000(c, 305u, depth + 1u); else { c.pc = 0x001032C0u; return; } if (c.pc != 0x003EA578u) [[unlikely]] return; }
L_003EA578:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003EA598:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], 0u + 9u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA5C0u); c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 280u, depth + 1u); else { c.pc = 0x00102DF0u; return; } if (c.pc != 0x003EA5C0u) [[unlikely]] return; }
L_003EA5C0:
    set32(c.r[4], c.r[16].w[0] + 15u);
    c.r[3].d[0] = c.r[16].sd[0] < 0ll ? 1ull : 0ull;
    st32((c.r[2].w[0] + 128u), c.r[17].w[0]);
    if (c.r[3].d[0] != 0) c.r[16].d[0] = c.r[4].d[0];
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA5E0u); set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 4));  if (depth < kMaxDepth) unit_0000(c, 297u, depth + 1u); else { c.pc = 0x00103188u; return; } if (c.pc != 0x003EA5E0u) [[unlikely]] return; }
L_003EA5E0:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003EA600:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA614u);  if (depth < kMaxDepth) unit_0000(c, 280u, depth + 1u); else { c.pc = 0x00102DF0u; return; } if (c.pc != 0x003EA614u) [[unlikely]] return; }
L_003EA614:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
L_003EA620:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA62Cu); set32(c.r[6], 0u + 30u);  if (depth < kMaxDepth) unit_0000(c, 311u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x003EA62Cu) [[unlikely]] return; }
L_003EA62C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EA620u | kUnwind; return; } goto L_003EA620; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EA648:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA65Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 280u, depth + 1u); else { c.pc = 0x00102DF0u; return; } if (c.pc != 0x003EA65Cu) [[unlikely]] return; }
L_003EA65C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA66Cu); set32(c.r[6], 0u + 30u);  if (depth < kMaxDepth) unit_0000(c, 311u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x003EA66Cu) [[unlikely]] return; }
L_003EA66C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EA680:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA690u);  if (depth < kMaxDepth) unit_00BA(c, 341u, depth + 1u); else { c.pc = 0x003EA6A8u; return; } if (c.pc != 0x003EA690u) [[unlikely]] return; }
L_003EA690:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA698u);  if (depth < kMaxDepth) unit_00AE(c, 7u, depth + 1u); else { c.pc = 0x003B80F8u; return; } if (c.pc != 0x003EA698u) [[unlikely]] return; }
L_003EA698:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003EA6C0; }
L_003EA6A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EA420u | kUnwind; return; } goto L_003EA420; }
L_003EA6C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EA4A0u | kUnwind; return; } goto L_003EA4A0; }
L_003EA6D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003EA6E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003EA6E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003EA6F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA70Cu); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 392u, depth + 1u); else { c.pc = 0x003EABF0u; return; } if (c.pc != 0x003EA70Cu) [[unlikely]] return; }
L_003EA70C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 28760u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 6u);  if (t) { goto L_003EA738; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00BB(c, 314u, depth); }
L_003EA738:
    set32(c.r[4], ld32((c.r[17].w[0] + 64u)));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00BF(c, 444u, depth); }
L_003EA750:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA764u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 392u, depth + 1u); else { c.pc = 0x003EABF0u; return; } if (c.pc != 0x003EA764u) [[unlikely]] return; }
L_003EA764:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 64u)));  goto L_003EA77C; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA778u); set32(c.r[4], c.r[4].w[0] + 28808u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003EA778u) [[unlikely]] return; }
L_003EA778:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003EA77C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EA790:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA7A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 392u, depth + 1u); else { c.pc = 0x003EABF0u; return; } if (c.pc != 0x003EA7A4u) [[unlikely]] return; }
L_003EA7A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003EA7D0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA7B8u); set32(c.r[4], c.r[4].w[0] + 28856u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003EA7B8u) [[unlikely]] return; }
L_003EA7B8:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EA7D0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003EAC10; }
L_003EA7E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA7F8u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 392u, depth + 1u); else { c.pc = 0x003EABF0u; return; } if (c.pc != 0x003EA7F8u) [[unlikely]] return; }
L_003EA7F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003EA818; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA80Cu); set32(c.r[4], c.r[4].w[0] + 28904u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003EA80Cu) [[unlikely]] return; }
L_003EA80C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003EA830; } }
    c.budget -= 1;
L_003EA818:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA820u);  if (depth < kMaxDepth) unit_00BA(c, 359u, depth + 1u); else { c.pc = 0x003EA848u; return; } if (c.pc != 0x003EA820u) [[unlikely]] return; }
L_003EA820:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA82Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 120u, depth + 1u); else { c.pc = 0x003E90A8u; return; } if (c.pc != 0x003EA82Cu) [[unlikely]] return; }
L_003EA82C:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_003EA830:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003EA848:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA85Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 392u, depth + 1u); else { c.pc = 0x003EABF0u; return; } if (c.pc != 0x003EA85Cu) [[unlikely]] return; }
L_003EA85C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003EA878; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA870u); set32(c.r[4], c.r[4].w[0] + 28952u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003EA870u) [[unlikely]] return; }
L_003EA870:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003EA898; } }
L_003EA878:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA880u);  if (depth < kMaxDepth) unit_00BA(c, 348u, depth + 1u); else { c.pc = 0x003EA750u; return; } if (c.pc != 0x003EA880u) [[unlikely]] return; }
L_003EA880:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA88Cu); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 23u, depth + 1u); else { c.pc = 0x00400340u; return; } if (c.pc != 0x003EA88Cu) [[unlikely]] return; }
L_003EA88C:
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 3;
L_003EA898:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003EA8A8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA8C4u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 392u, depth + 1u); else { c.pc = 0x003EABF0u; return; } if (c.pc != 0x003EA8C4u) [[unlikely]] return; }
L_003EA8C4:
    c.r[16].d[0] = c.r[16].d[0] ^ 1ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[4].w[0] + 29008u);
    c.r[6].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 4u);  if (t) { goto L_003EA8F0; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00BB(c, 314u, depth); }
L_003EA8F0:
    set32(c.r[4], ld32((c.r[17].w[0] + 64u)));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00BF(c, 444u, depth); }
L_003EA908:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA924u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 392u, depth + 1u); else { c.pc = 0x003EABF0u; return; } if (c.pc != 0x003EA924u) [[unlikely]] return; }
L_003EA924:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 29056u);  if (t) { goto L_003EA948; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00BB(c, 314u, depth); }
L_003EA948:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA950u); set32(c.r[4], ld32((c.r[17].w[0] + 64u)));  if (depth < kMaxDepth) unit_00BF(c, 100u, depth + 1u); else { c.pc = 0x003FCF70u; return; } if (c.pc != 0x003EA950u) [[unlikely]] return; }
L_003EA950:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 29104u);  if (t) { goto L_003EA970; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00BB(c, 314u, depth); }
L_003EA970:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003EA988:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA99Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 392u, depth + 1u); else { c.pc = 0x003EABF0u; return; } if (c.pc != 0x003EA99Cu) [[unlikely]] return; }
L_003EA99C:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003EA9C0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA9B4u); set32(c.r[4], c.r[4].w[0] + 29144u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003EA9B4u) [[unlikely]] return; }
L_003EA9B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003EA9CC; } }
    c.budget -= 1;
L_003EA9C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA9C8u);  if (depth < kMaxDepth) unit_00BA(c, 381u, depth + 1u); else { c.pc = 0x003EAAD0u; return; } if (c.pc != 0x003EA9C8u) [[unlikely]] return; }
L_003EA9C8:
    set32(c.r[2], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 1;
L_003EA9CC:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003EA9E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA9FCu); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 392u, depth + 1u); else { c.pc = 0x003EABF0u; return; } if (c.pc != 0x003EA9FCu) [[unlikely]] return; }
L_003EA9FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 29192u);  if (t) { goto L_003EAA20; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00BB(c, 314u, depth); }
L_003EAA20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAA28u); set32(c.r[4], ld32((c.r[17].w[0] + 64u)));  if (depth < kMaxDepth) unit_00BF(c, 103u, depth + 1u); else { c.pc = 0x003FCFE0u; return; } if (c.pc != 0x003EAA28u) [[unlikely]] return; }
L_003EAA28:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 29240u);  if (t) { goto L_003EAA48; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00BB(c, 314u, depth); }
L_003EAA48:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003EAA60:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAA74u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 392u, depth + 1u); else { c.pc = 0x003EABF0u; return; } if (c.pc != 0x003EAA74u) [[unlikely]] return; }
L_003EAA74:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003EAA98; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAA8Cu); set32(c.r[4], c.r[4].w[0] + 29288u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003EAA8Cu) [[unlikely]] return; }
L_003EAA8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003EAAA4; } }
    c.budget -= 1;
L_003EAA98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAAA0u);  if (depth < kMaxDepth) unit_00BA(c, 381u, depth + 1u); else { c.pc = 0x003EAAD0u; return; } if (c.pc != 0x003EAAA0u) [[unlikely]] return; }
L_003EAAA0:
    set32(c.r[2], ld32((c.r[29].w[0] + 40u)));
    c.budget -= 1;
L_003EAAA4:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003EAAB8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 64u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C0(c, 23u, depth); }
L_003EAAD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 64u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C0(c, 21u, depth); }
L_003EAAE8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003EAAFC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 1;
L_003EAAFC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00BF(c, 444u, depth); }
L_003EAB10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003EAB24; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 1;
L_003EAB24:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C0(c, 17u, depth); }
L_003EAB38:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 68u)));  c.pc = t; return; }
L_003EAB40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 308u)));  c.pc = t; return; }
L_003EAB48:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAB68u); set32(c.r[4], ld32((c.r[16].w[0] + 68u)));  if (depth < kMaxDepth) unit_00BB(c, 471u, depth + 1u); else { c.pc = 0x003EF170u; return; } if (c.pc != 0x003EAB68u) [[unlikely]] return; }
L_003EAB68:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00BB(c, 193u, depth); }
L_003EAB88:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 68u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00BB(c, 472u, depth); }
L_003EABA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 68u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00BB(c, 457u, depth); }
L_003EABB8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 68u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00BB(c, 459u, depth); }
L_003EABD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], 0u + 44u);
    set32(c.r[4], ld32((c.r[4].w[0] + 64u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00BF(c, 444u, depth); }
L_003EABF0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003EABFC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 1;
L_003EABFC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003EAC08:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 76u)));  c.pc = t; return; }
L_003EAC10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 72u)));  c.pc = t; return; }
L_003EAC18:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 168u)));  c.pc = t; return; }
L_003EAC20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAC3Cu); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 392u, depth + 1u); else { c.pc = 0x003EABF0u; return; } if (c.pc != 0x003EAC3Cu) [[unlikely]] return; }
L_003EAC3C:
    set32(c.r[3], c.r[16].w[0] << 5);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[3].w[0] - c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] + 29336u);
    set32(c.r[5], 0u + 54u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] << 2);  if (t) { goto L_003EAC70; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00BB(c, 314u, depth); }
L_003EAC70:
    set32(c.r[6], c.r[3].w[0] + c.r[16].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[6], c.r[6].w[0] << 3);
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EAAE8u | kUnwind; return; } goto L_003EAAE8; }
L_003EAC90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EACA4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 392u, depth + 1u); else { c.pc = 0x003EABF0u; return; } if (c.pc != 0x003EACA4u) [[unlikely]] return; }
L_003EACA4:
    set32(c.r[4], 0u - 12u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_003EACD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EACB8u);  if (depth < kMaxDepth) unit_00BA(c, 195u, depth + 1u); else { c.pc = 0x003E9720u; return; } if (c.pc != 0x003EACB8u) [[unlikely]] return; }
L_003EACB8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EACC4u); set32(c.r[4], c.r[4].w[0] + 29384u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003EACC4u) [[unlikely]] return; }
L_003EACC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003EAD08; } }
    c.budget -= 1;
L_003EACD0:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003EAD0C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EACE4u); set32(c.r[4], ld32((c.r[16].w[0] + 64u)));  if (depth < kMaxDepth) unit_00BF(c, 441u, depth + 1u); else { c.pc = 0x003FFF28u; return; } if (c.pc != 0x003EACE4u) [[unlikely]] return; }
L_003EACE4:
    set32(c.r[6], 0u + 6u);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; c.r[4].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;  if (t) { goto L_003EAD04; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[6].d[0]; if (c.r[4].d[0] != 0) c.r[2].d[0] = c.r[5].d[0];  if (t) { goto L_003EAD08; } }
L_003EAD04:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_003EAD08:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003EAD0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EAD18:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 64u)));  if (t) { goto L_003EAD40; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[5], 0u + 15u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00BF(c, 444u, depth); }
L_003EAD40:
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003EAD60; } }
    set32(c.r[5], 0u + 15u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00BF(c, 444u, depth); }
L_003EAD60:
    set32(c.r[5], 0u + 15u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00BF(c, 444u, depth); }
L_003EAD70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAD8Cu); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 392u, depth + 1u); else { c.pc = 0x003EABF0u; return; } if (c.pc != 0x003EAD8Cu) [[unlikely]] return; }
L_003EAD8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_003EADB0; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 29424u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00BB(c, 314u, depth); }
L_003EADB0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 64u)));  if (t) { goto L_003EADD8; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[5], 0u + 15u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00BF(c, 444u, depth); }
L_003EADD8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[3].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_003EAE00; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[5], 0u + 15u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[6], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00BF(c, 444u, depth); }
L_003EAE00:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003EAE48; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[5], 0u + 15u);  if (t) { goto L_003EAE30; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[6], 0u + 2u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00BF(c, 444u, depth); }
L_003EAE30:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[6], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00BF(c, 444u, depth); }
L_003EAE48:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003EAE58:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAE6Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 392u, depth + 1u); else { c.pc = 0x003EABF0u; return; } if (c.pc != 0x003EAE6Cu) [[unlikely]] return; }
L_003EAE6C:
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 15u);  if (t) { goto L_003EAE90; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAE84u); set32(c.r[4], c.r[4].w[0] + 29472u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003EAE84u) [[unlikely]] return; }
L_003EAE84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003EAEE4; } }
    c.budget -= 1;
L_003EAE90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAE98u); set32(c.r[4], ld32((c.r[16].w[0] + 64u)));  if (depth < kMaxDepth) unit_00C0(c, 17u, depth + 1u); else { c.pc = 0x004001B8u; return; } if (c.pc != 0x003EAE98u) [[unlikely]] return; }
L_003EAE98:
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[29].w[0])));
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[2].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_003EAEE0; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 2u);  goto L_003EAEC8; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003EAEE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_003EAED4; } }
    c.budget -= 1;
L_003EAEC8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[5], 0u + 2u);  if (t) { goto L_003EAEE0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 1;
L_003EAED4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAEDCu); set32(c.r[4], c.r[4].w[0] + 29520u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003EAEDCu) [[unlikely]] return; }
L_003EAEDC:
    set32(c.r[5], 0u - 1u);
    c.budget -= 1;
L_003EAEE0:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_003EAEE4:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003EAEF8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAF0Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 392u, depth + 1u); else { c.pc = 0x003EABF0u; return; } if (c.pc != 0x003EAF0Cu) [[unlikely]] return; }
L_003EAF0C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 29568u);  if (t) { goto L_003EAF30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAF24u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003EAF24u) [[unlikely]] return; }
L_003EAF24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003EAF50; } }
    c.budget -= 1;
L_003EAF30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAF38u); set32(c.r[4], ld32((c.r[16].w[0] + 64u)));  if (depth < kMaxDepth) unit_00BD(c, 314u, depth + 1u); else { c.pc = 0x003F6BB0u; return; } if (c.pc != 0x003EAF38u) [[unlikely]] return; }
L_003EAF38:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 29624u);  if (t) { goto L_003EAF4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAF4Cu);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003EAF4Cu) [[unlikely]] return; }
L_003EAF4C:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 1;
L_003EAF50:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003EAF60:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAF74u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 392u, depth + 1u); else { c.pc = 0x003EABF0u; return; } if (c.pc != 0x003EAF74u) [[unlikely]] return; }
L_003EAF74:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003EAF98; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAF8Cu); set32(c.r[4], c.r[4].w[0] + 29656u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003EAF8Cu) [[unlikely]] return; }
L_003EAF8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003EAFA4; } }
    c.budget -= 1;
L_003EAF98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAFA0u);  if (depth < kMaxDepth) unit_00BA(c, 380u, depth + 1u); else { c.pc = 0x003EAAB8u; return; } if (c.pc != 0x003EAFA0u) [[unlikely]] return; }
L_003EAFA0:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 1;
L_003EAFA4:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003EAFB8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAFCCu); set32(c.r[4], ld32((c.r[4].w[0] + 64u)));  if (depth < kMaxDepth) unit_00BF(c, 325u, depth + 1u); else { c.pc = 0x003FEA68u; return; } if (c.pc != 0x003EAFCCu) [[unlikely]] return; }
L_003EAFCC:
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 12u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003EAFE8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB00Cu); c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 392u, depth + 1u); else { c.pc = 0x003EABF0u; return; } if (c.pc != 0x003EB00Cu) [[unlikely]] return; }
L_003EB00C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 29712u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003EB030; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB028u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003EB028u) [[unlikely]] return; }
L_003EB028:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003EB070; } }
L_003EB030:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB038u); set32(c.r[4], ld32((c.r[18].w[0] + 64u)));  if (depth < kMaxDepth) unit_00C0(c, 84u, depth + 1u); else { c.pc = 0x00400DC8u; return; } if (c.pc != 0x003EB038u) [[unlikely]] return; }
L_003EB038:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u - 309u);  if (t) { goto L_003EB060; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB048u);  if (depth < kMaxDepth) unit_00BA(c, 195u, depth + 1u); else { c.pc = 0x003E9720u; return; } if (c.pc != 0x003EB048u) [[unlikely]] return; }
L_003EB048:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB054u); set32(c.r[4], c.r[4].w[0] + 29760u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003EB054u) [[unlikely]] return; }
L_003EB054:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_003EB060:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].sd[0] >= 0) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003EB07C; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003EB070:
    st32((c.r[16].w[0]), 0u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
L_003EB07C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003EB090:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], 0u + 3u);
    set32(c.r[4], ld32((c.r[4].w[0] + 64u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00BD(c, 311u, depth); }
L_003EB0B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], 0u + 5u);
    set32(c.r[4], ld32((c.r[4].w[0] + 64u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00BD(c, 311u, depth); }
L_003EB0D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB0ECu); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 392u, depth + 1u); else { c.pc = 0x003EABF0u; return; } if (c.pc != 0x003EB0ECu) [[unlikely]] return; }
L_003EB0EC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 29800u);  if (t) { goto L_003EB110; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00BB(c, 314u, depth); }
L_003EB110:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EA3C0u | kUnwind; return; } goto L_003EA3C0; }
L_003EB128:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB13Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 392u, depth + 1u); else { c.pc = 0x003EABF0u; return; } if (c.pc != 0x003EB13Cu) [[unlikely]] return; }
L_003EB13C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003EB168; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB150u); set32(c.r[4], c.r[4].w[0] + 29848u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003EB150u) [[unlikely]] return; }
L_003EB150:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EB168:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EA3D8u | kUnwind; return; } goto L_003EA3D8; }
L_003EB178:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB19Cu); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 392u, depth + 1u); else { c.pc = 0x003EABF0u; return; } if (c.pc != 0x003EB19Cu) [[unlikely]] return; }
L_003EB19C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003EB1D0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 29896u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00BB(c, 314u, depth); }
L_003EB1D0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EA3F0u | kUnwind; return; } goto L_003EA3F0; }
L_003EB1E8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB204u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 392u, depth + 1u); else { c.pc = 0x003EABF0u; return; } if (c.pc != 0x003EB204u) [[unlikely]] return; }
L_003EB204:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003EB238; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB21Cu); set32(c.r[4], c.r[4].w[0] + 29944u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003EB21Cu) [[unlikely]] return; }
L_003EB21C:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003EB238:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EA408u | kUnwind; return; } goto L_003EA408; }
L_003EB250:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[4], ld32((c.r[4].w[0] + 64u)));  if (t) { goto L_003EB278; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00BD(c, 311u, depth); }
L_003EB278:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[5], 0u + 4u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00BD(c, 311u, depth); }
L_003EB290:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[4], ld32((c.r[4].w[0] + 64u)));  if (t) { goto L_003EB2B8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[5], 0u + 39u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00BF(c, 444u, depth); }
L_003EB2B8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[5], 0u + 39u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00BF(c, 444u, depth); }
L_003EB2D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], 0u + 36u);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], ld32((c.r[4].w[0] + 64u)));  if (t) { goto L_003EB2F8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00BF(c, 444u, depth); }
L_003EB2F8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EB308:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], 0u + 37u);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], ld32((c.r[4].w[0] + 64u)));  if (t) { goto L_003EB330; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00BF(c, 444u, depth); }
L_003EB330:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EB340:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB354u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 392u, depth + 1u); else { c.pc = 0x003EABF0u; return; } if (c.pc != 0x003EB354u) [[unlikely]] return; }
L_003EB354:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003EB378; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB36Cu); set32(c.r[4], c.r[4].w[0] + 29992u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003EB36Cu) [[unlikely]] return; }
L_003EB36C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003EB384; } }
    c.budget -= 1;
L_003EB378:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB380u);  if (depth < kMaxDepth) unit_00BA(c, 380u, depth + 1u); else { c.pc = 0x003EAAB8u; return; } if (c.pc != 0x003EB380u) [[unlikely]] return; }
L_003EB380:
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 1;
L_003EB384:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003EB398:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB3B4u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 392u, depth + 1u); else { c.pc = 0x003EABF0u; return; } if (c.pc != 0x003EB3B4u) [[unlikely]] return; }
L_003EB3B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003EB3D8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 30048u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00BB(c, 314u, depth); }
L_003EB3D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB3E0u);  if (depth < kMaxDepth) unit_00BA(c, 348u, depth + 1u); else { c.pc = 0x003EA750u; return; } if (c.pc != 0x003EB3E0u) [[unlikely]] return; }
L_003EB3E0:
    c.r[6].d[0] = c.r[17].d[0] ^ 1ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[5], 0u + 7u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[6].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00BF(c, 444u, depth); }
L_003EB408:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB41Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 392u, depth + 1u); else { c.pc = 0x003EABF0u; return; } if (c.pc != 0x003EB41Cu) [[unlikely]] return; }
L_003EB41C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 300u)));  goto L_003EB434; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB430u); set32(c.r[4], c.r[4].w[0] + 30104u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003EB430u) [[unlikely]] return; }
L_003EB430:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003EB434:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EB448:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB464u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 392u, depth + 1u); else { c.pc = 0x003EABF0u; return; } if (c.pc != 0x003EB464u) [[unlikely]] return; }
L_003EB464:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003EB480; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB478u); set32(c.r[4], c.r[4].w[0] + 30152u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003EB478u) [[unlikely]] return; }
L_003EB478:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_003EB4D0; } }
L_003EB480:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB488u);  if (depth < kMaxDepth) unit_00BA(c, 348u, depth + 1u); else { c.pc = 0x003EA750u; return; } if (c.pc != 0x003EB488u) [[unlikely]] return; }
L_003EB488:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB494u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 23u, depth + 1u); else { c.pc = 0x00400340u; return; } if (c.pc != 0x003EB494u) [[unlikely]] return; }
L_003EB494:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB49Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 354u, depth + 1u); else { c.pc = 0x003EA7E0u; return; } if (c.pc != 0x003EB49Cu) [[unlikely]] return; }
L_003EB49C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB4A8u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BA(c, 359u, depth + 1u); else { c.pc = 0x003EA848u; return; } if (c.pc != 0x003EB4A8u) [[unlikely]] return; }
L_003EB4A8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB4B4u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BA(c, 120u, depth + 1u); else { c.pc = 0x003E90A8u; return; } if (c.pc != 0x003EB4B4u) [[unlikely]] return; }
L_003EB4B4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB4C0u); st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BA(c, 444u, depth + 1u); else { c.pc = 0x003EB340u; return; } if (c.pc != 0x003EB4C0u) [[unlikely]] return; }
L_003EB4C0:
    set32(c.r[3], ld32((c.r[29].w[0] + 28u)));
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 4;
L_003EB4D0:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003EB4E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 308u)));
    set32(c.r[5], c.r[2].w[0] + 16383u);
    c.r[3].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[5].d[0];
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 14));
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 11);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[12]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[1]);
    c.r[2].d[0] = c.r[7].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[5].d[0] = c.r[7].d[0];
    c.budget -= 21;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EAB48u | kUnwind; return; } goto L_003EAB48; }
L_003EB538:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_003EB55C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB558u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 473u, depth + 1u); else { c.pc = 0x003EF1B0u; return; } if (c.pc != 0x003EB558u) [[unlikely]] return; }
L_003EB558:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 1;
L_003EB55C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003EB568:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003EB5C0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003EB5B0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003EB5C0; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003EB5A8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00BB(c, 475u, depth); }
L_003EB5A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003EB5C0; } }
L_003EB5B0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00BB(c, 475u, depth); }
L_003EB5C0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EB5D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB5ECu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 392u, depth + 1u); else { c.pc = 0x003EABF0u; return; } if (c.pc != 0x003EB5ECu) [[unlikely]] return; }
L_003EB5EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003EB610; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 30200u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00BB(c, 314u, depth); }
L_003EB610:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB618u);  if (depth < kMaxDepth) unit_00BA(c, 348u, depth + 1u); else { c.pc = 0x003EA750u; return; } if (c.pc != 0x003EB618u) [[unlikely]] return; }
L_003EB618:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00BF(c, 96u, depth); }
L_003EB638:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 32u), c.f[20]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB65Cu); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_00BA(c, 392u, depth + 1u); else { c.pc = 0x003EABF0u; return; } if (c.pc != 0x003EB65Cu) [[unlikely]] return; }
L_003EB65C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003EB688; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 30248u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.f[20] = ld32((c.r[29].w[0] + 32u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 48u);  [[clang::musttail]] return unit_00BB(c, 314u, depth); }
L_003EB688:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB690u);  if (depth < kMaxDepth) unit_00BA(c, 348u, depth + 1u); else { c.pc = 0x003EA750u; return; } if (c.pc != 0x003EB690u) [[unlikely]] return; }
L_003EB690:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.f[12] = c.r[1].w[0];
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB6A4u); c.f[12] = fp::mul(c.f[20], c.f[12]);  if (depth < kMaxDepth) unit_0007(c, 36u, depth + 1u); else { c.pc = 0x0011C438u; return; } if (c.pc != 0x003EB6A4u) [[unlikely]] return; }
L_003EB6A4:
    c.r[5].d[0] = 0ull | 65408ull;
    c.r[5].d[0] = c.r[5].d[0] << 46;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB6B4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x003EB6B4u) [[unlikely]] return; }
L_003EB6B4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB6C0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 78u, depth + 1u); else { c.pc = 0x0011CFB0u; return; } if (c.pc != 0x003EB6C0u) [[unlikely]] return; }
L_003EB6C0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB6CCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 75u, depth + 1u); else { c.pc = 0x0011CEF8u; return; } if (c.pc != 0x003EB6CCu) [[unlikely]] return; }
L_003EB6CC:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB6D8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 71u, depth + 1u); else { c.pc = 0x0011CEA8u; return; } if (c.pc != 0x003EB6D8u) [[unlikely]] return; }
L_003EB6D8:
    set32(c.r[5], c.r[16].w[0] - 1u);
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[16].d[0];
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.f[20] = ld32((c.r[29].w[0] + 32u));
    c.budget -= 11;
    { set32(c.r[29], c.r[29].w[0] + 48u);  [[clang::musttail]] return unit_00BF(c, 96u, depth); }
L_003EB708:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003EB710:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003EB718:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 64u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00BD(c, 119u, depth); }
L_003EB730:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB740u);  if (depth < kMaxDepth) unit_00C1(c, 312u, depth + 1u); else { c.pc = 0x00407A50u; return; } if (c.pc != 0x003EB740u) [[unlikely]] return; }
L_003EB740:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    set32(c.r[4], c.r[4].w[0] - 18600u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C1(c, 328u, depth); }
L_003EB758:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00BB(c, 314u, depth); }
L_003EB770:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C1(c, 323u, depth); }
L_003EB788:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 6175u);  c.pc = t; return; }
L_003EB790:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C1(c, 329u, depth); }
L_003EB7A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C1(c, 343u, depth); }
L_003EB7C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 168u)));  c.pc = t; return; }
L_003EB7C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 168u), c.r[5].w[0]);  c.pc = t; return; }
L_003EB7D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003EB7E8; }
L_003EB7E8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB810u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00BA(c, 496u, depth + 1u); else { c.pc = 0x003EB860u; return; } if (c.pc != 0x003EB810u) [[unlikely]] return; }
L_003EB810:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB820u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 498u, depth + 1u); else { c.pc = 0x003EB8C0u; return; } if (c.pc != 0x003EB820u) [[unlikely]] return; }
L_003EB820:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB82Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 504u, depth + 1u); else { c.pc = 0x003EB978u; return; } if (c.pc != 0x003EB82Cu) [[unlikely]] return; }
L_003EB82C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB83Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 506u, depth + 1u); else { c.pc = 0x003EB998u; return; } if (c.pc != 0x003EB83Cu) [[unlikely]] return; }
L_003EB83C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003EB9E0; }
L_003EB860:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_003EB8AC; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], 0u + 3u);  goto L_003EB890; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_003EB894; } }
    c.budget -= 1;
L_003EB890:
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_003EB894:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003EB8B0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB8A8u); set32(c.r[4], c.r[4].w[0] + 30296u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003EB8A8u) [[unlikely]] return; }
L_003EB8A8:
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_003EB8AC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003EB8B0:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EB8C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[4], c.r[16].w[0] + 4u);
    set32(c.r[17], ld32((c.r[8].w[0] + 12u)));
    set32(c.r[9], ld32((c.r[8].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[8].w[0] + 4u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[9].d[0] + 0ull;
    st32((c.r[16].w[0] + 68u), c.r[9].w[0]);
    c.budget -= 17;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; st32((c.r[16].w[0] + 72u), c.r[17].w[0]);  if (t) { goto L_003EB918; } }
    set32(c.r[5], ld32((c.r[8].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB910u); c.r[6].d[0] = c.r[9].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 505u, depth + 1u); else { c.pc = 0x003EB988u; return; } if (c.pc != 0x003EB910u) [[unlikely]] return; }
L_003EB910:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003EB964; } }
L_003EB918:
    set32(c.r[4], ld32((c.r[8].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB924u); c.r[7].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 101u, depth + 1u); else { c.pc = 0x003E8DA0u; return; } if (c.pc != 0x003EB924u) [[unlikely]] return; }
L_003EB924:
    set32(c.r[4], c.r[16].w[0] + 4u);
    set32(c.r[5], ld32((c.r[29].w[0])));
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB938u); set32(c.r[6], ld32((c.r[29].w[0] + 12u)));  if (depth < kMaxDepth) unit_00BA(c, 505u, depth + 1u); else { c.pc = 0x003EB988u; return; } if (c.pc != 0x003EB938u) [[unlikely]] return; }
L_003EB938:
    set32(c.r[4], c.r[16].w[0] + 20u);
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB94Cu); set32(c.r[6], ld32((c.r[29].w[0] + 16u)));  if (depth < kMaxDepth) unit_00BA(c, 505u, depth + 1u); else { c.pc = 0x003EB988u; return; } if (c.pc != 0x003EB94Cu) [[unlikely]] return; }
L_003EB94C:
    set32(c.r[4], c.r[16].w[0] + 36u);
    set32(c.r[5], ld32((c.r[29].w[0] + 8u)));
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB960u); set32(c.r[6], ld32((c.r[29].w[0] + 20u)));  if (depth < kMaxDepth) unit_00BA(c, 505u, depth + 1u); else { c.pc = 0x003EB988u; return; } if (c.pc != 0x003EB960u) [[unlikely]] return; }
L_003EB960:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003EB964:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003EB978:
    set32(c.r[2], ld32((c.r[4].w[0] + 48u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 76u), c.r[2].w[0]);  c.pc = t; return; }
L_003EB988:
    st32((c.r[4].w[0] + 8u), c.r[7].w[0]);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), c.r[6].w[0]);  c.pc = t; return; }
L_003EB998:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 4u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB9B8u); set32(c.r[4], ld32((c.r[4].w[0] + 168u)));  if (depth < kMaxDepth) unit_00C1(c, 366u, depth + 1u); else { c.pc = 0x00407FC0u; return; } if (c.pc != 0x003EB9B8u) [[unlikely]] return; }
L_003EB9B8:
    st32((c.r[16].w[0] + 88u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 92u), 0u);
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003EB9E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB9FCu); set32(c.r[17], c.r[5].w[0] + 96u);  if (depth < kMaxDepth) unit_00BA(c, 513u, depth + 1u); else { c.pc = 0x003EBA58u; return; } if (c.pc != 0x003EB9FCu) [[unlikely]] return; }
L_003EB9FC:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBA0Cu); set32(c.r[16], c.r[16].w[0] + 136u);  if (depth < kMaxDepth) unit_00BA(c, 515u, depth + 1u); else { c.pc = 0x003EBAC8u; return; } if (c.pc != 0x003EBA0Cu) [[unlikely]] return; }
L_003EBA0C:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBA30u); st32((c.r[17].w[0] + 16u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00BA(c, 517u, depth + 1u); else { c.pc = 0x003EBB38u; return; } if (c.pc != 0x003EBA30u) [[unlikely]] return; }
L_003EBA30:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBA3Cu); st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BA(c, 517u, depth + 1u); else { c.pc = 0x003EBB38u; return; } if (c.pc != 0x003EBA3Cu) [[unlikely]] return; }
L_003EBA3C:
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003EBA58:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], 0u + 3u);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 136u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;  if (t) { goto L_003EBAA0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003EBA90; } }
    c.budget -= 2;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[16], 0u + 1u);  goto L_003EBAB0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_003EBAA8; } }
L_003EBA90:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[16].d[0]; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003EBAB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_003EBAA8; } }
L_003EBAA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 2u);  if (t) { goto L_003EBAB0; } }
L_003EBAA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBAB0u); set32(c.r[4], c.r[4].w[0] + 30336u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003EBAB0u) [[unlikely]] return; }
L_003EBAB0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003EBAB4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EBAC8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], 0u + 1u);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 140u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;  if (t) { goto L_003EBB10; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 3u);  goto L_003EBB00; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[16].d[0]; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003EBB24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_003EBB18; } }
L_003EBB00:
    c.budget -= 2;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[16], 0u + 3u);  goto L_003EBB20; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_003EBB18; } }
L_003EBB10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 2u);  if (t) { goto L_003EBB20; } }
L_003EBB18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBB20u); set32(c.r[4], c.r[4].w[0] + 30376u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003EBB20u) [[unlikely]] return; }
L_003EBB20:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003EBB24:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EBB38:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_003EBB60; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[16].d[0]; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003EBB74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_003EBB68; } }
    c.budget -= 1;
L_003EBB60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003EBB70; } }
L_003EBB68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBB70u); set32(c.r[4], c.r[4].w[0] + 30416u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003EBB70u) [[unlikely]] return; }
L_003EBB70:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003EBB74:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EBB88:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 168u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C1(c, 357u, depth); }
L_003EBBA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 168u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00C1(c, 359u, depth); }
L_003EBBB8:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 152u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 160u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 168u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBBE0u); c.r[19].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 392u, depth + 1u); else { c.pc = 0x003EABF0u; return; } if (c.pc != 0x003EBBE0u) [[unlikely]] return; }
L_003EBBE0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0])));  goto L_003EBC00; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBBF4u); set32(c.r[4], c.r[4].w[0] + 30448u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003EBBF4u) [[unlikely]] return; }
L_003EBBF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_003EBC48; } }
    c.budget -= 1;
L_003EBC00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_003EBC18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBC10u); set32(c.r[4], c.r[4].w[0] + 30504u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003EBC10u) [[unlikely]] return; }
L_003EBC10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_003EBC48; } }
L_003EBC18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBC20u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 488u, depth + 1u); else { c.pc = 0x003EB7C0u; return; } if (c.pc != 0x003EBC20u) [[unlikely]] return; }
L_003EBC20:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBC34u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 491u, depth + 1u); else { c.pc = 0x003EB7E8u; return; } if (c.pc != 0x003EBC34u) [[unlikely]] return; }
L_003EBC34:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBC44u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 147u, depth + 1u); else { c.pc = 0x00405448u; return; } if (c.pc != 0x003EBC44u) [[unlikely]] return; }
L_003EBC44:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_003EBC48:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 152u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 168u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_003EBC60:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 152u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 160u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 168u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBC88u); c.r[19].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 392u, depth + 1u); else { c.pc = 0x003EABF0u; return; } if (c.pc != 0x003EBC88u) [[unlikely]] return; }
L_003EBC88:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0])));  goto L_003EBCA8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBC9Cu); set32(c.r[4], c.r[4].w[0] + 30560u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003EBC9Cu) [[unlikely]] return; }
L_003EBC9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_003EBCF0; } }
    c.budget -= 1;
L_003EBCA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_003EBCC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBCB8u); set32(c.r[4], c.r[4].w[0] + 30616u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003EBCB8u) [[unlikely]] return; }
L_003EBCB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_003EBCF0; } }
L_003EBCC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBCC8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 488u, depth + 1u); else { c.pc = 0x003EB7C0u; return; } if (c.pc != 0x003EBCC8u) [[unlikely]] return; }
L_003EBCC8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBCDCu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 491u, depth + 1u); else { c.pc = 0x003EB7E8u; return; } if (c.pc != 0x003EBCDCu) [[unlikely]] return; }
L_003EBCDC:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBCECu); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 218u, depth + 1u); else { c.pc = 0x00406650u; return; } if (c.pc != 0x003EBCECu) [[unlikely]] return; }
L_003EBCEC:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_003EBCF0:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 152u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 168u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_003EBD08:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 152u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 160u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 168u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 176u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 184u), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBD38u); c.r[20].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 392u, depth + 1u); else { c.pc = 0x003EABF0u; return; } if (c.pc != 0x003EBD38u) [[unlikely]] return; }
L_003EBD38:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 30664u);  if (t) { goto L_003EBD58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBD4Cu);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003EBD4Cu) [[unlikely]] return; }
L_003EBD4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_003EBDAC; } }
    c.budget -= 1;
L_003EBD58:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_003EBD78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBD6Cu); set32(c.r[4], c.r[4].w[0] + 30720u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003EBD6Cu) [[unlikely]] return; }
L_003EBD6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_003EBDAC; } }
    c.budget -= 1;
L_003EBD78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBD80u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 488u, depth + 1u); else { c.pc = 0x003EB7C0u; return; } if (c.pc != 0x003EBD80u) [[unlikely]] return; }
L_003EBD80:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBD94u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 491u, depth + 1u); else { c.pc = 0x003EB7E8u; return; } if (c.pc != 0x003EBD94u) [[unlikely]] return; }
L_003EBD94:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBDA8u); c.r[7].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 240u, depth + 1u); else { c.pc = 0x00406B08u; return; } if (c.pc != 0x003EBDA8u) [[unlikely]] return; }
L_003EBDA8:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_003EBDAC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 152u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 168u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 184u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_003EBDC8:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 152u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 160u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 168u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBDF0u); c.r[19].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 392u, depth + 1u); else { c.pc = 0x003EABF0u; return; } if (c.pc != 0x003EBDF0u) [[unlikely]] return; }
L_003EBDF0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0])));  goto L_003EBE10; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBE04u); set32(c.r[4], c.r[4].w[0] + 30776u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003EBE04u) [[unlikely]] return; }
L_003EBE04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_003EBE58; } }
    c.budget -= 1;
L_003EBE10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_003EBE28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBE20u); set32(c.r[4], c.r[4].w[0] + 30832u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003EBE20u) [[unlikely]] return; }
L_003EBE20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_003EBE58; } }
L_003EBE28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBE30u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 488u, depth + 1u); else { c.pc = 0x003EB7C0u; return; } if (c.pc != 0x003EBE30u) [[unlikely]] return; }
L_003EBE30:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBE44u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 491u, depth + 1u); else { c.pc = 0x003EB7E8u; return; } if (c.pc != 0x003EBE44u) [[unlikely]] return; }
L_003EBE44:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBE54u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 201u, depth + 1u); else { c.pc = 0x00406160u; return; } if (c.pc != 0x003EBE54u) [[unlikely]] return; }
L_003EBE54:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_003EBE58:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 152u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 168u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_003EBE70:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 152u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 160u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 168u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBE98u); c.r[19].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 392u, depth + 1u); else { c.pc = 0x003EABF0u; return; } if (c.pc != 0x003EBE98u) [[unlikely]] return; }
L_003EBE98:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0])));  goto L_003EBEB8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBEACu); set32(c.r[4], c.r[4].w[0] + 30888u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003EBEACu) [[unlikely]] return; }
L_003EBEAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_003EBF00; } }
    c.budget -= 1;
L_003EBEB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_003EBED0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBEC8u); set32(c.r[4], c.r[4].w[0] + 30944u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003EBEC8u) [[unlikely]] return; }
L_003EBEC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_003EBF00; } }
L_003EBED0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBED8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 488u, depth + 1u); else { c.pc = 0x003EB7C0u; return; } if (c.pc != 0x003EBED8u) [[unlikely]] return; }
L_003EBED8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBEECu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 491u, depth + 1u); else { c.pc = 0x003EB7E8u; return; } if (c.pc != 0x003EBEECu) [[unlikely]] return; }
L_003EBEEC:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBEFCu); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 291u, depth + 1u); else { c.pc = 0x00407640u; return; } if (c.pc != 0x003EBEFCu) [[unlikely]] return; }
L_003EBEFC:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_003EBF00:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 152u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 168u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_003EBF18:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 152u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 160u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 168u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBF40u); c.r[19].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 392u, depth + 1u); else { c.pc = 0x003EABF0u; return; } if (c.pc != 0x003EBF40u) [[unlikely]] return; }
L_003EBF40:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0])));  goto L_003EBF60; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBF54u); set32(c.r[4], c.r[4].w[0] + 30992u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003EBF54u) [[unlikely]] return; }
L_003EBF54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_003EBFA8; } }
    c.budget -= 1;
L_003EBF60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_003EBF78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBF70u); set32(c.r[4], c.r[4].w[0] + 31040u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003EBF70u) [[unlikely]] return; }
L_003EBF70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_003EBFA8; } }
L_003EBF78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBF80u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 488u, depth + 1u); else { c.pc = 0x003EB7C0u; return; } if (c.pc != 0x003EBF80u) [[unlikely]] return; }
L_003EBF80:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBF94u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 491u, depth + 1u); else { c.pc = 0x003EB7E8u; return; } if (c.pc != 0x003EBF94u) [[unlikely]] return; }
L_003EBF94:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBFA4u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 246u, depth + 1u); else { c.pc = 0x00406D30u; return; } if (c.pc != 0x003EBFA4u) [[unlikely]] return; }
L_003EBFA4:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_003EBFA8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 152u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 168u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_003EBFC0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 152u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 160u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 168u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBFE8u); c.r[19].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 392u, depth + 1u); else { c.pc = 0x003EABF0u; return; } if (c.pc != 0x003EBFE8u) [[unlikely]] return; }
L_003EBFE8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0])));  [[clang::musttail]] return unit_00BB(c, 3u, depth); }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBFFCu); set32(c.r[4], c.r[4].w[0] + 31088u);  if (depth < kMaxDepth) unit_00BB(c, 314u, depth + 1u); else { c.pc = 0x003EE380u; return; } if (c.pc != 0x003EBFFCu) [[unlikely]] return; }
L_003EBFFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { [[clang::musttail]] return unit_00BB(c, 8u, depth); } }
    [[clang::musttail]] return unit_00BB(c, 2u, depth);
}

}
