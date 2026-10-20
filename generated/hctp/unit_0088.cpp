#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0088[4096] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 8, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0,
    11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0,
    16, 0, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0,
    0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 26, 0,
    0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0,
    32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 40, 0, 0, 41, 0,
    0, 42, 0, 0, 43, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 48, 0, 0, 0,
    49, 0, 0, 0, 0, 50, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0,
    0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 58, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0,
    64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0,
    0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0,
    73, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 77, 0, 78, 0, 0, 0,
    79, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 0, 0, 0,
    84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 90, 0, 91, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 94, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 99,
    0, 0, 0, 0, 0, 100, 0, 101, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0,
    0, 0, 105, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 110, 0, 0, 0,
    0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    114, 0, 0, 115, 0, 0, 116, 0, 0, 117, 0, 0, 118, 0, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0,
    0, 122, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0,
    0, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 138, 0, 0,
    0, 0, 139, 0, 0, 0, 0, 140, 0, 141, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 144, 0, 0, 0, 145, 0,
    0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 153, 0, 154, 0, 0, 0, 155, 0, 156, 0,
    0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0,
    0, 0, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 164, 0, 0, 165, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0,
    171, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173,
    0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0,
    0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 180, 0, 0, 181, 0, 0, 182, 0, 0, 183,
    0, 0, 184, 0, 0, 185, 0, 0, 186, 0, 0, 187, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    197, 0, 0, 0, 0, 0, 0, 198, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 202, 0, 0, 0, 0, 0, 0, 0, 203,
    0, 0, 204, 0, 0, 205, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 210, 0,
    0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0,
    0, 0, 215, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 237,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 239, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 243, 0, 244, 0, 0, 0, 245, 0, 246, 0, 0, 0, 0,
    0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 250, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 252, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 255,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 257, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 259,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 267,
    0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 269, 0, 270, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 272, 0, 273, 0, 0, 0, 0, 0, 0,
    274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    277, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 280, 0, 0, 0, 281,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 285, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0,
    0, 0, 289, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 0, 294, 0,
    0, 295, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 301, 0, 0, 302, 0, 0, 303, 0, 0, 304, 0, 0, 305, 0, 0, 306, 0,
    0, 307, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 310, 0, 0, 311, 0, 0, 0, 312, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 314, 0, 315, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 317, 0, 318, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 321, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0,
    0, 323, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 325, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 328, 0, 0,
    0, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 331, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 333, 0, 0, 0, 334, 0, 0, 0, 335, 0, 336, 0, 0, 0, 337, 0, 0, 338, 0, 339, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0,
    341, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0,
    0, 346, 0, 0, 0, 347, 0, 0, 0, 0, 348, 0, 0, 349, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 352, 0, 0, 353, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 356, 0,
    0, 357, 0, 0, 358, 0, 0, 359, 0, 0, 360, 0, 0, 361, 0, 0, 362, 0, 0, 363, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0,
    365, 0, 0, 0, 0, 366, 0, 0, 367, 0, 0, 0, 368, 0, 0, 0, 0, 369, 0, 370, 0, 0, 0, 0, 0, 371, 0, 372, 0, 0, 0, 0,
    373, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0,
    0, 378, 0, 0, 0, 0, 379, 0, 380, 0, 0, 0, 381, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 384, 0, 0, 0, 385, 0, 0, 386, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 388, 0, 0, 0, 389, 0, 0, 0, 390, 0, 391, 0, 0, 0, 392, 0, 0, 393, 0, 394, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0,
    396, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0,
    400, 0, 401, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 404, 0, 0, 0, 0,
    0, 405, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 408, 0, 0, 0, 0, 409, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 411, 0, 0, 0, 412, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0,
    415, 0, 0, 416, 0, 0, 0, 0, 0, 417, 0, 0, 0, 418, 0, 0, 0, 419, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 421, 0, 422, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 424, 0, 425, 0, 426, 0, 0, 0, 0, 427, 0, 0, 0,
    428, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 430, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 432, 0, 0, 0, 433, 0, 0, 0,
    0, 0, 0, 0, 434, 0, 0, 0, 0, 435, 0, 436, 0, 437, 0, 0, 0, 0, 438, 0, 0, 0, 439, 0, 0, 0, 440, 0, 0, 0, 0, 0,
    441, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 443, 0, 444, 0, 445, 0, 446, 0, 447, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 451, 0, 452, 0, 0, 0, 0, 453, 0, 0, 0, 0, 454, 0, 455,
    0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 463, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 469, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 477, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 484, 0, 0, 485, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 489,
    0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 492, 0, 0, 0, 0, 493, 0, 0, 0, 494, 0, 0, 0, 495, 0, 0, 0,
    496, 0, 0, 0, 497, 0, 0, 0, 498, 0, 0, 0, 499, 0, 0, 0, 500, 0, 0, 0, 501, 0, 0, 0, 502, 0, 0, 0, 503, 0, 0, 0,
    504, 0, 0, 0, 505, 0, 0, 0, 506, 0, 0, 0, 507, 0, 0, 0, 508, 0, 0, 0, 509, 0, 0, 0, 510, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 511, 0, 512, 0, 0, 0, 513, 0, 514, 0, 0, 0, 515, 0, 516, 0, 0, 0, 0, 0, 517, 0, 518, 0, 0, 0, 0,
    0, 519, 0, 520, 0, 0, 0, 521, 0, 522, 0, 0, 0, 523, 0, 524, 0, 0, 0, 525, 0, 526, 0, 0, 0, 527, 0, 528, 0, 0, 0, 0,
    0, 0, 0, 0, 529, 0, 0, 0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 532, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 534, 0, 0, 0, 535, 0, 536, 0, 0, 537, 0, 0, 0, 0,
    0, 0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 540, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0,
    0, 542, 0, 0, 0, 0, 0, 543, 0, 0, 0, 0, 0, 544, 0, 0, 0, 0, 545, 0, 0, 0, 0, 546, 0, 0, 0, 0, 547, 0, 0, 0,
    0, 548, 0, 0, 0, 0, 549, 0, 0, 0, 0, 550, 0, 0, 0, 0, 551, 0, 552, 0, 0, 0, 0, 0, 0, 0, 0, 0, 553, 0, 0, 0,
    0, 0, 0, 0, 0, 554, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 555, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 556, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 557, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    558, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 559, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 560, 0, 0, 0, 0, 561, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 563, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    564, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0, 567, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 568, 0, 0, 0,
    569, 0, 0, 0, 0, 570, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 571, 0, 0, 0, 572, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 573, 0, 0, 0, 0, 574, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 0, 576, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 577, 0, 0, 0, 0, 0, 0, 0, 578, 0, 0, 0, 0, 0, 0, 0, 0, 0, 579, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 580, 0, 0, 0, 581, 0, 0, 0, 0, 0, 0, 0, 0, 0, 582, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    583, 0, 0, 0, 0, 0, 0, 584, 0, 0, 0, 0, 0, 0, 0, 0, 0, 585, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 586, 0,
    0, 0, 587, 0, 0, 0, 0, 0, 0, 0, 0, 0, 588, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 589, 0, 0, 0, 590, 0, 591,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 592, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 593, 0, 0,
    0, 0, 594, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 595, 0, 0, 0, 596, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    597, 0, 0, 0, 598, 0, 599, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 600, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 601, 0, 602, 0, 0, 0, 603, 0, 604, 0, 0, 0, 605, 0, 606, 0, 0, 0, 0, 0, 607, 0, 608, 0, 0,
    0, 0, 0, 609, 0, 610, 0, 0, 0, 611, 0, 612, 0, 0, 0, 613, 0, 614, 0, 0, 0, 615, 0, 616, 0, 0, 0, 617, 0, 618, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 619, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 620, 0, 0, 0, 621, 0, 0, 0, 0, 0, 0,
    622, 0, 0, 0, 623, 0, 0, 0, 0, 0, 624, 0, 0, 0, 625, 0, 0, 0, 626, 0, 0, 0, 627, 0, 0, 0, 628, 0, 0, 0, 629, 0,
    0, 0, 0, 0, 630, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 631, 0, 0, 632,
};

void unit_0088(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00320000;
    case 2u: goto L_0032000C;
    case 3u: goto L_00320024;
    case 4u: goto L_0032002C;
    case 5u: goto L_00320090;
    case 6u: goto L_003200A8;
    case 7u: goto L_003200C8;
    case 8u: goto L_003200D0;
    case 9u: goto L_003200E0;
    case 10u: goto L_003200F0;
    case 11u: goto L_00320100;
    case 12u: goto L_00320128;
    case 13u: goto L_00320150;
    case 14u: goto L_00320164;
    case 15u: goto L_00320174;
    case 16u: goto L_00320180;
    case 17u: goto L_00320194;
    case 18u: goto L_003201A8;
    case 19u: goto L_003201D4;
    case 20u: goto L_003201E4;
    case 21u: goto L_003201F4;
    case 22u: goto L_00320204;
    case 23u: goto L_0032023C;
    case 24u: goto L_00320244;
    case 25u: goto L_00320258;
    case 26u: goto L_00320278;
    case 27u: goto L_00320294;
    case 28u: goto L_003202AC;
    case 29u: goto L_003202C0;
    case 30u: goto L_003202D4;
    case 31u: goto L_003202F8;
    case 32u: goto L_00320300;
    case 33u: goto L_00320328;
    case 34u: goto L_00320344;
    case 35u: goto L_00320354;
    case 36u: goto L_00320360;
    case 37u: goto L_00320388;
    case 38u: goto L_003203A0;
    case 39u: goto L_003203E0;
    case 40u: goto L_003203EC;
    case 41u: goto L_003203F8;
    case 42u: goto L_00320404;
    case 43u: goto L_00320410;
    case 44u: goto L_0032041C;
    case 45u: goto L_00320434;
    case 46u: goto L_00320450;
    case 47u: goto L_00320464;
    case 48u: goto L_00320470;
    case 49u: goto L_00320480;
    case 50u: goto L_00320494;
    case 51u: goto L_0032049C;
    case 52u: goto L_003204B0;
    case 53u: goto L_003204D4;
    case 54u: goto L_003204E8;
    case 55u: goto L_00320508;
    case 56u: goto L_0032053C;
    case 57u: goto L_00320554;
    case 58u: goto L_00320584;
    case 59u: goto L_00320590;
    case 60u: goto L_003205A8;
    case 61u: goto L_003205B0;
    case 62u: goto L_003205C0;
    case 63u: goto L_003205DC;
    case 64u: goto L_00320600;
    case 65u: goto L_00320638;
    case 66u: goto L_00320660;
    case 67u: goto L_00320684;
    case 68u: goto L_003206AC;
    case 69u: goto L_003206C0;
    case 70u: goto L_003206D0;
    case 71u: goto L_003206DC;
    case 72u: goto L_003206F4;
    case 73u: goto L_00320700;
    case 74u: goto L_00320714;
    case 75u: goto L_00320748;
    case 76u: goto L_00320758;
    case 77u: goto L_00320768;
    case 78u: goto L_00320770;
    case 79u: goto L_00320780;
    case 80u: goto L_00320788;
    case 81u: goto L_003207A0;
    case 82u: goto L_003207D8;
    case 83u: goto L_003207EC;
    case 84u: goto L_00320800;
    case 85u: goto L_0032082C;
    case 86u: goto L_0032083C;
    case 87u: goto L_0032084C;
    case 88u: goto L_0032085C;
    case 89u: goto L_0032086C;
    case 90u: goto L_00320894;
    case 91u: goto L_0032089C;
    case 92u: goto L_003208B8;
    case 93u: goto L_003208D8;
    case 94u: goto L_003208F8;
    case 95u: goto L_00320920;
    case 96u: goto L_00320940;
    case 97u: goto L_00320950;
    case 98u: goto L_00320960;
    case 99u: goto L_0032097C;
    case 100u: goto L_00320994;
    case 101u: goto L_0032099C;
    case 102u: goto L_003209B0;
    case 103u: goto L_003209D0;
    case 104u: goto L_003209E4;
    case 105u: goto L_00320A08;
    case 106u: goto L_00320A10;
    case 107u: goto L_00320A38;
    case 108u: goto L_00320A54;
    case 109u: goto L_00320A64;
    case 110u: goto L_00320A70;
    case 111u: goto L_00320A94;
    case 112u: goto L_00320AAC;
    case 113u: goto L_00320AC0;
    case 114u: goto L_00320B00;
    case 115u: goto L_00320B0C;
    case 116u: goto L_00320B18;
    case 117u: goto L_00320B24;
    case 118u: goto L_00320B30;
    case 119u: goto L_00320B3C;
    case 120u: goto L_00320B54;
    case 121u: goto L_00320B70;
    case 122u: goto L_00320B84;
    case 123u: goto L_00320B90;
    case 124u: goto L_00320BA0;
    case 125u: goto L_00320BBC;
    case 126u: goto L_00320BD0;
    case 127u: goto L_00320BE0;
    case 128u: goto L_00320BF8;
    case 129u: goto L_00320C10;
    case 130u: goto L_00320C24;
    case 131u: goto L_00320C48;
    case 132u: goto L_00320C54;
    case 133u: goto L_00320C70;
    case 134u: goto L_00320C9C;
    case 135u: goto L_00320CC4;
    case 136u: goto L_00320CD8;
    case 137u: goto L_00320CE8;
    case 138u: goto L_00320CF4;
    case 139u: goto L_00320D08;
    case 140u: goto L_00320D1C;
    case 141u: goto L_00320D24;
    case 142u: goto L_00320D2C;
    case 143u: goto L_00320D5C;
    case 144u: goto L_00320D68;
    case 145u: goto L_00320D78;
    case 146u: goto L_00320D88;
    case 147u: goto L_00320D98;
    case 148u: goto L_00320DD0;
    case 149u: goto L_00320DDC;
    case 150u: goto L_00320DF0;
    case 151u: goto L_00320E38;
    case 152u: goto L_00320E48;
    case 153u: goto L_00320E58;
    case 154u: goto L_00320E60;
    case 155u: goto L_00320E70;
    case 156u: goto L_00320E78;
    case 157u: goto L_00320E90;
    case 158u: goto L_00320EA4;
    case 159u: goto L_00320EC8;
    case 160u: goto L_00320ED0;
    case 161u: goto L_00320EF8;
    case 162u: goto L_00320F14;
    case 163u: goto L_00320F24;
    case 164u: goto L_00320F40;
    case 165u: goto L_00320F4C;
    case 166u: goto L_00320F58;
    case 167u: goto L_00320FA0;
    case 168u: goto L_00320FAC;
    case 169u: goto L_00320FD0;
    case 170u: goto L_00320FE4;
    case 171u: goto L_00321000;
    case 172u: goto L_00321020;
    case 173u: goto L_0032107C;
    case 174u: goto L_00321088;
    case 175u: goto L_003210A0;
    case 176u: goto L_003210C0;
    case 177u: goto L_003210F8;
    case 178u: goto L_00321104;
    case 179u: goto L_0032114C;
    case 180u: goto L_00321158;
    case 181u: goto L_00321164;
    case 182u: goto L_00321170;
    case 183u: goto L_0032117C;
    case 184u: goto L_00321188;
    case 185u: goto L_00321194;
    case 186u: goto L_003211A0;
    case 187u: goto L_003211AC;
    case 188u: goto L_003211B8;
    case 189u: goto L_003211D0;
    case 190u: goto L_003211F0;
    case 191u: goto L_0032122C;
    case 192u: goto L_00321240;
    case 193u: goto L_00321288;
    case 194u: goto L_003212BC;
    case 195u: goto L_003212CC;
    case 196u: goto L_003212D8;
    case 197u: goto L_00321300;
    case 198u: goto L_0032131C;
    case 199u: goto L_00321324;
    case 200u: goto L_00321340;
    case 201u: goto L_00321354;
    case 202u: goto L_0032135C;
    case 203u: goto L_0032137C;
    case 204u: goto L_00321388;
    case 205u: goto L_00321394;
    case 206u: goto L_003213AC;
    case 207u: goto L_003213C0;
    case 208u: goto L_003213DC;
    case 209u: goto L_003213F0;
    case 210u: goto L_003213F8;
    case 211u: goto L_00321410;
    case 212u: goto L_00321420;
    case 213u: goto L_0032143C;
    case 214u: goto L_00321470;
    case 215u: goto L_00321488;
    case 216u: goto L_003214A0;
    case 217u: goto L_003214C8;
    case 218u: goto L_003214D0;
    case 219u: goto L_00321520;
    case 220u: goto L_00321534;
    case 221u: goto L_0032154C;
    case 222u: goto L_00321574;
    case 223u: goto L_003215A8;
    case 224u: goto L_003215B8;
    case 225u: goto L_003215C4;
    case 226u: goto L_003215D8;
    case 227u: goto L_003215EC;
    case 228u: goto L_00321634;
    case 229u: goto L_00321640;
    case 230u: goto L_00321650;
    case 231u: goto L_00321660;
    case 232u: goto L_00321670;
    case 233u: goto L_003216A4;
    case 234u: goto L_003216CC;
    case 235u: goto L_003216DC;
    case 236u: goto L_003216EC;
    case 237u: goto L_003216FC;
    case 238u: goto L_00321744;
    case 239u: goto L_00321750;
    case 240u: goto L_00321764;
    case 241u: goto L_003217AC;
    case 242u: goto L_003217BC;
    case 243u: goto L_003217CC;
    case 244u: goto L_003217D4;
    case 245u: goto L_003217E4;
    case 246u: goto L_003217EC;
    case 247u: goto L_00321810;
    case 248u: goto L_00321838;
    case 249u: goto L_00321854;
    case 250u: goto L_00321884;
    case 251u: goto L_003218A4;
    case 252u: goto L_003218BC;
    case 253u: goto L_003218C8;
    case 254u: goto L_003218E8;
    case 255u: goto L_003218FC;
    case 256u: goto L_00321944;
    case 257u: goto L_0032194C;
    case 258u: goto L_00321958;
    case 259u: goto L_0032197C;
    case 260u: goto L_003219AC;
    case 261u: goto L_003219B8;
    case 262u: goto L_003219DC;
    case 263u: goto L_00321A08;
    case 264u: goto L_00321A34;
    case 265u: goto L_00321A3C;
    case 266u: goto L_00321A60;
    case 267u: goto L_00321A7C;
    case 268u: goto L_00321A9C;
    case 269u: goto L_00321AA8;
    case 270u: goto L_00321AB0;
    case 271u: goto L_00321ABC;
    case 272u: goto L_00321ADC;
    case 273u: goto L_00321AE4;
    case 274u: goto L_00321B00;
    case 275u: goto L_00321B28;
    case 276u: goto L_00321B30;
    case 277u: goto L_00321B80;
    case 278u: goto L_00321B90;
    case 279u: goto L_00321BD4;
    case 280u: goto L_00321BEC;
    case 281u: goto L_00321BFC;
    case 282u: goto L_00321C30;
    case 283u: goto L_00321C40;
    case 284u: goto L_00321C5C;
    case 285u: goto L_00321C88;
    case 286u: goto L_00321C94;
    case 287u: goto L_00321CD0;
    case 288u: goto L_00321CE4;
    case 289u: goto L_00321D08;
    case 290u: goto L_00321D10;
    case 291u: goto L_00321D38;
    case 292u: goto L_00321D54;
    case 293u: goto L_00321D64;
    case 294u: goto L_00321D78;
    case 295u: goto L_00321D84;
    case 296u: goto L_00321D90;
    case 297u: goto L_00321DCC;
    case 298u: goto L_00321DD8;
    case 299u: goto L_00321DF0;
    case 300u: goto L_00321E30;
    case 301u: goto L_00321E3C;
    case 302u: goto L_00321E48;
    case 303u: goto L_00321E54;
    case 304u: goto L_00321E60;
    case 305u: goto L_00321E6C;
    case 306u: goto L_00321E78;
    case 307u: goto L_00321E84;
    case 308u: goto L_00321E9C;
    case 309u: goto L_00321EC0;
    case 310u: goto L_00321ED4;
    case 311u: goto L_00321EE0;
    case 312u: goto L_00321EF0;
    case 313u: goto L_00321F1C;
    case 314u: goto L_00321F28;
    case 315u: goto L_00321F30;
    case 316u: goto L_00321F48;
    case 317u: goto L_00321F60;
    case 318u: goto L_00321F68;
    case 319u: goto L_00321F9C;
    case 320u: goto L_00321FC0;
    case 321u: goto L_00321FD4;
    case 322u: goto L_00321FE8;
    case 323u: goto L_00322004;
    case 324u: goto L_00322020;
    case 325u: goto L_00322034;
    case 326u: goto L_00322044;
    case 327u: goto L_00322060;
    case 328u: goto L_00322074;
    case 329u: goto L_00322090;
    case 330u: goto L_003220A0;
    case 331u: goto L_003220AC;
    case 332u: goto L_003220C0;
    case 333u: goto L_00322108;
    case 334u: goto L_00322118;
    case 335u: goto L_00322128;
    case 336u: goto L_00322130;
    case 337u: goto L_00322140;
    case 338u: goto L_0032214C;
    case 339u: goto L_00322154;
    case 340u: goto L_00322164;
    case 341u: goto L_00322180;
    case 342u: goto L_00322194;
    case 343u: goto L_003221B8;
    case 344u: goto L_003221C0;
    case 345u: goto L_003221E8;
    case 346u: goto L_00322204;
    case 347u: goto L_00322214;
    case 348u: goto L_00322228;
    case 349u: goto L_00322234;
    case 350u: goto L_00322240;
    case 351u: goto L_00322268;
    case 352u: goto L_00322290;
    case 353u: goto L_0032229C;
    case 354u: goto L_003222B0;
    case 355u: goto L_003222E8;
    case 356u: goto L_003222F8;
    case 357u: goto L_00322304;
    case 358u: goto L_00322310;
    case 359u: goto L_0032231C;
    case 360u: goto L_00322328;
    case 361u: goto L_00322334;
    case 362u: goto L_00322340;
    case 363u: goto L_0032234C;
    case 364u: goto L_00322364;
    case 365u: goto L_00322380;
    case 366u: goto L_00322394;
    case 367u: goto L_003223A0;
    case 368u: goto L_003223B0;
    case 369u: goto L_003223C4;
    case 370u: goto L_003223CC;
    case 371u: goto L_003223E4;
    case 372u: goto L_003223EC;
    case 373u: goto L_00322400;
    case 374u: goto L_00322414;
    case 375u: goto L_00322430;
    case 376u: goto L_00322450;
    case 377u: goto L_00322464;
    case 378u: goto L_00322484;
    case 379u: goto L_00322498;
    case 380u: goto L_003224A0;
    case 381u: goto L_003224B0;
    case 382u: goto L_003224BC;
    case 383u: goto L_003224E0;
    case 384u: goto L_00322510;
    case 385u: goto L_00322520;
    case 386u: goto L_0032252C;
    case 387u: goto L_00322540;
    case 388u: goto L_00322588;
    case 389u: goto L_00322598;
    case 390u: goto L_003225A8;
    case 391u: goto L_003225B0;
    case 392u: goto L_003225C0;
    case 393u: goto L_003225CC;
    case 394u: goto L_003225D4;
    case 395u: goto L_003225E4;
    case 396u: goto L_00322600;
    case 397u: goto L_00322624;
    case 398u: goto L_00322648;
    case 399u: goto L_00322674;
    case 400u: goto L_00322680;
    case 401u: goto L_00322688;
    case 402u: goto L_003226A0;
    case 403u: goto L_003226E0;
    case 404u: goto L_003226EC;
    case 405u: goto L_00322704;
    case 406u: goto L_00322720;
    case 407u: goto L_0032274C;
    case 408u: goto L_00322760;
    case 409u: goto L_00322774;
    case 410u: goto L_0032279C;
    case 411u: goto L_003227B0;
    case 412u: goto L_003227C0;
    case 413u: goto L_003227CC;
    case 414u: goto L_003227F8;
    case 415u: goto L_00322800;
    case 416u: goto L_0032280C;
    case 417u: goto L_00322824;
    case 418u: goto L_00322834;
    case 419u: goto L_00322844;
    case 420u: goto L_00322854;
    case 421u: goto L_0032288C;
    case 422u: goto L_00322894;
    case 423u: goto L_003228B0;
    case 424u: goto L_003228CC;
    case 425u: goto L_003228D4;
    case 426u: goto L_003228DC;
    case 427u: goto L_003228F0;
    case 428u: goto L_00322900;
    case 429u: goto L_00322920;
    case 430u: goto L_00322934;
    case 431u: goto L_00322948;
    case 432u: goto L_00322960;
    case 433u: goto L_00322970;
    case 434u: goto L_00322990;
    case 435u: goto L_003229A4;
    case 436u: goto L_003229AC;
    case 437u: goto L_003229B4;
    case 438u: goto L_003229C8;
    case 439u: goto L_003229D8;
    case 440u: goto L_003229E8;
    case 441u: goto L_00322A00;
    case 442u: goto L_00322A20;
    case 443u: goto L_00322A2C;
    case 444u: goto L_00322A34;
    case 445u: goto L_00322A3C;
    case 446u: goto L_00322A44;
    case 447u: goto L_00322A4C;
    case 448u: goto L_00322A60;
    case 449u: goto L_00322A98;
    case 450u: goto L_00322AB0;
    case 451u: goto L_00322AC4;
    case 452u: goto L_00322ACC;
    case 453u: goto L_00322AE0;
    case 454u: goto L_00322AF4;
    case 455u: goto L_00322AFC;
    case 456u: goto L_00322B10;
    case 457u: goto L_00322B3C;
    case 458u: goto L_00322B50;
    case 459u: goto L_00322B94;
    case 460u: goto L_00322C24;
    case 461u: goto L_00322C2C;
    case 462u: goto L_00322C64;
    case 463u: goto L_00322C94;
    case 464u: goto L_00322C9C;
    case 465u: goto L_00322CCC;
    case 466u: goto L_00322D00;
    case 467u: goto L_00322D40;
    case 468u: goto L_00322D58;
    case 469u: goto L_00322D70;
    case 470u: goto L_00322DAC;
    case 471u: goto L_00322E2C;
    case 472u: goto L_00322E34;
    case 473u: goto L_00322E58;
    case 474u: goto L_00322E80;
    case 475u: goto L_00322ED8;
    case 476u: goto L_00322F6C;
    case 477u: goto L_00322F74;
    case 478u: goto L_00322FAC;
    case 479u: goto L_00322FD4;
    case 480u: goto L_00322FDC;
    case 481u: goto L_00323010;
    case 482u: goto L_00323040;
    case 483u: goto L_00323050;
    case 484u: goto L_00323090;
    case 485u: goto L_0032309C;
    case 486u: goto L_003230B4;
    case 487u: goto L_003230D0;
    case 488u: goto L_003230E8;
    case 489u: goto L_003230FC;
    case 490u: goto L_00323110;
    case 491u: goto L_00323128;
    case 492u: goto L_0032313C;
    case 493u: goto L_00323150;
    case 494u: goto L_00323160;
    case 495u: goto L_00323170;
    case 496u: goto L_00323180;
    case 497u: goto L_00323190;
    case 498u: goto L_003231A0;
    case 499u: goto L_003231B0;
    case 500u: goto L_003231C0;
    case 501u: goto L_003231D0;
    case 502u: goto L_003231E0;
    case 503u: goto L_003231F0;
    case 504u: goto L_00323200;
    case 505u: goto L_00323210;
    case 506u: goto L_00323220;
    case 507u: goto L_00323230;
    case 508u: goto L_00323240;
    case 509u: goto L_00323250;
    case 510u: goto L_00323260;
    case 511u: goto L_00323294;
    case 512u: goto L_0032329C;
    case 513u: goto L_003232AC;
    case 514u: goto L_003232B4;
    case 515u: goto L_003232C4;
    case 516u: goto L_003232CC;
    case 517u: goto L_003232E4;
    case 518u: goto L_003232EC;
    case 519u: goto L_00323304;
    case 520u: goto L_0032330C;
    case 521u: goto L_0032331C;
    case 522u: goto L_00323324;
    case 523u: goto L_00323334;
    case 524u: goto L_0032333C;
    case 525u: goto L_0032334C;
    case 526u: goto L_00323354;
    case 527u: goto L_00323364;
    case 528u: goto L_0032336C;
    case 529u: goto L_00323390;
    case 530u: goto L_003233A8;
    case 531u: goto L_003233DC;
    case 532u: goto L_003233F0;
    case 533u: goto L_00323418;
    case 534u: goto L_00323448;
    case 535u: goto L_00323458;
    case 536u: goto L_00323460;
    case 537u: goto L_0032346C;
    case 538u: goto L_00323488;
    case 539u: goto L_003234C0;
    case 540u: goto L_003234D4;
    case 541u: goto L_003234EC;
    case 542u: goto L_00323504;
    case 543u: goto L_0032351C;
    case 544u: goto L_00323534;
    case 545u: goto L_00323548;
    case 546u: goto L_0032355C;
    case 547u: goto L_00323570;
    case 548u: goto L_00323584;
    case 549u: goto L_00323598;
    case 550u: goto L_003235AC;
    case 551u: goto L_003235C0;
    case 552u: goto L_003235C8;
    case 553u: goto L_003235F0;
    case 554u: goto L_00323614;
    case 555u: goto L_0032365C;
    case 556u: goto L_00323688;
    case 557u: goto L_003236C0;
    case 558u: goto L_00323700;
    case 559u: goto L_0032372C;
    case 560u: goto L_00323760;
    case 561u: goto L_00323774;
    case 562u: goto L_003237A0;
    case 563u: goto L_003237BC;
    case 564u: goto L_00323800;
    case 565u: goto L_00323844;
    case 566u: goto L_00323898;
    case 567u: goto L_003238B0;
    case 568u: goto L_003238F0;
    case 569u: goto L_00323900;
    case 570u: goto L_00323914;
    case 571u: goto L_00323948;
    case 572u: goto L_00323958;
    case 573u: goto L_0032398C;
    case 574u: goto L_003239A0;
    case 575u: goto L_003239D4;
    case 576u: goto L_003239E4;
    case 577u: goto L_00323A18;
    case 578u: goto L_00323A38;
    case 579u: goto L_00323A60;
    case 580u: goto L_00323A94;
    case 581u: goto L_00323AA4;
    case 582u: goto L_00323ACC;
    case 583u: goto L_00323B00;
    case 584u: goto L_00323B1C;
    case 585u: goto L_00323B44;
    case 586u: goto L_00323B78;
    case 587u: goto L_00323B88;
    case 588u: goto L_00323BB0;
    case 589u: goto L_00323BE4;
    case 590u: goto L_00323BF4;
    case 591u: goto L_00323BFC;
    case 592u: goto L_00323C34;
    case 593u: goto L_00323C74;
    case 594u: goto L_00323C88;
    case 595u: goto L_00323CBC;
    case 596u: goto L_00323CCC;
    case 597u: goto L_00323D00;
    case 598u: goto L_00323D10;
    case 599u: goto L_00323D18;
    case 600u: goto L_00323D60;
    case 601u: goto L_00323D9C;
    case 602u: goto L_00323DA4;
    case 603u: goto L_00323DB4;
    case 604u: goto L_00323DBC;
    case 605u: goto L_00323DCC;
    case 606u: goto L_00323DD4;
    case 607u: goto L_00323DEC;
    case 608u: goto L_00323DF4;
    case 609u: goto L_00323E0C;
    case 610u: goto L_00323E14;
    case 611u: goto L_00323E24;
    case 612u: goto L_00323E2C;
    case 613u: goto L_00323E3C;
    case 614u: goto L_00323E44;
    case 615u: goto L_00323E54;
    case 616u: goto L_00323E5C;
    case 617u: goto L_00323E6C;
    case 618u: goto L_00323E74;
    case 619u: goto L_00323EA0;
    case 620u: goto L_00323ED4;
    case 621u: goto L_00323EE4;
    case 622u: goto L_00323F00;
    case 623u: goto L_00323F10;
    case 624u: goto L_00323F28;
    case 625u: goto L_00323F38;
    case 626u: goto L_00323F48;
    case 627u: goto L_00323F58;
    case 628u: goto L_00323F68;
    case 629u: goto L_00323F78;
    case 630u: goto L_00323F90;
    case 631u: goto L_00323FF0;
    case 632u: goto L_00323FFC;
    default: bad_entry(c, 0x00320000u); return;
    }
L_00320000:
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032000Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 407u, depth + 1u); else { c.pc = 0x0031F9A0u; return; } if (c.pc != 0x0032000Cu) [[unlikely]] return; }
L_0032000C:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[4].d[0];  if (t) { goto L_00320074; } }
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320024u); st16((c.r[17].w[0] + 190u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0021(c, 410u, depth + 1u); else { c.pc = 0x001873D0u; return; } if (c.pc != 0x00320024u) [[unlikely]] return; }
L_00320024:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032002Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 380u, depth + 1u); else { c.pc = 0x0031F6A0u; return; } if (c.pc != 0x0032002Cu) [[unlikely]] return; }
L_0032002C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 28324u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0032006C; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 392u));
    set32(c.r[5], 0u - 2u);
    c.r[6].d[0] = 0ull & 1ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st8((c.r[4].w[0] + 392u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[1].w[0] + 28324u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 400u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st8((c.r[4].w[0] + 400u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 12;
L_0032006C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st8((c.r[1].w[0] - 1688u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00320074:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00320090:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003200A8u); set32(c.r[4], ld32((c.r[4].w[0] + 176u)));  if (depth < kMaxDepth) unit_0021(c, 459u, depth + 1u); else { c.pc = 0x00187AC0u; return; } if (c.pc != 0x003200A8u) [[unlikely]] return; }
L_003200A8:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003200F0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003200D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003200C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 386u, depth + 1u); else { c.pc = 0x0031F7A0u; return; } if (c.pc != 0x003200C8u) [[unlikely]] return; }
L_003200C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003200D0u);  if (depth < kMaxDepth) unit_0022(c, 108u, depth + 1u); else { c.pc = 0x001887D0u; return; } if (c.pc != 0x003200D0u) [[unlikely]] return; }
L_003200D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003200E0; } }
L_003200D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003200E0u);  if (depth < kMaxDepth) unit_000B(c, 328u, depth + 1u); else { c.pc = 0x0012E6A0u; return; } if (c.pc != 0x003200E0u) [[unlikely]] return; }
L_003200E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 632u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003200F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009C(c, 186u, depth + 1u); else { c.pc = 0x00370F00u; return; } if (c.pc != 0x003200F0u) [[unlikely]] return; }
L_003200F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00320100:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00320128; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320128u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00320128u) [[unlikely]] return; }
L_00320128:
    st32((c.r[17].w[0] + 28u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00320150; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00320150; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00320150u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00320150u) [[unlikely]] return; }
L_00320150:
    st32((c.r[17].w[0] + 24u), 0u);
    set32(c.r[2], 0u + 4u);
    st32((c.r[17].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320164u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x00320164u) [[unlikely]] return; }
L_00320164:
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320174u); set32(c.r[5], 0u + 32u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x00320174u) [[unlikely]] return; }
L_00320174:
    set32(c.r[5], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320180u); set32(c.r[4], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_0023(c, 205u, depth + 1u); else { c.pc = 0x0018DFE0u; return; } if (c.pc != 0x00320180u) [[unlikely]] return; }
L_00320180:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 440u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320194u); set32(c.r[4], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_0023(c, 203u, depth + 1u); else { c.pc = 0x0018DFC0u; return; } if (c.pc != 0x00320194u) [[unlikely]] return; }
L_00320194:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 444u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003201A8u); set32(c.r[4], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_0023(c, 204u, depth + 1u); else { c.pc = 0x0018DFD0u; return; } if (c.pc != 0x003201A8u) [[unlikely]] return; }
L_003201A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[2], c.r[2].w[0] - 6288u);
    set32(c.r[3], c.r[29].w[0] + 48u);
    ld128((c.r[2].w[0]) & ~15u, c.r[4]);
    c.r[16].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st128((c.r[5].w[0]) & ~15u, c.r[4]);
    set32(c.r[2], c.r[2].w[0] - 6272u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.budget -= 11;
L_003201D4:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003201E4u); set32(c.r[4], ld32((c.r[2].w[0] + 64u)));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x003201E4u) [[unlikely]] return; }
L_003201E4:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003201F4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 210u, depth + 1u); else { c.pc = 0x0018E080u; return; } if (c.pc != 0x003201F4u) [[unlikely]] return; }
L_003201F4:
    set32(c.r[4], c.r[17].w[0] + 64u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320204u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0023(c, 212u, depth + 1u); else { c.pc = 0x0018E0F0u; return; } if (c.pc != 0x00320204u) [[unlikely]] return; }
L_00320204:
    c.f[1] = ld32((c.r[29].w[0] + 52u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A80000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 52u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003201D4u | kUnwind; return; } goto L_003201D4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[17].w[0] + 208u);
    set32(c.r[5], c.r[5].w[0] - 6256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032023Cu); set32(c.r[6], c.r[6].w[0] - 6248u);  if (depth < kMaxDepth) unit_008A(c, 12u, depth + 1u); else { c.pc = 0x00328180u; return; } if (c.pc != 0x0032023Cu) [[unlikely]] return; }
L_0032023C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320244u);  if (depth < kMaxDepth) unit_0022(c, 256u, depth + 1u); else { c.pc = 0x00189B70u; return; } if (c.pc != 0x00320244u) [[unlikely]] return; }
L_00320244:
    set32(c.r[2], ld32((c.r[2].w[0] + 104u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320258u); c.r[16].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0022(c, 124u, depth + 1u); else { c.pc = 0x00188A50u; return; } if (c.pc != 0x00320258u) [[unlikely]] return; }
L_00320258:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003202A4; } }
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[4], c.r[17].w[0] + 64u);  if (t) { goto L_003202A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320278u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0023(c, 213u, depth + 1u); else { c.pc = 0x0018E130u; return; } if (c.pc != 0x00320278u) [[unlikely]] return; }
L_00320278:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[17].w[0] + 64u);
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320294u); st8((c.r[2].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0023(c, 213u, depth + 1u); else { c.pc = 0x0018E130u; return; } if (c.pc != 0x00320294u) [[unlikely]] return; }
L_00320294:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 24u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_003202A0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003202A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003202ACu);  if (depth < kMaxDepth) unit_000C(c, 21u, depth + 1u); else { c.pc = 0x001301E0u; return; } if (c.pc != 0x003202ACu) [[unlikely]] return; }
L_003202AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003202C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003202D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 356u, depth + 1u); else { c.pc = 0x0031F380u; return; } if (c.pc != 0x003202D4u) [[unlikely]] return; }
L_003202D4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 20096u);
    set32(c.r[2], c.r[2].w[0] + 20184u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 208u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003202F8u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_0023(c, 195u, depth + 1u); else { c.pc = 0x0018DEA0u; return; } if (c.pc != 0x003202F8u) [[unlikely]] return; }
L_003202F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320300u);  if (depth < kMaxDepth) unit_0022(c, 118u, depth + 1u); else { c.pc = 0x001889B0u; return; } if (c.pc != 0x00320300u) [[unlikely]] return; }
L_00320300:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 320u);
    set32(c.r[5], c.r[5].w[0] - 6240u);
    set32(c.r[6], c.r[6].w[0] - 6232u);
    set32(c.r[7], c.r[29].w[0] + 44u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320328u); set32(c.r[8], c.r[8].w[0] - 6224u);  if (depth < kMaxDepth) unit_008A(c, 48u, depth + 1u); else { c.pc = 0x003286E0u; return; } if (c.pc != 0x00320328u) [[unlikely]] return; }
L_00320328:
    set32(c.r[4], c.r[16].w[0] + 364u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], 0u + 110u);
    set32(c.r[7], 0u + 40u);
    set32(c.r[8], 0u + 400u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320344u); set32(c.r[9], 0u + 100u);  if (depth < kMaxDepth) unit_008A(c, 288u, depth + 1u); else { c.pc = 0x0032B2B0u; return; } if (c.pc != 0x00320344u) [[unlikely]] return; }
L_00320344:
    set32(c.r[4], c.r[16].w[0] + 448u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320354u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008A(c, 257u, depth + 1u); else { c.pc = 0x0032AE80u; return; } if (c.pc != 0x00320354u) [[unlikely]] return; }
L_00320354:
    set32(c.r[4], c.r[16].w[0] + 640u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320360u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_0023(c, 195u, depth + 1u); else { c.pc = 0x0018DEA0u; return; } if (c.pc != 0x00320360u) [[unlikely]] return; }
L_00320360:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42410000u);
    set32(c.r[3], 0u + 122u);
    c.r[4].d[0] = c.r[2].d[0] | 19781ull;
    st32((c.r[16].w[0] + 48u), c.r[4].w[0]);
    set32(c.r[2], 0u + 123u);
    st32((c.r[16].w[0] + 180u), 0u);
    set32(c.r[4], 0u + 16u);
    st16((c.r[16].w[0] + 188u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320388u); st16((c.r[16].w[0] + 190u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x00320388u) [[unlikely]] return; }
L_00320388:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003203A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00320434; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 20096u);
    set32(c.r[2], c.r[2].w[0] + 20184u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 640u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003203E0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0023(c, 199u, depth + 1u); else { c.pc = 0x0018DF40u; return; } if (c.pc != 0x003203E0u) [[unlikely]] return; }
L_003203E0:
    set32(c.r[4], c.r[17].w[0] + 448u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003203ECu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 261u, depth + 1u); else { c.pc = 0x0032AF10u; return; } if (c.pc != 0x003203ECu) [[unlikely]] return; }
L_003203EC:
    set32(c.r[4], c.r[17].w[0] + 364u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003203F8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 292u, depth + 1u); else { c.pc = 0x0032B360u; return; } if (c.pc != 0x003203F8u) [[unlikely]] return; }
L_003203F8:
    set32(c.r[4], c.r[17].w[0] + 320u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320404u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 53u, depth + 1u); else { c.pc = 0x003287A0u; return; } if (c.pc != 0x00320404u) [[unlikely]] return; }
L_00320404:
    set32(c.r[4], c.r[17].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320410u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0023(c, 199u, depth + 1u); else { c.pc = 0x0018DF40u; return; } if (c.pc != 0x00320410u) [[unlikely]] return; }
L_00320410:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032041Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 359u, depth + 1u); else { c.pc = 0x0031F410u; return; } if (c.pc != 0x0032041Cu) [[unlikely]] return; }
L_0032041C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00320438; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320434u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00320434u) [[unlikely]] return; }
L_00320434:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00320438:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00320450:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320464u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 369u, depth + 1u); else { c.pc = 0x0031F540u; return; } if (c.pc != 0x00320464u) [[unlikely]] return; }
L_00320464:
    set32(c.r[4], c.r[16].w[0] + 320u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320470u); set32(c.r[5], 0u + 255u);  if (depth < kMaxDepth) unit_008A(c, 60u, depth + 1u); else { c.pc = 0x00328870u; return; } if (c.pc != 0x00320470u) [[unlikely]] return; }
L_00320470:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00320480:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320494u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 256u, depth + 1u); else { c.pc = 0x00189B70u; return; } if (c.pc != 0x00320494u) [[unlikely]] return; }
L_00320494:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032049Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 370u, depth + 1u); else { c.pc = 0x0031F550u; return; } if (c.pc != 0x0032049Cu) [[unlikely]] return; }
L_0032049C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003204B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003204D4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0022(c, 256u, depth + 1u); else { c.pc = 0x00189B70u; return; } if (c.pc != 0x003204D4u) [[unlikely]] return; }
L_003204D4:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003204E8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003204E8u) [[unlikely]] return; }
L_003204E8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_003204F8; } }
    set32(c.r[19], 0u + 2u);
    c.budget -= 1;
L_003204F8:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00320508u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00320508u) [[unlikely]] return; }
L_00320508:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_00320518; } }
    set32(c.r[19], 0u + 1u);
    c.budget -= 1;
L_00320518:
    set32(c.r[16], ld32((c.r[1].w[0] + 26160u)));
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00320544; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032053Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032053Cu) [[unlikely]] return; }
L_0032053C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0032063C; } }
L_00320544:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00320554u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00320554u) [[unlikely]] return; }
L_00320554:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00320598; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 4u);  if (t) { goto L_0032059C; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00320584u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00320584u) [[unlikely]] return; }
L_00320584:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320590u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0087(c, 405u, depth + 1u); else { c.pc = 0x0031F950u; return; } if (c.pc != 0x00320590u) [[unlikely]] return; }
L_00320590:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00320638; } }
L_00320598:
    set32(c.r[5], 0u + 4u);
    c.budget -= 1;
L_0032059C:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003205A8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 198u, depth + 1u); else { c.pc = 0x001892F0u; return; } if (c.pc != 0x003205A8u) [[unlikely]] return; }
L_003205A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003205B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 134u, depth + 1u); else { c.pc = 0x0018D580u; return; } if (c.pc != 0x003205B0u) [[unlikely]] return; }
L_003205B0:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003205C0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003205C0u) [[unlikely]] return; }
L_003205C0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003205E8; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003205DCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003205DCu) [[unlikely]] return; }
L_003205DC:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_003205F0; } }
L_003205E8:
    set32(c.r[2], ld32((c.r[18].w[0] + 176u)));
    st8((c.r[2].w[0] + 72u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_003205F0:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00320600u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00320600u) [[unlikely]] return; }
L_00320600:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00320630; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 1680u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);  if (t) { goto L_0032062C; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[1].w[0] - 1680u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st8((c.r[1].w[0] - 1688u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0032062C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00320630:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320638u);  if (depth < kMaxDepth) unit_0087(c, 375u, depth + 1u); else { c.pc = 0x0031F5E0u; return; } if (c.pc != 0x00320638u) [[unlikely]] return; }
L_00320638:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0032063C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00320660:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00320684; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320684u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00320684u) [[unlikely]] return; }
L_00320684:
    st32((c.r[16].w[0] + 28u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003206AC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003206AC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003206ACu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003206ACu) [[unlikely]] return; }
L_003206AC:
    st32((c.r[16].w[0] + 24u), 0u);
    set32(c.r[2], 0u + 4u);
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003206C0u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x003206C0u) [[unlikely]] return; }
L_003206C0:
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003206D0u); set32(c.r[5], 0u + 32u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x003206D0u) [[unlikely]] return; }
L_003206D0:
    set32(c.r[4], c.r[16].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003206DCu); set32(c.r[5], c.r[16].w[0] + 28u);  if (depth < kMaxDepth) unit_0088(c, 81u, depth + 1u); else { c.pc = 0x003207A0u; return; } if (c.pc != 0x003206DCu) [[unlikely]] return; }
L_003206DC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[16].w[0] + 208u);
    set32(c.r[5], c.r[5].w[0] - 6216u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003206F4u); set32(c.r[6], c.r[6].w[0] - 6208u);  if (depth < kMaxDepth) unit_008A(c, 12u, depth + 1u); else { c.pc = 0x00328180u; return; } if (c.pc != 0x003206F4u) [[unlikely]] return; }
L_003206F4:
    set32(c.r[4], c.r[16].w[0] + 640u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320700u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0023(c, 205u, depth + 1u); else { c.pc = 0x0018DFE0u; return; } if (c.pc != 0x00320700u) [[unlikely]] return; }
L_00320700:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 440u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320714u); set32(c.r[4], c.r[16].w[0] + 640u);  if (depth < kMaxDepth) unit_0023(c, 203u, depth + 1u); else { c.pc = 0x0018DFC0u; return; } if (c.pc != 0x00320714u) [[unlikely]] return; }
L_00320714:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[7], c.r[29].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] - 6192u);
    set32(c.r[6], c.r[29].w[0] + 32u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[16].w[0] + 640u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st128((c.r[7].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], c.r[2].w[0] - 6176u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320748u); st128((c.r[6].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0023(c, 211u, depth + 1u); else { c.pc = 0x0018E0B0u; return; } if (c.pc != 0x00320748u) [[unlikely]] return; }
L_00320748:
    set32(c.r[4], c.r[16].w[0] + 640u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320758u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0023(c, 212u, depth + 1u); else { c.pc = 0x0018E0F0u; return; } if (c.pc != 0x00320758u) [[unlikely]] return; }
L_00320758:
    set32(c.r[4], c.r[16].w[0] + 640u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320768u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0023(c, 214u, depth + 1u); else { c.pc = 0x0018E160u; return; } if (c.pc != 0x00320768u) [[unlikely]] return; }
L_00320768:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320770u); set32(c.r[4], 0u + 175u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00320770u) [[unlikely]] return; }
L_00320770:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 640u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320780u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0023(c, 210u, depth + 1u); else { c.pc = 0x0018E080u; return; } if (c.pc != 0x00320780u) [[unlikely]] return; }
L_00320780:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320788u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 21u, depth + 1u); else { c.pc = 0x001301E0u; return; } if (c.pc != 0x00320788u) [[unlikely]] return; }
L_00320788:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003207A0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 6160u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[3], c.r[29].w[0] + 96u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], 0u + 4u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003207D8u); st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0023(c, 205u, depth + 1u); else { c.pc = 0x0018DFE0u; return; } if (c.pc != 0x003207D8u) [[unlikely]] return; }
L_003207D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 440u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003207ECu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 203u, depth + 1u); else { c.pc = 0x0018DFC0u; return; } if (c.pc != 0x003207ECu) [[unlikely]] return; }
L_003207EC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 444u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320800u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 204u, depth + 1u); else { c.pc = 0x0018DFD0u; return; } if (c.pc != 0x00320800u) [[unlikely]] return; }
L_00320800:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[2], c.r[2].w[0] - 6144u);
    set32(c.r[3], c.r[29].w[0] + 64u);
    ld128((c.r[2].w[0]) & ~15u, c.r[4]);
    c.r[16].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st128((c.r[5].w[0]) & ~15u, c.r[4]);
    set32(c.r[2], c.r[2].w[0] - 6128u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.budget -= 11;
L_0032082C:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032083Cu); set32(c.r[4], ld32((c.r[2].w[0] + 96u)));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x0032083Cu) [[unlikely]] return; }
L_0032083C:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032084Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 210u, depth + 1u); else { c.pc = 0x0018E080u; return; } if (c.pc != 0x0032084Cu) [[unlikely]] return; }
L_0032084C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032085Cu); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0023(c, 211u, depth + 1u); else { c.pc = 0x0018E0B0u; return; } if (c.pc != 0x0032085Cu) [[unlikely]] return; }
L_0032085C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032086Cu); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0023(c, 212u, depth + 1u); else { c.pc = 0x0018E0F0u; return; } if (c.pc != 0x0032086Cu) [[unlikely]] return; }
L_0032086C:
    c.f[1] = ld32((c.r[29].w[0] + 84u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 84u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032082Cu | kUnwind; return; } goto L_0032082C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320894u);  if (depth < kMaxDepth) unit_0022(c, 126u, depth + 1u); else { c.pc = 0x00188A80u; return; } if (c.pc != 0x00320894u) [[unlikely]] return; }
L_00320894:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032089Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 127u, depth + 1u); else { c.pc = 0x00188AB0u; return; } if (c.pc != 0x0032089Cu) [[unlikely]] return; }
L_0032089C:
    set32(c.r[3], c.r[16].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = c.r[3].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003208C0; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003208B8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0023(c, 213u, depth + 1u); else { c.pc = 0x0018E130u; return; } if (c.pc != 0x003208B8u) [[unlikely]] return; }
L_003208B8:
    set32(c.r[3], ld32((c.r[17].w[0])));
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_003208C0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[1].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_003208E4; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003208D8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0023(c, 213u, depth + 1u); else { c.pc = 0x0018E130u; return; } if (c.pc != 0x003208D8u) [[unlikely]] return; }
L_003208D8:
    set32(c.r[3], ld32((c.r[17].w[0])));
    st8((c.r[3].w[0] + 16u), static_cast<std::uint8_t>(0u));
    c.r[1].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
L_003208E4:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00320900; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003208F8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0023(c, 213u, depth + 1u); else { c.pc = 0x0018E130u; return; } if (c.pc != 0x003208F8u) [[unlikely]] return; }
L_003208F8:
    set32(c.r[3], ld32((c.r[17].w[0])));
    st8((c.r[3].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00320900:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00320920:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 1680u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 5u);  if (t) { goto L_00320948; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320940u);  if (depth < kMaxDepth) unit_0087(c, 405u, depth + 1u); else { c.pc = 0x0031F950u; return; } if (c.pc != 0x00320940u) [[unlikely]] return; }
L_00320940:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00320954; } }
L_00320948:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320950u);  if (depth < kMaxDepth) unit_0087(c, 380u, depth + 1u); else { c.pc = 0x0031F6A0u; return; } if (c.pc != 0x00320950u) [[unlikely]] return; }
L_00320950:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00320954:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00320960:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032097Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 407u, depth + 1u); else { c.pc = 0x0031F9A0u; return; } if (c.pc != 0x0032097Cu) [[unlikely]] return; }
L_0032097C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003209A8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320994u); set32(c.r[4], ld32((c.r[1].w[0] + 26160u)));  if (depth < kMaxDepth) unit_0023(c, 104u, depth + 1u); else { c.pc = 0x0018D0B0u; return; } if (c.pc != 0x00320994u) [[unlikely]] return; }
L_00320994:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032099Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 380u, depth + 1u); else { c.pc = 0x0031F6A0u; return; } if (c.pc != 0x0032099Cu) [[unlikely]] return; }
L_0032099C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] - 1680u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003209B0; } }
L_003209A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003209B0u);  if (depth < kMaxDepth) unit_000C(c, 24u, depth + 1u); else { c.pc = 0x00130260u; return; } if (c.pc != 0x003209B0u) [[unlikely]] return; }
L_003209B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003209D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003209E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 356u, depth + 1u); else { c.pc = 0x0031F380u; return; } if (c.pc != 0x003209E4u) [[unlikely]] return; }
L_003209E4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 19920u);
    set32(c.r[2], c.r[2].w[0] + 20008u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 208u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320A08u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_0023(c, 195u, depth + 1u); else { c.pc = 0x0018DEA0u; return; } if (c.pc != 0x00320A08u) [[unlikely]] return; }
L_00320A08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320A10u);  if (depth < kMaxDepth) unit_0022(c, 118u, depth + 1u); else { c.pc = 0x001889B0u; return; } if (c.pc != 0x00320A10u) [[unlikely]] return; }
L_00320A10:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 320u);
    set32(c.r[5], c.r[5].w[0] - 6112u);
    set32(c.r[6], c.r[6].w[0] - 6104u);
    set32(c.r[7], c.r[29].w[0] + 44u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320A38u); set32(c.r[8], c.r[8].w[0] - 6096u);  if (depth < kMaxDepth) unit_008A(c, 48u, depth + 1u); else { c.pc = 0x003286E0u; return; } if (c.pc != 0x00320A38u) [[unlikely]] return; }
L_00320A38:
    set32(c.r[4], c.r[16].w[0] + 364u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], 0u + 74u);
    set32(c.r[7], 0u + 40u);
    set32(c.r[8], 0u + 400u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320A54u); set32(c.r[9], 0u + 100u);  if (depth < kMaxDepth) unit_008A(c, 288u, depth + 1u); else { c.pc = 0x0032B2B0u; return; } if (c.pc != 0x00320A54u) [[unlikely]] return; }
L_00320A54:
    set32(c.r[4], c.r[16].w[0] + 448u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320A64u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008A(c, 257u, depth + 1u); else { c.pc = 0x0032AE80u; return; } if (c.pc != 0x00320A64u) [[unlikely]] return; }
L_00320A64:
    set32(c.r[4], c.r[16].w[0] + 640u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320A70u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_0023(c, 195u, depth + 1u); else { c.pc = 0x0018DEA0u; return; } if (c.pc != 0x00320A70u) [[unlikely]] return; }
L_00320A70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53540000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].d[0] = c.r[2].d[0] | 22860ull;
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 180u), 0u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 548u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320A94u); set32(c.r[4], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_0023(c, 203u, depth + 1u); else { c.pc = 0x0018DFC0u; return; } if (c.pc != 0x00320A94u) [[unlikely]] return; }
L_00320A94:
    set32(c.r[3], 0u + 129u);
    set32(c.r[2], 0u + 130u);
    st16((c.r[16].w[0] + 188u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], 0u + 14u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320AACu); st16((c.r[16].w[0] + 190u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x00320AACu) [[unlikely]] return; }
L_00320AAC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00320AC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00320B54; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 19920u);
    set32(c.r[2], c.r[2].w[0] + 20008u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 640u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320B00u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0023(c, 199u, depth + 1u); else { c.pc = 0x0018DF40u; return; } if (c.pc != 0x00320B00u) [[unlikely]] return; }
L_00320B00:
    set32(c.r[4], c.r[17].w[0] + 448u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320B0Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 261u, depth + 1u); else { c.pc = 0x0032AF10u; return; } if (c.pc != 0x00320B0Cu) [[unlikely]] return; }
L_00320B0C:
    set32(c.r[4], c.r[17].w[0] + 364u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320B18u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 292u, depth + 1u); else { c.pc = 0x0032B360u; return; } if (c.pc != 0x00320B18u) [[unlikely]] return; }
L_00320B18:
    set32(c.r[4], c.r[17].w[0] + 320u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320B24u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 53u, depth + 1u); else { c.pc = 0x003287A0u; return; } if (c.pc != 0x00320B24u) [[unlikely]] return; }
L_00320B24:
    set32(c.r[4], c.r[17].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320B30u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0023(c, 199u, depth + 1u); else { c.pc = 0x0018DF40u; return; } if (c.pc != 0x00320B30u) [[unlikely]] return; }
L_00320B30:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320B3Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 359u, depth + 1u); else { c.pc = 0x0031F410u; return; } if (c.pc != 0x00320B3Cu) [[unlikely]] return; }
L_00320B3C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00320B58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320B54u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00320B54u) [[unlikely]] return; }
L_00320B54:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00320B58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00320B70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320B84u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 369u, depth + 1u); else { c.pc = 0x0031F540u; return; } if (c.pc != 0x00320B84u) [[unlikely]] return; }
L_00320B84:
    set32(c.r[4], c.r[16].w[0] + 320u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320B90u); set32(c.r[5], 0u + 255u);  if (depth < kMaxDepth) unit_008A(c, 60u, depth + 1u); else { c.pc = 0x00328870u; return; } if (c.pc != 0x00320B90u) [[unlikely]] return; }
L_00320B90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00320BA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320BBCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 256u, depth + 1u); else { c.pc = 0x00189B70u; return; } if (c.pc != 0x00320BBCu) [[unlikely]] return; }
L_00320BBC:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00320BD0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00320BD0u) [[unlikely]] return; }
L_00320BD0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320BE0u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 375u, depth + 1u); else { c.pc = 0x0031F5E0u; return; } if (c.pc != 0x00320BE0u) [[unlikely]] return; }
L_00320BE0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[16].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00320BF8; } }
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320BF8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 198u, depth + 1u); else { c.pc = 0x001892F0u; return; } if (c.pc != 0x00320BF8u) [[unlikely]] return; }
L_00320BF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00320C10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320C24u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 256u, depth + 1u); else { c.pc = 0x00189B70u; return; } if (c.pc != 0x00320C24u) [[unlikely]] return; }
L_00320C24:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00320C4C; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320C48u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 198u, depth + 1u); else { c.pc = 0x001892F0u; return; } if (c.pc != 0x00320C48u) [[unlikely]] return; }
L_00320C48:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00320C4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320C54u);  if (depth < kMaxDepth) unit_0087(c, 380u, depth + 1u); else { c.pc = 0x0031F6A0u; return; } if (c.pc != 0x00320C54u) [[unlikely]] return; }
L_00320C54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00320C70:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00320C9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320C9Cu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00320C9Cu) [[unlikely]] return; }
L_00320C9C:
    st32((c.r[18].w[0] + 28u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00320CC4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00320CC4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00320CC4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00320CC4u) [[unlikely]] return; }
L_00320CC4:
    st32((c.r[18].w[0] + 24u), 0u);
    set32(c.r[2], 0u + 10u);
    st32((c.r[18].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320CD8u); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x00320CD8u) [[unlikely]] return; }
L_00320CD8:
    st32((c.r[18].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320CE8u); set32(c.r[5], 0u + 80u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x00320CE8u) [[unlikely]] return; }
L_00320CE8:
    set32(c.r[4], c.r[18].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320CF4u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_0023(c, 205u, depth + 1u); else { c.pc = 0x0018DFE0u; return; } if (c.pc != 0x00320CF4u) [[unlikely]] return; }
L_00320CF4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 440u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320D08u); set32(c.r[4], c.r[18].w[0] + 64u);  if (depth < kMaxDepth) unit_0023(c, 203u, depth + 1u); else { c.pc = 0x0018DFC0u; return; } if (c.pc != 0x00320D08u) [[unlikely]] return; }
L_00320D08:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 444u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320D1Cu); set32(c.r[4], c.r[18].w[0] + 64u);  if (depth < kMaxDepth) unit_0023(c, 204u, depth + 1u); else { c.pc = 0x0018DFD0u; return; } if (c.pc != 0x00320D1Cu) [[unlikely]] return; }
L_00320D1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320D24u);  if (depth < kMaxDepth) unit_0022(c, 256u, depth + 1u); else { c.pc = 0x00189B70u; return; } if (c.pc != 0x00320D24u) [[unlikely]] return; }
L_00320D24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320D2Cu);  if (depth < kMaxDepth) unit_00A1(c, 289u, depth + 1u); else { c.pc = 0x00386C00u; return; } if (c.pc != 0x00320D2Cu) [[unlikely]] return; }
L_00320D2C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[29].w[0] + 64u);
    set32(c.r[2], c.r[2].w[0] - 6080u);
    c.r[16].d[0] = 0ull + 0ull;
    ld128((c.r[2].w[0]) & ~15u, c.r[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st128((c.r[5].w[0]) & ~15u, c.r[4]);
    set32(c.r[2], c.r[2].w[0] - 6064u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.budget -= 12;
L_00320D5C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320D68u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 42u, depth + 1u); else { c.pc = 0x00190580u; return; } if (c.pc != 0x00320D68u) [[unlikely]] return; }
L_00320D68:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320D78u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 210u, depth + 1u); else { c.pc = 0x0018E080u; return; } if (c.pc != 0x00320D78u) [[unlikely]] return; }
L_00320D78:
    set32(c.r[4], c.r[18].w[0] + 64u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320D88u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0023(c, 211u, depth + 1u); else { c.pc = 0x0018E0B0u; return; } if (c.pc != 0x00320D88u) [[unlikely]] return; }
L_00320D88:
    set32(c.r[4], c.r[18].w[0] + 64u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320D98u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0023(c, 212u, depth + 1u); else { c.pc = 0x0018E0F0u; return; } if (c.pc != 0x00320D98u) [[unlikely]] return; }
L_00320D98:
    c.f[1] = ld32((c.r[29].w[0] + 84u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B80000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 10ll ? 1ull : 0ull;
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 84u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00320D5Cu | kUnwind; return; } goto L_00320D5C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[18].w[0] + 208u);
    set32(c.r[5], c.r[5].w[0] - 6048u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320DD0u); set32(c.r[6], c.r[6].w[0] - 6040u);  if (depth < kMaxDepth) unit_008A(c, 12u, depth + 1u); else { c.pc = 0x00328180u; return; } if (c.pc != 0x00320DD0u) [[unlikely]] return; }
L_00320DD0:
    set32(c.r[4], c.r[18].w[0] + 640u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320DDCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0023(c, 205u, depth + 1u); else { c.pc = 0x0018DFE0u; return; } if (c.pc != 0x00320DDCu) [[unlikely]] return; }
L_00320DDC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 440u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320DF0u); set32(c.r[4], c.r[18].w[0] + 640u);  if (depth < kMaxDepth) unit_0023(c, 203u, depth + 1u); else { c.pc = 0x0018DFC0u; return; } if (c.pc != 0x00320DF0u) [[unlikely]] return; }
L_00320DF0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42780000u);
    c.f[0] = ld32((c.r[1].w[0] - 13216u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42BC0000u);
    st32((c.r[29].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[4], c.r[18].w[0] + 640u);
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x48000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 88u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[6], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320E38u); st32((c.r[29].w[0] + 68u), c.f[0]);  if (depth < kMaxDepth) unit_0023(c, 211u, depth + 1u); else { c.pc = 0x0018E0B0u; return; } if (c.pc != 0x00320E38u) [[unlikely]] return; }
L_00320E38:
    set32(c.r[4], c.r[18].w[0] + 640u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320E48u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0023(c, 212u, depth + 1u); else { c.pc = 0x0018E0F0u; return; } if (c.pc != 0x00320E48u) [[unlikely]] return; }
L_00320E48:
    set32(c.r[4], c.r[18].w[0] + 640u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320E58u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0023(c, 214u, depth + 1u); else { c.pc = 0x0018E160u; return; } if (c.pc != 0x00320E58u) [[unlikely]] return; }
L_00320E58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320E60u); set32(c.r[4], 0u + 175u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00320E60u) [[unlikely]] return; }
L_00320E60:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 640u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320E70u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0023(c, 210u, depth + 1u); else { c.pc = 0x0018E080u; return; } if (c.pc != 0x00320E70u) [[unlikely]] return; }
L_00320E70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320E78u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 21u, depth + 1u); else { c.pc = 0x001301E0u; return; } if (c.pc != 0x00320E78u) [[unlikely]] return; }
L_00320E78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00320E90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320EA4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 356u, depth + 1u); else { c.pc = 0x0031F380u; return; } if (c.pc != 0x00320EA4u) [[unlikely]] return; }
L_00320EA4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 19696u);
    set32(c.r[2], c.r[2].w[0] + 19784u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 208u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320EC8u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_0023(c, 195u, depth + 1u); else { c.pc = 0x0018DEA0u; return; } if (c.pc != 0x00320EC8u) [[unlikely]] return; }
L_00320EC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320ED0u);  if (depth < kMaxDepth) unit_0022(c, 118u, depth + 1u); else { c.pc = 0x001889B0u; return; } if (c.pc != 0x00320ED0u) [[unlikely]] return; }
L_00320ED0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 320u);
    set32(c.r[5], c.r[5].w[0] - 6032u);
    set32(c.r[6], c.r[6].w[0] - 6024u);
    set32(c.r[7], c.r[29].w[0] + 60u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320EF8u); set32(c.r[8], c.r[8].w[0] - 6016u);  if (depth < kMaxDepth) unit_008A(c, 48u, depth + 1u); else { c.pc = 0x003286E0u; return; } if (c.pc != 0x00320EF8u) [[unlikely]] return; }
L_00320EF8:
    set32(c.r[4], c.r[16].w[0] + 364u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], 0u + 74u);
    set32(c.r[7], 0u + 40u);
    set32(c.r[8], 0u + 400u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320F14u); set32(c.r[9], 0u + 100u);  if (depth < kMaxDepth) unit_008A(c, 288u, depth + 1u); else { c.pc = 0x0032B2B0u; return; } if (c.pc != 0x00320F14u) [[unlikely]] return; }
L_00320F14:
    set32(c.r[4], c.r[16].w[0] + 448u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320F24u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008A(c, 257u, depth + 1u); else { c.pc = 0x0032AE80u; return; } if (c.pc != 0x00320F24u) [[unlikely]] return; }
L_00320F24:
    set32(c.r[4], c.r[16].w[0] + 640u);
    set32(c.r[5], 0u + 5u);
    set32(c.r[6], 0u + 140u);
    set32(c.r[7], 0u + 150u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320F40u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008A(c, 320u, depth + 1u); else { c.pc = 0x0032B8B0u; return; } if (c.pc != 0x00320F40u) [[unlikely]] return; }
L_00320F40:
    set32(c.r[4], c.r[16].w[0] + 816u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320F4Cu); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_0023(c, 195u, depth + 1u); else { c.pc = 0x0018DEA0u; return; } if (c.pc != 0x00320F4Cu) [[unlikely]] return; }
L_00320F4C:
    set32(c.r[4], c.r[16].w[0] + 928u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320F58u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_008A(c, 358u, depth + 1u); else { c.pc = 0x0032BE30u; return; } if (c.pc != 0x00320F58u) [[unlikely]] return; }
L_00320F58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] - 6320u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[16].w[0] + 1248u);
    st64((c.r[29].w[0]), c.r[2].d[0]);
    set32(c.r[5], c.r[5].w[0] - 6008u);
    set32(c.r[6], c.r[6].w[0] - 6000u);
    set32(c.r[7], c.r[7].w[0] - 5992u);
    set32(c.r[8], c.r[8].w[0] - 5984u);
    set32(c.r[9], c.r[9].w[0] - 5976u);
    set32(c.r[10], 0u + 3u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320FA0u); set32(c.r[11], c.r[11].w[0] - 6328u);  if (depth < kMaxDepth) unit_008A(c, 298u, depth + 1u); else { c.pc = 0x0032B400u; return; } if (c.pc != 0x00320FA0u) [[unlikely]] return; }
L_00320FA0:
    set32(c.r[4], c.r[16].w[0] + 1344u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320FACu); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_008B(c, 229u, depth + 1u); else { c.pc = 0x0032E720u; return; } if (c.pc != 0x00320FACu) [[unlikely]] return; }
L_00320FAC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42410000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].d[0] = c.r[2].d[0] | 19791ull;
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 180u), 0u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 548u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320FD0u); set32(c.r[4], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_0023(c, 203u, depth + 1u); else { c.pc = 0x0018DFC0u; return; } if (c.pc != 0x00320FD0u) [[unlikely]] return; }
L_00320FD0:
    set32(c.r[3], 0u + 129u);
    set32(c.r[2], 0u + 130u);
    st16((c.r[16].w[0] + 188u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320FE4u); st16((c.r[16].w[0] + 190u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0022(c, 128u, depth + 1u); else { c.pc = 0x00188AE0u; return; } if (c.pc != 0x00320FE4u) [[unlikely]] return; }
L_00320FE4:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 14u);  if (t) { goto L_00320FF8; } }
    st8((c.r[16].w[0] + 1352u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 456u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00320FF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321000u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x00321000u) [[unlikely]] return; }
L_00321000:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00321020:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003210A0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 21728u);
    set32(c.r[2], c.r[2].w[0] + 21756u);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 28u), c.r[2].w[0]);  if (t) { goto L_00321088; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 19872u);
    set32(c.r[2], c.r[2].w[0] + 19900u);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 28u);
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032107Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x0032107Cu) [[unlikely]] return; }
L_0032107C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321088u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008A(c, 215u, depth + 1u); else { c.pc = 0x0032A270u; return; } if (c.pc != 0x00321088u) [[unlikely]] return; }
L_00321088:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003210A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003210A0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x003210A0u) [[unlikely]] return; }
L_003210A0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003210A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003210C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003211D0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 19696u);
    set32(c.r[2], c.r[2].w[0] + 19784u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003210F8u); st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0087(c, 346u, depth + 1u); else { c.pc = 0x0031F2D0u; return; } if (c.pc != 0x003210F8u) [[unlikely]] return; }
L_003210F8:
    set32(c.r[4], c.r[17].w[0] + 1344u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321104u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 235u, depth + 1u); else { c.pc = 0x0032E7D0u; return; } if (c.pc != 0x00321104u) [[unlikely]] return; }
L_00321104:
    set32(c.r[4], c.r[17].w[0] + 1248u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);  if (t) { goto L_00321158; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 21728u);
    set32(c.r[2], c.r[2].w[0] + 21756u);
    st32((c.r[17].w[0] + 1272u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0] + 1276u), c.r[2].w[0]);  if (t) { goto L_00321158; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 19872u);
    set32(c.r[2], c.r[2].w[0] + 19900u);
    st32((c.r[17].w[0] + 1272u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 1276u);
    st32((c.r[17].w[0] + 1276u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032114Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x0032114Cu) [[unlikely]] return; }
L_0032114C:
    set32(c.r[4], c.r[17].w[0] + 1248u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321158u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008A(c, 215u, depth + 1u); else { c.pc = 0x0032A270u; return; } if (c.pc != 0x00321158u) [[unlikely]] return; }
L_00321158:
    set32(c.r[4], c.r[17].w[0] + 928u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321164u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 362u, depth + 1u); else { c.pc = 0x0032BEB0u; return; } if (c.pc != 0x00321164u) [[unlikely]] return; }
L_00321164:
    set32(c.r[4], c.r[17].w[0] + 816u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321170u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0023(c, 199u, depth + 1u); else { c.pc = 0x0018DF40u; return; } if (c.pc != 0x00321170u) [[unlikely]] return; }
L_00321170:
    set32(c.r[4], c.r[17].w[0] + 640u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032117Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 343u, depth + 1u); else { c.pc = 0x0032BBF0u; return; } if (c.pc != 0x0032117Cu) [[unlikely]] return; }
L_0032117C:
    set32(c.r[4], c.r[17].w[0] + 448u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321188u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 261u, depth + 1u); else { c.pc = 0x0032AF10u; return; } if (c.pc != 0x00321188u) [[unlikely]] return; }
L_00321188:
    set32(c.r[4], c.r[17].w[0] + 364u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321194u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 292u, depth + 1u); else { c.pc = 0x0032B360u; return; } if (c.pc != 0x00321194u) [[unlikely]] return; }
L_00321194:
    set32(c.r[4], c.r[17].w[0] + 320u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003211A0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 53u, depth + 1u); else { c.pc = 0x003287A0u; return; } if (c.pc != 0x003211A0u) [[unlikely]] return; }
L_003211A0:
    set32(c.r[4], c.r[17].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003211ACu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0023(c, 199u, depth + 1u); else { c.pc = 0x0018DF40u; return; } if (c.pc != 0x003211ACu) [[unlikely]] return; }
L_003211AC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003211B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 359u, depth + 1u); else { c.pc = 0x0031F410u; return; } if (c.pc != 0x003211B8u) [[unlikely]] return; }
L_003211B8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003211D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003211D0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x003211D0u) [[unlikely]] return; }
L_003211D0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003211D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003211F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003212CC; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 1284u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[18].w[0] + 320u);  if (t) { goto L_003212C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032122Cu); c.r[17].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 128u, depth + 1u); else { c.pc = 0x00188AE0u; return; } if (c.pc != 0x0032122Cu) [[unlikely]] return; }
L_0032122C:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00321244; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321240u);  if (depth < kMaxDepth) unit_0022(c, 124u, depth + 1u); else { c.pc = 0x00188A50u; return; } if (c.pc != 0x00321240u) [[unlikely]] return; }
L_00321240:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00321244:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 28324u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 176u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));  if (t) { goto L_00321260; } }
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_00321260:
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[2], 0u + 9u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321288u); set32(c.r[19], ld32((c.r[2].w[0] + 1200u)));  if (depth < kMaxDepth) unit_0022(c, 128u, depth + 1u); else { c.pc = 0x00188AE0u; return; } if (c.pc != 0x00321288u) [[unlikely]] return; }
L_00321288:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[1].d[0] = c.r[19].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;  if (t) { goto L_0032129C; } }
    set32(c.r[19], c.r[19].w[0] << 1);
    c.r[1].d[0] = c.r[19].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 2;
L_0032129C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003212AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u - 2u);  if (t) { goto L_003212B0; } }
L_003212AC:
    set32(c.r[16], c.r[16].w[0] + c.r[17].w[0]);
    c.budget -= 1;
L_003212B0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003212BCu); set32(c.r[4], c.r[18].w[0] + 320u);  if (depth < kMaxDepth) unit_008A(c, 60u, depth + 1u); else { c.pc = 0x00328870u; return; } if (c.pc != 0x003212BCu) [[unlikely]] return; }
L_003212BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003212D0; } }
L_003212C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003212CCu); set32(c.r[5], 0u - 2u);  if (depth < kMaxDepth) unit_008A(c, 60u, depth + 1u); else { c.pc = 0x00328870u; return; } if (c.pc != 0x003212CCu) [[unlikely]] return; }
L_003212CC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_003212D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003212D8u);  if (depth < kMaxDepth) unit_0087(c, 369u, depth + 1u); else { c.pc = 0x0031F540u; return; } if (c.pc != 0x003212D8u) [[unlikely]] return; }
L_003212D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00321300:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032131Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 375u, depth + 1u); else { c.pc = 0x0031F5E0u; return; } if (c.pc != 0x0032131Cu) [[unlikely]] return; }
L_0032131C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321324u);  if (depth < kMaxDepth) unit_0022(c, 256u, depth + 1u); else { c.pc = 0x00189B70u; return; } if (c.pc != 0x00321324u) [[unlikely]] return; }
L_00321324:
    set32(c.r[17], ld32((c.r[2].w[0] + 4u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 4u);
    c.budget -= 5;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_0032136C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321340u);  if (depth < kMaxDepth) unit_0022(c, 120u, depth + 1u); else { c.pc = 0x001889E0u; return; } if (c.pc != 0x00321340u) [[unlikely]] return; }
L_00321340:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003213F8; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 1360u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321354u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 202u, depth + 1u); else { c.pc = 0x001893D0u; return; } if (c.pc != 0x00321354u) [[unlikely]] return; }
L_00321354:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032135Cu); st32((c.r[18].w[0] + 96u), 0u);  if (depth < kMaxDepth) unit_0087(c, 346u, depth + 1u); else { c.pc = 0x0031F2D0u; return; } if (c.pc != 0x0032135Cu) [[unlikely]] return; }
L_0032135C:
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] - 1680u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003213F8; } }
L_0032136C:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[16], ld32((c.r[1].w[0] + 26120u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032137Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 500u, depth + 1u); else { c.pc = 0x0018BFA0u; return; } if (c.pc != 0x0032137Cu) [[unlikely]] return; }
L_0032137C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321388u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 13u, depth + 1u); else { c.pc = 0x0018C240u; return; } if (c.pc != 0x00321388u) [[unlikely]] return; }
L_00321388:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321394u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 202u, depth + 1u); else { c.pc = 0x001893D0u; return; } if (c.pc != 0x00321394u) [[unlikely]] return; }
L_00321394:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; st32((c.r[18].w[0] + 96u), 0u);  if (t) { goto L_003213C8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003213ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 500u, depth + 1u); else { c.pc = 0x0018BFA0u; return; } if (c.pc != 0x003213ACu) [[unlikely]] return; }
L_003213AC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003213C0u);  if (depth < kMaxDepth) unit_0022(c, 484u, depth + 1u); else { c.pc = 0x0018BD60u; return; } if (c.pc != 0x003213C0u) [[unlikely]] return; }
L_003213C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003213F0; } }
L_003213C8:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003213F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003213DCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 500u, depth + 1u); else { c.pc = 0x0018BFA0u; return; } if (c.pc != 0x003213DCu) [[unlikely]] return; }
L_003213DC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003213F0u);  if (depth < kMaxDepth) unit_0022(c, 484u, depth + 1u); else { c.pc = 0x0018BD60u; return; } if (c.pc != 0x003213F0u) [[unlikely]] return; }
L_003213F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003213F8u);  if (depth < kMaxDepth) unit_0087(c, 346u, depth + 1u); else { c.pc = 0x0031F2D0u; return; } if (c.pc != 0x003213F8u) [[unlikely]] return; }
L_003213F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00321410:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0031F6A0u | kUnwind; return; } [[clang::musttail]] return unit_0087(c, 380u, depth); }
L_00321420:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032143Cu); set32(c.r[4], 0u + 52u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0032143Cu) [[unlikely]] return; }
L_0032143C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00321474; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00321454; } }
    set32(c.r[7], c.r[7].w[0] + 20u);
    c.budget -= 1;
L_00321454:
    set32(c.r[8], ld32((c.r[17].w[0] + 28u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[9], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321470u); set32(c.r[10], 0u + 9u);  if (depth < kMaxDepth) unit_000B(c, 395u, depth + 1u); else { c.pc = 0x0012F020u; return; } if (c.pc != 0x00321470u) [[unlikely]] return; }
L_00321470:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00321474:
    set32(c.r[25], ld32((c.r[17].w[0] + 808u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00321488u); set32(c.r[4], c.r[17].w[0] + 640u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00321488u) [[unlikely]] return; }
L_00321488:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003214A0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003214C8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0022(c, 256u, depth + 1u); else { c.pc = 0x00189B70u; return; } if (c.pc != 0x003214C8u) [[unlikely]] return; }
L_003214C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003214D0u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 289u, depth + 1u); else { c.pc = 0x00386C00u; return; } if (c.pc != 0x003214D0u) [[unlikely]] return; }
L_003214D0:
    set32(c.r[20], ld32((c.r[17].w[0] + 4u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 4u);
    c.budget -= 5;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_00321528; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[2].d[0]; set32(c.r[5], c.r[20].w[0] + 10u);  if (t) { goto L_00321518; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00321514; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_00321514; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00321514; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[19].w[0] + 28u)));  if (t) { goto L_0032153C; } }
L_00321514:
    set32(c.r[5], c.r[20].w[0] + 10u);
    c.budget -= 1;
L_00321518:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321520u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 42u, depth + 1u); else { c.pc = 0x00190580u; return; } if (c.pc != 0x00321520u) [[unlikely]] return; }
L_00321520:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00321538; } }
L_00321528:
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321534u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 42u, depth + 1u); else { c.pc = 0x00190580u; return; } if (c.pc != 0x00321534u) [[unlikely]] return; }
L_00321534:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00321538:
    set32(c.r[4], ld32((c.r[19].w[0] + 28u)));
    c.budget -= 1;
L_0032153C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0032154C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032154Cu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0032154Cu) [[unlikely]] return; }
L_0032154C:
    st32((c.r[19].w[0] + 28u), 0u);
    set32(c.r[4], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00321574; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00321574; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00321574u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00321574u) [[unlikely]] return; }
L_00321574:
    st32((c.r[19].w[0] + 24u), 0u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));  if (t) { goto L_00321598; } }
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 3));  if (t) { goto L_00321594; } }
    set32(c.r[2], c.r[17].w[0] + 7u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    c.budget -= 2;
L_00321594:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00321598:
    set32(c.r[21], c.r[17].w[0] << 3);
    st32((c.r[19].w[0] + 32u), c.r[17].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003215A8u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x003215A8u) [[unlikely]] return; }
L_003215A8:
    st32((c.r[19].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 28u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003215B8u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x003215B8u) [[unlikely]] return; }
L_003215B8:
    set32(c.r[4], c.r[19].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003215C4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 205u, depth + 1u); else { c.pc = 0x0018DFE0u; return; } if (c.pc != 0x003215C4u) [[unlikely]] return; }
L_003215C4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 440u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003215D8u); set32(c.r[4], c.r[19].w[0] + 64u);  if (depth < kMaxDepth) unit_0023(c, 203u, depth + 1u); else { c.pc = 0x0018DFC0u; return; } if (c.pc != 0x003215D8u) [[unlikely]] return; }
L_003215D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 444u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003215ECu); set32(c.r[4], c.r[19].w[0] + 64u);  if (depth < kMaxDepth) unit_0023(c, 204u, depth + 1u); else { c.pc = 0x0018DFD0u; return; } if (c.pc != 0x003215ECu) [[unlikely]] return; }
L_003215EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] - 5968u);
    set32(c.r[6], c.r[29].w[0] + 128u);
    ld128((c.r[2].w[0]) & ~15u, c.r[5]);
    set32(c.r[3], c.r[3].w[0] - 5952u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    st128((c.r[6].w[0]) & ~15u, c.r[5]);
    set32(c.r[2], 0u + 1u);
    ld128((c.r[3].w[0]) & ~15u, c.r[3]);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    c.budget -= 13;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));  if (t) { goto L_0032169C; } }
    set32(c.r[20], c.r[29].w[0] + 132u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x432A0000u);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_00321688; } }
L_00321634:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321640u); set32(c.r[5], c.r[16].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0024(c, 43u, depth + 1u); else { c.pc = 0x001905B0u; return; } if (c.pc != 0x00321640u) [[unlikely]] return; }
L_00321640:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[19].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321650u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 210u, depth + 1u); else { c.pc = 0x0018E080u; return; } if (c.pc != 0x00321650u) [[unlikely]] return; }
L_00321650:
    set32(c.r[4], c.r[19].w[0] + 64u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321660u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0023(c, 211u, depth + 1u); else { c.pc = 0x0018E0B0u; return; } if (c.pc != 0x00321660u) [[unlikely]] return; }
L_00321660:
    set32(c.r[4], c.r[19].w[0] + 64u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321670u); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0023(c, 212u, depth + 1u); else { c.pc = 0x0018E0F0u; return; } if (c.pc != 0x00321670u) [[unlikely]] return; }
L_00321670:
    c.f[1] = ld32((c.r[20].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B80000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[20].w[0]), c.f[0]);
    c.budget -= 6;
L_00321688:
    c.r[2].d[0] = c.r[21].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[21].w[0] << 3);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00321634u | kUnwind; return; } goto L_00321634; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00321720; } }
L_0032169C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_00321714; } }
L_003216A4:
    mmi::div(c, 0, c.r[20].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[20].w[0] + c.r[16].w[0]);  if (t) { goto L_003216C4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x432A0000u);
    st32((c.r[29].w[0] + 132u), c.r[2].w[0]);
    c.budget -= 2;
L_003216C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003216CCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 43u, depth + 1u); else { c.pc = 0x001905B0u; return; } if (c.pc != 0x003216CCu) [[unlikely]] return; }
L_003216CC:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[19].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003216DCu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 210u, depth + 1u); else { c.pc = 0x0018E080u; return; } if (c.pc != 0x003216DCu) [[unlikely]] return; }
L_003216DC:
    set32(c.r[4], c.r[19].w[0] + 64u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003216ECu); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0023(c, 211u, depth + 1u); else { c.pc = 0x0018E0B0u; return; } if (c.pc != 0x003216ECu) [[unlikely]] return; }
L_003216EC:
    set32(c.r[4], c.r[19].w[0] + 64u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003216FCu); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0023(c, 212u, depth + 1u); else { c.pc = 0x0018E0F0u; return; } if (c.pc != 0x003216FCu) [[unlikely]] return; }
L_003216FC:
    c.f[1] = ld32((c.r[29].w[0] + 132u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B80000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 132u), c.f[0]);
    c.budget -= 6;
L_00321714:
    c.r[2].d[0] = c.r[20].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 9u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003216A4u | kUnwind; return; } goto L_003216A4; } }
L_00321720:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st32((c.r[19].w[0] + 168u), 0u);
    set32(c.r[2], 0u + 9u);
    st32((c.r[19].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[4], c.r[19].w[0] + 208u);
    set32(c.r[5], c.r[5].w[0] - 5936u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321744u); set32(c.r[6], c.r[6].w[0] - 5928u);  if (depth < kMaxDepth) unit_008A(c, 12u, depth + 1u); else { c.pc = 0x00328180u; return; } if (c.pc != 0x00321744u) [[unlikely]] return; }
L_00321744:
    set32(c.r[4], c.r[19].w[0] + 816u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321750u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0023(c, 205u, depth + 1u); else { c.pc = 0x0018DFE0u; return; } if (c.pc != 0x00321750u) [[unlikely]] return; }
L_00321750:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 440u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321764u); set32(c.r[4], c.r[19].w[0] + 816u);  if (depth < kMaxDepth) unit_0023(c, 203u, depth + 1u); else { c.pc = 0x0018DFC0u; return; } if (c.pc != 0x00321764u) [[unlikely]] return; }
L_00321764:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42780000u);
    c.f[0] = ld32((c.r[1].w[0] - 13216u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42BC0000u);
    st32((c.r[29].w[0] + 128u), c.r[3].w[0]);
    set32(c.r[4], c.r[19].w[0] + 816u);
    st32((c.r[29].w[0] + 132u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x48000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 136u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 140u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 120u), c.r[2].w[0]);
    set32(c.r[6], c.r[29].w[0] + 112u);
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003217ACu); st32((c.r[29].w[0] + 116u), c.f[0]);  if (depth < kMaxDepth) unit_0023(c, 211u, depth + 1u); else { c.pc = 0x0018E0B0u; return; } if (c.pc != 0x003217ACu) [[unlikely]] return; }
L_003217AC:
    set32(c.r[4], c.r[19].w[0] + 816u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003217BCu); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0023(c, 212u, depth + 1u); else { c.pc = 0x0018E0F0u; return; } if (c.pc != 0x003217BCu) [[unlikely]] return; }
L_003217BC:
    set32(c.r[4], c.r[19].w[0] + 816u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003217CCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0023(c, 214u, depth + 1u); else { c.pc = 0x0018E160u; return; } if (c.pc != 0x003217CCu) [[unlikely]] return; }
L_003217CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003217D4u); set32(c.r[4], 0u + 175u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x003217D4u) [[unlikely]] return; }
L_003217D4:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[19].w[0] + 816u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003217E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0023(c, 210u, depth + 1u); else { c.pc = 0x0018E080u; return; } if (c.pc != 0x003217E4u) [[unlikely]] return; }
L_003217E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003217ECu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 21u, depth + 1u); else { c.pc = 0x001301E0u; return; } if (c.pc != 0x003217ECu) [[unlikely]] return; }
L_003217EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00321810:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321838u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0023(c, 169u, depth + 1u); else { c.pc = 0x0018DA60u; return; } if (c.pc != 0x00321838u) [[unlikely]] return; }
L_00321838:
    set32(c.r[2], ld32((c.r[21].w[0] + 24u)));
    set32(c.r[4], c.r[21].w[0] + 640u);
    set32(c.r[25], ld32((c.r[21].w[0] + 808u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 40u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00321854u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00321854u) [[unlikely]] return; }
L_00321854:
    set32(c.r[2], ld32((c.r[21].w[0] + 168u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[17], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0032187C; } }
    set32(c.r[3], c.r[16].w[0] + 1u);
    st32((c.r[21].w[0] + 168u), c.r[17].w[0]);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[21].w[0] + 172u), c.r[2].w[0]);
    c.budget -= 5;
L_0032187C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321884u);  if (depth < kMaxDepth) unit_0088(c, 274u, depth + 1u); else { c.pc = 0x00321B00u; return; } if (c.pc != 0x00321884u) [[unlikely]] return; }
L_00321884:
    set32(c.r[3], ld32((c.r[21].w[0] + 36u)));
    set32(c.r[2], 0u + 9u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[16].d[0] = c.hi.d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003218A4u);  if (depth < kMaxDepth) unit_0022(c, 124u, depth + 1u); else { c.pc = 0x00188A50u; return; } if (c.pc != 0x003218A4u) [[unlikely]] return; }
L_003218A4:
    set32(c.r[3], c.r[16].w[0] << 2);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] + c.r[21].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0] + 1200u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003218BCu); set32(c.r[16], c.r[2].w[0] + 1200u);  if (depth < kMaxDepth) unit_0022(c, 128u, depth + 1u); else { c.pc = 0x00188AE0u; return; } if (c.pc != 0x003218BCu) [[unlikely]] return; }
L_003218BC:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003218C8u); set32(c.r[18], c.r[19].w[0] + c.r[18].w[0]);  if (depth < kMaxDepth) unit_0022(c, 118u, depth + 1u); else { c.pc = 0x001889B0u; return; } if (c.pc != 0x003218C8u) [[unlikely]] return; }
L_003218C8:
    c.r[1].d[0] = c.r[2].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003218E0; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_0032192C; } }
L_003218E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003218E8u);  if (depth < kMaxDepth) unit_0022(c, 128u, depth + 1u); else { c.pc = 0x00188AE0u; return; } if (c.pc != 0x003218E8u) [[unlikely]] return; }
L_003218E8:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0032190C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003218FCu);  if (depth < kMaxDepth) unit_0022(c, 124u, depth + 1u); else { c.pc = 0x00188A50u; return; } if (c.pc != 0x003218FCu) [[unlikely]] return; }
L_003218FC:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 120u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 1248u), c.r[2].w[0]);  if (t) { goto L_00321914; } }
L_0032190C:
    set32(c.r[2], 0u + 120u);
    st32((c.r[21].w[0] + 1248u), c.r[2].w[0]);
    c.budget -= 2;
L_00321914:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << 2);
    st32((c.r[21].w[0] + 1256u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0] + 1284u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00321930; } }
L_0032192C:
    st8((c.r[21].w[0] + 1284u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00321930:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[2].d[0];  if (t) { goto L_003219A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321944u);  if (depth < kMaxDepth) unit_0022(c, 124u, depth + 1u); else { c.pc = 0x00188A50u; return; } if (c.pc != 0x00321944u) [[unlikely]] return; }
L_00321944:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032194Cu); c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 118u, depth + 1u); else { c.pc = 0x001889B0u; return; } if (c.pc != 0x0032194Cu) [[unlikely]] return; }
L_0032194C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 3;
L_00321958:
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 1200u)));
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], c.r[16].w[0] + c.r[17].w[0]);  if (t) { goto L_00321994; } }
    set32(c.r[4], c.r[21].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032197Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0023(c, 213u, depth + 1u); else { c.pc = 0x0018E130u; return; } if (c.pc != 0x0032197Cu) [[unlikely]] return; }
L_0032197C:
    set32(c.r[2], c.r[16].w[0] + c.r[17].w[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[2], ld32((c.r[21].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
L_00321994:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00321958u | kUnwind; return; } goto L_00321958; } }
L_003219A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003219ACu);  if (depth < kMaxDepth) unit_0022(c, 256u, depth + 1u); else { c.pc = 0x00189B70u; return; } if (c.pc != 0x003219ACu) [[unlikely]] return; }
L_003219AC:
    set32(c.r[5], ld32((c.r[21].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003219B8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 228u, depth + 1u); else { c.pc = 0x00189700u; return; } if (c.pc != 0x003219B8u) [[unlikely]] return; }
L_003219B8:
    c.r[2].d[0] = ld8((c.r[21].w[0] + 1360u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003219E0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26120u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x000E0000u);
    c.r[1].d[0] = c.r[1].d[0] | 6976ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003219DCu); set32(c.r[4], c.r[2].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0022(c, 460u, depth + 1u); else { c.pc = 0x0018B8F0u; return; } if (c.pc != 0x003219DCu) [[unlikely]] return; }
L_003219DC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003219E0:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_00321A10; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 26160u)));
    c.f[12] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x000E0000u);
    c.r[1].d[0] = c.r[1].d[0] | 6976ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321A08u); set32(c.r[4], c.r[3].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0022(c, 484u, depth + 1u); else { c.pc = 0x0018BD60u; return; } if (c.pc != 0x00321A08u) [[unlikely]] return; }
L_00321A08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00321A34; } }
L_00321A10:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_00321A34; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 26160u)));
    c.f[12] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x000E0000u);
    c.r[1].d[0] = c.r[1].d[0] | 6976ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321A34u); set32(c.r[4], c.r[3].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0022(c, 484u, depth + 1u); else { c.pc = 0x0018BD60u; return; } if (c.pc != 0x00321A34u) [[unlikely]] return; }
L_00321A34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321A3Cu);  if (depth < kMaxDepth) unit_0087(c, 351u, depth + 1u); else { c.pc = 0x0031F330u; return; } if (c.pc != 0x00321A3Cu) [[unlikely]] return; }
L_00321A3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00321A60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321A7Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 128u, depth + 1u); else { c.pc = 0x00188AE0u; return; } if (c.pc != 0x00321A7Cu) [[unlikely]] return; }
L_00321A7C:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00321AE4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[16].d[0]; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00321AA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321A9Cu); set32(c.r[4], c.r[17].w[0] + 1344u);  if (depth < kMaxDepth) unit_008B(c, 234u, depth + 1u); else { c.pc = 0x0032E7B0u; return; } if (c.pc != 0x00321A9Cu) [[unlikely]] return; }
L_00321A9C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00321AA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321AA8u); set32(c.r[4], c.r[17].w[0] + 20u);  if (depth < kMaxDepth) unit_000B(c, 341u, depth + 1u); else { c.pc = 0x0012E7C0u; return; } if (c.pc != 0x00321AA8u) [[unlikely]] return; }
L_00321AA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321AB0u);  if (depth < kMaxDepth) unit_0022(c, 256u, depth + 1u); else { c.pc = 0x00189B70u; return; } if (c.pc != 0x00321AB0u) [[unlikely]] return; }
L_00321AB0:
    set32(c.r[5], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321ABCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 228u, depth + 1u); else { c.pc = 0x00189700u; return; } if (c.pc != 0x00321ABCu) [[unlikely]] return; }
L_00321ABC:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 1360u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_00321ADC; } }
    set32(c.r[2], ld32((c.r[1].w[0] + 26120u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x000E0000u);
    c.r[1].d[0] = c.r[1].d[0] | 6976ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321ADCu); set32(c.r[4], c.r[2].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0022(c, 460u, depth + 1u); else { c.pc = 0x0018B8F0u; return; } if (c.pc != 0x00321ADCu) [[unlikely]] return; }
L_00321ADC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321AE4u);  if (depth < kMaxDepth) unit_0087(c, 351u, depth + 1u); else { c.pc = 0x0031F330u; return; } if (c.pc != 0x00321AE4u) [[unlikely]] return; }
L_00321AE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00321B00:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321B28u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 256u, depth + 1u); else { c.pc = 0x00189B70u; return; } if (c.pc != 0x00321B28u) [[unlikely]] return; }
L_00321B28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321B30u); c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 289u, depth + 1u); else { c.pc = 0x00386C00u; return; } if (c.pc != 0x00321B30u) [[unlikely]] return; }
L_00321B30:
    set32(c.r[17], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00321B88; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[3].d[0]; set32(c.r[5], c.r[17].w[0] + 10u);  if (t) { goto L_00321B78; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[3].d[0];  if (t) { goto L_00321B74; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[3].d[0];  if (t) { goto L_00321B74; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00321B74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 796u)));  if (t) { goto L_00321B98; } }
L_00321B74:
    set32(c.r[5], c.r[17].w[0] + 10u);
    c.budget -= 1;
L_00321B78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321B80u);  if (depth < kMaxDepth) unit_0024(c, 42u, depth + 1u); else { c.pc = 0x00190580u; return; } if (c.pc != 0x00321B80u) [[unlikely]] return; }
L_00321B80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00321B94; } }
L_00321B88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321B90u); set32(c.r[5], ld32((c.r[19].w[0] + 24u)));  if (depth < kMaxDepth) unit_0024(c, 42u, depth + 1u); else { c.pc = 0x00190580u; return; } if (c.pc != 0x00321B90u) [[unlikely]] return; }
L_00321B90:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00321B94:
    set32(c.r[5], ld32((c.r[16].w[0] + 796u)));
    c.budget -= 1;
L_00321B98:
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 24u)));
    c.r[20].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 26u)));
    set32(c.r[6], c.r[5].w[0] - 1u);
    set32(c.r[5], c.r[6].w[0] << 3);
    set32(c.r[21], c.r[5].w[0] + c.r[6].w[0]);
    c.budget -= 8;
    { const bool t = c.r[17].d[0] != c.r[3].d[0]; set32(c.r[19], c.r[4].w[0] + c.r[21].w[0]);  if (t) { goto L_00321C24; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[20].sd[0] >= 0; set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[20].w[0]) >> 3));  if (t) { goto L_00321C00; } }
    set32(c.r[3], c.r[20].w[0] + 7u);
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = c.r[18].sd[0] < 9ll ? 1ull : 0ull;  if (t) { goto L_00321C04; } }
L_00321BD4:
    set32(c.r[2], c.r[18].w[0] << 3);
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[19].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321BECu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0023(c, 69u, depth + 1u); else { c.pc = 0x0018CBD0u; return; } if (c.pc != 0x00321BECu) [[unlikely]] return; }
L_00321BEC:
    set32(c.r[6], ld32((c.r[29].w[0] + 136u)));
    set32(c.r[4], c.r[16].w[0] + 928u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321BFCu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 366u, depth + 1u); else { c.pc = 0x0032BF40u; return; } if (c.pc != 0x00321BFCu) [[unlikely]] return; }
L_00321BFC:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00321C00:
    c.r[1].d[0] = c.r[18].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 1;
L_00321C04:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = c.r[18].sd[0] < 9ll ? 1ull : 0ull;  if (t) { goto L_00321C9C; } }
    set32(c.r[3], c.r[18].w[0] + c.r[21].w[0]);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00321BD4u | kUnwind; return; } goto L_00321BD4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00321C98; } }
L_00321C24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00321C60; } }
    set32(c.r[5], c.r[18].w[0] + c.r[19].w[0]);
    c.budget -= 1;
L_00321C30:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321C40u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0023(c, 69u, depth + 1u); else { c.pc = 0x0018CBD0u; return; } if (c.pc != 0x00321C40u) [[unlikely]] return; }
L_00321C40:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[6], ld32((c.r[29].w[0] + 120u)));  if (t) { goto L_00321C50; } }
    set32(c.r[6], c.r[6].w[0] >> 1);
    c.budget -= 1;
L_00321C50:
    set32(c.r[4], c.r[16].w[0] + 928u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321C5Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 366u, depth + 1u); else { c.pc = 0x0032BF40u; return; } if (c.pc != 0x00321C5Cu) [[unlikely]] return; }
L_00321C5C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00321C60:
    c.r[1].d[0] = c.r[18].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00321C98; } }
    set32(c.r[3], c.r[18].w[0] + c.r[21].w[0]);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[18].w[0] + c.r[19].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00321C30u | kUnwind; return; } goto L_00321C30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00321C98; } }
    set32(c.r[4], c.r[16].w[0] + 928u);
    c.budget -= 1;
L_00321C88:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321C94u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 366u, depth + 1u); else { c.pc = 0x0032BF40u; return; } if (c.pc != 0x00321C94u) [[unlikely]] return; }
L_00321C94:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00321C98:
    c.r[3].d[0] = c.r[18].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 1;
L_00321C9C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 928u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00321C88u | kUnwind; return; } goto L_00321C88; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00321CD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321CE4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 356u, depth + 1u); else { c.pc = 0x0031F380u; return; } if (c.pc != 0x00321CE4u) [[unlikely]] return; }
L_00321CE4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 19520u);
    set32(c.r[2], c.r[2].w[0] + 19608u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 208u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321D08u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_0023(c, 195u, depth + 1u); else { c.pc = 0x0018DEA0u; return; } if (c.pc != 0x00321D08u) [[unlikely]] return; }
L_00321D08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321D10u);  if (depth < kMaxDepth) unit_0022(c, 118u, depth + 1u); else { c.pc = 0x001889B0u; return; } if (c.pc != 0x00321D10u) [[unlikely]] return; }
L_00321D10:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 320u);
    set32(c.r[5], c.r[5].w[0] - 5920u);
    set32(c.r[6], c.r[6].w[0] - 5912u);
    set32(c.r[7], c.r[29].w[0] + 44u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321D38u); set32(c.r[8], c.r[8].w[0] - 5904u);  if (depth < kMaxDepth) unit_008A(c, 48u, depth + 1u); else { c.pc = 0x003286E0u; return; } if (c.pc != 0x00321D38u) [[unlikely]] return; }
L_00321D38:
    set32(c.r[4], c.r[16].w[0] + 364u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], 0u + 110u);
    set32(c.r[7], 0u + 40u);
    set32(c.r[8], 0u + 400u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321D54u); set32(c.r[9], 0u + 100u);  if (depth < kMaxDepth) unit_008A(c, 288u, depth + 1u); else { c.pc = 0x0032B2B0u; return; } if (c.pc != 0x00321D54u) [[unlikely]] return; }
L_00321D54:
    set32(c.r[4], c.r[16].w[0] + 448u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321D64u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008A(c, 257u, depth + 1u); else { c.pc = 0x0032AE80u; return; } if (c.pc != 0x00321D64u) [[unlikely]] return; }
L_00321D64:
    set32(c.r[4], c.r[16].w[0] + 640u);
    set32(c.r[5], 0u + 6u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321D78u); c.r[7].sd[0] = static_cast<std::int32_t>(0x00040000u);  if (depth < kMaxDepth) unit_008A(c, 308u, depth + 1u); else { c.pc = 0x0032B6B0u; return; } if (c.pc != 0x00321D78u) [[unlikely]] return; }
L_00321D78:
    set32(c.r[4], c.r[16].w[0] + 688u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321D84u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_0023(c, 195u, depth + 1u); else { c.pc = 0x0018DEA0u; return; } if (c.pc != 0x00321D84u) [[unlikely]] return; }
L_00321D84:
    set32(c.r[4], c.r[16].w[0] + 800u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321D90u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_0023(c, 195u, depth + 1u); else { c.pc = 0x0018DEA0u; return; } if (c.pc != 0x00321D90u) [[unlikely]] return; }
L_00321D90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42410000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[2].d[0] | 19792ull;
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], 0u + 122u);
    st32((c.r[16].w[0] + 180u), 0u);
    set32(c.r[2], 0u + 123u);
    st16((c.r[16].w[0] + 188u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[16].w[0] + 208u);
    set32(c.r[5], c.r[5].w[0] - 5896u);
    st16((c.r[16].w[0] + 190u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321DCCu); set32(c.r[6], c.r[6].w[0] - 5888u);  if (depth < kMaxDepth) unit_008A(c, 12u, depth + 1u); else { c.pc = 0x00328180u; return; } if (c.pc != 0x00321DCCu) [[unlikely]] return; }
L_00321DCC:
    set32(c.r[5], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321DD8u); set32(c.r[4], c.r[16].w[0] + 640u);  if (depth < kMaxDepth) unit_008A(c, 315u, depth + 1u); else { c.pc = 0x0032B7C0u; return; } if (c.pc != 0x00321DD8u) [[unlikely]] return; }
L_00321DD8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00321DF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00321E9C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 19520u);
    set32(c.r[2], c.r[2].w[0] + 19608u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 800u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321E30u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0023(c, 199u, depth + 1u); else { c.pc = 0x0018DF40u; return; } if (c.pc != 0x00321E30u) [[unlikely]] return; }
L_00321E30:
    set32(c.r[4], c.r[17].w[0] + 688u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321E3Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0023(c, 199u, depth + 1u); else { c.pc = 0x0018DF40u; return; } if (c.pc != 0x00321E3Cu) [[unlikely]] return; }
L_00321E3C:
    set32(c.r[4], c.r[17].w[0] + 640u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321E48u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 312u, depth + 1u); else { c.pc = 0x0032B760u; return; } if (c.pc != 0x00321E48u) [[unlikely]] return; }
L_00321E48:
    set32(c.r[4], c.r[17].w[0] + 448u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321E54u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 261u, depth + 1u); else { c.pc = 0x0032AF10u; return; } if (c.pc != 0x00321E54u) [[unlikely]] return; }
L_00321E54:
    set32(c.r[4], c.r[17].w[0] + 364u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321E60u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 292u, depth + 1u); else { c.pc = 0x0032B360u; return; } if (c.pc != 0x00321E60u) [[unlikely]] return; }
L_00321E60:
    set32(c.r[4], c.r[17].w[0] + 320u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321E6Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 53u, depth + 1u); else { c.pc = 0x003287A0u; return; } if (c.pc != 0x00321E6Cu) [[unlikely]] return; }
L_00321E6C:
    set32(c.r[4], c.r[17].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321E78u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0023(c, 199u, depth + 1u); else { c.pc = 0x0018DF40u; return; } if (c.pc != 0x00321E78u) [[unlikely]] return; }
L_00321E78:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321E84u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 359u, depth + 1u); else { c.pc = 0x0031F410u; return; } if (c.pc != 0x00321E84u) [[unlikely]] return; }
L_00321E84:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00321EA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321E9Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00321E9Cu) [[unlikely]] return; }
L_00321E9C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00321EA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00321EC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321ED4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 369u, depth + 1u); else { c.pc = 0x0031F540u; return; } if (c.pc != 0x00321ED4u) [[unlikely]] return; }
L_00321ED4:
    set32(c.r[4], c.r[16].w[0] + 320u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321EE0u); set32(c.r[5], 0u + 255u);  if (depth < kMaxDepth) unit_008A(c, 60u, depth + 1u); else { c.pc = 0x00328870u; return; } if (c.pc != 0x00321EE0u) [[unlikely]] return; }
L_00321EE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00321EF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 176u)));
    st8((c.r[2].w[0] + 72u), static_cast<std::uint8_t>(0u));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00321F1Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00321F1Cu) [[unlikely]] return; }
L_00321F1C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321F28u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 375u, depth + 1u); else { c.pc = 0x0031F5E0u; return; } if (c.pc != 0x00321F28u) [[unlikely]] return; }
L_00321F28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321F30u);  if (depth < kMaxDepth) unit_0022(c, 256u, depth + 1u); else { c.pc = 0x00189B70u; return; } if (c.pc != 0x00321F30u) [[unlikely]] return; }
L_00321F30:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[1].w[0] + 26120u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321F48u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 500u, depth + 1u); else { c.pc = 0x0018BFA0u; return; } if (c.pc != 0x00321F48u) [[unlikely]] return; }
L_00321F48:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00321F78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321F60u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 13u, depth + 1u); else { c.pc = 0x0018C240u; return; } if (c.pc != 0x00321F60u) [[unlikely]] return; }
L_00321F60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321F68u);  if (depth < kMaxDepth) unit_0087(c, 346u, depth + 1u); else { c.pc = 0x0031F2D0u; return; } if (c.pc != 0x00321F68u) [[unlikely]] return; }
L_00321F68:
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] - 1680u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00321F9C; } }
L_00321F78:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00321F9C; } }
    st32((c.r[17].w[0] + 96u), c.r[5].w[0]);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 5u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321F9Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 198u, depth + 1u); else { c.pc = 0x001892F0u; return; } if (c.pc != 0x00321F9Cu) [[unlikely]] return; }
L_00321F9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00321FC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321FD4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 256u, depth + 1u); else { c.pc = 0x00189B70u; return; } if (c.pc != 0x00321FD4u) [[unlikely]] return; }
L_00321FD4:
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00321FF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321FE8u);  if (depth < kMaxDepth) unit_0022(c, 245u, depth + 1u); else { c.pc = 0x00189940u; return; } if (c.pc != 0x00321FE8u) [[unlikely]] return; }
L_00321FE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00321FFC; } }
L_00321FF0:
    set32(c.r[2], ld32((c.r[16].w[0] + 176u)));
    st8((c.r[2].w[0] + 72u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
L_00321FFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322004u);  if (depth < kMaxDepth) unit_0087(c, 380u, depth + 1u); else { c.pc = 0x0031F6A0u; return; } if (c.pc != 0x00322004u) [[unlikely]] return; }
L_00322004:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00322020:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322034u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 169u, depth + 1u); else { c.pc = 0x0018DA60u; return; } if (c.pc != 0x00322034u) [[unlikely]] return; }
L_00322034:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322044u); set32(c.r[4], c.r[16].w[0] + 640u);  if (depth < kMaxDepth) unit_008A(c, 315u, depth + 1u); else { c.pc = 0x0032B7C0u; return; } if (c.pc != 0x00322044u) [[unlikely]] return; }
L_00322044:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00322060:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
L_00322074:
    set32(c.r[2], ld32((c.r[1].w[0] + 26120u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[4].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[17], c.r[2].w[0] << 3);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322090u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x00322090u) [[unlikely]] return; }
L_00322090:
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003220A0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x003220A0u) [[unlikely]] return; }
L_003220A0:
    set32(c.r[4], c.r[16].w[0] + 688u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003220ACu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0023(c, 205u, depth + 1u); else { c.pc = 0x0018DFE0u; return; } if (c.pc != 0x003220ACu) [[unlikely]] return; }
L_003220AC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 440u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003220C0u); set32(c.r[4], c.r[16].w[0] + 688u);  if (depth < kMaxDepth) unit_0023(c, 203u, depth + 1u); else { c.pc = 0x0018DFC0u; return; } if (c.pc != 0x003220C0u) [[unlikely]] return; }
L_003220C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42780000u);
    c.f[0] = ld32((c.r[1].w[0] - 13216u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43020000u);
    st32((c.r[29].w[0] + 64u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 688u);
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x48000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 72u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[6], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322108u); st32((c.r[29].w[0] + 52u), c.f[0]);  if (depth < kMaxDepth) unit_0023(c, 211u, depth + 1u); else { c.pc = 0x0018E0B0u; return; } if (c.pc != 0x00322108u) [[unlikely]] return; }
L_00322108:
    set32(c.r[4], c.r[16].w[0] + 688u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322118u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0023(c, 212u, depth + 1u); else { c.pc = 0x0018E0F0u; return; } if (c.pc != 0x00322118u) [[unlikely]] return; }
L_00322118:
    set32(c.r[4], c.r[16].w[0] + 688u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322128u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0023(c, 214u, depth + 1u); else { c.pc = 0x0018E160u; return; } if (c.pc != 0x00322128u) [[unlikely]] return; }
L_00322128:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322130u); set32(c.r[4], 0u + 175u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00322130u) [[unlikely]] return; }
L_00322130:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 688u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322140u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0023(c, 210u, depth + 1u); else { c.pc = 0x0018E080u; return; } if (c.pc != 0x00322140u) [[unlikely]] return; }
L_00322140:
    set32(c.r[4], c.r[16].w[0] + 800u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032214Cu); set32(c.r[5], c.r[16].w[0] + 28u);  if (depth < kMaxDepth) unit_0088(c, 81u, depth + 1u); else { c.pc = 0x003207A0u; return; } if (c.pc != 0x0032214Cu) [[unlikely]] return; }
L_0032214C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322154u);  if (depth < kMaxDepth) unit_0022(c, 256u, depth + 1u); else { c.pc = 0x00189B70u; return; } if (c.pc != 0x00322154u) [[unlikely]] return; }
L_00322154:
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322164u); st32((c.r[16].w[0] + 900u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000C(c, 21u, depth + 1u); else { c.pc = 0x001301E0u; return; } if (c.pc != 0x00322164u) [[unlikely]] return; }
L_00322164:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00322180:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322194u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 356u, depth + 1u); else { c.pc = 0x0031F380u; return; } if (c.pc != 0x00322194u) [[unlikely]] return; }
L_00322194:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 19344u);
    set32(c.r[2], c.r[2].w[0] + 19432u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 208u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003221B8u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_0023(c, 195u, depth + 1u); else { c.pc = 0x0018DEA0u; return; } if (c.pc != 0x003221B8u) [[unlikely]] return; }
L_003221B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003221C0u);  if (depth < kMaxDepth) unit_0022(c, 118u, depth + 1u); else { c.pc = 0x001889B0u; return; } if (c.pc != 0x003221C0u) [[unlikely]] return; }
L_003221C0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 320u);
    set32(c.r[5], c.r[5].w[0] - 5880u);
    set32(c.r[6], c.r[6].w[0] - 5872u);
    set32(c.r[7], c.r[29].w[0] + 44u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003221E8u); set32(c.r[8], c.r[8].w[0] - 5864u);  if (depth < kMaxDepth) unit_008A(c, 48u, depth + 1u); else { c.pc = 0x003286E0u; return; } if (c.pc != 0x003221E8u) [[unlikely]] return; }
L_003221E8:
    set32(c.r[4], c.r[16].w[0] + 364u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], 0u + 110u);
    set32(c.r[7], 0u + 40u);
    set32(c.r[8], 0u + 400u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322204u); set32(c.r[9], 0u + 100u);  if (depth < kMaxDepth) unit_008A(c, 288u, depth + 1u); else { c.pc = 0x0032B2B0u; return; } if (c.pc != 0x00322204u) [[unlikely]] return; }
L_00322204:
    set32(c.r[4], c.r[16].w[0] + 448u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322214u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_008A(c, 257u, depth + 1u); else { c.pc = 0x0032AE80u; return; } if (c.pc != 0x00322214u) [[unlikely]] return; }
L_00322214:
    set32(c.r[4], c.r[16].w[0] + 640u);
    set32(c.r[5], 0u + 6u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322228u); c.r[7].sd[0] = static_cast<std::int32_t>(0x00040000u);  if (depth < kMaxDepth) unit_008A(c, 308u, depth + 1u); else { c.pc = 0x0032B6B0u; return; } if (c.pc != 0x00322228u) [[unlikely]] return; }
L_00322228:
    set32(c.r[4], c.r[16].w[0] + 688u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322234u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_0023(c, 195u, depth + 1u); else { c.pc = 0x0018DEA0u; return; } if (c.pc != 0x00322234u) [[unlikely]] return; }
L_00322234:
    set32(c.r[4], c.r[16].w[0] + 800u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322240u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_0023(c, 195u, depth + 1u); else { c.pc = 0x0018DEA0u; return; } if (c.pc != 0x00322240u) [[unlikely]] return; }
L_00322240:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42410000u);
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[2].d[0] | 19798ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 180u), 0u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 548u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322268u); set32(c.r[4], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_0023(c, 203u, depth + 1u); else { c.pc = 0x0018DFC0u; return; } if (c.pc != 0x00322268u) [[unlikely]] return; }
L_00322268:
    set32(c.r[3], 0u + 122u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], 0u + 123u);
    st16((c.r[16].w[0] + 188u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[16].w[0] + 208u);
    st16((c.r[16].w[0] + 190u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] - 5856u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322290u); set32(c.r[6], c.r[6].w[0] - 5848u);  if (depth < kMaxDepth) unit_008A(c, 12u, depth + 1u); else { c.pc = 0x00328180u; return; } if (c.pc != 0x00322290u) [[unlikely]] return; }
L_00322290:
    set32(c.r[5], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032229Cu); set32(c.r[4], c.r[16].w[0] + 640u);  if (depth < kMaxDepth) unit_008A(c, 315u, depth + 1u); else { c.pc = 0x0032B7C0u; return; } if (c.pc != 0x0032229Cu) [[unlikely]] return; }
L_0032229C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003222B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00322364; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 19344u);
    set32(c.r[2], c.r[2].w[0] + 19432u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003222E8u); st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 256u, depth + 1u); else { c.pc = 0x00189B70u; return; } if (c.pc != 0x003222E8u) [[unlikely]] return; }
L_003222E8:
    st32((c.r[2].w[0] + 96u), 0u);
    set32(c.r[4], c.r[17].w[0] + 800u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003222F8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0023(c, 199u, depth + 1u); else { c.pc = 0x0018DF40u; return; } if (c.pc != 0x003222F8u) [[unlikely]] return; }
L_003222F8:
    set32(c.r[4], c.r[17].w[0] + 688u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322304u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0023(c, 199u, depth + 1u); else { c.pc = 0x0018DF40u; return; } if (c.pc != 0x00322304u) [[unlikely]] return; }
L_00322304:
    set32(c.r[4], c.r[17].w[0] + 640u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322310u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 312u, depth + 1u); else { c.pc = 0x0032B760u; return; } if (c.pc != 0x00322310u) [[unlikely]] return; }
L_00322310:
    set32(c.r[4], c.r[17].w[0] + 448u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032231Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 261u, depth + 1u); else { c.pc = 0x0032AF10u; return; } if (c.pc != 0x0032231Cu) [[unlikely]] return; }
L_0032231C:
    set32(c.r[4], c.r[17].w[0] + 364u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322328u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 292u, depth + 1u); else { c.pc = 0x0032B360u; return; } if (c.pc != 0x00322328u) [[unlikely]] return; }
L_00322328:
    set32(c.r[4], c.r[17].w[0] + 320u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322334u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008A(c, 53u, depth + 1u); else { c.pc = 0x003287A0u; return; } if (c.pc != 0x00322334u) [[unlikely]] return; }
L_00322334:
    set32(c.r[4], c.r[17].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322340u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0023(c, 199u, depth + 1u); else { c.pc = 0x0018DF40u; return; } if (c.pc != 0x00322340u) [[unlikely]] return; }
L_00322340:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032234Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 359u, depth + 1u); else { c.pc = 0x0031F410u; return; } if (c.pc != 0x0032234Cu) [[unlikely]] return; }
L_0032234C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00322368; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322364u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00322364u) [[unlikely]] return; }
L_00322364:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00322368:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00322380:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322394u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 369u, depth + 1u); else { c.pc = 0x0031F540u; return; } if (c.pc != 0x00322394u) [[unlikely]] return; }
L_00322394:
    set32(c.r[4], c.r[16].w[0] + 320u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003223A0u); set32(c.r[5], 0u + 255u);  if (depth < kMaxDepth) unit_008A(c, 60u, depth + 1u); else { c.pc = 0x00328870u; return; } if (c.pc != 0x003223A0u) [[unlikely]] return; }
L_003223A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003223B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 176u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003223C4u); st8((c.r[2].w[0] + 72u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0087(c, 380u, depth + 1u); else { c.pc = 0x0031F6A0u; return; } if (c.pc != 0x003223C4u) [[unlikely]] return; }
L_003223C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003223CCu);  if (depth < kMaxDepth) unit_0022(c, 256u, depth + 1u); else { c.pc = 0x00189B70u; return; } if (c.pc != 0x003223CCu) [[unlikely]] return; }
L_003223CC:
    set32(c.r[4], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_003223EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003223E4u); set32(c.r[4], ld32((c.r[1].w[0] + 26160u)));  if (depth < kMaxDepth) unit_0023(c, 135u, depth + 1u); else { c.pc = 0x0018D5B0u; return; } if (c.pc != 0x003223E4u) [[unlikely]] return; }
L_003223E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003223ECu);  if (depth < kMaxDepth) unit_0087(c, 346u, depth + 1u); else { c.pc = 0x0031F2D0u; return; } if (c.pc != 0x003223ECu) [[unlikely]] return; }
L_003223EC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00322400:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 176u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322414u); st8((c.r[2].w[0] + 72u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0087(c, 375u, depth + 1u); else { c.pc = 0x0031F5E0u; return; } if (c.pc != 0x00322414u) [[unlikely]] return; }
L_00322414:
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st8((c.r[1].w[0] - 1680u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00322430:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322450u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 169u, depth + 1u); else { c.pc = 0x0018DA60u; return; } if (c.pc != 0x00322450u) [[unlikely]] return; }
L_00322450:
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_003224A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322464u);  if (depth < kMaxDepth) unit_0022(c, 256u, depth + 1u); else { c.pc = 0x00189B70u; return; } if (c.pc != 0x00322464u) [[unlikely]] return; }
L_00322464:
    set32(c.r[5], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[16], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[16].d[0]; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003224BC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26120u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322484u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 6u, depth + 1u); else { c.pc = 0x0018C090u; return; } if (c.pc != 0x00322484u) [[unlikely]] return; }
L_00322484:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322498u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 198u, depth + 1u); else { c.pc = 0x001892F0u; return; } if (c.pc != 0x00322498u) [[unlikely]] return; }
L_00322498:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003224A0u);  if (depth < kMaxDepth) unit_0087(c, 346u, depth + 1u); else { c.pc = 0x0031F2D0u; return; } if (c.pc != 0x003224A0u) [[unlikely]] return; }
L_003224A0:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003224B0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003224B0u) [[unlikely]] return; }
L_003224B0:
    set32(c.r[4], c.r[18].w[0] + 640u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003224BCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 315u, depth + 1u); else { c.pc = 0x0032B7C0u; return; } if (c.pc != 0x003224BCu) [[unlikely]] return; }
L_003224BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003224E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[1].w[0] + 26120u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[4].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[17], c.r[2].w[0] << 3);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322510u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x00322510u) [[unlikely]] return; }
L_00322510:
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322520u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x00322520u) [[unlikely]] return; }
L_00322520:
    set32(c.r[4], c.r[16].w[0] + 688u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032252Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0023(c, 205u, depth + 1u); else { c.pc = 0x0018DFE0u; return; } if (c.pc != 0x0032252Cu) [[unlikely]] return; }
L_0032252C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 440u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322540u); set32(c.r[4], c.r[16].w[0] + 688u);  if (depth < kMaxDepth) unit_0023(c, 203u, depth + 1u); else { c.pc = 0x0018DFC0u; return; } if (c.pc != 0x00322540u) [[unlikely]] return; }
L_00322540:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42780000u);
    c.f[0] = ld32((c.r[1].w[0] - 13216u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43020000u);
    st32((c.r[29].w[0] + 64u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 688u);
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x48000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 72u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[6], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322588u); st32((c.r[29].w[0] + 52u), c.f[0]);  if (depth < kMaxDepth) unit_0023(c, 211u, depth + 1u); else { c.pc = 0x0018E0B0u; return; } if (c.pc != 0x00322588u) [[unlikely]] return; }
L_00322588:
    set32(c.r[4], c.r[16].w[0] + 688u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322598u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0023(c, 212u, depth + 1u); else { c.pc = 0x0018E0F0u; return; } if (c.pc != 0x00322598u) [[unlikely]] return; }
L_00322598:
    set32(c.r[4], c.r[16].w[0] + 688u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003225A8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0023(c, 214u, depth + 1u); else { c.pc = 0x0018E160u; return; } if (c.pc != 0x003225A8u) [[unlikely]] return; }
L_003225A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003225B0u); set32(c.r[4], 0u + 175u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x003225B0u) [[unlikely]] return; }
L_003225B0:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 688u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003225C0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0023(c, 210u, depth + 1u); else { c.pc = 0x0018E080u; return; } if (c.pc != 0x003225C0u) [[unlikely]] return; }
L_003225C0:
    set32(c.r[4], c.r[16].w[0] + 800u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003225CCu); set32(c.r[5], c.r[16].w[0] + 28u);  if (depth < kMaxDepth) unit_0088(c, 81u, depth + 1u); else { c.pc = 0x003207A0u; return; } if (c.pc != 0x003225CCu) [[unlikely]] return; }
L_003225CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003225D4u);  if (depth < kMaxDepth) unit_0022(c, 256u, depth + 1u); else { c.pc = 0x00189B70u; return; } if (c.pc != 0x003225D4u) [[unlikely]] return; }
L_003225D4:
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003225E4u); st32((c.r[16].w[0] + 900u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000C(c, 21u, depth + 1u); else { c.pc = 0x001301E0u; return; } if (c.pc != 0x003225E4u) [[unlikely]] return; }
L_003225E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00322600:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[7], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322624u); c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 356u, depth + 1u); else { c.pc = 0x0031F380u; return; } if (c.pc != 0x00322624u) [[unlikely]] return; }
L_00322624:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 19168u);
    set32(c.r[2], c.r[2].w[0] + 19256u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 208u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322648u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_0023(c, 195u, depth + 1u); else { c.pc = 0x0018DEA0u; return; } if (c.pc != 0x00322648u) [[unlikely]] return; }
L_00322648:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53410000u);
    set32(c.r[3], 0u + 114u);
    c.r[4].d[0] = c.r[2].d[0] | 19792ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[16].w[0] + 48u), c.r[4].w[0]);
    set32(c.r[2], 0u + 115u);
    st32((c.r[16].w[0] + 180u), 0u);
    st16((c.r[16].w[0] + 188u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 190u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322674u); set32(c.r[4], ld32((c.r[1].w[0] + 26160u)));  if (depth < kMaxDepth) unit_0023(c, 101u, depth + 1u); else { c.pc = 0x0018D030u; return; } if (c.pc != 0x00322674u) [[unlikely]] return; }
L_00322674:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322680u); set32(c.r[4], ld32((c.r[1].w[0] + 26160u)));  if (depth < kMaxDepth) unit_0023(c, 98u, depth + 1u); else { c.pc = 0x0018CFB0u; return; } if (c.pc != 0x00322680u) [[unlikely]] return; }
L_00322680:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322688u); set32(c.r[4], 0u + 14u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x00322688u) [[unlikely]] return; }
L_00322688:
    st32((c.r[16].w[0] + 320u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003226A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00322704; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 19168u);
    set32(c.r[2], c.r[2].w[0] + 19256u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 208u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003226E0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0023(c, 199u, depth + 1u); else { c.pc = 0x0018DF40u; return; } if (c.pc != 0x003226E0u) [[unlikely]] return; }
L_003226E0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003226ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 359u, depth + 1u); else { c.pc = 0x0031F410u; return; } if (c.pc != 0x003226ECu) [[unlikely]] return; }
L_003226EC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00322708; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322704u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00322704u) [[unlikely]] return; }
L_00322704:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00322708:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00322720:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 440u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032274Cu); set32(c.r[4], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_0023(c, 203u, depth + 1u); else { c.pc = 0x0018DFC0u; return; } if (c.pc != 0x0032274Cu) [[unlikely]] return; }
L_0032274C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 444u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322760u); set32(c.r[4], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_0023(c, 204u, depth + 1u); else { c.pc = 0x0018DFD0u; return; } if (c.pc != 0x00322760u) [[unlikely]] return; }
L_00322760:
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00322774; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322774u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00322774u) [[unlikely]] return; }
L_00322774:
    st32((c.r[17].w[0] + 28u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0032279C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0032279C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032279Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032279Cu) [[unlikely]] return; }
L_0032279C:
    st32((c.r[17].w[0] + 24u), 0u);
    set32(c.r[2], 0u + 8u);
    st32((c.r[17].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003227B0u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x003227B0u) [[unlikely]] return; }
L_003227B0:
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003227C0u); set32(c.r[5], 0u + 64u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x003227C0u) [[unlikely]] return; }
L_003227C0:
    set32(c.r[4], c.r[17].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003227CCu); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0023(c, 205u, depth + 1u); else { c.pc = 0x0018DFE0u; return; } if (c.pc != 0x003227CCu) [[unlikely]] return; }
L_003227CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[2], c.r[2].w[0] - 5840u);
    set32(c.r[3], c.r[29].w[0] + 64u);
    ld128((c.r[2].w[0]) & ~15u, c.r[4]);
    c.r[16].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st128((c.r[5].w[0]) & ~15u, c.r[4]);
    set32(c.r[2], c.r[2].w[0] - 5824u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.budget -= 11;
L_003227F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322800u);  if (depth < kMaxDepth) unit_0022(c, 128u, depth + 1u); else { c.pc = 0x00188AE0u; return; } if (c.pc != 0x00322800u) [[unlikely]] return; }
L_00322800:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032280Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 23u, depth + 1u); else { c.pc = 0x003982C0u; return; } if (c.pc != 0x0032280Cu) [[unlikely]] return; }
L_0032280C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[6], c.r[16].w[0] + 1u);
    set32(c.r[4], c.r[18].w[0] + 160u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322824u); set32(c.r[5], c.r[5].w[0] - 13248u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x00322824u) [[unlikely]] return; }
L_00322824:
    set32(c.r[6], c.r[18].w[0] + 160u);
    set32(c.r[4], c.r[17].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322834u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 210u, depth + 1u); else { c.pc = 0x0018E080u; return; } if (c.pc != 0x00322834u) [[unlikely]] return; }
L_00322834:
    set32(c.r[4], c.r[17].w[0] + 64u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322844u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0023(c, 212u, depth + 1u); else { c.pc = 0x0018E0F0u; return; } if (c.pc != 0x00322844u) [[unlikely]] return; }
L_00322844:
    set32(c.r[4], c.r[17].w[0] + 64u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322854u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0023(c, 211u, depth + 1u); else { c.pc = 0x0018E0B0u; return; } if (c.pc != 0x00322854u) [[unlikely]] return; }
L_00322854:
    c.f[1] = ld32((c.r[29].w[0] + 84u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B80000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 84u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003227F8u | kUnwind; return; } goto L_003227F8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[17].w[0] + 208u);
    set32(c.r[5], c.r[5].w[0] - 5808u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032288Cu); set32(c.r[6], c.r[6].w[0] - 5800u);  if (depth < kMaxDepth) unit_008A(c, 12u, depth + 1u); else { c.pc = 0x00328180u; return; } if (c.pc != 0x0032288Cu) [[unlikely]] return; }
L_0032288C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322894u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 21u, depth + 1u); else { c.pc = 0x001301E0u; return; } if (c.pc != 0x00322894u) [[unlikely]] return; }
L_00322894:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003228B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003228CCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0023(c, 169u, depth + 1u); else { c.pc = 0x0018DA60u; return; } if (c.pc != 0x003228CCu) [[unlikely]] return; }
L_003228CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003228D4u);  if (depth < kMaxDepth) unit_00A6(c, 2u, depth + 1u); else { c.pc = 0x00398010u; return; } if (c.pc != 0x003228D4u) [[unlikely]] return; }
L_003228D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003228DCu); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 128u, depth + 1u); else { c.pc = 0x00188AE0u; return; } if (c.pc != 0x003228DCu) [[unlikely]] return; }
L_003228DC:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003228F0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003228F0u) [[unlikely]] return; }
L_003228F0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322900u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 11u, depth + 1u); else { c.pc = 0x00398160u; return; } if (c.pc != 0x00322900u) [[unlikely]] return; }
L_00322900:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00322920:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322934u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 370u, depth + 1u); else { c.pc = 0x0031F550u; return; } if (c.pc != 0x00322934u) [[unlikely]] return; }
L_00322934:
    set32(c.r[4], ld32((c.r[16].w[0] + 180u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00322948; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322948u);  if (depth < kMaxDepth) unit_0022(c, 121u, depth + 1u); else { c.pc = 0x00188A10u; return; } if (c.pc != 0x00322948u) [[unlikely]] return; }
L_00322948:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00322960:
    st32((c.r[4].w[0] + 320u), 0u);
    c.budget -= 3;
    { set32(c.r[5], 0u + 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0031F950u | kUnwind; return; } [[clang::musttail]] return unit_0087(c, 405u, depth); }
L_00322970:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322990u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 407u, depth + 1u); else { c.pc = 0x0031F9A0u; return; } if (c.pc != 0x00322990u) [[unlikely]] return; }
L_00322990:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003229E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003229A4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 375u, depth + 1u); else { c.pc = 0x0031F5E0u; return; } if (c.pc != 0x003229A4u) [[unlikely]] return; }
L_003229A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003229ACu);  if (depth < kMaxDepth) unit_00A6(c, 2u, depth + 1u); else { c.pc = 0x00398010u; return; } if (c.pc != 0x003229ACu) [[unlikely]] return; }
L_003229AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003229B4u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 128u, depth + 1u); else { c.pc = 0x00188AE0u; return; } if (c.pc != 0x003229B4u) [[unlikely]] return; }
L_003229B4:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003229C8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003229C8u) [[unlikely]] return; }
L_003229C8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003229D8u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 11u, depth + 1u); else { c.pc = 0x00398160u; return; } if (c.pc != 0x003229D8u) [[unlikely]] return; }
L_003229D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003229EC; } }
L_003229E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003229E8u);  if (depth < kMaxDepth) unit_000C(c, 24u, depth + 1u); else { c.pc = 0x00130260u; return; } if (c.pc != 0x003229E8u) [[unlikely]] return; }
L_003229E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003229EC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00322A00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 320u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322A20u); set32(c.r[4], ld32((c.r[1].w[0] + 26160u)));  if (depth < kMaxDepth) unit_0023(c, 108u, depth + 1u); else { c.pc = 0x0018D160u; return; } if (c.pc != 0x00322A20u) [[unlikely]] return; }
L_00322A20:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322A2Cu); set32(c.r[4], ld32((c.r[1].w[0] + 26160u)));  if (depth < kMaxDepth) unit_0023(c, 104u, depth + 1u); else { c.pc = 0x0018D0B0u; return; } if (c.pc != 0x00322A2Cu) [[unlikely]] return; }
L_00322A2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322A34u);  if (depth < kMaxDepth) unit_009D(c, 345u, depth + 1u); else { c.pc = 0x003776F0u; return; } if (c.pc != 0x00322A34u) [[unlikely]] return; }
L_00322A34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322A3Cu);  if (depth < kMaxDepth) unit_009D(c, 283u, depth + 1u); else { c.pc = 0x00376ED0u; return; } if (c.pc != 0x00322A3Cu) [[unlikely]] return; }
L_00322A3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322A44u);  if (depth < kMaxDepth) unit_0087(c, 346u, depth + 1u); else { c.pc = 0x0031F2D0u; return; } if (c.pc != 0x00322A44u) [[unlikely]] return; }
L_00322A44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322A4Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 375u, depth + 1u); else { c.pc = 0x0031F5E0u; return; } if (c.pc != 0x00322A4Cu) [[unlikely]] return; }
L_00322A4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00322A60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[1].w[0] - 13088u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 7449u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00322A84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00322AA4; } }
L_00322A84:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 7448u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00322AA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322A98u);  if (depth < kMaxDepth) unit_0087(c, 385u, depth + 1u); else { c.pc = 0x0031F760u; return; } if (c.pc != 0x00322A98u) [[unlikely]] return; }
L_00322A98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00322AA0; } }
L_00322AA0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00322AA4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00322AB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322AC4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0088(c, 456u, depth + 1u); else { c.pc = 0x00322B10u; return; } if (c.pc != 0x00322AC4u) [[unlikely]] return; }
L_00322AC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322ACCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 392u, depth + 1u); else { c.pc = 0x0031F810u; return; } if (c.pc != 0x00322ACCu) [[unlikely]] return; }
L_00322ACC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00322AE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322AF4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0088(c, 456u, depth + 1u); else { c.pc = 0x00322B10u; return; } if (c.pc != 0x00322AF4u) [[unlikely]] return; }
L_00322AF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322AFCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 396u, depth + 1u); else { c.pc = 0x0031F870u; return; } if (c.pc != 0x00322AFCu) [[unlikely]] return; }
L_00322AFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00322B10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 15u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 320u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0] + 320u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 320u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00322B3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322B3Cu); set32(c.r[4], 0u + 404u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x00322B3Cu) [[unlikely]] return; }
L_00322B3C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00322B50:
    set32(c.r[29], c.r[29].w[0] - 416u);
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
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[29].w[0] + 160u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322B94u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 177u, depth + 1u); else { c.pc = 0x0015E070u; return; } if (c.pc != 0x00322B94u) [[unlikely]] return; }
L_00322B94:
    set32(c.r[18], c.r[16].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.f[0] = c.r[18].w[0];
    set32(c.r[16], c.r[29].w[0] + 336u);
    set32(c.r[2], c.r[2].w[0] + 21488u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 320u);
    set32(c.r[17], c.r[29].w[0] + 208u);
    set32(c.r[22], c.r[29].w[0] + 212u);
    set32(c.r[23], c.r[29].w[0] + 216u);
    set32(c.r[30], c.r[29].w[0] + 220u);
    set32(c.r[5], 0u + 255u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    st32((c.r[2].w[0]), c.f[0]);
    set32(c.r[2], c.r[29].w[0] + 324u);
    st32((c.r[2].w[0]), c.r[6].w[0]);
    c.f[0] = c.r[20].w[0];
    st32((c.r[17].w[0]), 0u);
    c.f[1] = c.r[21].w[0];
    st32((c.r[22].w[0]), 0u);
    c.f[13] = fp::cvt_s_w(c.f[0]);
    st32((c.r[23].w[0]), 0u);
    st32((c.r[30].w[0]), c.r[5].w[0]);
    st32((c.r[29].w[0] + 176u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 180u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 184u), c.r[3].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[0] = c.r[19].w[0];
    c.f[12] = fp::cvt_s_w(c.f[1]);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 36;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00322C24u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00322C24u) [[unlikely]] return; }
L_00322C24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322C2Cu); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_008B(c, 110u, depth + 1u); else { c.pc = 0x0032CD10u; return; } if (c.pc != 0x00322C2Cu) [[unlikely]] return; }
L_00322C2C:
    set32(c.r[5], 0u + 96u);
    set32(c.r[2], 0u + 255u);
    st32((c.r[17].w[0]), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40800000u);
    st32((c.r[22].w[0]), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41800000u);
    st32((c.r[23].w[0]), c.r[5].w[0]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[30].w[0]), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 320u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[2], c.r[29].w[0] + 324u);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_00322CA0; } }
L_00322C64:
    c.f[0] = c.r[20].w[0];
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[2], c.r[21].w[0] + c.r[17].w[0]);
    c.f[13] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.f[1] = c.r[2].w[0];
    c.f[0] = c.r[19].w[0];
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00322C94u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00322C94u) [[unlikely]] return; }
L_00322C94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322C9Cu); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_008B(c, 110u, depth + 1u); else { c.pc = 0x0032CD10u; return; } if (c.pc != 0x00322C9Cu) [[unlikely]] return; }
L_00322C9C:
    set32(c.r[17], c.r[17].w[0] + 6u);
    c.budget -= 1;
L_00322CA0:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00322C64u | kUnwind; return; } goto L_00322C64; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 21488u);
    set32(c.r[2], c.r[2].w[0] - 17408u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 160u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322CCCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 264u, depth + 1u); else { c.pc = 0x0014ADA0u; return; } if (c.pc != 0x00322CCCu) [[unlikely]] return; }
L_00322CCC:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 416u);  c.pc = t; return; }
L_00322D00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00322D58; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 21488u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 176u), c.r[2].w[0]);  if (t) { goto L_00322D40; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 17408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322D40u); st32((c.r[17].w[0] + 176u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 264u, depth + 1u); else { c.pc = 0x0014ADA0u; return; } if (c.pc != 0x00322D40u) [[unlikely]] return; }
L_00322D40:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00322D5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322D58u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00322D58u) [[unlikely]] return; }
L_00322D58:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00322D5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00322D70:
    set32(c.r[29], c.r[29].w[0] - 352u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 13;
    { const bool t = c.r[20].sd[0] < 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00322E58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322DACu); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0017(c, 177u, depth + 1u); else { c.pc = 0x0015E070u; return; } if (c.pc != 0x00322DACu) [[unlikely]] return; }
L_00322DAC:
    set32(c.r[2], c.r[20].w[0] << 2);
    c.r[4].d[0] = c.r[19].d[0] & 255ull;
    set32(c.r[3], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[5], 0u + 32u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[16], c.r[29].w[0] + 272u);
    c.f[0] = c.r[17].w[0];
    set32(c.r[2], c.r[18].w[0] + 4096u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 21488u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.f[13] = fp::cvt_s_w(c.f[0]);
    st32((c.r[29].w[0] + 156u), c.r[4].w[0]);
    set32(c.r[3], 0u + 255u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 148u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 112u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41800000u);
    st32((c.r[29].w[0] + 116u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 120u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40800000u);
    st32((c.r[29].w[0] + 260u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 256u), c.r[4].w[0]);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 144u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 152u), c.r[5].w[0]);
    c.f[12] = fp::cvt_s_w(c.f[1]);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 32;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00322E2Cu); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00322E2Cu) [[unlikely]] return; }
L_00322E2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322E34u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_008B(c, 110u, depth + 1u); else { c.pc = 0x0032CD10u; return; } if (c.pc != 0x00322E34u) [[unlikely]] return; }
L_00322E34:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 21488u);
    set32(c.r[2], c.r[2].w[0] - 17408u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 96u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322E58u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 264u, depth + 1u); else { c.pc = 0x0014ADA0u; return; } if (c.pc != 0x00322E58u) [[unlikely]] return; }
L_00322E58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 352u);  c.pc = t; return; }
L_00322E80:
    set32(c.r[29], c.r[29].w[0] - 416u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    c.f[1] = c.r[6].w[0];
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[0] = ld32((c.r[1].w[0] - 13224u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322ED8u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0017(c, 177u, depth + 1u); else { c.pc = 0x0015E070u; return; } if (c.pc != 0x00322ED8u) [[unlikely]] return; }
L_00322ED8:
    set32(c.r[19], c.r[16].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.f[0] = c.r[19].w[0];
    set32(c.r[16], c.r[29].w[0] + 336u);
    set32(c.r[2], c.r[2].w[0] + 21488u);
    set32(c.r[30], c.r[29].w[0] + 320u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47800000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[18], c.r[29].w[0] + 208u);
    set32(c.r[17], c.r[29].w[0] + 212u);
    set32(c.r[22], c.r[29].w[0] + 216u);
    set32(c.r[23], c.r[29].w[0] + 220u);
    set32(c.r[5], 0u + 255u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    st32((c.r[30].w[0]), c.f[0]);
    c.f[2] = ld32((c.r[1].w[0] - 13232u));
    c.f[14] = c.r[2].w[0];
    c.f[1] = c.r[21].w[0];
    set32(c.r[2], c.r[29].w[0] + 324u);
    c.f[0] = c.r[20].w[0];
    c.f[12] = fp::cvt_s_w(c.f[1]);
    st32((c.r[2].w[0]), c.f[2]);
    st32((c.r[18].w[0]), 0u);
    st32((c.r[17].w[0]), 0u);
    st32((c.r[22].w[0]), 0u);
    st32((c.r[23].w[0]), c.r[5].w[0]);
    st32((c.r[29].w[0] + 176u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 180u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 184u), c.r[3].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 37;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00322F6Cu); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00322F6Cu) [[unlikely]] return; }
L_00322F6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322F74u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_008B(c, 110u, depth + 1u); else { c.pc = 0x0032CD10u; return; } if (c.pc != 0x00322F74u) [[unlikely]] return; }
L_00322F74:
    set32(c.r[4], 0u + 96u);
    set32(c.r[3], 0u + 255u);
    st32((c.r[18].w[0]), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    st32((c.r[17].w[0]), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[22].w[0]), c.r[4].w[0]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[23].w[0]), c.r[3].w[0]);
    st32((c.r[30].w[0]), c.r[2].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 13232u));
    set32(c.r[2], c.r[29].w[0] + 324u);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.f[0]);  if (t) { goto L_00322FE0; } }
L_00322FAC:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47880000u);
    c.f[12] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.f[0] = c.r[20].w[0];
    c.f[14] = c.r[2].w[0];
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00322FD4u); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00322FD4u) [[unlikely]] return; }
L_00322FD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322FDCu); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_008B(c, 110u, depth + 1u); else { c.pc = 0x0032CD10u; return; } if (c.pc != 0x00322FDCu) [[unlikely]] return; }
L_00322FDC:
    set32(c.r[17], c.r[17].w[0] + 6u);
    c.budget -= 1;
L_00322FE0:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[21].w[0] + c.r[17].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00322FACu | kUnwind; return; } goto L_00322FAC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 21488u);
    set32(c.r[2], c.r[2].w[0] - 17408u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 160u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323010u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 264u, depth + 1u); else { c.pc = 0x0014ADA0u; return; } if (c.pc != 0x00323010u) [[unlikely]] return; }
L_00323010:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 416u);  c.pc = t; return; }
L_00323040:
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00320000u < 16384u) { entry = entries_0088[(t - 0x00320000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00323050:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003230B4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 19872u);
    set32(c.r[2], c.r[2].w[0] + 19900u);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 28u);
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323090u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x00323090u) [[unlikely]] return; }
L_00323090:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032309Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008A(c, 215u, depth + 1u); else { c.pc = 0x0032A270u; return; } if (c.pc != 0x0032309Cu) [[unlikely]] return; }
L_0032309C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003230B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003230B4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x003230B4u) [[unlikely]] return; }
L_003230B4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003230B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003230D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003230E8u); set32(c.r[4], 0u + 224u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003230E8u) [[unlikely]] return; }
L_003230E8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003230FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003230FCu);  if (depth < kMaxDepth) unit_008D(c, 55u, depth + 1u); else { c.pc = 0x00334520u; return; } if (c.pc != 0x003230FCu) [[unlikely]] return; }
L_003230FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00323110:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323128u); set32(c.r[4], 0u + 224u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00323128u) [[unlikely]] return; }
L_00323128:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0032313C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032313Cu);  if (depth < kMaxDepth) unit_008D(c, 55u, depth + 1u); else { c.pc = 0x00334520u; return; } if (c.pc != 0x0032313Cu) [[unlikely]] return; }
L_0032313C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00323150:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0031F410u | kUnwind; return; } [[clang::musttail]] return unit_0087(c, 359u, depth); }
L_00323160:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00323110u | kUnwind; return; } goto L_00323110; }
L_00323170:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0031FA80u | kUnwind; return; } [[clang::musttail]] return unit_0087(c, 412u, depth); }
L_00323180:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003230D0u | kUnwind; return; } goto L_003230D0; }
L_00323190:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003203A0u | kUnwind; return; } goto L_003203A0; }
L_003231A0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00320AC0u | kUnwind; return; } goto L_00320AC0; }
L_003231B0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 28u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00323040u | kUnwind; return; } goto L_00323040; }
L_003231C0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 28u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00323050u | kUnwind; return; } goto L_00323050; }
L_003231D0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00321A60u | kUnwind; return; } goto L_00321A60; }
L_003231E0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00321810u | kUnwind; return; } goto L_00321810; }
L_003231F0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003210C0u | kUnwind; return; } goto L_003210C0; }
L_00323200:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00322020u | kUnwind; return; } goto L_00322020; }
L_00323210:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00321DF0u | kUnwind; return; } goto L_00321DF0; }
L_00323220:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00322430u | kUnwind; return; } goto L_00322430; }
L_00323230:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003222B0u | kUnwind; return; } goto L_003222B0; }
L_00323240:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003228B0u | kUnwind; return; } goto L_003228B0; }
L_00323250:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003226A0u | kUnwind; return; } goto L_003226A0; }
L_00323260:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0032337C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 13200u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00320000u < 16384u) { entry = entries_0088[(t - 0x00320000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00323294:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032329Cu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0032329Cu) [[unlikely]] return; }
L_0032329C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[1].w[0] - 24836u));  if (t) { goto L_00323380; } }
L_003232AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003232B4u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x003232B4u) [[unlikely]] return; }
L_003232B4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[1].w[0] - 24834u));  if (t) { goto L_00323380; } }
L_003232C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003232CCu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x003232CCu) [[unlikely]] return; }
L_003232CC:
    set32(c.r[3], c.r[16].w[0] << 1);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[1].w[0] - 24832u));  if (t) { goto L_00323380; } }
L_003232E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003232ECu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x003232ECu) [[unlikely]] return; }
L_003232EC:
    set32(c.r[3], c.r[16].w[0] << 1);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[1].w[0] - 24828u));  if (t) { goto L_00323380; } }
L_00323304:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032330Cu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0032330Cu) [[unlikely]] return; }
L_0032330C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[1].w[0] - 24824u));  if (t) { goto L_00323380; } }
L_0032331C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323324u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00323324u) [[unlikely]] return; }
L_00323324:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[1].w[0] - 24822u));  if (t) { goto L_00323380; } }
L_00323334:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032333Cu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0032333Cu) [[unlikely]] return; }
L_0032333C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[1].w[0] - 24820u));  if (t) { goto L_00323380; } }
L_0032334C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323354u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00323354u) [[unlikely]] return; }
L_00323354:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[1].w[0] - 24818u));  if (t) { goto L_00323380; } }
L_00323364:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032336Cu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0032336Cu) [[unlikely]] return; }
L_0032336C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[1].w[0] - 24816u));  if (t) { goto L_00323380; } }
L_0032337C:
    set32(c.r[2], 0u + 255u);
    c.budget -= 1;
L_00323380:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00323390:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], c.r[6].w[0] - 5792u);
    set32(c.r[5], c.r[29].w[0] + 16u);
    set32(c.r[3], 0u + 2u);
    c.budget -= 6;
L_003233A8:
    ld128((c.r[6].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003233A8u | kUnwind; return; } goto L_003233A8; } }
    c.f[0] = ld32((c.r[6].w[0]));
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    st32((c.r[5].w[0]), c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003233DCu); set32(c.r[4], ld32((c.r[2].w[0] + 16u)));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x003233DCu) [[unlikely]] return; }
L_003233DC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003233F0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 5744u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[3], 0u + 2u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
L_00323418:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00323418u | kUnwind; return; } goto L_00323418; } }
    c.r[2].d[0] = ld64((c.r[5].w[0]));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st64((c.r[4].w[0]), c.r[2].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323448u); st32((c.r[4].w[0] + 8u), c.f[0]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00323448u) [[unlikely]] return; }
L_00323448:
    c.r[1].d[0] = 0ull | 40700ull;
    set32(c.r[5], 0u + 3080u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323458u); set32(c.r[4], c.r[2].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x00323458u) [[unlikely]] return; }
L_00323458:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323460u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00323460u) [[unlikely]] return; }
L_00323460:
    c.r[1].d[0] = 0ull | 40700ull;
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 3;
L_0032346C:
    c.r[1].d[0] = c.r[16].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] << 2);  if (t) { goto L_0032348C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323488u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0089(c, 9u, depth + 1u); else { c.pc = 0x003240A0u; return; } if (c.pc != 0x00323488u) [[unlikely]] return; }
L_00323488:
    set32(c.r[3], c.r[16].w[0] << 2);
    c.budget -= 1;
L_0032348C:
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[4], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[4], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[3], c.r[17].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032346Cu | kUnwind; return; } goto L_0032346C; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 80u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003234C0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 619u, depth + 1u); else { c.pc = 0x00323EA0u; return; } if (c.pc != 0x003234C0u) [[unlikely]] return; }
L_003234C0:
    set32(c.r[5], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[4], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003234D4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 619u, depth + 1u); else { c.pc = 0x00323EA0u; return; } if (c.pc != 0x003234D4u) [[unlikely]] return; }
L_003234D4:
    set32(c.r[18], c.r[29].w[0] + 88u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003234ECu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 619u, depth + 1u); else { c.pc = 0x00323EA0u; return; } if (c.pc != 0x003234ECu) [[unlikely]] return; }
L_003234EC:
    set32(c.r[19], c.r[29].w[0] + 92u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], ld32((c.r[19].w[0])));
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323504u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 619u, depth + 1u); else { c.pc = 0x00323EA0u; return; } if (c.pc != 0x00323504u) [[unlikely]] return; }
L_00323504:
    set32(c.r[16], c.r[29].w[0] + 96u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032351Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 619u, depth + 1u); else { c.pc = 0x00323EA0u; return; } if (c.pc != 0x0032351Cu) [[unlikely]] return; }
L_0032351C:
    set32(c.r[17], c.r[29].w[0] + 100u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323534u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 619u, depth + 1u); else { c.pc = 0x00323EA0u; return; } if (c.pc != 0x00323534u) [[unlikely]] return; }
L_00323534:
    set32(c.r[5], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[4], 0u + 4u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323548u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 619u, depth + 1u); else { c.pc = 0x00323EA0u; return; } if (c.pc != 0x00323548u) [[unlikely]] return; }
L_00323548:
    set32(c.r[5], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[4], 0u + 5u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032355Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 619u, depth + 1u); else { c.pc = 0x00323EA0u; return; } if (c.pc != 0x0032355Cu) [[unlikely]] return; }
L_0032355C:
    set32(c.r[5], ld32((c.r[29].w[0] + 112u)));
    set32(c.r[4], 0u + 6u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323570u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 619u, depth + 1u); else { c.pc = 0x00323EA0u; return; } if (c.pc != 0x00323570u) [[unlikely]] return; }
L_00323570:
    set32(c.r[5], ld32((c.r[29].w[0] + 116u)));
    set32(c.r[4], 0u + 7u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323584u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 619u, depth + 1u); else { c.pc = 0x00323EA0u; return; } if (c.pc != 0x00323584u) [[unlikely]] return; }
L_00323584:
    set32(c.r[5], ld32((c.r[29].w[0] + 120u)));
    set32(c.r[4], 0u + 8u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323598u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 619u, depth + 1u); else { c.pc = 0x00323EA0u; return; } if (c.pc != 0x00323598u) [[unlikely]] return; }
L_00323598:
    set32(c.r[5], ld32((c.r[18].w[0])));
    set32(c.r[4], 0u + 2u);
    set32(c.r[6], ld32((c.r[19].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003235ACu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 630u, depth + 1u); else { c.pc = 0x00323F90u; return; } if (c.pc != 0x003235ACu) [[unlikely]] return; }
L_003235AC:
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[4], 0u + 3u);
    set32(c.r[6], ld32((c.r[17].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003235C0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 630u, depth + 1u); else { c.pc = 0x00323F90u; return; } if (c.pc != 0x003235C0u) [[unlikely]] return; }
L_003235C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003235C8u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x003235C8u) [[unlikely]] return; }
L_003235C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003235F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00323648; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323614u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00323614u) [[unlikely]] return; }
L_00323614:
    set32(c.r[4], c.r[17].w[0] << 4);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] << 1);
    c.r[1].d[0] = 0ull | 40740ull;
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[1].w[0]);  if (t) { goto L_003236A8; } }
L_00323648:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_00323680; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032365Cu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0032365Cu) [[unlikely]] return; }
L_0032365C:
    set32(c.r[3], c.r[16].w[0] << 2);
    c.r[1].d[0] = 0ull | 42900ull;
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[1].w[0]);  if (t) { goto L_003236A8; } }
L_00323680:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323688u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00323688u) [[unlikely]] return; }
L_00323688:
    set32(c.r[3], c.r[16].w[0] << 2);
    c.r[1].d[0] = 0ull | 43120ull;
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 8;
L_003236A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003236C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003236EC; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_003236F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0032374C; } }
L_003236EC:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_003236F0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00323724; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323700u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00323700u) [[unlikely]] return; }
L_00323700:
    set32(c.r[3], c.r[16].w[0] << 2);
    c.r[1].d[0] = 0ull | 43340ull;
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[1].w[0]);  if (t) { goto L_0032374C; } }
L_00323724:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032372Cu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0032372Cu) [[unlikely]] return; }
L_0032372C:
    set32(c.r[3], c.r[16].w[0] << 2);
    c.r[1].d[0] = 0ull | 43560ull;
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 8;
L_0032374C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00323760:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323774u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00323774u) [[unlikely]] return; }
L_00323774:
    set32(c.r[3], c.r[16].w[0] << 1);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24814u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003237A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003237BCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x003237BCu) [[unlikely]] return; }
L_003237BC:
    set32(c.r[4], c.r[17].w[0] << 4);
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] - c.r[17].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[4], c.r[4].w[0] << 4);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24576u));
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00323800:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const bool t = c.r[19].sd[0] < 0; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00323D38; } }
    c.r[3].d[0] = c.r[19].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0032383C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00323D3C; } }
L_0032383C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323844u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00323844u) [[unlikely]] return; }
L_00323844:
    c.r[1].d[0] = 0ull | 40700ull;
    set32(c.r[16], c.r[19].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[1].w[0]);
    c.r[1].d[0] = c.r[19].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);  if (t) { goto L_00323860; } }
    set32(c.r[3], c.r[3].w[0] + 2u);
    c.budget -= 1;
L_00323860:
    c.r[1].d[0] = c.r[19].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_00323874; } }
    set32(c.r[3], c.r[3].w[0] + 2u);
    set32(c.r[2], 0u + 2u);
    c.budget -= 2;
L_00323874:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; c.r[5].d[0] = c.r[18].d[0] & 65535ull;  if (t) { goto L_0032388C; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_00323C20; } }
    c.r[5].d[0] = c.r[18].d[0] & 65535ull;
    c.budget -= 1;
L_0032388C:
    c.r[6].d[0] = c.r[17].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323898u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0089(c, 77u, depth + 1u); else { c.pc = 0x003249B0u; return; } if (c.pc != 0x00323898u) [[unlikely]] return; }
L_00323898:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[5].d[0] = c.r[18].d[0] & 65535ull;  if (t) { goto L_003238E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003238B0u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x003238B0u) [[unlikely]] return; }
L_003238B0:
    set32(c.r[3], c.r[19].w[0] << 4);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] - c.r[19].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    c.r[3].d[0] = ld16((c.r[1].w[0] - 24576u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] - 24576u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00323D38; } }
    c.r[5].d[0] = c.r[18].d[0] & 65535ull;
    c.budget -= 1;
L_003238E4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003238F0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 600u, depth + 1u); else { c.pc = 0x00323D60u; return; } if (c.pc != 0x003238F0u) [[unlikely]] return; }
L_003238F0:
    c.r[5].d[0] = c.r[17].d[0] & 65535ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323900u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0088(c, 600u, depth + 1u); else { c.pc = 0x00323D60u; return; } if (c.pc != 0x00323900u) [[unlikely]] return; }
L_00323900:
    c.r[2].d[0] = c.r[18].sd[0] < 86ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00323950; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323914u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00323914u) [[unlikely]] return; }
L_00323914:
    set32(c.r[3], c.r[18].w[0] << 3);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[5], c.r[3].w[0] - c.r[18].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], c.r[5].w[0] << 2);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 30492u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323948u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0088(c, 619u, depth + 1u); else { c.pc = 0x00323EA0u; return; } if (c.pc != 0x00323948u) [[unlikely]] return; }
L_00323948:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].sd[0] < 86ll ? 1ull : 0ull;  if (t) { goto L_00323990; } }
L_00323950:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323958u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00323958u) [[unlikely]] return; }
L_00323958:
    set32(c.r[3], c.r[18].w[0] << 1);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 3);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] - c.r[18].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 21480u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032398Cu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0088(c, 619u, depth + 1u); else { c.pc = 0x00323EA0u; return; } if (c.pc != 0x0032398Cu) [[unlikely]] return; }
L_0032398C:
    c.r[2].d[0] = c.r[17].sd[0] < 86ll ? 1ull : 0ull;
    c.budget -= 1;
L_00323990:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003239DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003239A0u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x003239A0u) [[unlikely]] return; }
L_003239A0:
    set32(c.r[3], c.r[17].w[0] << 3);
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], c.r[3].w[0] - c.r[17].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 30492u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003239D4u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0088(c, 619u, depth + 1u); else { c.pc = 0x00323EA0u; return; } if (c.pc != 0x003239D4u) [[unlikely]] return; }
L_003239D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].sd[0] < 86ll ? 1ull : 0ull;  if (t) { goto L_00323A1C; } }
L_003239DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003239E4u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x003239E4u) [[unlikely]] return; }
L_003239E4:
    set32(c.r[3], c.r[17].w[0] << 1);
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 21480u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323A18u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0088(c, 619u, depth + 1u); else { c.pc = 0x00323EA0u; return; } if (c.pc != 0x00323A18u) [[unlikely]] return; }
L_00323A18:
    c.r[2].d[0] = c.r[18].sd[0] < 86ll ? 1ull : 0ull;
    c.budget -= 1;
L_00323A1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[17].sd[0] < 86ll ? 1ull : 0ull;  if (t) { goto L_00323B0C; } }
    c.r[2].d[0] = c.r[17].sd[0] < 86ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00323A9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323A38u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00323A38u) [[unlikely]] return; }
L_00323A38:
    set32(c.r[3], c.r[18].w[0] << 3);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[4], c.r[3].w[0] - c.r[18].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323A60u); c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 30492u)));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00323A60u) [[unlikely]] return; }
L_00323A60:
    set32(c.r[3], c.r[17].w[0] << 3);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[6], c.r[3].w[0] - c.r[17].w[0]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[6].w[0] << 2);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 30492u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323A94u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0088(c, 630u, depth + 1u); else { c.pc = 0x00323F90u; return; } if (c.pc != 0x00323A94u) [[unlikely]] return; }
L_00323A94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_00323BE8; } }
L_00323A9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323AA4u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00323AA4u) [[unlikely]] return; }
L_00323AA4:
    set32(c.r[3], c.r[18].w[0] << 3);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[4], c.r[3].w[0] - c.r[18].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323ACCu); c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 30492u)));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00323ACCu) [[unlikely]] return; }
L_00323ACC:
    set32(c.r[3], c.r[17].w[0] << 1);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 3);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 21480u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323B00u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0088(c, 630u, depth + 1u); else { c.pc = 0x00323F90u; return; } if (c.pc != 0x00323B00u) [[unlikely]] return; }
L_00323B00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00323BE4; } }
    c.r[2].d[0] = c.r[17].sd[0] < 86ll ? 1ull : 0ull;
    c.budget -= 1;
L_00323B0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00323B80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323B1Cu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00323B1Cu) [[unlikely]] return; }
L_00323B1C:
    set32(c.r[3], c.r[18].w[0] << 1);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[18].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323B44u); c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 21480u)));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00323B44u) [[unlikely]] return; }
L_00323B44:
    set32(c.r[3], c.r[17].w[0] << 3);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[6], c.r[3].w[0] - c.r[17].w[0]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[6].w[0] << 2);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 30492u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323B78u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0088(c, 630u, depth + 1u); else { c.pc = 0x00323F90u; return; } if (c.pc != 0x00323B78u) [[unlikely]] return; }
L_00323B78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00323BE4; } }
L_00323B80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323B88u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00323B88u) [[unlikely]] return; }
L_00323B88:
    set32(c.r[3], c.r[18].w[0] << 1);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[18].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323BB0u); c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 21480u)));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00323BB0u) [[unlikely]] return; }
L_00323BB0:
    set32(c.r[3], c.r[17].w[0] << 1);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 3);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 21480u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323BE4u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0088(c, 630u, depth + 1u); else { c.pc = 0x00323F90u; return; } if (c.pc != 0x00323BE4u) [[unlikely]] return; }
L_00323BE4:
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_00323BE8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323BF4u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0089(c, 9u, depth + 1u); else { c.pc = 0x003240A0u; return; } if (c.pc != 0x00323BF4u) [[unlikely]] return; }
L_00323BF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323BFCu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00323BFCu) [[unlikely]] return; }
L_00323BFC:
    set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    c.r[3].d[0] = ld16((c.r[1].w[0] - 24814u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] - 24814u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00323D38; } }
L_00323C20:
    c.r[2].d[0] = ld16((c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[18].d[0]; c.r[5].d[0] = c.r[18].d[0] & 65535ull;  if (t) { goto L_00323C68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323C34u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00323C34u) [[unlikely]] return; }
L_00323C34:
    set32(c.r[3], c.r[19].w[0] << 4);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] - c.r[19].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    c.r[3].d[0] = ld16((c.r[1].w[0] - 24576u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] - 24576u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00323D38; } }
    c.r[5].d[0] = c.r[18].d[0] & 65535ull;
    c.budget -= 1;
L_00323C68:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323C74u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 600u, depth + 1u); else { c.pc = 0x00323D60u; return; } if (c.pc != 0x00323C74u) [[unlikely]] return; }
L_00323C74:
    c.r[2].d[0] = c.r[18].sd[0] < 86ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00323CC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323C88u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00323C88u) [[unlikely]] return; }
L_00323C88:
    set32(c.r[3], c.r[18].w[0] << 3);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[5], c.r[3].w[0] - c.r[18].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], c.r[5].w[0] << 2);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 30492u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323CBCu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0088(c, 619u, depth + 1u); else { c.pc = 0x00323EA0u; return; } if (c.pc != 0x00323CBCu) [[unlikely]] return; }
L_00323CBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_00323D04; } }
L_00323CC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323CCCu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00323CCCu) [[unlikely]] return; }
L_00323CCC:
    set32(c.r[3], c.r[18].w[0] << 1);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 3);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] - c.r[18].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 21480u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323D00u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0088(c, 619u, depth + 1u); else { c.pc = 0x00323EA0u; return; } if (c.pc != 0x00323D00u) [[unlikely]] return; }
L_00323D00:
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_00323D04:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323D10u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0089(c, 9u, depth + 1u); else { c.pc = 0x003240A0u; return; } if (c.pc != 0x00323D10u) [[unlikely]] return; }
L_00323D10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323D18u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00323D18u) [[unlikely]] return; }
L_00323D18:
    set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    c.r[3].d[0] = ld16((c.r[1].w[0] - 24814u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st16((c.r[1].w[0] - 24814u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 8;
L_00323D38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00323D3C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00323D60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00323E80; } }
    set32(c.r[3], c.r[4].w[0] << 2);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[4].w[0] - 13152u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00320000u < 16384u) { entry = entries_0088[(t - 0x00320000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00323D9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323DA4u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00323DA4u) [[unlikely]] return; }
L_00323DA4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] - 24836u), static_cast<std::uint16_t>(c.r[16].w[0]));  if (t) { goto L_00323E80; } }
L_00323DB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323DBCu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00323DBCu) [[unlikely]] return; }
L_00323DBC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] - 24834u), static_cast<std::uint16_t>(c.r[16].w[0]));  if (t) { goto L_00323E80; } }
L_00323DCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323DD4u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00323DD4u) [[unlikely]] return; }
L_00323DD4:
    set32(c.r[3], c.r[17].w[0] << 1);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] - 24832u), static_cast<std::uint16_t>(c.r[16].w[0]));  if (t) { goto L_00323E80; } }
L_00323DEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323DF4u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00323DF4u) [[unlikely]] return; }
L_00323DF4:
    set32(c.r[3], c.r[17].w[0] << 1);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] - 24828u), static_cast<std::uint16_t>(c.r[16].w[0]));  if (t) { goto L_00323E80; } }
L_00323E0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323E14u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00323E14u) [[unlikely]] return; }
L_00323E14:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] - 24824u), static_cast<std::uint16_t>(c.r[16].w[0]));  if (t) { goto L_00323E80; } }
L_00323E24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323E2Cu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00323E2Cu) [[unlikely]] return; }
L_00323E2C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] - 24818u), static_cast<std::uint16_t>(c.r[16].w[0]));  if (t) { goto L_00323E80; } }
L_00323E3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323E44u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00323E44u) [[unlikely]] return; }
L_00323E44:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] - 24822u), static_cast<std::uint16_t>(c.r[16].w[0]));  if (t) { goto L_00323E80; } }
L_00323E54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323E5Cu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00323E5Cu) [[unlikely]] return; }
L_00323E5C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] - 24820u), static_cast<std::uint16_t>(c.r[16].w[0]));  if (t) { goto L_00323E80; } }
L_00323E6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323E74u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00323E74u) [[unlikely]] return; }
L_00323E74:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st16((c.r[1].w[0] - 24816u), static_cast<std::uint16_t>(c.r[16].w[0]));
    c.budget -= 3;
L_00323E80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00323EA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].d[0] = c.r[7].d[0] & 255ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00323ED4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323ED4u); c.r[5].d[0] = 0ll < c.r[16].sd[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0089(c, 54u, depth + 1u); else { c.pc = 0x00324690u; return; } if (c.pc != 0x00323ED4u) [[unlikely]] return; }
L_00323ED4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_00323F18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323EE4u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00323EE4u) [[unlikely]] return; }
L_00323EE4:
    set32(c.r[3], c.r[18].w[0] << 4);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - c.r[18].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323F00u); set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012CDE0u; return; } if (c.pc != 0x00323F00u) [[unlikely]] return; }
L_00323F00:
    c.r[1].d[0] = 0ull | 40740ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323F10u); set32(c.r[4], c.r[16].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x00323F10u) [[unlikely]] return; }
L_00323F10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00323F7C; } }
L_00323F18:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_00323F50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323F28u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00323F28u) [[unlikely]] return; }
L_00323F28:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323F38u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012CDE0u; return; } if (c.pc != 0x00323F38u) [[unlikely]] return; }
L_00323F38:
    c.r[1].d[0] = 0ull | 42900ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323F48u); set32(c.r[4], c.r[16].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x00323F48u) [[unlikely]] return; }
L_00323F48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00323F78; } }
L_00323F50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323F58u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00323F58u) [[unlikely]] return; }
L_00323F58:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323F68u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012CDE0u; return; } if (c.pc != 0x00323F68u) [[unlikely]] return; }
L_00323F68:
    c.r[1].d[0] = 0ull | 43120ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323F78u); set32(c.r[4], c.r[16].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x00323F78u) [[unlikely]] return; }
L_00323F78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00323F7C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00323F90:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00323FBC; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_0089(c, 8u, depth); } }
L_00323FBC:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[5], c.r[2].w[0] << 2);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323FF0u); set32(c.r[6], 0u + 25500u);  if (depth < kMaxDepth) unit_001C(c, 327u, depth + 1u); else { c.pc = 0x001737A0u; return; } if (c.pc != 0x00323FF0u) [[unlikely]] return; }
L_00323FF0:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 22u);  if (t) { [[clang::musttail]] return unit_0089(c, 2u, depth); } }
L_00323FFC:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
    [[clang::musttail]] return unit_0089(c, 1u, depth);
}

}
