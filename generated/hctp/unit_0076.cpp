#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0076[4096] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0,
    0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0,
    0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0,
    22, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0,
    27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0,
    0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0,
    42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0,
    0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0,
    49, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0,
    0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0, 0,
    0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0,
    60, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0,
    0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 78, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 0, 82, 0,
    0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 0, 90, 0,
    0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0,
    95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0,
    101, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 0, 107, 0, 0, 0,
    0, 0, 0, 108, 0, 0, 109, 0, 0, 0, 0, 0, 0, 110, 0, 0, 111, 0, 0, 0, 0, 0, 0, 112, 0, 0, 113, 0, 0, 0, 0, 0,
    0, 114, 0, 0, 115, 0, 0, 0, 0, 0, 0, 116, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0,
    0, 120, 0, 0, 121, 0, 0, 0, 0, 0, 0, 122, 0, 0, 123, 0, 0, 0, 0, 0, 0, 124, 0, 0, 125, 0, 0, 0, 0, 0, 0, 126,
    0, 0, 127, 0, 0, 0, 0, 0, 0, 128, 0, 0, 129, 0, 0, 0, 0, 0, 0, 130, 0, 0, 131, 0, 0, 0, 0, 0, 0, 132, 0, 0,
    133, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 136, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 0,
    139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0,
    0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0,
    0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0,
    0, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0,
    0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0,
    158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0,
    163, 0, 0, 164, 165, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 169, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 173, 0, 0, 174, 0, 0, 0, 0, 0,
    0, 175, 0, 0, 176, 0, 0, 177, 0, 0, 178, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0,
    181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 184, 0, 185, 0, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0,
    0, 0, 0, 0, 0, 188, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0,
    0, 0, 0, 192, 0, 193, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 201,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0,
    0, 0, 0, 205, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 214, 0, 0, 0,
    0, 215, 0, 0, 0, 0, 216, 0, 217, 0, 0, 0, 0, 218, 0, 0, 0, 0, 219, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 0, 222, 0,
    223, 0, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 0, 228, 0, 0, 0, 0, 229, 0,
    0, 0, 0, 230, 0, 0, 0, 0, 231, 0, 232, 0, 0, 0, 0, 233, 0, 0, 0, 0, 234, 0, 0, 0, 0, 235, 0, 0, 0, 0, 236, 0,
    0, 0, 0, 237, 0, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 0, 240, 0, 0, 0, 0, 241, 0, 0, 0, 0, 242, 0, 243, 0,
    0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 0, 247, 0, 248, 0, 0, 0, 0, 249, 0, 0, 0, 0, 250, 0,
    0, 0, 0, 251, 0, 0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 0, 0, 254, 0, 255, 0, 0, 0, 0, 256, 0, 0, 0, 0, 257, 0,
    0, 0, 0, 258, 0, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0, 0, 0, 261, 0, 262, 0, 0, 0, 0, 263, 0, 0, 0, 0, 264, 0,
    0, 0, 0, 265, 0, 0, 0, 0, 266, 0, 267, 0, 0, 0, 0, 268, 0, 0, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0, 0, 0, 271, 0,
    0, 0, 0, 272, 0, 0, 0, 0, 273, 0, 274, 0, 0, 0, 0, 275, 0, 0, 0, 0, 276, 0, 0, 0, 0, 277, 0, 0, 0, 0, 278, 0,
    0, 0, 0, 279, 0, 0, 0, 0, 280, 0, 0, 0, 0, 281, 0, 0, 0, 0, 282, 0, 283, 0, 0, 0, 0, 284, 0, 0, 0, 0, 285, 0,
    0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 288, 0, 289, 0, 0, 0, 0, 290, 0, 0, 0, 0, 291, 0, 0, 0, 0, 292, 0, 0, 0, 0,
    293, 0, 0, 0, 0, 294, 0, 0, 0, 0, 295, 0, 296, 0, 297, 0, 0, 0, 0, 298, 0, 0, 0, 0, 299, 0, 0, 0, 0, 300, 0, 0,
    0, 0, 301, 0, 302, 0, 303, 0, 0, 0, 0, 304, 0, 0, 0, 0, 305, 0, 0, 0, 0, 306, 0, 0, 0, 0, 307, 0, 308, 0, 309, 0,
    0, 0, 0, 310, 0, 0, 0, 0, 311, 0, 0, 0, 0, 312, 0, 0, 0, 0, 313, 0, 0, 0, 0, 314, 0, 0, 0, 0, 315, 0, 316, 0,
    0, 0, 0, 317, 0, 0, 0, 0, 318, 0, 0, 0, 0, 319, 0, 0, 0, 0, 320, 0, 0, 0, 0, 321, 0, 0, 0, 0, 322, 0, 323, 0,
    0, 0, 0, 324, 0, 0, 0, 0, 325, 0, 326, 0, 327, 0, 0, 0, 0, 328, 0, 0, 0, 0, 329, 0, 0, 0, 0, 330, 0, 0, 0, 0,
    331, 0, 332, 0, 333, 0, 334, 0, 0, 0, 0, 335, 0, 0, 0, 0, 336, 0, 0, 0, 0, 337, 0, 0, 0, 0, 338, 0, 339, 0, 340, 0,
    341, 0, 0, 0, 0, 342, 0, 0, 0, 0, 343, 0, 0, 0, 0, 344, 0, 0, 0, 0, 345, 0, 346, 0, 0, 0, 0, 347, 0, 0, 0, 0,
    348, 0, 0, 0, 0, 349, 0, 0, 0, 0, 350, 0, 0, 0, 0, 351, 0, 0, 0, 0, 352, 0, 353, 0, 0, 0, 0, 354, 0, 0, 0, 0,
    355, 0, 0, 0, 0, 356, 0, 0, 0, 0, 357, 0, 0, 0, 0, 358, 0, 0, 0, 0, 359, 0, 360, 0, 0, 0, 0, 361, 0, 0, 0, 0,
    362, 0, 0, 0, 0, 363, 0, 0, 0, 0, 364, 0, 0, 0, 0, 365, 0, 0, 0, 0, 366, 0, 367, 0, 368, 0, 369, 0, 0, 0, 0, 370,
    0, 0, 0, 0, 371, 0, 0, 0, 0, 372, 0, 0, 0, 0, 373, 0, 0, 0, 0, 374, 0, 0, 0, 0, 375, 0, 0, 0, 0, 376, 0, 0,
    0, 0, 377, 0, 378, 0, 0, 0, 0, 379, 0, 0, 0, 0, 380, 0, 0, 0, 0, 381, 0, 0, 0, 0, 382, 0, 0, 0, 0, 383, 0, 0,
    0, 0, 384, 0, 0, 0, 0, 385, 0, 0, 0, 0, 386, 0, 387, 0, 0, 0, 0, 388, 0, 0, 0, 0, 389, 0, 0, 0, 0, 390, 0, 0,
    0, 0, 391, 0, 0, 0, 0, 392, 0, 0, 0, 0, 393, 0, 394, 0, 0, 0, 0, 395, 0, 0, 0, 0, 396, 0, 0, 0, 0, 397, 0, 0,
    0, 0, 398, 0, 0, 0, 0, 399, 0, 0, 0, 0, 400, 0, 0, 0, 0, 401, 0, 0, 0, 0, 402, 0, 403, 0, 0, 0, 0, 404, 0, 0,
    0, 0, 405, 0, 406, 0, 407, 0, 408, 0, 0, 0, 0, 409, 0, 0, 0, 0, 410, 0, 0, 0, 0, 411, 0, 0, 0, 0, 412, 0, 413, 0,
    0, 0, 0, 414, 0, 0, 0, 0, 415, 0, 0, 0, 0, 416, 0, 0, 0, 0, 417, 0, 418, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0,
    420, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0,
    425, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0,
    0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 439, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 441, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0,
    0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 457, 0, 0, 0, 458, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0,
    0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 465, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 467, 0, 0, 468, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471,
    0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 475, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 478,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 483, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 487, 0, 0, 0,
    0, 0, 488, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 496, 0, 0, 0, 0, 497, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0,
    500, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    504, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0,
    0, 506, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 509,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 511, 0, 0, 0, 0, 0, 0, 512, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 514, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 515, 0, 0, 0, 0, 516, 0, 0, 0, 0, 517, 0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 519, 0, 520, 0, 0, 0, 0, 521, 0, 0, 522, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 524, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 529, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 531, 0, 0,
    0, 0, 532, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0, 0, 535, 0, 0, 0, 536, 0, 0, 0,
    537, 0, 0, 0, 538, 0, 0, 0, 539, 0, 0, 0, 0, 0, 540, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0, 0, 0, 0, 542, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0, 544, 0, 0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 546, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0076(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002D8000;
    case 2u: goto L_002D8018;
    case 3u: goto L_002D8088;
    case 4u: goto L_002D80B4;
    case 5u: goto L_002D80E8;
    case 6u: goto L_002D8110;
    case 7u: goto L_002D8120;
    case 8u: goto L_002D8294;
    case 9u: goto L_002D82AC;
    case 10u: goto L_002D82C0;
    case 11u: goto L_002D82D0;
    case 12u: goto L_002D82E0;
    case 13u: goto L_002D82F4;
    case 14u: goto L_002D8318;
    case 15u: goto L_002D83F0;
    case 16u: goto L_002D843C;
    case 17u: goto L_002D8464;
    case 18u: goto L_002D8474;
    case 19u: goto L_002D848C;
    case 20u: goto L_002D84B0;
    case 21u: goto L_002D84F0;
    case 22u: goto L_002D8500;
    case 23u: goto L_002D851C;
    case 24u: goto L_002D8530;
    case 25u: goto L_002D8550;
    case 26u: goto L_002D8564;
    case 27u: goto L_002D8580;
    case 28u: goto L_002D85A8;
    case 29u: goto L_002D85B8;
    case 30u: goto L_002D85CC;
    case 31u: goto L_002D85E0;
    case 32u: goto L_002D8604;
    case 33u: goto L_002D8614;
    case 34u: goto L_002D8648;
    case 35u: goto L_002D8660;
    case 36u: goto L_002D869C;
    case 37u: goto L_002D86B8;
    case 38u: goto L_002D8700;
    case 39u: goto L_002D8728;
    case 40u: goto L_002D8740;
    case 41u: goto L_002D8768;
    case 42u: goto L_002D8780;
    case 43u: goto L_002D87B4;
    case 44u: goto L_002D87F8;
    case 45u: goto L_002D8810;
    case 46u: goto L_002D882C;
    case 47u: goto L_002D8844;
    case 48u: goto L_002D8860;
    case 49u: goto L_002D8880;
    case 50u: goto L_002D8894;
    case 51u: goto L_002D88F0;
    case 52u: goto L_002D8910;
    case 53u: goto L_002D895C;
    case 54u: goto L_002D896C;
    case 55u: goto L_002D8984;
    case 56u: goto L_002D89A0;
    case 57u: goto L_002D89B4;
    case 58u: goto L_002D89D0;
    case 59u: goto L_002D89EC;
    case 60u: goto L_002D8A00;
    case 61u: goto L_002D8A10;
    case 62u: goto L_002D8A34;
    case 63u: goto L_002D8A50;
    case 64u: goto L_002D8A6C;
    case 65u: goto L_002D8AB0;
    case 66u: goto L_002D8ACC;
    case 67u: goto L_002D8AE0;
    case 68u: goto L_002D8AF0;
    case 69u: goto L_002D8B20;
    case 70u: goto L_002D8B3C;
    case 71u: goto L_002D8B74;
    case 72u: goto L_002D8B90;
    case 73u: goto L_002D8BDC;
    case 74u: goto L_002D8C04;
    case 75u: goto L_002D8C14;
    case 76u: goto L_002D8C2C;
    case 77u: goto L_002D8C50;
    case 78u: goto L_002D8C84;
    case 79u: goto L_002D8CA0;
    case 80u: goto L_002D8CD0;
    case 81u: goto L_002D8CEC;
    case 82u: goto L_002D8CF8;
    case 83u: goto L_002D8D1C;
    case 84u: goto L_002D8D38;
    case 85u: goto L_002D8D50;
    case 86u: goto L_002D8D98;
    case 87u: goto L_002D8DB0;
    case 88u: goto L_002D8DD0;
    case 89u: goto L_002D8DE4;
    case 90u: goto L_002D8DF8;
    case 91u: goto L_002D8E0C;
    case 92u: goto L_002D8E44;
    case 93u: goto L_002D8E50;
    case 94u: goto L_002D8E70;
    case 95u: goto L_002D8E80;
    case 96u: goto L_002D8EE0;
    case 97u: goto L_002D8EF4;
    case 98u: goto L_002D8F20;
    case 99u: goto L_002D8F50;
    case 100u: goto L_002D8F68;
    case 101u: goto L_002D8F80;
    case 102u: goto L_002D8F90;
    case 103u: goto L_002D8FA0;
    case 104u: goto L_002D8FB0;
    case 105u: goto L_002D8FC8;
    case 106u: goto L_002D8FE4;
    case 107u: goto L_002D8FF0;
    case 108u: goto L_002D900C;
    case 109u: goto L_002D9018;
    case 110u: goto L_002D9034;
    case 111u: goto L_002D9040;
    case 112u: goto L_002D905C;
    case 113u: goto L_002D9068;
    case 114u: goto L_002D9084;
    case 115u: goto L_002D9090;
    case 116u: goto L_002D90AC;
    case 117u: goto L_002D90B8;
    case 118u: goto L_002D90D0;
    case 119u: goto L_002D90EC;
    case 120u: goto L_002D9104;
    case 121u: goto L_002D9110;
    case 122u: goto L_002D912C;
    case 123u: goto L_002D9138;
    case 124u: goto L_002D9154;
    case 125u: goto L_002D9160;
    case 126u: goto L_002D917C;
    case 127u: goto L_002D9188;
    case 128u: goto L_002D91A4;
    case 129u: goto L_002D91B0;
    case 130u: goto L_002D91CC;
    case 131u: goto L_002D91D8;
    case 132u: goto L_002D91F4;
    case 133u: goto L_002D9200;
    case 134u: goto L_002D9220;
    case 135u: goto L_002D925C;
    case 136u: goto L_002D9268;
    case 137u: goto L_002D92DC;
    case 138u: goto L_002D92F0;
    case 139u: goto L_002D9300;
    case 140u: goto L_002D936C;
    case 141u: goto L_002D9390;
    case 142u: goto L_002D93E0;
    case 143u: goto L_002D93F0;
    case 144u: goto L_002D9404;
    case 145u: goto L_002D9430;
    case 146u: goto L_002D9460;
    case 147u: goto L_002D9478;
    case 148u: goto L_002D9490;
    case 149u: goto L_002D94A4;
    case 150u: goto L_002D94C8;
    case 151u: goto L_002D94F0;
    case 152u: goto L_002D9548;
    case 153u: goto L_002D9570;
    case 154u: goto L_002D958C;
    case 155u: goto L_002D95A0;
    case 156u: goto L_002D95C8;
    case 157u: goto L_002D95F0;
    case 158u: goto L_002D9600;
    case 159u: goto L_002D9630;
    case 160u: goto L_002D963C;
    case 161u: goto L_002D9648;
    case 162u: goto L_002D9674;
    case 163u: goto L_002D9680;
    case 164u: goto L_002D968C;
    case 165u: goto L_002D9690;
    case 166u: goto L_002D96B0;
    case 167u: goto L_002D96D4;
    case 168u: goto L_002D9724;
    case 169u: goto L_002D9730;
    case 170u: goto L_002D973C;
    case 171u: goto L_002D9780;
    case 172u: goto L_002D97D0;
    case 173u: goto L_002D97DC;
    case 174u: goto L_002D97E8;
    case 175u: goto L_002D9804;
    case 176u: goto L_002D9810;
    case 177u: goto L_002D981C;
    case 178u: goto L_002D9828;
    case 179u: goto L_002D9840;
    case 180u: goto L_002D9860;
    case 181u: goto L_002D9880;
    case 182u: goto L_002D989C;
    case 183u: goto L_002D98B4;
    case 184u: goto L_002D98C0;
    case 185u: goto L_002D98C8;
    case 186u: goto L_002D98E0;
    case 187u: goto L_002D98F0;
    case 188u: goto L_002D9914;
    case 189u: goto L_002D9920;
    case 190u: goto L_002D9948;
    case 191u: goto L_002D9970;
    case 192u: goto L_002D998C;
    case 193u: goto L_002D9994;
    case 194u: goto L_002D99A8;
    case 195u: goto L_002D99C0;
    case 196u: goto L_002D9A00;
    case 197u: goto L_002D9A28;
    case 198u: goto L_002D9A34;
    case 199u: goto L_002D9A4C;
    case 200u: goto L_002D9A60;
    case 201u: goto L_002D9A7C;
    case 202u: goto L_002D9AA8;
    case 203u: goto L_002D9ABC;
    case 204u: goto L_002D9AE8;
    case 205u: goto L_002D9B0C;
    case 206u: goto L_002D9B24;
    case 207u: goto L_002D9B40;
    case 208u: goto L_002D9B70;
    case 209u: goto L_002D9B98;
    case 210u: goto L_002D9BAC;
    case 211u: goto L_002D9BC0;
    case 212u: goto L_002D9BD4;
    case 213u: goto L_002D9BE8;
    case 214u: goto L_002D9BF0;
    case 215u: goto L_002D9C04;
    case 216u: goto L_002D9C18;
    case 217u: goto L_002D9C20;
    case 218u: goto L_002D9C34;
    case 219u: goto L_002D9C48;
    case 220u: goto L_002D9C50;
    case 221u: goto L_002D9C64;
    case 222u: goto L_002D9C78;
    case 223u: goto L_002D9C80;
    case 224u: goto L_002D9C94;
    case 225u: goto L_002D9CA8;
    case 226u: goto L_002D9CBC;
    case 227u: goto L_002D9CD0;
    case 228u: goto L_002D9CE4;
    case 229u: goto L_002D9CF8;
    case 230u: goto L_002D9D0C;
    case 231u: goto L_002D9D20;
    case 232u: goto L_002D9D28;
    case 233u: goto L_002D9D3C;
    case 234u: goto L_002D9D50;
    case 235u: goto L_002D9D64;
    case 236u: goto L_002D9D78;
    case 237u: goto L_002D9D8C;
    case 238u: goto L_002D9DA0;
    case 239u: goto L_002D9DB4;
    case 240u: goto L_002D9DC8;
    case 241u: goto L_002D9DDC;
    case 242u: goto L_002D9DF0;
    case 243u: goto L_002D9DF8;
    case 244u: goto L_002D9E0C;
    case 245u: goto L_002D9E20;
    case 246u: goto L_002D9E34;
    case 247u: goto L_002D9E48;
    case 248u: goto L_002D9E50;
    case 249u: goto L_002D9E64;
    case 250u: goto L_002D9E78;
    case 251u: goto L_002D9E8C;
    case 252u: goto L_002D9EA0;
    case 253u: goto L_002D9EB4;
    case 254u: goto L_002D9EC8;
    case 255u: goto L_002D9ED0;
    case 256u: goto L_002D9EE4;
    case 257u: goto L_002D9EF8;
    case 258u: goto L_002D9F0C;
    case 259u: goto L_002D9F20;
    case 260u: goto L_002D9F34;
    case 261u: goto L_002D9F48;
    case 262u: goto L_002D9F50;
    case 263u: goto L_002D9F64;
    case 264u: goto L_002D9F78;
    case 265u: goto L_002D9F8C;
    case 266u: goto L_002D9FA0;
    case 267u: goto L_002D9FA8;
    case 268u: goto L_002D9FBC;
    case 269u: goto L_002D9FD0;
    case 270u: goto L_002D9FE4;
    case 271u: goto L_002D9FF8;
    case 272u: goto L_002DA00C;
    case 273u: goto L_002DA020;
    case 274u: goto L_002DA028;
    case 275u: goto L_002DA03C;
    case 276u: goto L_002DA050;
    case 277u: goto L_002DA064;
    case 278u: goto L_002DA078;
    case 279u: goto L_002DA08C;
    case 280u: goto L_002DA0A0;
    case 281u: goto L_002DA0B4;
    case 282u: goto L_002DA0C8;
    case 283u: goto L_002DA0D0;
    case 284u: goto L_002DA0E4;
    case 285u: goto L_002DA0F8;
    case 286u: goto L_002DA10C;
    case 287u: goto L_002DA120;
    case 288u: goto L_002DA128;
    case 289u: goto L_002DA130;
    case 290u: goto L_002DA144;
    case 291u: goto L_002DA158;
    case 292u: goto L_002DA16C;
    case 293u: goto L_002DA180;
    case 294u: goto L_002DA194;
    case 295u: goto L_002DA1A8;
    case 296u: goto L_002DA1B0;
    case 297u: goto L_002DA1B8;
    case 298u: goto L_002DA1CC;
    case 299u: goto L_002DA1E0;
    case 300u: goto L_002DA1F4;
    case 301u: goto L_002DA208;
    case 302u: goto L_002DA210;
    case 303u: goto L_002DA218;
    case 304u: goto L_002DA22C;
    case 305u: goto L_002DA240;
    case 306u: goto L_002DA254;
    case 307u: goto L_002DA268;
    case 308u: goto L_002DA270;
    case 309u: goto L_002DA278;
    case 310u: goto L_002DA28C;
    case 311u: goto L_002DA2A0;
    case 312u: goto L_002DA2B4;
    case 313u: goto L_002DA2C8;
    case 314u: goto L_002DA2DC;
    case 315u: goto L_002DA2F0;
    case 316u: goto L_002DA2F8;
    case 317u: goto L_002DA30C;
    case 318u: goto L_002DA320;
    case 319u: goto L_002DA334;
    case 320u: goto L_002DA348;
    case 321u: goto L_002DA35C;
    case 322u: goto L_002DA370;
    case 323u: goto L_002DA378;
    case 324u: goto L_002DA38C;
    case 325u: goto L_002DA3A0;
    case 326u: goto L_002DA3A8;
    case 327u: goto L_002DA3B0;
    case 328u: goto L_002DA3C4;
    case 329u: goto L_002DA3D8;
    case 330u: goto L_002DA3EC;
    case 331u: goto L_002DA400;
    case 332u: goto L_002DA408;
    case 333u: goto L_002DA410;
    case 334u: goto L_002DA418;
    case 335u: goto L_002DA42C;
    case 336u: goto L_002DA440;
    case 337u: goto L_002DA454;
    case 338u: goto L_002DA468;
    case 339u: goto L_002DA470;
    case 340u: goto L_002DA478;
    case 341u: goto L_002DA480;
    case 342u: goto L_002DA494;
    case 343u: goto L_002DA4A8;
    case 344u: goto L_002DA4BC;
    case 345u: goto L_002DA4D0;
    case 346u: goto L_002DA4D8;
    case 347u: goto L_002DA4EC;
    case 348u: goto L_002DA500;
    case 349u: goto L_002DA514;
    case 350u: goto L_002DA528;
    case 351u: goto L_002DA53C;
    case 352u: goto L_002DA550;
    case 353u: goto L_002DA558;
    case 354u: goto L_002DA56C;
    case 355u: goto L_002DA580;
    case 356u: goto L_002DA594;
    case 357u: goto L_002DA5A8;
    case 358u: goto L_002DA5BC;
    case 359u: goto L_002DA5D0;
    case 360u: goto L_002DA5D8;
    case 361u: goto L_002DA5EC;
    case 362u: goto L_002DA600;
    case 363u: goto L_002DA614;
    case 364u: goto L_002DA628;
    case 365u: goto L_002DA63C;
    case 366u: goto L_002DA650;
    case 367u: goto L_002DA658;
    case 368u: goto L_002DA660;
    case 369u: goto L_002DA668;
    case 370u: goto L_002DA67C;
    case 371u: goto L_002DA690;
    case 372u: goto L_002DA6A4;
    case 373u: goto L_002DA6B8;
    case 374u: goto L_002DA6CC;
    case 375u: goto L_002DA6E0;
    case 376u: goto L_002DA6F4;
    case 377u: goto L_002DA708;
    case 378u: goto L_002DA710;
    case 379u: goto L_002DA724;
    case 380u: goto L_002DA738;
    case 381u: goto L_002DA74C;
    case 382u: goto L_002DA760;
    case 383u: goto L_002DA774;
    case 384u: goto L_002DA788;
    case 385u: goto L_002DA79C;
    case 386u: goto L_002DA7B0;
    case 387u: goto L_002DA7B8;
    case 388u: goto L_002DA7CC;
    case 389u: goto L_002DA7E0;
    case 390u: goto L_002DA7F4;
    case 391u: goto L_002DA808;
    case 392u: goto L_002DA81C;
    case 393u: goto L_002DA830;
    case 394u: goto L_002DA838;
    case 395u: goto L_002DA84C;
    case 396u: goto L_002DA860;
    case 397u: goto L_002DA874;
    case 398u: goto L_002DA888;
    case 399u: goto L_002DA89C;
    case 400u: goto L_002DA8B0;
    case 401u: goto L_002DA8C4;
    case 402u: goto L_002DA8D8;
    case 403u: goto L_002DA8E0;
    case 404u: goto L_002DA8F4;
    case 405u: goto L_002DA908;
    case 406u: goto L_002DA910;
    case 407u: goto L_002DA918;
    case 408u: goto L_002DA920;
    case 409u: goto L_002DA934;
    case 410u: goto L_002DA948;
    case 411u: goto L_002DA95C;
    case 412u: goto L_002DA970;
    case 413u: goto L_002DA978;
    case 414u: goto L_002DA98C;
    case 415u: goto L_002DA9A0;
    case 416u: goto L_002DA9B4;
    case 417u: goto L_002DA9C8;
    case 418u: goto L_002DA9D0;
    case 419u: goto L_002DA9E0;
    case 420u: goto L_002DAA00;
    case 421u: goto L_002DAA14;
    case 422u: goto L_002DAA30;
    case 423u: goto L_002DAA50;
    case 424u: goto L_002DAA64;
    case 425u: goto L_002DAA80;
    case 426u: goto L_002DAAA0;
    case 427u: goto L_002DAAB4;
    case 428u: goto L_002DAAD0;
    case 429u: goto L_002DAB04;
    case 430u: goto L_002DAB2C;
    case 431u: goto L_002DAB34;
    case 432u: goto L_002DAB5C;
    case 433u: goto L_002DABAC;
    case 434u: goto L_002DABE8;
    case 435u: goto L_002DAC08;
    case 436u: goto L_002DAC58;
    case 437u: goto L_002DACB0;
    case 438u: goto L_002DACE0;
    case 439u: goto L_002DACF4;
    case 440u: goto L_002DAD1C;
    case 441u: goto L_002DAD88;
    case 442u: goto L_002DAD94;
    case 443u: goto L_002DADD0;
    case 444u: goto L_002DADF0;
    case 445u: goto L_002DAE20;
    case 446u: goto L_002DAE40;
    case 447u: goto L_002DAE50;
    case 448u: goto L_002DAE88;
    case 449u: goto L_002DAEB4;
    case 450u: goto L_002DAED4;
    case 451u: goto L_002DAEF0;
    case 452u: goto L_002DAF14;
    case 453u: goto L_002DAF44;
    case 454u: goto L_002DAF50;
    case 455u: goto L_002DAF70;
    case 456u: goto L_002DAF9C;
    case 457u: goto L_002DB008;
    case 458u: goto L_002DB018;
    case 459u: goto L_002DB02C;
    case 460u: goto L_002DB04C;
    case 461u: goto L_002DB068;
    case 462u: goto L_002DB088;
    case 463u: goto L_002DB0C0;
    case 464u: goto L_002DB0D8;
    case 465u: goto L_002DB0F0;
    case 466u: goto L_002DB120;
    case 467u: goto L_002DB134;
    case 468u: goto L_002DB140;
    case 469u: goto L_002DB158;
    case 470u: goto L_002DB1B0;
    case 471u: goto L_002DB1FC;
    case 472u: goto L_002DB21C;
    case 473u: goto L_002DB234;
    case 474u: goto L_002DB250;
    case 475u: goto L_002DB288;
    case 476u: goto L_002DB2A4;
    case 477u: goto L_002DB2D0;
    case 478u: goto L_002DB2FC;
    case 479u: goto L_002DB344;
    case 480u: goto L_002DB38C;
    case 481u: goto L_002DB44C;
    case 482u: goto L_002DB45C;
    case 483u: goto L_002DB510;
    case 484u: goto L_002DB524;
    case 485u: goto L_002DB544;
    case 486u: goto L_002DB55C;
    case 487u: goto L_002DB570;
    case 488u: goto L_002DB588;
    case 489u: goto L_002DB598;
    case 490u: goto L_002DB5DC;
    case 491u: goto L_002DB60C;
    case 492u: goto L_002DB62C;
    case 493u: goto L_002DB63C;
    case 494u: goto L_002DB66C;
    case 495u: goto L_002DB740;
    case 496u: goto L_002DB808;
    case 497u: goto L_002DB81C;
    case 498u: goto L_002DB82C;
    case 499u: goto L_002DB870;
    case 500u: goto L_002DB880;
    case 501u: goto L_002DB898;
    case 502u: goto L_002DB8D0;
    case 503u: goto L_002DB8F8;
    case 504u: goto L_002DB980;
    case 505u: goto L_002DB9F0;
    case 506u: goto L_002DBA04;
    case 507u: goto L_002DBA0C;
    case 508u: goto L_002DBA6C;
    case 509u: goto L_002DBA7C;
    case 510u: goto L_002DBAC4;
    case 511u: goto L_002DBAD4;
    case 512u: goto L_002DBAF0;
    case 513u: goto L_002DBB28;
    case 514u: goto L_002DBB38;
    case 515u: goto L_002DBB84;
    case 516u: goto L_002DBB98;
    case 517u: goto L_002DBBAC;
    case 518u: goto L_002DBBB8;
    case 519u: goto L_002DBC10;
    case 520u: goto L_002DBC18;
    case 521u: goto L_002DBC2C;
    case 522u: goto L_002DBC38;
    case 523u: goto L_002DBC94;
    case 524u: goto L_002DBCB0;
    case 525u: goto L_002DBCF0;
    case 526u: goto L_002DBD18;
    case 527u: goto L_002DBD40;
    case 528u: goto L_002DBD58;
    case 529u: goto L_002DBD70;
    case 530u: goto L_002DBDE4;
    case 531u: goto L_002DBDF4;
    case 532u: goto L_002DBE08;
    case 533u: goto L_002DBE28;
    case 534u: goto L_002DBE48;
    case 535u: goto L_002DBE60;
    case 536u: goto L_002DBE70;
    case 537u: goto L_002DBE80;
    case 538u: goto L_002DBE90;
    case 539u: goto L_002DBEA0;
    case 540u: goto L_002DBEB8;
    case 541u: goto L_002DBED0;
    case 542u: goto L_002DBEF0;
    case 543u: goto L_002DBF24;
    case 544u: goto L_002DBF30;
    case 545u: goto L_002DBF48;
    case 546u: goto L_002DBF60;
    case 547u: goto L_002DBFB8;
    default: bad_entry(c, 0x002D8000u); return;
    }
L_002D8000:
    c.r[8].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8018u); set32(c.r[5], c.r[7].w[0] + 1u);  if (depth < kMaxDepth) unit_0066(c, 208u, depth + 1u); else { c.pc = 0x0029A200u; return; } if (c.pc != 0x002D8018u) [[unlikely]] return; }
L_002D8018:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 28008u));
    set32(c.r[2], c.r[2].w[0] - 25200u);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[1].w[0] + 28008u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], 0u + 10u);  if (t) { goto L_002D8058; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.f[0] = ld32((c.r[2].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 4;
L_002D8058:
    c.f[1] = ld32((c.r[16].w[0] + 20u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[15] = 0u;
    set32(c.r[4], 0u - 1u);
    c.f[0] = c.r[2].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.f[12] = ld32((c.r[16].w[0] + 16u));
    c.f[14] = ld32((c.r[16].w[0] + 24u));
    c.f[16] = c.f[15];
    c.f[13] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8088u); c.f[17] = c.f[15];  if (depth < kMaxDepth) unit_003E(c, 165u, depth + 1u); else { c.pc = 0x001F9D70u; return; } if (c.pc != 0x002D8088u) [[unlikely]] return; }
L_002D8088:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002D8104; } }
    set32(c.r[2], 0u + 15160u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 164u), c.r[2].w[0]);  if (t) { goto L_002D80A8; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_002D80A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D80B4u); c.r[5].d[0] = c.r[2].d[0] | 16726ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x002D80B4u) [[unlikely]] return; }
L_002D80B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002D80C0; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_002D80C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC0000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[4].w[0] + 72u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[4].w[0] + 68u), c.r[2].w[0]);  if (t) { goto L_002D80D8; } }
    set32(c.r[16], c.r[16].w[0] + 436u);
    c.budget -= 1;
L_002D80D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4C490000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D80E8u); c.r[5].d[0] = c.r[2].d[0] | 18248ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x002D80E8u) [[unlikely]] return; }
L_002D80E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002D80F4; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_002D80F4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002D8100; } }
    st32((c.r[3].w[0] + 164u), c.r[2].w[0]);
    c.budget -= 1;
L_002D8100:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D8104:
    set32(c.r[5], 0u + 154u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8110u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 236u, depth + 1u); else { c.pc = 0x003ADA80u; return; } if (c.pc != 0x002D8110u) [[unlikely]] return; }
L_002D8110:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D8120:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = ld8((c.r[4].w[0] + 112u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D82AC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 140u)));
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002D8170; } }
    c.f[12] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D81D0; } }
L_002D8170:
    c.f[0] = ld32((c.r[2].w[0] + 28u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D819C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D81D0; } }
L_002D819C:
    set32(c.r[2], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[5], c.r[5].w[0] - c.r[3].w[0]);  if (t) { goto L_002D81B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D81D0; } }
L_002D81B8:
    c.f[1] = c.r[5].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 6;
L_002D81D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[11], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_002D8288; } }
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
    set32(c.r[3], 0u + 72u);
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
L_002D8288:
    set32(c.r[2], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8294u); set32(c.r[4], ld32((c.r[2].w[0] + 52u)));  if (depth < kMaxDepth) unit_0015(c, 85u, depth + 1u); else { c.pc = 0x00156E00u; return; } if (c.pc != 0x002D8294u) [[unlikely]] return; }
L_002D8294:
    set32(c.r[2], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D82ACu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D82ACu) [[unlikely]] return; }
L_002D82AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D82C0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002D7F30u | kUnwind; return; } [[clang::musttail]] return unit_0075(c, 312u, depth); }
L_002D82D0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002D8120u | kUnwind; return; } goto L_002D8120; }
L_002D82E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D82F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 117u, depth + 1u); else { c.pc = 0x00198E50u; return; } if (c.pc != 0x002D82F4u) [[unlikely]] return; }
L_002D82F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 12848u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_002D8320; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8318u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 303u, depth + 1u); else { c.pc = 0x0026E9C0u; return; } if (c.pc != 0x002D8318u) [[unlikely]] return; }
L_002D8318:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 128u), c.r[2].w[0]);  if (t) { goto L_002D8324; } }
L_002D8320:
    st32((c.r[16].w[0] + 128u), 0u);
    c.budget -= 1;
L_002D8324:
    st32((c.r[16].w[0] + 132u), 0u);
    set32(c.r[3], 0u + 13u);
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[4].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    st32((c.r[16].w[0] + 136u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    c.f[0] = ld32((c.r[4].w[0] + 24u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    st32((c.r[16].w[0] + 140u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    st32((c.r[16].w[0] + 144u), c.r[4].w[0]);
    st8((c.r[16].w[0] + 148u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    st32((c.r[16].w[0] + 100u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    c.f[0] = ld32((c.r[4].w[0] + 32u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    st32((c.r[16].w[0] + 152u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    c.f[0] = ld32((c.r[4].w[0] + 36u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    st32((c.r[16].w[0] + 160u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    st32((c.r[16].w[0] + 156u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 96u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 51;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D83F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002D848C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 12848u);
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 128u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D843C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D843C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D843Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D843Cu) [[unlikely]] return; }
L_002D843C:
    st32((c.r[17].w[0] + 128u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 132u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D8464; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D8464; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8464u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D8464u) [[unlikely]] return; }
L_002D8464:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8474u); st32((c.r[17].w[0] + 132u), 0u);  if (depth < kMaxDepth) unit_0026(c, 119u, depth + 1u); else { c.pc = 0x00198EB0u; return; } if (c.pc != 0x002D8474u) [[unlikely]] return; }
L_002D8474:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002D8490; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D848Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002D848Cu) [[unlikely]] return; }
L_002D848C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002D8490:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D84B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 128u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D8530; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[2].w[0] + 28u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[0] = fp::cvt_w_s(c.f[1]);  if (t) { goto L_002D84F0; } }
    set32(c.r[5], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D84F0u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x002D84F0u) [[unlikely]] return; }
L_002D84F0:
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8500u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D8500u) [[unlikely]] return; }
L_002D8500:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    st128((c.r[2].w[0] + 224u) & ~15u, c.r[3]);
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D851Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D851Cu) [[unlikely]] return; }
L_002D851C:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    st128((c.r[2].w[0] + 208u) & ~15u, c.r[3]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8530u); set32(c.r[4], ld32((c.r[16].w[0] + 128u)));  if (depth < kMaxDepth) unit_005B(c, 349u, depth + 1u); else { c.pc = 0x0026EE80u; return; } if (c.pc != 0x002D8530u) [[unlikely]] return; }
L_002D8530:
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26176u)));
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8550u); set32(c.r[5], c.r[2].w[0] - 2000u);  if (depth < kMaxDepth) unit_0024(c, 249u, depth + 1u); else { c.pc = 0x00191DE0u; return; } if (c.pc != 0x002D8550u) [[unlikely]] return; }
L_002D8550:
    st32((c.r[16].w[0] + 132u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8564u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D8564u) [[unlikely]] return; }
L_002D8564:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D8580:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 128u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D85E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D85A8u);  if (depth < kMaxDepth) unit_005B(c, 349u, depth + 1u); else { c.pc = 0x0026EE80u; return; } if (c.pc != 0x002D85A8u) [[unlikely]] return; }
L_002D85A8:
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D85B8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D85B8u) [[unlikely]] return; }
L_002D85B8:
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D85CCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D85CCu) [[unlikely]] return; }
L_002D85CC:
    set32(c.r[3], ld32((c.r[16].w[0] + 128u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[3].w[0] + 52u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D85E0u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 142u, depth + 1u); else { c.pc = 0x00225E00u; return; } if (c.pc != 0x002D85E0u) [[unlikely]] return; }
L_002D85E0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 148u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_002D861C; } }
    set32(c.r[2], ld32((c.r[1].w[0] + 31072u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 4492u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8604u); set32(c.r[5], ld32((c.r[16].w[0] + 132u)));  if (depth < kMaxDepth) unit_0047(c, 171u, depth + 1u); else { c.pc = 0x0021E250u; return; } if (c.pc != 0x002D8604u) [[unlikely]] return; }
L_002D8604:
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8614u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D8614u) [[unlikely]] return; }
L_002D8614:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002D86E4; } }
L_002D861C:
    set32(c.r[3], ld32((c.r[16].w[0] + 152u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D86E0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 156u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_002D86D4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D86D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8648u); set32(c.r[4], ld32((c.r[16].w[0] + 160u)));  if (depth < kMaxDepth) unit_0030(c, 97u, depth + 1u); else { c.pc = 0x001C2240u; return; } if (c.pc != 0x002D8648u) [[unlikely]] return; }
L_002D8648:
    set32(c.r[3], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8660u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D8660u) [[unlikely]] return; }
L_002D8660:
    set32(c.r[7], ld32((c.r[16].w[0] + 128u)));
    c.f[15] = 0u;
    set32(c.r[3], c.r[2].w[0] << 6);
    set32(c.r[6], ld32((c.r[16].w[0] + 152u)));
    set32(c.r[4], 0u - 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.f[16] = c.f[15];
    set32(c.r[2], ld32((c.r[7].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 208u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[12] = ld32((c.r[2].w[0] + 48u));
    c.f[13] = ld32((c.r[2].w[0] + 52u));
    c.f[14] = ld32((c.r[2].w[0] + 56u));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D869Cu); c.f[17] = c.f[15];  if (depth < kMaxDepth) unit_003E(c, 165u, depth + 1u); else { c.pc = 0x001F9D70u; return; } if (c.pc != 0x002D869Cu) [[unlikely]] return; }
L_002D869C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002D86AC; } }
    set32(c.r[2], c.r[2].w[0] + 436u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_002D86AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4C490000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D86B8u); c.r[5].d[0] = c.r[2].d[0] | 18248ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x002D86B8u) [[unlikely]] return; }
L_002D86B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002D86C4; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_002D86C4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002D86D0; } }
    st32((c.r[4].w[0] + 164u), c.r[3].w[0]);
    c.budget -= 1;
L_002D86D0:
    st32((c.r[16].w[0] + 152u), 0u);
    c.budget -= 1;
L_002D86D4:
    set32(c.r[3], ld32((c.r[16].w[0] + 156u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 156u), c.r[3].w[0]);
    c.budget -= 3;
L_002D86E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002D86E4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D8700:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 128u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002D8728; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 148u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D8728; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8728u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 353u, depth + 1u); else { c.pc = 0x0026EF90u; return; } if (c.pc != 0x002D8728u) [[unlikely]] return; }
L_002D8728:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002D8740:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 128u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002D8768; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 148u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D8768; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8768u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 353u, depth + 1u); else { c.pc = 0x0026EF90u; return; } if (c.pc != 0x002D8768u) [[unlikely]] return; }
L_002D8768:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002D8780:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 128u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D87B4; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 144u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002D87B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D87B4u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x002D87B4u) [[unlikely]] return; }
L_002D87B4:
    set32(c.r[4], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D87F8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[3].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D87F8; } }
    c.f[1] = ld32((c.r[3].w[0] + 16u));
    c.f[0] = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[1]);
    set32(c.r[6], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D87F8u);  if (depth < kMaxDepth) unit_005B(c, 358u, depth + 1u); else { c.pc = 0x0026F230u; return; } if (c.pc != 0x002D87F8u) [[unlikely]] return; }
L_002D87F8:
    set32(c.r[4], ld32((c.r[16].w[0] + 136u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 24u);  if (t) { goto L_002D882C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8810u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002D8810u) [[unlikely]] return; }
L_002D8810:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D882C; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 136u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D882Cu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0049(c, 153u, depth + 1u); else { c.pc = 0x002261B0u; return; } if (c.pc != 0x002D882Cu) [[unlikely]] return; }
L_002D882C:
    set32(c.r[4], ld32((c.r[16].w[0] + 140u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_002D8864; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8844u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002D8844u) [[unlikely]] return; }
L_002D8844:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D8860; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 140u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8860u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0049(c, 153u, depth + 1u); else { c.pc = 0x002261B0u; return; } if (c.pc != 0x002D8860u) [[unlikely]] return; }
L_002D8860:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_002D8864:
    st8((c.r[16].w[0] + 148u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D8880:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8894u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 12u, depth + 1u); else { c.pc = 0x002D82E0u; return; } if (c.pc != 0x002D8894u) [[unlikely]] return; }
L_002D8894:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 12768u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 176u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    st32((c.r[16].w[0] + 180u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 184u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.f[0] = ld32((c.r[2].w[0] + 44u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_002D88F4; } }
    set32(c.r[2], c.r[2].w[0] - 1000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 26176u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 2072u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D88F0u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 303u, depth + 1u); else { c.pc = 0x0026E9C0u; return; } if (c.pc != 0x002D88F0u) [[unlikely]] return; }
L_002D88F0:
    st32((c.r[16].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 1;
L_002D88F4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D8910:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002D8984; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 12768u);
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 176u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D895C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D895C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D895Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D895Cu) [[unlikely]] return; }
L_002D895C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D896Cu); st32((c.r[17].w[0] + 176u), 0u);  if (depth < kMaxDepth) unit_0076(c, 15u, depth + 1u); else { c.pc = 0x002D83F0u; return; } if (c.pc != 0x002D896Cu) [[unlikely]] return; }
L_002D896C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002D8988; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8984u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002D8984u) [[unlikely]] return; }
L_002D8984:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002D8988:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D89A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D89B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 20u, depth + 1u); else { c.pc = 0x002D84B0u; return; } if (c.pc != 0x002D89B4u) [[unlikely]] return; }
L_002D89B4:
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D8A00; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D89D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D89D0u) [[unlikely]] return; }
L_002D89D0:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[16].w[0] + 176u)));
    st128((c.r[2].w[0] + 224u) & ~15u, c.r[3]);
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D89ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D89ECu) [[unlikely]] return; }
L_002D89EC:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[16].w[0] + 176u)));
    st128((c.r[2].w[0] + 208u) & ~15u, c.r[3]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8A00u); set32(c.r[4], ld32((c.r[16].w[0] + 176u)));  if (depth < kMaxDepth) unit_005B(c, 349u, depth + 1u); else { c.pc = 0x0026EE80u; return; } if (c.pc != 0x002D8A00u) [[unlikely]] return; }
L_002D8A00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D8A10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 180u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D8A34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8A34u);  if (depth < kMaxDepth) unit_005B(c, 349u, depth + 1u); else { c.pc = 0x0026EE80u; return; } if (c.pc != 0x002D8A34u) [[unlikely]] return; }
L_002D8A34:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 31072u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 4492u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8A50u); set32(c.r[5], ld32((c.r[16].w[0] + 132u)));  if (depth < kMaxDepth) unit_0047(c, 171u, depth + 1u); else { c.pc = 0x0021E250u; return; } if (c.pc != 0x002D8A50u) [[unlikely]] return; }
L_002D8A50:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 148u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D8A74; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8A6Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D8A6Cu) [[unlikely]] return; }
L_002D8A6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002D8A98; } }
L_002D8A74:
    set32(c.r[3], ld32((c.r[16].w[0] + 184u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_002D8A88; } }
    st8((c.r[16].w[0] + 148u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 112u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_002D8A88:
    set32(c.r[3], ld32((c.r[16].w[0] + 184u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 184u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
L_002D8A98:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D8AB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 180u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D8ACC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8ACCu);  if (depth < kMaxDepth) unit_005B(c, 353u, depth + 1u); else { c.pc = 0x0026EF90u; return; } if (c.pc != 0x002D8ACCu) [[unlikely]] return; }
L_002D8ACC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002D8AE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D8AF0:
    set32(c.r[2], ld32((c.r[4].w[0] + 176u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D8B00; } }
    st32((c.r[4].w[0] + 180u), c.r[2].w[0]);
    c.budget -= 1;
L_002D8B00:
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.f[0] = ld32((c.r[2].w[0] + 48u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 6;
    { st32((c.r[4].w[0] + 184u), c.r[2].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002D8780u | kUnwind; return; } goto L_002D8780; }
L_002D8B20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x474F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[7].d[0] = c.r[2].d[0] | 16970ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8B3Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 200u, depth + 1u); else { c.pc = 0x001B1A30u; return; } if (c.pc != 0x002D8B3Cu) [[unlikely]] return; }
L_002D8B3C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 12704u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 100u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    st8((c.r[16].w[0] + 108u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002D8B7C; } }
    set32(c.r[5], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8B74u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 303u, depth + 1u); else { c.pc = 0x0026E9C0u; return; } if (c.pc != 0x002D8B74u) [[unlikely]] return; }
L_002D8B74:
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_002D8B7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D8B90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002D8C2C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 12704u);
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D8BDC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D8BDC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8BDCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D8BDCu) [[unlikely]] return; }
L_002D8BDC:
    st32((c.r[17].w[0] + 96u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D8C04; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D8C04; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8C04u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D8C04u) [[unlikely]] return; }
L_002D8C04:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8C14u); st32((c.r[17].w[0] + 100u), 0u);  if (depth < kMaxDepth) unit_002C(c, 203u, depth + 1u); else { c.pc = 0x001B1AC0u; return; } if (c.pc != 0x002D8C14u) [[unlikely]] return; }
L_002D8C14:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002D8C30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8C2Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002D8C2Cu) [[unlikely]] return; }
L_002D8C2C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002D8C30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D8C50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[1].w[0] + 26176u)));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8C84u); set32(c.r[5], c.r[2].w[0] - 2000u);  if (depth < kMaxDepth) unit_0024(c, 252u, depth + 1u); else { c.pc = 0x00191E60u; return; } if (c.pc != 0x002D8C84u) [[unlikely]] return; }
L_002D8C84:
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D8CA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 108u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002D8EA4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8CD0u); set32(c.r[4], ld32((c.r[17].w[0] + 100u)));  if (depth < kMaxDepth) unit_0049(c, 107u, depth + 1u); else { c.pc = 0x00225750u; return; } if (c.pc != 0x002D8CD0u) [[unlikely]] return; }
L_002D8CD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002D8EC4; } }
    set32(c.r[25], ld32((c.r[17].w[0] + 56u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8CECu); c.r[18].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D8CECu) [[unlikely]] return; }
L_002D8CEC:
    c.f[12] = ld32((c.r[2].w[0] + 4u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8CF8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 18u, depth + 1u); else { c.pc = 0x0026C340u; return; } if (c.pc != 0x002D8CF8u) [[unlikely]] return; }
L_002D8CF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D8E18; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 60u)));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8D1Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x002D8D1Cu) [[unlikely]] return; }
L_002D8D1C:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    ld128((c.r[2].w[0] + 224u) & ~15u, c.r[2]);
    st128((c.r[16].w[0] + 224u) & ~15u, c.r[2]);
    set32(c.r[25], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8D38u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D8D38u) [[unlikely]] return; }
L_002D8D38:
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[16].w[0] + 212u), c.f[0]);
    set32(c.r[25], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8D50u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D8D50u) [[unlikely]] return; }
L_002D8D50:
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    set32(c.r[5], 0u - 65u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    st32((c.r[2].w[0] + 212u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 394u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 394u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 394u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st8((c.r[3].w[0] + 394u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 18;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8D98u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D8D98u) [[unlikely]] return; }
L_002D8D98:
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[16].w[0] + 224u), c.f[0]);
    set32(c.r[25], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8DB0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D8DB0u) [[unlikely]] return; }
L_002D8DB0:
    c.f[0] = ld32((c.r[2].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    st32((c.r[2].w[0] + 224u), c.f[0]);
    set32(c.r[25], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8DD0u); c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D8DD0u) [[unlikely]] return; }
L_002D8DD0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[1].w[0] - 23800u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8DE4u); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0010(c, 265u, depth + 1u); else { c.pc = 0x00143C10u; return; } if (c.pc != 0x002D8DE4u) [[unlikely]] return; }
L_002D8DE4:
    st32((c.r[16].w[0] + 212u), c.f[0]);
    set32(c.r[25], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8DF8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D8DF8u) [[unlikely]] return; }
L_002D8DF8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[1].w[0] - 23800u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8E0Cu); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0010(c, 265u, depth + 1u); else { c.pc = 0x00143C10u; return; } if (c.pc != 0x002D8E0Cu) [[unlikely]] return; }
L_002D8E0C:
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 212u), c.f[0]);  if (t) { goto L_002D8E8C; } }
L_002D8E18:
    set32(c.r[3], ld32((c.r[17].w[0] + 68u)));
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D8E8C; } }
    set32(c.r[25], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8E44u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D8E44u) [[unlikely]] return; }
L_002D8E44:
    c.f[12] = ld32((c.r[2].w[0] + 4u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8E50u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 13u, depth + 1u); else { c.pc = 0x0026C270u; return; } if (c.pc != 0x002D8E50u) [[unlikely]] return; }
L_002D8E50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D8E8C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8E70u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x002D8E70u) [[unlikely]] return; }
L_002D8E70:
    set32(c.r[25], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8E80u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D8E80u) [[unlikely]] return; }
L_002D8E80:
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[16].w[0] + 212u), c.f[0]);
    c.budget -= 3;
L_002D8E8C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002D8EC4; } }
    st32((c.r[17].w[0] + 104u), 0u);
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 108u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002D8EC4; } }
L_002D8EA4:
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[3], 0u + 420u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D8EB8; } }
    st8((c.r[17].w[0] + 108u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002D8EB8:
    set32(c.r[3], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 104u), c.r[3].w[0]);
    c.budget -= 3;
L_002D8EC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002D8EE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8EF4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 49u, depth + 1u); else { c.pc = 0x002D8880u; return; } if (c.pc != 0x002D8EF4u) [[unlikely]] return; }
L_002D8EF4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 12624u);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    st8((c.r[16].w[0] + 114u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D8F20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002D8F68; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 12624u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8F50u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 52u, depth + 1u); else { c.pc = 0x002D8910u; return; } if (c.pc != 0x002D8F50u) [[unlikely]] return; }
L_002D8F50:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002D8F6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8F68u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002D8F68u) [[unlikely]] return; }
L_002D8F68:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002D8F6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D8F80:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002D89A0u | kUnwind; return; } goto L_002D89A0; }
L_002D8F90:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002D8A10u | kUnwind; return; } goto L_002D8A10; }
L_002D8FA0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002D8AB0u | kUnwind; return; } goto L_002D8AB0; }
L_002D8FB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8FC8u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002D8FC8u) [[unlikely]] return; }
L_002D8FC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 24u);  if (t) { goto L_002D8FE8; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 45u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8FE4u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0049(c, 163u, depth + 1u); else { c.pc = 0x00226320u; return; } if (c.pc != 0x002D8FE4u) [[unlikely]] return; }
L_002D8FE4:
    set32(c.r[4], 0u + 24u);
    c.budget -= 1;
L_002D8FE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D8FF0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002D8FF0u) [[unlikely]] return; }
L_002D8FF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 24u);  if (t) { goto L_002D9010; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 60u);
    set32(c.r[6], 0u + 46u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D900Cu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0049(c, 163u, depth + 1u); else { c.pc = 0x00226320u; return; } if (c.pc != 0x002D900Cu) [[unlikely]] return; }
L_002D900C:
    set32(c.r[4], 0u + 24u);
    c.budget -= 1;
L_002D9010:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9018u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002D9018u) [[unlikely]] return; }
L_002D9018:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 24u);  if (t) { goto L_002D9038; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 100u);
    set32(c.r[6], 0u + 47u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9034u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0049(c, 163u, depth + 1u); else { c.pc = 0x00226320u; return; } if (c.pc != 0x002D9034u) [[unlikely]] return; }
L_002D9034:
    set32(c.r[4], 0u + 24u);
    c.budget -= 1;
L_002D9038:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9040u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002D9040u) [[unlikely]] return; }
L_002D9040:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 24u);  if (t) { goto L_002D9060; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D905Cu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0049(c, 163u, depth + 1u); else { c.pc = 0x00226320u; return; } if (c.pc != 0x002D905Cu) [[unlikely]] return; }
L_002D905C:
    set32(c.r[4], 0u + 24u);
    c.budget -= 1;
L_002D9060:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9068u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002D9068u) [[unlikely]] return; }
L_002D9068:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 24u);  if (t) { goto L_002D9088; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 60u);
    set32(c.r[6], 0u + 49u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9084u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0049(c, 163u, depth + 1u); else { c.pc = 0x00226320u; return; } if (c.pc != 0x002D9084u) [[unlikely]] return; }
L_002D9084:
    set32(c.r[4], 0u + 24u);
    c.budget -= 1;
L_002D9088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9090u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002D9090u) [[unlikely]] return; }
L_002D9090:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 320u);  if (t) { goto L_002D90B0; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 100u);
    set32(c.r[6], 0u + 50u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D90ACu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0049(c, 163u, depth + 1u); else { c.pc = 0x00226320u; return; } if (c.pc != 0x002D90ACu) [[unlikely]] return; }
L_002D90AC:
    set32(c.r[4], 0u + 320u);
    c.budget -= 1;
L_002D90B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D90B8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002D90B8u) [[unlikely]] return; }
L_002D90B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002D90D0; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D90D0u); set32(c.r[7], 0u + 237u);  if (depth < kMaxDepth) unit_007D(c, 107u, depth + 1u); else { c.pc = 0x002F5FD0u; return; } if (c.pc != 0x002D90D0u) [[unlikely]] return; }
L_002D90D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[29].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] - 12320u);
    set32(c.r[4], 0u + 368u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D90ECu); st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002D90ECu) [[unlikely]] return; }
L_002D90EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 24u);  if (t) { goto L_002D9108; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9104u); set32(c.r[6], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0049(c, 209u, depth + 1u); else { c.pc = 0x002269B0u; return; } if (c.pc != 0x002D9104u) [[unlikely]] return; }
L_002D9104:
    set32(c.r[4], 0u + 24u);
    c.budget -= 1;
L_002D9108:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9110u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002D9110u) [[unlikely]] return; }
L_002D9110:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 24u);  if (t) { goto L_002D9130; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 40u);
    set32(c.r[6], 0u + 45u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D912Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 163u, depth + 1u); else { c.pc = 0x00226320u; return; } if (c.pc != 0x002D912Cu) [[unlikely]] return; }
L_002D912C:
    set32(c.r[4], 0u + 24u);
    c.budget -= 1;
L_002D9130:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9138u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002D9138u) [[unlikely]] return; }
L_002D9138:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 24u);  if (t) { goto L_002D9158; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 100u);
    set32(c.r[6], 0u + 46u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9154u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 163u, depth + 1u); else { c.pc = 0x00226320u; return; } if (c.pc != 0x002D9154u) [[unlikely]] return; }
L_002D9154:
    set32(c.r[4], 0u + 24u);
    c.budget -= 1;
L_002D9158:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002D9160u) [[unlikely]] return; }
L_002D9160:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 24u);  if (t) { goto L_002D9180; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 140u);
    set32(c.r[6], 0u + 47u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D917Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 163u, depth + 1u); else { c.pc = 0x00226320u; return; } if (c.pc != 0x002D917Cu) [[unlikely]] return; }
L_002D917C:
    set32(c.r[4], 0u + 24u);
    c.budget -= 1;
L_002D9180:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9188u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002D9188u) [[unlikely]] return; }
L_002D9188:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 24u);  if (t) { goto L_002D91A8; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 40u);
    set32(c.r[6], 0u + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D91A4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 163u, depth + 1u); else { c.pc = 0x00226320u; return; } if (c.pc != 0x002D91A4u) [[unlikely]] return; }
L_002D91A4:
    set32(c.r[4], 0u + 24u);
    c.budget -= 1;
L_002D91A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D91B0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002D91B0u) [[unlikely]] return; }
L_002D91B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 24u);  if (t) { goto L_002D91D0; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 100u);
    set32(c.r[6], 0u + 49u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D91CCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 163u, depth + 1u); else { c.pc = 0x00226320u; return; } if (c.pc != 0x002D91CCu) [[unlikely]] return; }
L_002D91CC:
    set32(c.r[4], 0u + 24u);
    c.budget -= 1;
L_002D91D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D91D8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002D91D8u) [[unlikely]] return; }
L_002D91D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002D91F8; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 140u);
    set32(c.r[6], 0u + 50u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D91F4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 163u, depth + 1u); else { c.pc = 0x00226320u; return; } if (c.pc != 0x002D91F4u) [[unlikely]] return; }
L_002D91F4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002D91F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9200u);  if (depth < kMaxDepth) unit_0076(c, 68u, depth + 1u); else { c.pc = 0x002D8AF0u; return; } if (c.pc != 0x002D9200u) [[unlikely]] return; }
L_002D9200:
    st8((c.r[16].w[0] + 112u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D9220:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 108u)));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] <= 0; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002D924C; } }
    set32(c.r[3], c.r[2].w[0] - 1u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_002D93C8; } }
L_002D924C:
    set32(c.r[25], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D925Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D925Cu) [[unlikely]] return; }
L_002D925C:
    set32(c.r[5], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9268u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 139u, depth + 1u); else { c.pc = 0x001991D0u; return; } if (c.pc != 0x002D9268u) [[unlikely]] return; }
L_002D9268:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002D93C4; } }
    c.f[1] = ld32((c.r[16].w[0] + 212u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D928C; } }
    c.f[1] = c.f[1] ^ fp::kSign;
    c.budget -= 1;
L_002D928C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 23808u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 60u);  if (t) { goto L_002D92A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D93C8; } }
L_002D92A8:
    st32((c.r[17].w[0] + 108u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 116u), c.r[16].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 228u));
    st32((c.r[16].w[0] + 604u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 112u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D9300; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 112u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D92DCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D92DCu) [[unlikely]] return; }
L_002D92DC:
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[2].w[0] - 1000u);  if (t) { goto L_002D92F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D92F0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 206u, depth + 1u); else { c.pc = 0x001B1B20u; return; } if (c.pc != 0x002D92F0u) [[unlikely]] return; }
L_002D92F0:
    set32(c.r[25], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9300u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9300u) [[unlikely]] return; }
L_002D9300:
    set32(c.r[5], ld32((c.r[17].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002D93BC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], 0u + 660u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 12014u);  if (t) { goto L_002D93B8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002D9388; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[6].d[0] = ld8((c.r[1].w[0] + 28008u));
    set32(c.r[3], c.r[3].w[0] - 25200u);
    set32(c.r[2], 0u + 5u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[3].w[0] + c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[3], c.r[6].w[0] + 1u);
    mmi::div(c, 0, c.r[5].w[0], c.r[2].w[0]);
    st8((c.r[1].w[0] + 28008u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[17].w[0] + 100u)));
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D936Cu); set32(c.r[6], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x002D936Cu) [[unlikely]] return; }
L_002D936C:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 396u));
    set32(c.r[2], 0u - 129u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 396u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002D93B0; } }
L_002D9388:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9390u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x002D9390u) [[unlikely]] return; }
L_002D9390:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 114u));
    set32(c.r[2], 0u - 5u);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 392u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 392u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
L_002D93B0:
    set32(c.r[2], ld32((c.r[16].w[0] + 912u)));
    st32((c.r[16].w[0] + 988u), c.r[2].w[0]);
    c.budget -= 2;
L_002D93B8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002D93BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002D93CC; } }
L_002D93C4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D93C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002D93CC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D93E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 132u)));  c.pc = t; return; }
L_002D93F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9404u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 12u, depth + 1u); else { c.pc = 0x002D82E0u; return; } if (c.pc != 0x002D9404u) [[unlikely]] return; }
L_002D9404:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 12544u);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    st8((c.r[16].w[0] + 176u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D9430:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002D9478; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 12544u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9460u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 15u, depth + 1u); else { c.pc = 0x002D83F0u; return; } if (c.pc != 0x002D9460u) [[unlikely]] return; }
L_002D9460:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002D947C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9478u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002D9478u) [[unlikely]] return; }
L_002D9478:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002D947C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D9490:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D94A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 27u, depth + 1u); else { c.pc = 0x002D8580u; return; } if (c.pc != 0x002D94A4u) [[unlikely]] return; }
L_002D94A4:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 148u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D9560; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st8((c.r[16].w[0] + 176u), static_cast<std::uint8_t>(0u));
    c.f[12] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D94C8u); set32(c.r[4], ld32((c.r[2].w[0] + 52u)));  if (depth < kMaxDepth) unit_0015(c, 85u, depth + 1u); else { c.pc = 0x00156E00u; return; } if (c.pc != 0x002D94C8u) [[unlikely]] return; }
L_002D94C8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41D00000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[0] = c.r[3].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC0800000u);
    c.f[1] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1F00000u);
    c.f[2] = c.r[3].w[0];
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 28320u);  if (t) { goto L_002D9554; } }
L_002D94F0:
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D9550; } }
    c.f[3] = ld32((c.r[3].w[0] + 232u));
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D9550; } }
    c.f[3] = ld32((c.r[3].w[0] + 224u));
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D9550; } }
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D9550; } }
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st8((c.r[16].w[0] + 176u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9548u); c.f[12] = ld32((c.r[1].w[0] - 23816u));  if (depth < kMaxDepth) unit_0015(c, 85u, depth + 1u); else { c.pc = 0x00156E00u; return; } if (c.pc != 0x002D9548u) [[unlikely]] return; }
L_002D9548:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002D9564; } }
L_002D9550:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_002D9554:
    c.r[3].d[0] = c.r[5].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D94F0u | kUnwind; return; } goto L_002D94F0; } }
L_002D9560:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002D9564:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D9570:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 176u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D958C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D958Cu);  if (depth < kMaxDepth) unit_0076(c, 38u, depth + 1u); else { c.pc = 0x002D8700u; return; } if (c.pc != 0x002D958Cu) [[unlikely]] return; }
L_002D958C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002D95A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 128u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002D95D0; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 148u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D95D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D95C8u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 353u, depth + 1u); else { c.pc = 0x0026EF90u; return; } if (c.pc != 0x002D95C8u) [[unlikely]] return; }
L_002D95C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_002D95F4; } }
L_002D95D0:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 176u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D95F0; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D95F0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D95F0u) [[unlikely]] return; }
L_002D95F0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002D95F4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002D9600:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x6D6E0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] | 18512ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9630u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013C370u; return; } if (c.pc != 0x002D9630u) [[unlikely]] return; }
L_002D9630:
    set32(c.r[4], c.r[16].w[0] + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D963Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 256u, depth + 1u); else { c.pc = 0x0013E440u; return; } if (c.pc != 0x002D963Cu) [[unlikely]] return; }
L_002D963C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9648u); set32(c.r[4], c.r[16].w[0] + 36u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x002D9648u) [[unlikely]] return; }
L_002D9648:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 12944u);
    set32(c.r[3], c.r[3].w[0] + 12960u);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[16].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 12976u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9674u); st32((c.r[16].w[0] + 36u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0017(c, 177u, depth + 1u); else { c.pc = 0x0015E070u; return; } if (c.pc != 0x002D9674u) [[unlikely]] return; }
L_002D9674:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9680u); set32(c.r[4], c.r[16].w[0] + 360u);  if (depth < kMaxDepth) unit_0049(c, 271u, depth + 1u); else { c.pc = 0x002275A0u; return; } if (c.pc != 0x002D9680u) [[unlikely]] return; }
L_002D9680:
    set32(c.r[4], c.r[16].w[0] + 396u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D968Cu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0049(c, 271u, depth + 1u); else { c.pc = 0x002275A0u; return; } if (c.pc != 0x002D968Cu) [[unlikely]] return; }
L_002D968C:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D9690:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 48u), 0u);
    c.r[2].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D9690u | kUnwind; return; } goto L_002D9690; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D96B0:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 72u), 0u);
    c.r[2].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D96B0u | kUnwind; return; } goto L_002D96B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D96D4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002D96D4u) [[unlikely]] return; }
L_002D96D4:
    set32(c.r[7], ld32((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43CA0000u);
    c.f[13] = c.r[3].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x44200000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x42300000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[12] = 0u;
    st32((c.r[16].w[0] + 144u), c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[16].w[0] + 148u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[16].w[0] + 152u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 156u), 0u);
    st32((c.r[16].w[0] + 256u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 260u), c.r[5].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 272u)));
    c.f[14] = ld32((c.r[1].w[0] - 23592u));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 20;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9724u); set32(c.r[4], c.r[16].w[0] + 96u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9724u) [[unlikely]] return; }
L_002D9724:
    set32(c.r[4], c.r[16].w[0] + 360u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9730u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 277u, depth + 1u); else { c.pc = 0x00227650u; return; } if (c.pc != 0x002D9730u) [[unlikely]] return; }
L_002D9730:
    set32(c.r[4], c.r[16].w[0] + 396u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D973Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 277u, depth + 1u); else { c.pc = 0x00227650u; return; } if (c.pc != 0x002D973Cu) [[unlikely]] return; }
L_002D973C:
    st32((c.r[16].w[0] + 352u), 0u);
    set32(c.r[3], 0u + 640u);
    st32((c.r[16].w[0] + 356u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 432u), 0u);
    st32((c.r[16].w[0] + 436u), 0u);
    st32((c.r[16].w[0] + 440u), 0u);
    st32((c.r[16].w[0] + 444u), 0u);
    st32((c.r[16].w[0] + 448u), 0u);
    st32((c.r[16].w[0] + 452u), c.r[3].w[0]);
    st8((c.r[16].w[0] + 456u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002D9780:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002D9840; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 12944u);
    set32(c.r[3], c.r[3].w[0] + 12960u);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 12976u);
    st32((c.r[17].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D97D0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D97D0u) [[unlikely]] return; }
L_002D97D0:
    set32(c.r[4], c.r[17].w[0] + 396u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D97DCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0049(c, 274u, depth + 1u); else { c.pc = 0x002275F0u; return; } if (c.pc != 0x002D97DCu) [[unlikely]] return; }
L_002D97DC:
    set32(c.r[4], c.r[17].w[0] + 360u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D97E8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0049(c, 274u, depth + 1u); else { c.pc = 0x002275F0u; return; } if (c.pc != 0x002D97E8u) [[unlikely]] return; }
L_002D97E8:
    set32(c.r[4], c.r[17].w[0] + 96u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);  if (t) { goto L_002D9804; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 17408u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9804u); st32((c.r[17].w[0] + 272u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 264u, depth + 1u); else { c.pc = 0x0014ADA0u; return; } if (c.pc != 0x002D9804u) [[unlikely]] return; }
L_002D9804:
    set32(c.r[4], c.r[17].w[0] + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9810u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x002D9810u) [[unlikely]] return; }
L_002D9810:
    set32(c.r[4], c.r[17].w[0] + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D981Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E490u; return; } if (c.pc != 0x002D981Cu) [[unlikely]] return; }
L_002D981C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9828u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x002D9828u) [[unlikely]] return; }
L_002D9828:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002D9844; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9840u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002D9840u) [[unlikely]] return; }
L_002D9840:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002D9844:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D9860:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9880u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0076(c, 189u, depth + 1u); else { c.pc = 0x002D9920u; return; } if (c.pc != 0x002D9880u) [[unlikely]] return; }
L_002D9880:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_002D98C8; } }
    set32(c.r[16], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[4], 0u + 464u);  if (t) { goto L_002D98C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D989Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002D989Cu) [[unlikely]] return; }
L_002D989C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002D98B8; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D98B4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 158u, depth + 1u); else { c.pc = 0x002D9600u; return; } if (c.pc != 0x002D98B4u) [[unlikely]] return; }
L_002D98B4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002D98B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D98C0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x002D98C0u) [[unlikely]] return; }
L_002D98C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D98C8u);  if (depth < kMaxDepth) unit_0076(c, 189u, depth + 1u); else { c.pc = 0x002D9920u; return; } if (c.pc != 0x002D98C8u) [[unlikely]] return; }
L_002D98C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002D98E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D98F0u);  if (depth < kMaxDepth) unit_0076(c, 189u, depth + 1u); else { c.pc = 0x002D9920u; return; } if (c.pc != 0x002D98F0u) [[unlikely]] return; }
L_002D98F0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D9914; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D9914; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9914u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9914u) [[unlikely]] return; }
L_002D9914:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002D9920:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x6D6E0000u);  if (t) { goto L_002D9940; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D995C; } }
L_002D9940:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9948u); c.r[5].d[0] = c.r[2].d[0] | 18512ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x002D9948u) [[unlikely]] return; }
L_002D9948:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D9958; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_002D995C; } }
L_002D9958:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D995C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002D9970:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 14u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D998Cu); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0076(c, 180u, depth + 1u); else { c.pc = 0x002D9860u; return; } if (c.pc != 0x002D998Cu) [[unlikely]] return; }
L_002D998C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9994u);  if (depth < kMaxDepth) unit_0076(c, 189u, depth + 1u); else { c.pc = 0x002D9920u; return; } if (c.pc != 0x002D9994u) [[unlikely]] return; }
L_002D9994:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002D99A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D99A8u);  if (depth < kMaxDepth) unit_0076(c, 195u, depth + 1u); else { c.pc = 0x002D99C0u; return; } if (c.pc != 0x002D99A8u) [[unlikely]] return; }
L_002D99A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D99C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 432u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[16].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002D99E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 436u), c.r[16].w[0]);  if (t) { goto L_002D9A4C; } }
L_002D99E8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D9A4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9A00u);  if (depth < kMaxDepth) unit_002A(c, 135u, depth + 1u); else { c.pc = 0x001A9560u; return; } if (c.pc != 0x002D9A00u) [[unlikely]] return; }
L_002D9A00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D9A4C; } }
    st32((c.r[17].w[0] + 436u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 432u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002D9A3C; } }
    set32(c.r[25], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9A28u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9A28u) [[unlikely]] return; }
L_002D9A28:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9A34u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 447u, depth + 1u); else { c.pc = 0x002DAE50u; return; } if (c.pc != 0x002D9A34u) [[unlikely]] return; }
L_002D9A34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002D9A50; } }
L_002D9A3C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[17].w[0] + 456u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9A4Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 447u, depth + 1u); else { c.pc = 0x002DAE50u; return; } if (c.pc != 0x002D9A4Cu) [[unlikely]] return; }
L_002D9A4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002D9A50:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D9A60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
L_002D9A7C:
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[17], c.r[3].w[0] + 48u);  if (t) { goto L_002D9AA8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D9AA8; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9AA8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9AA8u) [[unlikely]] return; }
L_002D9AA8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[17].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D9A7Cu | kUnwind; return; } goto L_002D9A7C; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002D9ABC:
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 72u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[17], c.r[3].w[0] + 72u);  if (t) { goto L_002D9AE8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D9AE8; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9AE8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9AE8u) [[unlikely]] return; }
L_002D9AE8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[17].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D9ABCu | kUnwind; return; } goto L_002D9ABC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 352u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_002D9B0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9B0Cu);  if (depth < kMaxDepth) unit_0076(c, 470u, depth + 1u); else { c.pc = 0x002DB1B0u; return; } if (c.pc != 0x002D9B0Cu) [[unlikely]] return; }
L_002D9B0C:
    st32((c.r[16].w[0] + 352u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 356u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_002D9B24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9B24u);  if (depth < kMaxDepth) unit_0076(c, 524u, depth + 1u); else { c.pc = 0x002DBCB0u; return; } if (c.pc != 0x002D9B24u) [[unlikely]] return; }
L_002D9B24:
    st32((c.r[16].w[0] + 356u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002D9B40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 436u)));
    st32((c.r[4].w[0] + 432u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 448u), 0u);
    st32((c.r[4].w[0] + 440u), 0u);
    st32((c.r[4].w[0] + 444u), 0u);
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9B70u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9B70u) [[unlikely]] return; }
L_002D9B70:
    set32(c.r[3], ld32((c.r[16].w[0] + 432u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(34ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_002DA9D0; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 23792u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x002D8000u < 16384u) { entry = entries_0076[(t - 0x002D8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002D9B98:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9BACu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9BACu) [[unlikely]] return; }
L_002D9BAC:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9BC0u); set32(c.r[5], 0u + 178u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9BC0u) [[unlikely]] return; }
L_002D9BC0:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9BD4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9BD4u) [[unlikely]] return; }
L_002D9BD4:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9BE8u); set32(c.r[5], 0u + 93u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9BE8u) [[unlikely]] return; }
L_002D9BE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002DA9D4; } }
L_002D9BF0:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9C04u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9C04u) [[unlikely]] return; }
L_002D9C04:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9C18u); set32(c.r[5], 0u + 178u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9C18u) [[unlikely]] return; }
L_002D9C18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DA9D0; } }
L_002D9C20:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9C34u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9C34u) [[unlikely]] return; }
L_002D9C34:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9C48u); set32(c.r[5], 0u + 366u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9C48u) [[unlikely]] return; }
L_002D9C48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DA9D0; } }
L_002D9C50:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9C64u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9C64u) [[unlikely]] return; }
L_002D9C64:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9C78u); set32(c.r[5], 0u + 93u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9C78u) [[unlikely]] return; }
L_002D9C78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DA9D0; } }
L_002D9C80:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9C94u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9C94u) [[unlikely]] return; }
L_002D9C94:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9CA8u); set32(c.r[5], 0u + 178u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9CA8u) [[unlikely]] return; }
L_002D9CA8:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9CBCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9CBCu) [[unlikely]] return; }
L_002D9CBC:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9CD0u); set32(c.r[5], 0u + 93u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9CD0u) [[unlikely]] return; }
L_002D9CD0:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9CE4u); set32(c.r[5], 0u + 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9CE4u) [[unlikely]] return; }
L_002D9CE4:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9CF8u); set32(c.r[5], 0u + 143u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9CF8u) [[unlikely]] return; }
L_002D9CF8:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9D0Cu); set32(c.r[5], 0u + 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9D0Cu) [[unlikely]] return; }
L_002D9D0C:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9D20u); set32(c.r[5], 0u + 367u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9D20u) [[unlikely]] return; }
L_002D9D20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DA9D0; } }
L_002D9D28:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9D3Cu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9D3Cu) [[unlikely]] return; }
L_002D9D3C:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9D50u); set32(c.r[5], 0u + 178u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9D50u) [[unlikely]] return; }
L_002D9D50:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9D64u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9D64u) [[unlikely]] return; }
L_002D9D64:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9D78u); set32(c.r[5], 0u + 93u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9D78u) [[unlikely]] return; }
L_002D9D78:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9D8Cu); set32(c.r[5], 0u + 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9D8Cu) [[unlikely]] return; }
L_002D9D8C:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9DA0u); set32(c.r[5], 0u + 143u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9DA0u) [[unlikely]] return; }
L_002D9DA0:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9DB4u); set32(c.r[5], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9DB4u) [[unlikely]] return; }
L_002D9DB4:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9DC8u); set32(c.r[5], 0u + 199u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9DC8u) [[unlikely]] return; }
L_002D9DC8:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9DDCu); set32(c.r[5], 0u + 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9DDCu) [[unlikely]] return; }
L_002D9DDC:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9DF0u); set32(c.r[5], 0u + 367u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9DF0u) [[unlikely]] return; }
L_002D9DF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DA9D0; } }
L_002D9DF8:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9E0Cu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9E0Cu) [[unlikely]] return; }
L_002D9E0C:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9E20u); set32(c.r[5], 0u + 91u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9E20u) [[unlikely]] return; }
L_002D9E20:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9E34u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9E34u) [[unlikely]] return; }
L_002D9E34:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9E48u); set32(c.r[5], 0u + 92u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9E48u) [[unlikely]] return; }
L_002D9E48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DA9D0; } }
L_002D9E50:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9E64u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9E64u) [[unlikely]] return; }
L_002D9E64:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9E78u); set32(c.r[5], 0u + 178u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9E78u) [[unlikely]] return; }
L_002D9E78:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9E8Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9E8Cu) [[unlikely]] return; }
L_002D9E8C:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9EA0u); set32(c.r[5], 0u + 262u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9EA0u) [[unlikely]] return; }
L_002D9EA0:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9EB4u); set32(c.r[5], 0u + 6u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9EB4u) [[unlikely]] return; }
L_002D9EB4:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9EC8u); set32(c.r[5], 0u + 371u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9EC8u) [[unlikely]] return; }
L_002D9EC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DA9D0; } }
L_002D9ED0:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9EE4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9EE4u) [[unlikely]] return; }
L_002D9EE4:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9EF8u); set32(c.r[5], 0u + 93u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9EF8u) [[unlikely]] return; }
L_002D9EF8:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9F0Cu); set32(c.r[5], 0u + 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9F0Cu) [[unlikely]] return; }
L_002D9F0C:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9F20u); set32(c.r[5], 0u + 372u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9F20u) [[unlikely]] return; }
L_002D9F20:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9F34u); set32(c.r[5], 0u + 5u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9F34u) [[unlikely]] return; }
L_002D9F34:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9F48u); set32(c.r[5], 0u + 373u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9F48u) [[unlikely]] return; }
L_002D9F48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DA9D0; } }
L_002D9F50:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9F64u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9F64u) [[unlikely]] return; }
L_002D9F64:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9F78u); set32(c.r[5], 0u + 178u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9F78u) [[unlikely]] return; }
L_002D9F78:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9F8Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9F8Cu) [[unlikely]] return; }
L_002D9F8C:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9FA0u); set32(c.r[5], 0u + 92u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9FA0u) [[unlikely]] return; }
L_002D9FA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DA9D0; } }
L_002D9FA8:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9FBCu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9FBCu) [[unlikely]] return; }
L_002D9FBC:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9FD0u); set32(c.r[5], 0u + 178u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9FD0u) [[unlikely]] return; }
L_002D9FD0:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9FE4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9FE4u) [[unlikely]] return; }
L_002D9FE4:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D9FF8u); set32(c.r[5], 0u + 93u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D9FF8u) [[unlikely]] return; }
L_002D9FF8:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA00Cu); set32(c.r[5], 0u + 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA00Cu) [[unlikely]] return; }
L_002DA00C:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA020u); set32(c.r[5], 0u + 143u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA020u) [[unlikely]] return; }
L_002DA020:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DA9D0; } }
L_002DA028:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA03Cu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA03Cu) [[unlikely]] return; }
L_002DA03C:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA050u); set32(c.r[5], 0u + 91u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA050u) [[unlikely]] return; }
L_002DA050:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA064u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA064u) [[unlikely]] return; }
L_002DA064:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA078u); set32(c.r[5], 0u + 92u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA078u) [[unlikely]] return; }
L_002DA078:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA08Cu); set32(c.r[5], 0u + 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA08Cu) [[unlikely]] return; }
L_002DA08C:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA0A0u); set32(c.r[5], 0u + 372u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA0A0u) [[unlikely]] return; }
L_002DA0A0:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA0B4u); set32(c.r[5], 0u + 5u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA0B4u) [[unlikely]] return; }
L_002DA0B4:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA0C8u); set32(c.r[5], 0u + 373u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA0C8u) [[unlikely]] return; }
L_002DA0C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DA9D0; } }
L_002DA0D0:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA0E4u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA0E4u) [[unlikely]] return; }
L_002DA0E4:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA0F8u); set32(c.r[5], 0u + 91u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA0F8u) [[unlikely]] return; }
L_002DA0F8:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA10Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA10Cu) [[unlikely]] return; }
L_002DA10C:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA120u); set32(c.r[5], 0u + 92u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA120u) [[unlikely]] return; }
L_002DA120:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA128u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 419u, depth + 1u); else { c.pc = 0x002DA9E0u; return; } if (c.pc != 0x002DA128u) [[unlikely]] return; }
L_002DA128:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DA9D0; } }
L_002DA130:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA144u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA144u) [[unlikely]] return; }
L_002DA144:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA158u); set32(c.r[5], 0u + 91u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA158u) [[unlikely]] return; }
L_002DA158:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA16Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA16Cu) [[unlikely]] return; }
L_002DA16C:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA180u); set32(c.r[5], 0u + 92u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA180u) [[unlikely]] return; }
L_002DA180:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA194u); set32(c.r[5], 0u + 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA194u) [[unlikely]] return; }
L_002DA194:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA1A8u); set32(c.r[5], 0u + 710u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA1A8u) [[unlikely]] return; }
L_002DA1A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA1B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 419u, depth + 1u); else { c.pc = 0x002DA9E0u; return; } if (c.pc != 0x002DA1B0u) [[unlikely]] return; }
L_002DA1B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DA9D0; } }
L_002DA1B8:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA1CCu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA1CCu) [[unlikely]] return; }
L_002DA1CC:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA1E0u); set32(c.r[5], 0u + 178u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA1E0u) [[unlikely]] return; }
L_002DA1E0:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA1F4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA1F4u) [[unlikely]] return; }
L_002DA1F4:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA208u); set32(c.r[5], 0u + 93u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA208u) [[unlikely]] return; }
L_002DA208:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA210u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 422u, depth + 1u); else { c.pc = 0x002DAA30u; return; } if (c.pc != 0x002DA210u) [[unlikely]] return; }
L_002DA210:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DA9D0; } }
L_002DA218:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA22Cu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA22Cu) [[unlikely]] return; }
L_002DA22C:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA240u); set32(c.r[5], 0u + 91u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA240u) [[unlikely]] return; }
L_002DA240:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA254u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA254u) [[unlikely]] return; }
L_002DA254:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA268u); set32(c.r[5], 0u + 92u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA268u) [[unlikely]] return; }
L_002DA268:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA270u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 422u, depth + 1u); else { c.pc = 0x002DAA30u; return; } if (c.pc != 0x002DA270u) [[unlikely]] return; }
L_002DA270:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DA9D0; } }
L_002DA278:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA28Cu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA28Cu) [[unlikely]] return; }
L_002DA28C:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA2A0u); set32(c.r[5], 0u + 178u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA2A0u) [[unlikely]] return; }
L_002DA2A0:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA2B4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA2B4u) [[unlikely]] return; }
L_002DA2B4:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA2C8u); set32(c.r[5], 0u + 92u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA2C8u) [[unlikely]] return; }
L_002DA2C8:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA2DCu); set32(c.r[5], 0u + 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA2DCu) [[unlikely]] return; }
L_002DA2DC:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA2F0u); set32(c.r[5], 0u + 710u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA2F0u) [[unlikely]] return; }
L_002DA2F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DA9D0; } }
L_002DA2F8:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA30Cu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA30Cu) [[unlikely]] return; }
L_002DA30C:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA320u); set32(c.r[5], 0u + 178u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA320u) [[unlikely]] return; }
L_002DA320:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA334u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA334u) [[unlikely]] return; }
L_002DA334:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA348u); set32(c.r[5], 0u + 93u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA348u) [[unlikely]] return; }
L_002DA348:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA35Cu); set32(c.r[5], 0u + 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA35Cu) [[unlikely]] return; }
L_002DA35C:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA370u); set32(c.r[5], 0u + 710u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA370u) [[unlikely]] return; }
L_002DA370:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DA9D0; } }
L_002DA378:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA38Cu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA38Cu) [[unlikely]] return; }
L_002DA38C:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA3A0u); set32(c.r[5], 0u + 366u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA3A0u) [[unlikely]] return; }
L_002DA3A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA3A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 419u, depth + 1u); else { c.pc = 0x002DA9E0u; return; } if (c.pc != 0x002DA3A8u) [[unlikely]] return; }
L_002DA3A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DA9D0; } }
L_002DA3B0:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA3C4u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA3C4u) [[unlikely]] return; }
L_002DA3C4:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA3D8u); set32(c.r[5], 0u + 178u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA3D8u) [[unlikely]] return; }
L_002DA3D8:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA3ECu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA3ECu) [[unlikely]] return; }
L_002DA3EC:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA400u); set32(c.r[5], 0u + 93u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA400u) [[unlikely]] return; }
L_002DA400:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA408u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 422u, depth + 1u); else { c.pc = 0x002DAA30u; return; } if (c.pc != 0x002DA408u) [[unlikely]] return; }
L_002DA408:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA410u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 425u, depth + 1u); else { c.pc = 0x002DAA80u; return; } if (c.pc != 0x002DA410u) [[unlikely]] return; }
L_002DA410:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DA9D0; } }
L_002DA418:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA42Cu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA42Cu) [[unlikely]] return; }
L_002DA42C:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA440u); set32(c.r[5], 0u + 91u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA440u) [[unlikely]] return; }
L_002DA440:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA454u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA454u) [[unlikely]] return; }
L_002DA454:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA468u); set32(c.r[5], 0u + 92u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA468u) [[unlikely]] return; }
L_002DA468:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA470u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 422u, depth + 1u); else { c.pc = 0x002DAA30u; return; } if (c.pc != 0x002DA470u) [[unlikely]] return; }
L_002DA470:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA478u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 425u, depth + 1u); else { c.pc = 0x002DAA80u; return; } if (c.pc != 0x002DA478u) [[unlikely]] return; }
L_002DA478:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DA9D0; } }
L_002DA480:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA494u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA494u) [[unlikely]] return; }
L_002DA494:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA4A8u); set32(c.r[5], 0u + 178u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA4A8u) [[unlikely]] return; }
L_002DA4A8:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA4BCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA4BCu) [[unlikely]] return; }
L_002DA4BC:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA4D0u); set32(c.r[5], 0u + 7u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA4D0u) [[unlikely]] return; }
L_002DA4D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DA9D0; } }
L_002DA4D8:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA4ECu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA4ECu) [[unlikely]] return; }
L_002DA4EC:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA500u); set32(c.r[5], 0u + 91u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA500u) [[unlikely]] return; }
L_002DA500:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA514u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA514u) [[unlikely]] return; }
L_002DA514:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA528u); set32(c.r[5], 0u + 92u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA528u) [[unlikely]] return; }
L_002DA528:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA53Cu); set32(c.r[5], 0u + 5u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA53Cu) [[unlikely]] return; }
L_002DA53C:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA550u); set32(c.r[5], 0u + 373u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA550u) [[unlikely]] return; }
L_002DA550:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DA9D0; } }
L_002DA558:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA56Cu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA56Cu) [[unlikely]] return; }
L_002DA56C:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA580u); set32(c.r[5], 0u + 91u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA580u) [[unlikely]] return; }
L_002DA580:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA594u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA594u) [[unlikely]] return; }
L_002DA594:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA5A8u); set32(c.r[5], 0u + 92u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA5A8u) [[unlikely]] return; }
L_002DA5A8:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA5BCu); set32(c.r[5], 0u + 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA5BCu) [[unlikely]] return; }
L_002DA5BC:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA5D0u); set32(c.r[5], 0u + 372u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA5D0u) [[unlikely]] return; }
L_002DA5D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DA9D0; } }
L_002DA5D8:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA5ECu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA5ECu) [[unlikely]] return; }
L_002DA5EC:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA600u); set32(c.r[5], 0u + 178u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA600u) [[unlikely]] return; }
L_002DA600:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA614u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA614u) [[unlikely]] return; }
L_002DA614:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA628u); set32(c.r[5], 0u + 93u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA628u) [[unlikely]] return; }
L_002DA628:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA63Cu); set32(c.r[5], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA63Cu) [[unlikely]] return; }
L_002DA63C:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA650u); set32(c.r[5], 0u + 807u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA650u) [[unlikely]] return; }
L_002DA650:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA658u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 422u, depth + 1u); else { c.pc = 0x002DAA30u; return; } if (c.pc != 0x002DA658u) [[unlikely]] return; }
L_002DA658:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA660u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 425u, depth + 1u); else { c.pc = 0x002DAA80u; return; } if (c.pc != 0x002DA660u) [[unlikely]] return; }
L_002DA660:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DA9D0; } }
L_002DA668:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA67Cu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA67Cu) [[unlikely]] return; }
L_002DA67C:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA690u); set32(c.r[5], 0u + 178u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA690u) [[unlikely]] return; }
L_002DA690:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA6A4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA6A4u) [[unlikely]] return; }
L_002DA6A4:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA6B8u); set32(c.r[5], 0u + 7u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA6B8u) [[unlikely]] return; }
L_002DA6B8:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA6CCu); set32(c.r[5], 0u + 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA6CCu) [[unlikely]] return; }
L_002DA6CC:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA6E0u); set32(c.r[5], 0u + 368u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA6E0u) [[unlikely]] return; }
L_002DA6E0:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA6F4u); set32(c.r[5], 0u + 5u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA6F4u) [[unlikely]] return; }
L_002DA6F4:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA708u); set32(c.r[5], 0u + 369u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA708u) [[unlikely]] return; }
L_002DA708:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DA9D0; } }
L_002DA710:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA724u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA724u) [[unlikely]] return; }
L_002DA724:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA738u); set32(c.r[5], 0u + 178u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA738u) [[unlikely]] return; }
L_002DA738:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA74Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA74Cu) [[unlikely]] return; }
L_002DA74C:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA760u); set32(c.r[5], 0u + 93u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA760u) [[unlikely]] return; }
L_002DA760:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA774u); set32(c.r[5], 0u + 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA774u) [[unlikely]] return; }
L_002DA774:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA788u); set32(c.r[5], 0u + 372u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA788u) [[unlikely]] return; }
L_002DA788:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA79Cu); set32(c.r[5], 0u + 5u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA79Cu) [[unlikely]] return; }
L_002DA79C:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA7B0u); set32(c.r[5], 0u + 373u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA7B0u) [[unlikely]] return; }
L_002DA7B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DA9D0; } }
L_002DA7B8:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA7CCu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA7CCu) [[unlikely]] return; }
L_002DA7CC:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA7E0u); set32(c.r[5], 0u + 178u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA7E0u) [[unlikely]] return; }
L_002DA7E0:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA7F4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA7F4u) [[unlikely]] return; }
L_002DA7F4:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA808u); set32(c.r[5], 0u + 93u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA808u) [[unlikely]] return; }
L_002DA808:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA81Cu); set32(c.r[5], 0u + 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA81Cu) [[unlikely]] return; }
L_002DA81C:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA830u); set32(c.r[5], 0u + 367u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA830u) [[unlikely]] return; }
L_002DA830:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DA9D0; } }
L_002DA838:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA84Cu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA84Cu) [[unlikely]] return; }
L_002DA84C:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA860u); set32(c.r[5], 0u + 178u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA860u) [[unlikely]] return; }
L_002DA860:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA874u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA874u) [[unlikely]] return; }
L_002DA874:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA888u); set32(c.r[5], 0u + 93u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA888u) [[unlikely]] return; }
L_002DA888:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA89Cu); set32(c.r[5], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA89Cu) [[unlikely]] return; }
L_002DA89C:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA8B0u); set32(c.r[5], 0u + 389u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA8B0u) [[unlikely]] return; }
L_002DA8B0:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA8C4u); set32(c.r[5], 0u + 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA8C4u) [[unlikely]] return; }
L_002DA8C4:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA8D8u); set32(c.r[5], 0u + 710u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA8D8u) [[unlikely]] return; }
L_002DA8D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DA9D0; } }
L_002DA8E0:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA8F4u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA8F4u) [[unlikely]] return; }
L_002DA8F4:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA908u); set32(c.r[5], 0u + 178u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA908u) [[unlikely]] return; }
L_002DA908:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA910u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 422u, depth + 1u); else { c.pc = 0x002DAA30u; return; } if (c.pc != 0x002DA910u) [[unlikely]] return; }
L_002DA910:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA918u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 425u, depth + 1u); else { c.pc = 0x002DAA80u; return; } if (c.pc != 0x002DA918u) [[unlikely]] return; }
L_002DA918:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DA9D0; } }
L_002DA920:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA934u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA934u) [[unlikely]] return; }
L_002DA934:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA948u); set32(c.r[5], 0u + 178u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA948u) [[unlikely]] return; }
L_002DA948:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA95Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA95Cu) [[unlikely]] return; }
L_002DA95C:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA970u); set32(c.r[5], 0u + 263u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA970u) [[unlikely]] return; }
L_002DA970:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DA9D0; } }
L_002DA978:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA98Cu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA98Cu) [[unlikely]] return; }
L_002DA98C:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA9A0u); set32(c.r[5], 0u + 178u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA9A0u) [[unlikely]] return; }
L_002DA9A0:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA9B4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA9B4u) [[unlikely]] return; }
L_002DA9B4:
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA9C8u); set32(c.r[5], 0u + 92u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DA9C8u) [[unlikely]] return; }
L_002DA9C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DA9D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 422u, depth + 1u); else { c.pc = 0x002DAA30u; return; } if (c.pc != 0x002DA9D0u) [[unlikely]] return; }
L_002DA9D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002DA9D4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002DA9E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 352u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002DAA1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAA00u); set32(c.r[4], 0u + 304u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002DAA00u) [[unlikely]] return; }
L_002DAA00:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002DAA18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAA14u);  if (depth < kMaxDepth) unit_0076(c, 465u, depth + 1u); else { c.pc = 0x002DB0F0u; return; } if (c.pc != 0x002DAA14u) [[unlikely]] return; }
L_002DAA14:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002DAA18:
    st32((c.r[16].w[0] + 352u), c.r[4].w[0]);
    c.budget -= 1;
L_002DAA1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002DAA30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 352u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002DAA6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAA50u); set32(c.r[4], 0u + 304u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002DAA50u) [[unlikely]] return; }
L_002DAA50:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_002DAA68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAA64u);  if (depth < kMaxDepth) unit_0076(c, 465u, depth + 1u); else { c.pc = 0x002DB0F0u; return; } if (c.pc != 0x002DAA64u) [[unlikely]] return; }
L_002DAA64:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002DAA68:
    st32((c.r[16].w[0] + 352u), c.r[4].w[0]);
    c.budget -= 1;
L_002DAA6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002DAA80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 356u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002DAABC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAAA0u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002DAAA0u) [[unlikely]] return; }
L_002DAAA0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002DAAB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAAB4u);  if (depth < kMaxDepth) unit_0076(c, 512u, depth + 1u); else { c.pc = 0x002DBAF0u; return; } if (c.pc != 0x002DAAB4u) [[unlikely]] return; }
L_002DAAB4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002DAAB8:
    st32((c.r[16].w[0] + 356u), c.r[4].w[0]);
    c.budget -= 1;
L_002DAABC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002DAAD0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 15u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAB04u); set32(c.r[4], c.r[2].w[0] + 624u);  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x002DAB04u) [[unlikely]] return; }
L_002DAB04:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 272u);  if (t) { goto L_002DABE0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[29].w[0] + 88u);
    set32(c.r[2], c.r[2].w[0] - 12304u);
    c.r[16].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld64((c.r[2].w[0]));
    st64((c.r[3].w[0]), c.r[2].d[0]);
    c.budget -= 6;
L_002DAB2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAB34u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002DAB34u) [[unlikely]] return; }
L_002DAB34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] << 2);  if (t) { goto L_002DAB5C; } }
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[5], c.r[4].w[0] + c.r[29].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAB5Cu); c.r[5].d[0] = ld64((c.r[2].w[0] + 16u));  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x002DAB5Cu) [[unlikely]] return; }
L_002DAB5C:
    set32(c.r[4], ld32((c.r[19].w[0] + 440u)));
    set32(c.r[3], 0u + 413u);
    c.f[0] = c.r[3].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[13] = fp::cvt_s_w(c.f[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 440u)));
    c.f[14] = ld32((c.r[1].w[0] - 23592u));
    set32(c.r[3], ld32((c.r[19].w[0] + 448u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 24u);
    set32(c.r[4], ld32((c.r[2].w[0] + 48u)));
    c.f[0] = c.r[3].w[0];
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 20;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DABACu); c.f[12] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DABACu) [[unlikely]] return; }
L_002DABAC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_002DABC0; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 448u)));
    set32(c.r[3], c.r[3].w[0] + 38u);
    st32((c.r[19].w[0] + 448u), c.r[3].w[0]);
    c.budget -= 3;
L_002DABC0:
    set32(c.r[4], ld32((c.r[19].w[0] + 440u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[19].w[0] + 440u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DAB2Cu | kUnwind; return; } goto L_002DAB2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[18].w[0] - 4u);  if (t) { goto L_002DAC68; } }
L_002DABE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DABE8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002DABE8u) [[unlikely]] return; }
L_002DABE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DAC08; } }
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[5], c.r[18].w[0] << 5);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAC08u); c.r[5].d[0] = ld64((c.r[2].w[0] + 16u));  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x002DAC08u) [[unlikely]] return; }
L_002DAC08:
    set32(c.r[4], ld32((c.r[19].w[0] + 440u)));
    set32(c.r[3], 0u + 411u);
    c.f[0] = c.r[3].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[13] = fp::cvt_s_w(c.f[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    st32((c.r[3].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 440u)));
    c.f[14] = ld32((c.r[1].w[0] - 23592u));
    set32(c.r[3], ld32((c.r[19].w[0] + 448u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[3], c.r[3].w[0] + 24u);
    set32(c.r[4], ld32((c.r[2].w[0] + 48u)));
    c.f[0] = c.r[3].w[0];
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 20;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAC58u); c.f[12] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DAC58u) [[unlikely]] return; }
L_002DAC58:
    set32(c.r[3], ld32((c.r[19].w[0] + 440u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 440u), c.r[3].w[0]);
    set32(c.r[3], c.r[18].w[0] - 4u);
    c.budget -= 4;
L_002DAC68:
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 6u);  if (t) { goto L_002DAC7C; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[3].d[0];  if (t) { goto L_002DAC88; } }
L_002DAC7C:
    set32(c.r[3], ld32((c.r[19].w[0] + 448u)));
    set32(c.r[3], c.r[3].w[0] + 15u);
    st32((c.r[19].w[0] + 448u), c.r[3].w[0]);
    c.budget -= 3;
L_002DAC88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002DACB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 548u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DACE0u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002DACE0u) [[unlikely]] return; }
L_002DACE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002DACF4; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DACF4u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 110u, depth + 1u); else { c.pc = 0x001630C0u; return; } if (c.pc != 0x002DACF4u) [[unlikely]] return; }
L_002DACF4:
    set32(c.r[3], ld32((c.r[18].w[0] + 444u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    st32((c.r[3].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 444u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0] + 72u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAD1Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002DAD1Cu) [[unlikely]] return; }
L_002DAD1C:
    set32(c.r[6], ld32((c.r[2].w[0])));
    set32(c.r[3], 0u + 411u);
    c.f[0] = c.r[3].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 48u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 23600u));
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 23608u));
    st32((c.r[16].w[0] + 20u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[16].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 448u)));
    c.f[14] = ld32((c.r[1].w[0] - 23592u));
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[2], c.r[2].w[0] + 47u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 27;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAD88u); c.f[12] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DAD88u) [[unlikely]] return; }
L_002DAD88:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAD94u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 443u, depth + 1u); else { c.pc = 0x002DADD0u; return; } if (c.pc != 0x002DAD94u) [[unlikely]] return; }
L_002DAD94:
    set32(c.r[3], ld32((c.r[18].w[0] + 448u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[18].w[0] + 448u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 444u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 444u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002DADD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 548u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DADF0u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002DADF0u) [[unlikely]] return; }
L_002DADF0:
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[16].w[0] + 356u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[1].w[0] - 23600u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 23608u));
    st32((c.r[16].w[0] + 20u), c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAE20u); st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0018(c, 67u, depth + 1u); else { c.pc = 0x00162250u; return; } if (c.pc != 0x002DAE20u) [[unlikely]] return; }
L_002DAE20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], c.r[2].w[0] + 34u);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002DAE40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 452u), c.r[5].w[0]);  c.pc = t; return; }
L_002DAE50:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002DAE90; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[2], c.r[2].w[0] - 12288u);
    set32(c.r[4], c.r[16].w[0] + 360u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAE88u); st64((c.r[5].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x002DAE88u) [[unlikely]] return; }
L_002DAE88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[16].w[0] + 456u));  if (t) { goto L_002DAEB8; } }
L_002DAE90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] - 12256u);
    set32(c.r[4], c.r[16].w[0] + 360u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAEB4u); st64((c.r[5].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x002DAEB4u) [[unlikely]] return; }
L_002DAEB4:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 456u));
    c.budget -= 1;
L_002DAEB8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002DAED4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 432u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 396u);  if (t) { goto L_002DAED4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAED4u); set32(c.r[5], c.r[16].w[0] + 368u);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x002DAED4u) [[unlikely]] return; }
L_002DAED4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002DAEF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002DAF54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAF14u);  if (depth < kMaxDepth) unit_002A(c, 135u, depth + 1u); else { c.pc = 0x001A9560u; return; } if (c.pc != 0x002DAF14u) [[unlikely]] return; }
L_002DAF14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DAF54; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 456u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DAF54; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 392u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DAF54; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAF44u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DAF44u) [[unlikely]] return; }
L_002DAF44:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAF50u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 447u, depth + 1u); else { c.pc = 0x002DAE50u; return; } if (c.pc != 0x002DAF50u) [[unlikely]] return; }
L_002DAF50:
    st8((c.r[16].w[0] + 456u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002DAF54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002DAF70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002DB0D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DAF9Cu);  if (depth < kMaxDepth) unit_002A(c, 135u, depth + 1u); else { c.pc = 0x001A9560u; return; } if (c.pc != 0x002DAF9Cu) [[unlikely]] return; }
L_002DAF9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DB0D8; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 432u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DB0D8; } }
    set32(c.r[2], 0u + 405u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42300000u);
    c.f[2] = ld32((c.r[1].w[0] - 23616u));
    c.f[1] = ld32((c.r[17].w[0] + 408u));
    c.f[13] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.f[12] = 0u;
    st32((c.r[17].w[0] + 156u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 452u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 256u), c.f[0]);
    st32((c.r[17].w[0] + 260u), c.r[3].w[0]);
    set32(c.r[25], ld32((c.r[17].w[0] + 272u)));
    c.f[14] = ld32((c.r[1].w[0] - 23592u));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 22;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB008u); set32(c.r[4], c.r[17].w[0] + 96u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DB008u) [[unlikely]] return; }
L_002DB008:
    set32(c.r[25], ld32((c.r[17].w[0] + 272u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB018u); set32(c.r[4], c.r[17].w[0] + 96u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DB018u) [[unlikely]] return; }
L_002DB018:
    c.f[0] = ld32((c.r[17].w[0] + 372u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002DB050; } }
L_002DB02C:
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 48u)));
    st32((c.r[4].w[0] + 60u), c.r[16].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB04Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DB04Cu) [[unlikely]] return; }
L_002DB04C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002DB050:
    set32(c.r[3], ld32((c.r[17].w[0] + 440u)));
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DB02Cu | kUnwind; return; } goto L_002DB02C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002DB08C; } }
L_002DB068:
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    st32((c.r[4].w[0] + 60u), c.r[16].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB088u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DB088u) [[unlikely]] return; }
L_002DB088:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002DB08C:
    set32(c.r[3], ld32((c.r[17].w[0] + 444u)));
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DB068u | kUnwind; return; } goto L_002DB068; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 352u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DB0C0; } }
    st32((c.r[3].w[0] + 292u), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 352u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 296u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB0C0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DB0C0u) [[unlikely]] return; }
L_002DB0C0:
    set32(c.r[3], ld32((c.r[17].w[0] + 356u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DB0D8; } }
    st32((c.r[3].w[0] + 12u), c.r[16].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB0D8u); set32(c.r[4], ld32((c.r[17].w[0] + 356u)));  if (depth < kMaxDepth) unit_0076(c, 529u, depth + 1u); else { c.pc = 0x002DBD70u; return; } if (c.pc != 0x002DB0D8u) [[unlikely]] return; }
L_002DB0D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002DB0F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 12920u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 296u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB120u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0017(c, 177u, depth + 1u); else { c.pc = 0x0015E070u; return; } if (c.pc != 0x002DB120u) [[unlikely]] return; }
L_002DB120:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], 0u + 15u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB134u); set32(c.r[4], c.r[2].w[0] + 624u);  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x002DB134u) [[unlikely]] return; }
L_002DB134:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB140u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002DB140u) [[unlikely]] return; }
L_002DB140:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DB158; } }
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[5].d[0] = ld64((c.r[3].w[0] + 208u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB158u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x002DB158u) [[unlikely]] return; }
L_002DB158:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[5], 0u + 255u);
    set32(c.r[6], ld32((c.r[17].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x42C40000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41600000u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    ld128((c.r[6].w[0] + 48u) & ~15u, c.r[6]);
    st128((c.r[17].w[0] + 16u) & ~15u, c.r[6]);
    st32((c.r[17].w[0] + 80u), c.r[5].w[0]);
    st32((c.r[17].w[0] + 84u), c.r[5].w[0]);
    st32((c.r[17].w[0] + 88u), c.r[5].w[0]);
    st32((c.r[17].w[0] + 192u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 196u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 288u), c.r[16].w[0]);
    st32((c.r[17].w[0] + 292u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002DB1B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002DB234; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 12920u);
    st32((c.r[17].w[0] + 296u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002DB1FC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002DB1FC; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB1FCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DB1FCu) [[unlikely]] return; }
L_002DB1FC:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), 0u);  if (t) { goto L_002DB21C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 17408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB21Cu); st32((c.r[17].w[0] + 208u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 264u, depth + 1u); else { c.pc = 0x0014ADA0u; return; } if (c.pc != 0x002DB21Cu) [[unlikely]] return; }
L_002DB21C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002DB238; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB234u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002DB234u) [[unlikely]] return; }
L_002DB234:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002DB238:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002DB250:
    set32(c.r[29], c.r[29].w[0] - 432u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[5], 0u + 15u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB288u); set32(c.r[4], c.r[2].w[0] + 624u);  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x002DB288u) [[unlikely]] return; }
L_002DB288:
    set32(c.r[3], ld32((c.r[18].w[0] + 288u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002DB2A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB2A4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 502u, depth + 1u); else { c.pc = 0x002DB8D0u; return; } if (c.pc != 0x002DB2A4u) [[unlikely]] return; }
L_002DB2A4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[3].w[0] - 12232u);
    set32(c.r[6], c.r[29].w[0] + 416u);
    c.r[2].d[0] = ld64((c.r[3].w[0]));
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    set32(c.r[5], c.r[5].w[0] - 12208u);
    set32(c.r[4], c.r[29].w[0] + 320u);
    st64((c.r[6].w[0]), c.r[2].d[0]);
    set32(c.r[3], 0u + 3u);
    st32((c.r[6].w[0] + 8u), c.f[0]);
    c.budget -= 11;
L_002DB2D0:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DB2D0u | kUnwind; return; } goto L_002DB2D0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[29].w[0] + 272u);
    set32(c.r[5], c.r[5].w[0] - 12160u);
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
L_002DB2FC:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DB2FCu | kUnwind; return; } goto L_002DB2FC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] - 12112u);
    set32(c.r[7], c.r[29].w[0] + 240u);
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    set32(c.r[5], c.r[5].w[0] - 12080u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[3], 0u + 3u);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[7].w[0]) & ~15u, c.r[6]);
    st128((c.r[7].w[0] + 16u) & ~15u, c.r[2]);
    c.budget -= 11;
L_002DB344:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DB344u | kUnwind; return; } goto L_002DB344; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    c.r[21].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[16], ld32((c.r[3].w[0] + 548u)));
    st32((c.r[4].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    st32((c.r[4].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    st32((c.r[4].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 11;
L_002DB38C:
    set32(c.r[2], ld32((c.r[18].w[0] + 288u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 255u);  if (t) { goto L_002DB408; } }
    set32(c.r[2], c.r[21].w[0] << 4);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43A90000u);
    set32(c.r[4], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[5], c.r[4].w[0] + 320u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    c.f[2] = c.r[3].w[0];
    c.f[1] = c.r[2].w[0];
    set32(c.r[3], c.r[4].w[0] + 272u);
    set32(c.r[2], c.r[4].w[0] + 240u);
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    st32((c.r[5].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[5].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[3].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[2].w[0]), c.f[0]);
    set32(c.r[3], 0u + 255u);
    c.budget -= 28;
L_002DB408:
    set32(c.r[20], c.r[21].w[0] << 4);
    st32((c.r[18].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[2], c.r[20].w[0] + c.r[29].w[0]);
    st32((c.r[18].w[0] + 84u), c.r[3].w[0]);
    set32(c.r[6], c.r[2].w[0] + 192u);
    st32((c.r[18].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[5], c.r[2].w[0] + 272u);
    set32(c.r[2], ld32((c.r[18].w[0] + 292u)));
    st32((c.r[18].w[0] + 92u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = ld32((c.r[6].w[0]));
    st32((c.r[18].w[0] + 192u), c.f[0]);
    st32((c.r[18].w[0] + 196u), c.f[1]);
    set32(c.r[25], ld32((c.r[18].w[0] + 208u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 17;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB44Cu); set32(c.r[4], c.r[18].w[0] + 32u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DB44Cu) [[unlikely]] return; }
L_002DB44C:
    set32(c.r[25], ld32((c.r[18].w[0] + 208u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB45Cu); set32(c.r[4], c.r[18].w[0] + 32u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DB45Cu) [[unlikely]] return; }
L_002DB45C:
    set32(c.r[6], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[29].w[0] + 408u);
    set32(c.r[5], c.r[29].w[0] + 400u);
    set32(c.r[4], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[6].d[0] = ld64((c.r[6].w[0] + 304u));
    st64((c.r[29].w[0] + 408u), c.r[6].d[0]);
    set32(c.r[7], ld32((c.r[18].w[0])));
    st64((c.r[7].w[0] + 256u), c.r[6].d[0]);
    c.r[3].d[0] = ld64((c.r[3].w[0]));
    st64((c.r[5].w[0]), c.r[3].d[0]);
    c.r[3].d[0] = ld8((c.r[29].w[0] + 403u));
    c.r[3].d[0] = c.r[3].d[0] << 58;
    c.r[3].d[0] = c.r[3].d[0] >> 60;
    set32(c.r[3], c.r[4].w[0] << (c.r[3].w[0] & 31u));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[7].w[0] + 160u), c.f[0]);
    c.r[3].d[0] = ld64((c.r[29].w[0] + 400u));
    c.r[3].d[0] = c.r[3].d[0] << 30;
    c.r[3].d[0] = c.r[3].d[0] >> 60;
    set32(c.r[3], c.r[4].w[0] << (c.r[3].w[0] & 31u));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[7].w[0] + 164u), c.f[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 292u)));
    set32(c.r[3], ld32((c.r[18].w[0])));
    st32((c.r[3].w[0] + 60u), c.r[4].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 23608u));
    set32(c.r[3], ld32((c.r[18].w[0])));
    st32((c.r[3].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 23608u));
    st32((c.r[3].w[0] + 20u), c.f[0]);
    c.budget -= 39;
    { const bool t = c.r[21].d[0] != 0ull; st32((c.r[3].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_002DB524; } }
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[20].w[0] + c.r[29].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB510u); set32(c.r[5], c.r[2].w[0] + 240u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DB510u) [[unlikely]] return; }
L_002DB510:
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB524u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DB524u) [[unlikely]] return; }
L_002DB524:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_002DB588; } }
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.f[14] = ld32((c.r[1].w[0] - 23624u));
    c.f[12] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB544u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0012(c, 261u, depth + 1u); else { c.pc = 0x0014ACC0u; return; } if (c.pc != 0x002DB544u) [[unlikely]] return; }
L_002DB544:
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[20].w[0] + c.r[29].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB55Cu); set32(c.r[5], c.r[2].w[0] + 240u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DB55Cu) [[unlikely]] return; }
L_002DB55C:
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB570u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DB570u) [[unlikely]] return; }
L_002DB570:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.f[12] = 0u;
    c.f[13] = c.f[12];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB588u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0012(c, 261u, depth + 1u); else { c.pc = 0x0014ACC0u; return; } if (c.pc != 0x002DB588u) [[unlikely]] return; }
L_002DB588:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_002DB63C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB598u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002DB598u) [[unlikely]] return; }
L_002DB598:
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[21].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[19], c.r[3].w[0] + 416u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 48u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 23632u));
    st32((c.r[16].w[0] + 16u), c.f[0]);
    st32((c.r[16].w[0] + 20u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 24u), c.r[4].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB5DCu); set32(c.r[4], ld32((c.r[19].w[0])));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002DB5DCu) [[unlikely]] return; }
L_002DB5DC:
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 356u), 0u);
    set32(c.r[2], 0u + 586u);
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002DB614; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[2], c.r[20].w[0] + c.r[29].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB60Cu); set32(c.r[5], c.r[2].w[0] + 320u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DB60Cu) [[unlikely]] return; }
L_002DB60C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[25], ld32((c.r[16].w[0] + 176u)));  if (t) { goto L_002DB630; } }
L_002DB614:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[2], c.r[20].w[0] + c.r[29].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB62Cu); set32(c.r[5], c.r[2].w[0] + 320u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DB62Cu) [[unlikely]] return; }
L_002DB62C:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.budget -= 1;
L_002DB630:
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB63Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DB63Cu) [[unlikely]] return; }
L_002DB63C:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DB38Cu | kUnwind; return; } goto L_002DB38C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] - 12032u);
    set32(c.r[6], c.r[29].w[0] + 176u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] - 12016u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[3], 0u + 4u);
    st128((c.r[6].w[0]) & ~15u, c.r[2]);
    c.budget -= 8;
L_002DB66C:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DB66Cu | kUnwind; return; } goto L_002DB66C; } }
    set32(c.r[6], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[29].w[0] + 392u);
    set32(c.r[5], c.r[29].w[0] + 384u);
    set32(c.r[4], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[20].d[0] = 0ull + 0ull;
    c.r[6].d[0] = ld64((c.r[6].w[0] + 208u));
    st64((c.r[29].w[0] + 392u), c.r[6].d[0]);
    set32(c.r[7], ld32((c.r[18].w[0])));
    st64((c.r[7].w[0] + 256u), c.r[6].d[0]);
    c.r[3].d[0] = ld64((c.r[3].w[0]));
    st64((c.r[5].w[0]), c.r[3].d[0]);
    c.r[3].d[0] = ld8((c.r[29].w[0] + 387u));
    c.r[3].d[0] = c.r[3].d[0] << 58;
    c.r[3].d[0] = c.r[3].d[0] >> 60;
    set32(c.r[3], c.r[4].w[0] << (c.r[3].w[0] & 31u));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[7].w[0] + 160u), c.f[0]);
    c.r[3].d[0] = ld64((c.r[29].w[0] + 384u));
    c.r[3].d[0] = c.r[3].d[0] << 30;
    c.r[3].d[0] = c.r[3].d[0] >> 60;
    set32(c.r[3], c.r[4].w[0] << (c.r[3].w[0] & 31u));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[7].w[0] + 164u), c.f[0]);
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    st32((c.r[4].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    st32((c.r[4].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    st32((c.r[4].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 292u)));
    set32(c.r[3], ld32((c.r[18].w[0])));
    st32((c.r[3].w[0] + 60u), c.r[4].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 23640u));
    set32(c.r[3], ld32((c.r[18].w[0])));
    st32((c.r[3].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 23640u));
    st32((c.r[3].w[0] + 20u), c.f[0]);
    st32((c.r[3].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 46;
L_002DB740:
    set32(c.r[2], ld32((c.r[18].w[0] + 288u)));
    set32(c.r[3], c.r[20].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[3].w[0] + 112u);  if (t) { goto L_002DB780; } }
    c.f[2] = ld32((c.r[19].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A90000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    st32((c.r[19].w[0] + 4u), c.f[1]);
    c.f[1] = ld32((c.r[19].w[0]));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[19].w[0]), c.f[0]);
    c.budget -= 11;
L_002DB780:
    c.r[1].d[0] = c.r[20].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002DB7F4; } }
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[29].w[0] + 376u);
    set32(c.r[4], c.r[29].w[0] + 368u);
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = ld64((c.r[5].w[0] + 240u));
    st64((c.r[29].w[0] + 376u), c.r[5].d[0]);
    set32(c.r[6], ld32((c.r[18].w[0])));
    st64((c.r[6].w[0] + 256u), c.r[5].d[0]);
    c.r[2].d[0] = ld64((c.r[2].w[0]));
    st64((c.r[4].w[0]), c.r[2].d[0]);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 371u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[6].w[0] + 160u), c.f[0]);
    c.r[2].d[0] = ld64((c.r[29].w[0] + 368u));
    c.r[2].d[0] = c.r[2].d[0] << 30;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[6].w[0] + 164u), c.f[0]);
    c.budget -= 26;
L_002DB7F4:
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB808u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DB808u) [[unlikely]] return; }
L_002DB808:
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB81Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DB81Cu) [[unlikely]] return; }
L_002DB81C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002DB898; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB82Cu);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002DB82Cu) [[unlikely]] return; }
L_002DB82C:
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[16].w[0] + 48u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[16].w[0] + 52u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 292u)));
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 17;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB870u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DB870u) [[unlikely]] return; }
L_002DB870:
    set32(c.r[2], c.r[20].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB880u); set32(c.r[4], ld32((c.r[2].w[0] + 176u)));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002DB880u) [[unlikely]] return; }
L_002DB880:
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 356u), 0u);
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB898u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DB898u) [[unlikely]] return; }
L_002DB898:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[3].d[0] = c.r[20].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DB740u | kUnwind; return; } goto L_002DB740; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 432u);  c.pc = t; return; }
L_002DB8D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[5], 0u + 12u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB8F8u); set32(c.r[4], c.r[2].w[0] + 624u);  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x002DB8F8u) [[unlikely]] return; }
L_002DB8F8:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.f[1] = ld32((c.r[17].w[0] + 292u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[5], c.r[29].w[0] + 56u);
    c.f[0] = ld32((c.r[1].w[0] - 23616u));
    set32(c.r[3], c.r[29].w[0] + 48u);
    set32(c.r[4], 0u + 1u);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 48u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st64((c.r[29].w[0] + 56u), c.r[2].d[0]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    set32(c.r[6], ld32((c.r[17].w[0])));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    st64((c.r[6].w[0] + 256u), c.r[2].d[0]);
    c.r[2].d[0] = ld64((c.r[5].w[0]));
    set32(c.r[16], c.f[0]);
    st64((c.r[3].w[0]), c.r[2].d[0]);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 51u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[4].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[6].w[0] + 160u), c.f[0]);
    c.r[2].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[2].d[0] = c.r[2].d[0] << 30;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[4].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB980u); st32((c.r[6].w[0] + 164u), c.f[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002DB980u) [[unlikely]] return; }
L_002DB980:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43DC0000u);
    set32(c.r[8], ld32((c.r[17].w[0])));
    set32(c.r[7], ld32((c.r[2].w[0])));
    c.f[12] = c.r[3].w[0];
    set32(c.r[4], 0u + 363u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.f[0] = c.r[3].w[0];
    c.f[1] = c.r[4].w[0];
    st32((c.r[8].w[0] + 48u), c.r[7].w[0]);
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[8].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[8].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    st32((c.r[2].w[0] + 60u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    st32((c.r[2].w[0] + 16u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 28;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DB9F0u); c.f[13] = fp::cvt_s_w(c.f[1]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DB9F0u) [[unlikely]] return; }
L_002DB9F0:
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBA04u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DBA04u) [[unlikely]] return; }
L_002DBA04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBA0Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002DBA0Cu) [[unlikely]] return; }
L_002DBA0C:
    set32(c.r[7], ld32((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43DC0000u);
    c.f[12] = c.r[3].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    set32(c.r[4], c.r[17].w[0] + 32u);
    set32(c.r[3], 0u + 375u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[17].w[0] + 80u), c.r[7].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[7], ld32((c.r[2].w[0] + 4u)));
    c.f[13] = fp::cvt_s_w(c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    st32((c.r[17].w[0] + 84u), c.r[7].w[0]);
    c.f[0] = c.r[3].w[0];
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 92u), c.r[16].w[0]);
    st32((c.r[17].w[0] + 192u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 196u), c.r[5].w[0]);
    set32(c.r[25], ld32((c.r[17].w[0] + 208u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 24;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBA6Cu); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DBA6Cu) [[unlikely]] return; }
L_002DBA6C:
    set32(c.r[25], ld32((c.r[17].w[0] + 208u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBA7Cu); set32(c.r[4], c.r[17].w[0] + 32u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DBA7Cu) [[unlikely]] return; }
L_002DBA7C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43420000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42280000u);
    st32((c.r[17].w[0] + 192u), c.r[2].w[0]);
    set32(c.r[4], c.r[17].w[0] + 32u);
    st32((c.r[17].w[0] + 196u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43E20000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[17].w[0] + 208u)));
    set32(c.r[3], 0u + 363u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[13] = fp::cvt_s_w(c.f[1]);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 18;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBAC4u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DBAC4u) [[unlikely]] return; }
L_002DBAC4:
    set32(c.r[25], ld32((c.r[17].w[0] + 208u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBAD4u); set32(c.r[4], c.r[17].w[0] + 32u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DBAD4u) [[unlikely]] return; }
L_002DBAD4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002DBAF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 20u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], 0u + 44u);
    st32((c.r[4].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], 0u + 140u);
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBB28u); set32(c.r[4], 0u + 368u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002DBB28u) [[unlikely]] return; }
L_002DBB28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002DBB38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBB38u);  if (depth < kMaxDepth) unit_0018(c, 2u, depth + 1u); else { c.pc = 0x001607D0u; return; } if (c.pc != 0x002DBB38u) [[unlikely]] return; }
L_002DBB38:
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43BC0000u);
    set32(c.r[2], 0u + 441u);
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    c.f[0] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[13] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    st32((c.r[5].w[0] + 160u), c.f[0]);
    st32((c.r[5].w[0] + 164u), c.r[4].w[0]);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.f[12] = 0u;
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 19;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBB84u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DBB84u) [[unlikely]] return; }
L_002DBB84:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 548u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBB98u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002DBB98u) [[unlikely]] return; }
L_002DBB98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002DBBAC; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBBACu); set32(c.r[6], 0u + 760u);  if (depth < kMaxDepth) unit_0018(c, 110u, depth + 1u); else { c.pc = 0x001630C0u; return; } if (c.pc != 0x002DBBACu) [[unlikely]] return; }
L_002DBBAC:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBBB8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002DBBB8u) [[unlikely]] return; }
L_002DBBB8:
    set32(c.r[6], ld32((c.r[17].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.f[12] = c.r[3].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43BB0000u);
    c.f[13] = c.r[3].w[0];
    st32((c.r[6].w[0] + 48u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[6].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[6].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 22;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBC10u); c.f[14] = ld32((c.r[1].w[0] - 23592u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DBC10u) [[unlikely]] return; }
L_002DBC10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBC18u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002DBC18u) [[unlikely]] return; }
L_002DBC18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002DBC2C; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBC2Cu); set32(c.r[6], 0u + 812u);  if (depth < kMaxDepth) unit_0018(c, 110u, depth + 1u); else { c.pc = 0x001630C0u; return; } if (c.pc != 0x002DBC2Cu) [[unlikely]] return; }
L_002DBC2C:
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBC38u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002DBC38u) [[unlikely]] return; }
L_002DBC38:
    set32(c.r[6], ld32((c.r[17].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.f[12] = c.r[3].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], 0u + 389u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[6].w[0] + 48u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[6].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[6].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.f[14] = ld32((c.r[1].w[0] - 23592u));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 23;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBC94u); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DBC94u) [[unlikely]] return; }
L_002DBC94:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002DBCB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002DBD58; } }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002DBCF0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002DBCF0; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBCF0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DBCF0u) [[unlikely]] return; }
L_002DBCF0:
    st32((c.r[17].w[0]), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002DBD18; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002DBD18; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBD18u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DBD18u) [[unlikely]] return; }
L_002DBD18:
    st32((c.r[17].w[0] + 4u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] << 48;  if (t) { goto L_002DBD44; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002DBD40; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBD40u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DBD40u) [[unlikely]] return; }
L_002DBD40:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_002DBD44:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[17].w[0] + 8u), 0u);  if (t) { goto L_002DBD58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBD58u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002DBD58u) [[unlikely]] return; }
L_002DBD58:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002DBD70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.f[1] = ld32((c.r[4].w[0] + 12u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[0] = ld32((c.r[1].w[0] - 23648u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[4].w[0] + 28u), c.r[2].w[0]);
    ld128((c.r[4].w[0] + 16u) & ~15u, c.r[2]);
    c.f[0] = ld32((c.r[1].w[0] - 23656u));
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[2]);
    c.f[1] = ld32((c.r[4].w[0] + 12u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBDE4u); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0018(c, 14u, depth + 1u); else { c.pc = 0x001609B0u; return; } if (c.pc != 0x002DBDE4u) [[unlikely]] return; }
L_002DBDE4:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], 0u + 440u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBDF4u); set32(c.r[6], 0u + 300u);  if (depth < kMaxDepth) unit_0018(c, 17u, depth + 1u); else { c.pc = 0x00160A20u; return; } if (c.pc != 0x002DBDF4u) [[unlikely]] return; }
L_002DBDF4:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBE08u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DBE08u) [[unlikely]] return; }
L_002DBE08:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBE28u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DBE28u) [[unlikely]] return; }
L_002DBE28:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBE48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DBE48u) [[unlikely]] return; }
L_002DBE48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002DBE60:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 28u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DAEF0u | kUnwind; return; } goto L_002DAEF0; }
L_002DBE70:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 28u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002D9780u | kUnwind; return; } goto L_002D9780; }
L_002DBE80:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 36u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DAF70u | kUnwind; return; } goto L_002DAF70; }
L_002DBE90:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 36u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002D9780u | kUnwind; return; } goto L_002D9780; }
L_002DBEA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 16u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBEB8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x002DBEB8u) [[unlikely]] return; }
L_002DBEB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[16].w[0] + 12u);
    set32(c.r[2], c.r[2].w[0] + 13200u);
    set32(c.r[5], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBED0u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 271u, depth + 1u); else { c.pc = 0x002275A0u; return; } if (c.pc != 0x002DBED0u) [[unlikely]] return; }
L_002DBED0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002DBEF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002DBF48; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[17].w[0] + 12u);
    set32(c.r[2], c.r[2].w[0] + 13200u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBF24u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 274u, depth + 1u); else { c.pc = 0x002275F0u; return; } if (c.pc != 0x002DBF24u) [[unlikely]] return; }
L_002DBF24:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBF30u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x002DBF30u) [[unlikely]] return; }
L_002DBF30:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002DBF4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBF48u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002DBF48u) [[unlikely]] return; }
L_002DBF48:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002DBF4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002DBF60:
    set32(c.r[29], c.r[29].w[0] - 320u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[1].w[0] + 20144u)));
    c.f[0] = ld32((c.r[4].w[0] + 24u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[16], ld32((c.r[1].w[0] + 1420u)));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1424u)));
    set32(c.r[17], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1416u)));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DBFB8u); set32(c.r[18], c.r[3].w[0] << (c.r[2].w[0] & 31u));  if (depth < kMaxDepth) unit_0017(c, 177u, depth + 1u); else { c.pc = 0x0015E070u; return; } if (c.pc != 0x002DBFB8u) [[unlikely]] return; }
L_002DBFB8:
    c.f[0] = c.r[16].w[0];
    set32(c.r[2], 0u + 12289u);
    c.f[1] = c.r[18].w[0];
    st64((c.r[29].w[0] + 312u), c.r[2].d[0]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 1));
    st32((c.r[29].w[0] + 124u), c.r[17].w[0]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 112u), 0u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[18].w[0]) >> 1));
    st32((c.r[29].w[0] + 116u), 0u);
    st32((c.r[29].w[0] + 120u), 0u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[29].w[0] + 224u), c.f[0]);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 228u), c.f[1]);
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.budget -= 18;
    [[clang::musttail]] return unit_0077(c, 1u, depth);
}

}
