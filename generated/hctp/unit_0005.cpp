#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0005[4096] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 5, 0, 6, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 11, 0, 0, 12, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 19, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 22, 0, 23, 0, 24, 0, 25, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 29, 0,
    30, 0, 0, 31, 0, 0, 32, 0, 33, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 38, 0,
    39, 0, 40, 0, 41, 0, 42, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 45, 0, 46, 0, 47, 0, 48, 0, 49, 0, 50, 0,
    51, 0, 52, 0, 53, 0, 54, 0, 55, 0, 56, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 61, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 64, 0, 0, 0, 0,
    65, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0,
    70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    78, 0, 0, 0, 0, 79, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 85, 0, 0, 0, 0, 0, 86, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0,
    0, 0, 91, 0, 92, 0, 93, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 97, 0, 98, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 102, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0,
    0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 110, 0, 111, 0, 0, 0, 112, 0,
    113, 0, 114, 0, 115, 0, 116, 0, 0, 0, 117, 0, 118, 0, 119, 0, 120, 0, 121, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    123, 0, 124, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 128, 0, 129, 0, 0, 0, 0, 0, 0, 0, 130, 0,
    0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 134, 0, 135, 0, 0, 136, 137, 0, 138, 0, 0, 0,
    139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 141, 0, 142, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 145, 0, 146, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 148, 0, 0, 149, 0, 0,
    0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 155, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0,
    0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0,
    0, 0, 0, 0, 0, 0, 0, 166, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 169, 0, 170, 0, 171, 0, 172, 0, 0, 0, 173, 0,
    174, 0, 0, 0, 0, 0, 0, 0, 175, 0, 176, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0,
    0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 181, 0, 182, 0, 0, 183, 184, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0,
    0, 0, 0, 0, 195, 0, 196, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 210, 0,
    0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 213, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219,
    0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 224, 0,
    0, 0, 225, 0, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0,
    0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 0, 237, 0, 0, 0, 238, 0,
    0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0,
    0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 0, 257, 0, 0,
    0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 0, 264, 0,
    0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0,
    272, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 274, 275, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 278, 0, 0, 0, 279, 0, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0,
    0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0, 0, 0, 289, 0, 0, 0, 290, 0, 0, 0, 0, 291, 0, 0,
    0, 292, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 294, 0, 0, 0, 295, 0, 0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 0, 0, 298, 0,
    0, 0, 299, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 314, 0, 315, 0, 0, 0, 0, 0, 316, 0, 0, 0, 317, 0, 0, 0,
    318, 0, 319, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0,
    0, 0, 325, 0, 0, 0, 0, 0, 326, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0,
    331, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 335, 0, 0, 0, 336, 0, 0, 0, 0,
    337, 0, 0, 0, 338, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0, 0, 342, 0, 0, 0, 343, 0, 0, 0,
    0, 344, 0, 0, 0, 345, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0,
    350, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 353, 0, 0, 0, 354, 0, 0, 0, 0, 0, 355, 0, 0, 0, 356, 0,
    0, 0, 357, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 362,
    0, 0, 0, 0, 363, 0, 0, 0, 364, 0, 0, 0, 0, 0, 365, 0, 0, 0, 366, 0, 0, 0, 367, 0, 0, 0, 368, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371,
    0, 0, 0, 0, 372, 0, 0, 0, 0, 373, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 377, 0, 0, 0, 0, 378, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0,
    0, 0, 0, 0, 381, 0, 0, 0, 0, 382, 0, 0, 383, 0, 0, 384, 0, 0, 0, 0, 0, 385, 0, 0, 0, 386, 0, 0, 0, 0, 0, 387,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0,
    0, 0, 0, 390, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 392, 0, 0, 0, 393, 0, 0, 0, 394, 0, 0, 0, 0, 395, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 399, 0, 0, 0, 400, 0, 0,
    0, 401, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 403, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 408, 0, 409, 0, 0, 0, 0,
    410, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0,
    0, 415, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0,
    421, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 435, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0,
    0, 0, 447, 0, 0, 0, 0, 448, 0, 0, 0, 449, 0, 0, 0, 0, 450, 0, 0, 0, 451, 0, 0, 0, 0, 452, 0, 0, 0, 453, 0, 0,
    0, 0, 454, 0, 0, 0, 455, 0, 0, 0, 0, 456, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 459,
    0, 0, 0, 0, 460, 0, 0, 0, 461, 0, 0, 0, 462, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 465, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 467, 0, 0, 0, 0, 468, 0, 0, 0, 469,
    0, 0, 0, 470, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 473, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0005(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00114000;
    case 2u: goto L_00114014;
    case 3u: goto L_00114034;
    case 4u: goto L_00114040;
    case 5u: goto L_00114044;
    case 6u: goto L_0011404C;
    case 7u: goto L_00114060;
    case 8u: goto L_00114098;
    case 9u: goto L_001140C4;
    case 10u: goto L_001140D8;
    case 11u: goto L_00114108;
    case 12u: goto L_00114114;
    case 13u: goto L_00114120;
    case 14u: goto L_00114138;
    case 15u: goto L_00114140;
    case 16u: goto L_00114190;
    case 17u: goto L_001141A8;
    case 18u: goto L_001141C0;
    case 19u: goto L_001141C8;
    case 20u: goto L_001141D0;
    case 21u: goto L_001141E0;
    case 22u: goto L_00114208;
    case 23u: goto L_00114210;
    case 24u: goto L_00114218;
    case 25u: goto L_00114220;
    case 26u: goto L_00114228;
    case 27u: goto L_00114258;
    case 28u: goto L_00114270;
    case 29u: goto L_00114278;
    case 30u: goto L_00114280;
    case 31u: goto L_0011428C;
    case 32u: goto L_00114298;
    case 33u: goto L_001142A0;
    case 34u: goto L_001142A8;
    case 35u: goto L_001142B8;
    case 36u: goto L_001142CC;
    case 37u: goto L_001142F0;
    case 38u: goto L_001142F8;
    case 39u: goto L_00114300;
    case 40u: goto L_00114308;
    case 41u: goto L_00114310;
    case 42u: goto L_00114318;
    case 43u: goto L_00114320;
    case 44u: goto L_00114344;
    case 45u: goto L_00114350;
    case 46u: goto L_00114358;
    case 47u: goto L_00114360;
    case 48u: goto L_00114368;
    case 49u: goto L_00114370;
    case 50u: goto L_00114378;
    case 51u: goto L_00114380;
    case 52u: goto L_00114388;
    case 53u: goto L_00114390;
    case 54u: goto L_00114398;
    case 55u: goto L_001143A0;
    case 56u: goto L_001143A8;
    case 57u: goto L_001143B0;
    case 58u: goto L_001143C0;
    case 59u: goto L_001143D4;
    case 60u: goto L_001143E4;
    case 61u: goto L_001143F0;
    case 62u: goto L_00114440;
    case 63u: goto L_00114464;
    case 64u: goto L_0011446C;
    case 65u: goto L_00114480;
    case 66u: goto L_00114498;
    case 67u: goto L_001144CC;
    case 68u: goto L_001144D4;
    case 69u: goto L_001144E8;
    case 70u: goto L_00114500;
    case 71u: goto L_00114548;
    case 72u: goto L_00114550;
    case 73u: goto L_00114560;
    case 74u: goto L_00114578;
    case 75u: goto L_001145A0;
    case 76u: goto L_001145BC;
    case 77u: goto L_00114600;
    case 78u: goto L_00114700;
    case 79u: goto L_00114714;
    case 80u: goto L_0011471C;
    case 81u: goto L_00114740;
    case 82u: goto L_00114840;
    case 83u: goto L_0011493C;
    case 84u: goto L_00114958;
    case 85u: goto L_00114960;
    case 86u: goto L_00114978;
    case 87u: goto L_001149A8;
    case 88u: goto L_001149C0;
    case 89u: goto L_001149E4;
    case 90u: goto L_001149F4;
    case 91u: goto L_00114A08;
    case 92u: goto L_00114A10;
    case 93u: goto L_00114A18;
    case 94u: goto L_00114A28;
    case 95u: goto L_00114A50;
    case 96u: goto L_00114A68;
    case 97u: goto L_00114A90;
    case 98u: goto L_00114A98;
    case 99u: goto L_00114AA0;
    case 100u: goto L_00114AC4;
    case 101u: goto L_00114AD8;
    case 102u: goto L_00114B18;
    case 103u: goto L_00114B24;
    case 104u: goto L_00114B34;
    case 105u: goto L_00114B48;
    case 106u: goto L_00114B60;
    case 107u: goto L_00114B74;
    case 108u: goto L_00114B90;
    case 109u: goto L_00114BD8;
    case 110u: goto L_00114BE0;
    case 111u: goto L_00114BE8;
    case 112u: goto L_00114BF8;
    case 113u: goto L_00114C00;
    case 114u: goto L_00114C08;
    case 115u: goto L_00114C10;
    case 116u: goto L_00114C18;
    case 117u: goto L_00114C28;
    case 118u: goto L_00114C30;
    case 119u: goto L_00114C38;
    case 120u: goto L_00114C40;
    case 121u: goto L_00114C48;
    case 122u: goto L_00114C58;
    case 123u: goto L_00114C80;
    case 124u: goto L_00114C88;
    case 125u: goto L_00114C90;
    case 126u: goto L_00114CA4;
    case 127u: goto L_00114CC8;
    case 128u: goto L_00114CD0;
    case 129u: goto L_00114CD8;
    case 130u: goto L_00114CF8;
    case 131u: goto L_00114D10;
    case 132u: goto L_00114D30;
    case 133u: goto L_00114D48;
    case 134u: goto L_00114D50;
    case 135u: goto L_00114D58;
    case 136u: goto L_00114D64;
    case 137u: goto L_00114D68;
    case 138u: goto L_00114D70;
    case 139u: goto L_00114D80;
    case 140u: goto L_00114DA8;
    case 141u: goto L_00114DB0;
    case 142u: goto L_00114DB8;
    case 143u: goto L_00114DC0;
    case 144u: goto L_00114DE8;
    case 145u: goto L_00114DF0;
    case 146u: goto L_00114DF8;
    case 147u: goto L_00114E4C;
    case 148u: goto L_00114E68;
    case 149u: goto L_00114E74;
    case 150u: goto L_00114E88;
    case 151u: goto L_00114EA0;
    case 152u: goto L_00114EB4;
    case 153u: goto L_00114EC0;
    case 154u: goto L_00114ED8;
    case 155u: goto L_00114F10;
    case 156u: goto L_00114F18;
    case 157u: goto L_00114F4C;
    case 158u: goto L_00114F54;
    case 159u: goto L_00114F70;
    case 160u: goto L_00114F88;
    case 161u: goto L_00114FA0;
    case 162u: goto L_00114FA8;
    case 163u: goto L_00114FD0;
    case 164u: goto L_00114FE4;
    case 165u: goto L_00114FF8;
    case 166u: goto L_0011501C;
    case 167u: goto L_00115024;
    case 168u: goto L_00115048;
    case 169u: goto L_00115050;
    case 170u: goto L_00115058;
    case 171u: goto L_00115060;
    case 172u: goto L_00115068;
    case 173u: goto L_00115078;
    case 174u: goto L_00115080;
    case 175u: goto L_001150A0;
    case 176u: goto L_001150A8;
    case 177u: goto L_001150B0;
    case 178u: goto L_001150F8;
    case 179u: goto L_00115110;
    case 180u: goto L_00115128;
    case 181u: goto L_00115130;
    case 182u: goto L_00115138;
    case 183u: goto L_00115144;
    case 184u: goto L_00115148;
    case 185u: goto L_00115150;
    case 186u: goto L_00115160;
    case 187u: goto L_00115188;
    case 188u: goto L_001151B0;
    case 189u: goto L_001151C4;
    case 190u: goto L_001151D4;
    case 191u: goto L_001151E0;
    case 192u: goto L_00115210;
    case 193u: goto L_00115230;
    case 194u: goto L_00115270;
    case 195u: goto L_00115290;
    case 196u: goto L_00115298;
    case 197u: goto L_001152B8;
    case 198u: goto L_001152C8;
    case 199u: goto L_00115320;
    case 200u: goto L_00115458;
    case 201u: goto L_001154CC;
    case 202u: goto L_0011554C;
    case 203u: goto L_00115588;
    case 204u: goto L_001155EC;
    case 205u: goto L_00115624;
    case 206u: goto L_00115634;
    case 207u: goto L_00115648;
    case 208u: goto L_00115660;
    case 209u: goto L_00115670;
    case 210u: goto L_00115678;
    case 211u: goto L_00115684;
    case 212u: goto L_001156B0;
    case 213u: goto L_001156B8;
    case 214u: goto L_001156C8;
    case 215u: goto L_00115700;
    case 216u: goto L_00115728;
    case 217u: goto L_00115750;
    case 218u: goto L_00115768;
    case 219u: goto L_001157FC;
    case 220u: goto L_0011580C;
    case 221u: goto L_00115840;
    case 222u: goto L_0011584C;
    case 223u: goto L_00115864;
    case 224u: goto L_00115878;
    case 225u: goto L_00115888;
    case 226u: goto L_0011589C;
    case 227u: goto L_001158AC;
    case 228u: goto L_001158C0;
    case 229u: goto L_001158D0;
    case 230u: goto L_001158E4;
    case 231u: goto L_001158F4;
    case 232u: goto L_00115908;
    case 233u: goto L_00115918;
    case 234u: goto L_00115930;
    case 235u: goto L_00115944;
    case 236u: goto L_00115954;
    case 237u: goto L_00115968;
    case 238u: goto L_00115978;
    case 239u: goto L_0011598C;
    case 240u: goto L_0011599C;
    case 241u: goto L_001159B0;
    case 242u: goto L_001159C0;
    case 243u: goto L_001159D0;
    case 244u: goto L_001159E4;
    case 245u: goto L_001159F4;
    case 246u: goto L_00115A24;
    case 247u: goto L_00115A38;
    case 248u: goto L_00115A50;
    case 249u: goto L_00115A64;
    case 250u: goto L_00115A74;
    case 251u: goto L_00115A88;
    case 252u: goto L_00115A98;
    case 253u: goto L_00115AAC;
    case 254u: goto L_00115ABC;
    case 255u: goto L_00115AD0;
    case 256u: goto L_00115AE0;
    case 257u: goto L_00115AF4;
    case 258u: goto L_00115B04;
    case 259u: goto L_00115B1C;
    case 260u: goto L_00115B30;
    case 261u: goto L_00115B40;
    case 262u: goto L_00115B54;
    case 263u: goto L_00115B64;
    case 264u: goto L_00115B78;
    case 265u: goto L_00115B88;
    case 266u: goto L_00115B98;
    case 267u: goto L_00115BA8;
    case 268u: goto L_00115BBC;
    case 269u: goto L_00115BCC;
    case 270u: goto L_00115BE0;
    case 271u: goto L_00115BF0;
    case 272u: goto L_00115C00;
    case 273u: goto L_00115C14;
    case 274u: goto L_00115C38;
    case 275u: goto L_00115C3C;
    case 276u: goto L_00115C4C;
    case 277u: goto L_00115C5C;
    case 278u: goto L_00115C84;
    case 279u: goto L_00115C94;
    case 280u: goto L_00115CA8;
    case 281u: goto L_00115CB8;
    case 282u: goto L_00115CD0;
    case 283u: goto L_00115CE4;
    case 284u: goto L_00115CF4;
    case 285u: goto L_00115D08;
    case 286u: goto L_00115D18;
    case 287u: goto L_00115D2C;
    case 288u: goto L_00115D3C;
    case 289u: goto L_00115D50;
    case 290u: goto L_00115D60;
    case 291u: goto L_00115D74;
    case 292u: goto L_00115D84;
    case 293u: goto L_00115D9C;
    case 294u: goto L_00115DB0;
    case 295u: goto L_00115DC0;
    case 296u: goto L_00115DD4;
    case 297u: goto L_00115DE4;
    case 298u: goto L_00115DF8;
    case 299u: goto L_00115E08;
    case 300u: goto L_00115E18;
    case 301u: goto L_00115E28;
    case 302u: goto L_00115E38;
    case 303u: goto L_00115E48;
    case 304u: goto L_00115E58;
    case 305u: goto L_00115E68;
    case 306u: goto L_00115E90;
    case 307u: goto L_00115F24;
    case 308u: goto L_00115F34;
    case 309u: goto L_00115F50;
    case 310u: goto L_00115F7C;
    case 311u: goto L_00115FE8;
    case 312u: goto L_00116014;
    case 313u: goto L_00116030;
    case 314u: goto L_00116040;
    case 315u: goto L_00116048;
    case 316u: goto L_00116060;
    case 317u: goto L_00116070;
    case 318u: goto L_00116080;
    case 319u: goto L_00116088;
    case 320u: goto L_001160A0;
    case 321u: goto L_001160B4;
    case 322u: goto L_001160C4;
    case 323u: goto L_001160E0;
    case 324u: goto L_001160F0;
    case 325u: goto L_00116108;
    case 326u: goto L_00116120;
    case 327u: goto L_00116130;
    case 328u: goto L_00116140;
    case 329u: goto L_00116164;
    case 330u: goto L_00116174;
    case 331u: goto L_00116180;
    case 332u: goto L_00116194;
    case 333u: goto L_001161B0;
    case 334u: goto L_001161C8;
    case 335u: goto L_001161DC;
    case 336u: goto L_001161EC;
    case 337u: goto L_00116200;
    case 338u: goto L_00116210;
    case 339u: goto L_00116228;
    case 340u: goto L_0011623C;
    case 341u: goto L_0011624C;
    case 342u: goto L_00116260;
    case 343u: goto L_00116270;
    case 344u: goto L_00116284;
    case 345u: goto L_00116294;
    case 346u: goto L_001162A4;
    case 347u: goto L_001162C4;
    case 348u: goto L_001162D4;
    case 349u: goto L_001162F0;
    case 350u: goto L_00116300;
    case 351u: goto L_00116310;
    case 352u: goto L_0011632C;
    case 353u: goto L_00116340;
    case 354u: goto L_00116350;
    case 355u: goto L_00116368;
    case 356u: goto L_00116378;
    case 357u: goto L_00116388;
    case 358u: goto L_00116398;
    case 359u: goto L_001163C0;
    case 360u: goto L_001163D0;
    case 361u: goto L_001163E0;
    case 362u: goto L_001163FC;
    case 363u: goto L_00116410;
    case 364u: goto L_00116420;
    case 365u: goto L_00116438;
    case 366u: goto L_00116448;
    case 367u: goto L_00116458;
    case 368u: goto L_00116468;
    case 369u: goto L_00116498;
    case 370u: goto L_00116534;
    case 371u: goto L_0011657C;
    case 372u: goto L_00116590;
    case 373u: goto L_001165A4;
    case 374u: goto L_001165B4;
    case 375u: goto L_001165D0;
    case 376u: goto L_0011661C;
    case 377u: goto L_00116630;
    case 378u: goto L_00116644;
    case 379u: goto L_00116654;
    case 380u: goto L_00116678;
    case 381u: goto L_00116690;
    case 382u: goto L_001166A4;
    case 383u: goto L_001166B0;
    case 384u: goto L_001166BC;
    case 385u: goto L_001166D4;
    case 386u: goto L_001166E4;
    case 387u: goto L_001166FC;
    case 388u: goto L_00116740;
    case 389u: goto L_00116778;
    case 390u: goto L_0011678C;
    case 391u: goto L_001167A4;
    case 392u: goto L_001167B8;
    case 393u: goto L_001167C8;
    case 394u: goto L_001167D8;
    case 395u: goto L_001167EC;
    case 396u: goto L_00116824;
    case 397u: goto L_00116838;
    case 398u: goto L_00116850;
    case 399u: goto L_00116864;
    case 400u: goto L_00116874;
    case 401u: goto L_00116884;
    case 402u: goto L_00116898;
    case 403u: goto L_001168B0;
    case 404u: goto L_001168C0;
    case 405u: goto L_001168E4;
    case 406u: goto L_00116910;
    case 407u: goto L_00116958;
    case 408u: goto L_00116964;
    case 409u: goto L_0011696C;
    case 410u: goto L_00116980;
    case 411u: goto L_00116994;
    case 412u: goto L_001169B0;
    case 413u: goto L_001169C4;
    case 414u: goto L_001169E8;
    case 415u: goto L_00116A04;
    case 416u: goto L_00116A18;
    case 417u: goto L_00116A50;
    case 418u: goto L_00116AA0;
    case 419u: goto L_00116AB0;
    case 420u: goto L_00116AF0;
    case 421u: goto L_00116B00;
    case 422u: goto L_00116B18;
    case 423u: goto L_00116B48;
    case 424u: goto L_00116BE0;
    case 425u: goto L_00116C18;
    case 426u: goto L_00116CA4;
    case 427u: goto L_00116CD0;
    case 428u: goto L_00116D70;
    case 429u: goto L_0011700C;
    case 430u: goto L_00117070;
    case 431u: goto L_001171B0;
    case 432u: goto L_00117388;
    case 433u: goto L_0011746C;
    case 434u: goto L_00117568;
    case 435u: goto L_0011768C;
    case 436u: goto L_00117694;
    case 437u: goto L_00117750;
    case 438u: goto L_001178B0;
    case 439u: goto L_00117A58;
    case 440u: goto L_00117AA8;
    case 441u: goto L_00117ADC;
    case 442u: goto L_00117B18;
    case 443u: goto L_00117B98;
    case 444u: goto L_00117BF0;
    case 445u: goto L_00117C48;
    case 446u: goto L_00117C70;
    case 447u: goto L_00117C88;
    case 448u: goto L_00117C9C;
    case 449u: goto L_00117CAC;
    case 450u: goto L_00117CC0;
    case 451u: goto L_00117CD0;
    case 452u: goto L_00117CE4;
    case 453u: goto L_00117CF4;
    case 454u: goto L_00117D08;
    case 455u: goto L_00117D18;
    case 456u: goto L_00117D2C;
    case 457u: goto L_00117D3C;
    case 458u: goto L_00117D68;
    case 459u: goto L_00117D7C;
    case 460u: goto L_00117D90;
    case 461u: goto L_00117DA0;
    case 462u: goto L_00117DB0;
    case 463u: goto L_00117DC4;
    case 464u: goto L_00117E1C;
    case 465u: goto L_00117E2C;
    case 466u: goto L_00117E44;
    case 467u: goto L_00117E58;
    case 468u: goto L_00117E6C;
    case 469u: goto L_00117E7C;
    case 470u: goto L_00117E8C;
    case 471u: goto L_00117E9C;
    case 472u: goto L_00117EC8;
    case 473u: goto L_00117F88;
    case 474u: goto L_00117F98;
    case 475u: goto L_00117FD8;
    default: bad_entry(c, 0x00114000u); return;
    }
L_00114000:
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00113FF0u | kUnwind; return; } [[clang::musttail]] return unit_0004(c, 490u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[4].w[0] - c.r[3].w[0]);  if (t) { goto L_0011401C; } }
L_00114014:
    set32(c.r[3], c.r[16].w[0] - 11u);
    set32(c.r[2], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 2;
L_0011401C:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(81ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);  if (t) { goto L_0011403C; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114034u); set32(c.r[4], c.r[4].w[0] + 16000u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x00114034u) [[unlikely]] return; }
L_00114034:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001140C4; } }
L_0011403C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114044u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 290u, depth + 1u); else { c.pc = 0x0010E468u; return; } if (c.pc != 0x00114044u) [[unlikely]] return; }
    goto L_00114044;
L_00114040:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00114044:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011404Cu);  if (depth < kMaxDepth) unit_0003(c, 304u, depth + 1u); else { c.pc = 0x0010E608u; return; } if (c.pc != 0x0011404Cu) [[unlikely]] return; }
L_0011404C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[3].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = ld8((c.r[17].w[0]));  if (t) { goto L_00114084; } }
    c.r[5].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 1;
L_00114060:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[4].d[0] = ld8((c.r[17].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00114060u | kUnwind; return; } goto L_00114060; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0011408C; } }
L_00114084:
    c.r[5].d[0] = ld8((c.r[16].w[0]));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 2;
L_0011408C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));  goto L_001140B8; }
    c.budget -= 1;
L_00114098:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00114098u | kUnwind; return; } goto L_00114098; } }
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001140B8:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001140C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0004(c, 472u, depth + 1u); else { c.pc = 0x00113E28u; return; } if (c.pc != 0x001140C4u) [[unlikely]] return; }
L_001140C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001140D8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00110000u);
    set32(c.r[16], c.r[16].w[0] + 17920u);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[2].w[0] - 22376u), c.r[17].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114108u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0002(c, 394u, depth + 1u); else { c.pc = 0x0010B8D0u; return; } if (c.pc != 0x00114108u) [[unlikely]] return; }
L_00114108:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114114u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0002(c, 394u, depth + 1u); else { c.pc = 0x0010B8D0u; return; } if (c.pc != 0x00114114u) [[unlikely]] return; }
L_00114114:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114120u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0002(c, 394u, depth + 1u); else { c.pc = 0x0010B8D0u; return; } if (c.pc != 0x00114120u) [[unlikely]] return; }
L_00114120:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00114138:
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.budget -= 2;
L_00114140:
    set32(c.r[4], c.r[6].w[0] - 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_00114160; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65535ull;  if (t) { goto L_001141AC; } }
L_00114160:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 22368u);
    c.r[4].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[3].w[0]), c.r[5].w[0]);  if (t) { goto L_00114198; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00110000u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114190u); set32(c.r[5], c.r[5].w[0] + 18496u);  if (depth < kMaxDepth) unit_0002(c, 394u, depth + 1u); else { c.pc = 0x0010B8D0u; return; } if (c.pc != 0x00114190u) [[unlikely]] return; }
L_00114190:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001141AC; } }
L_00114198:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00110000u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001141A8u); set32(c.r[5], c.r[5].w[0] + 18496u);  if (depth < kMaxDepth) unit_0002(c, 396u, depth + 1u); else { c.pc = 0x0010B8E0u; return; } if (c.pc != 0x001141A8u) [[unlikely]] return; }
L_001141A8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001141AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001141C0:
    set32(c.r[3], 0u + 90u);
    c.budget -= 1;
    c.pc = 0x001141C8u; syscall(c, 0x001141C4u); if (c.pc != 0x001141C8u) return;
    c.budget -= 1;
L_001141C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001141D0:
    set32(c.r[6], c.r[6].w[0] >> 2);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_00114200; } }
    c.budget -= 1;
L_001141E0:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[7].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001141E0u | kUnwind; return; } goto L_001141E0; } }
L_00114200:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00114208:
    set32(c.r[3], 0u + 91u);
    c.budget -= 1;
    c.pc = 0x00114210u; syscall(c, 0x0011420Cu); if (c.pc != 0x00114210u) return;
    c.budget -= 1;
L_00114210:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00114218:
    set32(c.r[3], 0u + 116u);
    c.budget -= 1;
    c.pc = 0x00114220u; syscall(c, 0x0011421Cu); if (c.pc != 0x00114220u) return;
    c.budget -= 1;
L_00114220:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00114228:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    set32(c.r[18], 0u + 3u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[16], c.r[2].w[0] - 22296u);
    set32(c.r[4], ld32((c.r[2].w[0] - 22296u)));
    set32(c.r[17], c.r[16].w[0] + 24u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114258u); set32(c.r[5], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0005(c, 24u, depth + 1u); else { c.pc = 0x00114218u; return; } if (c.pc != 0x00114258u) [[unlikely]] return; }
L_00114258:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80070000u);
    set32(c.r[6], 0u + 816u);
    set32(c.r[5], c.r[5].w[0] - 23192u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114270u); c.r[4].d[0] = c.r[4].d[0] | 20480ull;  if (depth < kMaxDepth) unit_0005(c, 18u, depth + 1u); else { c.pc = 0x001141C0u; return; } if (c.pc != 0x00114270u) [[unlikely]] return; }
L_00114270:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114278u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 580u, depth + 1u); else { c.pc = 0x0010BEA0u; return; } if (c.pc != 0x00114278u) [[unlikely]] return; }
L_00114278:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114280u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0002(c, 580u, depth + 1u); else { c.pc = 0x0010BEA0u; return; } if (c.pc != 0x00114280u) [[unlikely]] return; }
L_00114280:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011428Cu); set32(c.r[5], ld32((c.r[16].w[0] + 12u)));  if (depth < kMaxDepth) unit_0005(c, 24u, depth + 1u); else { c.pc = 0x00114218u; return; } if (c.pc != 0x0011428Cu) [[unlikely]] return; }
L_0011428C:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114298u); set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (depth < kMaxDepth) unit_0005(c, 24u, depth + 1u); else { c.pc = 0x00114218u; return; } if (c.pc != 0x00114298u) [[unlikely]] return; }
L_00114298:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 2;
L_001142A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001142A8u); set32(c.r[18], c.r[18].w[0] + 1u);  if (depth < kMaxDepth) unit_0005(c, 22u, depth + 1u); else { c.pc = 0x00114208u; return; } if (c.pc != 0x001142A8u) [[unlikely]] return; }
L_001142A8:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001142B8u); set32(c.r[17], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_0005(c, 24u, depth + 1u); else { c.pc = 0x00114218u; return; } if (c.pc != 0x001142B8u) [[unlikely]] return; }
L_001142B8:
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001142A0u | kUnwind; return; } goto L_001142A0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001142CCu); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0005(c, 22u, depth + 1u); else { c.pc = 0x00114208u; return; } if (c.pc != 0x001142CCu) [[unlikely]] return; }
L_001142CC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[3].w[0] - 22304u), c.r[2].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001142F0:
    set32(c.r[3], 0u + 85u);
    c.budget -= 1;
    c.pc = 0x001142F8u; syscall(c, 0x001142F4u); if (c.pc != 0x001142F8u) return;
    c.budget -= 1;
L_001142F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00114300:
    set32(c.r[3], 0u - 85u);
    c.budget -= 1;
    c.pc = 0x00114308u; syscall(c, 0x00114304u); if (c.pc != 0x00114308u) return;
    c.budget -= 1;
L_00114308:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00114310:
    set32(c.r[3], 0u + 86u);
    c.budget -= 1;
    c.pc = 0x00114318u; syscall(c, 0x00114314u); if (c.pc != 0x00114318u) return;
    c.budget -= 1;
L_00114318:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00114320:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], c.r[4].w[0] - 13u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(35ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0011433C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00114344; } }
L_0011433C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114344u);  if (depth < kMaxDepth) unit_0005(c, 41u, depth + 1u); else { c.pc = 0x00114310u; return; } if (c.pc != 0x00114344u) [[unlikely]] return; }
L_00114344:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00114350:
    set32(c.r[3], 0u - 86u);
    c.budget -= 1;
    c.pc = 0x00114358u; syscall(c, 0x00114354u); if (c.pc != 0x00114358u) return;
    c.budget -= 1;
L_00114358:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00114360:
    set32(c.r[3], 0u + 87u);
    c.budget -= 1;
    c.pc = 0x00114368u; syscall(c, 0x00114364u); if (c.pc != 0x00114368u) return;
    c.budget -= 1;
L_00114368:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00114370:
    set32(c.r[3], 0u - 87u);
    c.budget -= 1;
    c.pc = 0x00114378u; syscall(c, 0x00114374u); if (c.pc != 0x00114378u) return;
    c.budget -= 1;
L_00114378:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00114380:
    set32(c.r[3], 0u + 88u);
    c.budget -= 1;
    c.pc = 0x00114388u; syscall(c, 0x00114384u); if (c.pc != 0x00114388u) return;
    c.budget -= 1;
L_00114388:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00114390:
    set32(c.r[3], 0u - 88u);
    c.budget -= 1;
    c.pc = 0x00114398u; syscall(c, 0x00114394u); if (c.pc != 0x00114398u) return;
    c.budget -= 1;
L_00114398:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001143A0:
    set32(c.r[3], 0u + 89u);
    c.budget -= 1;
    c.pc = 0x001143A8u; syscall(c, 0x001143A4u); if (c.pc != 0x001143A8u) return;
    c.budget -= 1;
L_001143A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001143B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001143C0u);  if (depth < kMaxDepth) unit_0003(c, 17u, depth + 1u); else { c.pc = 0x0010C080u; return; } if (c.pc != 0x001143C0u) [[unlikely]] return; }
L_001143C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001143DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001143D4u);  if (depth < kMaxDepth) unit_0005(c, 61u, depth + 1u); else { c.pc = 0x001143F0u; return; } if (c.pc != 0x001143D4u) [[unlikely]] return; }
L_001143D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_001143E8; } }
L_001143DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001143E4u);  if (depth < kMaxDepth) unit_0003(c, 19u, depth + 1u); else { c.pc = 0x0010C090u; return; } if (c.pc != 0x001143E4u) [[unlikely]] return; }
L_001143E4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001143E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001143F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[4], c.r[4].w[0] + 16032u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[16], c.r[18].w[0] - 21608u);
    set32(c.r[5], ld32((c.r[18].w[0] - 21608u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[9], ld32((c.r[16].w[0] + 8u)));
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[7], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[9], c.r[7].w[0] + c.r[9].w[0]);
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[9], c.r[9].w[0] - 1u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114440u); set32(c.r[7], c.r[7].w[0] - 1u);  if (depth < kMaxDepth) unit_0003(c, 241u, depth + 1u); else { c.pc = 0x0010DC88u; return; } if (c.pc != 0x00114440u) [[unlikely]] return; }
L_00114440:
    mtc0(c, 6u, 0u);
    set32(c.r[17], ld32((c.r[18].w[0] - 21608u)));
    c.r[2].d[0] = c.r[17].sd[0] < 49ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[25].d[0] = 0ull + 0ull;  if (t) { goto L_0011446C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114464u); set32(c.r[4], c.r[4].w[0] + 16088u);  if (depth < kMaxDepth) unit_0003(c, 241u, depth + 1u); else { c.pc = 0x0010DC88u; return; } if (c.pc != 0x00114464u) [[unlikely]] return; }
L_00114464:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011446Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0005(c, 163u, depth + 1u); else { c.pc = 0x00114FD0u; return; } if (c.pc != 0x0011446Cu) [[unlikely]] return; }
L_0011446C:
    c.r[2].d[0] = c.r[25].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], ld32((c.r[16].w[0] + 16u)));  if (t) { goto L_001144A8; } }
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 2;
L_00114480:
    c.r[4].d[0] = c.r[25].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[8], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114498u); set32(c.r[16], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0005(c, 41u, depth + 1u); else { c.pc = 0x00114310u; return; } if (c.pc != 0x00114498u) [[unlikely]] return; }
L_00114498:
    set32(c.r[25], c.r[25].w[0] + 1u);
    c.r[2].d[0] = c.r[25].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00114480u | kUnwind; return; } goto L_00114480; }
L_001144A8:
    set32(c.r[16], c.r[18].w[0] - 21608u);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[17], c.r[25].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = c.r[17].sd[0] < 49ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = c.r[25].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;  if (t) { goto L_001144D8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001144CCu); set32(c.r[4], c.r[4].w[0] + 16112u);  if (depth < kMaxDepth) unit_0003(c, 241u, depth + 1u); else { c.pc = 0x0010DC88u; return; } if (c.pc != 0x001144CCu) [[unlikely]] return; }
L_001144CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001144D4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0005(c, 163u, depth + 1u); else { c.pc = 0x00114FD0u; return; } if (c.pc != 0x001144D4u) [[unlikely]] return; }
L_001144D4:
    c.r[2].d[0] = c.r[25].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_001144D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_00114510; } }
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 2;
L_001144E8:
    c.r[4].d[0] = c.r[25].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[8], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114500u); set32(c.r[16], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0005(c, 41u, depth + 1u); else { c.pc = 0x00114310u; return; } if (c.pc != 0x00114500u) [[unlikely]] return; }
L_00114500:
    set32(c.r[25], c.r[25].w[0] + 1u);
    c.r[2].d[0] = c.r[25].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001144E8u | kUnwind; return; } goto L_001144E8; }
L_00114510:
    set32(c.r[16], c.r[18].w[0] - 21608u);
    st32((c.r[16].w[0] + 12u), c.r[25].w[0]);
    mtc0(c, 6u, c.r[25].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 7;
    if (c.r[2].sd[0] <= 0) { c.r[16].d[0] = c.r[25].d[0] + 0ull;  goto L_0011458C; }
    set32(c.r[17], c.r[25].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].sd[0] < 49ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[25].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;  if (t) { goto L_00114554; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114548u); set32(c.r[4], c.r[4].w[0] + 16136u);  if (depth < kMaxDepth) unit_0003(c, 241u, depth + 1u); else { c.pc = 0x0010DC88u; return; } if (c.pc != 0x00114548u) [[unlikely]] return; }
L_00114548:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114550u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0005(c, 163u, depth + 1u); else { c.pc = 0x00114FD0u; return; } if (c.pc != 0x00114550u) [[unlikely]] return; }
L_00114550:
    c.r[2].d[0] = c.r[25].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00114554:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], ld32((c.r[16].w[0] + 24u)));  if (t) { goto L_00114588; } }
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_00114560:
    c.r[4].d[0] = c.r[25].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[8], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114578u); set32(c.r[16], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0005(c, 41u, depth + 1u); else { c.pc = 0x00114310u; return; } if (c.pc != 0x00114578u) [[unlikely]] return; }
L_00114578:
    set32(c.r[25], c.r[25].w[0] + 1u);
    c.r[2].d[0] = c.r[25].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00114560u | kUnwind; return; } goto L_00114560; }
L_00114588:
    c.r[16].d[0] = c.r[25].d[0] + 0ull;
    c.budget -= 1;
L_0011458C:
    c.r[2].d[0] = c.r[16].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[25], c.r[25].w[0] << 13);  if (t) { goto L_001145C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xE0000000u);
    set32(c.r[17], c.r[25].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_001145A0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001145BCu); set32(c.r[16], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_0005(c, 41u, depth + 1u); else { c.pc = 0x00114310u; return; } if (c.pc != 0x001145BCu) [[unlikely]] return; }
L_001145BC:
    c.r[2].d[0] = c.r[16].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 8192u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001145A0u | kUnwind; return; } goto L_001145A0; } }
L_001145C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[2].d[0] = c.r[25].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00114600:
    c.r[26].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[26], c.r[26].w[0] - 4480u);
    st128((c.r[26].w[0] + 16u) & ~15u, c.r[1]);
    st128((c.r[26].w[0] + 32u) & ~15u, c.r[2]);
    st128((c.r[26].w[0] + 48u) & ~15u, c.r[3]);
    st128((c.r[26].w[0] + 64u) & ~15u, c.r[4]);
    st128((c.r[26].w[0] + 80u) & ~15u, c.r[5]);
    st128((c.r[26].w[0] + 96u) & ~15u, c.r[6]);
    st128((c.r[26].w[0] + 112u) & ~15u, c.r[7]);
    st128((c.r[26].w[0] + 128u) & ~15u, c.r[8]);
    st128((c.r[26].w[0] + 144u) & ~15u, c.r[9]);
    st128((c.r[26].w[0] + 160u) & ~15u, c.r[10]);
    st128((c.r[26].w[0] + 176u) & ~15u, c.r[11]);
    st128((c.r[26].w[0] + 192u) & ~15u, c.r[12]);
    st128((c.r[26].w[0] + 208u) & ~15u, c.r[13]);
    st128((c.r[26].w[0] + 224u) & ~15u, c.r[14]);
    st128((c.r[26].w[0] + 240u) & ~15u, c.r[15]);
    st128((c.r[26].w[0] + 256u) & ~15u, c.r[16]);
    st128((c.r[26].w[0] + 272u) & ~15u, c.r[17]);
    st128((c.r[26].w[0] + 288u) & ~15u, c.r[18]);
    st128((c.r[26].w[0] + 304u) & ~15u, c.r[19]);
    st128((c.r[26].w[0] + 320u) & ~15u, c.r[20]);
    st128((c.r[26].w[0] + 336u) & ~15u, c.r[21]);
    st128((c.r[26].w[0] + 352u) & ~15u, c.r[22]);
    st128((c.r[26].w[0] + 368u) & ~15u, c.r[23]);
    st128((c.r[26].w[0] + 384u) & ~15u, c.r[24]);
    st128((c.r[26].w[0] + 400u) & ~15u, c.r[25]);
    st128((c.r[26].w[0] + 448u) & ~15u, c.r[28]);
    st128((c.r[26].w[0] + 464u) & ~15u, c.r[29]);
    st128((c.r[26].w[0] + 480u) & ~15u, c.r[30]);
    st128((c.r[26].w[0] + 496u) & ~15u, c.r[31]);
    c.r[2].d[0] = c.hi.d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[1].w[0] - 3968u), c.r[2].d[0]);
    c.r[2].d[0] = c.hi.d[1];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[1].w[0] - 3960u), c.r[2].d[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[1].w[0] - 3952u), c.r[2].d[0]);
    c.r[2].d[0] = c.lo.d[1];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[1].w[0] - 3944u), c.r[2].d[0]);
    c.r[2].d[0] = c.sa;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[1].w[0] - 3936u), c.r[2].d[0]);
    set32(c.r[4], mfc0(c, 12u, 0u));
    set32(c.r[5], mfc0(c, 13u, 0u));
    set32(c.r[6], mfc0(c, 14u, 0u));
    set32(c.r[7], mfc0(c, 8u, 0u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[8], c.r[8].w[0] - 4480u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[1].w[0] - 3928u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00110000u);
    set32(c.r[1], c.r[1].w[0] + 18176u);
    mtc0(c, 14u, c.r[1].w[0]);
    set32(c.r[1], mfc0(c, 12u, 0u));
    set32(c.r[2], 0u - 2u);
    c.r[1].d[0] = c.r[1].d[0] & c.r[2].d[0];
    mtc0(c, 12u, c.r[1].w[0]);
    c.budget -= 63;
    { const std::uint32_t t = eret(c); c.pc = t; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00114700:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[1], ld32((c.r[1].w[0] - 22376u)));
    c.r[29].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[1].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00114714u); set32(c.r[29], c.r[29].w[0] - 4480u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00114714u) [[unlikely]] return; }
L_00114714:
    set32(c.r[3], 0u - 84u);
    c.budget -= 1;
    c.pc = 0x0011471Cu; syscall(c, 0x00114718u); if (c.pc != 0x0011471Cu) return;
    c.budget -= 1;
L_0011471C:
    c.budget -= 9;
L_00114740:
    set32(c.r[1], mfc0(c, 12u, 0u));
    set32(c.r[26], 0u - 28u);
    c.r[1].d[0] = c.r[1].d[0] & c.r[26].d[0];
    mtc0(c, 12u, c.r[1].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 3928u)));
    mtc0(c, 14u, c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].d[0] = ld64((c.r[2].w[0] - 3968u));
    c.hi.d[0] = c.r[2].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].d[0] = ld64((c.r[2].w[0] - 3960u));
    c.hi.d[1] = c.r[2].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].d[0] = ld64((c.r[2].w[0] - 3952u));
    c.lo.d[0] = c.r[2].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].d[0] = ld64((c.r[2].w[0] - 3944u));
    c.lo.d[1] = c.r[2].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].d[0] = ld64((c.r[2].w[0] - 3936u));
    c.sa = c.r[2].w[0] & 15u;
    c.r[26].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[26], c.r[26].w[0] - 4480u);
    ld128((c.r[26].w[0] + 16u) & ~15u, c.r[1]);
    ld128((c.r[26].w[0] + 32u) & ~15u, c.r[2]);
    ld128((c.r[26].w[0] + 48u) & ~15u, c.r[3]);
    ld128((c.r[26].w[0] + 64u) & ~15u, c.r[4]);
    ld128((c.r[26].w[0] + 80u) & ~15u, c.r[5]);
    ld128((c.r[26].w[0] + 96u) & ~15u, c.r[6]);
    ld128((c.r[26].w[0] + 112u) & ~15u, c.r[7]);
    ld128((c.r[26].w[0] + 128u) & ~15u, c.r[8]);
    ld128((c.r[26].w[0] + 144u) & ~15u, c.r[9]);
    ld128((c.r[26].w[0] + 160u) & ~15u, c.r[10]);
    ld128((c.r[26].w[0] + 176u) & ~15u, c.r[11]);
    ld128((c.r[26].w[0] + 192u) & ~15u, c.r[12]);
    ld128((c.r[26].w[0] + 208u) & ~15u, c.r[13]);
    ld128((c.r[26].w[0] + 224u) & ~15u, c.r[14]);
    ld128((c.r[26].w[0] + 240u) & ~15u, c.r[15]);
    ld128((c.r[26].w[0] + 256u) & ~15u, c.r[16]);
    ld128((c.r[26].w[0] + 272u) & ~15u, c.r[17]);
    ld128((c.r[26].w[0] + 288u) & ~15u, c.r[18]);
    ld128((c.r[26].w[0] + 304u) & ~15u, c.r[19]);
    ld128((c.r[26].w[0] + 320u) & ~15u, c.r[20]);
    ld128((c.r[26].w[0] + 336u) & ~15u, c.r[21]);
    ld128((c.r[26].w[0] + 352u) & ~15u, c.r[22]);
    ld128((c.r[26].w[0] + 368u) & ~15u, c.r[23]);
    ld128((c.r[26].w[0] + 384u) & ~15u, c.r[24]);
    ld128((c.r[26].w[0] + 400u) & ~15u, c.r[25]);
    ld128((c.r[26].w[0] + 448u) & ~15u, c.r[28]);
    ld128((c.r[26].w[0] + 464u) & ~15u, c.r[29]);
    ld128((c.r[26].w[0] + 480u) & ~15u, c.r[30]);
    ld128((c.r[26].w[0] + 496u) & ~15u, c.r[31]);
    set32(c.r[26], mfc0(c, 12u, 0u));
    c.r[26].d[0] = c.r[26].d[0] | 19ull;
    mtc0(c, 12u, c.r[26].w[0]);
    c.budget -= 60;
    { const std::uint32_t t = eret(c); c.pc = t; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00114840:
    c.r[26].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[26], c.r[26].w[0] - 4480u);
    st128((c.r[26].w[0] + 16u) & ~15u, c.r[1]);
    st128((c.r[26].w[0] + 32u) & ~15u, c.r[2]);
    st128((c.r[26].w[0] + 48u) & ~15u, c.r[3]);
    st128((c.r[26].w[0] + 64u) & ~15u, c.r[4]);
    st128((c.r[26].w[0] + 80u) & ~15u, c.r[5]);
    st128((c.r[26].w[0] + 96u) & ~15u, c.r[6]);
    st128((c.r[26].w[0] + 112u) & ~15u, c.r[7]);
    st128((c.r[26].w[0] + 128u) & ~15u, c.r[8]);
    st128((c.r[26].w[0] + 144u) & ~15u, c.r[9]);
    st128((c.r[26].w[0] + 160u) & ~15u, c.r[10]);
    st128((c.r[26].w[0] + 176u) & ~15u, c.r[11]);
    st128((c.r[26].w[0] + 192u) & ~15u, c.r[12]);
    st128((c.r[26].w[0] + 208u) & ~15u, c.r[13]);
    st128((c.r[26].w[0] + 224u) & ~15u, c.r[14]);
    st128((c.r[26].w[0] + 240u) & ~15u, c.r[15]);
    st128((c.r[26].w[0] + 256u) & ~15u, c.r[16]);
    st128((c.r[26].w[0] + 272u) & ~15u, c.r[17]);
    st128((c.r[26].w[0] + 288u) & ~15u, c.r[18]);
    st128((c.r[26].w[0] + 304u) & ~15u, c.r[19]);
    st128((c.r[26].w[0] + 320u) & ~15u, c.r[20]);
    st128((c.r[26].w[0] + 336u) & ~15u, c.r[21]);
    st128((c.r[26].w[0] + 352u) & ~15u, c.r[22]);
    st128((c.r[26].w[0] + 368u) & ~15u, c.r[23]);
    st128((c.r[26].w[0] + 384u) & ~15u, c.r[24]);
    st128((c.r[26].w[0] + 400u) & ~15u, c.r[25]);
    st128((c.r[26].w[0] + 448u) & ~15u, c.r[28]);
    st128((c.r[26].w[0] + 464u) & ~15u, c.r[29]);
    st128((c.r[26].w[0] + 480u) & ~15u, c.r[30]);
    st128((c.r[26].w[0] + 496u) & ~15u, c.r[31]);
    c.r[2].d[0] = c.hi.d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[1].w[0] - 3968u), c.r[2].d[0]);
    c.r[2].d[0] = c.hi.d[1];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[1].w[0] - 3960u), c.r[2].d[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[1].w[0] - 3952u), c.r[2].d[0]);
    c.r[2].d[0] = c.lo.d[1];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[1].w[0] - 3944u), c.r[2].d[0]);
    c.r[2].d[0] = c.sa;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[1].w[0] - 3936u), c.r[2].d[0]);
    set32(c.r[4], mfc0(c, 12u, 0u));
    set32(c.r[5], mfc0(c, 13u, 0u));
    set32(c.r[6], mfc0(c, 14u, 0u));
    set32(c.r[7], mfc0(c, 8u, 0u));
    set32(c.r[8], mfc0(c, 23u, 0u));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[9], c.r[9].w[0] - 4480u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00110000u);
    set32(c.r[1], c.r[1].w[0] + 18748u);
    mtc0(c, 14u, c.r[1].w[0]);
    set32(c.r[1], mfc0(c, 12u, 0u));
    set32(c.r[2], 0u - 2u);
    c.r[1].d[0] = c.r[1].d[0] & c.r[2].d[0];
    mtc0(c, 12u, c.r[1].w[0]);
    c.budget -= 62;
    { const std::uint32_t t = eret(c); c.pc = t; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0011493C:
    c.r[2].d[0] = c.r[5].d[0] & 124ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[1], c.r[1].w[0] + c.r[2].w[0]);
    set32(c.r[1], ld32((c.r[1].w[0] - 22368u)));
    c.r[29].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[1].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00114958u); set32(c.r[29], c.r[29].w[0] - 4480u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00114958u) [[unlikely]] return; }
L_00114958:
    breakpoint(c, 0x00114958u);
    c.budget -= 2;
L_00114960:
    set32(c.r[3], mfc0(c, 12u, 0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  if (t) { goto L_0011499C; } }
    c.budget -= 1;
L_00114978:
    set_interrupts(c, false);
    set32(c.r[2], mfc0(c, 12u, 0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00114978u | kUnwind; return; } goto L_00114978; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_0011499C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_001149A8:
    set32(c.r[2], mfc0(c, 12u, 0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    set_interrupts(c, true);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_001149C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001149E4u); st32((c.r[29].w[0] + 36u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0002(c, 500u, depth + 1u); else { c.pc = 0x0010BC20u; return; } if (c.pc != 0x001149E4u) [[unlikely]] return; }
L_001149E4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001149F4u); st32((c.r[3].w[0] - 21552u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0002(c, 500u, depth + 1u); else { c.pc = 0x0010BC20u; return; } if (c.pc != 0x001149F4u) [[unlikely]] return; }
L_001149F4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    st32((c.r[3].w[0] - 21548u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00114A08:
    set32(c.r[3], 0u + 90u);
    c.budget -= 1;
    c.pc = 0x00114A10u; syscall(c, 0x00114A0Cu); if (c.pc != 0x00114A10u) return;
    c.budget -= 1;
L_00114A10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00114A18:
    set32(c.r[6], c.r[6].w[0] >> 2);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_00114A48; } }
    c.budget -= 1;
L_00114A28:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[7].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00114A28u | kUnwind; return; } goto L_00114A28; } }
L_00114A48:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00114A50:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[6].d[0]; c.r[2].d[0] = c.r[4].d[0] < c.r[5].d[0] ? 1ull : 0ull;  if (t) { goto L_00114A84; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { if (c.r[2].d[0] == 0) c.r[4].d[0] = 0ull;  goto L_00114A88; }
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 1;
L_00114A68:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[6].d[0]; c.r[2].d[0] = c.r[4].d[0] < c.r[5].d[0] ? 1ull : 0ull;  if (t) { goto L_00114A84; } }
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[4].w[0] + 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00114A68u | kUnwind; return; } goto L_00114A68; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; if (c.r[2].d[0] == 0) c.r[4].d[0] = 0ull;  if (t) { goto L_00114A88; } }
L_00114A84:
    if (c.r[2].d[0] == 0) c.r[4].d[0] = 0ull;
    c.budget -= 1;
L_00114A88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_00114A90:
    set32(c.r[3], 0u + 131u);
    c.budget -= 1;
    c.pc = 0x00114A98u; syscall(c, 0x00114A94u); if (c.pc != 0x00114A98u) return;
    c.budget -= 1;
L_00114A98:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00114AA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], ld32((c.r[2].w[0] - 21576u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], 0u + 4u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114AC4u); set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0005(c, 91u, depth + 1u); else { c.pc = 0x00114A08u; return; } if (c.pc != 0x00114AC4u) [[unlikely]] return; }
L_00114AC4:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00114AD8:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st64((c.r[29].w[0] + 80u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00110000u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00110000u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    set32(c.r[16], c.r[2].w[0] - 21568u);
    st64((c.r[29].w[0] + 96u), c.r[22].d[0]);
    set32(c.r[4], ld32((c.r[2].w[0] - 21568u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114B18u); set32(c.r[5], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0005(c, 109u, depth + 1u); else { c.pc = 0x00114BD8u; return; } if (c.pc != 0x00114B18u) [[unlikely]] return; }
L_00114B18:
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114B24u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_0005(c, 109u, depth + 1u); else { c.pc = 0x00114BD8u; return; } if (c.pc != 0x00114B24u) [[unlikely]] return; }
L_00114B24:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80080000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114B34u); set32(c.r[6], c.r[21].w[0] + 19024u);  if (depth < kMaxDepth) unit_0005(c, 97u, depth + 1u); else { c.pc = 0x00114A90u; return; } if (c.pc != 0x00114B34u) [[unlikely]] return; }
L_00114B34:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80080000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114B48u); set32(c.r[6], c.r[20].w[0] + 18968u);  if (depth < kMaxDepth) unit_0005(c, 97u, depth + 1u); else { c.pc = 0x00114A90u; return; } if (c.pc != 0x00114B48u) [[unlikely]] return; }
L_00114B48:
    set32(c.r[17], c.r[19].w[0] - 524u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], c.r[18].w[0] - 360u);
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == c.r[16].d[0]; c.r[22].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_00114BA8; } }
    c.r[2].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00114B60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[19].w[0] + 4u);  if (t) { goto L_00114B80; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80080000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114B74u); set32(c.r[6], c.r[21].w[0] + 19024u);  if (depth < kMaxDepth) unit_0005(c, 97u, depth + 1u); else { c.pc = 0x00114A90u; return; } if (c.pc != 0x00114B74u) [[unlikely]] return; }
L_00114B74:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[19].w[0] - 524u);  if (t) { goto L_00114B98; } }
L_00114B80:
    set32(c.r[4], c.r[18].w[0] + 4u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80080000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114B90u); set32(c.r[6], c.r[20].w[0] + 18968u);  if (depth < kMaxDepth) unit_0005(c, 97u, depth + 1u); else { c.pc = 0x00114A90u; return; } if (c.pc != 0x00114B90u) [[unlikely]] return; }
L_00114B90:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], c.r[18].w[0] - 360u);
    c.budget -= 2;
L_00114B98:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[16].d[0]; c.r[2].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00114B60u | kUnwind; return; } goto L_00114B60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[22].w[0] - 21576u), c.r[17].w[0]);  if (t) { goto L_00114BAC; } }
L_00114BA8:
    st32((c.r[22].w[0] - 21576u), c.r[17].w[0]);
    c.budget -= 1;
L_00114BAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00114BD8:
    set32(c.r[3], 0u + 116u);
    c.budget -= 1;
    c.pc = 0x00114BE0u; syscall(c, 0x00114BDCu); if (c.pc != 0x00114BE0u) return;
    c.budget -= 1;
L_00114BE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00114BE8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114BF8u);  if (depth < kMaxDepth) unit_0005(c, 88u, depth + 1u); else { c.pc = 0x001149C0u; return; } if (c.pc != 0x00114BF8u) [[unlikely]] return; }
L_00114BF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114C00u);  if (depth < kMaxDepth) unit_0005(c, 101u, depth + 1u); else { c.pc = 0x00114AD8u; return; } if (c.pc != 0x00114C00u) [[unlikely]] return; }
L_00114C00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114C08u);  if (depth < kMaxDepth) unit_0005(c, 177u, depth + 1u); else { c.pc = 0x001150B0u; return; } if (c.pc != 0x00114C08u) [[unlikely]] return; }
L_00114C08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114C10u);  if (depth < kMaxDepth) unit_0003(c, 103u, depth + 1u); else { c.pc = 0x0010C9F8u; return; } if (c.pc != 0x00114C10u) [[unlikely]] return; }
L_00114C10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114C18u);  if (depth < kMaxDepth) unit_0005(c, 130u, depth + 1u); else { c.pc = 0x00114CF8u; return; } if (c.pc != 0x00114C18u) [[unlikely]] return; }
L_00114C18:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00114228u | kUnwind; return; } goto L_00114228; }
L_00114C28:
    set32(c.r[3], 0u + 116u);
    c.budget -= 1;
    c.pc = 0x00114C30u; syscall(c, 0x00114C2Cu); if (c.pc != 0x00114C30u) return;
    c.budget -= 1;
L_00114C30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00114C38:
    set32(c.r[3], 0u + 90u);
    c.budget -= 1;
    c.pc = 0x00114C40u; syscall(c, 0x00114C3Cu); if (c.pc != 0x00114C40u) return;
    c.budget -= 1;
L_00114C40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00114C48:
    set32(c.r[6], c.r[6].w[0] >> 2);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_00114C78; } }
    c.budget -= 1;
L_00114C58:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[7].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00114C58u | kUnwind; return; } goto L_00114C58; } }
L_00114C78:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00114C80:
    set32(c.r[3], 0u + 91u);
    c.budget -= 1;
    c.pc = 0x00114C88u; syscall(c, 0x00114C84u); if (c.pc != 0x00114C88u) return;
    c.budget -= 1;
L_00114C88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00114C90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114CA4u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 522u, depth + 1u); else { c.pc = 0x0010BCD0u; return; } if (c.pc != 0x00114CA4u) [[unlikely]] return; }
L_00114CA4:
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 8191ull;
    set32(c.r[16], c.r[29].w[0] + 4u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114CC8u); st32((c.r[29].w[0] + 4u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0002(c, 520u, depth + 1u); else { c.pc = 0x0010BCC0u; return; } if (c.pc != 0x00114CC8u) [[unlikely]] return; }
L_00114CC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114CD0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 522u, depth + 1u); else { c.pc = 0x0010BCD0u; return; } if (c.pc != 0x00114CD0u) [[unlikely]] return; }
L_00114CD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114CD8u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 520u, depth + 1u); else { c.pc = 0x0010BCC0u; return; } if (c.pc != 0x00114CD8u) [[unlikely]] return; }
L_00114CD8:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[2], c.r[2].w[0] >> 13);
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00114CF8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114D10u); st64((c.r[29].w[0]), c.r[16].d[0]);  if (depth < kMaxDepth) unit_0005(c, 125u, depth + 1u); else { c.pc = 0x00114C90u; return; } if (c.pc != 0x00114D10u) [[unlikely]] return; }
L_00114D10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_00114D8C; } }
    set32(c.r[18], 0u + 2u);
    set32(c.r[16], c.r[2].w[0] - 19584u);
    set32(c.r[4], ld32((c.r[2].w[0] - 19584u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114D30u); set32(c.r[17], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0005(c, 117u, depth + 1u); else { c.pc = 0x00114C28u; return; } if (c.pc != 0x00114D30u) [[unlikely]] return; }
L_00114D30:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80070000u);
    set32(c.r[6], 0u + 1960u);
    set32(c.r[5], c.r[5].w[0] - 21544u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114D48u); c.r[4].d[0] = c.r[4].d[0] | 16384ull;  if (depth < kMaxDepth) unit_0005(c, 119u, depth + 1u); else { c.pc = 0x00114C38u; return; } if (c.pc != 0x00114D48u) [[unlikely]] return; }
L_00114D48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114D50u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 580u, depth + 1u); else { c.pc = 0x0010BEA0u; return; } if (c.pc != 0x00114D50u) [[unlikely]] return; }
L_00114D50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114D58u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0002(c, 580u, depth + 1u); else { c.pc = 0x0010BEA0u; return; } if (c.pc != 0x00114D58u) [[unlikely]] return; }
L_00114D58:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114D64u); set32(c.r[5], ld32((c.r[16].w[0] + 12u)));  if (depth < kMaxDepth) unit_0005(c, 117u, depth + 1u); else { c.pc = 0x00114C28u; return; } if (c.pc != 0x00114D64u) [[unlikely]] return; }
L_00114D64:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_00114D68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114D70u); set32(c.r[18], c.r[18].w[0] + 1u);  if (depth < kMaxDepth) unit_0005(c, 123u, depth + 1u); else { c.pc = 0x00114C80u; return; } if (c.pc != 0x00114D70u) [[unlikely]] return; }
L_00114D70:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114D80u); set32(c.r[17], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_0005(c, 117u, depth + 1u); else { c.pc = 0x00114C28u; return; } if (c.pc != 0x00114D80u) [[unlikely]] return; }
L_00114D80:
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00114D68u | kUnwind; return; } goto L_00114D68; }
L_00114D8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00114DA8:
    set32(c.r[3], 0u + 90u);
    c.budget -= 1;
    c.pc = 0x00114DB0u; syscall(c, 0x00114DACu); if (c.pc != 0x00114DB0u) return;
    c.budget -= 1;
L_00114DB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00114DB8:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_00114DE0; } }
L_00114DC0:
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[7].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00114DC0u | kUnwind; return; } goto L_00114DC0; } }
L_00114DE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00114DE8:
    set32(c.r[3], 0u + 116u);
    c.budget -= 1;
    c.pc = 0x00114DF0u; syscall(c, 0x00114DECu); if (c.pc != 0x00114DF0u) return;
    c.budget -= 1;
L_00114DF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00114DF8:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[19], ld32((c.r[2].w[0] - 22304u)));
    set32(c.r[7], c.r[3].w[0] - 19560u);
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    set32(c.r[2], c.r[19].w[0] + 64u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[3].w[0] - 19560u)));
    set32(c.r[5], ld32((c.r[7].w[0] + 4u)));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114E4Cu); st32((c.r[29].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0005(c, 144u, depth + 1u); else { c.pc = 0x00114DE8u; return; } if (c.pc != 0x00114E4Cu) [[unlikely]] return; }
L_00114E4C:
    c.r[3].d[0] = c.r[18].sd[0] < 16ll ? 1ull : 0ull;
    set32(c.r[2], 0u + 15u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    if (c.r[3].d[0] == 0) c.r[18].d[0] = c.r[2].d[0];
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114E68u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0005(c, 140u, depth + 1u); else { c.pc = 0x00114DA8u; return; } if (c.pc != 0x00114E68u) [[unlikely]] return; }
L_00114E68:
    set32(c.r[19], c.r[19].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114E74u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 237u, depth + 1u); else { c.pc = 0x00127D00u; return; } if (c.pc != 0x00114E74u) [[unlikely]] return; }
L_00114E74:
    set32(c.r[17], c.r[2].w[0] + 1u);
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114E88u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 140u, depth + 1u); else { c.pc = 0x00114DA8u; return; } if (c.pc != 0x00114E88u) [[unlikely]] return; }
L_00114E88:
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.budget -= 4;
    { const bool t = c.r[18].sd[0] <= 0; st32((c.r[29].w[0]), c.r[3].w[0]);  if (t) { goto L_00114EE8; } }
    c.r[16].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 2;
L_00114EA0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114EB4u); set32(c.r[19], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_0005(c, 140u, depth + 1u); else { c.pc = 0x00114DA8u; return; } if (c.pc != 0x00114EB4u) [[unlikely]] return; }
L_00114EB4:
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114EC0u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0009(c, 237u, depth + 1u); else { c.pc = 0x00127D00u; return; } if (c.pc != 0x00114EC0u) [[unlikely]] return; }
L_00114EC0:
    set32(c.r[17], c.r[2].w[0] + 1u);
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114ED8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0005(c, 140u, depth + 1u); else { c.pc = 0x00114DA8u; return; } if (c.pc != 0x00114ED8u) [[unlikely]] return; }
L_00114ED8:
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != 0ull; st32((c.r[29].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00114EA0u | kUnwind; return; } goto L_00114EA0; } }
L_00114EE8:
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00114F10:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x001143B0u | kUnwind; return; } goto L_001143B0; }
L_00114F18:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 16160u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114F4Cu); c.r[6].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 146u, depth + 1u); else { c.pc = 0x00114DF8u; return; } if (c.pc != 0x00114F4Cu) [[unlikely]] return; }
L_00114F4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114F54u);  if (depth < kMaxDepth) unit_0005(c, 155u, depth + 1u); else { c.pc = 0x00114F10u; return; } if (c.pc != 0x00114F54u) [[unlikely]] return; }
L_00114F54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[2].w[0] - 22304u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114F70u); set32(c.r[7], c.r[7].w[0] + 4u);  if (depth < kMaxDepth) unit_0002(c, 382u, depth + 1u); else { c.pc = 0x0010B870u; return; } if (c.pc != 0x00114F70u) [[unlikely]] return; }
L_00114F70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00114F88:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114FA0u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 146u, depth + 1u); else { c.pc = 0x00114DF8u; return; } if (c.pc != 0x00114FA0u) [[unlikely]] return; }
L_00114FA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114FA8u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 155u, depth + 1u); else { c.pc = 0x00114F10u; return; } if (c.pc != 0x00114FA8u) [[unlikely]] return; }
L_00114FA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0] - 22304u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010B860u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 380u, depth); }
L_00114FD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114FE4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 155u, depth + 1u); else { c.pc = 0x00114F10u; return; } if (c.pc != 0x00114FE4u) [[unlikely]] return; }
L_00114FE4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010B840u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 376u, depth); }
L_00114FF8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011501Cu); set32(c.r[4], c.r[4].w[0] + 16160u);  if (depth < kMaxDepth) unit_0005(c, 146u, depth + 1u); else { c.pc = 0x00114DF8u; return; } if (c.pc != 0x0011501Cu) [[unlikely]] return; }
L_0011501C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115024u);  if (depth < kMaxDepth) unit_0005(c, 155u, depth + 1u); else { c.pc = 0x00114F10u; return; } if (c.pc != 0x00115024u) [[unlikely]] return; }
L_00115024:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] - 22304u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010C040u | kUnwind; return; } [[clang::musttail]] return unit_0003(c, 9u, depth); }
L_00115048:
    set32(c.r[3], 0u + 116u);
    c.budget -= 1;
    c.pc = 0x00115050u; syscall(c, 0x0011504Cu); if (c.pc != 0x00115050u) return;
    c.budget -= 1;
L_00115050:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00115058:
    set32(c.r[3], 0u + 90u);
    c.budget -= 1;
    c.pc = 0x00115060u; syscall(c, 0x0011505Cu); if (c.pc != 0x00115060u) return;
    c.budget -= 1;
L_00115060:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00115068:
    set32(c.r[6], c.r[6].w[0] >> 2);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_00115098; } }
    c.budget -= 1;
L_00115078:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 2;
L_00115080:
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[7].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00115078u | kUnwind; return; } goto L_00115078; } }
L_00115098:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_001150A0:
    set32(c.r[3], 0u + 91u);
    c.budget -= 1;
    c.pc = 0x001150A8u; syscall(c, 0x001150A4u); if (c.pc != 0x001150A8u) return;
    c.budget -= 1;
L_001150A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001150B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 6160ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00115170; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[18], 0u + 2u);
    set32(c.r[16], c.r[2].w[0] - 17656u);
    set32(c.r[4], ld32((c.r[2].w[0] - 17656u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001150F8u); set32(c.r[17], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0005(c, 168u, depth + 1u); else { c.pc = 0x00115048u; return; } if (c.pc != 0x001150F8u) [[unlikely]] return; }
L_001150F8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80070000u);
    set32(c.r[5], c.r[5].w[0] - 19552u);
    c.r[4].d[0] = c.r[4].d[0] | 24576ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115110u); set32(c.r[6], 0u + 1856u);  if (depth < kMaxDepth) unit_0005(c, 170u, depth + 1u); else { c.pc = 0x00115058u; return; } if (c.pc != 0x00115110u) [[unlikely]] return; }
L_00115110:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    set32(c.r[5], c.r[5].w[0] - 17696u);
    c.r[4].d[0] = c.r[4].d[0] | 8192ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115128u); set32(c.r[6], 0u + 40u);  if (depth < kMaxDepth) unit_0005(c, 170u, depth + 1u); else { c.pc = 0x00115058u; return; } if (c.pc != 0x00115128u) [[unlikely]] return; }
L_00115128:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115130u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 580u, depth + 1u); else { c.pc = 0x0010BEA0u; return; } if (c.pc != 0x00115130u) [[unlikely]] return; }
L_00115130:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115138u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0002(c, 580u, depth + 1u); else { c.pc = 0x0010BEA0u; return; } if (c.pc != 0x00115138u) [[unlikely]] return; }
L_00115138:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115144u); set32(c.r[5], ld32((c.r[16].w[0] + 12u)));  if (depth < kMaxDepth) unit_0005(c, 168u, depth + 1u); else { c.pc = 0x00115048u; return; } if (c.pc != 0x00115144u) [[unlikely]] return; }
L_00115144:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_00115148:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115150u); set32(c.r[18], c.r[18].w[0] + 1u);  if (depth < kMaxDepth) unit_0005(c, 175u, depth + 1u); else { c.pc = 0x001150A0u; return; } if (c.pc != 0x00115150u) [[unlikely]] return; }
L_00115150:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115160u); set32(c.r[17], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_0005(c, 168u, depth + 1u); else { c.pc = 0x00115048u; return; } if (c.pc != 0x00115160u) [[unlikely]] return; }
L_00115160:
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00115148u | kUnwind; return; } goto L_00115148; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00115170:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00115188:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    set32(c.r[18], c.r[16].w[0] - 3520u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001151B0u); c.r[17].sd[0] = static_cast<std::int32_t>(0x00450000u);  if (depth < kMaxDepth) unit_0003(c, 290u, depth + 1u); else { c.pc = 0x0010E468u; return; } if (c.pc != 0x001151B0u) [[unlikely]] return; }
L_001151B0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], c.r[16].w[0] - 3520u);
    c.r[5].d[0] = c.r[5].d[0] | 1793ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001151C4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 342u, depth + 1u); else { c.pc = 0x0010EBA8u; return; } if (c.pc != 0x001151C4u) [[unlikely]] return; }
L_001151C4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[2], 0u + 10000u);  if (t) { goto L_001151DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001151D4u); set32(c.r[4], c.r[17].w[0] + 16168u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x001151D4u) [[unlikely]] return; }
L_001151D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00115214; } }
L_001151DC:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_001151E0:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001151E0u | kUnwind; return; } goto L_001151E0; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001151B0u | kUnwind; return; } goto L_001151B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115210u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 580u, depth + 1u); else { c.pc = 0x0010BEA0u; return; } if (c.pc != 0x00115210u) [[unlikely]] return; }
L_00115210:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00115214:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00115230:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_0011527C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[3].w[0] - 3904u);
    st32((c.r[3].w[0] - 3904u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[8].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] + 8u), c.r[6].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115270u); st32((c.r[2].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_0002(c, 620u, depth + 1u); else { c.pc = 0x0010BFE0u; return; } if (c.pc != 0x00115270u) [[unlikely]] return; }
L_00115270:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00115284; } }
L_0011527C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001152A0; } }
L_00115284:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001152A0; } }
    c.budget -= 1;
L_00115290:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115298u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 616u, depth + 1u); else { c.pc = 0x0010BFC0u; return; } if (c.pc != 0x00115298u) [[unlikely]] return; }
L_00115298:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00115290u | kUnwind; return; } goto L_00115290; } }
L_001152A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001152B8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 17576u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] - 17576u), c.r[4].w[0]);  c.pc = t; return; }
L_001152C8:
    set32(c.r[29], c.r[29].w[0] - 240u);
    c.r[13].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    set32(c.r[3], c.r[29].w[0] + 192u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0] + 184u), c.r[5].d[0]);
    set32(c.r[2], c.r[16].w[0] - 3584u);
    st64((c.r[29].w[0] + 192u), c.r[6].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[6], c.r[2].w[0] + 4u);
    st64((c.r[29].w[0] + 80u), c.r[18].d[0]);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0] + 200u), c.r[7].d[0]);
    set32(c.r[5], 0u + 5u);
    st64((c.r[29].w[0] + 208u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 216u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 224u), c.r[10].d[0]);
    st64((c.r[29].w[0] + 232u), c.r[11].d[0]);
    st32((c.r[16].w[0] - 3584u), c.r[2].w[0]);
    st64((c.r[29].w[0] + 64u), c.r[17].d[0]);
    set32(c.r[17], ld32((c.r[3].w[0] - 8u)));
    c.budget -= 22;
L_00115320:
    set32(c.r[3], c.r[3].w[0] + 8u);
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[2], ld32((c.r[3].w[0] - 8u)));
    st32((c.r[6].w[0]), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00115320u | kUnwind; return; } goto L_00115320; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; c.r[11].d[0] = 0ull + 0ull;  if (t) { goto L_00115350; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[11], 0u + 1u);
    set32(c.r[13], ld32((c.r[2].w[0] - 17576u)));
    c.budget -= 3;
L_00115350:
    c.r[2].d[0] = 0ull | 33120ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001153A4; } }
    set32(c.r[3], c.r[16].w[0] - 3584u);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], ld32((c.r[3].w[0] + 12u)));  if (t) { goto L_00115388; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[18], ld32((c.r[2].w[0] - 17556u)));
    st32((c.r[2].w[0] - 17556u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] - 17544u), c.r[5].w[0]);  if (t) { goto L_001153D0; } }
L_00115388:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[18], ld32((c.r[2].w[0] - 17552u)));
    st32((c.r[2].w[0] - 17552u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] - 17540u), c.r[5].w[0]);  if (t) { goto L_001153D0; } }
L_001153A4:
    c.r[2].d[0] = 0ull | 33136ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull | 33072ull;  if (t) { goto L_001153D4; } }
    set32(c.r[3], c.r[16].w[0] - 3584u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[6], ld32((c.r[3].w[0] + 8u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[18], ld32((c.r[4].w[0] - 17548u)));
    st32((c.r[4].w[0] - 17548u), c.r[2].w[0]);
    st32((c.r[5].w[0] - 17536u), c.r[6].w[0]);
    c.budget -= 8;
L_001153D0:
    c.r[2].d[0] = 0ull | 33072ull;
    c.budget -= 1;
L_001153D4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; st32((c.r[29].w[0] + 32u), 0u);  if (t) { goto L_001153F0; } }
    c.r[2].d[0] = 0ull | 33184ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull | 33200ull;  if (t) { goto L_001153F0; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull | 33088ull;  if (t) { goto L_00115420; } }
L_001153F0:
    set32(c.r[9], c.r[16].w[0] - 3584u);
    set32(c.r[2], ld32((c.r[16].w[0] - 3584u)));
    set32(c.r[5], ld32((c.r[9].w[0] + 4u)));
    c.r[6].d[0] = c.r[11].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[9].w[0] + 8u)));
    set32(c.r[4], c.r[12].w[0] - 3520u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = c.r[17].d[0] | c.r[5].d[0];
    c.r[11].d[0] = c.r[13].d[0] + 0ull;
    set32(c.r[8], 0u + 64u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; set32(c.r[10], 0u + 64u);  if (t) { goto L_00115544; } }
L_00115420:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull | 33216ull;  if (t) { goto L_00115460; } }
    set32(c.r[7], c.r[16].w[0] - 3584u);
    c.r[6].d[0] = c.r[11].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[7].w[0] + 8u)));
    set32(c.r[4], c.r[12].w[0] - 3520u);
    set32(c.r[5], ld32((c.r[7].w[0] + 4u)));
    c.r[11].d[0] = c.r[13].d[0] + 0ull;
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = c.r[5].d[0] | 33088ull;
    set32(c.r[8], 0u + 64u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115458u); set32(c.r[10], 0u + 64u);  if (depth < kMaxDepth) unit_0003(c, 354u, depth + 1u); else { c.pc = 0x0010ED78u; return; } if (c.pc != 0x00115458u) [[unlikely]] return; }
L_00115458:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull | 33120ull;  if (t) { goto L_00115558; } }
L_00115460:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull | 33232ull;  if (t) { goto L_00115470; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_001154E4; } }
L_00115470:
    set32(c.r[16], c.r[16].w[0] - 3584u);
    c.r[3].d[0] = 0ull | 33232ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 8u));
    c.budget -= 6;
    { const bool t = c.r[17].d[0] != c.r[3].d[0]; st16((c.r[4].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00115490; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_00115490:
    set32(c.r[9], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[9].d[0] != 0ull; set32(c.r[10], ld32((c.r[16].w[0] + 16u)));  if (t) { goto L_001154A4; } }
    set32(c.r[9], c.r[29].w[0] + 32u);
    set32(c.r[10], 0u + 4u);
    c.budget -= 2;
L_001154A4:
    set32(c.r[8], ld32((c.r[16].w[0] + 8u)));
    c.r[6].d[0] = c.r[11].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], c.r[12].w[0] - 3520u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[11].d[0] = c.r[13].d[0] + 0ull;
    set32(c.r[8], c.r[8].w[0] << 3);
    st32((c.r[29].w[0]), c.r[16].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001154CCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 354u, depth + 1u); else { c.pc = 0x0010ED78u; return; } if (c.pc != 0x001154CCu) [[unlikely]] return; }
L_001154CC:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull | 33120ull;  goto L_00115558; }
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 32u), c.r[2].w[0]);  if (t) { goto L_00115554; } }
L_001154E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 28672ull;
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(241ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] - 3584u);  if (t) { goto L_00115520; } }
    c.r[6].d[0] = c.r[11].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[4], c.r[12].w[0] - 3520u);
    set32(c.r[8], ld32((c.r[2].w[0] + 8u)));
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    c.r[11].d[0] = c.r[13].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00115540; } }
L_00115520:
    c.r[6].d[0] = c.r[11].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[12].w[0] - 3520u);
    c.r[11].d[0] = c.r[13].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[8], 0u + 64u);
    c.r[9].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 8;
L_00115540:
    set32(c.r[10], 0u + 16u);
    c.budget -= 1;
L_00115544:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011554Cu);  if (depth < kMaxDepth) unit_0003(c, 354u, depth + 1u); else { c.pc = 0x0010ED78u; return; } if (c.pc != 0x0011554Cu) [[unlikely]] return; }
L_0011554C:
    set32(c.r[3], ld32((c.r[16].w[0] - 3584u)));
    st32((c.r[29].w[0] + 32u), c.r[3].w[0]);
    c.budget -= 2;
L_00115554:
    c.r[2].d[0] = 0ull | 33120ull;
    c.budget -= 1;
L_00115558:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull | 33136ull;  if (t) { goto L_00115568; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[2], ld32((c.r[29].w[0] + 32u)));  if (t) { goto L_00115570; } }
L_00115568:
    st32((c.r[29].w[0] + 32u), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 2;
L_00115570:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_00115588:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[4], 0u + 1u);
    st32((c.r[2].w[0] - 17568u), 0u);
    c.r[5].d[0] = 0ull | 58912ull;
    st32((c.r[3].w[0] - 17564u), 0u);
    st32((c.r[6].w[0] - 17560u), 0u);
    st32((c.r[7].w[0] - 17556u), 0u);
    st32((c.r[8].w[0] - 17552u), 0u);
    st32((c.r[9].w[0] - 17548u), 0u);
    st32((c.r[10].w[0] - 17544u), 0u);
    st32((c.r[11].w[0] - 17540u), 0u);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001155ECu); st32((c.r[12].w[0] - 17536u), 0u);  if (depth < kMaxDepth) unit_0005(c, 198u, depth + 1u); else { c.pc = 0x001152C8u; return; } if (c.pc != 0x001155ECu) [[unlikely]] return; }
L_001155EC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00110000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] + 22112u);
    set32(c.r[2], c.r[2].w[0] - 3456u);
    set32(c.r[5], c.r[5].w[0] + 6256u);
    set32(c.r[6], 0u + 4096u);
    st32((c.r[29].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[16].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115624u); st32((c.r[29].w[0] + 16u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_0002(c, 436u, depth + 1u); else { c.pc = 0x0010BA20u; return; } if (c.pc != 0x00115624u) [[unlikely]] return; }
L_00115624:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115634u); st32((c.r[29].w[0] + 32u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0002(c, 440u, depth + 1u); else { c.pc = 0x0010BA40u; return; } if (c.pc != 0x00115634u) [[unlikely]] return; }
L_00115634:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[2], ld32((c.r[29].w[0] + 32u)));  if (t) { goto L_0011564C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115648u); set32(c.r[4], c.r[4].w[0] + 16208u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x00115648u) [[unlikely]] return; }
L_00115648:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0011564C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00115660:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115670u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 290u, depth + 1u); else { c.pc = 0x0010E468u; return; } if (c.pc != 0x00115670u) [[unlikely]] return; }
L_00115670:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115678u);  if (depth < kMaxDepth) unit_0002(c, 466u, depth + 1u); else { c.pc = 0x0010BB10u; return; } if (c.pc != 0x00115678u) [[unlikely]] return; }
L_00115678:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115684u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 368u, depth + 1u); else { c.pc = 0x0010EFA8u; return; } if (c.pc != 0x00115684u) [[unlikely]] return; }
L_00115684:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00110000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 22216u);
    set32(c.r[7], c.r[7].w[0] + 896u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001156B0u); c.r[5].d[0] = c.r[5].d[0] | 1796ull;  if (depth < kMaxDepth) unit_0003(c, 371u, depth + 1u); else { c.pc = 0x0010F040u; return; } if (c.pc != 0x001156B0u) [[unlikely]] return; }
L_001156B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001156B8u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 398u, depth + 1u); else { c.pc = 0x0010F458u; return; } if (c.pc != 0x001156B8u) [[unlikely]] return; }
L_001156B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001156C8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_00115704; } }
    set32(c.r[6], ld32((c.r[2].w[0] - 17556u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_00115704; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00115700u); set32(c.r[5], ld32((c.r[2].w[0] - 17544u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00115700u) [[unlikely]] return; }
L_00115700:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_00115704:
    c.r[2].d[0] = c.r[3].d[0] & 512ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_0011572C; } }
    set32(c.r[6], ld32((c.r[2].w[0] - 17552u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_0011572C; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00115728u); set32(c.r[5], ld32((c.r[2].w[0] - 17540u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00115728u) [[unlikely]] return; }
L_00115728:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_0011572C:
    c.r[2].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_00115750; } }
    set32(c.r[3], ld32((c.r[2].w[0] - 17548u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_00115750; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00115750u); set32(c.r[5], ld32((c.r[2].w[0] - 17536u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00115750u) [[unlikely]] return; }
L_00115750:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00115768:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FEF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[5].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0] + 48u), c.r[31].d[0]);  if (t) { goto L_00115818; } }
    c.r[3].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0100000u);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001157F0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] > 0; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00115E6C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[2].d[0] = ld64((c.r[1].w[0] + 16360u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));  if (t) { goto L_00115E70; } }
    c.budget -= 1;
L_001157F0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001157FCu);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x001157FCu) [[unlikely]] return; }
L_001157FC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011580Cu);  if (depth < kMaxDepth) unit_0007(c, 65u, depth + 1u); else { c.pc = 0x0011CC10u; return; } if (c.pc != 0x0011580Cu) [[unlikely]] return; }
L_0011580C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00115E6C; } }
    c.budget -= 1;
L_00115818:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FDF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3C600000u);  if (t) { goto L_00115A08; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[2].d[0] = ld64((c.r[1].w[0] + 16368u));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00115E6C; }
L_00115840:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011584Cu);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x0011584Cu) [[unlikely]] return; }
L_0011584C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 16376u));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115864u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00115864u) [[unlikely]] return; }
L_00115864:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 16384u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115878u);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x00115878u) [[unlikely]] return; }
L_00115878:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115888u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00115888u) [[unlikely]] return; }
L_00115888:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 16392u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011589Cu);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x0011589Cu) [[unlikely]] return; }
L_0011589C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001158ACu);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x001158ACu) [[unlikely]] return; }
L_001158AC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 16400u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001158C0u);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x001158C0u) [[unlikely]] return; }
L_001158C0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001158D0u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x001158D0u) [[unlikely]] return; }
L_001158D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 16408u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001158E4u);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x001158E4u) [[unlikely]] return; }
L_001158E4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001158F4u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x001158F4u) [[unlikely]] return; }
L_001158F4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 16416u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115908u);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x00115908u) [[unlikely]] return; }
L_00115908:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115918u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00115918u) [[unlikely]] return; }
L_00115918:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 16424u));
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115930u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00115930u) [[unlikely]] return; }
L_00115930:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 16432u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115944u);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x00115944u) [[unlikely]] return; }
L_00115944:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115954u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00115954u) [[unlikely]] return; }
L_00115954:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 16440u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115968u);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x00115968u) [[unlikely]] return; }
L_00115968:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115978u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00115978u) [[unlikely]] return; }
L_00115978:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 16448u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011598Cu);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x0011598Cu) [[unlikely]] return; }
L_0011598C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011599Cu);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x0011599Cu) [[unlikely]] return; }
L_0011599C:
    c.r[5].d[0] = 0ull | 65472ull;
    c.r[5].d[0] = c.r[5].d[0] << 46;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001159B0u);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x001159B0u) [[unlikely]] return; }
L_001159B0:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001159C0u);  if (depth < kMaxDepth) unit_0007(c, 65u, depth + 1u); else { c.pc = 0x0011CC10u; return; } if (c.pc != 0x001159C0u) [[unlikely]] return; }
L_001159C0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001159D0u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x001159D0u) [[unlikely]] return; }
L_001159D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[4].d[0] = ld64((c.r[1].w[0] + 16456u));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001159E4u);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x001159E4u) [[unlikely]] return; }
L_001159E4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001159F4u);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x001159F4u) [[unlikely]] return; }
L_001159F4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[4].d[0] = ld64((c.r[1].w[0] + 16464u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00115C08; } }
    c.budget -= 1;
L_00115A08:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] >= 0;  if (t) { goto L_00115C20; } }
    c.r[16].d[0] = 0ull | 65472ull;
    c.r[16].d[0] = c.r[16].d[0] << 46;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115A24u);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x00115A24u) [[unlikely]] return; }
L_00115A24:
    c.r[5].d[0] = 0ull | 65408ull;
    c.r[5].d[0] = c.r[5].d[0] << 46;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115A38u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00115A38u) [[unlikely]] return; }
L_00115A38:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 16472u));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115A50u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00115A50u) [[unlikely]] return; }
L_00115A50:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 16480u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115A64u);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x00115A64u) [[unlikely]] return; }
L_00115A64:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115A74u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00115A74u) [[unlikely]] return; }
L_00115A74:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 16488u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115A88u);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x00115A88u) [[unlikely]] return; }
L_00115A88:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115A98u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00115A98u) [[unlikely]] return; }
L_00115A98:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 16496u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115AACu);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x00115AACu) [[unlikely]] return; }
L_00115AAC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115ABCu);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00115ABCu) [[unlikely]] return; }
L_00115ABC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 16504u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115AD0u);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x00115AD0u) [[unlikely]] return; }
L_00115AD0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115AE0u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00115AE0u) [[unlikely]] return; }
L_00115AE0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 16512u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115AF4u);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x00115AF4u) [[unlikely]] return; }
L_00115AF4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115B04u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00115B04u) [[unlikely]] return; }
L_00115B04:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 16520u));
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115B1Cu);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00115B1Cu) [[unlikely]] return; }
L_00115B1C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 16528u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115B30u);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x00115B30u) [[unlikely]] return; }
L_00115B30:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115B40u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00115B40u) [[unlikely]] return; }
L_00115B40:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 16536u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115B54u);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x00115B54u) [[unlikely]] return; }
L_00115B54:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115B64u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00115B64u) [[unlikely]] return; }
L_00115B64:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 16544u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115B78u);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x00115B78u) [[unlikely]] return; }
L_00115B78:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115B88u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00115B88u) [[unlikely]] return; }
L_00115B88:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115B98u);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x00115B98u) [[unlikely]] return; }
L_00115B98:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115BA8u);  if (depth < kMaxDepth) unit_0005(c, 417u, depth + 1u); else { c.pc = 0x00116A50u; return; } if (c.pc != 0x00115BA8u) [[unlikely]] return; }
L_00115BA8:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115BBCu);  if (depth < kMaxDepth) unit_0007(c, 65u, depth + 1u); else { c.pc = 0x0011CC10u; return; } if (c.pc != 0x00115BBCu) [[unlikely]] return; }
L_00115BBC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115BCCu);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00115BCCu) [[unlikely]] return; }
L_00115BCC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 16552u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115BE0u);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x00115BE0u) [[unlikely]] return; }
L_00115BE0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115BF0u);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x00115BF0u) [[unlikely]] return; }
L_00115BF0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115C00u);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x00115C00u) [[unlikely]] return; }
L_00115C00:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[4].d[0] = ld64((c.r[1].w[0] + 16560u));
    c.budget -= 2;
L_00115C08:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115C14u);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x00115C14u) [[unlikely]] return; }
L_00115C14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00115E6C; } }
    c.budget -= 1;
L_00115C20:
    c.r[17].d[0] = 0ull | 65472ull;
    c.r[17].d[0] = c.r[17].d[0] << 46;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115C38u);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x00115C38u) [[unlikely]] return; }
L_00115C38:
    c.r[5].d[0] = 0ull | 65408ull;
    c.budget -= 1;
L_00115C3C:
    c.r[5].d[0] = c.r[5].d[0] << 46;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115C4Cu);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00115C4Cu) [[unlikely]] return; }
L_00115C4C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115C5Cu);  if (depth < kMaxDepth) unit_0005(c, 417u, depth + 1u); else { c.pc = 0x00116A50u; return; } if (c.pc != 0x00115C5Cu) [[unlikely]] return; }
L_00115C5C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[19].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115C84u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00115C84u) [[unlikely]] return; }
L_00115C84:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115C94u);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x00115C94u) [[unlikely]] return; }
L_00115C94:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115CA8u);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x00115CA8u) [[unlikely]] return; }
L_00115CA8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115CB8u);  if (depth < kMaxDepth) unit_0007(c, 65u, depth + 1u); else { c.pc = 0x0011CC10u; return; } if (c.pc != 0x00115CB8u) [[unlikely]] return; }
L_00115CB8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 16568u));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115CD0u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00115CD0u) [[unlikely]] return; }
L_00115CD0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 16576u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115CE4u);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x00115CE4u) [[unlikely]] return; }
L_00115CE4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115CF4u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00115CF4u) [[unlikely]] return; }
L_00115CF4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 16584u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115D08u);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x00115D08u) [[unlikely]] return; }
L_00115D08:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115D18u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00115D18u) [[unlikely]] return; }
L_00115D18:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 16592u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115D2Cu);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x00115D2Cu) [[unlikely]] return; }
L_00115D2C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115D3Cu);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00115D3Cu) [[unlikely]] return; }
L_00115D3C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 16600u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115D50u);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x00115D50u) [[unlikely]] return; }
L_00115D50:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115D60u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00115D60u) [[unlikely]] return; }
L_00115D60:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 16608u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115D74u);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x00115D74u) [[unlikely]] return; }
L_00115D74:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115D84u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00115D84u) [[unlikely]] return; }
L_00115D84:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 16616u));
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115D9Cu);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00115D9Cu) [[unlikely]] return; }
L_00115D9C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 16624u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115DB0u);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x00115DB0u) [[unlikely]] return; }
L_00115DB0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115DC0u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00115DC0u) [[unlikely]] return; }
L_00115DC0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 16632u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115DD4u);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x00115DD4u) [[unlikely]] return; }
L_00115DD4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115DE4u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00115DE4u) [[unlikely]] return; }
L_00115DE4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 16640u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115DF8u);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x00115DF8u) [[unlikely]] return; }
L_00115DF8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115E08u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00115E08u) [[unlikely]] return; }
L_00115E08:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115E18u);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x00115E18u) [[unlikely]] return; }
L_00115E18:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115E28u);  if (depth < kMaxDepth) unit_0007(c, 65u, depth + 1u); else { c.pc = 0x0011CC10u; return; } if (c.pc != 0x00115E28u) [[unlikely]] return; }
L_00115E28:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115E38u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00115E38u) [[unlikely]] return; }
L_00115E38:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115E48u);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x00115E48u) [[unlikely]] return; }
L_00115E48:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115E58u);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x00115E58u) [[unlikely]] return; }
L_00115E58:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115E68u);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x00115E68u) [[unlikely]] return; }
L_00115E68:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00115E6C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 1;
L_00115E70:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00115E90:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 21;
    { const bool t = c.r[2].d[0] != 0ull; c.r[30].d[0] = 0ull + 0ull;  if (t) { goto L_00115F58; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[19].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00115F10; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[2].d[0] = ld64((c.r[3].w[0] + 16736u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));  if (t) { goto L_00116470; } }
    c.budget -= 1;
L_00115F10:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] >= 0;  if (t) { goto L_00115F40; } }
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115F24u);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x00115F24u) [[unlikely]] return; }
L_00115F24:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115F34u);  if (depth < kMaxDepth) unit_0007(c, 65u, depth + 1u); else { c.pc = 0x0011CC10u; return; } if (c.pc != 0x00115F34u) [[unlikely]] return; }
L_00115F34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0011646C; } }
    c.budget -= 1;
L_00115F40:
    c.r[5].d[0] = 0ull | 34464ull;
    c.r[5].d[0] = c.r[5].d[0] << 47;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115F50u); set32(c.r[30], 0u - 54u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00115F50u) [[unlikely]] return; }
L_00115F50:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 2;
L_00115F58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FEF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[16].sd[0] = static_cast<std::int32_t>(0x000F0000u);  goto L_00115F88; }
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115F7Cu);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x00115F7Cu) [[unlikely]] return; }
L_00115F7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0011646C; } }
    c.budget -= 1;
L_00115F88:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[19].w[0]) >> 20));
    c.r[16].d[0] = c.r[16].d[0] | 65535ull;
    set32(c.r[2], c.r[30].w[0] + c.r[2].w[0]);
    c.r[19].d[0] = c.r[19].d[0] & c.r[16].d[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00090000u);
    c.r[4].d[0] = c.r[4].d[0] | 24420ull;
    set32(c.r[4], c.r[4].w[0] + c.r[19].w[0]);
    set32(c.r[30], c.r[2].w[0] - 1023u);
    c.r[22].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FF00000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[4].d[0] >> 32;
    c.r[2].d[0] = c.r[22].d[0] ^ c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[19].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[22].w[0]) >> 20));
    c.r[5].d[0] = 0ull | 65472ull;
    c.r[5].d[0] = c.r[5].d[0] << 46;
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115FE8u); set32(c.r[30], c.r[30].w[0] + c.r[6].w[0]);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x00115FE8u) [[unlikely]] return; }
L_00115FE8:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[19].w[0] + 2u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[16].d[0];
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00116150; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00116014u);  if (depth < kMaxDepth) unit_0007(c, 71u, depth + 1u); else { c.pc = 0x0011CEA8u; return; } if (c.pc != 0x00116014u) [[unlikely]] return; }
L_00116014:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00116078; } }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[30].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0011646C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00116030u); c.r[4].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 75u, depth + 1u); else { c.pc = 0x0011CEF8u; return; } if (c.pc != 0x00116030u) [[unlikely]] return; }
L_00116030:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 16744u));
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
L_00116040:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00116048u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00116048u) [[unlikely]] return; }
L_00116048:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 16752u));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00116060u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00116060u) [[unlikely]] return; }
L_00116060:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00116070u);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x00116070u) [[unlikely]] return; }
L_00116070:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0011646C; } }
L_00116078:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 2;
L_00116080:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00116088u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00116088u) [[unlikely]] return; }
L_00116088:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 16760u));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001160A0u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x001160A0u) [[unlikely]] return; }
L_001160A0:
    c.r[4].d[0] = 0ull | 65408ull;
    c.r[4].d[0] = c.r[4].d[0] << 46;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001160B4u);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x001160B4u) [[unlikely]] return; }
L_001160B4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001160C4u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x001160C4u) [[unlikely]] return; }
L_001160C4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[30].d[0] != 0ull;  if (t) { goto L_001160E8; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001160E0u);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x001160E0u) [[unlikely]] return; }
L_001160E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0011646C; } }
L_001160E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001160F0u); c.r[4].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 75u, depth + 1u); else { c.pc = 0x0011CEF8u; return; } if (c.pc != 0x001160F0u) [[unlikely]] return; }
L_001160F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 16768u));
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00116108u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00116108u) [[unlikely]] return; }
L_00116108:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 16776u));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00116120u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00116120u) [[unlikely]] return; }
L_00116120:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00116130u);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x00116130u) [[unlikely]] return; }
L_00116130:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00116140u);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x00116140u) [[unlikely]] return; }
L_00116140:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001163D4; } }
    c.budget -= 1;
L_00116150:
    c.r[5].d[0] = 0ull | 32768ull;
    c.r[5].d[0] = c.r[5].d[0] << 47;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00116164u); c.r[16].sd[0] = static_cast<std::int32_t>(0x00060000u);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x00116164u) [[unlikely]] return; }
L_00116164:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00116174u); c.r[16].d[0] = c.r[16].d[0] | 47185ull;  if (depth < kMaxDepth) unit_0007(c, 65u, depth + 1u); else { c.pc = 0x0011CC10u; return; } if (c.pc != 0x00116174u) [[unlikely]] return; }
L_00116174:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00116180u); c.r[4].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 75u, depth + 1u); else { c.pc = 0x0011CEF8u; return; } if (c.pc != 0x00116180u) [[unlikely]] return; }
L_00116180:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00116194u); set32(c.r[16], c.r[16].w[0] - c.r[19].w[0]);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00116194u) [[unlikely]] return; }
L_00116194:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF90000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 60294ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001161B0u); set32(c.r[22], c.r[19].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x001161B0u) [[unlikely]] return; }
L_001161B0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 16784u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001161C8u); c.r[22].d[0] = c.r[22].d[0] | c.r[16].d[0];  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x001161C8u) [[unlikely]] return; }
L_001161C8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 16792u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001161DCu);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x001161DCu) [[unlikely]] return; }
L_001161DC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001161ECu);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x001161ECu) [[unlikely]] return; }
L_001161EC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 16800u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00116200u);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x00116200u) [[unlikely]] return; }
L_00116200:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00116210u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00116210u) [[unlikely]] return; }
L_00116210:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 16808u));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00116228u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00116228u) [[unlikely]] return; }
L_00116228:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 16816u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011623Cu);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x0011623Cu) [[unlikely]] return; }
L_0011623C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011624Cu);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x0011624Cu) [[unlikely]] return; }
L_0011624C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 16824u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00116260u);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x00116260u) [[unlikely]] return; }
L_00116260:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00116270u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00116270u) [[unlikely]] return; }
L_00116270:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 16832u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00116284u);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x00116284u) [[unlikely]] return; }
L_00116284:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00116294u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00116294u) [[unlikely]] return; }
L_00116294:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001162A4u);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x001162A4u) [[unlikely]] return; }
L_001162A4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[22].sd[0] <= 0;  if (t) { goto L_001163A8; } }
    c.r[5].d[0] = 0ull | 65408ull;
    c.r[5].d[0] = c.r[5].d[0] << 46;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001162C4u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x001162C4u) [[unlikely]] return; }
L_001162C4:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001162D4u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x001162D4u) [[unlikely]] return; }
L_001162D4:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[30].d[0] != 0ull;  if (t) { goto L_00116318; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001162F0u);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x001162F0u) [[unlikely]] return; }
L_001162F0:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00116300u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00116300u) [[unlikely]] return; }
L_00116300:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00116310u);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x00116310u) [[unlikely]] return; }
L_00116310:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001163D0; } }
L_00116318:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 16840u));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011632Cu);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x0011632Cu) [[unlikely]] return; }
L_0011632C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00116340u);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x00116340u) [[unlikely]] return; }
L_00116340:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00116350u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00116350u) [[unlikely]] return; }
L_00116350:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 16848u));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00116368u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00116368u) [[unlikely]] return; }
L_00116368:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00116378u);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x00116378u) [[unlikely]] return; }
L_00116378:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00116388u);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x00116388u) [[unlikely]] return; }
L_00116388:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00116398u);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x00116398u) [[unlikely]] return; }
L_00116398:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001163D4; } }
    c.budget -= 1;
L_001163A8:
    c.budget -= 2;
    { const bool t = c.r[30].d[0] != 0ull;  if (t) { goto L_001163E8; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001163C0u);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x001163C0u) [[unlikely]] return; }
L_001163C0:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001163D0u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x001163D0u) [[unlikely]] return; }
L_001163D0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_001163D4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001163E0u);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x001163E0u) [[unlikely]] return; }
L_001163E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0011646C; } }
L_001163E8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 16856u));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001163FCu);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x001163FCu) [[unlikely]] return; }
L_001163FC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00116410u);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x00116410u) [[unlikely]] return; }
L_00116410:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00116420u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00116420u) [[unlikely]] return; }
L_00116420:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 16864u));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00116438u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00116438u) [[unlikely]] return; }
L_00116438:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00116448u);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x00116448u) [[unlikely]] return; }
L_00116448:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00116458u);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x00116458u) [[unlikely]] return; }
L_00116458:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00116468u);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x00116468u) [[unlikely]] return; }
L_00116468:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0011646C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 1;
L_00116470:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00116498:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[30].d[0]);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.r[30].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FE90000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] | 8699ull;
    c.r[16].d[0] = c.r[30].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 22;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0] + 104u), c.r[31].d[0]);  if (t) { goto L_00116508; } }
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[20].w[0]), c.r[5].d[0]);
    st64((c.r[20].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00116A20; } }
    c.budget -= 1;
L_00116508:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40020000u);
    c.r[2].d[0] = c.r[2].d[0] | 55675ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41390000u);  if (t) { goto L_00116660; } }
    c.budget -= 2;
    { const bool t = c.r[30].sd[0] <= 0;  if (t) { goto L_001165C0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 17344u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00116534u);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x00116534u) [[unlikely]] return; }
L_00116534:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FF90000u);
    c.r[2].d[0] = c.r[2].d[0] | 8699ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_00116560; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[16].d[0] = ld64((c.r[1].w[0] + 17352u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00116588; } }
L_00116560:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 17360u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[16].d[0] = ld64((c.r[1].w[0] + 17368u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011657Cu);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x0011657Cu) [[unlikely]] return; }
L_0011657C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
L_00116588:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00116590u);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x00116590u) [[unlikely]] return; }
L_00116590:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st64((c.r[20].w[0]), c.r[2].d[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001165A4u);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x001165A4u) [[unlikely]] return; }
L_001165A4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001165B4u);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x001165B4u) [[unlikely]] return; }
L_001165B4:
    st64((c.r[20].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00116A20; } }
L_001165C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 17376u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001165D0u);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x001165D0u) [[unlikely]] return; }
L_001165D0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FF90000u);
    c.r[2].d[0] = c.r[2].d[0] | 8699ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_00116600; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[16].d[0] = ld64((c.r[1].w[0] + 17384u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00116628; } }
    c.budget -= 1;
L_00116600:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 17392u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[16].d[0] = ld64((c.r[1].w[0] + 17400u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011661Cu);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x0011661Cu) [[unlikely]] return; }
L_0011661C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
L_00116628:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00116630u);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x00116630u) [[unlikely]] return; }
L_00116630:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st64((c.r[20].w[0]), c.r[2].d[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00116644u);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x00116644u) [[unlikely]] return; }
L_00116644:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00116654u);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x00116654u) [[unlikely]] return; }
L_00116654:
    st64((c.r[20].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00116A20; } }
L_00116660:
    c.r[2].d[0] = c.r[2].d[0] | 8699ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x7FEF0000u);  goto L_001168F8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00116678u);  if (depth < kMaxDepth) unit_0006(c, 162u, depth + 1u); else { c.pc = 0x00119900u; return; } if (c.pc != 0x00116678u) [[unlikely]] return; }
L_00116678:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 17408u));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00116690u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00116690u) [[unlikely]] return; }
L_00116690:
    c.r[5].d[0] = 0ull | 65408ull;
    c.r[5].d[0] = c.r[5].d[0] << 46;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001166A4u);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x001166A4u) [[unlikely]] return; }
L_001166A4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001166B0u);  if (depth < kMaxDepth) unit_0007(c, 78u, depth + 1u); else { c.pc = 0x0011CFB0u; return; } if (c.pc != 0x001166B0u) [[unlikely]] return; }
L_001166B0:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001166BCu); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 75u, depth + 1u); else { c.pc = 0x0011CEF8u; return; } if (c.pc != 0x001166BCu) [[unlikely]] return; }
L_001166BC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 17416u));
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001166D4u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x001166D4u) [[unlikely]] return; }
L_001166D4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001166E4u);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x001166E4u) [[unlikely]] return; }
L_001166E4:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 17424u));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001166FCu);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x001166FCu) [[unlikely]] return; }
L_001166FC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[22].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[22].w[0] << 2);  if (t) { goto L_00116730; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 17132u)));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_00116730; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011688C; } }
    c.budget -= 1;
L_00116730:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00116740u); set32(c.r[23], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 20));  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x00116740u) [[unlikely]] return; }
L_00116740:
    st64((c.r[20].w[0]), c.r[2].d[0]);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] >> 52;
    c.r[3].d[0] = c.r[3].d[0] & 2047ull;
    set32(c.r[16], c.r[23].w[0] - c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011689C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 17432u));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[17].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00116778u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00116778u) [[unlikely]] return; }
L_00116778:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011678Cu);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x0011678Cu) [[unlikely]] return; }
L_0011678C:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 17440u));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001167A4u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x001167A4u) [[unlikely]] return; }
L_001167A4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001167B8u);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x001167B8u) [[unlikely]] return; }
L_001167B8:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001167C8u);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x001167C8u) [[unlikely]] return; }
L_001167C8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001167D8u);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x001167D8u) [[unlikely]] return; }
L_001167D8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001167ECu);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x001167ECu) [[unlikely]] return; }
L_001167EC:
    st64((c.r[20].w[0]), c.r[2].d[0]);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] >> 52;
    c.r[3].d[0] = c.r[3].d[0] & 2047ull;
    set32(c.r[16], c.r[23].w[0] - c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].sd[0] < 50ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011689C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 17448u));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[17].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00116824u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00116824u) [[unlikely]] return; }
L_00116824:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00116838u);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x00116838u) [[unlikely]] return; }
L_00116838:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 17456u));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00116850u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00116850u) [[unlikely]] return; }
L_00116850:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00116864u);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x00116864u) [[unlikely]] return; }
L_00116864:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00116874u);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x00116874u) [[unlikely]] return; }
L_00116874:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00116884u);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x00116884u) [[unlikely]] return; }
L_00116884:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_0011688C:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00116898u);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x00116898u) [[unlikely]] return; }
L_00116898:
    st64((c.r[20].w[0]), c.r[2].d[0]);
    c.budget -= 1;
L_0011689C:
    c.r[21].d[0] = ld64((c.r[20].w[0]));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001168B0u);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x001168B0u) [[unlikely]] return; }
L_001168B0:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001168C0u);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x001168C0u) [[unlikely]] return; }
L_001168C0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st64((c.r[20].w[0] + 8u), c.r[17].d[0]);
    c.budget -= 4;
    { const bool t = c.r[30].sd[0] >= 0; c.r[2].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_00116A20; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001168E4u);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x001168E4u) [[unlikely]] return; }
L_001168E4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[20].w[0]), c.r[2].d[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00116A10; } }
L_001168F8:
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 20));  goto L_00116928; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00116910u);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x00116910u) [[unlikely]] return; }
L_00116910:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    st64((c.r[20].w[0]), c.r[3].d[0]);
    st64((c.r[20].w[0] + 8u), c.r[3].d[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00116A20; } }
    c.budget -= 1;
L_00116928:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    set32(c.r[19], c.r[4].w[0] - 1046u);
    set32(c.r[3], c.r[19].w[0] << 20);
    set32(c.r[3], c.r[16].w[0] - c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[17].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[18].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[16], 0u + 1u);
    c.budget -= 12;
L_00116958:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00116964u); set32(c.r[16], c.r[16].w[0] - 1u);  if (depth < kMaxDepth) unit_0007(c, 78u, depth + 1u); else { c.pc = 0x0011CFB0u; return; } if (c.pc != 0x00116964u) [[unlikely]] return; }
L_00116964:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011696Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 75u, depth + 1u); else { c.pc = 0x0011CEF8u; return; } if (c.pc != 0x0011696Cu) [[unlikely]] return; }
L_0011696C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st64((c.r[18].w[0]), c.r[2].d[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00116980u); set32(c.r[18], c.r[18].w[0] + 8u);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x00116980u) [[unlikely]] return; }
L_00116980:
    c.r[5].d[0] = 0ull | 33504ull;
    c.r[5].d[0] = c.r[5].d[0] << 47;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00116994u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00116994u) [[unlikely]] return; }
L_00116994:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00116958u | kUnwind; return; } goto L_00116958; } }
    set32(c.r[18], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[29].w[0] + 16u);  if (t) { goto L_001169B4; } }
L_001169B0:
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 1;
L_001169B4:
    c.r[4].d[0] = ld64((c.r[16].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001169C4u); set32(c.r[16], c.r[16].w[0] - 8u);  if (depth < kMaxDepth) unit_0007(c, 71u, depth + 1u); else { c.pc = 0x0011CEA8u; return; } if (c.pc != 0x001169C4u) [[unlikely]] return; }
L_001169C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[9].sd[0] = static_cast<std::int32_t>(0x00450000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001169B0u | kUnwind; return; } goto L_001169B0; } }
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[9], c.r[9].w[0] + 16872u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001169E8u); set32(c.r[8], 0u + 2u);  if (depth < kMaxDepth) unit_0005(c, 472u, depth + 1u); else { c.pc = 0x00117EC8u; return; } if (c.pc != 0x001169E8u) [[unlikely]] return; }
L_001169E8:
    c.budget -= 2;
    { const bool t = c.r[30].sd[0] >= 0; c.r[22].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00116A20; } }
    c.r[5].d[0] = ld64((c.r[20].w[0]));
    c.r[16].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00116A04u);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x00116A04u) [[unlikely]] return; }
L_00116A04:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld64((c.r[20].w[0] + 8u));
    st64((c.r[20].w[0]), c.r[2].d[0]);
    c.budget -= 3;
L_00116A10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00116A18u);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x00116A18u) [[unlikely]] return; }
L_00116A18:
    st64((c.r[20].w[0] + 8u), c.r[2].d[0]);
    set32(c.r[2], 0u - c.r[22].w[0]);
    c.budget -= 2;
L_00116A20:
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
L_00116A50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FF00000u);
    c.r[2].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 17;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; st64((c.r[29].w[0] + 48u), c.r[31].d[0]);  if (t) { goto L_00116AB8; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00116AA0u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00116AA0u) [[unlikely]] return; }
L_00116AA0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00116AB0u);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x00116AB0u) [[unlikely]] return; }
L_00116AB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00116D4C; } }
L_00116AB8:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 20));  if (t) { goto L_00116B08; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00116D4C; }
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_00116B08; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00116AF0u);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x00116AF0u) [[unlikely]] return; }
L_00116AF0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00116B00u);  if (depth < kMaxDepth) unit_0007(c, 65u, depth + 1u); else { c.pc = 0x0011CC10u; return; } if (c.pc != 0x00116B00u) [[unlikely]] return; }
L_00116B00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00116D4C; } }
L_00116B08:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x000F0000u);  if (t) { goto L_00116B80; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (t) { goto L_00116B38; } }
L_00116B18:
    set32(c.r[2], c.r[7].w[0] >> 11);
    set32(c.r[7], c.r[7].w[0] << 21);
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[17], c.r[17].w[0] - 21u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00116B18u | kUnwind; return; } goto L_00116B18; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.budget -= 1;
L_00116B38:
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00116B64; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.budget -= 1;
L_00116B48:
    set32(c.r[5], c.r[5].w[0] << 1);
    c.r[2].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00116B48u | kUnwind; return; } goto L_00116B48; } }
L_00116B64:
    set32(c.r[2], 0u - c.r[4].w[0]);
    set32(c.r[3], c.r[17].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[7].w[0] >> (c.r[2].w[0] & 31u));
    set32(c.r[7], c.r[7].w[0] << (c.r[4].w[0] & 31u));
    set32(c.r[17], c.r[3].w[0] + 1u);
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.budget -= 7;
L_00116B80:
    set32(c.r[17], c.r[17].w[0] - 1023u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[17].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] | c.r[4].d[0];  if (t) { goto L_00116BB0; } }
    c.r[2].d[0] = c.r[7].d[0] & c.r[20].d[0];
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] >> 31);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 5;
L_00116BB0:
    c.r[2].d[0] = c.r[7].d[0] & c.r[20].d[0];
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] >> 31);
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 1));
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.r[12].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.r[11].d[0] = 0ull + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.r[19].d[0] = 0ull + 0ull;
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.budget -= 12;
L_00116BE0:
    set32(c.r[3], c.r[11].w[0] + c.r[9].w[0]);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[7].d[0] & c.r[20].d[0];  if (t) { goto L_00116BFC; } }
    set32(c.r[5], c.r[5].w[0] - c.r[3].w[0]);
    set32(c.r[11], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[19], c.r[19].w[0] + c.r[9].w[0]);
    c.budget -= 3;
L_00116BFC:
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] >> 31);
    set32(c.r[9], c.r[9].w[0] >> 1);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[9].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00116BE0u | kUnwind; return; } goto L_00116BE0; } }
    c.r[9].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 1;
L_00116C18:
    c.r[3].d[0] = c.r[11].d[0] + 0ull;
    set32(c.r[4], c.r[12].w[0] + c.r[9].w[0]);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.r[10].d[0] = c.r[4].d[0] & c.r[20].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[8].d[0] = c.r[7].d[0] < c.r[4].d[0] ? 1ull : 0ull;  if (t) { goto L_00116C40; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; c.r[2].d[0] = c.r[7].d[0] & c.r[20].d[0];  if (t) { goto L_00116C68; } }
    c.budget -= 2;
    if (c.r[8].d[0] != 0ull) { set32(c.r[7], c.r[7].w[0] << 1);  goto L_00116C6C; }
L_00116C40:
    set32(c.r[12], c.r[4].w[0] + c.r[9].w[0]);
    c.budget -= 3;
    { const bool t = c.r[10].d[0] != c.r[20].d[0]; c.r[6].d[0] = c.r[12].d[0] & c.r[20].d[0];  if (t) { goto L_00116C54; } }
    set32(c.r[2], c.r[11].w[0] + 1u);
    if (c.r[6].d[0] == 0) c.r[11].d[0] = c.r[2].d[0];
    c.budget -= 2;
L_00116C54:
    set32(c.r[5], c.r[5].w[0] - c.r[3].w[0]);
    set32(c.r[7], c.r[7].w[0] - c.r[4].w[0]);
    set32(c.r[18], c.r[18].w[0] + c.r[9].w[0]);
    set32(c.r[5], c.r[5].w[0] - c.r[8].w[0]);
    c.r[2].d[0] = c.r[7].d[0] & c.r[20].d[0];
    c.budget -= 5;
L_00116C68:
    set32(c.r[7], c.r[7].w[0] << 1);
    c.budget -= 1;
L_00116C6C:
    set32(c.r[2], c.r[2].w[0] >> 31);
    set32(c.r[9], c.r[9].w[0] >> 1);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[9].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00116C18u | kUnwind; return; } goto L_00116C18; } }
    c.r[2].d[0] = c.r[5].d[0] | c.r[7].d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[7], c.r[18].w[0] >> 1);  if (t) { goto L_00116CF8; } }
    c.r[16].d[0] = 0ull | 65472ull;
    c.r[16].d[0] = c.r[16].d[0] << 46;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00116CA4u);  if (depth < kMaxDepth) unit_0007(c, 71u, depth + 1u); else { c.pc = 0x0011CEA8u; return; } if (c.pc != 0x00116CA4u) [[unlikely]] return; }
L_00116CA4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[2], 0u - 1u);  if (t) { goto L_00116CF4; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_00116CC0; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { goto L_00116CF4; } }
L_00116CC0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00116CD0u);  if (depth < kMaxDepth) unit_0007(c, 71u, depth + 1u); else { c.pc = 0x0011CEA8u; return; } if (c.pc != 0x00116CD0u) [[unlikely]] return; }
L_00116CD0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[18].d[0] & 1ull;  if (t) { goto L_00116CF0; } }
    set32(c.r[2], 0u - 2u);
    set32(c.r[3], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] ^ c.r[2].d[0];
    set32(c.r[18], c.r[18].w[0] + 2u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; if (c.r[2].d[0] == 0) c.r[19].d[0] = c.r[3].d[0];  if (t) { goto L_00116CF4; } }
L_00116CF0:
    set32(c.r[18], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_00116CF4:
    set32(c.r[7], c.r[18].w[0] >> 1);
    c.budget -= 1;
L_00116CF8:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[19].w[0]) >> 1));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3FE00000u);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[7].d[0] | c.r[20].d[0];
    c.r[4].d[0] = c.r[19].d[0] & 1ull;
    set32(c.r[3], c.r[17].w[0] << 20);
    if (c.r[4].d[0] != 0) c.r[7].d[0] = c.r[2].d[0];
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = c.r[5].d[0] << 32;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[21].d[0] = c.r[21].d[0] & c.r[2].d[0];
    set32(c.r[2], 0u - 1u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = c.r[7].d[0] << 32;
    c.r[21].d[0] = c.r[21].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[21].d[0] = c.r[21].d[0] & c.r[2].d[0];
    c.r[16].d[0] = c.r[21].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 21;
L_00116D4C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00116D70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.f[11] = c.f[12];
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 40u), c.f[22]);
    st32((c.r[29].w[0] + 32u), c.f[21]);
    set32(c.r[4], c.f[11]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; st32((c.r[29].w[0] + 24u), c.f[20]);  if (t) { goto L_00116DC0; } }
    c.f[0] = 0u;
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] > 0; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00117198; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[22] = ld32((c.r[29].w[0] + 40u));  if (t) { goto L_0011719C; } }
L_00116DC0:
    c.r[2].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3EFF0000u);  if (t) { goto L_00116DE8; } }
    c.f[0] = fp::sub(c.f[11], c.f[11]);
    fpu_div(c, 0u, c.f[0], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00117198; } }
    c.budget -= 1;
L_00116DE8:
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x23000000u);  if (t) { goto L_00116F20; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FC90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00117198; } }
    c.f[21] = fp::mul(c.f[11], c.f[11]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x38110000u);
    c.r[1].d[0] = c.r[1].d[0] | 61192ull;
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3A4F0000u);
    c.r[1].d[0] = c.r[1].d[0] | 32516ull;
    c.f[3] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBD240000u);
    c.r[1].d[0] = c.r[1].d[0] | 4422ull;
    c.f[7] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3D9D0000u);
    c.r[1].d[0] = c.r[1].d[0] | 50734ull;
    c.f[2] = c.r[1].w[0];
    c.f[1] = fp::mul(c.f[21], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF300000u);
    c.r[1].d[0] = c.r[1].d[0] | 13153ull;
    c.f[0] = c.r[1].w[0];
    c.f[2] = fp::mul(c.f[21], c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E4E0000u);
    c.r[1].d[0] = c.r[1].d[0] | 2728ull;
    c.f[6] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40010000u);
    c.r[1].d[0] = c.r[1].d[0] | 22317ull;
    c.f[4] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBEA60000u);
    c.r[1].d[0] = c.r[1].d[0] | 45200ull;
    c.f[9] = c.r[1].w[0];
    c.f[1] = fp::add(c.f[1], c.f[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[1].w[0];
    c.f[2] = fp::add(c.f[2], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x33A20000u);
    c.r[1].d[0] = c.r[1].d[0] | 8552ull;
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC0190000u);
    c.r[1].d[0] = c.r[1].d[0] | 53561ull;
    c.f[5] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E2A0000u);
    c.r[1].d[0] = c.r[1].d[0] | 43691ull;
    c.f[8] = c.r[1].w[0];
    c.f[1] = fp::mul(c.f[21], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FC90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4058ull;
    c.f[10] = c.r[1].w[0];
    c.f[2] = fp::mul(c.f[21], c.f[2]);
    c.f[1] = fp::add(c.f[1], c.f[7]);
    c.f[2] = fp::add(c.f[2], c.f[4]);
    c.f[1] = fp::mul(c.f[21], c.f[1]);
    c.f[2] = fp::mul(c.f[21], c.f[2]);
    c.f[1] = fp::add(c.f[1], c.f[6]);
    c.f[2] = fp::add(c.f[2], c.f[5]);
    c.f[1] = fp::mul(c.f[21], c.f[1]);
    c.f[2] = fp::mul(c.f[21], c.f[2]);
    c.f[1] = fp::add(c.f[1], c.f[9]);
    c.f[22] = fp::add(c.f[2], c.f[3]);
    c.f[1] = fp::mul(c.f[21], c.f[1]);
    c.f[1] = fp::add(c.f[1], c.f[8]);
    c.f[20] = fp::mul(c.f[21], c.f[1]);
    fpu_div(c, 12u, c.f[20], c.f[22]);
    c.f[1] = fp::mul(c.f[11], c.f[12]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = fp::sub(c.f[11], c.f[0]);
    c.budget -= 67;
    { const bool t = 0ull == 0ull; c.f[0] = fp::sub(c.f[10], c.f[0]);  if (t) { goto L_00117198; } }
    c.budget -= 1;
L_00116F20:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_00117050; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[10] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[3] = c.r[1].w[0];
    c.f[2] = fp::add(c.f[11], c.f[10]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x38110000u);
    c.r[1].d[0] = c.r[1].d[0] | 61192ull;
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3A4F0000u);
    c.r[1].d[0] = c.r[1].d[0] | 32516ull;
    c.f[5] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBD240000u);
    c.r[1].d[0] = c.r[1].d[0] | 4422ull;
    c.f[6] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3D9D0000u);
    c.r[1].d[0] = c.r[1].d[0] | 50734ull;
    c.f[1] = c.r[1].w[0];
    c.f[21] = fp::mul(c.f[2], c.f[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40010000u);
    c.r[1].d[0] = c.r[1].d[0] | 22317ull;
    c.f[2] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF300000u);
    c.r[1].d[0] = c.r[1].d[0] | 13153ull;
    c.f[4] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E4E0000u);
    c.r[1].d[0] = c.r[1].d[0] | 2728ull;
    c.f[7] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBEA60000u);
    c.r[1].d[0] = c.r[1].d[0] | 45200ull;
    c.f[9] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC0190000u);
    c.r[1].d[0] = c.r[1].d[0] | 53561ull;
    c.f[3] = c.r[1].w[0];
    c.f[1] = fp::mul(c.f[21], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E2A0000u);
    c.r[1].d[0] = c.r[1].d[0] | 43691ull;
    c.f[8] = c.r[1].w[0];
    c.f[12] = c.f[21];
    c.f[0] = fp::add(c.f[0], c.f[5]);
    c.f[1] = fp::add(c.f[1], c.f[4]);
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    c.f[1] = fp::mul(c.f[21], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[6]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    c.f[1] = fp::mul(c.f[21], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[7]);
    c.f[1] = fp::add(c.f[1], c.f[3]);
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    c.f[1] = fp::mul(c.f[21], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[9]);
    c.f[22] = fp::add(c.f[1], c.f[10]);
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[8]);
    c.budget -= 57;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011700Cu); c.f[20] = fp::mul(c.f[21], c.f[0]);  if (depth < kMaxDepth) unit_0005(c, 442u, depth + 1u); else { c.pc = 0x00117B18u; return; } if (c.pc != 0x0011700Cu) [[unlikely]] return; }
L_0011700C:
    c.f[13] = c.f[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x33A20000u);
    c.r[1].d[0] = c.r[1].d[0] | 8552ull;
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4058ull;
    c.f[2] = c.r[1].w[0];
    fpu_div(c, 12u, c.f[20], c.f[22]);
    c.f[0] = fp::mul(c.f[12], c.f[13]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[13], c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; c.f[0] = fp::sub(c.f[2], c.f[0]);  if (t) { goto L_00117194; } }
    c.budget -= 1;
L_00117050:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[20], c.f[11]);
    c.f[21] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117070u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_0005(c, 442u, depth + 1u); else { c.pc = 0x00117B18u; return; } if (c.pc != 0x00117070u) [[unlikely]] return; }
L_00117070:
    c.f[11] = c.f[0];
    c.f[13] = c.f[11];
    st32((c.r[29].w[0]), c.f[0]);
    set32(c.r[2], 0u - 4096u);
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.f[11] = c.r[3].w[0];
    c.f[3] = fp::mul(c.f[11], c.f[11]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x38110000u);
    c.r[1].d[0] = c.r[1].d[0] | 61192ull;
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3A4F0000u);
    c.r[1].d[0] = c.r[1].d[0] | 32516ull;
    c.f[5] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBD240000u);
    c.r[1].d[0] = c.r[1].d[0] | 4422ull;
    c.f[9] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3D9D0000u);
    c.r[1].d[0] = c.r[1].d[0] | 50734ull;
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF300000u);
    c.r[1].d[0] = c.r[1].d[0] | 13153ull;
    c.f[4] = c.r[1].w[0];
    c.f[1] = fp::mul(c.f[21], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E4E0000u);
    c.r[1].d[0] = c.r[1].d[0] | 2728ull;
    c.f[8] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40010000u);
    c.r[1].d[0] = c.r[1].d[0] | 22317ull;
    c.f[7] = c.r[1].w[0];
    c.f[3] = fp::sub(c.f[21], c.f[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBEA60000u);
    c.r[1].d[0] = c.r[1].d[0] | 45200ull;
    c.f[10] = c.r[1].w[0];
    c.f[2] = fp::add(c.f[13], c.f[11]);
    c.f[0] = fp::add(c.f[0], c.f[5]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E2A0000u);
    c.r[1].d[0] = c.r[1].d[0] | 43691ull;
    c.f[5] = c.r[1].w[0];
    c.f[1] = fp::add(c.f[1], c.f[4]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC0190000u);
    c.r[1].d[0] = c.r[1].d[0] | 53561ull;
    c.f[6] = c.r[1].w[0];
    fpu_div(c, 3u, c.f[3], c.f[2]);
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    c.f[1] = fp::mul(c.f[21], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[9]);
    c.f[1] = fp::add(c.f[1], c.f[7]);
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    c.f[1] = fp::mul(c.f[21], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[8]);
    c.f[1] = fp::add(c.f[1], c.f[6]);
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    c.f[1] = fp::mul(c.f[21], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[10]);
    c.f[22] = fp::add(c.f[1], c.f[20]);
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[5]);
    c.f[20] = fp::mul(c.f[21], c.f[0]);
    fpu_div(c, 12u, c.f[20], c.f[22]);
    c.f[0] = fp::mul(c.f[12], c.f[13]);
    c.f[0] = fp::add(c.f[0], c.f[3]);
    c.f[0] = fp::add(c.f[11], c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 73;
L_00117194:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00117198:
    c.f[22] = ld32((c.r[29].w[0] + 40u));
    c.budget -= 1;
L_0011719C:
    c.f[21] = ld32((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0] + 24u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001171B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.f[12]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 40u), c.f[22]);
    st32((c.r[29].w[0] + 32u), c.f[21]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[16].d[0] = c.r[17].d[0] & c.r[2].d[0];
    c.budget -= 13;
    { const bool t = c.r[16].d[0] != c.r[3].d[0]; st32((c.r[29].w[0] + 24u), c.f[20]);  if (t) { goto L_00117210; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FC90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4058ull;
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x33A20000u);
    c.r[1].d[0] = c.r[1].d[0] | 8552ull;
    c.f[0] = c.r[1].w[0];
    c.f[1] = fp::mul(c.f[12], c.f[1]);
    c.f[0] = fp::mul(c.f[12], c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.f[0] = fp::add(c.f[1], c.f[0]);  if (t) { goto L_00117548; } }
L_00117210:
    c.r[2].d[0] = c.r[3].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3EFF0000u);  if (t) { goto L_00117238; } }
    c.f[0] = fp::sub(c.f[12], c.f[12]);
    fpu_div(c, 0u, c.f[0], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0011754C; } }
    c.budget -= 1;
L_00117238:
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x31FF0000u);  if (t) { goto L_00117380; } }
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.f[20] = fp::mul(c.f[12], c.f[12]);  goto L_00117290; }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x71490000u);
    c.r[1].d[0] = c.r[1].d[0] | 62154ull;
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[12], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[0] = c.f[12];  if (t) { goto L_00117380; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0011754C; } }
    c.budget -= 1;
L_00117290:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x38110000u);
    c.r[1].d[0] = c.r[1].d[0] | 61192ull;
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3A4F0000u);
    c.r[1].d[0] = c.r[1].d[0] | 32516ull;
    c.f[3] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBD240000u);
    c.r[1].d[0] = c.r[1].d[0] | 4422ull;
    c.f[7] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3D9D0000u);
    c.r[1].d[0] = c.r[1].d[0] | 50734ull;
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF300000u);
    c.r[1].d[0] = c.r[1].d[0] | 13153ull;
    c.f[2] = c.r[1].w[0];
    c.f[1] = fp::mul(c.f[20], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E4E0000u);
    c.r[1].d[0] = c.r[1].d[0] | 2728ull;
    c.f[6] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40010000u);
    c.r[1].d[0] = c.r[1].d[0] | 22317ull;
    c.f[4] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBEA60000u);
    c.r[1].d[0] = c.r[1].d[0] | 45200ull;
    c.f[8] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[0], c.f[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E2A0000u);
    c.r[1].d[0] = c.r[1].d[0] | 43691ull;
    c.f[3] = c.r[1].w[0];
    c.f[1] = fp::add(c.f[1], c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC0190000u);
    c.r[1].d[0] = c.r[1].d[0] | 53561ull;
    c.f[5] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.f[1] = fp::mul(c.f[20], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[7]);
    c.f[1] = fp::add(c.f[1], c.f[4]);
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.f[1] = fp::mul(c.f[20], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[6]);
    c.f[1] = fp::add(c.f[1], c.f[5]);
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.f[1] = fp::mul(c.f[20], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[8]);
    c.f[22] = fp::add(c.f[1], c.f[2]);
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[3]);
    c.f[21] = fp::mul(c.f[20], c.f[0]);
    fpu_div(c, 7u, c.f[21], c.f[22]);
    c.f[0] = fp::mul(c.f[12], c.f[7]);
    c.budget -= 59;
    { const bool t = 0ull == 0ull; c.f[0] = fp::add(c.f[12], c.f[0]);  if (t) { goto L_00117548; } }
    c.budget -= 1;
L_00117380:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117388u);  if (depth < kMaxDepth) unit_0006(c, 204u, depth + 1u); else { c.pc = 0x0011A2B0u; return; } if (c.pc != 0x00117388u) [[unlikely]] return; }
L_00117388:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[10] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = c.r[1].w[0];
    c.f[7] = fp::sub(c.f[10], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x38110000u);
    c.r[1].d[0] = c.r[1].d[0] | 61192ull;
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3A4F0000u);
    c.r[1].d[0] = c.r[1].d[0] | 32516ull;
    c.f[4] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBD240000u);
    c.r[1].d[0] = c.r[1].d[0] | 4422ull;
    c.f[6] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3D9D0000u);
    c.r[1].d[0] = c.r[1].d[0] | 50734ull;
    c.f[1] = c.r[1].w[0];
    c.f[20] = fp::mul(c.f[7], c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E4E0000u);
    c.r[1].d[0] = c.r[1].d[0] | 2728ull;
    c.f[7] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF300000u);
    c.r[1].d[0] = c.r[1].d[0] | 13153ull;
    c.f[3] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40010000u);
    c.r[1].d[0] = c.r[1].d[0] | 22317ull;
    c.f[2] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBEA60000u);
    c.r[1].d[0] = c.r[1].d[0] | 45200ull;
    c.f[9] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC0190000u);
    c.r[1].d[0] = c.r[1].d[0] | 53561ull;
    c.f[5] = c.r[1].w[0];
    c.f[1] = fp::mul(c.f[20], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E2A0000u);
    c.r[1].d[0] = c.r[1].d[0] | 43691ull;
    c.f[8] = c.r[1].w[0];
    c.f[12] = c.f[20];
    c.f[0] = fp::add(c.f[0], c.f[4]);
    c.f[1] = fp::add(c.f[1], c.f[3]);
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.f[1] = fp::mul(c.f[20], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[6]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.f[1] = fp::mul(c.f[20], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[7]);
    c.f[1] = fp::add(c.f[1], c.f[5]);
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.f[1] = fp::mul(c.f[20], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[9]);
    c.f[22] = fp::add(c.f[1], c.f[10]);
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[8]);
    c.budget -= 57;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011746Cu); c.f[21] = fp::mul(c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_0005(c, 442u, depth + 1u); else { c.pc = 0x00117B18u; return; } if (c.pc != 0x0011746Cu) [[unlikely]] return; }
L_0011746C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F790000u);
    c.r[2].d[0] = c.r[2].d[0] | 39321ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.f[8] = c.f[0];  if (t) { goto L_001174C0; } }
    fpu_div(c, 7u, c.f[21], c.f[22]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x33A20000u);
    c.r[1].d[0] = c.r[1].d[0] | 8552ull;
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FC90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4058ull;
    c.f[2] = c.r[1].w[0];
    c.f[1] = fp::mul(c.f[8], c.f[7]);
    c.f[1] = fp::add(c.f[8], c.f[1]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; c.f[20] = fp::sub(c.f[2], c.f[1]);  if (t) { goto L_0011753C; } }
    c.budget -= 1;
L_001174C0:
    set32(c.r[2], c.f[8]);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 4096u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.f[7] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[7], c.f[7]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x33A20000u);
    c.r[1].d[0] = c.r[1].d[0] | 8552ull;
    c.f[3] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[6] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[20], c.f[0]);
    c.f[4] = fp::add(c.f[8], c.f[7]);
    fpu_div(c, 5u, c.f[21], c.f[22]);
    c.f[1] = fp::add(c.f[8], c.f[8]);
    c.f[2] = fp::add(c.f[7], c.f[7]);
    fpu_div(c, 0u, c.f[0], c.f[4]);
    c.f[22] = fp::sub(c.f[6], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[5]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.f[3] = fp::sub(c.f[3], c.f[0]);
    c.f[21] = fp::sub(c.f[1], c.f[3]);
    c.f[0] = fp::sub(c.f[21], c.f[22]);
    c.f[20] = fp::sub(c.f[6], c.f[0]);
    c.budget -= 31;
L_0011753C:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] > 0; c.f[0] = c.f[20];  if (t) { goto L_00117548; } }
    c.f[0] = c.f[20] ^ fp::kSign;
    c.budget -= 1;
L_00117548:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0011754C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[22] = ld32((c.r[29].w[0] + 40u));
    c.f[21] = ld32((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00117568:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.f[1] = c.f[12];
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[6], c.f[13]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[8].d[0] = c.r[6].d[0] & c.r[2].d[0];
    set32(c.r[5], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 12;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; c.r[7].d[0] = c.r[5].d[0] & c.r[2].d[0];  if (t) { goto L_001175A8; } }
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_0006(c, 193u, depth); }
L_001175A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 30));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[4].d[0] = c.r[4].d[0] & 2ull;
    set32(c.r[3], c.r[5].w[0] >> 31);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[3].d[0] | c.r[4].d[0];  if (t) { goto L_0011760C; } }
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4058ull;
    c.f[0] = c.r[1].w[0];
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;  if (t) { goto L_0011773C; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 3u);  goto L_001175F8; }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x007F0000u);  if (t) { goto L_00117610; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[1];  if (t) { goto L_0011773C; } }
L_001175F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC0490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4058ull;
    c.f[0] = c.r[1].w[0];
    c.budget -= 5;
    if (c.r[16].d[0] == c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00117740; }
L_0011760C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    c.budget -= 1;
L_00117610:
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[7].w[0] - c.r[8].w[0]);  if (t) { goto L_00117648; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBFC90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.budget -= 5;
    { const bool t = c.r[5].sd[0] < 0; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0011773C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FC90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));  if (t) { goto L_00117744; } }
L_00117648:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FC90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4060ull;
    c.f[2] = c.r[1].w[0];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 23));
    c.r[2].d[0] = c.r[3].sd[0] < 61ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0011769C; } }
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] >= 0; c.r[2].d[0] = c.r[3].sd[0] < -60ll ? 1ull : 0ull;  if (t) { goto L_00117678; } }
    c.f[2] = 0u;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0011769C; } }
L_00117678:
    fpu_div(c, 12u, c.f[1], c.f[13]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011768Cu);  if (depth < kMaxDepth) unit_0006(c, 204u, depth + 1u); else { c.pc = 0x0011A2B0u; return; } if (c.pc != 0x0011768Cu) [[unlikely]] return; }
L_0011768C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117694u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0006(c, 193u, depth + 1u); else { c.pc = 0x00119EF8u; return; } if (c.pc != 0x00117694u) [[unlikely]] return; }
L_00117694:
    c.f[2] = c.f[0];
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_0011769C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_001176D0; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 2u);  goto L_001176C0; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.f[0] = c.f[2];  if (t) { goto L_0011773C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00117718; } }
    c.budget -= 1;
L_001176C0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001176F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00117718; } }
L_001176D0:
    st32((c.r[29].w[0]), c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.f[2] = c.r[3].w[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[2];  if (t) { goto L_0011773C; } }
    c.budget -= 1;
L_001176F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x34220000u);
    c.r[1].d[0] = c.r[1].d[0] | 8552ull;
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4058ull;
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.f[0] = fp::sub(c.f[1], c.f[0]);  if (t) { goto L_0011773C; } }
L_00117718:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x34220000u);
    c.r[1].d[0] = c.r[1].d[0] | 8552ull;
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4058ull;
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 9;
L_0011773C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00117740:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 1;
L_00117744:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00117750:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.f[1] = c.f[12];
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    set32(c.r[18], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F490000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] | 4056ull;
    c.r[16].d[0] = c.r[18].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0] + 56u), c.r[31].d[0]);  if (t) { goto L_001177A0; } }
    st32((c.r[17].w[0]), c.f[1]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), 0u);  if (t) { goto L_00117B00; } }
    c.budget -= 1;
L_001177A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40160000u);
    c.r[2].d[0] = c.r[2].d[0] | 52195ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x43490000u);  if (t) { goto L_00117898; } }
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] <= 0; set32(c.r[3], 0u - 16u);  if (t) { goto L_00117828; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FC90000u);
    c.r[1].d[0] = c.r[1].d[0] | 3968ull;
    c.f[0] = c.r[1].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC90000u);
    c.r[3].d[0] = c.r[16].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 4048ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.f[12] = fp::sub(c.f[1], c.f[0]);  if (t) { goto L_001177F0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x37350000u);
    c.r[1].d[0] = c.r[1].d[0] | 17475ull;
    c.f[2] = c.r[1].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[1] = fp::sub(c.f[12], c.f[2]);  if (t) { goto L_00117810; } }
L_001177F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x37350000u);
    c.r[1].d[0] = c.r[1].d[0] | 17408ull;
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x2E850000u);
    c.r[1].d[0] = c.r[1].d[0] | 41736ull;
    c.f[2] = c.r[1].w[0];
    c.f[12] = fp::sub(c.f[12], c.f[0]);
    c.f[1] = fp::sub(c.f[12], c.f[2]);
    c.budget -= 8;
L_00117810:
    c.f[0] = fp::sub(c.f[12], c.f[1]);
    st32((c.r[17].w[0]), c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00117B00; } }
L_00117828:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FC90000u);
    c.r[1].d[0] = c.r[1].d[0] | 3968ull;
    c.f[0] = c.r[1].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC90000u);
    c.r[3].d[0] = c.r[16].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 4048ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.f[12] = fp::add(c.f[1], c.f[0]);  if (t) { goto L_00117860; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x37350000u);
    c.r[1].d[0] = c.r[1].d[0] | 17475ull;
    c.f[2] = c.r[1].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[1] = fp::add(c.f[12], c.f[2]);  if (t) { goto L_00117880; } }
    c.budget -= 1;
L_00117860:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x37350000u);
    c.r[1].d[0] = c.r[1].d[0] | 17408ull;
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x2E850000u);
    c.r[1].d[0] = c.r[1].d[0] | 41736ull;
    c.f[2] = c.r[1].w[0];
    c.f[12] = fp::add(c.f[12], c.f[0]);
    c.f[1] = fp::add(c.f[12], c.f[2]);
    c.budget -= 8;
L_00117880:
    c.f[0] = fp::sub(c.f[12], c.f[1]);
    st32((c.r[17].w[0]), c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00117B00; } }
L_00117898:
    c.r[2].d[0] = c.r[2].d[0] | 3968ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 23));  goto L_00117A38; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001178B0u);  if (depth < kMaxDepth) unit_0006(c, 204u, depth + 1u); else { c.pc = 0x0011A2B0u; return; } if (c.pc != 0x001178B0u) [[unlikely]] return; }
L_001178B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = c.r[1].w[0];
    c.f[5] = c.f[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F220000u);
    c.r[1].d[0] = c.r[1].d[0] | 63876ull;
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FC90000u);
    c.r[1].d[0] = c.r[1].d[0] | 3968ull;
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[5], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x37350000u);
    c.r[1].d[0] = c.r[1].d[0] | 17475ull;
    c.f[3] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.f[2] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[2]);
    c.f[6] = c.r[5].w[0];
    c.f[6] = fp::cvt_s_w(c.f[6]);
    c.r[2].d[0] = c.r[5].sd[0] < 32ll ? 1ull : 0ull;
    c.f[1] = fp::mul(c.f[6], c.f[1]);
    c.f[3] = fp::mul(c.f[6], c.f[3]);
    c.budget -= 27;
    { const bool t = c.r[2].d[0] == 0ull; c.f[4] = fp::sub(c.f[5], c.f[1]);  if (t) { goto L_00117948; } }
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], 0u - 256u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 18252u)));
    c.r[3].d[0] = c.r[16].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; c.f[0] = fp::sub(c.f[4], c.f[3]);  if (t) { goto L_0011794C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.f[0]);  if (t) { goto L_00117A0C; } }
    c.budget -= 1;
L_00117948:
    c.f[0] = fp::sub(c.f[4], c.f[3]);
    c.budget -= 1;
L_0011794C:
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 23));
    st32((c.r[17].w[0]), c.f[0]);
    st32((c.r[29].w[0] + 16u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[2], c.r[3].w[0] >> 23);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], c.r[4].w[0] - c.r[2].w[0]);
    c.r[3].d[0] = c.r[3].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 10;
    if (c.r[3].d[0] != 0ull) { c.f[1] = ld32((c.r[17].w[0]));  goto L_00117A10; }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x37350000u);
    c.r[1].d[0] = c.r[1].d[0] | 17408ull;
    c.f[0] = c.r[1].w[0];
    c.f[5] = c.f[4];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x2E850000u);
    c.r[1].d[0] = c.r[1].d[0] | 41736ull;
    c.f[2] = c.r[1].w[0];
    c.f[3] = fp::mul(c.f[6], c.f[0]);
    c.f[2] = fp::mul(c.f[6], c.f[2]);
    c.f[4] = fp::sub(c.f[4], c.f[3]);
    c.f[0] = fp::sub(c.f[5], c.f[4]);
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    c.f[3] = fp::sub(c.f[2], c.f[0]);
    c.f[1] = fp::sub(c.f[4], c.f[3]);
    st32((c.r[17].w[0]), c.f[1]);
    st32((c.r[29].w[0] + 20u), c.f[1]);
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[2], c.r[3].w[0] >> 23);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], c.r[4].w[0] - c.r[2].w[0]);
    c.r[3].d[0] = c.r[3].sd[0] < 26ll ? 1ull : 0ull;
    c.budget -= 23;
    if (c.r[3].d[0] != 0ull) { c.f[1] = ld32((c.r[17].w[0]));  goto L_00117A10; }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x2E850000u);
    c.r[1].d[0] = c.r[1].d[0] | 41728ull;
    c.f[0] = c.r[1].w[0];
    c.f[5] = c.f[4];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x248D0000u);
    c.r[1].d[0] = c.r[1].d[0] | 12594ull;
    c.f[2] = c.r[1].w[0];
    c.f[3] = fp::mul(c.f[6], c.f[0]);
    c.f[2] = fp::mul(c.f[6], c.f[2]);
    c.f[4] = fp::sub(c.f[4], c.f[3]);
    c.f[0] = fp::sub(c.f[5], c.f[4]);
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    c.f[3] = fp::sub(c.f[2], c.f[0]);
    c.f[1] = fp::sub(c.f[4], c.f[3]);
    st32((c.r[17].w[0]), c.f[1]);
    c.budget -= 15;
L_00117A0C:
    c.f[1] = ld32((c.r[17].w[0]));
    c.budget -= 1;
L_00117A10:
    c.f[0] = fp::sub(c.f[4], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    c.budget -= 4;
    { const bool t = c.r[18].sd[0] >= 0; st32((c.r[17].w[0] + 4u), c.f[0]);  if (t) { goto L_00117A30; } }
    c.f[1] = c.f[1] ^ fp::kSign;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - c.r[5].w[0]);  if (t) { goto L_00117AF4; } }
    c.budget -= 1;
L_00117A30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00117B00; } }
L_00117A38:
    set32(c.r[6], c.r[2].w[0] - 134u);
    set32(c.r[3], c.r[6].w[0] << 23);
    set32(c.r[16], c.r[16].w[0] - c.r[3].w[0]);
    c.f[12] = c.r[16].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.f[2] = c.r[1].w[0];
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 8;
L_00117A58:
    c.f[0] = fp::cvt_w_s(c.f[12]);
    set32(c.r[2], c.f[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::sub(c.f[12], c.f[0]);
    st32((c.r[4].w[0]), c.f[0]);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 11;
    { const bool t = c.r[3].sd[0] >= 0; c.f[12] = fp::mul(c.f[1], c.f[2]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00117A58u | kUnwind; return; } goto L_00117A58; } }
    c.f[1] = 0u;
    c.f[0] = c.f[12];
    st32((c.r[29].w[0] + 8u), c.f[12]);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[7], 0u + 3u);  if (t) { goto L_00117AC4; } }
    set32(c.r[2], c.r[29].w[0] + 8u);
    c.budget -= 2;
L_00117AA8:
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[7], c.r[7].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00117AA8u | kUnwind; return; } goto L_00117AA8; } }
L_00117AC4:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[9], c.r[9].w[0] + 17464u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117ADCu); set32(c.r[8], 0u + 2u);  if (depth < kMaxDepth) unit_0006(c, 121u, depth + 1u); else { c.pc = 0x00118DC0u; return; } if (c.pc != 0x00117ADCu) [[unlikely]] return; }
L_00117ADC:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] >= 0; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00117B00; } }
    c.f[1] = ld32((c.r[17].w[0]));
    set32(c.r[2], 0u - c.r[5].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = c.f[1] ^ fp::kSign;
    c.budget -= 4;
L_00117AF4:
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[17].w[0]), c.f[1]);
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.budget -= 3;
L_00117B00:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00117B18:
    set32(c.r[3], c.f[12]);
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; c.f[0] = c.f[12];  if (t) { goto L_00117B5C; } }
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] >= 0; set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 23));  if (t) { goto L_00117B68; } }
    c.f[0] = fp::sub(c.f[12], c.f[12]);
    fpu_div(c, 0u, c.f[0], c.f[0]);
    c.budget -= 4;
L_00117B5C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00117B68:
    set32(c.r[7], c.r[7].w[0] - 127u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[4].d[0] = c.r[7].d[0] & 1ull;
    c.r[5].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] << (c.r[4].w[0] & 31u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x01000000u);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 1));
    set32(c.r[5], c.r[5].w[0] << 1);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 12;
L_00117B98:
    set32(c.r[3], c.r[8].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[4].w[0] >> 1);  goto L_00117BB8; }
    set32(c.r[5], c.r[5].w[0] - c.r[3].w[0]);
    set32(c.r[8], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] >> 1);
    c.budget -= 4;
L_00117BB8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00117B98u | kUnwind; return; } goto L_00117B98; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; c.r[2].d[0] = c.r[6].d[0] & 1ull;  if (t) { goto L_00117BCC; } }
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_00117BCC:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 1));
    set32(c.r[3], c.r[7].w[0] << 23);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    c.f[0] = c.r[5].w[0];
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00117BF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E3F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[18].d[0] = c.r[18].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 20;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0] + 56u), c.r[31].d[0]);  if (t) { goto L_00117C60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117C48u);  if (depth < kMaxDepth) unit_0007(c, 78u, depth + 1u); else { c.pc = 0x0011CFB0u; return; } if (c.pc != 0x00117C48u) [[unlikely]] return; }
L_00117C48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00117C60; } }
    c.r[2].d[0] = 0ull | 65472ull;
    c.r[2].d[0] = c.r[2].d[0] << 46;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));  if (t) { goto L_00117EA4; } }
L_00117C60:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117C70u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00117C70u) [[unlikely]] return; }
L_00117C70:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 18480u));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117C88u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00117C88u) [[unlikely]] return; }
L_00117C88:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 18488u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117C9Cu);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x00117C9Cu) [[unlikely]] return; }
L_00117C9C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117CACu);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00117CACu) [[unlikely]] return; }
L_00117CAC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 18496u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117CC0u);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x00117CC0u) [[unlikely]] return; }
L_00117CC0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117CD0u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00117CD0u) [[unlikely]] return; }
L_00117CD0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 18504u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117CE4u);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x00117CE4u) [[unlikely]] return; }
L_00117CE4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117CF4u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00117CF4u) [[unlikely]] return; }
L_00117CF4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 18512u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117D08u);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x00117D08u) [[unlikely]] return; }
L_00117D08:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117D18u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00117D18u) [[unlikely]] return; }
L_00117D18:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 18520u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117D2Cu);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x00117D2Cu) [[unlikely]] return; }
L_00117D2C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117D3Cu);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00117D3Cu) [[unlikely]] return; }
L_00117D3C:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FD30000u);
    c.r[2].d[0] = c.r[2].d[0] | 13106ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3FE90000u);  goto L_00117DD0; }
    c.r[5].d[0] = 0ull | 65408ull;
    c.r[5].d[0] = c.r[5].d[0] << 46;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117D68u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00117D68u) [[unlikely]] return; }
L_00117D68:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117D7Cu);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00117D7Cu) [[unlikely]] return; }
L_00117D7C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117D90u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00117D90u) [[unlikely]] return; }
L_00117D90:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117DA0u);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x00117DA0u) [[unlikely]] return; }
L_00117DA0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117DB0u);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x00117DB0u) [[unlikely]] return; }
L_00117DB0:
    c.r[4].d[0] = 0ull | 65472ull;
    c.r[4].d[0] = c.r[4].d[0] << 46;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117DC4u);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x00117DC4u) [[unlikely]] return; }
L_00117DC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00117EA0; } }
    c.budget -= 1;
L_00117DD0:
    c.r[17].d[0] = 0ull | 65352ull;
    c.r[17].d[0] = c.r[17].d[0] << 46;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0xFFE00000u);  if (t) { goto L_00117E08; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.r[19].d[0] = c.r[19].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[19].d[0] = c.r[19].d[0] | c.r[2].d[0];
    c.r[17].d[0] = c.r[19].d[0] & c.r[3].d[0];
    c.budget -= 9;
L_00117E08:
    c.r[5].d[0] = 0ull | 65408ull;
    c.r[5].d[0] = c.r[5].d[0] << 46;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117E1Cu);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00117E1Cu) [[unlikely]] return; }
L_00117E1C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117E2Cu);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x00117E2Cu) [[unlikely]] return; }
L_00117E2C:
    c.r[4].d[0] = 0ull | 65472ull;
    c.r[4].d[0] = c.r[4].d[0] << 46;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117E44u);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x00117E44u) [[unlikely]] return; }
L_00117E44:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117E58u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00117E58u) [[unlikely]] return; }
L_00117E58:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117E6Cu);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00117E6Cu) [[unlikely]] return; }
L_00117E6C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117E7Cu);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x00117E7Cu) [[unlikely]] return; }
L_00117E7C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117E8Cu);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x00117E8Cu) [[unlikely]] return; }
L_00117E8C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117E9Cu);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x00117E9Cu) [[unlikely]] return; }
L_00117E9C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00117EA0:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 1;
L_00117EA4:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00117EC8:
    set32(c.r[3], 0u + 24u);
    set32(c.r[10], c.r[6].w[0] - 3u);
    mmi::div(c, 0, c.r[10].w[0], c.r[3].w[0]);
    set32(c.r[2], c.r[8].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[1], c.r[1].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 18528u)));
    set32(c.r[29], c.r[29].w[0] - 704u);
    set32(c.r[7], c.r[7].w[0] - 1u);
    st64((c.r[29].w[0] + 624u), c.r[16].d[0]);
    st32((c.r[29].w[0] + 584u), c.r[2].w[0]);
    st64((c.r[29].w[0] + 632u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 640u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 648u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 656u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 664u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 672u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 680u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 688u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 696u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 568u), c.r[8].w[0]);
    st32((c.r[29].w[0] + 576u), c.r[7].w[0]);
    c.budget -= 24;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x00117F24u);  goto L_00117F28; }
L_00117F28:
    st32((c.r[29].w[0] + 560u), c.r[4].w[0]);
    set32(c.r[4], c.r[7].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 564u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 572u), c.r[9].w[0]);
    c.r[10].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.r[10].sd[0] < 0ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[10].d[0] + 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = 0ull;
    st32((c.r[29].w[0] + 580u), c.r[10].w[0]);
    st32((c.r[29].w[0] + 580u), c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[3], ld32((c.r[29].w[0] + 580u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[3].w[0] - c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] - c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] - 24u);
    c.budget -= 19;
    { const bool t = c.r[4].sd[0] < 0; st32((c.r[29].w[0] + 592u), c.r[6].w[0]);  if (t) { goto L_00117FC0; } }
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[18], c.r[4].w[0] + 1u);
    set32(c.r[19], c.r[2].w[0] + c.r[9].w[0]);
    set32(c.r[17], c.r[29].w[0] + 80u);
    c.budget -= 5;
L_00117F88:
    c.budget -= 2;
    if (c.r[16].sd[0] < 0) { set32(c.r[18], c.r[18].w[0] - 1u);  goto L_00117FA8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117F98u); set32(c.r[4], ld32((c.r[19].w[0])));  if (depth < kMaxDepth) unit_0007(c, 75u, depth + 1u); else { c.pc = 0x0011CEF8u; return; } if (c.pc != 0x00117F98u) [[unlikely]] return; }
L_00117F98:
    st64((c.r[17].w[0]), c.r[2].d[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] - 1u);  if (t) { goto L_00117FB0; } }
    c.budget -= 1;
L_00117FA8:
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[17].w[0]), c.r[4].d[0]);
    c.budget -= 2;
L_00117FB0:
    set32(c.r[17], c.r[17].w[0] + 8u);
    set32(c.r[19], c.r[19].w[0] + 4u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00117F88u | kUnwind; return; } goto L_00117F88; } }
L_00117FC0:
    set32(c.r[5], ld32((c.r[29].w[0] + 584u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] < 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0006(c, 7u, depth); } }
    set32(c.r[6], c.r[29].w[0] + 400u);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
L_00117FD8:
    set32(c.r[8], ld32((c.r[29].w[0] + 576u)));
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[8].sd[0] < 0; set32(c.r[2], c.r[8].w[0] + c.r[18].w[0]);  if (t) { [[clang::musttail]] return unit_0006(c, 4u, depth); } }
    set32(c.r[3], c.r[29].w[0] + 80u);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[19], ld32((c.r[29].w[0] + 560u)));
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[8].w[0] + 1u);
    c.budget -= 6;
    [[clang::musttail]] return unit_0006(c, 1u, depth);
}

}
